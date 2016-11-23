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
static const char *ng0 = "C:/Users/yport/Documents/VIBOT/S3/UE3 - RTIC/RTIC - Dubois/smoot_filter_tb/lowpass_tb.vhd";
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

LAB0:    xsi_set_current_line(76, ng0);

LAB3:    t1 = (t0 + 5688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 259;
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

LAB0:    t1 = (t0 + 4792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4600);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4600);
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
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    int t13;
    char *t14;

LAB0:    t1 = (t0 + 5040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3536U);
    t3 = (t0 + 10492);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 22;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (22 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)0);
    xsi_set_current_line(108, ng0);

LAB4:    t2 = (t0 + 3536U);
    t10 = std_textio_endfile(t2);
    t11 = (!(t10));
    if (t11 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 6072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3536U);
    std_textio_file_close(t2);
    xsi_set_current_line(125, ng0);

LAB13:    *((char **)t1) = &&LAB14;

LAB1:    return;
LAB5:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 4848);
    t4 = (t0 + 3536U);
    t6 = (t0 + 3816U);
    std_textio_readline(STD_TEXTIO, t3, t4, t6);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4848);
    t3 = (t0 + 3816U);
    t4 = (t0 + 3208U);
    t6 = *((char **)t4);
    t4 = (t0 + 10244U);
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, t2, t3, t6, t4);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3208U);
    t3 = *((char **)t2);
    t2 = (t0 + 5816);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t13 = *((int *)t4);
    t10 = (t8 > t13);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t8 = *((int *)t3);
    t13 = (t8 + 1);
    t2 = (t0 + 6008);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((int *)t12) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB6:;
LAB8:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5880);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t12 = (t7 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 5944);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    goto LAB2;

LAB12:    goto LAB11;

LAB14:    goto LAB12;

}

static void work_a_2659315321_2372691052_p_3(char *t0)
{
    char t5[16];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;

LAB0:    t1 = (t0 + 5288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3640U);
    t3 = (t0 + 10514);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 1;
    t7 = (t6 + 4U);
    *((int *)t7) = 16;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (16 - 1);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    std_textio_file_open1(t2, t3, t5, (unsigned char)1);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB7;

LAB8:    t10 = (unsigned char)0;

LAB9:    if (t10 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3640U);
    std_textio_file_close(t2);
    goto LAB2;

LAB4:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 5096);
    t6 = (t0 + 3888U);
    t7 = (t0 + 2632U);
    t15 = *((char **)t7);
    memcpy(t16, t15, 8U);
    t7 = (t0 + 10228U);
    ieee_p_3564397177_sub_1281154728_91900896(IEEE_P_3564397177, t2, t6, t16, t7, (unsigned char)0, 8);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 5096);
    t3 = (t0 + 3640U);
    t4 = (t0 + 3888U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t4);
    goto LAB5;

LAB7:    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB9;

LAB1:    return;
}


extern void work_a_2659315321_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2659315321_2372691052_p_0,(void *)work_a_2659315321_2372691052_p_1,(void *)work_a_2659315321_2372691052_p_2,(void *)work_a_2659315321_2372691052_p_3};
	xsi_register_didat("work_a_2659315321_2372691052", "isim/lowpass_tb_isim_beh.exe.sim/work/a_2659315321_2372691052.didat");
	xsi_register_executes(pe);
}
