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
static const char *ng0 = "C:/Users/yport/Documents/VIBOT/S3/UE3 - RTIC/RTIC - Dubois/2DRealTimeFiltering/smoot_filter_tb/lowpass_tb.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_1281154728_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);


static void work_a_2659315321_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 6216);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 9;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2659315321_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 5272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 6280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2659315321_2372691052_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    char *t15;

LAB0:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1312U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6088);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 4016U);
    t8 = std_textio_endfile(t4);
    t9 = (!(t8));
    if (t9 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 6600);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(119, ng0);
    t10 = (t0 + 5328);
    t11 = (t0 + 4016U);
    t12 = (t0 + 4296U);
    std_textio_readline(STD_TEXTIO, t10, t11, t12);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5328);
    t4 = (t0 + 4296U);
    t5 = (t0 + 3688U);
    t10 = *((char **)t5);
    t5 = (t0 + 11848U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t4, t10, t5);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3688U);
    t4 = *((char **)t2);
    t2 = (t0 + 6344);
    t5 = (t2 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t13 = *((int *)t4);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t14 = *((int *)t5);
    t1 = (t13 > t14);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t13 = *((int *)t4);
    t14 = (t13 + 1);
    t2 = (t0 + 6536);
    t5 = (t2 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t14;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 6408);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 6472);
    t5 = (t2 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void work_a_2659315321_2372691052_p_3(char *t0)
{
    char t20[16];
    char t25[8];
    char t27[8];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    int t26;

LAB0:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 1312U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 6104);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 2792U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(158, ng0);

LAB9:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB3;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(151, ng0);
    t4 = (t0 + 2952U);
    t15 = *((char **)t4);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    if (t17 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5576);
    t4 = (t0 + 4368U);
    t5 = (t0 + 3112U);
    t9 = *((char **)t5);
    memcpy(t25, t9, 8U);
    t5 = (t0 + 11832U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t4, t25, t5, (unsigned char)0, 8);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 5576);
    t4 = (t0 + 4120U);
    t5 = (t0 + 4368U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    goto LAB9;

LAB11:    t4 = (t0 + 2632U);
    t12 = *((char **)t4);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t8 = t14;
    goto LAB13;

LAB14:    xsi_set_current_line(152, ng0);
    t4 = (t0 + 4120U);
    t18 = (t0 + 12120);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 1;
    t22 = (t21 + 4U);
    *((int *)t22) = 16;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (16 - 1);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    std_textio_file_open1(t4, t18, t20, (unsigned char)1);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 6664);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t9 = (t5 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB15;

LAB17:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t23 = *((int *)t5);
    t26 = (t23 + 1);
    t2 = (t0 + 6728);
    t9 = (t2 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t18 = *((char **)t15);
    *((int *)t18) = t26;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t23 = *((int *)t4);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t26 = *((int *)t5);
    t1 = (t23 > t26);
    if (t1 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2952U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5576);
    t4 = (t0 + 4368U);
    t5 = (t0 + 3112U);
    t9 = *((char **)t5);
    memcpy(t27, t9, 8U);
    t5 = (t0 + 11832U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t4, t27, t5, (unsigned char)0, 8);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5576);
    t4 = (t0 + 4120U);
    t5 = (t0 + 4368U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t5);
    goto LAB18;

LAB20:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6664);
    t9 = (t2 + 56U);
    t12 = *((char **)t9);
    t15 = (t12 + 56U);
    t18 = *((char **)t15);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB21;

LAB23:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 4120U);
    std_textio_file_close(t2);
    goto LAB24;

}


extern void work_a_2659315321_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2659315321_2372691052_p_0,(void *)work_a_2659315321_2372691052_p_1,(void *)work_a_2659315321_2372691052_p_2,(void *)work_a_2659315321_2372691052_p_3};
	xsi_register_didat("work_a_2659315321_2372691052", "isim/lowpass_tb_isim_beh.exe.sim/work/a_2659315321_2372691052.didat");
	xsi_register_executes(pe);
}
