/***************************************************************************
 *cr
 *cr            (C) Copyright 1995-2019 The Board of Trustees of the
 *cr                        University of Illinois
 *cr                         All Rights Reserved
 *cr
 ***************************************************************************/
/***************************************************************************
 * RCS INFORMATION:
 *
 *      $RCSfile: OrbitalJIT.h,v $
 *      $Author: johns $        $Locker:  $             $State: Exp $
 *      $Revision: 1.2 $      $Date: 2019/01/17 21:38:55 $
 *
 ***************************************************************************
 * DESCRIPTION:
 *   This source file contains the just-in-time (JIT) code for generating
 *  CUDA and OpenCL kernels for computation of molecular orbitals on a 
 *  uniformly spaced grid, using one or more GPUs.
 *
 ***************************************************************************/

#define ORBITAL_JIT_CUDA   0
#define ORBITAL_JIT_OPENCL 1

int orbital_jit_generate(int jitlanguage,
                         const char * srcfilename, int numatoms,
                         const float *wave_f, const float *basis_array,
                         const int *atom_basis,
                         const int *num_shells_per_atom,
                         const int *num_prim_per_shell,
                         const int *shell_types);
