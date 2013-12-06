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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ljtale/ISE_Projects/ELEC427/Project3/trivium_cipher/pro1_7seg.v";
static unsigned int ng1[] = {15U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {10000, 0};
static unsigned int ng4[] = {7U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {20000, 0};
static unsigned int ng7[] = {11U, 0U};
static int ng8[] = {30000, 0};
static unsigned int ng9[] = {13U, 0U};
static int ng10[] = {40000, 0};
static unsigned int ng11[] = {14U, 0U};
static unsigned int ng12[] = {127U, 0U};
static unsigned int ng13[] = {64U, 0U};
static unsigned int ng14[] = {121U, 0U};
static int ng15[] = {2, 0};
static unsigned int ng16[] = {36U, 0U};
static int ng17[] = {3, 0};
static unsigned int ng18[] = {48U, 0U};
static int ng19[] = {4, 0};
static unsigned int ng20[] = {25U, 0U};
static int ng21[] = {5, 0};
static unsigned int ng22[] = {18U, 0U};
static int ng23[] = {6, 0};
static unsigned int ng24[] = {2U, 0U};
static int ng25[] = {7, 0};
static unsigned int ng26[] = {120U, 0U};
static int ng27[] = {8, 0};
static unsigned int ng28[] = {0U, 0U};
static int ng29[] = {9, 0};
static unsigned int ng30[] = {16U, 0U};
static int ng31[] = {10, 0};
static unsigned int ng32[] = {8U, 0U};
static int ng33[] = {11, 0};
static unsigned int ng34[] = {3U, 0U};
static int ng35[] = {12, 0};
static unsigned int ng36[] = {70U, 0U};
static int ng37[] = {13, 0};
static unsigned int ng38[] = {33U, 0U};
static int ng39[] = {14, 0};
static unsigned int ng40[] = {6U, 0U};
static int ng41[] = {15, 0};



static void Cont_52_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3680U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 8264);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8088);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_53_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3680U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 8328);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8104);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_54_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 6776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3680U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 8392);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8120);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_55_3(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 7024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3680U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 8456);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 8136);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Always_58_4(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 8152);
    *((int *)t2) = 1;
    t3 = (t0 + 7304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 3520U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(66, ng0);

LAB10:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB30:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB38;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB38:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 17, t5, 32);
    t11 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 17, 0LL);

LAB41:
LAB33:
LAB25:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);

LAB9:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5200);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 17, 0LL);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(68, ng0);

LAB18:    xsi_set_current_line(69, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 5200);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 17, t5, 32);
    t11 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 17, 0LL);
    goto LAB17;

LAB21:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(73, ng0);

LAB26:    xsi_set_current_line(74, ng0);
    t28 = ((char*)((ng7)));
    t29 = (t0 + 5200);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 17, t5, 32);
    t11 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 17, 0LL);
    goto LAB25;

LAB29:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(78, ng0);

LAB34:    xsi_set_current_line(79, ng0);
    t28 = ((char*)((ng9)));
    t29 = (t0 + 5200);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 17, t5, 32);
    t11 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 17, 0LL);
    goto LAB33;

LAB37:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(83, ng0);

LAB42:    xsi_set_current_line(84, ng0);
    t28 = ((char*)((ng11)));
    t29 = (t0 + 5200);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 17, 0LL);
    goto LAB41;

}

static void Always_93_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 7520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 8168);
    *((int *)t2) = 1;
    t3 = (t0 + 7552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);

LAB5:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 3520U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(97, ng0);

LAB9:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(175, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(95, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 7, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(99, ng0);
    t11 = (t0 + 3840U);
    t12 = *((char **)t11);

LAB22:    t11 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t12, 4, t11, 32);
    if (t14 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng29)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng31)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng33)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng35)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng37)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng39)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng41)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 4, t2, 32);
    if (t13 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB57:    goto LAB21;

LAB13:    xsi_set_current_line(118, ng0);
    t3 = (t0 + 4000U);
    t5 = *((char **)t3);

LAB58:    t3 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 32);
    if (t14 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng29)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng31)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng33)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng35)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng37)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng39)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng41)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t13 == 1)
        goto LAB89;

LAB90:
LAB92:
LAB91:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB93:    goto LAB21;

LAB15:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 4160U);
    t11 = *((char **)t3);

LAB94:    t3 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t11, 4, t3, 32);
    if (t14 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng29)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng31)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng33)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng35)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng37)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng39)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng41)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 4, t2, 32);
    if (t13 == 1)
        goto LAB125;

LAB126:
LAB128:
LAB127:    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB129:    goto LAB21;

LAB17:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 4320U);
    t15 = *((char **)t3);

LAB130:    t3 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_compare(t15, 4, t3, 32);
    if (t14 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB133;

LAB134:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB135;

LAB136:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB137;

LAB138:    t2 = ((char*)((ng19)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB139;

LAB140:    t2 = ((char*)((ng21)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB141;

LAB142:    t2 = ((char*)((ng23)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB143;

LAB144:    t2 = ((char*)((ng25)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB145;

LAB146:    t2 = ((char*)((ng27)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB147;

LAB148:    t2 = ((char*)((ng29)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB149;

LAB150:    t2 = ((char*)((ng31)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB151;

LAB152:    t2 = ((char*)((ng33)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB153;

LAB154:    t2 = ((char*)((ng35)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB155;

LAB156:    t2 = ((char*)((ng37)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB157;

LAB158:    t2 = ((char*)((ng39)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB159;

LAB160:    t2 = ((char*)((ng41)));
    t13 = xsi_vlog_unsigned_case_compare(t15, 4, t2, 32);
    if (t13 == 1)
        goto LAB161;

LAB162:
LAB164:
LAB163:    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB165:    goto LAB21;

LAB23:    xsi_set_current_line(100, ng0);
    t15 = ((char*)((ng13)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 7, 0LL);
    goto LAB57;

LAB25:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng14)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB27:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng16)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB29:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB31:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB33:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB35:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng24)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB37:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng26)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB39:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng28)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB41:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng30)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB43:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng32)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB45:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng34)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB47:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng36)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB49:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng38)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB51:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng40)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB53:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 7, 0LL);
    goto LAB57;

LAB59:    xsi_set_current_line(119, ng0);
    t11 = ((char*)((ng13)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t11, 0, 0, 7, 0LL);
    goto LAB93;

LAB61:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng14)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB63:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng16)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB65:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng18)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB67:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng20)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB69:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng22)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB71:    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng24)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB73:    xsi_set_current_line(126, ng0);
    t3 = ((char*)((ng26)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB75:    xsi_set_current_line(127, ng0);
    t3 = ((char*)((ng28)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB77:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng30)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB79:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng32)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB81:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng34)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB83:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng36)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB85:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng38)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB87:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng40)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB89:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng11)));
    t11 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t11, t3, 0, 0, 7, 0LL);
    goto LAB93;

LAB95:    xsi_set_current_line(138, ng0);
    t15 = ((char*)((ng13)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 7, 0LL);
    goto LAB129;

LAB97:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng14)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB99:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng16)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB101:    xsi_set_current_line(141, ng0);
    t3 = ((char*)((ng18)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB103:    xsi_set_current_line(142, ng0);
    t3 = ((char*)((ng20)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB105:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng22)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB107:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng24)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB109:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng26)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB111:    xsi_set_current_line(146, ng0);
    t3 = ((char*)((ng28)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB113:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng30)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB115:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng32)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB117:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng34)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB119:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng36)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB121:    xsi_set_current_line(151, ng0);
    t3 = ((char*)((ng38)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB123:    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng40)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB125:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng11)));
    t15 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t15, t3, 0, 0, 7, 0LL);
    goto LAB129;

LAB131:    xsi_set_current_line(157, ng0);
    t16 = ((char*)((ng13)));
    t17 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 7, 0LL);
    goto LAB165;

LAB133:    xsi_set_current_line(158, ng0);
    t3 = ((char*)((ng14)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB135:    xsi_set_current_line(159, ng0);
    t3 = ((char*)((ng16)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB137:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng18)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB139:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng20)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB141:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng22)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB143:    xsi_set_current_line(163, ng0);
    t3 = ((char*)((ng24)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB145:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng26)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB147:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng28)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB149:    xsi_set_current_line(166, ng0);
    t3 = ((char*)((ng30)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB151:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng32)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB153:    xsi_set_current_line(168, ng0);
    t3 = ((char*)((ng34)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB155:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng36)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB157:    xsi_set_current_line(170, ng0);
    t3 = ((char*)((ng38)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB159:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng40)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

LAB161:    xsi_set_current_line(172, ng0);
    t3 = ((char*)((ng11)));
    t16 = (t0 + 5040);
    xsi_vlogvar_wait_assign_value(t16, t3, 0, 0, 7, 0LL);
    goto LAB165;

}

static void Always_180_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 8184);
    *((int *)t2) = 1;
    t3 = (t0 + 7800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(181, ng0);

LAB5:    xsi_set_current_line(182, ng0);
    t4 = (t0 + 5040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4720);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 7);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 5200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB2;

}


extern void work_m_00000000003997012897_1257844341_init()
{
	static char *pe[] = {(void *)Cont_52_0,(void *)Cont_53_1,(void *)Cont_54_2,(void *)Cont_55_3,(void *)Always_58_4,(void *)Always_93_5,(void *)Always_180_6};
	xsi_register_didat("work_m_00000000003997012897_1257844341", "isim/trivium_sim_isim_beh.exe.sim/work/m_00000000003997012897_1257844341.didat");
	xsi_register_executes(pe);
}
