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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_TEXTIO;
static const char *ng1 = "ramfile";
extern char *STD_STANDARD;
static const char *ng3 = "C:/Users/Intel Core i3/Desktop/UNI/5 SEMESTRE/SISTEMAS DIGITALES/CPU32BITS/imem.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_0226746282_3212880686_sub_198603756_3057020925(char *t1, char *t2, char *t3)
{
    char t4[184];
    char t5[16];
    char t17[32];
    char t26[32800];
    char t35[8];
    char t45[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t43;
    unsigned int t44;
    int t46;
    unsigned int t47;

LAB0:    t6 = ((STD_TEXTIO) + 2032);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 8U);
    t12 = ((STD_TEXTIO) + 1944);
    t13 = (t11 + 32U);
    *((char **)t13) = t12;
    t14 = (t11 + 24U);
    *((char **)t14) = 0;
    t15 = (t11 + 36U);
    *((int *)t15) = 1;
    t16 = (t11 + 28U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 1024;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (1024 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t17 + 16U);
    t22 = (t19 + 0U);
    *((int *)t22) = 31;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 31);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t21;
    t22 = (t4 + 48U);
    t24 = (t1 + 1976);
    t25 = (t22 + 52U);
    *((char **)t25) = t24;
    t27 = (t22 + 36U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 40U);
    t29 = (t24 + 44U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 48U);
    *((unsigned int *)t31) = 32800U;
    t32 = (t4 + 116U);
    t33 = ((STD_STANDARD) + 240);
    t34 = (t32 + 52U);
    *((char **)t34) = t33;
    t36 = (t32 + 36U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, 0);
    t37 = (t32 + 48U);
    *((unsigned int *)t37) = 4U;
    t38 = (t5 + 4U);
    t39 = (t2 != 0);
    if (t39 == 1)
        goto LAB3;

LAB2:    t40 = (t5 + 8U);
    *((char **)t40) = t3;
    t41 = (t32 + 36U);
    t42 = *((char **)t41);
    t41 = (t42 + 0);
    *((int *)t41) = 0;

LAB4:    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    t39 = std_textio_endfile(t7);
    t43 = (!(t39));
    if (t43 != 0)
        goto LAB5;

LAB7:    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t39 = (32800U != 32800U);
    if (t39 == 1)
        goto LAB8;

LAB9:    t0 = xsi_get_transient_memory(32800U);
    memcpy(t0, t7, 32800U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t38) = t2;
    goto LAB2;

LAB5:    t9 = (t4 + 4U);
    t10 = *((char **)t9);
    std_textio_readline(STD_TEXTIO, (char *)0, t10, t11);
    t6 = (t22 + 36U);
    t7 = *((char **)t6);
    t6 = (t32 + 36U);
    t9 = *((char **)t6);
    t20 = *((int *)t9);
    t23 = (t20 - 0);
    t8 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 1024, 1, t20);
    t21 = (32U * t8);
    t44 = (0 + t21);
    t6 = (t7 + t44);
    t10 = (t45 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 31;
    t12 = (t10 + 4U);
    *((int *)t12) = 0;
    t12 = (t10 + 8U);
    *((int *)t12) = -1;
    t46 = (0 - 31);
    t47 = (t46 * -1);
    t47 = (t47 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t47;
    std_textio_read4(STD_TEXTIO, (char *)0, t11, t6, t45);
    t6 = (t32 + 36U);
    t7 = *((char **)t6);
    t20 = *((int *)t7);
    t23 = (t20 + 1);
    t6 = (t32 + 36U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t23;
    goto LAB4;

LAB6:;
LAB8:    xsi_size_not_matching(32800U, 32800U, 0);
    goto LAB9;

LAB10:;
}

static void work_a_0226746282_3212880686_p_0(char *t0)
{
    char t1[16];
    char t11[16];
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(36, ng3);

LAB3:    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 592U);
    t4 = *((char **)t2);
    t2 = (t0 + 3424U);
    t5 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t4, t2);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 1024, 1, t5);
    t8 = (32U * t7);
    t9 = (0 + t8);
    t10 = (t3 + t9);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 31;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 31);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t1, t10, t11);
    t16 = (t1 + 12U);
    t15 = *((unsigned int *)t16);
    t15 = (t15 * 1U);
    t17 = (32U != t15);
    if (t17 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 1760);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 32U);
    xsi_driver_first_trans_fast_port(t18);

LAB2:    t23 = (t0 + 1716);
    *((int *)t23) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}


extern void work_a_0226746282_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0226746282_3212880686_p_0};
	static char *se[] = {(void *)work_a_0226746282_3212880686_sub_198603756_3057020925};
	xsi_register_didat("work_a_0226746282_3212880686", "isim/tb_imem_isim_beh.exe.sim/work/a_0226746282_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
