/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003997012897_1257844341_init();
    xilinxcorelib_ver_m_00000000001358910285_3395926487_init();
    xilinxcorelib_ver_m_00000000001687936702_2690486219_init();
    xilinxcorelib_ver_m_00000000000277421008_1966364722_init();
    xilinxcorelib_ver_m_00000000001603977570_3192770539_init();
    work_m_00000000002489990758_0400693922_init();
    xilinxcorelib_ver_m_00000000000277421008_3106427890_init();
    xilinxcorelib_ver_m_00000000001603977570_1279260064_init();
    work_m_00000000002489990758_1197555235_init();
    work_m_00000000001515534730_3641783826_init();
    work_m_00000000003355872487_1663008310_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003355872487_1663008310");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
