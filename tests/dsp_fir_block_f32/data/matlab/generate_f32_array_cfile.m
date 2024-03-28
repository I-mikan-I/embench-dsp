function generate_f32_array_cfile(file_name, array_name, data_array, block_size)
    delete(file_name);
    data_array_size = size(data_array);
    fileID = fopen(file_name,'w');
    % fprintf(fileID, '\n#include "test_main.h"');
    % fprintf(fileID, '\n#include "embench_math_types.h"');
    fprintf(fileID, "\n\nfloat32_t ");
    fprintf(fileID, sprintf("%s", array_name));
    fprintf(fileID, "[");
    fprintf(fileID, sprintf("%d", data_array_size(1)));
    fprintf(fileID, "] = \n{\n\t");
    for i = 1:data_array_size(1)
        if(i == data_array_size(1))
            fprintf(fileID, '%f\n', data_array(i));
        else
            fprintf(fileID, '%f, ', data_array(i));
            if(mod(i,block_size) == 0)
                fprintf(fileID, "\n\t");
            end
        end

    end
    fprintf(fileID, "};\n");
    fclose(fileID);
end