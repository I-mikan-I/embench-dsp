
#include "data.h"

float32_t output_ref[DCT4_SIZE] = 
{
   0.1696132554f, -0.0106096021f,  0.0589610287f,  0.1732537425f,  0.1068123097f,  0.2221574404f, -0.0651988491f,  0.5803768166f, 
   0.0840459048f, -0.6763082435f,  0.0277095662f, -0.2040354813f,  0.0258838075f, -0.1443744120f,  0.1462951932f, -0.1885854732f, 
  -0.0130974349f, -0.0888815447f, -0.0200912612f,  0.0817490728f,  0.0108042008f, -0.0251882926f,  0.0806393731f, -0.0508711043f, 
  -0.0025557342f, -0.0049188078f,  0.0419988164f,  0.0133182794f,  0.0566508133f, -0.0411688712f, -0.0554090233f, -0.0436051990f, 
   0.0929002846f, -0.0432136205f, -0.0610346596f,  0.0478355591f, -0.0088299035f,  0.0586107039f, -0.0796742572f,  0.0114081493f, 
   0.1338638438f,  0.0604803770f,  0.0296520897f,  0.0287511143f,  0.0150474352f, -0.0742752563f,  0.0206263296f,  0.0141855790f, 
   0.0018747004f,  0.0005297366f,  0.0668221450f,  0.0295565846f,  0.0703439166f,  0.0280189461f,  0.0191914852f,  0.0352816948f, 
   0.0438949520f, -0.0197628521f,  0.0455829549f,  0.0809821786f,  0.0798391653f, -0.0970740657f, -0.0003719462f, -0.0229102770f, 
   0.0704112977f,  0.0621846663f,  0.0278055756f,  0.0832838214f,  0.1125365047f,  0.0193672622f,  0.0434734263f, -0.0730742414f, 
   0.0024302377f,  0.0806926230f,  0.0590301814f, -0.0353031732f,  0.1403610113f,  0.0603494004f,  0.0343220170f,  0.0622551917f, 
   0.0797232363f,  0.0136030621f, -0.0418237228f, -0.0772799201f,  0.0217637912f, -0.0370824535f,  0.0852098838f, -0.0569490203f, 
   0.0247530945f, -0.0129050004f,  0.0849000013f, -0.0783032255f, -0.0156108175f, -0.0225990987f,  0.0677526747f,  0.0162801405f, 
   0.0138447920f,  0.0590976544f,  0.1202026895f,  0.0043262746f,  0.0324328889f,  0.0981805178f,  0.0458218211f, -0.0464938329f, 
   0.0082408079f,  0.0377848733f,  0.1117570323f, -0.0087570395f, -0.1110032093f,  0.0407657466f,  0.0135767627f, -0.0125486766f, 
   0.0961867434f,  0.0761050915f, -0.0028004057f,  0.0303097111f,  0.1236408233f, -0.0319297194f,  0.1097219767f,  0.0917194623f, 
   0.0181725874f, -0.0300013259f, -0.0675583764f,  0.0254176414f,  0.0066443021f,  0.0751023604f, -0.0028408250f, -0.0082200985f, 
  -0.0318483438f,  0.0796498021f, -0.0476356122f,  0.0313656463f,  0.0801809639f,  0.0810487592f,  0.0657284102f,  0.0185484536f, 
   0.0902541183f,  0.0766508364f, -0.0251918216f,  0.1310456802f, -0.0104327493f,  0.0109687566f, -0.0442525187f,  0.0482082248f, 
   0.1349125995f,  0.0319213791f, -0.0141391156f,  0.0358985581f,  0.0424275433f, -0.0401754868f,  0.1316103799f, -0.0368475534f, 
  -0.0590724459f,  0.0317602368f,  0.0361494762f,  0.0241020264f,  0.1448301143f, -0.0381907556f,  0.0406130967f, -0.0112718835f, 
  -0.0021686673f,  0.0959764697f,  0.0131396054f,  0.0020445411f, -0.0116527090f,  0.0756589844f,  0.0708588889f, -0.0583273549f, 
  -0.0205258134f,  0.0143495270f, -0.0382210215f,  0.0360814213f, -0.0141988005f,  0.0124210770f,  0.0746873272f,  0.1078306052f, 
   0.0806344823f,  0.0517534262f,  0.0269817395f,  0.0533222073f,  0.0402019459f, -0.0545308110f,  0.0210681761f,  0.1850823739f, 
  -0.0694721052f,  0.0234651759f, -0.0469806849f,  0.0024835687f,  0.0465305200f,  0.0459022083f, -0.0060606510f, -0.0031005373f, 
  -0.0187658230f, -0.0212431610f,  0.0690272193f,  0.0472362131f,  0.0561867925f,  0.0072685262f,  0.0304949278f,  0.1163382818f, 
  -0.0891238358f, -0.0383510286f, -0.0660174745f, -0.0284328234f,  0.0359470299f,  0.1011823952f, -0.0403054654f,  0.0437636740f, 
   0.0603832757f,  0.0093981228f, -0.0624259212f,  0.0657664879f,  0.0556038705f, -0.0251876806f,  0.0108804788f,  0.0032143085f, 
  -0.0123855117f, -0.0328352239f,  0.0075402584f,  0.0219027519f, -0.0353770459f,  0.0155090218f,  0.0051685225f,  0.0158270140f, 
   0.0681717646f,  0.0986111554f, -0.0891553418f,  0.0285535653f,  0.1233887360f, -0.0315173329f,  0.1015445618f,  0.0642837783f, 
   0.0472115567f,  0.0555972720f,  0.0697316819f, -0.0019165493f, -0.0615088436f,  0.0522214560f,  0.0277816358f,  0.0156150749f, 
   0.0372310658f,  0.0356164256f,  0.0407740678f, -0.0084470151f,  0.0541102286f, -0.0248163967f,  0.0406466782f, -0.0797453562f, 
   0.0705300470f,  0.0157875431f,  0.0038611830f,  0.0455833443f,  0.0339510603f, -0.0130252108f, -0.0234774769f,  0.0045780167f, 
   0.0623149507f, -0.0444970280f, -0.0304158736f,  0.0769419819f, -0.0103571975f, -0.0130929144f,  0.0021945895f,  0.0444301243f, 
  -0.0147726789f,  0.0714619696f, -0.0060102301f, -0.0745779237f, -0.0202679299f, -0.0108555123f,  0.0411017343f,  0.1017378830f, 
   0.0145639215f,  0.0978870320f,  0.0783858104f,  0.0694857222f,  0.0769151826f, -0.0193890837f, -0.0368862121f,  0.0180062267f, 
  -0.0876610237f, -0.0160235760f,  0.1145407671f,  0.0527405128f,  0.0552985954f, -0.1420630836f,  0.0139814575f,  0.0577967068f, 
   0.0111934414f, -0.0280955097f,  0.0676891833f,  0.1108319030f,  0.0602612761f,  0.0938620992f,  0.0397790149f,  0.0056551416f, 
  -0.0370704540f, -0.0071028374f,  0.0936490782f,  0.0038372859f,  0.1479399899f,  0.0297781545f,  0.0665231152f,  0.0300948466f, 
   0.0557758495f, -0.0706708588f, -0.0203833321f,  0.1565543914f,  0.0444381703f, -0.0020626589f,  0.0159613542f, -0.0861176225f, 
   0.1568833165f, -0.0892367549f,  0.0789907201f,  0.0139971709f,  0.0451962705f,  0.0720595459f,  0.1229552345f,  0.0349614636f, 
   0.0456177690f, -0.0002415166f, -0.0023107115f,  0.0178848760f,  0.0323650072f,  0.0909326375f,  0.1699378016f,  0.0161650897f, 
   0.1718470944f,  0.0210006032f,  0.0742199736f, -0.0408200441f,  0.2430376521f, -0.0064590863f,  0.2700657469f,  0.0088662165f, 
   0.3828742188f,  0.0415338415f,  0.5974354436f,  0.1546757231f,  2.0661092226f, -1.6683960262f, -1.5015898989f, -0.1065332212f, 
  -0.4614060844f, -0.1200974155f, -0.4284808187f,  0.0423664474f, -0.1800989079f,  0.0223009868f, -0.0625186998f,  0.0502831202f, 
  -0.1654745000f, -0.0148883001f, -0.2232519169f, -0.0719942669f, -0.1258352245f,  0.0229952664f, -0.0973635411f,  0.0070368138f, 
  -0.0790160142f,  0.0314313314f, -0.0942836074f, -0.0156725347f, -0.0274950692f, -0.0456132043f, -0.0466962576f,  0.0297495889f, 
   0.0051734351f,  0.0003291256f, -0.0372324720f,  0.0264049674f,  0.0794401497f, -0.0228815343f, -0.0314787281f,  0.0311642664f, 
  -0.1548245067f,  0.0508010586f, -0.0280583110f,  0.0326517403f, -0.0636471535f, -0.0127687536f, -0.0703766256f, -0.0049640808f, 
  -0.0088409317f,  0.0110988938f,  0.0700228239f,  0.0796891632f, -0.0711353632f, -0.0254625439f, -0.0162893355f,  0.0251827814f, 
   0.0211113713f,  0.1631034718f,  0.0191913865f,  0.0440975389f, -0.0055900227f, -0.0175168080f, -0.1271774684f, -0.0304690885f, 
   0.1148842358f, -0.0670286898f,  0.0965785540f, -0.0614269396f, -0.0731583766f,  0.0533565019f, -0.0146700860f,  0.0537683362f, 
  -0.0467328492f,  0.0648004727f, -0.0340608742f, -0.0515229828f,  0.0574449669f, -0.0722161819f,  0.0102094380f,  0.1036879268f, 
  -0.0086680033f,  0.0270020879f, -0.0060720355f, -0.1281709262f,  0.0426770759f,  0.1218791355f,  0.0428081294f,  0.0601497835f, 
   0.0290912922f, -0.0933631035f,  0.0376357756f,  0.0586377659f,  0.0526278472f,  0.0207113091f,  0.0059288440f, -0.0384225664f, 
  -0.0075468960f,  0.0134224427f,  0.0537264469f,  0.0140039502f, -0.0826766055f, -0.0536026518f, -0.1057092415f,  0.0654681132f, 
   0.0325648630f,  0.0670617767f, -0.0478126556f,  0.0676533272f, -0.0085207606f,  0.0647042450f, -0.0066197553f, -0.0087995473f, 
  -0.0984260159f,  0.0385020323f, -0.0455174267f,  0.0013268605f,  0.0561846882f, -0.0389851527f,  0.0184351253f, -0.0036036531f, 
   0.0909279526f, -0.0850686840f, -0.0048127104f,  0.0129937114f,  0.0286260186f,  0.0444577847f, -0.0688324175f,  0.0586159071f, 
   0.0784560417f, -0.0596709302f,  0.0710611082f,  0.0666100971f, -0.0103842420f, -0.0482541975f, -0.0439397519f,  0.0685563779f, 
   0.0690972981f, -0.0328928769f, -0.0465042222f, -0.0006044670f, -0.0588801545f, -0.0584167167f,  0.0054427345f,  0.0023912135f, 
   0.0002783245f,  0.0044715778f, -0.0959612292f,  0.0020520026f,  0.0016886776f,  0.0082750887f,  0.0111108912f,  0.0276490217f, 
   0.1178544215f,  0.1322753077f, -0.0331630994f,  0.0698486059f, -0.0692350347f,  0.0376688749f,  0.0394321469f, -0.0147599587f, 
   0.0375732705f, -0.0147203117f,  0.0022955818f,  0.1665343816f, -0.0547717722f,  0.0083226239f,  0.0178627391f,  0.0269307824f, 
   0.0079301693f,  0.0874843958f, -0.0149995857f,  0.1243604318f,  0.0319803730f,  0.1636088891f,  0.0610888971f, -0.0047504251f, 
  -0.0382905444f,  0.0660887221f, -0.0747695882f, -0.0355249752f, -0.0006979223f,  0.0436649215f, -0.0651951938f,  0.0122669590f, 
   0.0113805872f, -0.0314988284f,  0.0347344338f,  0.0752605499f, -0.0040219957f,  0.0543657561f,  0.0430703676f,  0.0351989746f, 
  -0.0549542434f, -0.0442626268f, -0.0099031183f,  0.0437508862f, -0.0482774822f, -0.0054163665f, -0.0573290005f, -0.0019471681f, 
   0.0196684017f,  0.1073744441f,  0.0548745085f,  0.0974747956f, -0.1373822230f,  0.0815726973f,  0.0533887859f,  0.0138898774f, 
   0.0174125947f, -0.0218994489f,  0.0627499120f,  0.0729751808f,  0.0302193963f,  0.0559859544f,  0.0304527218f,  0.0588262730f, 
   0.0065899131f, -0.0219727926f, -0.0159696313f,  0.1304848758f, -0.1855784511f,  0.0304469892f, -0.0732429400f,  0.0460801209f, 
  -0.0061860919f,  0.0667133904f, -0.1105741405f,  0.0921739528f, -0.0857580949f,  0.0697113316f, -0.0862343821f,  0.0421922929f, 
  -0.0121372976f,  0.0339196428f,  0.0057454657f,  0.0907790027f, -0.0034468896f,  0.1514098565f, -0.0150463681f,  0.0117768721f, 
  -0.0199970336f,  0.0516247896f, -0.0176263395f,  0.0811904576f,  0.0089887652f,  0.0995403580f, -0.1044112431f,  0.1097570686f, 
   0.0184255125f,  0.1440119682f, -0.0283032662f,  0.0734672746f, -0.0742782616f,  0.1221213389f, -0.0374569284f,  0.0486387435f, 
  -0.0690300890f,  0.1303846466f,  0.0469908988f,  0.0614337289f,  0.0341545874f,  0.0519593908f, -0.0038385376f,  0.0252932100f, 
  -0.0095383488f, -0.0483108115f,  0.0142040127f,  0.1932048388f,  0.0247161381f,  0.1104351595f, -0.0216336353f,  0.0121384374f, 
  -0.0689608340f,  0.1304851357f,  0.0126428617f,  0.1414971509f,  0.0388953659f,  0.1646437053f,  0.0454728473f,  0.0811493535f, 
   0.0460507375f,  0.1227262472f,  0.0214133562f,  0.0866095983f, -0.0537099199f,  0.1281552797f, -0.0111538162f,  0.2024447108f, 
  -0.0644520941f,  0.1241344122f,  0.0196174820f,  0.0444974124f, -0.0434335290f,  0.1185749706f,  0.0609973539f,  0.0906531853f, 
   0.0137431392f,  0.0448470988f,  0.0623625783f,  0.0859429195f, -0.0584430348f,  0.1378490301f,  0.0301347474f,  0.0699307373f, 
  -0.0415409414f,  0.0547513632f,  0.0450624582f,  0.1479476870f, -0.0106908692f,  0.1215964747f, -0.0174052048f,  0.0978550620f, 
   0.0135922424f,  0.2034510971f,  0.0230283492f,  0.2519861227f, -0.0360674815f,  0.1192052635f, -0.0688228263f,  0.1402984983f, 
   0.0248828079f,  0.2328186094f, -0.0712912863f,  0.2848095879f,  0.0154175438f,  0.2424675124f, -0.0005682387f,  0.2321388489f, 
   0.0347427859f,  0.2911550017f,  0.0099583158f,  0.3603814018f,  0.0304653357f,  0.3538706540f,  0.0048749660f,  0.4763923619f, 
  -0.1142405649f,  0.6503555703f, -0.1432876792f,  0.8004261579f, -0.0873422395f,  1.2751890021f, -0.1458797623f,  1.9488889922f, 
  -0.2037121799f,  5.2268491012f, -2.5053144435f, -7.1597394880f,  0.2893990356f, -2.1555033267f,  0.1815903949f, -1.1688964963f, 
   0.1641001092f, -0.7974213638f,  0.1180689784f, -0.7796360153f,  0.0268370054f, -0.5169518191f,  0.0265206040f, -0.4795028947f, 
   0.0122888429f, -0.4219382040f,  0.0705332864f, -0.3845647177f,  0.0514217396f, -0.3749943267f,  0.0094828624f, -0.2549254854f, 
  -0.0330558163f, -0.2561349847f, -0.0227689272f, -0.1970015562f,  0.0348647617f, -0.1379872324f,  0.0576404393f, -0.1100582857f, 
   0.0013773742f, -0.2285430965f, -0.0901004216f, -0.2175113224f,  0.0122275723f, -0.2117795146f, -0.0983841780f, -0.1908423179f, 
   0.0468108130f, -0.2207430643f, -0.1492017123f, -0.1317543289f,  0.0480389772f, -0.0408406637f,  0.0448699109f, -0.1191461113f, 
  -0.0072417142f, -0.1224789624f,  0.1010173051f, -0.2187149339f,  0.0340094311f, -0.2656816516f, -0.0103697348f, -0.0168016107f, 
  -0.0248725878f, -0.1178073534f,  0.0413733274f, -0.1960583280f, -0.0206374967f, -0.0957718582f, -0.1002675678f, -0.0403772831f, 
   0.1056891242f, -0.0788275966f,  0.0077425325f, -0.1460419358f,  0.0512785932f, -0.0789313654f, -0.0179016702f, -0.0067830412f, 
   0.0422269025f, -0.0001142537f, -0.0599483570f, -0.0296976813f,  0.0319053461f, -0.1228102480f,  0.0685575345f,  0.0233512748f, 
   0.0670452339f, -0.0481200001f,  0.0514191984f, -0.0726739639f,  0.0100658036f, -0.1722034067f, -0.0199123530f, -0.0146342803f, 
  -0.0294203768f, -0.0451648393f,  0.0402213925f, -0.0763985023f,  0.0837602869f, -0.1323546450f, -0.1014808036f, -0.1779759097f, 
  -0.0567021691f, -0.0223717661f, -0.0637075167f, -0.0155505376f,  0.0064633043f, -0.1033979712f,  0.0459590856f, -0.0358875507f, 
  -0.0512608628f, -0.0651862502f,  0.1143010053f, -0.1221032194f,  0.0227041061f, -0.0203428490f,  0.0093961489f, -0.0557793152f, 
   0.1529340779f, -0.0640503844f,  0.0343915795f, -0.1363900313f,  0.0585873089f, -0.0357749125f, -0.0149905214f, -0.0106152604f, 
   0.0706982168f,  0.0052319654f,  0.0817732762f, -0.1483056866f, -0.0037551617f, -0.0375083933f, -0.0284610948f, -0.0430155479f, 
   0.0032561654f, -0.0608407457f,  0.0273220859f,  0.0162205199f,  0.0561143231f, -0.0552234048f, -0.0183642695f, -0.0086784205f, 
  -0.0628972791f, -0.1251205200f, -0.0558312234f,  0.0177805162f,  0.0648144116f, -0.0537620837f, -0.0473909532f, -0.0245407533f, 
   0.0152020796f, -0.1361689796f,  0.0565490832f, -0.1005047206f, -0.0482947583f, -0.0258843251f, -0.0643584341f, -0.0804370715f, 
   0.0186161509f, -0.1296284197f,  0.0136716098f, -0.0629772163f,  0.0338700605f, -0.0373140799f,  0.0927768772f, -0.0986950717f, 
  -0.0088990180f, -0.1174629777f,  0.0547840968f,  0.0117871463f, -0.0609453943f, -0.1253939392f,  0.0514416367f,  0.0238637742f, 
  -0.0528035755f, -0.0929859385f, -0.0566822871f, -0.0010027906f,  0.0073192682f,  0.0248158562f, -0.0106878819f,  0.0065345633f, 
  -0.0109559815f, -0.0656641752f, -0.0531948436f, -0.0425418320f,  0.0177034688f, -0.0697395423f,  0.0015078380f, -0.0301676455f, 
  -0.0397273715f, -0.1355509289f,  0.0176567333f, -0.0918997797f, -0.0489708936f, -0.0694240014f, -0.0457800621f, -0.0660723775f, 
  -0.0168629314f, -0.0367943271f,  0.0834254748f, -0.0331478334f,  0.0119316232f, -0.0869008240f, -0.0938157459f, -0.0184067434f, 
   0.0071446827f,  0.0050123934f, -0.0269161811f, -0.0512166453f, -0.0294122944f, -0.1476827385f, -0.0680741844f,  0.0924974719f, 
  -0.0090698656f, -0.0584945871f,  0.0872857898f, -0.0582069751f,  0.0586951979f,  0.0558145887f, -0.0594548574f, -0.0067965803f, 
  -0.0538573248f,  0.0136377404f,  0.0027466557f,  0.0111947628f, -0.0275460160f, -0.0874920721f,  0.0092955104f, -0.1602905444f, 
   0.0059041511f,  0.0509676909f,  0.1010115918f,  0.0781766795f,  0.0127504615f, -0.0535992392f,  0.0502467315f, -0.0207706533f, 
   0.0411319093f, -0.0139900634f, -0.0718761923f,  0.0042228083f, -0.0385714183f, -0.0461702816f, -0.1276716524f, -0.0346080212f, 
   0.0448718956f, -0.0106151241f, -0.0637753359f,  0.0084214541f, -0.0917450443f,  0.0847407956f,  0.0157140403f,  0.0483188150f, 
  -0.0980689237f, -0.0623455342f, -0.0026653254f, -0.0763477150f,  0.1297140764f, -0.0664102543f, -0.0710073189f,  0.0279885426f, 
  -0.0819942058f, -0.0312335451f,  0.0295620313f, -0.0415046362f,  0.0776700541f,  0.0285509652f, -0.0003744899f, -0.0930670739f, 
   0.0348006999f,  0.0559069616f, -0.0652121206f,  0.0246378410f,  0.0114436926f, -0.0915595855f, -0.0273259044f, -0.0028369717f, 
   0.0158430318f,  0.0278858795f, -0.0475815443f, -0.0706287561f,  0.0956195454f,  0.0635858710f,  0.0574972190f,  0.0135803611f, 
   0.0097911195f,  0.0225222591f, -0.0075137637f,  0.0033356914f,  0.0663176937f, -0.0729793525f,  0.0562150921f, -0.0632780801f, 
  -0.0107244590f, -0.0450371116f, -0.0786465157f, -0.0456582764f,  0.0616492148f, -0.0383563913f, -0.0151595897f, -0.0207544854f, 
   0.0411451743f,  0.0322524470f, -0.0404446897f, -0.0461936031f,  0.0094153618f, -0.1168239919f, -0.0116372840f,  0.0348765499f, 
  -0.0006969017f, -0.0918079148f,  0.1057510810f, -0.0029545630f, -0.0187404604f, -0.0527499248f,  0.0177081619f,  0.0410970984f, 
  -0.0093326733f, -0.0575273903f,  0.0168182731f, -0.0209677150f, -0.0021583360f, -0.0581523973f,  0.0336540920f, -0.1201482436f, 
  -0.0301996451f,  0.0190894068f,  0.1053213402f, -0.0574460508f, -0.0095306657f, -0.0063900220f, -0.0197616466f, -0.0397010776f, 
   0.1093531165f, -0.0293472614f,  0.0538170709f, -0.0743846726f,  0.0479811877f, -0.0579010336f,  0.0080390759f,  0.0616452593f, 
  -0.0001125498f, -0.0777806853f,  0.0273902340f,  0.0307312014f,  0.0802774315f, -0.0624617351f, -0.0164713579f, -0.0158836861f, 
  -0.0023604940f,  0.0172631197f, -0.0065776060f, -0.0109321230f,  0.0217000845f, -0.0512494847f,  0.0062717614f,  0.0282630983f, 
   0.0086815327f,  0.0258777760f, -0.0726548201f, -0.0673729208f,  0.1025512114f, -0.0933631840f, -0.0036004244f,  0.0498009588f, 
   0.1026870903f,  0.0304386639f, -0.0034636365f,  0.0197607381f, -0.0052726051f, -0.0364972484f,  0.0202980028f,  0.0141155632f, 
   0.0699667043f, -0.0228553707f,  0.1050549309f,  0.0518826691f, -0.0095332294f,  0.0282154262f, -0.0187649642f, -0.0245025445f, 
  -0.0219471775f, -0.0038196803f, -0.0589477537f, -0.0291325589f, -0.0394260630f, -0.0965992251f, -0.0019071168f, -0.0413338641f, 
  -0.0080881974f, -0.0484399786f, -0.0593201353f,  0.0103876357f,  0.0350138620f,  0.0126699346f,  0.0216639987f, -0.0040672081f, 
   0.0321025927f, -0.0446364115f, -0.0104302124f, -0.0299356840f, -0.1117969550f,  0.0613862697f, -0.0283627519f,  0.0211161521f, 
   0.0383555380f,  0.0374378982f, -0.0194773481f, -0.1903730887f, -0.0972954803f,  0.0020153617f, -0.0005099264f,  0.0758311064f, 
  -0.0529972863f,  0.0683221728f, -0.0470429117f, -0.0608616382f,  0.0889275293f, -0.0764291534f, -0.0344835414f,  0.0284543837f, 
  -0.0361443015f, -0.0020572097f, -0.0933733951f,  0.0337365522f,  0.1073692457f, -0.0679534116f,  0.0134311060f, -0.0338173440f, 
  -0.0687136486f, -0.0664555278f, -0.0446588546f, -0.0222968415f,  0.0753642138f, -0.1364221368f,  0.0547299615f, -0.0590370530f, 
   0.0151747236f,  0.0851236337f, -0.0860730283f, -0.0094174832f,  0.0438143180f,  0.0440094658f, -0.0289272159f, -0.0062332546f, 
   0.0973797427f, -0.0263982145f, -0.0168524255f, -0.0368916666f, -0.0564138739f,  0.0776946443f,  0.0535026966f, -0.0444698099f, 
  -0.0340144047f,  0.0443979353f, -0.0006346430f,  0.0719737914f,  0.0324288341f, -0.0202029778f, -0.0285955763f,  0.0580151607f, 
   0.0589759547f,  0.0780682596f,  0.0312016101f,  0.0987371852f, -0.0266789622f, -0.0944730398f,  0.0312887969f, -0.0289731454f, 
  -0.0261943910f, -0.0624166067f, -0.0695354556f,  0.0194379137f,  0.0152727676f,  0.0596718540f,  0.0495330819f,  0.0095573133f, 
   0.0173686990f, -0.0010761951f,  0.0635817475f, -0.0079779481f,  0.0149960972f, -0.1048033056f,  0.0499911708f, -0.0339654075f, 
  -0.0040123811f, -0.0233774180f,  0.0122794591f, -0.0887518023f,  0.0137048678f, -0.0435107112f,  0.1142841262f, -0.0325626026f, 
  -0.0335819027f,  0.0001600806f,  0.0866092641f, -0.0536424022f, -0.1108448077f,  0.0030104788f,  0.0677531308f,  0.0118090208f, 
   0.0238683872f, -0.0529776779f, -0.0008289389f,  0.0063016467f,  0.0028334702f,  0.0026855152f,  0.0811925107f,  0.0346999870f, 
  -0.0153294165f,  0.0580126251f,  0.0104863366f, -0.0414623866f,  0.0138083272f, -0.0281657188f, -0.0597033911f,  0.0976991781f, 
   0.0552326876f, -0.0577129696f, -0.0371461687f,  0.0506323051f,  0.0145188750f, -0.0859785835f,  0.0524425853f,  0.0820646855f, 
   0.0517421070f,  0.0427639706f,  0.0705333626f, -0.0406279230f, -0.0154376283f, -0.0134450696f,  0.0629854279f, -0.1019784383f, 
   0.0418367777f,  0.0425020749f,  0.0285348885f, -0.0868040902f,  0.0827279309f,  0.0209408904f, -0.0168883247f,  0.1221198424f, 
  -0.0272000930f, -0.0095651863f,  0.0466240372f,  0.0472991252f, -0.1265192635f, -0.0593193019f, -0.0443951411f, -0.0261092692f, 
  -0.0865324257f,  0.0616410723f, -0.0268185378f, -0.0001597113f,  0.0236120541f, -0.0403622132f, -0.0251560806f, -0.0639410292f, 
  -0.0125354726f,  0.0542624257f,  0.0705614537f, -0.0221805255f,  0.0597567324f,  0.0306550268f, -0.0678231397f, -0.0260053264f, 
   0.0301870782f, -0.0373345597f, -0.1085455013f,  0.0068600953f,  0.0567186386f,  0.0870701888f, -0.0224309182f,  0.0397657796f, 
   0.0138736195f,  0.0273434657f, -0.0595269263f, -0.0049431112f, -0.0028937768f, -0.0190381358f, -0.0671877803f, -0.0002158613f, 
  -0.0017507614f,  0.0370412407f, -0.0375750579f, -0.0022742763f, -0.1567410558f, -0.0204083254f,  0.0498824212f, -0.1111836004f, 
  -0.0237875458f,  0.0951156613f,  0.0582563529f, -0.0143593862f, -0.0495017473f,  0.1190855115f,  0.1012591351f, -0.0004545152f, 
   0.0453026250f, -0.0160148559f,  0.0139289881f, -0.0540640840f,  0.1460743068f,  0.0051794572f,  0.0030600692f, -0.0200667916f, 
   0.0803901200f, -0.0989933025f,  0.0364075535f,  0.0520293968f,  0.0274289292f, -0.0474203283f, -0.0804528085f, -0.0550578500f, 
  -0.0306159955f, -0.0223501523f,  0.1383763428f, -0.0459352117f,  0.0177355340f, -0.0548086688f, -0.1236623268f,  0.0845618841f, 
   0.0029743417f, -0.0105684705f, -0.0186509414f,  0.0356418188f,  0.0280799483f, -0.0051592716f, -0.0013326417f,  0.0191427553f, 
   0.1078013536f,  0.0002114178f,  0.0685619302f,  0.0467808886f,  0.0493964930f,  0.0742408439f, -0.0551862352f, -0.0211200545f, 
   0.0306141244f,  0.0058168851f,  0.0305171750f,  0.0409555620f, -0.0939661466f, -0.0786607553f,  0.0218632026f,  0.0610515615f, 
  -0.0023321320f, -0.0538889713f, -0.0698212191f,  0.0727322452f,  0.0090358999f, -0.0181904193f,  0.0984306164f, -0.0085281326f, 
   0.0311615105f, -0.0070323502f, -0.0539205012f, -0.0378800805f,  0.1302106671f,  0.0192433049f, -0.0133180851f, -0.0006712281f, 
  -0.0218900904f, -0.0356575224f,  0.0672358656f, -0.0142977756f,  0.1252790070f,  0.0662514853f,  0.0174693162f,  0.0470710611f, 
   0.0299455772f, -0.0730020027f, -0.1037715296f, -0.0409883678f,  0.0873376436f,  0.0737017871f,  0.0050203961f,  0.0243133158f, 
  -0.0200704043f,  0.0022237134f, -0.1130442035f,  0.0596128172f, -0.0942736853f, -0.0126092783f,  0.0478547494f, -0.0455309387f, 
  -0.0949308861f, -0.0303783639f,  0.0737251486f, -0.0473475491f,  0.1277083162f,  0.0773561884f,  0.0097680597f,  0.0840302621f, 
   0.0107911200f, -0.0578071408f,  0.0140902811f, -0.0047178810f,  0.0042571413f, -0.1187793445f, -0.0517962668f, -0.0770652528f, 
   0.0729924367f, -0.0473330769f,  0.0325462574f, -0.0124194610f,  0.0436331328f,  0.0243321779f,  0.0432720152f, -0.0115032408f, 
   0.0016916448f, -0.0216185987f,  0.0646111393f, -0.0928221187f,  0.0060361146f, -0.0308927396f, -0.0641753747f,  0.1605672130f, 
  -0.0036998242f,  0.0180600622f,  0.0415366814f,  0.0176804540f,  0.0208866670f,  0.0225678144f,  0.0756331814f, -0.0639037447f, 
  -0.0561725568f, -0.0709670737f, -0.1049048120f, -0.0147880618f, -0.0142732769f,  0.0383089701f,  0.0659823548f,  0.0027494108f, 
   0.0461875771f,  0.0344771345f, -0.0080618581f, -0.0246068542f,  0.0304397752f,  0.0230728746f,  0.2009594522f, -0.1240774230f, 
  -0.0138788379f, -0.0188628521f, -0.0340691245f, -0.0389466667f, -0.0887343490f, -0.0460272074f, -0.0695560165f, -0.0538006686f, 
   0.0635362907f, -0.0040293828f, -0.0372756546f,  0.0042059855f,  0.0588141027f, -0.0621973725f,  0.0304356625f,  0.0062990696f, 
   0.0432691358f, -0.0194018018f,  0.0636877093f,  0.0160401911f, -0.0933941743f,  0.0808345701f, -0.0521022583f, -0.0016176364f, 
   0.0687552190f, -0.0046716620f,  0.0289195577f,  0.0019824668f,  0.0129145056f,  0.0113623800f,  0.0464196172f,  0.1076816279f, 
  -0.0129397315f, -0.0201796051f, -0.0321737259f, -0.0304925194f,  0.0705588613f,  0.0519880039f, -0.0022805935f,  0.0782564249f, 
   0.0005760568f, -0.0508821755f, -0.0644631235f, -0.0674370005f,  0.0561625511f, -0.0584770478f, -0.0676131345f,  0.0272297996f, 
   0.0452025556f,  0.0095905888f,  0.0279204609f,  0.0228175016f,  0.0585804848f,  0.0594340753f, -0.0297574694f, -0.0527593674f, 
   0.0328830205f, -0.0170784827f, -0.0279800978f,  0.0021061375f, -0.0835490438f, -0.0703134606f, -0.0488461691f, -0.0398073051f, 
  -0.0887840706f, -0.0273599398f,  0.0284681484f, -0.0704185519f,  0.0857562473f, -0.0126199250f, -0.0632728055f,  0.0256237971f, 
  -0.0588449993f,  0.0046391685f,  0.0009510263f, -0.1160930293f, -0.0077906570f, -0.0128942123f, -0.0834595996f, -0.0542376856f, 
  -0.0476799065f, -0.1059482393f,  0.0612587817f, -0.0088417256f, -0.0142899355f, -0.1202002127f, -0.0406292408f, -0.0535615797f, 
   0.1189657358f,  0.0000368231f,  0.0140947797f,  0.0421433697f, -0.0320044096f, -0.0671081409f,  0.0309580905f, -0.0171885876f, 
  -0.0745486480f,  0.0152231613f, -0.0216561767f,  0.0735528274f,  0.0538673486f,  0.0699671974f, -0.0234103104f,  0.0166171669f, 
  -0.0988616013f, -0.0354564849f,  0.0744434685f,  0.0007333679f,  0.0110663059f, -0.1248913014f, -0.0054044317f, -0.0634220027f, 
  -0.0258182013f,  0.0039439044f,  0.0031679539f, -0.0443261946f, -0.0317203177f, -0.0062344982f,  0.0005781104f,  0.0244355809f, 
  -0.1148074003f,  0.0401989033f,  0.0476295061f,  0.0749588547f, -0.0311289319f,  0.0493541917f, -0.0626720869f, -0.0537858997f, 
   0.0520946694f, -0.0000939303f,  0.0060123236f,  0.0915813223f, -0.0552177286f, -0.0429712848f, -0.0452066791f, -0.0412571905f, 
   0.0379433147f, -0.0099233123f, -0.0052267095f, -0.0214079377f, -0.1860886243f,  0.0423694707f,  0.0188091800f, -0.0608667867f, 
  -0.0280968800f,  0.0168992318f, -0.0132862853f, -0.0272224671f,  0.1131726190f,  0.0971077140f,  0.0288851260f,  0.0320953786f, 
   0.1464331723f,  0.0425247162f,  0.1050589027f, -0.0347908210f, -0.0921601851f,  0.0289265890f, -0.0614081672f,  0.0429906457f, 
  -0.0017814003f,  0.0990509059f, -0.1654833518f,  0.0157566797f, -0.0971379878f,  0.0362747654f,  0.0727156390f, -0.1134644475f, 
  -0.0047346931f, -0.0497424680f, -0.0167457832f, -0.0479916736f, -0.0035200841f, -0.0568505287f,  0.0986821745f, -0.0691379276f, 
  -0.0197012229f, -0.0671600651f,  0.0313610893f,  0.0143381509f,  0.0542922819f,  0.0366212463f, -0.0824923832f,  0.0891182786f, 
   0.0466942180f,  0.0070777147f, -0.0085393565f, -0.0578842200f, -0.0617684139f,  0.0114594135f,  0.0441513526f, -0.0157495774f, 
  -0.0285154794f, -0.0131463372f, -0.0513448438f,  0.0328373672f, -0.0832885697f,  0.0778160796f,  0.0650133256f, -0.0100335595f, 
  -0.0082404352f,  0.1229154433f,  0.0414917589f,  0.0106824513f,  0.0812226029f, -0.0180272348f, -0.0349500501f,  0.0535932341f, 
  -0.0648585743f,  0.0682564171f,  0.0491618633f,  0.0703267553f, -0.0484862276f, -0.0607816375f,  0.0194061013f, -0.0875178956f, 
   0.1124703627f,  0.0745689740f, -0.0033020566f, -0.0176256943f, -0.0255397377f, -0.0976927276f,  0.0486746771f, -0.0184030343f, 
  -0.0848586837f, -0.0021954223f,  0.0492626495f,  0.0934293703f,  0.0195587403f,  0.0670229457f, -0.0275029617f, -0.0880429523f, 
  -0.0802284177f, -0.0592133374f,  0.0094516735f, -0.0261980277f,  0.0239394555f,  0.0777269306f,  0.0015213358f,  0.0119217114f, 
  -0.0123311898f,  0.0247773523f,  0.0568395585f,  0.0405159368f,  0.0532913093f,  0.0354653962f,  0.0008429509f, -0.0872684094f, 
   0.0005479992f,  0.0767277845f,  0.0154846588f, -0.1004117973f,  0.0382384854f,  0.0389129895f, -0.0867329555f,  0.0350660815f, 
  -0.0048491144f,  0.0029595660f,  0.0442649538f, -0.0219503866f,  0.0666494513f, -0.0933513877f,  0.0218862822f,  0.0049023411f, 
   0.0111995619f, -0.0369279135f, -0.0127256501f,  0.0670171127f, -0.0185851391f,  0.0234990588f, -0.0500806701f,  0.0194858206f, 
   0.0261717922f,  0.0049167040f,  0.0655296547f, -0.0417585021f,  0.1128653651f,  0.0106900184f,  0.0177917039f, -0.0435756351f, 
   0.1238013335f, -0.0384507431f,  0.0851681376f, -0.0157407509f,  0.0194433503f, -0.1038011831f, -0.0842906841f, -0.1229900319f, 
   0.0220151674f,  0.0116748857f, -0.0168634287f, -0.0453711483f, -0.0096655877f,  0.0029742355f,  0.0304150348f,  0.0003900558f, 
   0.0459466144f,  0.0377933560f, -0.0620287612f, -0.0856889584f, -0.0871508597f, -0.0578899037f,  0.0037030269f,  0.0613412570f, 
  -0.0460691904f, -0.1197092368f, -0.0578870252f,  0.0997593414f,  0.0482533361f, -0.0397150544f,  0.0663400302f,  0.0225985053f, 
  -0.0791804816f,  0.0076607119f,  0.0336715939f, -0.0450371947f,  0.0197741262f, -0.0539946952f,  0.0856141262f,  0.0097433882f, 
  -0.0899026994f, -0.0724502168f,  0.0119322087f,  0.0170577367f,  0.0560890530f, -0.0289601367f,  0.0298376600f, -0.0674572192f, 
   0.0759328548f, -0.0228235179f, -0.0490346077f, -0.0376667946f, -0.1018969017f,  0.0035542438f, -0.0603833124f, -0.0488453073f, 
   0.0721656114f, -0.0862895690f, -0.0065683682f, -0.1032706444f, -0.0403421129f, -0.0128649993f, -0.0973434167f, -0.0086119012f, 
   0.0156584972f,  0.0372679797f, -0.0240074602f, -0.0182695365f, -0.0560801988f,  0.0292752175f, -0.0097372134f, -0.0600960542f, 
   0.0801276782f,  0.0448281360f, -0.0461423990f,  0.1017951768f,  0.1062406294f,  0.0520205342f, -0.0213631500f, -0.1189916647f, 
   0.0414657955f,  0.0456327063f,  0.0256085050f, -0.0320087893f,  0.0296438271f,  0.0418768387f,  0.0384468881f,  0.1379988237f, 
   0.0643397782f, -0.0376392195f, -0.0832583405f,  0.1075377498f, -0.0081281117f,  0.0127617275f,  0.0474508994f, -0.0737940714f, 
  -0.0084209552f, -0.1019404857f,  0.0568446171f,  0.0455809304f, -0.0098524787f,  0.0526994075f,  0.0228539374f,  0.1258739963f, 
   0.0734935887f,  0.0231303188f,  0.0292462358f,  0.0332223836f,  0.0354618994f,  0.0062705012f, -0.0152703994f,  0.0163571677f, 
  -0.0469252938f, -0.0486160432f, -0.0266188743f, -0.0239684299f,  0.0917647668f, -0.0976671635f, -0.0493921990f,  0.0759822845f, 
   0.0100438322f, -0.0435710327f, -0.0743218162f, -0.0065745812f,  0.0588974979f, -0.1289881960f,  0.0192574549f,  0.0802476639f, 
  -0.0940346583f, -0.0543324030f,  0.0294093818f, -0.0047722389f,  0.0678928854f,  0.0371529819f, -0.0223697474f,  0.0171776911f, 
  -0.0149165430f,  0.0087829469f,  0.0349584739f, -0.0690144859f,  0.0641221013f,  0.0202396033f,  0.0415386031f,  0.0705276670f, 
   0.0983665516f, -0.0687475466f,  0.0301858645f, -0.0800424780f, -0.0317035390f,  0.0223861863f,  0.1123168948f,  0.0934671272f, 
  -0.0450314631f, -0.0024066675f, -0.1144903486f, -0.0266136122f, -0.0499603816f, -0.0430050794f,  0.0191214938f, -0.1168684188f, 
  -0.0182056117f, -0.0819591101f,  0.0339785759f, -0.0220912798f,  0.0963655630f,  0.0133258187f, -0.1012350224f, -0.0894047740f, 
   0.0221423113f,  0.0118285116f, -0.0427626935f, -0.1195827640f,  0.0366808459f,  0.0173158175f,  0.0308731423f, -0.0685554255f, 
   0.0197812782f,  0.0126955270f,  0.0305015440f,  0.0448056054f,  0.0765931688f, -0.0350207320f,  0.0333769096f, -0.0296283318f, 
   0.0236225309f, -0.0687984365f,  0.0037893270f,  0.0125568945f, -0.0246708398f, -0.0116880332f,  0.0252394485f,  0.0350641781f, 
  -0.1445109102f, -0.0037764245f, -0.0386027587f, -0.0181716079f, -0.0457243057f,  0.0526600933f,  0.0725347032f,  0.0579135411f, 
  -0.0212401577f,  0.0273086481f, -0.0301352195f,  0.0128874226f,  0.0934264242f,  0.0060868955f, -0.0715575311f,  0.0042748726f, 
  -0.0235407317f,  0.0373355646f, -0.0536425891f, -0.1051757994f,  0.0673337850f,  0.0225880140f, -0.0207459397f, -0.0694424855f, 
   0.0660951612f,  0.0228565276f,  0.0500288076f,  0.0289080242f,  0.0168560690f, -0.0159348863f, -0.0274437107f, -0.0479510452f, 
  -0.0040407309f, -0.0475817251f,  0.0161863006f, -0.0598613406f,  0.0507435671f, -0.1199140564f,  0.0165240088f,  0.0079511947f, 
  -0.0147532859f,  0.0296496463f, -0.0704758452f, -0.0025904942f, -0.0038352193f,  0.0527188233f,  0.0290994062f,  0.1176738862f, 
  -0.0200802724f,  0.0434975125f,  0.0261912800f,  0.0229507371f,  0.0448703482f,  0.0518290370f, -0.0525050208f, -0.0348545363f, 
  -0.0373871050f,  0.0083810541f,  0.0901464545f, -0.0010875991f, -0.0723114635f, -0.0305272532f,  0.0902007506f, -0.0660639216f, 
  -0.0043161495f, -0.0682217100f,  0.0627560392f, -0.0896352034f,  0.0765371508f,  0.0067227467f,  0.1034069553f, -0.0493572235f, 
  -0.0481553012f, -0.0127406262f, -0.0241023009f, -0.0238283087f,  0.0002808281f, -0.0466456160f,  0.0150518216f,  0.0072699474f, 
   0.0900980357f,  0.0348513060f, -0.0072223802f, -0.0194750373f,  0.0185174036f, -0.0811396960f, -0.0456448026f, -0.0495335098f, 
   0.0074863530f, -0.0141682364f,  0.0367847551f, -0.0138969866f, -0.0354660225f, -0.0001177922f, -0.0839404516f, -0.0814071352f, 
   0.0556681709f,  0.0847523882f,  0.0103654720f, -0.0185699975f,  0.0678333532f, -0.0210635506f,  0.0141972251f,  0.0460471735f, 
  -0.0138157407f, -0.0758204559f,  0.0118540830f, -0.0621388168f,  0.0508612128f, -0.0225468439f,  0.0538223431f,  0.0250361510f, 
   0.0066653924f,  0.0922999078f,  0.0881970079f, -0.0370038935f, -0.0534504799f,  0.0081048885f, -0.0089562731f,  0.0021922059f, 
  -0.0123582770f, -0.0104513187f,  0.0527622181f,  0.0253683675f, -0.0202745208f, -0.0343623759f,  0.0437972136f,  0.0282724095f, 
  -0.0514096982f,  0.0068211598f,  0.0790485408f, -0.0745221217f,  0.0333653279f,  0.0449234518f, -0.0663513178f, -0.0794440708f, 
  -0.0074040519f,  0.0304950411f, -0.0243115294f,  0.0225377506f,  0.0015514027f, -0.0051935176f,  0.0257019396f,  0.1474442188f, 
   0.0460867883f, -0.0804537858f, -0.0578770993f,  0.0422038536f, -0.0307967422f, -0.0877416361f,  0.0154165599f,  0.0053326415f, 
  -0.1038993786f, -0.0607787062f,  0.0051028150f,  0.0421415285f, -0.0046690259f, -0.0447788693f,  0.0510803421f, -0.0348601572f
};