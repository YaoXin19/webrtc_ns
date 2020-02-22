// D:\myself\webrtc\src\modules\audio_processing\noise_suppression_unittest.cc


#include "modules/audio_processing/ns/noise_suppression.h"


int main() {

	NsHandle* p = WebRtcNs_Create();

	WebRtcNs_Free(p);

	return 0;
}