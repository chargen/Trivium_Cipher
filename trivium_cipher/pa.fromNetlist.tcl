
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name trivium_cipher -dir "C:/Users/ljtale/ISE_Projects/ELEC427/Project3/trivium_cipher/planAhead_run_3" -part xc3s500efg320-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/ljtale/ISE_Projects/ELEC427/Project3/trivium_cipher/trivium_cipher.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/ljtale/ISE_Projects/ELEC427/Project3/trivium_cipher} {ipcore_dir} }
add_files [list {ipcore_dir/plain.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "trivium.ucf" [current_fileset -constrset]
add_files [list {trivium.ucf}] -fileset [get_property constrset [current_run]]
link_design
