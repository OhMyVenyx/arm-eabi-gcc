#ifndef SMM_H
   #define SMM_H

   #define ATL_mmMULADD
   #define ATL_mmLAT 4
   #define ATL_mmMU  6
   #define ATL_mmNU  1
   #define ATL_mmKU  80
   #define MB 48
   #define NB 48
   #define KB 48
   #define NBNB 2304
   #define MBNB 2304
   #define MBKB 2304
   #define NBKB 2304
   #define NB2 96
   #define NBNB2 4608

   #define ATL_MulByNB(N_) ((N_) * 48)
   #define ATL_DivByNB(N_) ((N_) / 48)
   #define ATL_MulByNBNB(N_) ((N_) * 2304)
   #define NBmm ATL_sJIK48x48x48TN48x48x0_a1_b1
   #define NBmm_b1 ATL_sJIK48x48x48TN48x48x0_a1_b1
   #define NBmm_b0 ATL_sJIK48x48x48TN48x48x0_a1_b0
   #define NBmm_bX ATL_sJIK48x48x48TN48x48x0_a1_bX

#endif
