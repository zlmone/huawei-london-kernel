/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*-------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = 1.1
 *-----------------------------------------------------------------------*/

#ifndef _PANEL_SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_H_

#define _PANEL_SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_H_
/*-----------------------------------------------------------------------*/
/* HEADER files                                                          */
/*-----------------------------------------------------------------------*/
#include "panel.h"

#include "lcdkit_bias_ic_common.h"

#include "lcd_bl.h"

/*-----------------------------------------------------------------------*/
/* Panel configuration                                                   */
/*-----------------------------------------------------------------------*/
static struct panel_config sla_al00_va_ofilm_nt35521sb_5p0_720p_video_panel_data = {
        "lcdkit_sla_al00_va_ofilm_nt35521sb_5p0_720p_video", "dsi:0:", 
        "ofilm_nt35521sb_5p0_720p_video", 10, 0, "DISPLAY_1", 0, 
        431180000, 60, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel resolution                                                      */
/*-----------------------------------------------------------------------*/
static struct panel_resolution sla_al00_va_ofilm_nt35521sb_5p0_720p_video_panel_res = {
        720, 1280, 86, 80, 20, 0, 22, 12, 8, 0, 0, 0, 0, 0, 0, 0, 0, 
        0 
};

/*-----------------------------------------------------------------------*/
/* Panel color information                                               */
/*-----------------------------------------------------------------------*/
static struct color_info sla_al00_va_ofilm_nt35521sb_5p0_720p_video_color = {
        24, 0, 0x00, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel on/off command                                                  */
/*-----------------------------------------------------------------------*/
static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd0[] = {
    0x05, 0x00, 0x29, 0xC0,
    0xFF, 0xAA, 0x55, 0x25,
    0x01, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd1[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xFC, 0x08, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd2[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xFC, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd3[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x6F, 0x21, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd4[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xF7, 0x01, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd5[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x6F, 0x21, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd6[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xF7, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd7[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x6F, 0x1A, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd8[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xF7, 0x05, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd9[] = {
    0x05, 0x00, 0x29, 0xC0,
    0xFF, 0xAA, 0x55, 0x25,
    0x00, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd10[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xF0, 0x55, 0xAA, 0x52,
    0x08, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd11[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD6, 0x11, 0x11, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd12[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xD9, 0x01, 0x02, 0x00,
   };


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd13[] = {
    0x0D, 0x00, 0x29, 0xC0,
    0xCE, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10,
    0x10, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd14[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x6F, 0x03, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd15[] = {
    0x04, 0x00, 0x29, 0xC0,
    0xCC, 0x00, 0x00, 0x00,
   };


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd16[] = {
    0x05, 0x00, 0x29, 0xC0,
    0xB8, 0x01, 0x02, 0x0C,
    0x02, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd17[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBB, 0x11, 0x11, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd18[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBC, 0x00, 0x00, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd19[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xB6, 0x04, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd20[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC8, 0x80, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd21[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xF0, 0x55, 0xAA, 0x52,
    0x08, 0x01, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd22[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB0, 0x09, 0x09, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd23[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB1, 0x09, 0x09, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd24[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBC, 0x88, 0x00, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd25[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBD, 0x88, 0x00, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd26[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xCA, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd27[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC0, 0x0C, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd28[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB5, 0x03, 0x03, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd29[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xBE, 0x3E, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd30[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB3, 0x19, 0x19, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd31[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB4, 0x19, 0x19, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd32[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB9, 0x26, 0x26, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd33[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBA, 0x24, 0x24, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd34[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xF0, 0x55, 0xAA, 0x52,
    0x08, 0x02, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd35[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xEE, 0x01, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd36[] = {
    0x11, 0x00, 0x29, 0xC0,
    0xB0, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x1D, 0x00,
    0x2F, 0x00, 0x3E, 0x00,
    0x5C, 0x00, 0x76, 0x00,
    0xA2, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd37[] = {
    0x11, 0x00, 0x29, 0xC0,
    0xB1, 0x00, 0xC6, 0x01,
    0x04, 0x01, 0x36, 0x01,
    0x85, 0x01, 0xC7, 0x01,
    0xC8, 0x02, 0x03, 0x02,
    0x46, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd38[] = {
    0x11, 0x00, 0x29, 0xC0,
    0xB2, 0x02, 0x71, 0x02,
    0xAE, 0x02, 0xD8, 0x03,
    0x11, 0x03, 0x37, 0x03,
    0x68, 0x03, 0x89, 0x03,
    0xB0, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd39[] = {
    0x05, 0x00, 0x29, 0xC0,
    0xB3, 0x03, 0xDD, 0x03,
    0xFF, 0xFF, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd40[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xF0, 0x55, 0xAA, 0x52,
    0x08, 0x06, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd41[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB0, 0x10, 0x12, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd42[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB1, 0x14, 0x16, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd43[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB2, 0x00, 0x02, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd44[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB3, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd45[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB4, 0x31, 0x34, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd46[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB5, 0x34, 0x34, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd47[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB6, 0x34, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd48[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB7, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd49[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB8, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd50[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB9, 0x2D, 0x2E, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd51[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBA, 0x2E, 0x2D, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd52[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBB, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd53[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBC, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd54[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBD, 0x31, 0x34, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd55[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBE, 0x34, 0x34, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd56[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xBF, 0x34, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd57[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC0, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd58[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC1, 0x03, 0x01, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd59[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC2, 0x17, 0x15, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd60[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC3, 0x13, 0x11, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd61[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xE5, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd62[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC4, 0x17, 0x15, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd63[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC5, 0x13, 0x11, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd64[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC6, 0x03, 0x01, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd65[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC7, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd66[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC8, 0x31, 0x34, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd67[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC9, 0x34, 0x34, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd68[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCA, 0x34, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd69[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCB, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd70[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCC, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd71[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCD, 0x2E, 0x2D, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd72[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCE, 0x2D, 0x2E, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd73[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCF, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd74[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD0, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd75[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD1, 0x31, 0x34, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd76[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD2, 0x34, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd77[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD3, 0x34, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd78[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD4, 0x31, 0x31, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd79[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD5, 0x00, 0x02, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd80[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD6, 0x10, 0x12, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd81[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xD7, 0x14, 0x16, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd82[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xE6, 0x32, 0x32, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd83[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xD8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd84[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xD9, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd85[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xE7, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd86[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xF0, 0x55, 0xAA, 0x52,
    0x08, 0x05, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd87[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xED, 0x30, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd88[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB0, 0x17, 0x06, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd89[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xB8, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd90[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC0, 0x0D, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd91[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC1, 0x0B, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd92[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC2, 0x23, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd93[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC3, 0x40, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd94[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC4, 0x84, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd95[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC5, 0x82, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd96[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC6, 0x82, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd97[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC7, 0x80, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd98[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC8, 0x0B, 0x30, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd99[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xC9, 0x05, 0x10, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd100[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCA, 0x01, 0x10, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd101[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xCB, 0x01, 0x10, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd102[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xD1, 0x03, 0x05, 0x05,
    0x07, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd103[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xD2, 0x03, 0x05, 0x09,
    0x03, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd104[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xD3, 0x00, 0x00, 0x6A,
    0x07, 0x10, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd105[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xD4, 0x30, 0x00, 0x6A,
    0x07, 0x10, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd106[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xF0, 0x55, 0xAA, 0x52,
    0x08, 0x03, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd107[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB0, 0x00, 0x00, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd108[] = {
    0x03, 0x00, 0x29, 0xC0,
    0xB1, 0x00, 0x00, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd109[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB2, 0x05, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd110[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB3, 0x05, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd111[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB4, 0x05, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd112[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB5, 0x05, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd113[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB6, 0x02, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd114[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB7, 0x02, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd115[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB8, 0x02, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd116[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xB9, 0x02, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd117[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xBA, 0x53, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd118[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xBB, 0x53, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd119[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xBC, 0x53, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd120[] = {
    0x06, 0x00, 0x29, 0xC0,
    0xBD, 0x53, 0x00, 0x0A,
    0x00, 0x00, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd121[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC4, 0x60, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd122[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC5, 0x40, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd123[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC6, 0x64, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd124[] = {
    0x02, 0x00, 0x29, 0xC0,
    0xC7, 0x44, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd125[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x53, 0x2C, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd126[] = {
    0x02, 0x00, 0x29, 0xC0,
    0x55, 0x82, 0xFF, 0xFF};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd127[] = {
    0x11, 0x00, 0x05, 0x80};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd128[] = {
    0x29, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_command[] = {
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd0, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd1, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd2, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd3, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd4, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd5, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd6, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd7, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd8, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd9, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd10, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd11, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd12, 0x00},
{0x14, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd13, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd14, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd15, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd16, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd17, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd18, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd19, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd20, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd21, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd22, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd23, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd24, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd25, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd26, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd27, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd28, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd29, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd30, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd31, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd32, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd33, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd34, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd35, 0x00},
{0x18, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd36, 0x00},
{0x18, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd37, 0x00},
{0x18, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd38, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd39, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd40, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd41, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd42, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd43, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd44, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd45, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd46, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd47, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd48, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd49, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd50, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd51, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd52, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd53, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd54, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd55, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd56, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd57, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd58, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd59, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd60, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd61, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd62, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd63, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd64, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd65, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd66, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd67, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd68, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd69, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd70, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd71, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd72, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd73, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd74, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd75, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd76, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd77, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd78, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd79, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd80, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd81, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd82, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd83, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd84, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd85, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd86, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd87, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd88, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd89, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd90, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd91, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd92, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd93, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd94, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd95, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd96, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd97, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd98, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd99, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd100, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd101, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd102, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd103, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd104, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd105, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd106, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd107, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd108, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd109, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd110, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd111, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd112, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd113, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd114, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd115, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd116, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd117, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd118, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd119, 0x00},
{0xc, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd120, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd121, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd122, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd123, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd124, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd125, 0x00},
{0x8, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd126, 0x00},
{0x4, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd127, 0x78},
{0x4, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_on_cmd128, 0x14}
};
#define SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_ON_COMMAND 129


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_off_cmd0[] = {
    0x28, 0x00, 0x05, 0x80};


static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_off_cmd1[] = {
    0x10, 0x00, 0x05, 0x80};




static struct mipi_dsi_cmd sla_al00_va_ofilm_nt35521sb_5p0_720p_video_off_command[] = {
{0x4, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_off_cmd0, 0x20},
{0x4, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_off_cmd1, 0x78}
};
#define SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_OFF_COMMAND 2


static struct command_state sla_al00_va_ofilm_nt35521sb_5p0_720p_video_state = {
        0, 0 
};

/*-----------------------------------------------------------------------*/
/* Command mode panel                                                    */
/*-----------------------------------------------------------------------*/
static struct commandpanel_info sla_al00_va_ofilm_nt35521sb_5p0_720p_video_command_panel = {
        0, 1, 1, 0, 0, 0x2c, 0, 0, 0, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* Video mode panel                                                      */
/*-----------------------------------------------------------------------*/
static struct videopanel_info sla_al00_va_ofilm_nt35521sb_5p0_720p_video_video_panel = {
        1, 0, 0, 0, 1, 1, 2, 0, 0x9 
};

/*-----------------------------------------------------------------------*/
/* Lane configuration                                                    */
/*-----------------------------------------------------------------------*/
static struct lane_configuration sla_al00_va_ofilm_nt35521sb_5p0_720p_video_lane_config = {
        4, 0, 1, 1, 1, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* Panel timing                                                          */
/*-----------------------------------------------------------------------*/
static const uint32_t sla_al00_va_ofilm_nt35521sb_5p0_720p_video_timings[]= {
        0x7A, 0x1A, 0x12, 0x00, 0x40, 0x42, 0x16, 0x1E, 0x14, 0x03, 0x04, 0x00 
};

static struct panel_timing sla_al00_va_ofilm_nt35521sb_5p0_720p_video_timing_info = {
        0, 4, 0x04, 0x1A 
};

/*-----------------------------------------------------------------------*/
/* Panel reset sequence                                                  */
/*-----------------------------------------------------------------------*/
static struct panel_reset_sequence sla_al00_va_ofilm_nt35521sb_5p0_720p_video_reset_seq = {
    { 1, 0, 1, }, { 20, 2, 20, }, 2
};

/*-----------------------------------------------------------------------*/
/* Backlight setting                                                     */
/*-----------------------------------------------------------------------*/
static struct backlight sla_al00_va_ofilm_nt35521sb_5p0_720p_video_backlight = {
        2, 4, 255, 1, 2, 0 
};

/*-----------------------------------------------------------------------*/
/* Labibb setting                                                        */
/*-----------------------------------------------------------------------*/
static struct labibb_desc sla_al00_va_ofilm_nt35521sb_5p0_720p_video_labibb = {
        0, 1, 5500000, 5500000, 5500000, 5500000, 20, 3, 1, 0 
};

/*-----------------------------------------------------------------------*/
/* turn on backlight delay                                               */
/*-----------------------------------------------------------------------*/
int sla_al00_va_ofilm_nt35521sb_5p0_720p_video_mdp_pipe_type  = MDSS_MDP_PIPE_TYPE_RGB;

int sla_al00_va_ofilm_nt35521sb_5p0_720p_video_dsi_pll_type  = DSI_PLL_TYPE_28NM;

int sla_al00_va_ofilm_nt35521sb_5p0_720p_video_mipi_signature  = 0xffff;

static const uint32_t sla_al00_va_ofilm_nt35521sb_5p0_720p_video_regulator_setting[]= {
        0x03, 0x08, 0x07, 0x00, 0x20, 0x07, 0x01 
};

/*-----------------------------------------------------------------------*/
/* platform Config                                                       */
/*-----------------------------------------------------------------------*/
static struct lcdkit_platform_config sla_al00_va_ofilm_nt35521sb_5p0_720p_video_panel_platform_config = {
        0, 0, 0, 0, 0x10002, 0x10000, 0x200, 0x20, 0, 0, 0, 60, 0, 
        0, 0, 46, 45, 0, 0, 0, 0, 0, 5500000, 5500000, 108, 0, 0, 0, 
        0, 1, 0, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* misc Information                                                      */
/*-----------------------------------------------------------------------*/
static struct lcdkit_misc_info sla_al00_va_ofilm_nt35521sb_5p0_720p_video_panel_misc_info = {
        0, 0, 0, 0x01, 0x02, 0x01, 0x02, 1, 0, 0 
};

/*-----------------------------------------------------------------------*/
/* delay ctrl                                                            */
/*-----------------------------------------------------------------------*/
static struct lcdkit_delay_ctrl sla_al00_va_ofilm_nt35521sb_5p0_720p_video_panel_delay_ctrl = {
        0, 0, 0, 20, 20, 3, 0, 0, 0, 0, 0, 20, 0, 50 
};

static char sla_al00_va_ofilm_nt35521sb_5p0_720p_video_backlight_cmd0[] = {
    0x51, 0x00, 0x15, 0x80};




static struct mipi_dsi_cmd sla_al00_va_ofilm_nt35521sb_5p0_720p_video_backlight_command[] = {
{0x4, sla_al00_va_ofilm_nt35521sb_5p0_720p_video_backlight_cmd0, 0x00}
};
#define SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_BACKLIGHT_COMMAND 1



static struct lcd_bias_voltage_info * sla_al00_va_ofilm_nt35521sb_5p0_720p_video_bias_ic_array[0];
 
#define SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_BIAS_IC_ARRAY 0


static struct backlight_ic_info * sla_al00_va_ofilm_nt35521sb_5p0_720p_video_backlight_ic_array[0];
 
#define SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_BACKLIGHT_IC_ARRAY 0


#endif /*_PANEL_SLA_AL00_VA_OFILM_NT35521SB_5P0_720P_VIDEO_H_*/
