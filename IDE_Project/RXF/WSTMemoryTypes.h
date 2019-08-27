/* This file is generated via $ macroAndPragma2Header.awk 18901 2008-12-30 19:42:00Z cm $ - do not edit!
 *
 *
 */

/**
* $ MemoryTypeMacro.template 18902 2008-12-30 19:44:06Z cm $
* $URL: https://svn.willert.de/V6/trunk/Component/CompilerAndTarget/Keil_ARM/Source/Common/WSTMemoryTypes.h $
*
* Willert Software Tools - Realtime eXecution Framework
*
* Email: support@willert.de
*
*
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


/* Abbreviations used in macros:    WST_<Memory category>_<Phase>_[START_SEC|STOP_SEC]_<Code>_<Memory type> and 
 *                                  WST_<Memory category>_<Phase>_[START_SEC|STOP_SEC]_<Data size>_<Data type>_<Memory type>
 * 
 * Section names are composed like:	CODE_<Memory category>_<Phase>_<Memory type> and
 *                                  DATA_<Memory category>_<Phase>_<Data size>_<Data type>_<Memory type>
 * 
 * Memory categories:   RXF, APPL, ANIM
 * Phases:              ONPOWER, DOWNPOWER, SLEEP, RUNNING
 * Code:                CODE
 * Data size:           8 (bits), 16 (bits), 24 (bits), 32 (bits), UNSPECIFIED (bits)
 * Data type:           INIT, NOINIT, CONST
 * Memory type:         FAST, SLOW
 * 
 */




#if defined( WST_RXF_ONPOWER_START_SEC_CODE_FAST )
#undef WST_RXF_ONPOWER_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_RXF_ONPOWER_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_CODE_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_8_INIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_8_NOINIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_RXF_ONPOWER_8_CONST_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_16_INIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_16_NOINIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_RXF_ONPOWER_16_CONST_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_24_INIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_24_NOINIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_RXF_ONPOWER_24_CONST_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_32_INIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_32_NOINIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_RXF_ONPOWER_32_CONST_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_ONPOWER_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_RXF_ONPOWER_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_CODE_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_RXF_ONPOWER_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_CODE_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_8_INIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_8_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_RXF_ONPOWER_8_CONST_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_16_INIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_16_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_RXF_ONPOWER_16_CONST_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_24_INIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_24_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_RXF_ONPOWER_24_CONST_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_32_INIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_32_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_RXF_ONPOWER_32_CONST_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_ONPOWER_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_RXF_ONPOWER_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_CODE_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_RXF_DOWNPOWER_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_CODE_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_8_INIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_8_NOINIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_8_CONST_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_16_INIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_16_NOINIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_16_CONST_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_24_INIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_24_NOINIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_24_CONST_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_32_INIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_32_NOINIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_32_CONST_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_CODE_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_RXF_DOWNPOWER_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_CODE_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_8_INIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_8_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_8_CONST_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_16_INIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_16_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_16_CONST_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_24_INIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_24_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_24_CONST_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_32_INIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_32_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_32_CONST_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_DOWNPOWER_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_RXF_DOWNPOWER_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_CODE_FAST )
#undef WST_RXF_SLEEP_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_RXF_SLEEP_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_CODE_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_8_INIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_8_NOINIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_RXF_SLEEP_8_CONST_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_16_INIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_16_NOINIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_RXF_SLEEP_16_CONST_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_24_INIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_24_NOINIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_RXF_SLEEP_24_CONST_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_32_INIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_32_NOINIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_RXF_SLEEP_32_CONST_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_SLEEP_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_RXF_SLEEP_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_CODE_SLOW )
#undef WST_RXF_SLEEP_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_RXF_SLEEP_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_CODE_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_8_INIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_8_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_RXF_SLEEP_8_CONST_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_16_INIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_16_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_RXF_SLEEP_16_CONST_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_24_INIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_24_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_RXF_SLEEP_24_CONST_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_32_INIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_32_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_RXF_SLEEP_32_CONST_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_SLEEP_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_RXF_SLEEP_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_RXF_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_CODE_FAST )
#undef WST_RXF_RUNNING_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_RXF_RUNNING_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_CODE_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_8_INIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_8_NOINIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_RXF_RUNNING_8_CONST_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_16_INIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_16_NOINIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_RXF_RUNNING_16_CONST_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_24_INIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_24_NOINIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_RXF_RUNNING_24_CONST_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_32_INIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_32_NOINIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_RXF_RUNNING_32_CONST_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_RXF_RUNNING_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_RXF_RUNNING_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_CODE_SLOW )
#undef WST_RXF_RUNNING_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_RXF_RUNNING_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_CODE_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_8_INIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_8_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_RXF_RUNNING_8_CONST_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_16_INIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_16_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_RXF_RUNNING_16_CONST_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_24_INIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_24_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_RXF_RUNNING_24_CONST_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_32_INIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_32_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_RXF_RUNNING_32_CONST_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_RXF_RUNNING_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_RXF_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_RXF_RUNNING_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_RXF_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_RXF_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_CODE_FAST )
#undef WST_APPL_ONPOWER_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_APPL_ONPOWER_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_CODE_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_8_INIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_8_NOINIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_APPL_ONPOWER_8_CONST_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_16_INIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_16_NOINIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_APPL_ONPOWER_16_CONST_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_24_INIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_24_NOINIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_APPL_ONPOWER_24_CONST_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_32_INIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_32_NOINIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_APPL_ONPOWER_32_CONST_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_ONPOWER_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_APPL_ONPOWER_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_CODE_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_APPL_ONPOWER_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_CODE_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_8_INIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_8_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_APPL_ONPOWER_8_CONST_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_16_INIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_16_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_APPL_ONPOWER_16_CONST_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_24_INIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_24_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_APPL_ONPOWER_24_CONST_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_32_INIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_32_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_APPL_ONPOWER_32_CONST_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_ONPOWER_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_APPL_ONPOWER_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_CODE_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_APPL_DOWNPOWER_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_CODE_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_8_INIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_8_NOINIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_8_CONST_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_16_INIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_16_NOINIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_16_CONST_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_24_INIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_24_NOINIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_24_CONST_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_32_INIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_32_NOINIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_32_CONST_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_CODE_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_APPL_DOWNPOWER_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_CODE_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_8_INIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_8_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_8_CONST_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_16_INIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_16_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_16_CONST_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_24_INIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_24_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_24_CONST_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_32_INIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_32_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_32_CONST_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_DOWNPOWER_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_APPL_DOWNPOWER_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_CODE_FAST )
#undef WST_APPL_SLEEP_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_APPL_SLEEP_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_CODE_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_8_INIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_8_NOINIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_APPL_SLEEP_8_CONST_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_16_INIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_16_NOINIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_APPL_SLEEP_16_CONST_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_24_INIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_24_NOINIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_APPL_SLEEP_24_CONST_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_32_INIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_32_NOINIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_APPL_SLEEP_32_CONST_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_SLEEP_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_APPL_SLEEP_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_CODE_SLOW )
#undef WST_APPL_SLEEP_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_APPL_SLEEP_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_CODE_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_8_INIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_8_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_APPL_SLEEP_8_CONST_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_16_INIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_16_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_APPL_SLEEP_16_CONST_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_24_INIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_24_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_APPL_SLEEP_24_CONST_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_32_INIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_32_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_APPL_SLEEP_32_CONST_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_SLEEP_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_APPL_SLEEP_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_APPL_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_CODE_FAST )
#undef WST_APPL_RUNNING_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_APPL_RUNNING_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_CODE_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_8_INIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_8_NOINIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_APPL_RUNNING_8_CONST_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_16_INIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_16_NOINIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_APPL_RUNNING_16_CONST_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_24_INIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_24_NOINIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_APPL_RUNNING_24_CONST_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_32_INIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_32_NOINIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_APPL_RUNNING_32_CONST_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_APPL_RUNNING_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_APPL_RUNNING_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_CODE_SLOW )
#undef WST_APPL_RUNNING_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_APPL_RUNNING_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_CODE_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_8_INIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_8_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_APPL_RUNNING_8_CONST_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_16_INIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_16_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_APPL_RUNNING_16_CONST_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_24_INIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_24_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_APPL_RUNNING_24_CONST_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_32_INIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_32_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_APPL_RUNNING_32_CONST_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_APPL_RUNNING_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_APPL_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_APPL_RUNNING_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_APPL_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_APPL_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_CODE_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_ANIM_ONPOWER_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_CODE_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_8_INIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_8_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_ANIM_ONPOWER_8_CONST_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_16_INIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_16_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_ANIM_ONPOWER_16_CONST_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_24_INIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_24_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_ANIM_ONPOWER_24_CONST_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_32_INIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_32_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_ANIM_ONPOWER_32_CONST_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_ANIM_ONPOWER_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_CODE_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_ANIM_ONPOWER_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_CODE_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_8_INIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_8_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_ANIM_ONPOWER_8_CONST_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_16_INIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_16_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_ANIM_ONPOWER_16_CONST_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_24_INIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_24_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_ANIM_ONPOWER_24_CONST_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_32_INIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_32_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_ANIM_ONPOWER_32_CONST_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_ONPOWER_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_ONPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_ANIM_ONPOWER_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_ONPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_CODE_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_ANIM_DOWNPOWER_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_CODE_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_8_INIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_8_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_8_CONST_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_16_INIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_16_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_16_CONST_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_24_INIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_24_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_24_CONST_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_32_INIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_32_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_32_CONST_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_CODE_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_ANIM_DOWNPOWER_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_CODE_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_8_INIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_8_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_8_CONST_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_16_INIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_16_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_16_CONST_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_24_INIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_24_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_24_CONST_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_32_INIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_32_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_32_CONST_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_DOWNPOWER_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_DOWNPOWER_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_ANIM_DOWNPOWER_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_DOWNPOWER_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_CODE_FAST )
#undef WST_ANIM_SLEEP_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_ANIM_SLEEP_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_CODE_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_8_INIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_8_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_ANIM_SLEEP_8_CONST_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_16_INIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_16_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_ANIM_SLEEP_16_CONST_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_24_INIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_24_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_ANIM_SLEEP_24_CONST_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_32_INIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_32_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_ANIM_SLEEP_32_CONST_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_SLEEP_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_ANIM_SLEEP_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_CODE_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_ANIM_SLEEP_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_CODE_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_8_INIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_8_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_ANIM_SLEEP_8_CONST_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_16_INIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_16_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_ANIM_SLEEP_16_CONST_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_24_INIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_24_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_ANIM_SLEEP_24_CONST_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_32_INIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_32_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_ANIM_SLEEP_32_CONST_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_SLEEP_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_SLEEP_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_ANIM_SLEEP_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_SLEEP_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_CODE_FAST )
#undef WST_ANIM_RUNNING_START_SEC_CODE_FAST
#pragma arm section code   = "CODE_ANIM_RUNNING_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_CODE_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_CODE_FAST
#pragma arm section code				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_8_INIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_8_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_8_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_8_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_8_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_8_FAST
#pragma arm section rodata = "DATA_ANIM_RUNNING_8_CONST_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_8_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_8_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_16_INIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_16_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_16_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_16_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_16_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_16_FAST
#pragma arm section rodata = "DATA_ANIM_RUNNING_16_CONST_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_16_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_16_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_24_INIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_24_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_24_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_24_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_24_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_24_FAST
#pragma arm section rodata = "DATA_ANIM_RUNNING_24_CONST_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_24_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_24_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_32_INIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_32_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_32_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_32_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_32_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_32_FAST
#pragma arm section rodata = "DATA_ANIM_RUNNING_32_CONST_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_32_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_32_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_UNSPECIFIED_INIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata = "DATA_ANIM_RUNNING_UNSPECIFIED_NOINIT_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_FAST
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata = "DATA_ANIM_RUNNING_UNSPECIFIED_CONST_FAST"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_FAST
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_CODE_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_CODE_SLOW
#pragma arm section code   = "CODE_ANIM_RUNNING_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_CODE_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_CODE_SLOW
#pragma arm section code				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_8_INIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_8_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_8_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_8_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_8_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata = "DATA_ANIM_RUNNING_8_CONST_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_8_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_8_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_16_INIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_16_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_16_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_16_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_16_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata = "DATA_ANIM_RUNNING_16_CONST_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_16_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_16_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_24_INIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_24_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_24_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_24_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_24_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata = "DATA_ANIM_RUNNING_24_CONST_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_24_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_24_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_32_INIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_32_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_32_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_32_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_32_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata = "DATA_ANIM_RUNNING_32_CONST_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_32_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_32_SLOW
#pragma arm section rodata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_UNSPECIFIED_INIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_INIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata = "DATA_ANIM_RUNNING_UNSPECIFIED_NOINIT_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_NOINIT_UNSPECIFIED_SLOW
#pragma arm section rwdata				
#endif

#if defined( WST_ANIM_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_RUNNING_START_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata = "DATA_ANIM_RUNNING_UNSPECIFIED_CONST_SLOW"		
#endif

#if defined( WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW )
#undef WST_ANIM_RUNNING_STOP_SEC_DATA_CONST_UNSPECIFIED_SLOW
#pragma arm section rodata				
#endif
