#ifndef WSTTYPEDEFINITIONS_H
#define WSTTYPEDEFINITIONS_H


/**
* \brief Definition file for integer data types, in a similar way AUTOSAR defines them.
* 
* This allows to use data types in an application without dependency to the target
* and compiler specific data type widths.
*
* Willert Software Tools - RealTime eXecution Framework
*
* Email: support@willert.de
*
* $Id: WSTCompilerTypes.h 27230 2013-01-24 16:54:54Z ms $
* $URL: https://svn.willert.de/V6/trunk/Component/CompilerAndTarget/Keil_ARM/Source/Common/WSTCompilerTypes.h $
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



/*
 * AUTOSAR integer data types
 */
typedef signed char         sint8;          /**<        -128 .. +127            */
typedef unsigned char       uint8;          /**<           0 .. 255             */
typedef signed short        sint16;         /**<      -32768 .. +32767          */
typedef unsigned short      uint16;         /**<           0 .. 65535           */
typedef signed int			sint32;         /**< -2147483648 .. +2147483647     */
typedef unsigned int		uint32;         /**<           0 .. 4294967295      */
typedef float               float32;
typedef double              float64;

typedef unsigned char       uint8_least;    /**< At least 8 bit                 */
typedef unsigned short      uint16_least;   /**< At least 16 bit                */
typedef unsigned int		uint32_least;   /**< At least 32 bit                */
typedef signed char         sint8_least;    /**< At least 7 bit + 1 bit sign    */
typedef signed short        sint16_least;   /**< At least 15 bit + 1 bit sign   */
typedef signed int			sint32_least;   /**< At least 31 bit + 1 bit sign   */

typedef unsigned char       boolean;        /**< for use with TRUE/FALSE. bool type is supported in C++ only by ARM */

typedef char      			char_t;	        /**< type for character data 								*/
typedef int					int_t;			/**< type for integers, used to align memory pool blocks,	*/
											/**< see RiC_MemoryAllocationPkg.h						*/
typedef unsigned int		struct_t;		/**< Used to cast structure pointers to (struct_t*)		*/
											/**< e.g. before performing arithmetic operations			*/

#ifdef WST_LANGUAGE_CPP
#define WSTTRUE true
#define WSTFALSE false
#endif /* WST_LANGUAGE_CPP */

#endif  /* of WSTTYPEDEFINITIONS_H */
