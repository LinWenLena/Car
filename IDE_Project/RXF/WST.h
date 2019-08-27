#ifndef WSTFILE_H
#define WSTFILE_H

/**
* \brief RXF main include file, which takes care of the correct include order for RXF
*		 header files from generated sources.
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WST.h 30652 2014-11-14 10:09:59Z eroemer $
* $URL: https://svn.willert.de/V6/trunk/Component/Shared/Source/C/WST.h $
*
**/


/*****************************************************************************
 *
 * This file belongs to the Willert Software Tools RXF Product:  
 * EA_C_OORTX_Keil_ARM_MCB1700_Dev (2014-11-14).
 * Copyright (c) 2011, Willert Software Tools GmbH.
 *
 * For detailed information about this product see release info file:
 * C:/Willert/EA_C_OORTX_Keil_ARM_MCB1700_Dev/ReleaseInfo.txt
 *
 *****************************************************************************/


/**
 * The WST_H value is tested in our include files.
 * It is not set when compiling the user project, in order to have WST.h include everything
 * in the right order, and 'ignore' generated include statements by the modelling tool.
 */
#define WST_H 


/** \brief Represents the value ((WSTBoolean)1U) for a TRUE boolean.
  * \req{RXF-1242}
  */
#define WSTTRUE  ((WSTBoolean)1U)

/** \brief Represents the value ((WSTBoolean)0U) for a FALSE boolean.
  * \req{RXF-1243}
  */
#define WSTFALSE ((WSTBoolean)0U)



/* Forward Declarations
 */


typedef struct WST_CFG_highwater_t WST_CFG_highwater;
typedef struct WST_EVT_t WST_EVT;
typedef struct WST_FSM_t WST_FSM;
typedef struct WST_FSM_Vtbl_t WST_FSM_Vtbl;
typedef struct WST_MEM_t WST_MEM;
typedef struct WST_MEM_Pool_t WST_MEM_Pool;
typedef struct WST_MSQ_t WST_MSQ;
typedef struct WST_MTX_t WST_MTX;
typedef struct WST_TMM_t WST_TMM;
typedef struct WST_TMR_t WST_TMR;


#include <stdlib.h>					/**< size_t prototype, which is always needed, and depending on config also malloc is used.	*/

#include "WSTProduct.h"				/**< Product dependent defines.									 							*/				/**< Prolog include file which can be used, if early included statements need to be added.	*/
#include "RxfConstants.h"			/**< constants needed to compile files of the RealTime eXecution Framework. 				*/
#include "WSTCompiler.h"			/**< Compiler dependent prototypes and defines.									 			*/
#include "WSTTarget.h"				/**< Target dependent prototypes and defines.										 		*/
#include "WSTRTOS.h"				/**< RTOS dependent prototypes and defines.										 			*/
#include "WSTModelling.h"			/**< Modelling dependent include.										 					*/

#ifdef WST_SHOW_DIMENSION 			/* Dimensions for buffer and queue sizes need to be specified								*/
#include "RxfDimensions.h"			/**< constants set via properties and specific for the RealTime eXecution Framework.		*/
#endif /* WST_SHOW_DIMENSION */


/* Prototype of the framework entry point */
extern sint16 WST_RXF_Main( sint16 argc, char_t *argv[] );


#include <stddef.h>				/**< needed for size_t */


/* These include files are used by the RXF:
 */


#include "WST_MTX.h"
#include "WST_MEM_Pool.h"
#include "WST_MEM.h"







#include "WST_EVT.h"
#include "WST_MSQ.h"

#include "WST_FSM.h"
#include "WST_TMR.h"
#include "WST_TMM.h"
#include "WST_RXF.h"
#include "WST_CFG.h"
#include "WST_ERR.h"

#include "WST_CON_LST.h"

#include "WSTVersion.h"

#undef WST_H

#endif  /* of WSTFILE_H */
