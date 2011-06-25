// Copyright �2005, 2006 Freescale Semiconductor, Inc.
// Please see the License for the specific language governing rights and
// limitations under the License.
// ===========================================================================
//	UProfiler.h					PowerPlant 2.2.2	�1995-2005 Metrowerks Inc.
// ===========================================================================

#ifndef _H_UProfiler
#define _H_UProfiler
#pragma once

#include <PP_Prefix.h>

#if PP_Uses_Pragma_Import
	#pragma import on
#endif

PP_Begin_Namespace_PowerPlant

// ---------------------------------------------------------------------------

class	StProfileSection {
public:
				StProfileSection(
						Str255	inDumpFileName,
						SInt16	inNumFunctions,
						SInt16	inStackDepth);

				~StProfileSection();

protected:
	Str255			mProfilerDumpFile;		// Filename for dumping profiles
	SInt16			mNumFunctions;			// Number of functions to save
	SInt16			mStackDepth;			// Stack depth
};

PP_End_Namespace_PowerPlant


#if PP_Uses_Pragma_Import
	#pragma import reset
#endif

#endif
