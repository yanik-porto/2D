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

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 6640);
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

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 6704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5240);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3728U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5240);
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
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 6768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3272U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t11);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(113, ng0);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t12 = *((unsigned char *)t8);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB10;

LAB12:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t3 = (t18 > t19);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB10;

LAB13:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB10;

LAB14:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t18 = *((int *)t2);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t3 = (t18 > t19);
    if (t3 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB10;

LAB15:    goto LAB10;

LAB16:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 6768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB17:    xsi_set_current_line(114, ng0);
    t7 = (t0 + 6768);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB18;

LAB20:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 6768);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 6768);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 6768);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

}

static void work_a_2659315321_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned char t15;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB6};

LAB0:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6512);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    goto LAB2;

LAB4:    xsi_set_current_line(149, ng0);
    t5 = (t0 + 1312U);
    t6 = xsi_signal_has_event(t5);
    if (t6 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB2;

LAB5:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_set_current_line(150, ng0);
    t7 = (t0 + 5736);
    t11 = (t0 + 4176U);
    t12 = (t0 + 4456U);
    std_textio_readline(STD_TEXTIO, t7, t11, t12);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 5736);
    t2 = (t0 + 4456U);
    t5 = (t0 + 3848U);
    t7 = *((char **)t5);
    t5 = (t0 + 12776U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t1, t2, t7, t5);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    t1 = (t0 + 6832);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 6896);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t4 = t10;
    goto LAB12;

LAB13:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 4176U);
    t10 = std_textio_endfile(t2);
    t15 = (!(t10));
    if (t15 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 7024);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB14;

LAB16:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t9 = (t6 == (unsigned char)3);
    t3 = t9;
    goto LAB18;

LAB19:    xsi_set_current_line(159, ng0);
    t7 = (t0 + 5736);
    t8 = (t0 + 4176U);
    t11 = (t0 + 4456U);
    std_textio_readline(STD_TEXTIO, t7, t8, t11);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 5736);
    t2 = (t0 + 4456U);
    t5 = (t0 + 3848U);
    t7 = *((char **)t5);
    t5 = (t0 + 12776U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t1, t2, t7, t5);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    t1 = (t0 + 6832);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 6960);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t14 = (t13 + 1);
    t1 = (t0 + 6896);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

}

static void work_a_2659315321_2372691052_p_4(char *t0)
{
    char t15[16];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t16;
    unsigned int t17;
    int t20;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 6528);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    goto LAB2;

LAB4:    goto LAB2;

LAB5:    xsi_set_current_line(216, ng0);
    t5 = (t0 + 1312U);
    t6 = xsi_signal_has_event(t5);
    if (t6 == 1)
        goto LAB12;

LAB13:    t4 = (unsigned char)0;

LAB14:    if (t4 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB2;

LAB6:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 1312U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 4280U);
    std_textio_file_close(t1);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 7152);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(236, ng0);
    t1 = (t0 + 7088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    goto LAB2;

LAB9:    xsi_set_current_line(217, ng0);
    t7 = (t0 + 7088);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(218, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB15;

LAB17:
LAB16:    xsi_set_current_line(222, ng0);
    t1 = (t0 + 5984);
    t2 = (t0 + 4528U);
    t5 = (t0 + 3112U);
    t7 = *((char **)t5);
    memcpy(t18, t7, 8U);
    t5 = (t0 + 12760U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t1, t2, t18, t5, (unsigned char)0, 8);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 5984);
    t2 = (t0 + 4280U);
    t5 = (t0 + 4528U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t5);
    goto LAB10;

LAB12:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    t4 = t10;
    goto LAB14;

LAB15:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 4280U);
    t5 = (t0 + 13048);
    t8 = (t15 + 0U);
    t11 = (t8 + 0U);
    *((int *)t11) = 1;
    t11 = (t8 + 4U);
    *((int *)t11) = 16;
    t11 = (t8 + 8U);
    *((int *)t11) = 1;
    t16 = (16 - 1);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t11 = (t8 + 12U);
    *((unsigned int *)t11) = t17;
    std_textio_file_open1(t1, t5, t15, (unsigned char)1);
    xsi_set_current_line(220, ng0);
    t1 = (t0 + 7152);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB18:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 5984);
    t7 = (t0 + 4528U);
    t8 = (t0 + 3112U);
    t11 = *((char **)t8);
    memcpy(t19, t11, 8U);
    t8 = (t0 + 12760U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t7, t19, t8, (unsigned char)0, 8);
    xsi_set_current_line(229, ng0);
    t1 = (t0 + 5984);
    t2 = (t0 + 4280U);
    t5 = (t0 + 4528U);
    std_textio_writeline(STD_TEXTIO, t1, t2, t5);
    xsi_set_current_line(230, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t16 = *((int *)t2);
    t20 = (t16 + 1);
    t1 = (t0 + 7216);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = t20;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t9 = (t6 == (unsigned char)2);
    t3 = t9;
    goto LAB23;

}


extern void work_a_2659315321_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2659315321_2372691052_p_0,(void *)work_a_2659315321_2372691052_p_1,(void *)work_a_2659315321_2372691052_p_2,(void *)work_a_2659315321_2372691052_p_3,(void *)work_a_2659315321_2372691052_p_4};
	xsi_register_didat("work_a_2659315321_2372691052", "isim/lowpass_tb_isim_beh.exe.sim/work/a_2659315321_2372691052.didat");
	xsi_register_executes(pe);
}
