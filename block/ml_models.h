
#ifndef __ML_MODELS_H
#define __ML_MODELS_H

/**
  * Include your models below
  */

#include "Trace/w_sde.h"
#include "Trace/w_sdf.h"
#include "Trace/w_sdg.h"

/**
  * Include end
  */

#define NR_NVME_DR 10
#define NR_SCSI_DR 10

// #define FEAT_31
// #define LEN_INPUT 31
// #define LEN_LAYER_0 256
// #define LEN_LAYER_0_HALF 128
// #define LEN_LAYER_1 2

bool ml_enabled_list[NR_NVME_DR+NR_SCSI_DR] = {
	#ifdef __W_NVME0_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME1_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME2_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME3_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME4_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME5_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME6_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME7_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME8_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_NVME9_H 
	true,
	#else 
	false, 
	#endif

	false,	// sda
	#ifdef __W_SDB_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDC_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDD_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDE_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDF_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDG_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDH_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDI_H 
	true,
	#else 
	false, 
	#endif
	#ifdef __W_SDJ_H 
	true
	#else 
	false
	#endif	
};
EXPORT_SYMBOL(ml_enabled_list);

char *model_name_list[NR_NVME_DR+NR_SCSI_DR] = {
	#ifdef __W_NVME0_H 
	name_nvme0,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME1_H 
	name_nvme1,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME2_H 
	name_nvme2,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME3_H 
	name_nvme3,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME4_H 
	name_nvme4,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME5_H 
	name_nvme5,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME6_H 
	name_nvme6,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME7_H 
	name_nvme7,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME8_H 
	name_nvme8,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME9_H 
	name_nvme9,
	#else 
	NULL, 
	#endif

	NULL,	// sda
	#ifdef __W_SDB_H 
	name_sdb,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDC_H 
	name_sdc,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDD_H 
	name_sdd,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDE_H 
	name_sde,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDF_H 
	name_sdf,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDG_H 
	name_sdg,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDH_H 
	name_sdh,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDI_H 
	name_sdi,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDJ_H 
	name_sdj
	#else 
	NULL
	#endif
};
EXPORT_SYMBOL(model_name_list);

long * weight_0_T_list [NR_NVME_DR+NR_SCSI_DR] = {
	#ifdef __W_NVME0_H 
	weight_0_T_nvme0,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME1_H 
	weight_0_T_nvme1,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME2_H 
	weight_0_T_nvme2,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME3_H 
	weight_0_T_nvme3,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME4_H 
	weight_0_T_nvme4,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME5_H 
	weight_0_T_nvme5,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME6_H 
	weight_0_T_nvme6,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME7_H 
	weight_0_T_nvme7,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME8_H 
	weight_0_T_nvme8,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME9_H 
	weight_0_T_nvme9,
	#else 
	NULL, 
	#endif

	NULL,	// sda
	#ifdef __W_SDB_H 
	weight_0_T_sdb,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDC_H 
	weight_0_T_sdc,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDD_H 
	weight_0_T_sdd,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDE_H 
	weight_0_T_sde,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDF_H 
	weight_0_T_sdf,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDG_H 
	weight_0_T_sdg,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDH_H 
	weight_0_T_sdh,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDI_H 
	weight_0_T_sdi,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDJ_H 
	weight_0_T_sdj
	#else 
	NULL
	#endif
};

long * weight_1_T_list [NR_NVME_DR+NR_SCSI_DR] = {
	#ifdef __W_NVME0_H 
	weight_1_T_nvme0,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME1_H 
	weight_1_T_nvme1,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME2_H 
	weight_1_T_nvme2,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME3_H 
	weight_1_T_nvme3,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME4_H 
	weight_1_T_nvme4,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME5_H 
	weight_1_T_nvme5,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME6_H 
	weight_1_T_nvme6,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME7_H 
	weight_1_T_nvme7,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME8_H 
	weight_1_T_nvme8,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME9_H 
	weight_1_T_nvme9,
	#else 
	NULL, 
	#endif

	NULL,	// sda
	#ifdef __W_SDB_H 
	weight_1_T_sdb,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDC_H 
	weight_1_T_sdc,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDD_H 
	weight_1_T_sdd,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDE_H 
	weight_1_T_sde,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDF_H 
	weight_1_T_sdf,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDG_H 
	weight_1_T_sdg,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDH_H 
	weight_1_T_sdh,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDI_H 
	weight_1_T_sdi,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDJ_H 
	weight_1_T_sdj
	#else 
	NULL
	#endif
};

long * bias_0_list [NR_NVME_DR+NR_SCSI_DR] = {
	#ifdef __W_NVME0_H 
	bias_0_nvme0,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME1_H 
	bias_0_nvme1,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME2_H 
	bias_0_nvme2,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME3_H 
	bias_0_nvme3,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME4_H 
	bias_0_nvme4,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME5_H 
	bias_0_nvme5,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME6_H 
	bias_0_nvme6,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME7_H 
	bias_0_nvme7,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME8_H 
	bias_0_nvme8,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME9_H 
	bias_0_nvme9,
	#else 
	NULL, 
	#endif

	NULL,	// sda
	#ifdef __W_SDB_H 
	bias_0_sdb,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDC_H 
	bias_0_sdc,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDD_H 
	bias_0_sdd,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDE_H 
	bias_0_sde,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDF_H 
	bias_0_sdf,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDG_H 
	bias_0_sdg,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDH_H 
	bias_0_sdh,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDI_H 
	bias_0_sdi,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDJ_H 
	bias_0_sdj
	#else 
	NULL
	#endif
};

long * bias_1_list [NR_NVME_DR+NR_SCSI_DR] = {
	#ifdef __W_NVME0_H 
	bias_1_nvme0,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME1_H 
	bias_1_nvme1,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME2_H 
	bias_1_nvme2,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME3_H 
	bias_1_nvme3,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME4_H 
	bias_1_nvme4,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME5_H 
	bias_1_nvme5,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME6_H 
	bias_1_nvme6,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME7_H 
	bias_1_nvme7,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME8_H 
	bias_1_nvme8,
	#else 
	NULL, 
	#endif
	#ifdef __W_NVME9_H 
	bias_1_nvme9,
	#else 
	NULL, 
	#endif

	NULL,	// sda
	#ifdef __W_SDB_H 
	bias_1_sdb,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDC_H 
	bias_1_sdc,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDD_H 
	bias_1_sdd,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDE_H 
	bias_1_sde,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDF_H 
	bias_1_sdf,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDG_H 
	bias_1_sdg,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDH_H 
	bias_1_sdh,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDI_H 
	bias_1_sdi,
	#else 
	NULL, 
	#endif
	#ifdef __W_SDJ_H 
	bias_1_sdj
	#else 
	NULL
	#endif
};

#endif
