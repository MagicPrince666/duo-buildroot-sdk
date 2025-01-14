#ifndef _MIPI_TX_PARAM_ST_7701_H_
#define _MIPI_TX_PARAM_ST_7701_H_

#include <linux/vo_mipi_tx.h>
#include <linux/cvi_comm_mipi_tx.h>

#define PANEL_NAME "NETEASE-2"

#define ST7701_NETEASE_VACT	800
#define ST7701_NETEASE_VSA		10
#define ST7701_NETEASE_VBP		20
#define ST7701_NETEASE_VFP		20

#define ST7701_NETEASE_HACT		480
#define ST7701_NETEASE_HSA		10
#define ST7701_NETEASE_HBP		50
#define ST7701_NETEASE_HFP		50

#define PIXEL_CLK(x) ((x##_VACT + x##_VSA + x##_VBP + x##_VFP) \
	* (x##_HACT + x##_HSA + x##_HBP + x##_HFP) * 60 / 1000)

struct combo_dev_cfg_s dev_cfg_st7701_480x800 = {
	.devno = 0,
	.lane_id = {MIPI_TX_LANE_1, MIPI_TX_LANE_0, MIPI_TX_LANE_CLK, -1, -1},
	.lane_pn_swap = {false, false, false, false, false},
	.output_mode = OUTPUT_MODE_DSI_VIDEO,
	.video_mode = BURST_MODE,
	.output_format = OUT_FORMAT_RGB_24_BIT,
	.sync_info = {
		.vid_hsa_pixels = ST7701_NETEASE_HSA,
		.vid_hbp_pixels = ST7701_NETEASE_HBP,
		.vid_hfp_pixels = ST7701_NETEASE_HFP,
		.vid_hline_pixels = ST7701_NETEASE_HACT,
		.vid_vsa_lines = ST7701_NETEASE_VSA,
		.vid_vbp_lines = ST7701_NETEASE_VBP,
		.vid_vfp_lines = ST7701_NETEASE_VFP,
		.vid_active_lines = ST7701_NETEASE_VACT,
		.vid_vsa_pos_polarity = true,
		.vid_hsa_pos_polarity = false,
	},
	.pixel_clk = PIXEL_CLK(ST7701_NETEASE),
};

const struct hs_settle_s hs_timing_cfg_st7701_480x800 = { .prepare = 6, .zero = 32, .trail = 1 };

static CVI_U8 data_st7701_0[] = { 0x01};
static CVI_U8 data_st7701_1[] = { 0x11 };
static CVI_U8 data_st7701_2[] = { 0xff, 0x77, 0x01, 0x00, 0x00, 0x11 };
static CVI_U8 data_st7701_3[] = { 0xd1, 0x11 };
static CVI_U8 data_st7701_4[] = { 0x55, 0xb0 };
static CVI_U8 data_st7701_5[] = { 0xff, 0x77, 0x01, 0x01, 0x00, 0x00, 0x10};
static CVI_U8 data_st7701_6[] = { 0xc0, 0x63, 0x00 };
static CVI_U8 data_st7701_7[] = { 0xc1, 0x09, 0x02 };
static CVI_U8 data_st7701_8[] = { 0xC2, 0x37, 0x08 };
static CVI_U8 data_st7701_9[] = { 0xC7, 0x04 };
static CVI_U8 data_st7701_10[] = { 0xCC, 0x38 };
static CVI_U8 data_st7701_11[] = { 0xB0, 0x00, 0x01, 0x19, 0x0C, 0x10, 0x06, 0x07, 0x0A, 0x09, 0x22, 0x04, 0x10, 0x0E, 0x28, 0x30, 0x1C };
static CVI_U8 data_st7701_12[] = { 0xB1, 0x00, 0x12, 0x19, 0x0D, 0x10, 0x04, 0x06, 0x07, 0x08, 0x23, 0x04, 0x12, 0x11, 0x28, 0x30, 0x1C };
static CVI_U8 data_st7701_13[] = { 0xFF, 0x77, 0x01, 0x00, 0x00, 0x11 };
static CVI_U8 data_st7701_14[] = { 0xB0, 0x4D };
static CVI_U8 data_st7701_15[] = { 0xB1, 0x60 };
static CVI_U8 data_st7701_16[] = { 0xB2, 0x07 };
static CVI_U8 data_st7701_17[] = { 0xB3, 0x80 };
static CVI_U8 data_st7701_18[] = { 0xB5, 0x47 };
static CVI_U8 data_st7701_19[] = { 0xB7, 0x8A };
static CVI_U8 data_st7701_20[] = { 0xB8, 0x21 };
static CVI_U8 data_st7701_21[] = { 0xC1, 0x78 };
static CVI_U8 data_st7701_22[] = { 0xC2, 0x78 };
static CVI_U8 data_st7701_23[] = { 0xD0, 0x88 };
static CVI_U8 data_st7701_24[] = { 0xE0, 0x00, 0x00, 0x02 };
static CVI_U8 data_st7701_25[] = { 0xE1, 0x01, 0xA0, 0x03, 0xA0, 0x02, 0xA0, 0x04, 0xA0, 0x00, 0x44, 0x44 };
static CVI_U8 data_st7701_26[] = { 0xE2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
static CVI_U8 data_st7701_27[] = { 0xe3, 0x00, 0x00, 0x33, 0x33 };
static CVI_U8 data_st7701_28[] = { 0xe4, 0x44, 0x44 };
static CVI_U8 data_st7701_29[] = { 0xE5, 0x01, 0x26, 0xA0, 0xA0, 0x03, 0x28, 0xA0, 0xA0, 0x05, 0x2A, 0xA0, 0xA0, 0x07, 0x2C, 0xA0, 0xA0 };
static CVI_U8 data_st7701_30[] = { 0xe6, 0x00, 0x00, 0x33, 0x33 };
static CVI_U8 data_st7701_31[] = { 0xe7, 0x44, 0x44 };
static CVI_U8 data_st7701_32[] = { 0xE8, 0x02, 0x26, 0xA0, 0xA0, 0x04, 0x28, 0xA0, 0xA0, 0x06, 0x2A, 0xA0, 0xA0, 0x08, 0x2C, 0xA0, 0xA0 };
static CVI_U8 data_st7701_33[] = { 0xEB, 0x00, 0x01, 0xE4, 0xE4, 0x44, 0x00, 0x40};
static CVI_U8 data_st7701_34[] = { 0xED, 0xFF, 0xF7, 0x65, 0x4F, 0x0B, 0xA1, 0xCF, 0xFF, 0xFF, 0xFC, 0x1A, 0xB0, 0xF4, 0x56, 0x7F, 0xFF };
static CVI_U8 data_st7701_35[] = { 0xFF, 0x77, 0x01, 0x00, 0x00, 0x00 };
static CVI_U8 data_st7701_36[] = { 0x36, 0x10 };
static CVI_U8 data_st7701_37[] = { 0x3A, 0x55 };
static CVI_U8 data_st7701_38[] = { 0x29 };

const struct dsc_instr dsi_init_cmds_st7701_480x800[] = {
	{.delay = 120, .data_type = 0x05, .size = 1, .data = data_st7701_0 },
	{.delay = 120, .data_type = 0x05, .size = 1, .data = data_st7701_1 },
	{.delay = 0, .data_type = 0x39, .size = 6, .data = data_st7701_2 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_3 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_4 },
	{.delay = 0, .data_type = 0x39, .size = 6, .data = data_st7701_5 },
	{.delay = 0, .data_type = 0x39, .size = 3, .data = data_st7701_6 },
	{.delay = 0, .data_type = 0x39, .size = 3, .data = data_st7701_7 },
	{.delay = 0, .data_type = 0x39, .size = 3, .data = data_st7701_8 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_9 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_10 },
	{.delay = 0, .data_type = 0x39, .size = 0x11, .data = data_st7701_11 },
	{.delay = 0, .data_type = 0x39, .size = 0x11, .data = data_st7701_12 },
	{.delay = 0, .data_type = 0x39, .size = 6, .data = data_st7701_13 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_14 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_15 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_16 },
	{.delay = 0, .data_type = 0x15, .size = 3, .data = data_st7701_17 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_18 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_19 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_20 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_21 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_22 },
	{.delay = 100, .data_type = 0x15, .size = 2, .data = data_st7701_23 },
	{.delay = 0, .data_type = 0x39, .size = 4, .data = data_st7701_24 },
	{.delay = 0, .data_type = 0x39, .size = 0x0c, .data = data_st7701_25 },
	{.delay = 0, .data_type = 0x39, .size = 0x0e, .data = data_st7701_26 },
	{.delay = 0, .data_type = 0x39, .size = 5, .data = data_st7701_27 },
	{.delay = 0, .data_type = 0x39, .size = 3, .data = data_st7701_28 },
	{.delay = 0, .data_type = 0x39, .size = 0x11, .data = data_st7701_29 },
	{.delay = 0, .data_type = 0x39, .size = 5, .data = data_st7701_30 },
	{.delay = 0, .data_type = 0x39, .size = 3, .data = data_st7701_31 },
	{.delay = 0, .data_type = 0x39, .size = 0x11, .data = data_st7701_32 },
	{.delay = 0, .data_type = 0x39, .size = 8, .data = data_st7701_33 },
	{.delay = 0, .data_type = 0x39, .size = 0x11, .data = data_st7701_34 },
	{.delay = 0, .data_type = 0x39, .size = 6, .data = data_st7701_35 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_36 },
	{.delay = 0, .data_type = 0x15, .size = 2, .data = data_st7701_37 },
	{.delay = 20, .data_type = 0x05, .size = 1, .data = data_st7701_38 }
};

#else
#error "MIPI_TX_PARAM multi-delcaration!!"
#endif // _MIPI_TX_PARAM_ST_7701_H_
