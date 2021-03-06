/*
 *    This file is part of acados.
 *
 *    acados is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    acados is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with acados; if not, write to the Free Software Foundation,
 *    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef ACADOS_SIM_MODEL_WRAPPER_H_
#define ACADOS_SIM_MODEL_WRAPPER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "acados/utils/types.h"

void jac_fun(const real_t* in, real_t* out);
void vde_fun(const real_t* in, real_t* out,
             int (*vde)(const real_t**, real_t**, int*, real_t*, int));

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif  // ACADOS_SIM_MODEL_WRAPPER_H_
