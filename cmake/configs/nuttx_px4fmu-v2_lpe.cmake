include(cmake/configs/nuttx_px4fmu-v2_default.cmake)

list(APPEND config_module_list
	modules/local_position_estimator
	)

list(REMOVE_ITEM config_module_list
	modules/ekf_att_pos_estimator
	modules/position_estimator_inav
	)
