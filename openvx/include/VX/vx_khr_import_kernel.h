/* 

 * Copyright (c) 2012-2017 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _OPENVX_IMPORT_KERNEL_H_
#define _OPENVX_IMPORT_KERNEL_H_

/*!
 * \file
 * \brief The OpenVX Import Kernel extension API.
 */
 
#define OPENVX_KHR_IMPORT_KERNEL  "vx_khr_import_kernel"

#include <VX/vx.h>

#ifdef  __cplusplus
extern "C" {
#endif


/*=============================================================================
Import Kernel From URL
=============================================================================*/

/*! \brief imports an OpenVX kernel from a URL of type specified.\n
 *
 * \details Imports a vendor defined kernel into the OpenVX context from a vendor defined binary URL.
 * the kernel functions and dependancies has to be fully contained in the binary URL.
 * an implementation may provide several error codes in case of failure to give useful diagonostic information.
 * \param [in] context to which to import kernel, must be valid [*REQ*].
 * \param [in] type vendor-specific identifier that indicated to the implementation how to interpret the url [*REQ*].
 * \param [in] url URL to binary container[*REQ*]
 * \param [out] a valid vx_kernel object. On error this is set to NULL[*REQ*].
 */

VX_API_ENTRY vx_kernel VX_API_CALL vxImportKernelFromURL(
    vx_context context,         
    const vx_char * type,
    const vx_uint8 * url,
    );


#ifdef  __cplusplus
}
#endif

#endif
