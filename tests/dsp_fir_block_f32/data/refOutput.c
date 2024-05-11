
#include "test_main.h"
#include "embench_math_types.h"

float32_t refOutput[128] = 
{
   0.0312792255f,  0.0313228256f,  0.0313317501f,  0.0312554132f,  0.0311321286f,  0.0310451018f,  0.0310326487f,  0.0310441867f, 
   0.0309875372f,  0.0308211178f,  0.0305988327f,  0.0304218893f,  0.0303441936f,  0.0303241669f,  0.0302696358f,  0.0301300252f, 
   0.0299436597f,  0.0297937557f,  0.0297186398f,  0.0296677401f,  0.0295488888f,  0.0293205141f,  0.0290365309f,  0.0287981569f, 
   0.0286593090f,  0.0285784187f,  0.0284633231f,  0.0282634575f,  0.0280171569f,  0.0278076479f,  0.0276732673f,  0.0275634534f, 
   0.0273860484f,  0.0270994905f,  0.0267577048f,  0.0264619187f,  0.0262660590f,  0.0261285670f,  0.0259572895f,  0.0257016714f, 
   0.0254000572f,  0.0251356830f,  0.0249468950f,  0.0247831409f,  0.0245522722f,  0.0242127360f,  0.0238184667f,  0.0234707007f, 
   0.0232233735f,  0.0230349354f,  0.0228132418f,  0.0225077464f,  0.0221568021f,  0.0218436536f,  0.0216066553f,  0.0213952633f, 
   0.0211173371f,  0.0207313321f,  0.0202911904f,  0.0198981564f,  0.0196061734f,  0.0193736992f,  0.0191085970f,  0.0187603276f, 
   0.0183672515f,  0.0180126205f,  0.0177347961f,  0.0174832414f,  0.0171658228f,  0.0167410025f,  0.0162627292f,  0.0158322539f, 
   0.0155035262f,  0.0152350104f,  0.0149345756f,  0.0145516888f,  0.0141247165f,  0.0137369162f,  0.0134266552f,  0.0131434020f, 
   0.0127950286f,  0.0123400023f,  0.0118322772f,  0.0113731091f,  0.0110164528f,  0.0107207771f,  0.0103939559f,  0.0099854608f, 
   0.0095336626f,  0.0091218230f,  0.0087883134f,  0.0084826065f,  0.0081125779f,  0.0076366988f,  0.0071089267f,  0.0066305210f, 
   0.0062554397f,  0.0059421547f,  0.0055985431f,  0.0051740792f,  0.0047071366f,  0.0042809797f,  0.0039339822f,  0.0036156191f, 
   0.0032337683f,  0.0027469029f,  0.0022089824f,  0.0017212679f,  0.0013377188f,  0.0010168088f,  0.0006664161f,  0.0002360163f, 
  -0.0002360163f, -0.0006664161f, -0.0010168088f, -0.0013377188f, -0.0017212679f, -0.0022089824f, -0.0027469029f, -0.0032337683f, 
  -0.0036156191f, -0.0039339822f, -0.0042809797f, -0.0047071366f, -0.0051740792f, -0.0055985431f, -0.0059421547f, -0.0062554397f
};
