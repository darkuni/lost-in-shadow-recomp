#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// SCFindU8Item
void f_801A9F20(Ctx* __restrict c) {
  trace_call(0x801A9F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A9F20
  c->r[0]=c->lr; // 801A9F24
  W32(c->r[1]+0x00000044u,c->r[0]); // 801A9F28
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801A9F2C
  W32(c->r[1]+0x00000038u,c->r[30]); // 801A9F30
  c->r[30]=0u+0x00000000u; // 801A9F34
  W32(c->r[1]+0x00000034u,c->r[29]); // 801A9F38
  c->r[29]=c->r[4]|c->r[4]; // 801A9F3C
  W32(c->r[1]+0x00000030u,c->r[28]); // 801A9F40
  c->r[28]=c->r[3]|c->r[3]; // 801A9F44
  c->lr=0x801A9F4Cu; f_801251B0(c); // 801A9F48
  c->r[0]=R32(c->r[13]+0xFFFFC384u); // 801A9F4C
  c->r[5]=0u+0x805A0000u; // 801A9F50
  c->r[31]=c->r[3]|c->r[3]; // 801A9F54
  cmpu(c,0,c->r[29],c->r[0]); // 801A9F58
  c->r[5]=c->r[5]+0x00000280u; // 801A9F5C
  if (!crb(c,0)) { goto L_801A9F9C; } // 801A9F60
  c->r[3]=R32(c->r[13]+0xFFFFC388u); // 801A9F64
  cmps(c,0,(int32_t)c->r[3],0); // 801A9F68
  if (crb(c,2)) { goto L_801A9F9C; } // 801A9F6C
  c->r[0]=0u-c->r[29]; // 801A9F70
  c->r[3]=c->r[5]+c->r[3]; // 801A9F74
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801A9F78
  c->r[0]=R16(c->r[3]+c->r[0]); // 801A9F7C
  cmps(c,0,(int32_t)c->r[0],0); // 801A9F80
  if (crb(c,2)) { goto L_801A9F9C; } // 801A9F84
  c->r[0]=R16(c->r[5]+c->r[0]); // 801A9F88
  c->r[4]=c->r[1]+0x00000008u; // 801A9F8C
  c->r[3]=c->r[5]+c->r[0]; // 801A9F90
  c->lr=0x801A9F98u; f_801A9770(c); // 801A9F94
  goto L_801A9FA0; // 801A9F98
L_801A9F9C:;
  c->r[3]=0u+0x00000000u; // 801A9F9C
L_801A9FA0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801A9FA0
  if (crb(c,2)) { goto L_801A9FC8; } // 801A9FA4
  c->r[0]=R8(c->r[1]+0x00000010u); // 801A9FA8
  cmpu(c,0,c->r[0],0x00000060u); // 801A9FAC
  if (!crb(c,2)) { goto L_801A9FC8; } // 801A9FB0
  c->r[4]=R32(c->r[1]+0x00000020u); // 801A9FB4
  c->r[3]=c->r[28]|c->r[28]; // 801A9FB8
  c->r[5]=R32(c->r[1]+0x00000018u); // 801A9FBC
  c->lr=0x801A9FC4u; f_800043C4(c); // 801A9FC0
  c->r[30]=0u+0x00000001u; // 801A9FC4
L_801A9FC8:;
  c->r[3]=c->r[31]|c->r[31]; // 801A9FC8
  c->lr=0x801A9FD0u; f_801251F0(c); // 801A9FCC
  c->r[3]=c->r[30]|c->r[30]; // 801A9FD0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801A9FD4
  c->r[30]=R32(c->r[1]+0x00000038u); // 801A9FD8
  c->r[29]=R32(c->r[1]+0x00000034u); // 801A9FDC
  c->r[28]=R32(c->r[1]+0x00000030u); // 801A9FE0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801A9FE4
  c->lr=c->r[0]; // 801A9FE8
  c->r[1]=c->r[1]+0x00000040u; // 801A9FEC
  return; // 801A9FF0
}

// SCFindS8Item
void f_801AA000(Ctx* __restrict c) {
  trace_call(0x801AA000u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA000
  c->r[0]=c->lr; // 801AA004
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AA008
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AA00C
  W32(c->r[1]+0x00000038u,c->r[30]); // 801AA010
  c->r[30]=0u+0x00000000u; // 801AA014
  W32(c->r[1]+0x00000034u,c->r[29]); // 801AA018
  c->r[29]=c->r[4]|c->r[4]; // 801AA01C
  W32(c->r[1]+0x00000030u,c->r[28]); // 801AA020
  c->r[28]=c->r[3]|c->r[3]; // 801AA024
  c->lr=0x801AA02Cu; f_801251B0(c); // 801AA028
  c->r[0]=R32(c->r[13]+0xFFFFC384u); // 801AA02C
  c->r[5]=0u+0x805A0000u; // 801AA030
  c->r[31]=c->r[3]|c->r[3]; // 801AA034
  cmpu(c,0,c->r[29],c->r[0]); // 801AA038
  c->r[5]=c->r[5]+0x00000280u; // 801AA03C
  if (!crb(c,0)) { goto L_801AA07C; } // 801AA040
  c->r[3]=R32(c->r[13]+0xFFFFC388u); // 801AA044
  cmps(c,0,(int32_t)c->r[3],0); // 801AA048
  if (crb(c,2)) { goto L_801AA07C; } // 801AA04C
  c->r[0]=0u-c->r[29]; // 801AA050
  c->r[3]=c->r[5]+c->r[3]; // 801AA054
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801AA058
  c->r[0]=R16(c->r[3]+c->r[0]); // 801AA05C
  cmps(c,0,(int32_t)c->r[0],0); // 801AA060
  if (crb(c,2)) { goto L_801AA07C; } // 801AA064
  c->r[0]=R16(c->r[5]+c->r[0]); // 801AA068
  c->r[4]=c->r[1]+0x00000008u; // 801AA06C
  c->r[3]=c->r[5]+c->r[0]; // 801AA070
  c->lr=0x801AA078u; f_801A9770(c); // 801AA074
  goto L_801AA080; // 801AA078
L_801AA07C:;
  c->r[3]=0u+0x00000000u; // 801AA07C
L_801AA080:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA080
  if (crb(c,2)) { goto L_801AA0A8; } // 801AA084
  c->r[0]=R8(c->r[1]+0x00000010u); // 801AA088
  cmpu(c,0,c->r[0],0x00000060u); // 801AA08C
  if (!crb(c,2)) { goto L_801AA0A8; } // 801AA090
  c->r[4]=R32(c->r[1]+0x00000020u); // 801AA094
  c->r[3]=c->r[28]|c->r[28]; // 801AA098
  c->r[5]=R32(c->r[1]+0x00000018u); // 801AA09C
  c->lr=0x801AA0A4u; f_800043C4(c); // 801AA0A0
  c->r[30]=0u+0x00000001u; // 801AA0A4
L_801AA0A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801AA0A8
  c->lr=0x801AA0B0u; f_801251F0(c); // 801AA0AC
  c->r[3]=c->r[30]|c->r[30]; // 801AA0B0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AA0B4
  c->r[30]=R32(c->r[1]+0x00000038u); // 801AA0B8
  c->r[29]=R32(c->r[1]+0x00000034u); // 801AA0BC
  c->r[28]=R32(c->r[1]+0x00000030u); // 801AA0C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AA0C4
  c->lr=c->r[0]; // 801AA0C8
  c->r[1]=c->r[1]+0x00000040u; // 801AA0CC
  return; // 801AA0D0
}

// SCFindU32Item
void f_801AA0E0(Ctx* __restrict c) {
  trace_call(0x801AA0E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA0E0
  c->r[0]=c->lr; // 801AA0E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AA0E8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AA0EC
  W32(c->r[1]+0x00000038u,c->r[30]); // 801AA0F0
  c->r[30]=0u+0x00000000u; // 801AA0F4
  W32(c->r[1]+0x00000034u,c->r[29]); // 801AA0F8
  c->r[29]=c->r[4]|c->r[4]; // 801AA0FC
  W32(c->r[1]+0x00000030u,c->r[28]); // 801AA100
  c->r[28]=c->r[3]|c->r[3]; // 801AA104
  c->lr=0x801AA10Cu; f_801251B0(c); // 801AA108
  c->r[0]=R32(c->r[13]+0xFFFFC384u); // 801AA10C
  c->r[5]=0u+0x805A0000u; // 801AA110
  c->r[31]=c->r[3]|c->r[3]; // 801AA114
  cmpu(c,0,c->r[29],c->r[0]); // 801AA118
  c->r[5]=c->r[5]+0x00000280u; // 801AA11C
  if (!crb(c,0)) { goto L_801AA15C; } // 801AA120
  c->r[3]=R32(c->r[13]+0xFFFFC388u); // 801AA124
  cmps(c,0,(int32_t)c->r[3],0); // 801AA128
  if (crb(c,2)) { goto L_801AA15C; } // 801AA12C
  c->r[0]=0u-c->r[29]; // 801AA130
  c->r[3]=c->r[5]+c->r[3]; // 801AA134
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801AA138
  c->r[0]=R16(c->r[3]+c->r[0]); // 801AA13C
  cmps(c,0,(int32_t)c->r[0],0); // 801AA140
  if (crb(c,2)) { goto L_801AA15C; } // 801AA144
  c->r[0]=R16(c->r[5]+c->r[0]); // 801AA148
  c->r[4]=c->r[1]+0x00000008u; // 801AA14C
  c->r[3]=c->r[5]+c->r[0]; // 801AA150
  c->lr=0x801AA158u; f_801A9770(c); // 801AA154
  goto L_801AA160; // 801AA158
L_801AA15C:;
  c->r[3]=0u+0x00000000u; // 801AA15C
L_801AA160:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA160
  if (crb(c,2)) { goto L_801AA188; } // 801AA164
  c->r[0]=R8(c->r[1]+0x00000010u); // 801AA168
  cmpu(c,0,c->r[0],0x000000A0u); // 801AA16C
  if (!crb(c,2)) { goto L_801AA188; } // 801AA170
  c->r[4]=R32(c->r[1]+0x00000020u); // 801AA174
  c->r[3]=c->r[28]|c->r[28]; // 801AA178
  c->r[5]=R32(c->r[1]+0x00000018u); // 801AA17C
  c->lr=0x801AA184u; f_800043C4(c); // 801AA180
  c->r[30]=0u+0x00000001u; // 801AA184
L_801AA188:;
  c->r[3]=c->r[31]|c->r[31]; // 801AA188
  c->lr=0x801AA190u; f_801251F0(c); // 801AA18C
  c->r[3]=c->r[30]|c->r[30]; // 801AA190
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AA194
  c->r[30]=R32(c->r[1]+0x00000038u); // 801AA198
  c->r[29]=R32(c->r[1]+0x00000034u); // 801AA19C
  c->r[28]=R32(c->r[1]+0x00000030u); // 801AA1A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AA1A4
  c->lr=c->r[0]; // 801AA1A8
  c->r[1]=c->r[1]+0x00000040u; // 801AA1AC
  return; // 801AA1B0
}

// SCReplaceU8Item
void f_801AA1C0(Ctx* __restrict c) {
  trace_call(0x801AA1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA1C0
  c->r[0]=c->lr; // 801AA1C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AA1C8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AA1CC
  W32(c->r[1]+0x00000038u,c->r[30]); // 801AA1D0
  c->r[30]=c->r[4]|c->r[4]; // 801AA1D4
  W8(c->r[1]+0x00000008u,c->r[3]); // 801AA1D8
  c->lr=0x801AA1E0u; f_801251B0(c); // 801AA1DC
  c->r[0]=R32(c->r[13]+0xFFFFC384u); // 801AA1E0
  c->r[5]=0u+0x805A0000u; // 801AA1E4
  c->r[31]=c->r[3]|c->r[3]; // 801AA1E8
  cmpu(c,0,c->r[30],c->r[0]); // 801AA1EC
  c->r[5]=c->r[5]+0x00000280u; // 801AA1F0
  if (!crb(c,0)) { goto L_801AA230; } // 801AA1F4
  c->r[3]=R32(c->r[13]+0xFFFFC388u); // 801AA1F8
  cmps(c,0,(int32_t)c->r[3],0); // 801AA1FC
  if (crb(c,2)) { goto L_801AA230; } // 801AA200
  c->r[0]=0u-c->r[30]; // 801AA204
  c->r[3]=c->r[5]+c->r[3]; // 801AA208
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801AA20C
  c->r[0]=R16(c->r[3]+c->r[0]); // 801AA210
  cmps(c,0,(int32_t)c->r[0],0); // 801AA214
  if (crb(c,2)) { goto L_801AA230; } // 801AA218
  c->r[0]=R16(c->r[5]+c->r[0]); // 801AA21C
  c->r[4]=c->r[1]+0x00000010u; // 801AA220
  c->r[3]=c->r[5]+c->r[0]; // 801AA224
  c->lr=0x801AA22Cu; f_801A9770(c); // 801AA228
  goto L_801AA234; // 801AA22C
L_801AA230:;
  c->r[3]=0u+0x00000000u; // 801AA230
L_801AA234:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA234
  if (crb(c,2)) { goto L_801AA288; } // 801AA238
  c->r[0]=R8(c->r[1]+0x00000018u); // 801AA23C
  cmpu(c,0,c->r[0],0x00000060u); // 801AA240
  if (!crb(c,2)) { goto L_801AA280; } // 801AA244
  c->r[3]=R32(c->r[1]+0x00000028u); // 801AA248
  c->r[4]=c->r[1]+0x00000008u; // 801AA24C
  c->r[5]=R32(c->r[1]+0x00000020u); // 801AA250
  c->lr=0x801AA258u; f_802EBD2C(c); // 801AA254
  cmps(c,0,(int32_t)c->r[3],0); // 801AA258
  if (crb(c,2)) { goto L_801AA278; } // 801AA25C
  c->r[3]=R32(c->r[1]+0x00000028u); // 801AA260
  c->r[4]=c->r[1]+0x00000008u; // 801AA264
  c->r[5]=R32(c->r[1]+0x00000020u); // 801AA268
  c->lr=0x801AA270u; f_800043C4(c); // 801AA26C
  c->r[0]=0u+0x00000001u; // 801AA270
  W8(c->r[13]+0xFFFFC38Du,c->r[0]); // 801AA274
L_801AA278:;
  c->r[30]=0u+0x00000001u; // 801AA278
  goto L_801AA2A0; // 801AA27C
L_801AA280:;
  c->r[3]=c->r[30]|c->r[30]; // 801AA280
  c->lr=0x801AA288u; f_801A98F0(c); // 801AA284
L_801AA288:;
  c->r[3]=c->r[30]|c->r[30]; // 801AA288
  c->r[5]=c->r[1]+0x00000008u; // 801AA28C
  c->r[4]=0u+0x00000060u; // 801AA290
  c->r[6]=0u+0x00000000u; // 801AA294
  c->lr=0x801AA29Cu; f_801A9A90(c); // 801AA298
  c->r[30]=c->r[3]|c->r[3]; // 801AA29C
L_801AA2A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801AA2A0
  c->lr=0x801AA2A8u; f_801251F0(c); // 801AA2A4
  c->r[3]=c->r[30]|c->r[30]; // 801AA2A8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AA2AC
  c->r[30]=R32(c->r[1]+0x00000038u); // 801AA2B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AA2B4
  c->lr=c->r[0]; // 801AA2B8
  c->r[1]=c->r[1]+0x00000040u; // 801AA2BC
  return; // 801AA2C0
}

// fn_801AA2D0
void f_801AA2D0(Ctx* __restrict c) {
  trace_call(0x801AA2D0u);
  c->r[3]=0u+0x805A0000u; // 801AA2D0
  c->r[3]=c->r[3]+0x000000E0u; // 801AA2D4
  f_8012A1C0(c); return; // 801AA2D8
}

// SCFlushAsync
void f_801AA2E0(Ctx* __restrict c) {
  trace_call(0x801AA2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA2E0
  c->r[0]=c->lr; // 801AA2E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AA2E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AA2EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AA2F0
  c->r[30]=c->r[3]|c->r[3]; // 801AA2F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AA2F8
  c->r[29]=0u+0x805A0000u; // 801AA2FC
  c->r[29]=c->r[29]+0x000000E0u; // 801AA300
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AA304
  c->r[28]=c->r[29]+0x00000000u; // 801AA308
  c->lr=0x801AA310u; f_801251B0(c); // 801AA30C
  c->r[0]=R8(c->r[13]+0xFFFFC378u); // 801AA310
  c->r[31]=c->r[3]|c->r[3]; // 801AA314
  cmps(c,0,(int32_t)c->r[0],0); // 801AA318
  if (!crb(c,2)) { goto L_801AA4AC; } // 801AA31C
  c->r[0]=0u+0x00000000u; // 801AA320
  c->r[3]=0u+0x00000001u; // 801AA324
  cmpu(c,0,c->r[30],c->r[0]); // 801AA328
  W8(c->r[13]+0xFFFFC378u,c->r[3]); // 801AA32C
  if (!crb(c,2)) { goto L_801AA33C; } // 801AA330
  c->r[30]=0u+0x801B0000u; // 801AA334
  c->r[30]=c->r[30]+0xFFFFA2D0u; // 801AA338
L_801AA33C:;
  c->r[0]=R8(c->r[13]+0xFFFFC38Du); // 801AA33C
  c->r[4]=0u+0x00000000u; // 801AA340
  c->r[3]=0u+0x00004000u; // 801AA344
  W32(c->r[28]+0x00000184u,c->r[30]); // 801AA348
  cmps(c,0,(int32_t)c->r[0],0); // 801AA34C
  W32(c->r[28]+0x00000188u,c->r[4]); // 801AA350
  W8(c->r[28]+0x00000159u,c->r[4]); // 801AA354
  W32(c->r[28]+0x0000018Cu,c->r[3]); // 801AA358
  if (crb(c,2)) { goto L_801AA368; } // 801AA35C
  c->r[0]=0u+0x00000001u; // 801AA360
  goto L_801AA36C; // 801AA364
L_801AA368:;
  c->r[0]=0u+0x00000000u; // 801AA368
L_801AA36C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AA36C
  if (!crb(c,2)) { goto L_801AA3D4; } // 801AA370
  c->r[3]=c->r[31]|c->r[31]; // 801AA374
  c->lr=0x801AA37Cu; f_801251F0(c); // 801AA378
  c->r[29]=c->r[29]+0x00000000u; // 801AA37C
  c->r[0]=R32(c->r[29]+0x00000188u); // 801AA380
  cmps(c,0,(int32_t)c->r[0],0); // 801AA384
  if (crb(c,2)) { goto L_801AA394; } // 801AA388
  c->r[0]=0u+0x00000001u; // 801AA38C
  W8(c->r[13]+0xFFFFC38Du,c->r[0]); // 801AA390
L_801AA394:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 801AA394
  cmps(c,0,(int32_t)c->r[12],0); // 801AA398
  if (crb(c,2)) { goto L_801AA3C8; } // 801AA39C
  c->r[30]=0u+0x00000000u; // 801AA3A0
  W32(c->r[29]+0x00000184u,c->r[30]); // 801AA3A4
  c->r[3]=R32(c->r[29]+0x00000188u); // 801AA3A8
  c->ctr=c->r[12]; // 801AA3AC
  if (true) { c->lr=0x801AA3B4u; dispatch(c,c->ctr); } // 801AA3B0
  c->r[0]=R32(c->r[29]+0x00000000u); // 801AA3B4
  cmpu(c,0,c->r[0],c->r[30]); // 801AA3B8
  if (crb(c,2)) { goto L_801AA3C8; } // 801AA3BC
  c->r[3]=c->r[29]|c->r[29]; // 801AA3C0
  c->lr=0x801AA3C8u; f_8012A1C0(c); // 801AA3C4
L_801AA3C8:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 801AA3C8
  W8(c->r[13]+0xFFFFC378u,c->r[0]); // 801AA3CC
  goto L_801AA4DC; // 801AA3D0
L_801AA3D4:;
  c->r[30]=0u+0x00000000u; // 801AA3D4
  W8(c->r[13]+0xFFFFC38Du,c->r[30]); // 801AA3D8
  c->r[3]=c->r[29]+0x000041A0u; // 801AA3DC
  c->r[4]=c->r[29]+0x000001A0u; // 801AA3E0
  c->r[5]=0u+0x00004000u; // 801AA3E4
  c->lr=0x801AA3ECu; f_800043C4(c); // 801AA3E8
  c->r[3]=c->r[31]|c->r[31]; // 801AA3EC
  c->lr=0x801AA3F4u; f_801251F0(c); // 801AA3F0
  c->r[3]=0u+0x80310000u; // 801AA3F4
  c->r[31]=0u+0x801B0000u; // 801AA3F8
  W8(c->r[28]+0x00000158u,c->r[30]); // 801AA3FC
  c->r[3]=c->r[3]+0xFFFF9C40u; // 801AA400
  c->r[4]=c->r[28]+0x00000150u; // 801AA404
  c->r[5]=c->r[31]+0xFFFFA500u; // 801AA408
  c->r[6]=c->r[28]+0x00000094u; // 801AA40C
  c->lr=0x801AA414u; f_801AE420(c); // 801AA410
  cmps(c,0,(int32_t)c->r[3],0); // 801AA414
  if (crb(c,2)) { goto L_801AA4DC; } // 801AA418
  c->r[5]=c->r[29]+0x00000000u; // 801AA41C
  c->r[3]=0u+0x00000002u; // 801AA420
  c->r[0]=R8(c->r[5]+0x00000159u); // 801AA424
  W32(c->r[5]+0x00000188u,c->r[3]); // 801AA428
  cmps(c,0,(int32_t)c->r[0],0); // 801AA42C
  if (crb(c,2)) { goto L_801AA454; } // 801AA430
  c->r[0]=0u+0x00000009u; // 801AA434
  W8(c->r[5]+0x00000158u,c->r[0]); // 801AA438
  c->r[3]=c->r[5]+0x00000008u; // 801AA43C
  c->r[4]=c->r[31]+0xFFFFA500u; // 801AA440
  c->r[5]=c->r[5]+0x00000094u; // 801AA444
  c->lr=0x801AA44Cu; f_801AC950(c); // 801AA448
  cmps(c,0,(int32_t)c->r[3],0); // 801AA44C
  if (crb(c,2)) { goto L_801AA4DC; } // 801AA450
L_801AA454:;
  c->r[29]=c->r[29]+0x00000000u; // 801AA454
  c->r[0]=R32(c->r[29]+0x00000188u); // 801AA458
  cmps(c,0,(int32_t)c->r[0],0); // 801AA45C
  if (crb(c,2)) { goto L_801AA46C; } // 801AA460
  c->r[0]=0u+0x00000001u; // 801AA464
  W8(c->r[13]+0xFFFFC38Du,c->r[0]); // 801AA468
L_801AA46C:;
  c->r[12]=R32(c->r[29]+0x00000184u); // 801AA46C
  cmps(c,0,(int32_t)c->r[12],0); // 801AA470
  if (crb(c,2)) { goto L_801AA4A0; } // 801AA474
  c->r[31]=0u+0x00000000u; // 801AA478
  W32(c->r[29]+0x00000184u,c->r[31]); // 801AA47C
  c->r[3]=R32(c->r[29]+0x00000188u); // 801AA480
  c->ctr=c->r[12]; // 801AA484
  if (true) { c->lr=0x801AA48Cu; dispatch(c,c->ctr); } // 801AA488
  c->r[0]=R32(c->r[29]+0x00000000u); // 801AA48C
  cmpu(c,0,c->r[0],c->r[31]); // 801AA490
  if (crb(c,2)) { goto L_801AA4A0; } // 801AA494
  c->r[3]=c->r[29]|c->r[29]; // 801AA498
  c->lr=0x801AA4A0u; f_8012A1C0(c); // 801AA49C
L_801AA4A0:;
  c->r[0]=R32(c->r[29]+0x00000188u); // 801AA4A0
  W8(c->r[13]+0xFFFFC378u,c->r[0]); // 801AA4A4
  goto L_801AA4DC; // 801AA4A8
L_801AA4AC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AA4AC
  if (crb(c,2)) { goto L_801AA4D4; } // 801AA4B0
  cmpu(c,0,c->r[0],0x00000001u); // 801AA4B4
  if (!crb(c,2)) { goto L_801AA4C0; } // 801AA4B8
  goto L_801AA4C4; // 801AA4BC
L_801AA4C0:;
  c->r[0]=0u+0x00000002u; // 801AA4C0
L_801AA4C4:;
  c->r[12]=c->r[30]|c->r[30]; // 801AA4C4
  c->r[3]=c->r[0]|c->r[0]; // 801AA4C8
  c->ctr=c->r[12]; // 801AA4CC
  if (true) { c->lr=0x801AA4D4u; dispatch(c,c->ctr); } // 801AA4D0
L_801AA4D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801AA4D4
  c->lr=0x801AA4DCu; f_801251F0(c); // 801AA4D8
L_801AA4DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AA4DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AA4E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AA4E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AA4E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AA4EC
  c->lr=c->r[0]; // 801AA4F0
  c->r[1]=c->r[1]+0x00000020u; // 801AA4F4
  return; // 801AA4F8
}

// MyNandCallback
void f_801AA500(Ctx* __restrict c) {
  trace_call(0x801AA500u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA500
  c->r[0]=c->lr; // 801AA504
  c->r[7]=0u+0x805A0000u; // 801AA508
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA50C
  c->r[7]=c->r[7]+0x000000E0u; // 801AA510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AA514
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AA518
  c->r[0]=R8(c->r[7]+0x00000158u); // 801AA51C
  cmpu(c,0,c->r[0],0x00000009u); // 801AA520
  if (crb(c,1)) { goto L_801AA820; } // 801AA524
  c->r[4]=0u+0x803A0000u; // 801AA528
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AA52C
  c->r[4]=c->r[4]+0xFFFF9D28u; // 801AA530
  c->r[4]=R32(c->r[4]+c->r[0]); // 801AA534
  c->ctr=c->r[4]; // 801AA538
  if (true) { switch (c->ctr) { case 0x801AA540u: goto L_801AA540; case 0x801AA584u: goto L_801AA584; case 0x801AA5C4u: goto L_801AA5C4; case 0x801AA5F4u: goto L_801AA5F4; case 0x801AA63Cu: goto L_801AA63C; case 0x801AA670u: goto L_801AA670; case 0x801AA6A4u: goto L_801AA6A4; case 0x801AA6E8u: goto L_801AA6E8; case 0x801AA724u: goto L_801AA724; case 0x801AA72Cu: goto L_801AA72C; default: break; } dispatch(c,c->ctr); return; } // 801AA53C
L_801AA540:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA540
  if (!crb(c,2)) { goto L_801AA598; } // 801AA544
  c->r[0]=R8(c->r[7]+0x00000150u); // 801AA548
  cmpu(c,0,c->r[0],0x00000001u); // 801AA54C
  if (!crb(c,2)) { goto L_801AA598; } // 801AA550
  c->r[0]=0u+0x00000001u; // 801AA554
  c->r[3]=0u+0x80310000u; // 801AA558
  c->r[5]=0u+0x801B0000u; // 801AA55C
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA560
  c->r[3]=c->r[3]+0xFFFF9C40u; // 801AA564
  c->r[4]=c->r[7]+0x00000150u; // 801AA568
  c->r[5]=c->r[5]+0xFFFFA500u; // 801AA56C
  c->r[6]=c->r[7]+0x00000094u; // 801AA570
  c->lr=0x801AA578u; f_801AC160(c); // 801AA574
  cmps(c,0,(int32_t)c->r[3],0); // 801AA578
  if (!crb(c,2)) { goto L_801AA788; } // 801AA57C
  goto L_801AA820; // 801AA580
L_801AA584:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA584
  if (!crb(c,2)) { goto L_801AA598; } // 801AA588
  c->r[0]=R8(c->r[7]+0x00000157u); // 801AA58C
  cmpu(c,0,c->r[0],0x0000003Fu); // 801AA590
  if (crb(c,2)) { goto L_801AA670; } // 801AA594
L_801AA598:;
  c->r[0]=0u+0x00000002u; // 801AA598
  c->r[3]=0u+0x80310000u; // 801AA59C
  c->r[4]=0u+0x801B0000u; // 801AA5A0
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA5A4
  c->r[3]=c->r[3]+0xFFFF9C40u; // 801AA5A8
  c->r[5]=c->r[7]+0x00000094u; // 801AA5AC
  c->r[4]=c->r[4]+0xFFFFA500u; // 801AA5B0
  c->lr=0x801AA5B8u; f_801AB4F0(c); // 801AA5B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AA5B8
  if (!crb(c,2)) { goto L_801AA788; } // 801AA5BC
  goto L_801AA820; // 801AA5C0
L_801AA5C4:;
  c->r[0]=0u+0x00000003u; // 801AA5C4
  c->r[3]=0u+0x80310000u; // 801AA5C8
  c->r[5]=0u+0x801B0000u; // 801AA5CC
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA5D0
  c->r[3]=c->r[3]+0xFFFF9C30u; // 801AA5D4
  c->r[4]=c->r[7]+0x00000150u; // 801AA5D8
  c->r[5]=c->r[5]+0xFFFFA500u; // 801AA5DC
  c->r[6]=c->r[7]+0x00000094u; // 801AA5E0
  c->lr=0x801AA5E8u; f_801AE420(c); // 801AA5E4
  cmps(c,0,(int32_t)c->r[3],0); // 801AA5E8
  if (!crb(c,2)) { goto L_801AA788; } // 801AA5EC
  goto L_801AA820; // 801AA5F0
L_801AA5F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA5F4
  if (!crb(c,2)) { goto L_801AA608; } // 801AA5F8
  c->r[0]=R8(c->r[7]+0x00000150u); // 801AA5FC
  cmpu(c,0,c->r[0],0x00000002u); // 801AA600
  if (crb(c,2)) { goto L_801AA63C; } // 801AA604
L_801AA608:;
  c->r[0]=0u+0x00000004u; // 801AA608
  c->r[3]=0u+0x80310000u; // 801AA60C
  c->r[6]=0u+0x801B0000u; // 801AA610
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA614
  c->r[3]=c->r[3]+0xFFFF9C30u; // 801AA618
  c->r[7]=c->r[7]+0x00000094u; // 801AA61C
  c->r[6]=c->r[6]+0xFFFFA500u; // 801AA620
  c->r[4]=0u+0x0000003Fu; // 801AA624
  c->r[5]=0u+0x00000000u; // 801AA628
  c->lr=0x801AA630u; f_801ABA60(c); // 801AA62C
  cmps(c,0,(int32_t)c->r[3],0); // 801AA630
  if (!crb(c,2)) { goto L_801AA788; } // 801AA634
  goto L_801AA820; // 801AA638
L_801AA63C:;
  c->r[0]=0u+0x00000005u; // 801AA63C
  c->r[3]=0u+0x80310000u; // 801AA640
  c->r[6]=0u+0x801B0000u; // 801AA644
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA648
  c->r[3]=c->r[3]+0xFFFF9C40u; // 801AA64C
  c->r[7]=c->r[7]+0x00000094u; // 801AA650
  c->r[6]=c->r[6]+0xFFFFA500u; // 801AA654
  c->r[4]=0u+0x0000003Fu; // 801AA658
  c->r[5]=0u+0x00000000u; // 801AA65C
  c->lr=0x801AA664u; f_801AB240(c); // 801AA660
  cmps(c,0,(int32_t)c->r[3],0); // 801AA664
  if (!crb(c,2)) { goto L_801AA788; } // 801AA668
  goto L_801AA820; // 801AA66C
L_801AA670:;
  c->r[0]=0u+0x00000006u; // 801AA670
  c->r[3]=0u+0x80310000u; // 801AA674
  c->r[6]=0u+0x801B0000u; // 801AA678
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA67C
  c->r[4]=c->r[7]+0x00000008u; // 801AA680
  c->r[3]=c->r[3]+0xFFFF9C40u; // 801AA684
  c->r[6]=c->r[6]+0xFFFFA500u; // 801AA688
  c->r[7]=c->r[7]+0x00000094u; // 801AA68C
  c->r[5]=0u+0x00000002u; // 801AA690
  c->lr=0x801AA698u; f_801AC7E0(c); // 801AA694
  cmps(c,0,(int32_t)c->r[3],0); // 801AA698
  if (!crb(c,2)) { goto L_801AA788; } // 801AA69C
  goto L_801AA820; // 801AA6A0
L_801AA6A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA6A4
  if (!crb(c,2)) { goto L_801AA788; } // 801AA6A8
  c->r[3]=0u+0x00000001u; // 801AA6AC
  c->r[0]=0u+0x00000007u; // 801AA6B0
  c->r[4]=0u+0x805A0000u; // 801AA6B4
  c->r[6]=0u+0x801B0000u; // 801AA6B8
  W8(c->r[7]+0x00000159u,c->r[3]); // 801AA6BC
  c->r[3]=c->r[7]+0x00000008u; // 801AA6C0
  c->r[5]=R32(c->r[7]+0x0000018Cu); // 801AA6C4
  c->r[4]=c->r[4]+0x00004280u; // 801AA6C8
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA6CC
  c->r[6]=c->r[6]+0xFFFFA500u; // 801AA6D0
  c->r[7]=c->r[7]+0x00000094u; // 801AA6D4
  c->lr=0x801AA6DCu; f_801AB710(c); // 801AA6D8
  cmps(c,0,(int32_t)c->r[3],0); // 801AA6DC
  if (!crb(c,2)) { goto L_801AA788; } // 801AA6E0
  goto L_801AA820; // 801AA6E4
L_801AA6E8:;
  c->r[0]=R32(c->r[7]+0x0000018Cu); // 801AA6E8
  cmpu(c,0,c->r[3],c->r[0]); // 801AA6EC
  if (!crb(c,2)) { goto L_801AA788; } // 801AA6F0
  c->r[3]=0u+0x00000000u; // 801AA6F4
  c->r[0]=0u+0x00000008u; // 801AA6F8
  c->r[4]=0u+0x801B0000u; // 801AA6FC
  W8(c->r[7]+0x00000159u,c->r[3]); // 801AA700
  c->r[3]=c->r[7]+0x00000008u; // 801AA704
  c->r[5]=c->r[7]+0x00000094u; // 801AA708
  W8(c->r[7]+0x00000158u,c->r[0]); // 801AA70C
  c->r[4]=c->r[4]+0xFFFFA500u; // 801AA710
  c->lr=0x801AA718u; f_801AC950(c); // 801AA714
  cmps(c,0,(int32_t)c->r[3],0); // 801AA718
  if (!crb(c,2)) { goto L_801AA788; } // 801AA71C
  goto L_801AA820; // 801AA720
L_801AA724:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AA724
  if (!crb(c,2)) { goto L_801AA788; } // 801AA728
L_801AA72C:;
  c->r[30]=0u+0x805A0000u; // 801AA72C
  c->r[30]=c->r[30]+0x000000E0u; // 801AA730
  c->r[0]=R32(c->r[30]+0x00000188u); // 801AA734
  cmps(c,0,(int32_t)c->r[0],0); // 801AA738
  if (crb(c,2)) { goto L_801AA748; } // 801AA73C
  c->r[0]=0u+0x00000001u; // 801AA740
  W8(c->r[13]+0xFFFFC38Du,c->r[0]); // 801AA744
L_801AA748:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 801AA748
  cmps(c,0,(int32_t)c->r[12],0); // 801AA74C
  if (crb(c,2)) { goto L_801AA77C; } // 801AA750
  c->r[31]=0u+0x00000000u; // 801AA754
  W32(c->r[30]+0x00000184u,c->r[31]); // 801AA758
  c->r[3]=R32(c->r[30]+0x00000188u); // 801AA75C
  c->ctr=c->r[12]; // 801AA760
  if (true) { c->lr=0x801AA768u; dispatch(c,c->ctr); } // 801AA764
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AA768
  cmpu(c,0,c->r[0],c->r[31]); // 801AA76C
  if (crb(c,2)) { goto L_801AA77C; } // 801AA770
  c->r[3]=c->r[30]|c->r[30]; // 801AA774
  c->lr=0x801AA77Cu; f_8012A1C0(c); // 801AA778
L_801AA77C:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 801AA77C
  W8(c->r[13]+0xFFFFC378u,c->r[0]); // 801AA780
  goto L_801AA820; // 801AA784
L_801AA788:;
  c->r[5]=0u+0x805A0000u; // 801AA788
  c->r[3]=0u+0x00000002u; // 801AA78C
  c->r[5]=c->r[5]+0x000000E0u; // 801AA790
  c->r[0]=R8(c->r[5]+0x00000159u); // 801AA794
  W32(c->r[5]+0x00000188u,c->r[3]); // 801AA798
  cmps(c,0,(int32_t)c->r[0],0); // 801AA79C
  if (crb(c,2)) { goto L_801AA7C8; } // 801AA7A0
  c->r[0]=0u+0x00000009u; // 801AA7A4
  c->r[4]=0u+0x801B0000u; // 801AA7A8
  W8(c->r[5]+0x00000158u,c->r[0]); // 801AA7AC
  c->r[3]=c->r[5]+0x00000008u; // 801AA7B0
  c->r[4]=c->r[4]+0xFFFFA500u; // 801AA7B4
  c->r[5]=c->r[5]+0x00000094u; // 801AA7B8
  c->lr=0x801AA7C0u; f_801AC950(c); // 801AA7BC
  cmps(c,0,(int32_t)c->r[3],0); // 801AA7C0
  if (crb(c,2)) { goto L_801AA820; } // 801AA7C4
L_801AA7C8:;
  c->r[30]=0u+0x805A0000u; // 801AA7C8
  c->r[30]=c->r[30]+0x000000E0u; // 801AA7CC
  c->r[0]=R32(c->r[30]+0x00000188u); // 801AA7D0
  cmps(c,0,(int32_t)c->r[0],0); // 801AA7D4
  if (crb(c,2)) { goto L_801AA7E4; } // 801AA7D8
  c->r[0]=0u+0x00000001u; // 801AA7DC
  W8(c->r[13]+0xFFFFC38Du,c->r[0]); // 801AA7E0
L_801AA7E4:;
  c->r[12]=R32(c->r[30]+0x00000184u); // 801AA7E4
  cmps(c,0,(int32_t)c->r[12],0); // 801AA7E8
  if (crb(c,2)) { goto L_801AA818; } // 801AA7EC
  c->r[31]=0u+0x00000000u; // 801AA7F0
  W32(c->r[30]+0x00000184u,c->r[31]); // 801AA7F4
  c->r[3]=R32(c->r[30]+0x00000188u); // 801AA7F8
  c->ctr=c->r[12]; // 801AA7FC
  if (true) { c->lr=0x801AA804u; dispatch(c,c->ctr); } // 801AA800
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AA804
  cmpu(c,0,c->r[0],c->r[31]); // 801AA808
  if (crb(c,2)) { goto L_801AA818; } // 801AA80C
  c->r[3]=c->r[30]|c->r[30]; // 801AA810
  c->lr=0x801AA818u; f_8012A1C0(c); // 801AA814
L_801AA818:;
  c->r[0]=R32(c->r[30]+0x00000188u); // 801AA818
  W8(c->r[13]+0xFFFFC378u,c->r[0]); // 801AA81C
L_801AA820:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AA824
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AA828
  c->lr=c->r[0]; // 801AA82C
  c->r[1]=c->r[1]+0x00000010u; // 801AA830
  return; // 801AA834
}

// fn_801AA840
void f_801AA840(Ctx* __restrict c) {
  trace_call(0x801AA840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA840
  c->r[0]=c->lr; // 801AA844
  c->r[4]=0u+0x00000001u; // 801AA848
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA84C
  c->r[3]=c->r[1]+0x00000008u; // 801AA850
  c->lr=0x801AA858u; f_801A9F20(c); // 801AA854
  cmps(c,0,(int32_t)c->r[3],0); // 801AA858
  if (!crb(c,2)) { goto L_801AA86C; } // 801AA85C
  c->r[0]=0u+0x00000000u; // 801AA860
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA864
  goto L_801AA880; // 801AA868
L_801AA86C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AA86C
  cmpu(c,0,c->r[0],0x00000001u); // 801AA870
  if (crb(c,2)) { goto L_801AA880; } // 801AA874
  c->r[0]=0u+0x00000000u; // 801AA878
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA87C
L_801AA880:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA880
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AA884
  c->lr=c->r[0]; // 801AA888
  c->r[1]=c->r[1]+0x00000010u; // 801AA88C
  return; // 801AA890
}

// SCGetDisplayOffsetH
void f_801AA8A0(Ctx* __restrict c) {
  trace_call(0x801AA8A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA8A0
  c->r[0]=c->lr; // 801AA8A4
  c->r[4]=0u+0x00000005u; // 801AA8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA8AC
  c->r[3]=c->r[1]+0x00000008u; // 801AA8B0
  c->lr=0x801AA8B8u; f_801AA000(c); // 801AA8B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AA8B8
  if (!crb(c,2)) { goto L_801AA8CC; } // 801AA8BC
  c->r[0]=0u+0x00000000u; // 801AA8C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA8C4
  goto L_801AA8F8; // 801AA8C8
L_801AA8CC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AA8CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801AA8D0
  cmps(c,0,(int32_t)c->r[0],-32); // 801AA8D4
  if (!crb(c,0)) { goto L_801AA8E8; } // 801AA8D8
  c->r[0]=0u+0xFFFFFFE0u; // 801AA8DC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA8E0
  goto L_801AA8F8; // 801AA8E4
L_801AA8E8:;
  cmps(c,0,(int32_t)c->r[0],32); // 801AA8E8
  if (!crb(c,1)) { goto L_801AA8F8; } // 801AA8EC
  c->r[0]=0u+0x00000020u; // 801AA8F0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA8F4
L_801AA8F8:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AA8F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801AA8FC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801AA900
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA904
  c->lr=c->r[0]; // 801AA908
  c->r[1]=c->r[1]+0x00000010u; // 801AA90C
  return; // 801AA910
}

// SCGetIdleMode
void f_801AA920(Ctx* __restrict c) {
  trace_call(0x801AA920u);
  c->r[4]=0u+0x00000002u; // 801AA920
  c->r[5]=0u+0x00000009u; // 801AA924
  f_801A9D10(c); return; // 801AA928
}

// SCGetLanguage
void f_801AA930(Ctx* __restrict c) {
  trace_call(0x801AA930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA930
  c->r[0]=c->lr; // 801AA934
  c->r[4]=0u+0x0000000Bu; // 801AA938
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA93C
  c->r[3]=c->r[1]+0x00000008u; // 801AA940
  c->lr=0x801AA948u; f_801A9F20(c); // 801AA944
  cmps(c,0,(int32_t)c->r[3],0); // 801AA948
  if (!crb(c,2)) { goto L_801AA974; } // 801AA94C
  c->lr=0x801AA954u; f_801AAE60(c); // 801AA950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801AA954
  if (!crb(c,2)) { goto L_801AA968; } // 801AA958
  c->r[0]=0u+0x00000000u; // 801AA95C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA960
  goto L_801AA988; // 801AA964
L_801AA968:;
  c->r[0]=0u+0x00000001u; // 801AA968
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA96C
  goto L_801AA988; // 801AA970
L_801AA974:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AA974
  cmpu(c,0,c->r[0],0x00000009u); // 801AA978
  if (!crb(c,1)) { goto L_801AA988; } // 801AA97C
  c->r[0]=0u+0x00000001u; // 801AA980
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA984
L_801AA988:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA988
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AA98C
  c->lr=c->r[0]; // 801AA990
  c->r[1]=c->r[1]+0x00000010u; // 801AA994
  return; // 801AA998
}

// fn_801AA9A0
void f_801AA9A0(Ctx* __restrict c) {
  trace_call(0x801AA9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AA9A0
  c->r[0]=c->lr; // 801AA9A4
  c->r[4]=0u+0x0000000Eu; // 801AA9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AA9AC
  c->r[3]=c->r[1]+0x00000008u; // 801AA9B0
  c->lr=0x801AA9B8u; f_801A9F20(c); // 801AA9B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AA9B8
  if (!crb(c,2)) { goto L_801AA9CC; } // 801AA9BC
  c->r[0]=0u+0x00000000u; // 801AA9C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA9C4
  goto L_801AA9E0; // 801AA9C8
L_801AA9CC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AA9CC
  cmpu(c,0,c->r[0],0x00000001u); // 801AA9D0
  if (crb(c,2)) { goto L_801AA9E0; } // 801AA9D4
  c->r[0]=0u+0x00000000u; // 801AA9D8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AA9DC
L_801AA9E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AA9E0
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AA9E4
  c->lr=c->r[0]; // 801AA9E8
  c->r[1]=c->r[1]+0x00000010u; // 801AA9EC
  return; // 801AA9F0
}

// SCGetScreenSaverMode
void f_801AAA00(Ctx* __restrict c) {
  trace_call(0x801AAA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAA00
  c->r[0]=c->lr; // 801AAA04
  c->r[4]=0u+0x0000000Fu; // 801AAA08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AAA0C
  c->r[3]=c->r[1]+0x00000008u; // 801AAA10
  c->lr=0x801AAA18u; f_801A9F20(c); // 801AAA14
  cmps(c,0,(int32_t)c->r[3],0); // 801AAA18
  if (!crb(c,2)) { goto L_801AAA2C; } // 801AAA1C
  c->r[0]=0u+0x00000001u; // 801AAA20
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AAA24
  goto L_801AAA40; // 801AAA28
L_801AAA2C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AAA2C
  cmpu(c,0,c->r[0],0x00000001u); // 801AAA30
  if (crb(c,2)) { goto L_801AAA40; } // 801AAA34
  c->r[0]=0u+0x00000000u; // 801AAA38
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AAA3C
L_801AAA40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AAA40
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AAA44
  c->lr=c->r[0]; // 801AAA48
  c->r[1]=c->r[1]+0x00000010u; // 801AAA4C
  return; // 801AAA50
}

// SCGetSoundMode
void f_801AAA60(Ctx* __restrict c) {
  trace_call(0x801AAA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAA60
  c->r[0]=c->lr; // 801AAA64
  c->r[4]=0u+0x00000011u; // 801AAA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AAA6C
  c->r[3]=c->r[1]+0x00000008u; // 801AAA70
  c->lr=0x801AAA78u; f_801A9F20(c); // 801AAA74
  cmps(c,0,(int32_t)c->r[3],0); // 801AAA78
  if (!crb(c,2)) { goto L_801AAA8C; } // 801AAA7C
  c->r[0]=0u+0x00000001u; // 801AAA80
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AAA84
  goto L_801AAAA0; // 801AAA88
L_801AAA8C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AAA8C
  cmpu(c,0,c->r[0],0x00000002u); // 801AAA90
  if (!crb(c,1)) { goto L_801AAAA0; } // 801AAA94
  c->r[0]=0u+0x00000001u; // 801AAA98
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AAA9C
L_801AAAA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AAAA0
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AAAA4
  c->lr=c->r[0]; // 801AAAA8
  c->r[1]=c->r[1]+0x00000010u; // 801AAAAC
  return; // 801AAAB0
}

// fn_801AAAC0
void f_801AAAC0(Ctx* __restrict c) {
  trace_call(0x801AAAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAAC0
  c->r[0]=c->lr; // 801AAAC4
  c->r[4]=0u+0x00000000u; // 801AAAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AAACC
  c->r[3]=c->r[1]+0x00000008u; // 801AAAD0
  c->lr=0x801AAAD8u; f_801AA0E0(c); // 801AAAD4
  cmps(c,0,(int32_t)c->r[3],0); // 801AAAD8
  if (!crb(c,2)) { goto L_801AAAEC; } // 801AAADC
  c->r[3]=0u+0x0B4A0000u; // 801AAAE0
  c->r[0]=c->r[3]+0xFFFFD800u; // 801AAAE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AAAE8
L_801AAAEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AAAEC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801AAAF0
  c->lr=c->r[0]; // 801AAAF4
  c->r[1]=c->r[1]+0x00000010u; // 801AAAF8
  return; // 801AAAFC
}

// fn_801AAB00
void f_801AAB00(Ctx* __restrict c) {
  trace_call(0x801AAB00u);
  c->r[4]=0u+0x00000461u; // 801AAB00
  c->r[5]=0u+0x0000001Cu; // 801AAB04
  f_801A9D10(c); return; // 801AAB08
}

// SCSetBtDeviceInfoArray
void f_801AAB10(Ctx* __restrict c) {
  trace_call(0x801AAB10u);
  c->r[4]=0u+0x00000461u; // 801AAB10
  c->r[5]=0u+0x0000001Cu; // 801AAB14
  f_801A9DF0(c); return; // 801AAB18
}

// fn_801AAB20
void f_801AAB20(Ctx* __restrict c) {
  trace_call(0x801AAB20u);
  c->r[4]=0u+0x00000205u; // 801AAB20
  c->r[5]=0u+0x0000001Du; // 801AAB24
  f_801A9D10(c); return; // 801AAB28
}

// SCSetBtCmpDevInfoArray
void f_801AAB30(Ctx* __restrict c) {
  trace_call(0x801AAB30u);
  c->r[4]=0u+0x00000205u; // 801AAB30
  c->r[5]=0u+0x0000001Du; // 801AAB34
  f_801A9DF0(c); return; // 801AAB38
}

// fn_801AAB40
void f_801AAB40(Ctx* __restrict c) {
  trace_call(0x801AAB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAB40
  c->r[0]=c->lr; // 801AAB44
  c->r[4]=0u+0x0000001Eu; // 801AAB48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AAB4C
  c->r[3]=c->r[1]+0x00000008u; // 801AAB50
  c->lr=0x801AAB58u; f_801AA0E0(c); // 801AAB54
  cmps(c,0,(int32_t)c->r[3],0); // 801AAB58
  if (!crb(c,2)) { goto L_801AAB6C; } // 801AAB5C
  c->r[0]=0u+0x00000002u; // 801AAB60
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AAB64
  goto L_801AAB94; // 801AAB68
L_801AAB6C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AAB6C
  cmpu(c,0,c->r[0],0x00000001u); // 801AAB70
  if (!crb(c,0)) { goto L_801AAB84; } // 801AAB74
  c->r[0]=0u+0x00000001u; // 801AAB78
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AAB7C
  goto L_801AAB94; // 801AAB80
L_801AAB84:;
  cmpu(c,0,c->r[0],0x00000005u); // 801AAB84
  if (!crb(c,1)) { goto L_801AAB94; } // 801AAB88
  c->r[0]=0u+0x00000005u; // 801AAB8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AAB90
L_801AAB94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AAB94
  c->r[3]=R32(c->r[1]+0x00000008u); // 801AAB98
  c->lr=c->r[0]; // 801AAB9C
  c->r[1]=c->r[1]+0x00000010u; // 801AABA0
  return; // 801AABA4
}

// fn_801AABB0
void f_801AABB0(Ctx* __restrict c) {
  trace_call(0x801AABB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AABB0
  c->r[0]=c->lr; // 801AABB4
  c->r[4]=0u+0x00000020u; // 801AABB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AABBC
  c->r[3]=c->r[1]+0x00000008u; // 801AABC0
  c->lr=0x801AABC8u; f_801A9F20(c); // 801AABC4
  cmps(c,0,(int32_t)c->r[3],0); // 801AABC8
  if (!crb(c,2)) { goto L_801AABDC; } // 801AABCC
  c->r[0]=0u+0x00000001u; // 801AABD0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AABD4
  goto L_801AABF0; // 801AABD8
L_801AABDC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AABDC
  cmpu(c,0,c->r[0],0x00000001u); // 801AABE0
  if (crb(c,2)) { goto L_801AABF0; } // 801AABE4
  c->r[0]=0u+0x00000000u; // 801AABE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AABEC
L_801AABF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AABF0
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AABF4
  c->lr=c->r[0]; // 801AABF8
  c->r[1]=c->r[1]+0x00000010u; // 801AABFC
  return; // 801AAC00
}

// fn_801AAC10
void f_801AAC10(Ctx* __restrict c) {
  trace_call(0x801AAC10u);
  c->r[4]=0u+0x00000020u; // 801AAC10
  f_801AA1C0(c); return; // 801AAC14
}

// fn_801AAC20
void f_801AAC20(Ctx* __restrict c) {
  trace_call(0x801AAC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAC20
  c->r[0]=c->lr; // 801AAC24
  c->r[4]=0u+0x00000021u; // 801AAC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AAC2C
  c->r[3]=c->r[1]+0x00000008u; // 801AAC30
  c->lr=0x801AAC38u; f_801A9F20(c); // 801AAC34
  cmps(c,0,(int32_t)c->r[3],0); // 801AAC38
  if (!crb(c,2)) { goto L_801AAC4C; } // 801AAC3C
  c->r[0]=0u+0x00000000u; // 801AAC40
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AAC44
  goto L_801AAC60; // 801AAC48
L_801AAC4C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AAC4C
  cmpu(c,0,c->r[0],0x00000001u); // 801AAC50
  if (crb(c,2)) { goto L_801AAC60; } // 801AAC54
  c->r[0]=0u+0x00000000u; // 801AAC58
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AAC5C
L_801AAC60:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AAC60
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AAC64
  c->lr=c->r[0]; // 801AAC68
  c->r[1]=c->r[1]+0x00000010u; // 801AAC6C
  return; // 801AAC70
}

// fn_801AAC80
void f_801AAC80(Ctx* __restrict c) {
  trace_call(0x801AAC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAC80
  c->r[0]=c->lr; // 801AAC84
  c->r[4]=0u+0x0000001Fu; // 801AAC88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AAC8C
  c->r[3]=c->r[1]+0x00000008u; // 801AAC90
  c->lr=0x801AAC98u; f_801A9F20(c); // 801AAC94
  cmps(c,0,(int32_t)c->r[3],0); // 801AAC98
  if (!crb(c,2)) { goto L_801AACAC; } // 801AAC9C
  c->r[0]=0u+0x00000059u; // 801AACA0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AACA4
  goto L_801AACC0; // 801AACA8
L_801AACAC:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AACAC
  cmpu(c,0,c->r[0],0x0000007Fu); // 801AACB0
  if (!crb(c,1)) { goto L_801AACC0; } // 801AACB4
  c->r[0]=0u+0x0000007Fu; // 801AACB8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AACBC
L_801AACC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AACC0
  c->r[3]=R8(c->r[1]+0x00000008u); // 801AACC4
  c->lr=c->r[0]; // 801AACC8
  c->r[1]=c->r[1]+0x00000010u; // 801AACCC
  return; // 801AACD0
}

// fn_801AACE0
void f_801AACE0(Ctx* __restrict c) {
  trace_call(0x801AACE0u);
  c->r[4]=0u+0x0000001Fu; // 801AACE0
  f_801AA1C0(c); return; // 801AACE4
}

// __SCF1
void f_801AACF0(Ctx* __restrict c) {
  trace_call(0x801AACF0u);
  c->r[6]=0u+0x73B60000u; // 801AACF0
  c->r[0]=0u+0x00000080u; // 801AACF4
  c->r[11]=c->r[6]+0xFFFFDBFAu; // 801AACF8
  c->r[9]=0u+0x00000000u; // 801AACFC
  c->r[12]=0u+0x00000000u; // 801AAD00
  c->r[6]=0u+0x00000000u; // 801AAD04
  c->r[10]=0u+0x00000000u; // 801AAD08
  c->ctr=c->r[0]; // 801AAD0C
L_801AAD10:;
  c->r[8]=c->r[10]+0x80000000u; // 801AAD10
  c->r[8]=R8(c->r[8]+0x00003800u); // 801AAD14
  cmps(c,0,(int32_t)c->r[8],0); // 801AAD18
  if (crb(c,2)) { goto L_801AAD64; } // 801AAD1C
  c->r[7]=R8(c->r[3]+c->r[12]); // 801AAD20
  c->r[0]=c->r[8]^c->r[11]; // 801AAD24
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 801AAD28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 801AAD2C
  if (!crb(c,2)) { goto L_801AAD44; } // 801AAD30
  cmpu(c,0,c->r[8],0x0000003Du); // 801AAD34
  if (!crb(c,2)) { goto L_801AAD44; } // 801AAD38
  c->r[9]=0u+0x00000001u; // 801AAD3C
  goto L_801AADDC; // 801AAD40
L_801AAD44:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801AAD44
  c->r[0]=c->r[12]+0x00000001u; // 801AAD48
  c->r[7]=c->r[8]^c->r[7]; // 801AAD4C
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 801AAD50
  c->r[7]=cntlz(c->r[7]); // 801AAD54
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 801AAD58
  c->r[7]=0u-c->r[7]; // 801AAD5C
  c->r[12]=c->r[0]&c->r[7]; // 801AAD60
L_801AAD64:;
  c->r[10]=c->r[10]+0x00000001u; // 801AAD64
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 801AAD68
  c->r[8]=c->r[10]+0x80000000u; // 801AAD6C
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 801AAD70
  c->r[8]=R8(c->r[8]+0x00003800u); // 801AAD74
  c->r[11]=c->r[7]|c->r[0]; // 801AAD78
  cmps(c,0,(int32_t)c->r[8],0); // 801AAD7C
  if (crb(c,2)) { goto L_801AADC8; } // 801AAD80
  c->r[7]=R8(c->r[3]+c->r[12]); // 801AAD84
  c->r[0]=c->r[8]^c->r[11]; // 801AAD88
  c->r[8]=rotl(c->r[0],0)&0x000000FFu; // 801AAD8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; cr0(c,c->r[0]); // 801AAD90
  if (!crb(c,2)) { goto L_801AADA8; } // 801AAD94
  cmpu(c,0,c->r[8],0x0000003Du); // 801AAD98
  if (!crb(c,2)) { goto L_801AADA8; } // 801AAD9C
  c->r[9]=0u+0x00000001u; // 801AADA0
  goto L_801AADDC; // 801AADA4
L_801AADA8:;
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801AADA8
  c->r[0]=c->r[12]+0x00000001u; // 801AADAC
  c->r[7]=c->r[8]^c->r[7]; // 801AADB0
  c->r[7]=c->r[7]&0x000000DFu; cr0(c,c->r[7]); // 801AADB4
  c->r[7]=cntlz(c->r[7]); // 801AADB8
  c->r[7]=rotl(c->r[7],27)&0x00000001u; // 801AADBC
  c->r[7]=0u-c->r[7]; // 801AADC0
  c->r[12]=c->r[0]&c->r[7]; // 801AADC4
L_801AADC8:;
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 801AADC8
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 801AADCC
  c->r[11]=c->r[7]|c->r[0]; // 801AADD0
  c->r[10]=c->r[10]+0x00000001u; // 801AADD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AAD10; } // 801AADD8
L_801AADDC:;
  cmps(c,0,(int32_t)c->r[9],0); // 801AADDC
  if (crb(c,2)) { goto L_801AAE58; } // 801AADE0
  c->r[10]=c->r[10]+0x00000001u; // 801AADE4
  goto L_801AAE48; // 801AADE8
  c->r[0]=c->r[0]|0x00000000u; // 801AADEC
L_801AADF0:;
  c->r[3]=c->r[10]+0x80000000u; // 801AADF0
  c->r[7]=rotl(c->r[11],1)&0x00000001u; // 801AADF4
  c->r[3]=R8(c->r[3]+0x00003800u); // 801AADF8
  c->r[0]=rotl(c->r[11],1)&0xFFFFFFFEu; // 801AADFC
  c->r[11]=c->r[7]|c->r[0]; // 801AAE00
  cmps(c,0,(int32_t)c->r[3],0); // 801AAE04
  if (crb(c,2)) { goto L_801AAE28; } // 801AAE08
  c->r[0]=c->r[3]^c->r[11]; // 801AAE0C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801AAE10
  cmpu(c,0,c->r[3],0x0000000Du); // 801AAE14
  if (crb(c,2)) { goto L_801AAE24; } // 801AAE18
  cmpu(c,0,c->r[3],0x0000000Au); // 801AAE1C
  if (!crb(c,2)) { goto L_801AAE28; } // 801AAE20
L_801AAE24:;
  c->r[3]=0u+0x00000000u; // 801AAE24
L_801AAE28:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AAE28
  W8(c->r[4]+0x00000000u,c->r[3]); // 801AAE2C
  c->r[6]=c->r[6]+0x00000001u; // 801AAE30
  c->r[4]=c->r[4]+0x00000001u; // 801AAE34
  if (!crb(c,2)) { goto L_801AAE44; } // 801AAE38
  c->r[3]=0u+0x00000001u; // 801AAE3C
  return; // 801AAE40
L_801AAE44:;
  c->r[10]=c->r[10]+0x00000001u; // 801AAE44
L_801AAE48:;
  cmpu(c,0,c->r[10],0x00000100u); // 801AAE48
  if (!crb(c,0)) { goto L_801AAE58; } // 801AAE4C
  cmpu(c,0,c->r[6],c->r[5]); // 801AAE50
  if (crb(c,0)) { IRQCHK(c); goto L_801AADF0; } // 801AAE54
L_801AAE58:;
  c->r[3]=0u+0x00000000u; // 801AAE58
  return; // 801AAE5C
}

// fn_801AAE60
void f_801AAE60(Ctx* __restrict c) {
  trace_call(0x801AAE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAE60
  c->r[0]=c->lr; // 801AAE64
  c->r[3]=c->r[13]+0xFFFFAC68u; // 801AAE68
  c->r[5]=0u+0x00000004u; // 801AAE6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AAE70
  c->r[4]=c->r[1]+0x00000008u; // 801AAE74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AAE78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AAE7C
  c->r[30]=0u+0x803A0000u; // 801AAE80
  c->r[30]=c->r[30]+0xFFFF9D50u; // 801AAE84
  c->lr=0x801AAE8Cu; f_801AACF0(c); // 801AAE88
  cmps(c,0,(int32_t)c->r[3],0); // 801AAE8C
  if (crb(c,2)) { goto L_801AAEC8; } // 801AAE90
  goto L_801AAEB8; // 801AAE94
L_801AAE98:;
  c->r[3]=c->r[30]+0x00000001u; // 801AAE98
  c->r[4]=c->r[1]+0x00000008u; // 801AAE9C
  c->lr=0x801AAEA4u; f_802EE984(c); // 801AAEA0
  cmps(c,0,(int32_t)c->r[3],0); // 801AAEA4
  if (!crb(c,2)) { goto L_801AAEB4; } // 801AAEA8
  c->r[3]=c->r[31]|c->r[31]; // 801AAEAC
  goto L_801AAECC; // 801AAEB0
L_801AAEB4:;
  c->r[30]=c->r[30]+0x00000005u; // 801AAEB4
L_801AAEB8:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 801AAEB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801AAEBC
  cmps(c,0,(int32_t)c->r[0],-1); // 801AAEC0
  if (!crb(c,2)) { IRQCHK(c); goto L_801AAE98; } // 801AAEC4
L_801AAEC8:;
  c->r[3]=0u+0xFFFFFFFFu; // 801AAEC8
L_801AAECC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AAECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AAED0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AAED4
  c->lr=c->r[0]; // 801AAED8
  c->r[1]=c->r[1]+0x00000020u; // 801AAEDC
  return; // 801AAEE0
}

// SCGetProductGameRegion
void f_801AAEF0(Ctx* __restrict c) {
  trace_call(0x801AAEF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAEF0
  c->r[0]=c->lr; // 801AAEF4
  c->r[3]=c->r[13]+0xFFFFAC70u; // 801AAEF8
  c->r[5]=0u+0x00000003u; // 801AAEFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AAF00
  c->r[4]=c->r[1]+0x00000008u; // 801AAF04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AAF08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AAF0C
  c->r[30]=0u+0x803A0000u; // 801AAF10
  c->r[30]=c->r[30]+0xFFFF9D98u; // 801AAF14
  c->lr=0x801AAF1Cu; f_801AACF0(c); // 801AAF18
  cmps(c,0,(int32_t)c->r[3],0); // 801AAF1C
  if (crb(c,2)) { goto L_801AAF58; } // 801AAF20
  goto L_801AAF48; // 801AAF24
L_801AAF28:;
  c->r[3]=c->r[30]+0x00000001u; // 801AAF28
  c->r[4]=c->r[1]+0x00000008u; // 801AAF2C
  c->lr=0x801AAF34u; f_802EE984(c); // 801AAF30
  cmps(c,0,(int32_t)c->r[3],0); // 801AAF34
  if (!crb(c,2)) { goto L_801AAF44; } // 801AAF38
  c->r[3]=c->r[31]|c->r[31]; // 801AAF3C
  goto L_801AAF5C; // 801AAF40
L_801AAF44:;
  c->r[30]=c->r[30]+0x00000004u; // 801AAF44
L_801AAF48:;
  c->r[31]=R8(c->r[30]+0x00000000u); // 801AAF48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801AAF4C
  cmps(c,0,(int32_t)c->r[0],-1); // 801AAF50
  if (!crb(c,2)) { IRQCHK(c); goto L_801AAF28; } // 801AAF54
L_801AAF58:;
  c->r[3]=0u+0xFFFFFFFFu; // 801AAF58
L_801AAF5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AAF5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AAF60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AAF64
  c->lr=c->r[0]; // 801AAF68
  c->r[1]=c->r[1]+0x00000020u; // 801AAF6C
  return; // 801AAF70
}

// fn_801AAF80
void f_801AAF80(Ctx* __restrict c) {
  trace_call(0x801AAF80u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AAF80
  c->r[0]=c->lr; // 801AAF84
  W32(c->r[1]+0x00000074u,c->r[0]); // 801AAF88
  c->r[11]=c->r[1]+0x00000070u; // 801AAF8C
  c->lr=0x801AAF94u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AAF90
  c->r[0]=0u+0x00000000u; // 801AAF94
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AAF98
  c->r[26]=c->r[3]|c->r[3]; // 801AAF9C
  c->r[27]=c->r[4]|c->r[4]; // 801AAFA0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AAFA4
  c->r[28]=c->r[5]|c->r[5]; // 801AAFA8
  c->r[29]=c->r[6]|c->r[6]; // 801AAFAC
  c->r[30]=c->r[7]|c->r[7]; // 801AAFB0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AAFB4
  c->r[31]=c->r[8]|c->r[8]; // 801AAFB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AAFBC
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AAFC0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AAFC4
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AAFC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AAFCC
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AAFD0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AAFD4
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AAFD8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AAFDC
  W32(c->r[1]+0x00000048u,c->r[0]); // 801AAFE0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801AAFE4
  W32(c->r[1]+0x00000050u,c->r[0]); // 801AAFE8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AAFEC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AAFF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AAFF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AAFF8
  c->lr=0x801AB000u; f_801AC1F0(c); // 801AAFFC
  cmps(c,0,(int32_t)c->r[3],0); // 801AB000
  if (!crb(c,2)) { goto L_801AB010; } // 801AB004
  c->r[3]=0u+0xFFFFFF9Bu; // 801AB008
  goto L_801AB0A8; // 801AB00C
L_801AB010:;
  c->r[4]=c->r[26]|c->r[26]; // 801AB010
  c->r[3]=c->r[1]+0x00000018u; // 801AB014
  c->lr=0x801AB01Cu; f_801ADD00(c); // 801AB018
  cmps(c,0,(int32_t)c->r[31],0); // 801AB01C
  if (!crb(c,2)) { goto L_801AB03C; } // 801AB020
  c->r[3]=c->r[1]+0x00000018u; // 801AB024
  c->lr=0x801AB02Cu; f_801ADA70(c); // 801AB028
  cmps(c,0,(int32_t)c->r[3],0); // 801AB02C
  if (crb(c,2)) { goto L_801AB03C; } // 801AB030
  c->r[3]=0u+0xFFFFFF9Au; // 801AB034
  goto L_801AB0A8; // 801AB038
L_801AB03C:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 801AB03C
  if (!crb(c,2)) { goto L_801AB04C; } // 801AB040
  c->r[3]=0u+0xFFFFFF9Bu; // 801AB044
  goto L_801AB0A8; // 801AB048
L_801AB04C:;
  c->r[3]=c->r[27]|c->r[27]; // 801AB04C
  c->r[4]=c->r[1]+0x00000010u; // 801AB050
  c->r[5]=c->r[1]+0x0000000Cu; // 801AB054
  c->r[6]=c->r[1]+0x00000008u; // 801AB058
  c->lr=0x801AB060u; f_801ABE80(c); // 801AB05C
  cmps(c,0,(int32_t)c->r[30],0); // 801AB060
  if (crb(c,2)) { goto L_801AB090; } // 801AB064
  c->r[8]=0u+0x801B0000u; // 801AB068
  c->r[5]=R32(c->r[1]+0x00000010u); // 801AB06C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801AB070
  c->r[4]=c->r[28]|c->r[28]; // 801AB074
  c->r[7]=R32(c->r[1]+0x00000008u); // 801AB078
  c->r[9]=c->r[29]|c->r[29]; // 801AB07C
  c->r[3]=c->r[1]+0x00000018u; // 801AB080
  c->r[8]=c->r[8]+0xFFFFE100u; // 801AB084
  c->lr=0x801AB08Cu; f_801B0610(c); // 801AB088
  goto L_801AB0A8; // 801AB08C
L_801AB090:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 801AB090
  c->r[4]=c->r[28]|c->r[28]; // 801AB094
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801AB098
  c->r[3]=c->r[1]+0x00000018u; // 801AB09C
  c->r[7]=R32(c->r[1]+0x00000008u); // 801AB0A0
  c->lr=0x801AB0A8u; f_801B0510(c); // 801AB0A4
L_801AB0A8:;
  c->r[11]=c->r[1]+0x00000070u; // 801AB0A8
  c->lr=0x801AB0B0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB0AC
  c->r[0]=R32(c->r[1]+0x00000074u); // 801AB0B0
  c->lr=c->r[0]; // 801AB0B4
  c->r[1]=c->r[1]+0x00000070u; // 801AB0B8
  return; // 801AB0BC
}

// fn_801AB0C0
void f_801AB0C0(Ctx* __restrict c) {
  trace_call(0x801AB0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB0C0
  c->r[0]=c->lr; // 801AB0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB0C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AB0CC
  c->r[31]=c->r[5]|c->r[5]; // 801AB0D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AB0D4
  c->r[30]=c->r[4]|c->r[4]; // 801AB0D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AB0DC
  c->r[29]=c->r[3]|c->r[3]; // 801AB0E0
  c->lr=0x801AB0E8u; f_801ADB10(c); // 801AB0E4
  cmps(c,0,(int32_t)c->r[3],0); // 801AB0E8
  if (crb(c,2)) { goto L_801AB114; } // 801AB0EC
  c->r[3]=c->r[29]|c->r[29]; // 801AB0F0
  c->r[4]=c->r[30]|c->r[30]; // 801AB0F4
  c->r[5]=c->r[31]|c->r[31]; // 801AB0F8
  c->r[6]=0u+0x00000000u; // 801AB0FC
  c->r[7]=0u+0x00000000u; // 801AB100
  c->r[8]=0u+0x00000000u; // 801AB104
  c->lr=0x801AB10Cu; f_801AAF80(c); // 801AB108
  c->lr=0x801AB110u; f_801ADB50(c); // 801AB10C
  goto L_801AB118; // 801AB110
L_801AB114:;
  c->r[3]=0u+0xFFFFFF80u; // 801AB114
L_801AB118:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB118
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AB11C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AB120
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AB124
  c->lr=c->r[0]; // 801AB128
  c->r[1]=c->r[1]+0x00000020u; // 801AB12C
  return; // 801AB130
}

// NANDPrivateCreate
void f_801AB140(Ctx* __restrict c) {
  trace_call(0x801AB140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB140
  c->r[0]=c->lr; // 801AB144
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB148
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AB14C
  c->r[31]=c->r[5]|c->r[5]; // 801AB150
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AB154
  c->r[30]=c->r[4]|c->r[4]; // 801AB158
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AB15C
  c->r[29]=c->r[3]|c->r[3]; // 801AB160
  c->lr=0x801AB168u; f_801ADB10(c); // 801AB164
  cmps(c,0,(int32_t)c->r[3],0); // 801AB168
  if (crb(c,2)) { goto L_801AB194; } // 801AB16C
  c->r[3]=c->r[29]|c->r[29]; // 801AB170
  c->r[4]=c->r[30]|c->r[30]; // 801AB174
  c->r[5]=c->r[31]|c->r[31]; // 801AB178
  c->r[6]=0u+0x00000000u; // 801AB17C
  c->r[7]=0u+0x00000000u; // 801AB180
  c->r[8]=0u+0x00000001u; // 801AB184
  c->lr=0x801AB18Cu; f_801AAF80(c); // 801AB188
  c->lr=0x801AB190u; f_801ADB50(c); // 801AB18C
  goto L_801AB198; // 801AB190
L_801AB194:;
  c->r[3]=0u+0xFFFFFF80u; // 801AB194
L_801AB198:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB198
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AB19C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AB1A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AB1A4
  c->lr=c->r[0]; // 801AB1A8
  c->r[1]=c->r[1]+0x00000020u; // 801AB1AC
  return; // 801AB1B0
}

// fn_801AB1C0
void f_801AB1C0(Ctx* __restrict c) {
  trace_call(0x801AB1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB1C0
  c->r[0]=c->lr; // 801AB1C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB1C8
  c->r[11]=c->r[1]+0x00000020u; // 801AB1CC
  c->lr=0x801AB1D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB1D0
  c->r[27]=c->r[3]|c->r[3]; // 801AB1D4
  c->r[28]=c->r[4]|c->r[4]; // 801AB1D8
  c->r[29]=c->r[5]|c->r[5]; // 801AB1DC
  c->r[30]=c->r[6]|c->r[6]; // 801AB1E0
  c->r[31]=c->r[7]|c->r[7]; // 801AB1E4
  c->lr=0x801AB1ECu; f_801ADB10(c); // 801AB1E8
  cmps(c,0,(int32_t)c->r[3],0); // 801AB1EC
  if (!crb(c,2)) { goto L_801AB1FC; } // 801AB1F0
  c->r[3]=0u+0xFFFFFF80u; // 801AB1F4
  goto L_801AB220; // 801AB1F8
L_801AB1FC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AB1FC
  c->r[3]=c->r[27]|c->r[27]; // 801AB200
  c->r[4]=c->r[28]|c->r[28]; // 801AB204
  c->r[5]=c->r[29]|c->r[29]; // 801AB208
  c->r[6]=c->r[31]|c->r[31]; // 801AB20C
  c->r[7]=0u+0x00000001u; // 801AB210
  c->r[8]=0u+0x00000000u; // 801AB214
  c->lr=0x801AB21Cu; f_801AAF80(c); // 801AB218
  c->lr=0x801AB220u; f_801ADB50(c); // 801AB21C
L_801AB220:;
  c->r[11]=c->r[1]+0x00000020u; // 801AB220
  c->lr=0x801AB228u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB224
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB228
  c->lr=c->r[0]; // 801AB22C
  c->r[1]=c->r[1]+0x00000020u; // 801AB230
  return; // 801AB234
}

// fn_801AB240
void f_801AB240(Ctx* __restrict c) {
  trace_call(0x801AB240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB240
  c->r[0]=c->lr; // 801AB244
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB248
  c->r[11]=c->r[1]+0x00000020u; // 801AB24C
  c->lr=0x801AB254u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB250
  c->r[27]=c->r[3]|c->r[3]; // 801AB254
  c->r[28]=c->r[4]|c->r[4]; // 801AB258
  c->r[29]=c->r[5]|c->r[5]; // 801AB25C
  c->r[30]=c->r[6]|c->r[6]; // 801AB260
  c->r[31]=c->r[7]|c->r[7]; // 801AB264
  c->lr=0x801AB26Cu; f_801ADB10(c); // 801AB268
  cmps(c,0,(int32_t)c->r[3],0); // 801AB26C
  if (!crb(c,2)) { goto L_801AB27C; } // 801AB270
  c->r[3]=0u+0xFFFFFF80u; // 801AB274
  goto L_801AB2A0; // 801AB278
L_801AB27C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AB27C
  c->r[3]=c->r[27]|c->r[27]; // 801AB280
  c->r[4]=c->r[28]|c->r[28]; // 801AB284
  c->r[5]=c->r[29]|c->r[29]; // 801AB288
  c->r[6]=c->r[31]|c->r[31]; // 801AB28C
  c->r[7]=0u+0x00000001u; // 801AB290
  c->r[8]=0u+0x00000001u; // 801AB294
  c->lr=0x801AB29Cu; f_801AAF80(c); // 801AB298
  c->lr=0x801AB2A0u; f_801ADB50(c); // 801AB29C
L_801AB2A0:;
  c->r[11]=c->r[1]+0x00000020u; // 801AB2A0
  c->lr=0x801AB2A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB2A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB2A8
  c->lr=c->r[0]; // 801AB2AC
  c->r[1]=c->r[1]+0x00000020u; // 801AB2B0
  return; // 801AB2B4
}

// fn_801AB2C0
void f_801AB2C0(Ctx* __restrict c) {
  trace_call(0x801AB2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB2C0
  c->r[0]=c->lr; // 801AB2C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AB2C8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801AB2CC
  c->r[31]=c->r[3]|c->r[3]; // 801AB2D0
  c->lr=0x801AB2D8u; f_801ADB10(c); // 801AB2D4
  cmps(c,0,(int32_t)c->r[3],0); // 801AB2D8
  if (!crb(c,2)) { goto L_801AB2E8; } // 801AB2DC
  c->r[3]=0u+0xFFFFFF80u; // 801AB2E0
  goto L_801AB35C; // 801AB2E4
L_801AB2E8:;
  c->r[0]=0u+0x00000000u; // 801AB2E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB2EC
  c->r[4]=c->r[31]|c->r[31]; // 801AB2F0
  c->r[3]=c->r[1]+0x00000008u; // 801AB2F4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AB2F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AB2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB300
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AB304
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AB308
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AB30C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB310
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AB314
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AB318
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AB31C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AB320
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AB324
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AB328
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AB32C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AB330
  c->lr=0x801AB338u; f_801ADD00(c); // 801AB334
  c->r[3]=c->r[1]+0x00000008u; // 801AB338
  c->lr=0x801AB340u; f_801ADA70(c); // 801AB33C
  cmps(c,0,(int32_t)c->r[3],0); // 801AB340
  if (crb(c,2)) { goto L_801AB350; } // 801AB344
  c->r[3]=0u+0xFFFFFF9Au; // 801AB348
  goto L_801AB358; // 801AB34C
L_801AB350:;
  c->r[3]=c->r[1]+0x00000008u; // 801AB350
  c->lr=0x801AB358u; f_801AFED0(c); // 801AB354
L_801AB358:;
  c->lr=0x801AB35Cu; f_801ADB50(c); // 801AB358
L_801AB35C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AB35C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801AB360
  c->lr=c->r[0]; // 801AB364
  c->r[1]=c->r[1]+0x00000050u; // 801AB368
  return; // 801AB36C
}

// fn_801AB370
void f_801AB370(Ctx* __restrict c) {
  trace_call(0x801AB370u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB370
  c->r[0]=c->lr; // 801AB374
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AB378
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801AB37C
  c->r[31]=c->r[3]|c->r[3]; // 801AB380
  c->lr=0x801AB388u; f_801ADB10(c); // 801AB384
  cmps(c,0,(int32_t)c->r[3],0); // 801AB388
  if (!crb(c,2)) { goto L_801AB398; } // 801AB38C
  c->r[3]=0u+0xFFFFFF80u; // 801AB390
  goto L_801AB3F4; // 801AB394
L_801AB398:;
  c->r[0]=0u+0x00000000u; // 801AB398
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB39C
  c->r[4]=c->r[31]|c->r[31]; // 801AB3A0
  c->r[3]=c->r[1]+0x00000008u; // 801AB3A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AB3A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AB3AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB3B0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AB3B4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AB3B8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AB3BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB3C0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AB3C4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AB3C8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AB3CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AB3D0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AB3D4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AB3D8
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AB3DC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AB3E0
  c->lr=0x801AB3E8u; f_801ADD00(c); // 801AB3E4
  c->r[3]=c->r[1]+0x00000008u; // 801AB3E8
  c->lr=0x801AB3F0u; f_801AFED0(c); // 801AB3EC
  c->lr=0x801AB3F4u; f_801ADB50(c); // 801AB3F0
L_801AB3F4:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AB3F4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801AB3F8
  c->lr=c->r[0]; // 801AB3FC
  c->r[1]=c->r[1]+0x00000050u; // 801AB400
  return; // 801AB404
}

// fn_801AB410
void f_801AB410(Ctx* __restrict c) {
  trace_call(0x801AB410u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB410
  c->r[0]=c->lr; // 801AB414
  W32(c->r[1]+0x00000064u,c->r[0]); // 801AB418
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801AB41C
  c->r[31]=c->r[5]|c->r[5]; // 801AB420
  W32(c->r[1]+0x00000058u,c->r[30]); // 801AB424
  c->r[30]=c->r[4]|c->r[4]; // 801AB428
  W32(c->r[1]+0x00000054u,c->r[29]); // 801AB42C
  c->r[29]=c->r[3]|c->r[3]; // 801AB430
  c->lr=0x801AB438u; f_801ADB10(c); // 801AB434
  cmps(c,0,(int32_t)c->r[3],0); // 801AB438
  if (!crb(c,2)) { goto L_801AB448; } // 801AB43C
  c->r[3]=0u+0xFFFFFF80u; // 801AB440
  goto L_801AB4CC; // 801AB444
L_801AB448:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AB448
  c->r[0]=0u+0x00000000u; // 801AB44C
  c->r[4]=c->r[29]|c->r[29]; // 801AB450
  c->r[3]=c->r[1]+0x00000008u; // 801AB454
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB458
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AB45C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AB460
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB464
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AB468
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AB46C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AB470
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB474
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AB478
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AB47C
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AB480
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AB484
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AB488
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AB48C
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AB490
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AB494
  c->lr=0x801AB49Cu; f_801ADD00(c); // 801AB498
  c->r[3]=c->r[1]+0x00000008u; // 801AB49C
  c->lr=0x801AB4A4u; f_801ADA70(c); // 801AB4A0
  cmps(c,0,(int32_t)c->r[3],0); // 801AB4A4
  if (crb(c,2)) { goto L_801AB4B4; } // 801AB4A8
  c->r[3]=0u+0xFFFFFF9Au; // 801AB4AC
  goto L_801AB4C8; // 801AB4B0
L_801AB4B4:;
  c->r[4]=0u+0x801B0000u; // 801AB4B4
  c->r[5]=c->r[31]|c->r[31]; // 801AB4B8
  c->r[3]=c->r[1]+0x00000008u; // 801AB4BC
  c->r[4]=c->r[4]+0xFFFFE100u; // 801AB4C0
  c->lr=0x801AB4C8u; f_801AFFB0(c); // 801AB4C4
L_801AB4C8:;
  c->lr=0x801AB4CCu; f_801ADB50(c); // 801AB4C8
L_801AB4CC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801AB4CC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801AB4D0
  c->r[30]=R32(c->r[1]+0x00000058u); // 801AB4D4
  c->r[29]=R32(c->r[1]+0x00000054u); // 801AB4D8
  c->lr=c->r[0]; // 801AB4DC
  c->r[1]=c->r[1]+0x00000060u; // 801AB4E0
  return; // 801AB4E4
}

// fn_801AB4F0
void f_801AB4F0(Ctx* __restrict c) {
  trace_call(0x801AB4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB4F0
  c->r[0]=c->lr; // 801AB4F4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801AB4F8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801AB4FC
  c->r[31]=c->r[5]|c->r[5]; // 801AB500
  W32(c->r[1]+0x00000058u,c->r[30]); // 801AB504
  c->r[30]=c->r[4]|c->r[4]; // 801AB508
  W32(c->r[1]+0x00000054u,c->r[29]); // 801AB50C
  c->r[29]=c->r[3]|c->r[3]; // 801AB510
  c->lr=0x801AB518u; f_801ADB10(c); // 801AB514
  cmps(c,0,(int32_t)c->r[3],0); // 801AB518
  if (!crb(c,2)) { goto L_801AB528; } // 801AB51C
  c->r[3]=0u+0xFFFFFF80u; // 801AB520
  goto L_801AB594; // 801AB524
L_801AB528:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AB528
  c->r[0]=0u+0x00000000u; // 801AB52C
  c->r[4]=c->r[29]|c->r[29]; // 801AB530
  c->r[3]=c->r[1]+0x00000008u; // 801AB534
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB538
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AB53C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AB540
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB544
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AB548
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AB54C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AB550
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB554
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AB558
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AB55C
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AB560
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AB564
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AB568
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AB56C
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AB570
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AB574
  c->lr=0x801AB57Cu; f_801ADD00(c); // 801AB578
  c->r[4]=0u+0x801B0000u; // 801AB57C
  c->r[5]=c->r[31]|c->r[31]; // 801AB580
  c->r[3]=c->r[1]+0x00000008u; // 801AB584
  c->r[4]=c->r[4]+0xFFFFE100u; // 801AB588
  c->lr=0x801AB590u; f_801AFFB0(c); // 801AB58C
  c->lr=0x801AB594u; f_801ADB50(c); // 801AB590
L_801AB594:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801AB594
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801AB598
  c->r[30]=R32(c->r[1]+0x00000058u); // 801AB59C
  c->r[29]=R32(c->r[1]+0x00000054u); // 801AB5A0
  c->lr=c->r[0]; // 801AB5A4
  c->r[1]=c->r[1]+0x00000060u; // 801AB5A8
  return; // 801AB5AC
}

// fn_801AB5B0
void f_801AB5B0(Ctx* __restrict c) {
  trace_call(0x801AB5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB5B0
  c->r[0]=c->lr; // 801AB5B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB5B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AB5BC
  c->r[31]=c->r[5]|c->r[5]; // 801AB5C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AB5C4
  c->r[30]=c->r[4]|c->r[4]; // 801AB5C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AB5CC
  c->r[29]=c->r[3]|c->r[3]; // 801AB5D0
  c->lr=0x801AB5D8u; f_801ADB10(c); // 801AB5D4
  cmps(c,0,(int32_t)c->r[3],0); // 801AB5D8
  if (crb(c,2)) { goto L_801AB5F8; } // 801AB5DC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801AB5E0
  c->r[4]=c->r[30]|c->r[30]; // 801AB5E4
  c->r[5]=c->r[31]|c->r[31]; // 801AB5E8
  c->lr=0x801AB5F0u; f_801B0A00(c); // 801AB5EC
  c->lr=0x801AB5F4u; f_801ADB50(c); // 801AB5F0
  goto L_801AB5FC; // 801AB5F4
L_801AB5F8:;
  c->r[3]=0u+0xFFFFFF80u; // 801AB5F8
L_801AB5FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB5FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AB600
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AB604
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AB608
  c->lr=c->r[0]; // 801AB60C
  c->r[1]=c->r[1]+0x00000020u; // 801AB610
  return; // 801AB614
}

// fn_801AB620
void f_801AB620(Ctx* __restrict c) {
  trace_call(0x801AB620u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB620
  c->r[0]=c->lr; // 801AB624
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB628
  c->r[11]=c->r[1]+0x00000020u; // 801AB62C
  c->lr=0x801AB634u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB630
  c->r[27]=c->r[3]|c->r[3]; // 801AB634
  c->r[28]=c->r[4]|c->r[4]; // 801AB638
  c->r[29]=c->r[5]|c->r[5]; // 801AB63C
  c->r[30]=c->r[6]|c->r[6]; // 801AB640
  c->r[31]=c->r[7]|c->r[7]; // 801AB644
  c->lr=0x801AB64Cu; f_801ADB10(c); // 801AB648
  cmps(c,0,(int32_t)c->r[3],0); // 801AB64C
  if (!crb(c,2)) { goto L_801AB65C; } // 801AB650
  c->r[3]=0u+0xFFFFFF80u; // 801AB654
  goto L_801AB680; // 801AB658
L_801AB65C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AB65C
  c->r[6]=0u+0x801B0000u; // 801AB660
  c->r[4]=c->r[28]|c->r[28]; // 801AB664
  c->r[5]=c->r[29]|c->r[29]; // 801AB668
  c->r[3]=R32(c->r[27]+0x00000000u); // 801AB66C
  c->r[7]=c->r[31]|c->r[31]; // 801AB670
  c->r[6]=c->r[6]+0xFFFFE100u; // 801AB674
  c->lr=0x801AB67Cu; f_801B0A20(c); // 801AB678
  c->lr=0x801AB680u; f_801ADB50(c); // 801AB67C
L_801AB680:;
  c->r[11]=c->r[1]+0x00000020u; // 801AB680
  c->lr=0x801AB688u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB684
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB688
  c->lr=c->r[0]; // 801AB68C
  c->r[1]=c->r[1]+0x00000020u; // 801AB690
  return; // 801AB694
}

// fn_801AB6A0
void f_801AB6A0(Ctx* __restrict c) {
  trace_call(0x801AB6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB6A0
  c->r[0]=c->lr; // 801AB6A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB6A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AB6AC
  c->r[31]=c->r[5]|c->r[5]; // 801AB6B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AB6B4
  c->r[30]=c->r[4]|c->r[4]; // 801AB6B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AB6BC
  c->r[29]=c->r[3]|c->r[3]; // 801AB6C0
  c->lr=0x801AB6C8u; f_801ADB10(c); // 801AB6C4
  cmps(c,0,(int32_t)c->r[3],0); // 801AB6C8
  if (crb(c,2)) { goto L_801AB6E8; } // 801AB6CC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801AB6D0
  c->r[4]=c->r[30]|c->r[30]; // 801AB6D4
  c->r[5]=c->r[31]|c->r[31]; // 801AB6D8
  c->lr=0x801AB6E0u; f_801B0AD0(c); // 801AB6DC
  c->lr=0x801AB6E4u; f_801ADB50(c); // 801AB6E0
  goto L_801AB6EC; // 801AB6E4
L_801AB6E8:;
  c->r[3]=0u+0xFFFFFF80u; // 801AB6E8
L_801AB6EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB6EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AB6F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AB6F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AB6F8
  c->lr=c->r[0]; // 801AB6FC
  c->r[1]=c->r[1]+0x00000020u; // 801AB700
  return; // 801AB704
}

// NANDWriteAsync
void f_801AB710(Ctx* __restrict c) {
  trace_call(0x801AB710u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB710
  c->r[0]=c->lr; // 801AB714
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB718
  c->r[11]=c->r[1]+0x00000020u; // 801AB71C
  c->lr=0x801AB724u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB720
  c->r[27]=c->r[3]|c->r[3]; // 801AB724
  c->r[28]=c->r[4]|c->r[4]; // 801AB728
  c->r[29]=c->r[5]|c->r[5]; // 801AB72C
  c->r[30]=c->r[6]|c->r[6]; // 801AB730
  c->r[31]=c->r[7]|c->r[7]; // 801AB734
  c->lr=0x801AB73Cu; f_801ADB10(c); // 801AB738
  cmps(c,0,(int32_t)c->r[3],0); // 801AB73C
  if (!crb(c,2)) { goto L_801AB74C; } // 801AB740
  c->r[3]=0u+0xFFFFFF80u; // 801AB744
  goto L_801AB770; // 801AB748
L_801AB74C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AB74C
  c->r[6]=0u+0x801B0000u; // 801AB750
  c->r[4]=c->r[28]|c->r[28]; // 801AB754
  c->r[5]=c->r[29]|c->r[29]; // 801AB758
  c->r[3]=R32(c->r[27]+0x00000000u); // 801AB75C
  c->r[7]=c->r[31]|c->r[31]; // 801AB760
  c->r[6]=c->r[6]+0xFFFFE100u; // 801AB764
  c->lr=0x801AB76Cu; f_801B0AF0(c); // 801AB768
  c->lr=0x801AB770u; f_801ADB50(c); // 801AB76C
L_801AB770:;
  c->r[11]=c->r[1]+0x00000020u; // 801AB770
  c->lr=0x801AB778u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB774
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB778
  c->lr=c->r[0]; // 801AB77C
  c->r[1]=c->r[1]+0x00000020u; // 801AB780
  return; // 801AB784
}

// fn_801AB790
void f_801AB790(Ctx* __restrict c) {
  trace_call(0x801AB790u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB790
  c->r[0]=c->lr; // 801AB794
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB798
  c->r[11]=c->r[1]+0x00000020u; // 801AB79C
  c->lr=0x801AB7A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB7A0
  c->r[27]=c->r[3]|c->r[3]; // 801AB7A4
  c->r[28]=c->r[4]|c->r[4]; // 801AB7A8
  c->r[29]=c->r[5]|c->r[5]; // 801AB7AC
  c->r[30]=c->r[6]|c->r[6]; // 801AB7B0
  c->r[31]=c->r[7]|c->r[7]; // 801AB7B4
  c->lr=0x801AB7BCu; f_801ADB10(c); // 801AB7B8
  cmps(c,0,(int32_t)c->r[3],0); // 801AB7BC
  if (!crb(c,2)) { goto L_801AB7CC; } // 801AB7C0
  c->r[3]=0u+0xFFFFFF80u; // 801AB7C4
  goto L_801AB820; // 801AB7C8
L_801AB7CC:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AB7CC
  cmps(c,0,(int32_t)c->r[29],0); // 801AB7D0
  c->r[5]=0u+0xFFFFFFFFu; // 801AB7D4
  c->r[3]=R32(c->r[27]+0x00000000u); // 801AB7D8
  if (crb(c,2)) { goto L_801AB7F4; } // 801AB7DC
  cmps(c,0,(int32_t)c->r[29],1); // 801AB7E0
  if (crb(c,2)) { goto L_801AB7FC; } // 801AB7E4
  cmps(c,0,(int32_t)c->r[29],2); // 801AB7E8
  if (crb(c,2)) { goto L_801AB804; } // 801AB7EC
  goto L_801AB808; // 801AB7F0
L_801AB7F4:;
  c->r[5]=0u+0x00000000u; // 801AB7F4
  goto L_801AB808; // 801AB7F8
L_801AB7FC:;
  c->r[5]=0u+0x00000001u; // 801AB7FC
  goto L_801AB808; // 801AB800
L_801AB804:;
  c->r[5]=0u+0x00000002u; // 801AB804
L_801AB808:;
  c->r[6]=0u+0x801B0000u; // 801AB808
  c->r[4]=c->r[28]|c->r[28]; // 801AB80C
  c->r[7]=c->r[31]|c->r[31]; // 801AB810
  c->r[6]=c->r[6]+0xFFFFE100u; // 801AB814
  c->lr=0x801AB81Cu; f_801B0970(c); // 801AB818
  c->lr=0x801AB820u; f_801ADB50(c); // 801AB81C
L_801AB820:;
  c->r[11]=c->r[1]+0x00000020u; // 801AB820
  c->lr=0x801AB828u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AB824
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AB828
  c->lr=c->r[0]; // 801AB82C
  c->r[1]=c->r[1]+0x00000020u; // 801AB830
  return; // 801AB834
}

// fn_801AB840
void f_801AB840(Ctx* __restrict c) {
  trace_call(0x801AB840u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB840
  c->r[0]=c->lr; // 801AB844
  W32(c->r[1]+0x00000064u,c->r[0]); // 801AB848
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801AB84C
  c->r[31]=c->r[5]|c->r[5]; // 801AB850
  W32(c->r[1]+0x00000058u,c->r[30]); // 801AB854
  c->r[30]=c->r[4]|c->r[4]; // 801AB858
  W32(c->r[1]+0x00000054u,c->r[29]); // 801AB85C
  c->r[29]=c->r[3]|c->r[3]; // 801AB860
  c->lr=0x801AB868u; f_801ADB10(c); // 801AB864
  cmps(c,0,(int32_t)c->r[3],0); // 801AB868
  if (!crb(c,2)) { goto L_801AB878; } // 801AB86C
  c->r[3]=0u+0xFFFFFF80u; // 801AB870
  goto L_801AB8F4; // 801AB874
L_801AB878:;
  c->r[0]=0u+0x00000000u; // 801AB878
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB87C
  c->r[4]=c->r[29]|c->r[29]; // 801AB880
  c->r[3]=c->r[1]+0x00000008u; // 801AB884
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AB888
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AB88C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AB890
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AB894
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AB898
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AB89C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB8A0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AB8A4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AB8A8
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AB8AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AB8B0
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AB8B4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AB8B8
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AB8BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AB8C0
  c->lr=0x801AB8C8u; f_801ADD00(c); // 801AB8C4
  c->r[3]=c->r[1]+0x00000008u; // 801AB8C8
  c->lr=0x801AB8D0u; f_801ADA70(c); // 801AB8CC
  cmps(c,0,(int32_t)c->r[3],0); // 801AB8D0
  if (crb(c,2)) { goto L_801AB8E0; } // 801AB8D4
  c->r[3]=0u+0xFFFFFF9Au; // 801AB8D8
  goto L_801AB8F0; // 801AB8DC
L_801AB8E0:;
  c->r[4]=c->r[30]|c->r[30]; // 801AB8E0
  c->r[5]=c->r[31]|c->r[31]; // 801AB8E4
  c->r[3]=c->r[1]+0x00000008u; // 801AB8E8
  c->lr=0x801AB8F0u; f_801AF980(c); // 801AB8EC
L_801AB8F0:;
  c->lr=0x801AB8F4u; f_801ADB50(c); // 801AB8F0
L_801AB8F4:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801AB8F4
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801AB8F8
  c->r[30]=R32(c->r[1]+0x00000058u); // 801AB8FC
  c->r[29]=R32(c->r[1]+0x00000054u); // 801AB900
  c->lr=c->r[0]; // 801AB904
  c->r[1]=c->r[1]+0x00000060u; // 801AB908
  return; // 801AB90C
}

// fn_801AB910
void f_801AB910(Ctx* __restrict c) {
  trace_call(0x801AB910u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AB910
  c->r[0]=c->lr; // 801AB914
  W32(c->r[1]+0x00000074u,c->r[0]); // 801AB918
  c->r[11]=c->r[1]+0x00000070u; // 801AB91C
  c->lr=0x801AB924u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AB920
  c->r[0]=0u+0x00000000u; // 801AB924
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AB928
  c->r[26]=c->r[3]|c->r[3]; // 801AB92C
  c->r[27]=c->r[4]|c->r[4]; // 801AB930
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AB934
  c->r[28]=c->r[5]|c->r[5]; // 801AB938
  c->r[29]=c->r[6]|c->r[6]; // 801AB93C
  c->r[30]=c->r[7]|c->r[7]; // 801AB940
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AB944
  c->r[31]=c->r[8]|c->r[8]; // 801AB948
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AB94C
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AB950
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AB954
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AB958
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AB95C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AB960
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AB964
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AB968
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AB96C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801AB970
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801AB974
  W32(c->r[1]+0x00000050u,c->r[0]); // 801AB978
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AB97C
  c->lr=0x801AB984u; f_801AC1F0(c); // 801AB980
  cmps(c,0,(int32_t)c->r[3],0); // 801AB984
  if (!crb(c,2)) { goto L_801AB994; } // 801AB988
  c->r[3]=0u+0xFFFFFF9Bu; // 801AB98C
  goto L_801ABA3C; // 801AB990
L_801AB994:;
  c->r[4]=c->r[26]|c->r[26]; // 801AB994
  c->r[3]=c->r[1]+0x00000018u; // 801AB998
  c->lr=0x801AB9A0u; f_801ADD00(c); // 801AB99C
  cmps(c,0,(int32_t)c->r[31],0); // 801AB9A0
  if (!crb(c,2)) { goto L_801AB9C0; } // 801AB9A4
  c->r[3]=c->r[1]+0x00000018u; // 801AB9A8
  c->lr=0x801AB9B0u; f_801ADA70(c); // 801AB9AC
  cmps(c,0,(int32_t)c->r[3],0); // 801AB9B0
  if (crb(c,2)) { goto L_801AB9C0; } // 801AB9B4
  c->r[3]=0u+0xFFFFFF9Au; // 801AB9B8
  goto L_801ABA3C; // 801AB9BC
L_801AB9C0:;
  c->r[0]=rotl(c->r[27],0)&0x00000010u; cr0(c,c->r[0]); // 801AB9C0
  if (!crb(c,2)) { goto L_801AB9D0; } // 801AB9C4
  c->r[3]=0u+0xFFFFFF9Bu; // 801AB9C8
  goto L_801ABA3C; // 801AB9CC
L_801AB9D0:;
  c->r[0]=0u+0x00000000u; // 801AB9D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AB9D4
  c->r[3]=c->r[27]|c->r[27]; // 801AB9D8
  c->r[4]=c->r[1]+0x00000010u; // 801AB9DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AB9E0
  c->r[5]=c->r[1]+0x0000000Cu; // 801AB9E4
  c->r[6]=c->r[1]+0x00000008u; // 801AB9E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AB9EC
  c->lr=0x801AB9F4u; f_801ABE80(c); // 801AB9F0
  cmps(c,0,(int32_t)c->r[30],0); // 801AB9F4
  if (crb(c,2)) { goto L_801ABA24; } // 801AB9F8
  c->r[8]=0u+0x801B0000u; // 801AB9FC
  c->r[5]=R32(c->r[1]+0x00000010u); // 801ABA00
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801ABA04
  c->r[4]=c->r[28]|c->r[28]; // 801ABA08
  c->r[7]=R32(c->r[1]+0x00000008u); // 801ABA0C
  c->r[9]=c->r[29]|c->r[29]; // 801ABA10
  c->r[3]=c->r[1]+0x00000018u; // 801ABA14
  c->r[8]=c->r[8]+0xFFFFE100u; // 801ABA18
  c->lr=0x801ABA20u; f_801AF880(c); // 801ABA1C
  goto L_801ABA3C; // 801ABA20
L_801ABA24:;
  c->r[5]=R32(c->r[1]+0x00000010u); // 801ABA24
  c->r[4]=c->r[28]|c->r[28]; // 801ABA28
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801ABA2C
  c->r[3]=c->r[1]+0x00000018u; // 801ABA30
  c->r[7]=R32(c->r[1]+0x00000008u); // 801ABA34
  c->lr=0x801ABA3Cu; f_801AF780(c); // 801ABA38
L_801ABA3C:;
  c->r[11]=c->r[1]+0x00000070u; // 801ABA3C
  c->lr=0x801ABA44u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ABA40
  c->r[0]=R32(c->r[1]+0x00000074u); // 801ABA44
  c->lr=c->r[0]; // 801ABA48
  c->r[1]=c->r[1]+0x00000070u; // 801ABA4C
  return; // 801ABA50
}

// NANDPrivateCreateDirAsync
void f_801ABA60(Ctx* __restrict c) {
  trace_call(0x801ABA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABA60
  c->r[0]=c->lr; // 801ABA64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ABA68
  c->r[11]=c->r[1]+0x00000020u; // 801ABA6C
  c->lr=0x801ABA74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ABA70
  c->r[27]=c->r[3]|c->r[3]; // 801ABA74
  c->r[28]=c->r[4]|c->r[4]; // 801ABA78
  c->r[29]=c->r[5]|c->r[5]; // 801ABA7C
  c->r[30]=c->r[6]|c->r[6]; // 801ABA80
  c->r[31]=c->r[7]|c->r[7]; // 801ABA84
  c->lr=0x801ABA8Cu; f_801ADB10(c); // 801ABA88
  cmps(c,0,(int32_t)c->r[3],0); // 801ABA8C
  if (!crb(c,2)) { goto L_801ABA9C; } // 801ABA90
  c->r[3]=0u+0xFFFFFF80u; // 801ABA94
  goto L_801ABAC0; // 801ABA98
L_801ABA9C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801ABA9C
  c->r[3]=c->r[27]|c->r[27]; // 801ABAA0
  c->r[4]=c->r[28]|c->r[28]; // 801ABAA4
  c->r[5]=c->r[29]|c->r[29]; // 801ABAA8
  c->r[6]=c->r[31]|c->r[31]; // 801ABAAC
  c->r[7]=0u+0x00000001u; // 801ABAB0
  c->r[8]=0u+0x00000001u; // 801ABAB4
  c->lr=0x801ABABCu; f_801AB910(c); // 801ABAB8
  c->lr=0x801ABAC0u; f_801ADB50(c); // 801ABABC
L_801ABAC0:;
  c->r[11]=c->r[1]+0x00000020u; // 801ABAC0
  c->lr=0x801ABAC8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ABAC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ABAC8
  c->lr=c->r[0]; // 801ABACC
  c->r[1]=c->r[1]+0x00000020u; // 801ABAD0
  return; // 801ABAD4
}

// fn_801ABAE0
void f_801ABAE0(Ctx* __restrict c) {
  trace_call(0x801ABAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABAE0
  c->r[0]=c->lr; // 801ABAE4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801ABAE8
  c->r[0]=0u+0x00000000u; // 801ABAEC
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801ABAF0
  c->r[31]=c->r[7]|c->r[7]; // 801ABAF4
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801ABAF8
  c->r[30]=c->r[6]|c->r[6]; // 801ABAFC
  W32(c->r[1]+0x000000A4u,c->r[29]); // 801ABB00
  c->r[29]=c->r[5]|c->r[5]; // 801ABB04
  W32(c->r[1]+0x000000A0u,c->r[28]); // 801ABB08
  c->r[28]=c->r[4]|c->r[4]; // 801ABB0C
  c->r[4]=c->r[3]|c->r[3]; // 801ABB10
  c->r[3]=c->r[1]+0x00000058u; // 801ABB14
  W32(c->r[1]+0x00000058u,c->r[0]); // 801ABB18
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801ABB1C
  W32(c->r[1]+0x00000060u,c->r[0]); // 801ABB20
  W32(c->r[1]+0x00000064u,c->r[0]); // 801ABB24
  W32(c->r[1]+0x00000068u,c->r[0]); // 801ABB28
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801ABB2C
  W32(c->r[1]+0x00000070u,c->r[0]); // 801ABB30
  W32(c->r[1]+0x00000074u,c->r[0]); // 801ABB34
  W32(c->r[1]+0x00000078u,c->r[0]); // 801ABB38
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801ABB3C
  W32(c->r[1]+0x00000080u,c->r[0]); // 801ABB40
  W32(c->r[1]+0x00000084u,c->r[0]); // 801ABB44
  W32(c->r[1]+0x00000088u,c->r[0]); // 801ABB48
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 801ABB4C
  W32(c->r[1]+0x00000090u,c->r[0]); // 801ABB50
  W32(c->r[1]+0x00000094u,c->r[0]); // 801ABB54
  W32(c->r[1]+0x00000018u,c->r[0]); // 801ABB58
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801ABB5C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801ABB60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ABB64
  W32(c->r[1]+0x00000028u,c->r[0]); // 801ABB68
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801ABB6C
  W32(c->r[1]+0x00000030u,c->r[0]); // 801ABB70
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ABB74
  W32(c->r[1]+0x00000038u,c->r[0]); // 801ABB78
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801ABB7C
  W32(c->r[1]+0x00000040u,c->r[0]); // 801ABB80
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ABB84
  W32(c->r[1]+0x00000048u,c->r[0]); // 801ABB88
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801ABB8C
  W32(c->r[1]+0x00000050u,c->r[0]); // 801ABB90
  W32(c->r[1]+0x00000054u,c->r[0]); // 801ABB94
  W32(c->r[1]+0x00000008u,c->r[0]); // 801ABB98
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801ABB9C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801ABBA0
  W8(c->r[1]+0x00000014u,c->r[0]); // 801ABBA4
  c->lr=0x801ABBACu; f_801ADD00(c); // 801ABBA8
  c->r[3]=c->r[1]+0x00000008u; // 801ABBAC
  c->r[4]=c->r[1]+0x00000058u; // 801ABBB0
  c->lr=0x801ABBB8u; f_801AD870(c); // 801ABBB4
  c->r[4]=c->r[28]|c->r[28]; // 801ABBB8
  c->r[3]=c->r[1]+0x00000018u; // 801ABBBC
  c->lr=0x801ABBC4u; f_801ADD00(c); // 801ABBC0
  c->r[3]=c->r[1]+0x00000018u; // 801ABBC4
  c->r[4]=c->r[13]+0xFFFFAC78u; // 801ABBC8
  c->lr=0x801ABBD0u; f_802EE984(c); // 801ABBCC
  cmps(c,0,(int32_t)c->r[3],0); // 801ABBD0
  if (!crb(c,2)) { goto L_801ABBF0; } // 801ABBD4
  c->r[3]=c->r[1]+0x00000018u; // 801ABBD8
  c->r[5]=c->r[1]+0x00000008u; // 801ABBDC
  c->r[4]=c->r[13]+0xFFFFAC7Cu; // 801ABBE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ABBE4
  c->lr=0x801ABBECu; f_802EE604(c); // 801ABBE8
  goto L_801ABC08; // 801ABBEC
L_801ABBF0:;
  c->r[3]=c->r[1]+0x00000018u; // 801ABBF0
  c->r[4]=c->r[13]+0xFFFFAC78u; // 801ABBF4
  c->lr=0x801ABBFCu; f_802EE90C(c); // 801ABBF8
  c->r[3]=c->r[1]+0x00000018u; // 801ABBFC
  c->r[4]=c->r[1]+0x00000008u; // 801ABC00
  c->lr=0x801ABC08u; f_802EE90C(c); // 801ABC04
L_801ABC08:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ABC08
  if (!crb(c,2)) { goto L_801ABC38; } // 801ABC0C
  c->r[3]=c->r[1]+0x00000058u; // 801ABC10
  c->lr=0x801ABC18u; f_801ADA70(c); // 801ABC14
  cmps(c,0,(int32_t)c->r[3],0); // 801ABC18
  if (!crb(c,2)) { goto L_801ABC30; } // 801ABC1C
  c->r[3]=c->r[1]+0x00000018u; // 801ABC20
  c->lr=0x801ABC28u; f_801ADA70(c); // 801ABC24
  cmps(c,0,(int32_t)c->r[3],0); // 801ABC28
  if (crb(c,2)) { goto L_801ABC38; } // 801ABC2C
L_801ABC30:;
  c->r[3]=0u+0xFFFFFF9Au; // 801ABC30
  goto L_801ABC68; // 801ABC34
L_801ABC38:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ABC38
  if (crb(c,2)) { goto L_801ABC5C; } // 801ABC3C
  c->r[5]=0u+0x801B0000u; // 801ABC40
  c->r[6]=c->r[29]|c->r[29]; // 801ABC44
  c->r[3]=c->r[1]+0x00000058u; // 801ABC48
  c->r[4]=c->r[1]+0x00000018u; // 801ABC4C
  c->r[5]=c->r[5]+0xFFFFE100u; // 801ABC50
  c->lr=0x801ABC58u; f_801B0190(c); // 801ABC54
  goto L_801ABC68; // 801ABC58
L_801ABC5C:;
  c->r[3]=c->r[1]+0x00000058u; // 801ABC5C
  c->r[4]=c->r[1]+0x00000018u; // 801ABC60
  c->lr=0x801ABC68u; f_801B0080(c); // 801ABC64
L_801ABC68:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801ABC68
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801ABC6C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801ABC70
  c->r[29]=R32(c->r[1]+0x000000A4u); // 801ABC74
  c->r[28]=R32(c->r[1]+0x000000A0u); // 801ABC78
  c->lr=c->r[0]; // 801ABC7C
  c->r[1]=c->r[1]+0x000000B0u; // 801ABC80
  return; // 801ABC84
}

// fn_801ABC90
void f_801ABC90(Ctx* __restrict c) {
  trace_call(0x801ABC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABC90
  c->r[0]=c->lr; // 801ABC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ABC98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ABC9C
  c->r[31]=c->r[4]|c->r[4]; // 801ABCA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ABCA4
  c->r[30]=c->r[3]|c->r[3]; // 801ABCA8
  c->lr=0x801ABCB0u; f_801ADB10(c); // 801ABCAC
  cmps(c,0,(int32_t)c->r[3],0); // 801ABCB0
  if (crb(c,2)) { goto L_801ABCD8; } // 801ABCB4
  c->r[3]=c->r[30]|c->r[30]; // 801ABCB8
  c->r[4]=c->r[31]|c->r[31]; // 801ABCBC
  c->r[5]=0u+0x00000000u; // 801ABCC0
  c->r[6]=0u+0x00000000u; // 801ABCC4
  c->r[7]=0u+0x00000000u; // 801ABCC8
  c->lr=0x801ABCD0u; f_801ABAE0(c); // 801ABCCC
  c->lr=0x801ABCD4u; f_801ADB50(c); // 801ABCD0
  goto L_801ABCDC; // 801ABCD4
L_801ABCD8:;
  c->r[3]=0u+0xFFFFFF80u; // 801ABCD8
L_801ABCDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ABCDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ABCE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ABCE4
  c->lr=c->r[0]; // 801ABCE8
  c->r[1]=c->r[1]+0x00000010u; // 801ABCEC
  return; // 801ABCF0
}

// fn_801ABD00
void f_801ABD00(Ctx* __restrict c) {
  trace_call(0x801ABD00u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801ABD00
  c->r[12]=c->r[1]|c->r[1]; // 801ABD04
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 801ABD08
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABD0C
  c->r[0]=c->lr; // 801ABD10
  W32(c->r[12]+0x00000004u,c->r[0]); // 801ABD14
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801ABD18
  c->r[31]=c->r[4]|c->r[4]; // 801ABD1C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801ABD20
  c->r[30]=c->r[3]|c->r[3]; // 801ABD24
  c->lr=0x801ABD2Cu; f_801ADB10(c); // 801ABD28
  cmps(c,0,(int32_t)c->r[3],0); // 801ABD2C
  if (!crb(c,2)) { goto L_801ABD3C; } // 801ABD30
  c->r[3]=0u+0xFFFFFF80u; // 801ABD34
  goto L_801ABD74; // 801ABD38
L_801ABD3C:;
  c->r[3]=c->r[1]+0x00000020u; // 801ABD3C
  c->lr=0x801ABD44u; f_801AF6A0(c); // 801ABD40
  cmps(c,0,(int32_t)c->r[3],0); // 801ABD44
  if (!crb(c,2)) { goto L_801ABD70; } // 801ABD48
  cmps(c,0,(int32_t)c->r[30],0); // 801ABD4C
  if (crb(c,2)) { goto L_801ABD60; } // 801ABD50
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ABD54
  c->r[0]=rotl(c->r[0],14)&0xFFFFC000u; // 801ABD58
  W32(c->r[30]+0x00000000u,c->r[0]); // 801ABD5C
L_801ABD60:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ABD60
  if (crb(c,2)) { goto L_801ABD70; } // 801ABD64
  c->r[0]=R32(c->r[1]+0x00000034u); // 801ABD68
  W32(c->r[31]+0x00000000u,c->r[0]); // 801ABD6C
L_801ABD70:;
  c->lr=0x801ABD74u; f_801ADB50(c); // 801ABD70
L_801ABD74:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801ABD74
  c->r[0]=R32(c->r[10]+0x00000004u); // 801ABD78
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801ABD7C
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801ABD80
  c->lr=c->r[0]; // 801ABD84
  c->r[1]=c->r[10]|c->r[10]; // 801ABD88
  return; // 801ABD8C
}

// fn_801ABD90
void f_801ABD90(Ctx* __restrict c) {
  trace_call(0x801ABD90u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801ABD90
  c->r[12]=c->r[1]|c->r[1]; // 801ABD94
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 801ABD98
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABD9C
  c->r[0]=c->lr; // 801ABDA0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801ABDA4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801ABDA8
  c->r[31]=c->r[4]|c->r[4]; // 801ABDAC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801ABDB0
  c->r[30]=c->r[3]|c->r[3]; // 801ABDB4
  c->lr=0x801ABDBCu; f_801ADB10(c); // 801ABDB8
  cmps(c,0,(int32_t)c->r[3],0); // 801ABDBC
  if (!crb(c,2)) { goto L_801ABDCC; } // 801ABDC0
  c->r[3]=0u+0xFFFFFF80u; // 801ABDC4
  goto L_801ABDFC; // 801ABDC8
L_801ABDCC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801ABDCC
  c->r[4]=c->r[1]+0x00000020u; // 801ABDD0
  c->lr=0x801ABDD8u; f_801B08A0(c); // 801ABDD4
  cmps(c,0,(int32_t)c->r[3],0); // 801ABDD8
  if (!crb(c,2)) { goto L_801ABDF8; } // 801ABDDC
  cmps(c,0,(int32_t)c->r[31],0); // 801ABDE0
  if (crb(c,2)) { goto L_801ABDF8; } // 801ABDE4
  c->r[0]=R32(c->r[1]+0x00000020u); // 801ABDE8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801ABDEC
  goto L_801ABDF8; // 801ABDF0
  W32(0u+0x00000000u,c->r[0]); // 801ABDF4
L_801ABDF8:;
  c->lr=0x801ABDFCu; f_801ADB50(c); // 801ABDF8
L_801ABDFC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801ABDFC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801ABE00
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801ABE04
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801ABE08
  c->lr=c->r[0]; // 801ABE0C
  c->r[1]=c->r[10]|c->r[10]; // 801ABE10
  return; // 801ABE14
}

// nandComposePerm
void f_801ABE20(Ctx* __restrict c) {
  trace_call(0x801ABE20u);
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801ABE20
  c->r[7]=0u+0x00000000u; // 801ABE24
  if (crb(c,2)) { goto L_801ABE30; } // 801ABE28
  c->r[7]=c->r[7]|0x00000010u; // 801ABE2C
L_801ABE30:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801ABE30
  if (crb(c,2)) { goto L_801ABE3C; } // 801ABE34
  c->r[7]=c->r[7]|0x00000020u; // 801ABE38
L_801ABE3C:;
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801ABE3C
  if (crb(c,2)) { goto L_801ABE48; } // 801ABE40
  c->r[7]=c->r[7]|0x00000004u; // 801ABE44
L_801ABE48:;
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 801ABE48
  if (crb(c,2)) { goto L_801ABE54; } // 801ABE4C
  c->r[7]=c->r[7]|0x00000008u; // 801ABE50
L_801ABE54:;
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 801ABE54
  if (crb(c,2)) { goto L_801ABE60; } // 801ABE58
  c->r[7]=c->r[7]|0x00000001u; // 801ABE5C
L_801ABE60:;
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 801ABE60
  if (crb(c,2)) { goto L_801ABE6C; } // 801ABE64
  c->r[7]=c->r[7]|0x00000002u; // 801ABE68
L_801ABE6C:;
  W8(c->r[3]+0x00000000u,c->r[7]); // 801ABE6C
  return; // 801ABE70
}

// fn_801ABE80
void f_801ABE80(Ctx* __restrict c) {
  trace_call(0x801ABE80u);
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801ABE80
  c->r[0]=0u+0x00000000u; // 801ABE84
  W32(c->r[4]+0x00000000u,c->r[0]); // 801ABE88
  W32(c->r[5]+0x00000000u,c->r[0]); // 801ABE8C
  W32(c->r[6]+0x00000000u,c->r[0]); // 801ABE90
  if (crb(c,2)) { goto L_801ABEA4; } // 801ABE94
  c->r[0]=R32(c->r[4]+0x00000000u); // 801ABE98
  c->r[0]=c->r[0]|0x00000001u; // 801ABE9C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801ABEA0
L_801ABEA4:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 801ABEA4
  if (crb(c,2)) { goto L_801ABEB8; } // 801ABEA8
  c->r[0]=R32(c->r[4]+0x00000000u); // 801ABEAC
  c->r[0]=c->r[0]|0x00000002u; // 801ABEB0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801ABEB4
L_801ABEB8:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801ABEB8
  if (crb(c,2)) { goto L_801ABECC; } // 801ABEBC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801ABEC0
  c->r[0]=c->r[0]|0x00000001u; // 801ABEC4
  W32(c->r[5]+0x00000000u,c->r[0]); // 801ABEC8
L_801ABECC:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801ABECC
  if (crb(c,2)) { goto L_801ABEE0; } // 801ABED0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801ABED4
  c->r[0]=c->r[0]|0x00000002u; // 801ABED8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801ABEDC
L_801ABEE0:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801ABEE0
  if (crb(c,2)) { goto L_801ABEF4; } // 801ABEE4
  c->r[0]=R32(c->r[6]+0x00000000u); // 801ABEE8
  c->r[0]=c->r[0]|0x00000001u; // 801ABEEC
  W32(c->r[6]+0x00000000u,c->r[0]); // 801ABEF0
L_801ABEF4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801ABEF4
  if (crb(c,2)) return; // 801ABEF8
  c->r[0]=R32(c->r[6]+0x00000000u); // 801ABEFC
  c->r[0]=c->r[0]|0x00000002u; // 801ABF00
  W32(c->r[6]+0x00000000u,c->r[0]); // 801ABF04
  return; // 801ABF08
}

// fn_801ABF10
void f_801ABF10(Ctx* __restrict c) {
  trace_call(0x801ABF10u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ABF10
  c->r[0]=c->lr; // 801ABF14
  W32(c->r[1]+0x00000074u,c->r[0]); // 801ABF18
  c->r[0]=0u+0x00000000u; // 801ABF1C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801ABF20
  c->r[31]=c->r[7]|c->r[7]; // 801ABF24
  W32(c->r[1]+0x00000068u,c->r[30]); // 801ABF28
  c->r[30]=c->r[6]|c->r[6]; // 801ABF2C
  W32(c->r[1]+0x00000064u,c->r[29]); // 801ABF30
  c->r[29]=c->r[5]|c->r[5]; // 801ABF34
  W32(c->r[1]+0x00000060u,c->r[28]); // 801ABF38
  c->r[28]=c->r[4]|c->r[4]; // 801ABF3C
  c->r[4]=c->r[3]|c->r[3]; // 801ABF40
  c->r[3]=c->r[1]+0x00000020u; // 801ABF44
  W32(c->r[1]+0x00000020u,c->r[0]); // 801ABF48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ABF4C
  W32(c->r[1]+0x00000028u,c->r[0]); // 801ABF50
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801ABF54
  W32(c->r[1]+0x00000030u,c->r[0]); // 801ABF58
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ABF5C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801ABF60
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801ABF64
  W32(c->r[1]+0x00000040u,c->r[0]); // 801ABF68
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ABF6C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801ABF70
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801ABF74
  W32(c->r[1]+0x00000050u,c->r[0]); // 801ABF78
  W32(c->r[1]+0x00000054u,c->r[0]); // 801ABF7C
  W32(c->r[1]+0x00000058u,c->r[0]); // 801ABF80
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801ABF84
  c->lr=0x801ABF8Cu; f_801ADD00(c); // 801ABF88
  cmps(c,0,(int32_t)c->r[31],0); // 801ABF8C
  if (!crb(c,2)) { goto L_801ABFAC; } // 801ABF90
  c->r[3]=c->r[1]+0x00000020u; // 801ABF94
  c->lr=0x801ABF9Cu; f_801ADAB0(c); // 801ABF98
  cmps(c,0,(int32_t)c->r[3],0); // 801ABF9C
  if (crb(c,2)) { goto L_801ABFAC; } // 801ABFA0
  c->r[3]=0u+0xFFFFFF9Au; // 801ABFA4
  goto L_801AC044; // 801ABFA8
L_801ABFAC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ABFAC
  if (crb(c,2)) { goto L_801ABFE4; } // 801ABFB0
  c->r[10]=0u+0x801B0000u; // 801ABFB4
  W32(c->r[1]+0x00000008u,c->r[29]); // 801ABFB8
  c->r[4]=c->r[28]|c->r[28]; // 801ABFBC
  c->r[3]=c->r[1]+0x00000020u; // 801ABFC0
  c->r[5]=c->r[28]+0x00000004u; // 801ABFC4
  c->r[6]=c->r[29]+0x00000020u; // 801ABFC8
  c->r[7]=c->r[29]+0x00000024u; // 801ABFCC
  c->r[8]=c->r[29]+0x00000028u; // 801ABFD0
  c->r[9]=c->r[29]+0x0000002Cu; // 801ABFD4
  c->r[10]=c->r[10]+0xFFFFC070u; // 801ABFD8
  c->lr=0x801ABFE0u; f_801AFD90(c); // 801ABFDC
  goto L_801AC044; // 801ABFE0
L_801ABFE4:;
  c->r[0]=0u+0x00000000u; // 801ABFE4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801ABFE8
  c->r[4]=c->r[28]|c->r[28]; // 801ABFEC
  c->r[3]=c->r[1]+0x00000020u; // 801ABFF0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801ABFF4
  c->r[5]=c->r[28]+0x00000004u; // 801ABFF8
  c->r[6]=c->r[1]+0x0000001Cu; // 801ABFFC
  c->r[7]=c->r[1]+0x00000018u; // 801AC000
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC004
  c->r[8]=c->r[1]+0x00000014u; // 801AC008
  c->r[9]=c->r[1]+0x00000010u; // 801AC00C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AC010
  c->lr=0x801AC018u; f_801AFC30(c); // 801AC014
  cmps(c,0,(int32_t)c->r[3],0); // 801AC018
  c->r[31]=c->r[3]|c->r[3]; // 801AC01C
  if (!crb(c,2)) { goto L_801AC040; } // 801AC020
  c->r[4]=R32(c->r[1]+0x00000018u); // 801AC024
  c->r[3]=c->r[28]+0x00000007u; // 801AC028
  c->r[5]=R32(c->r[1]+0x00000014u); // 801AC02C
  c->r[6]=R32(c->r[1]+0x00000010u); // 801AC030
  c->lr=0x801AC038u; f_801ABE20(c); // 801AC034
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801AC038
  W8(c->r[28]+0x00000006u,c->r[0]); // 801AC03C
L_801AC040:;
  c->r[3]=c->r[31]|c->r[31]; // 801AC040
L_801AC044:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801AC044
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801AC048
  c->r[30]=R32(c->r[1]+0x00000068u); // 801AC04C
  c->r[29]=R32(c->r[1]+0x00000064u); // 801AC050
  c->r[28]=R32(c->r[1]+0x00000060u); // 801AC054
  c->lr=c->r[0]; // 801AC058
  c->r[1]=c->r[1]+0x00000070u; // 801AC05C
  return; // 801AC060
}

// fn_801AC070
void f_801AC070(Ctx* __restrict c) {
  trace_call(0x801AC070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC070
  c->r[0]=c->lr; // 801AC074
  cmps(c,0,(int32_t)c->r[3],0); // 801AC078
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC080
  c->r[31]=c->r[4]|c->r[4]; // 801AC084
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC088
  c->r[30]=c->r[3]|c->r[3]; // 801AC08C
  if (!crb(c,2)) { goto L_801AC0B4; } // 801AC090
  c->r[3]=R32(c->r[4]+0x00000014u); // 801AC094
  c->r[0]=R32(c->r[4]+0x00000020u); // 801AC098
  W8(c->r[3]+0x00000006u,c->r[0]); // 801AC09C
  c->r[3]=c->r[3]+0x00000007u; // 801AC0A0
  c->r[4]=R32(c->r[4]+0x00000024u); // 801AC0A4
  c->r[5]=R32(c->r[31]+0x00000028u); // 801AC0A8
  c->r[6]=R32(c->r[31]+0x0000002Cu); // 801AC0AC
  c->lr=0x801AC0B4u; f_801ABE20(c); // 801AC0B0
L_801AC0B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801AC0B4
  c->lr=0x801AC0BCu; f_801ADB50(c); // 801AC0B8
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AC0BC
  c->r[4]=c->r[31]|c->r[31]; // 801AC0C0
  c->ctr=c->r[12]; // 801AC0C4
  if (true) { c->lr=0x801AC0CCu; dispatch(c,c->ctr); } // 801AC0C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC0CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC0D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC0D4
  c->lr=c->r[0]; // 801AC0D8
  c->r[1]=c->r[1]+0x00000010u; // 801AC0DC
  return; // 801AC0E0
}

// NANDPrivateGetStatus
void f_801AC0F0(Ctx* __restrict c) {
  trace_call(0x801AC0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC0F0
  c->r[0]=c->lr; // 801AC0F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC0F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC0FC
  c->r[31]=c->r[4]|c->r[4]; // 801AC100
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AC104
  c->r[30]=c->r[3]|c->r[3]; // 801AC108
  c->lr=0x801AC110u; f_801ADB10(c); // 801AC10C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC110
  if (crb(c,2)) { goto L_801AC138; } // 801AC114
  c->r[3]=c->r[30]|c->r[30]; // 801AC118
  c->r[4]=c->r[31]|c->r[31]; // 801AC11C
  c->r[5]=0u+0x00000000u; // 801AC120
  c->r[6]=0u+0x00000000u; // 801AC124
  c->r[7]=0u+0x00000001u; // 801AC128
  c->lr=0x801AC130u; f_801ABF10(c); // 801AC12C
  c->lr=0x801AC134u; f_801ADB50(c); // 801AC130
  goto L_801AC13C; // 801AC134
L_801AC138:;
  c->r[3]=0u+0xFFFFFF80u; // 801AC138
L_801AC13C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC13C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC140
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AC144
  c->lr=c->r[0]; // 801AC148
  c->r[1]=c->r[1]+0x00000010u; // 801AC14C
  return; // 801AC150
}

// NANDPrivateGetStatusAsync
void f_801AC160(Ctx* __restrict c) {
  trace_call(0x801AC160u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC160
  c->r[0]=c->lr; // 801AC164
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AC168
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AC16C
  c->r[31]=c->r[6]|c->r[6]; // 801AC170
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AC174
  c->r[30]=c->r[5]|c->r[5]; // 801AC178
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AC17C
  c->r[29]=c->r[4]|c->r[4]; // 801AC180
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AC184
  c->r[28]=c->r[3]|c->r[3]; // 801AC188
  c->lr=0x801AC190u; f_801ADB10(c); // 801AC18C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC190
  if (!crb(c,2)) { goto L_801AC1A0; } // 801AC194
  c->r[3]=0u+0xFFFFFF80u; // 801AC198
  goto L_801AC1C4; // 801AC19C
L_801AC1A0:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AC1A0
  c->r[3]=c->r[28]|c->r[28]; // 801AC1A4
  c->r[4]=c->r[29]|c->r[29]; // 801AC1A8
  c->r[5]=c->r[31]|c->r[31]; // 801AC1AC
  W32(c->r[31]+0x00000014u,c->r[29]); // 801AC1B0
  c->r[6]=0u+0x00000001u; // 801AC1B4
  c->r[7]=0u+0x00000001u; // 801AC1B8
  c->lr=0x801AC1C0u; f_801ABF10(c); // 801AC1BC
  c->lr=0x801AC1C4u; f_801ADB50(c); // 801AC1C0
L_801AC1C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AC1C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AC1C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AC1CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AC1D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AC1D4
  c->lr=c->r[0]; // 801AC1D8
  c->r[1]=c->r[1]+0x00000020u; // 801AC1DC
  return; // 801AC1E0
}

// fn_801AC1F0
void f_801AC1F0(Ctx* __restrict c) {
  trace_call(0x801AC1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC1F0
  c->r[0]=c->lr; // 801AC1F4
  W32(c->r[1]+0x00000174u,c->r[0]); // 801AC1F8
  W32(c->r[1]+0x0000016Cu,c->r[31]); // 801AC1FC
  W32(c->r[1]+0x00000168u,c->r[30]); // 801AC200
  c->r[30]=c->r[3]|c->r[3]; // 801AC204
  c->lr=0x801AC20Cu; f_802E5F80(c); // 801AC208
  cmps(c,0,(int32_t)c->r[3],0); // 801AC20C
  c->r[31]=c->r[3]|c->r[3]; // 801AC210
  if (!crb(c,2)) { goto L_801AC220; } // 801AC214
  c->r[3]=0u+0x00000000u; // 801AC218
  goto L_801AC50C; // 801AC21C
L_801AC220:;
  c->r[3]=c->r[30]|c->r[30]; // 801AC220
  c->lr=0x801AC228u; f_801ADA50(c); // 801AC224
  cmps(c,0,(int32_t)c->r[3],0); // 801AC228
  if (crb(c,2)) { goto L_801AC37C; } // 801AC22C
  c->r[3]=0u+0x80310000u; // 801AC230
  c->r[0]=0u+0x00000008u; // 801AC234
  c->r[3]=c->r[3]+0xFFFF9C88u; // 801AC238
  c->r[5]=c->r[1]+0x00000054u; // 801AC23C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 801AC240
  c->r[10]=0u+0x00000000u; // 801AC244
  c->ctr=c->r[0]; // 801AC248
  c->r[0]=c->r[0]|0x00000000u; // 801AC24C
L_801AC250:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801AC250
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801AC254
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AC258
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801AC25C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AC250; } // 801AC260
  c->r[0]=R16(c->r[4]+0x00000004u); // 801AC264
  W16(c->r[5]+0x00000004u,c->r[0]); // 801AC268
  c->r[5]=0u+0x00000008u; // 801AC26C
  c->r[0]=0u+0x0000000Bu; // 801AC270
  goto L_801AC370; // 801AC274
L_801AC278:;
  c->r[7]=c->r[1]+0x00000120u; // 801AC278
  c->r[6]=c->r[1]+0x00000054u; // 801AC27C
  c->r[8]=R8(c->r[30]+0x00000000u); // 801AC280
  c->ctr=c->r[5]; // 801AC284
L_801AC288:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801AC288
  {uint32_t ea=c->r[6]+0x00000008u; c->r[3]=R32(ea); c->r[6]=ea;} // 801AC28C
  W32(c->r[7]+0x00000004u,c->r[4]); // 801AC290
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[3]); c->r[7]=ea;} // 801AC294
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AC288; } // 801AC298
  c->r[3]=R16(c->r[6]+0x00000004u); // 801AC29C
  c->r[9]=c->r[1]+0x00000124u; // 801AC2A0
  W16(c->r[7]+0x00000004u,c->r[3]); // 801AC2A4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801AC2A8
  c->r[6]=0u+0x00000000u; // 801AC2AC
  c->ctr=c->r[0]; // 801AC2B0
  c->r[0]=c->r[0]|0x00000000u; // 801AC2B4
L_801AC2B8:;
  c->r[3]=R8(c->r[9]+0x00000000u); // 801AC2B8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AC2BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801AC2C0
  if (!crb(c,2)) { goto L_801AC2D0; } // 801AC2C4
  c->r[3]=0u+0x00000001u; // 801AC2C8
  goto L_801AC358; // 801AC2CC
L_801AC2D0:;
  c->r[3]=R8(c->r[9]+0x00000001u); // 801AC2D0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AC2D4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801AC2D8
  if (!crb(c,2)) { goto L_801AC2E8; } // 801AC2DC
  c->r[3]=0u+0x00000001u; // 801AC2E0
  goto L_801AC358; // 801AC2E4
L_801AC2E8:;
  c->r[3]=R8(c->r[9]+0x00000002u); // 801AC2E8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AC2EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801AC2F0
  if (!crb(c,2)) { goto L_801AC300; } // 801AC2F4
  c->r[3]=0u+0x00000001u; // 801AC2F8
  goto L_801AC358; // 801AC2FC
L_801AC300:;
  c->r[3]=R8(c->r[9]+0x00000003u); // 801AC300
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AC304
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801AC308
  if (!crb(c,2)) { goto L_801AC318; } // 801AC30C
  c->r[3]=0u+0x00000001u; // 801AC310
  goto L_801AC358; // 801AC314
L_801AC318:;
  c->r[3]=R8(c->r[9]+0x00000004u); // 801AC318
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AC31C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801AC320
  if (!crb(c,2)) { goto L_801AC330; } // 801AC324
  c->r[3]=0u+0x00000001u; // 801AC328
  goto L_801AC358; // 801AC32C
L_801AC330:;
  c->r[3]=R8(c->r[9]+0x00000005u); // 801AC330
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AC334
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801AC338
  if (!crb(c,2)) { goto L_801AC348; } // 801AC33C
  c->r[3]=0u+0x00000001u; // 801AC340
  goto L_801AC358; // 801AC344
L_801AC348:;
  c->r[9]=c->r[9]+0x00000006u; // 801AC348
  c->r[6]=c->r[6]+0x00000005u; // 801AC34C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AC2B8; } // 801AC350
  c->r[3]=0u+0x00000000u; // 801AC354
L_801AC358:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AC358
  if (!crb(c,2)) { goto L_801AC368; } // 801AC35C
  c->r[3]=0u+0x00000000u; // 801AC360
  goto L_801AC50C; // 801AC364
L_801AC368:;
  c->r[10]=c->r[10]+0x00000001u; // 801AC368
  c->r[30]=c->r[30]+0x00000001u; // 801AC36C
L_801AC370:;
  cmpu(c,0,c->r[10],c->r[31]); // 801AC370
  if (crb(c,0)) { IRQCHK(c); goto L_801AC278; } // 801AC374
  goto L_801AC508; // 801AC378
L_801AC37C:;
  c->r[4]=c->r[30]|c->r[30]; // 801AC37C
  c->r[3]=c->r[1]+0x00000018u; // 801AC380
  c->lr=0x801AC388u; f_802EE808(c); // 801AC384
  c->r[3]=c->r[1]+0x00000017u; // 801AC388
  c->r[0]=R8(c->r[3]+c->r[31]); // 801AC38C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801AC390
  cmps(c,0,(int32_t)c->r[0],47); // 801AC394
  if (!crb(c,2)) { goto L_801AC3AC; } // 801AC398
  c->r[0]=addc(c,c->r[31],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801AC39C
  if (crb(c,2)) { goto L_801AC3AC; } // 801AC3A0
  c->r[0]=0u+0x00000000u; // 801AC3A4
  W8(c->r[3]+c->r[31],c->r[0]); // 801AC3A8
L_801AC3AC:;
  c->r[3]=c->r[1]+0x00000008u; // 801AC3AC
  c->r[4]=c->r[1]+0x00000018u; // 801AC3B0
  c->lr=0x801AC3B8u; f_801AD870(c); // 801AC3B4
  c->r[3]=c->r[1]+0x00000008u; // 801AC3B8
  c->lr=0x801AC3C0u; f_802E5F80(c); // 801AC3BC
  c->r[4]=0u+0x80310000u; // 801AC3C0
  c->r[0]=0u+0x00000008u; // 801AC3C4
  c->r[4]=c->r[4]+0xFFFF9C88u; // 801AC3C8
  c->r[10]=c->r[1]+0x00000008u; // 801AC3CC
  c->r[7]=c->r[1]+0x00000098u; // 801AC3D0
  c->r[11]=0u+0x00000000u; // 801AC3D4
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801AC3D8
  c->ctr=c->r[0]; // 801AC3DC
L_801AC3E0:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801AC3E0
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801AC3E4
  W32(c->r[7]+0x00000004u,c->r[4]); // 801AC3E8
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 801AC3EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AC3E0; } // 801AC3F0
  c->r[0]=R16(c->r[5]+0x00000004u); // 801AC3F4
  c->r[6]=0u+0x00000008u; // 801AC3F8
  W16(c->r[7]+0x00000004u,c->r[0]); // 801AC3FC
  c->r[0]=0u+0x0000000Bu; // 801AC400
  goto L_801AC500; // 801AC404
L_801AC408:;
  c->r[4]=R8(c->r[10]+0x00000000u); // 801AC408
  c->r[8]=c->r[1]+0x000000DCu; // 801AC40C
  c->r[7]=c->r[1]+0x00000098u; // 801AC410
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801AC414
  c->ctr=c->r[6]; // 801AC418
  c->r[0]=c->r[0]|0x00000000u; // 801AC41C
L_801AC420:;
  c->r[5]=R32(c->r[7]+0x00000004u); // 801AC420
  {uint32_t ea=c->r[7]+0x00000008u; c->r[4]=R32(ea); c->r[7]=ea;} // 801AC424
  W32(c->r[8]+0x00000004u,c->r[5]); // 801AC428
  {uint32_t ea=c->r[8]+0x00000008u; W32(ea,c->r[4]); c->r[8]=ea;} // 801AC42C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AC420; } // 801AC430
  c->r[4]=R16(c->r[7]+0x00000004u); // 801AC434
  c->r[7]=c->r[1]+0x000000E0u; // 801AC438
  W16(c->r[8]+0x00000004u,c->r[4]); // 801AC43C
  c->r[5]=0u+0x00000000u; // 801AC440
  c->ctr=c->r[0]; // 801AC444
L_801AC448:;
  c->r[4]=R8(c->r[7]+0x00000000u); // 801AC448
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801AC44C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 801AC450
  if (!crb(c,2)) { goto L_801AC460; } // 801AC454
  c->r[4]=0u+0x00000001u; // 801AC458
  goto L_801AC4E8; // 801AC45C
L_801AC460:;
  c->r[4]=R8(c->r[7]+0x00000001u); // 801AC460
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801AC464
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 801AC468
  if (!crb(c,2)) { goto L_801AC478; } // 801AC46C
  c->r[4]=0u+0x00000001u; // 801AC470
  goto L_801AC4E8; // 801AC474
L_801AC478:;
  c->r[4]=R8(c->r[7]+0x00000002u); // 801AC478
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801AC47C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 801AC480
  if (!crb(c,2)) { goto L_801AC490; } // 801AC484
  c->r[4]=0u+0x00000001u; // 801AC488
  goto L_801AC4E8; // 801AC48C
L_801AC490:;
  c->r[4]=R8(c->r[7]+0x00000003u); // 801AC490
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801AC494
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 801AC498
  if (!crb(c,2)) { goto L_801AC4A8; } // 801AC49C
  c->r[4]=0u+0x00000001u; // 801AC4A0
  goto L_801AC4E8; // 801AC4A4
L_801AC4A8:;
  c->r[4]=R8(c->r[7]+0x00000004u); // 801AC4A8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801AC4AC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 801AC4B0
  if (!crb(c,2)) { goto L_801AC4C0; } // 801AC4B4
  c->r[4]=0u+0x00000001u; // 801AC4B8
  goto L_801AC4E8; // 801AC4BC
L_801AC4C0:;
  c->r[4]=R8(c->r[7]+0x00000005u); // 801AC4C0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801AC4C4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[4]); // 801AC4C8
  if (!crb(c,2)) { goto L_801AC4D8; } // 801AC4CC
  c->r[4]=0u+0x00000001u; // 801AC4D0
  goto L_801AC4E8; // 801AC4D4
L_801AC4D8:;
  c->r[7]=c->r[7]+0x00000006u; // 801AC4D8
  c->r[5]=c->r[5]+0x00000005u; // 801AC4DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AC448; } // 801AC4E0
  c->r[4]=0u+0x00000000u; // 801AC4E4
L_801AC4E8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801AC4E8
  if (!crb(c,2)) { goto L_801AC4F8; } // 801AC4EC
  c->r[3]=0u+0x00000000u; // 801AC4F0
  goto L_801AC50C; // 801AC4F4
L_801AC4F8:;
  c->r[10]=c->r[10]+0x00000001u; // 801AC4F8
  c->r[11]=c->r[11]+0x00000001u; // 801AC4FC
L_801AC500:;
  cmpu(c,0,c->r[11],c->r[3]); // 801AC500
  if (crb(c,0)) { IRQCHK(c); goto L_801AC408; } // 801AC504
L_801AC508:;
  c->r[3]=0u+0x00000001u; // 801AC508
L_801AC50C:;
  c->r[0]=R32(c->r[1]+0x00000174u); // 801AC50C
  c->r[31]=R32(c->r[1]+0x0000016Cu); // 801AC510
  c->r[30]=R32(c->r[1]+0x00000168u); // 801AC514
  c->lr=c->r[0]; // 801AC518
  c->r[1]=c->r[1]+0x00000170u; // 801AC51C
  return; // 801AC520
}

// nandOpen
void f_801AC530(Ctx* __restrict c) {
  trace_call(0x801AC530u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC530
  c->r[0]=c->lr; // 801AC534
  W32(c->r[1]+0x00000064u,c->r[0]); // 801AC538
  c->r[11]=c->r[1]+0x00000060u; // 801AC53C
  c->lr=0x801AC544u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AC540
  c->r[0]=0u+0x00000000u; // 801AC544
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AC548
  c->r[27]=c->r[4]|c->r[4]; // 801AC54C
  c->r[4]=c->r[3]|c->r[3]; // 801AC550
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AC554
  c->r[28]=c->r[5]|c->r[5]; // 801AC558
  c->r[29]=c->r[6]|c->r[6]; // 801AC55C
  c->r[30]=c->r[7]|c->r[7]; // 801AC560
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AC564
  c->r[3]=c->r[1]+0x00000008u; // 801AC568
  c->r[31]=0u+0x00000000u; // 801AC56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC570
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AC574
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AC578
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AC57C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AC580
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AC584
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AC588
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AC58C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AC590
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AC594
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AC598
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AC59C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AC5A0
  c->lr=0x801AC5A8u; f_801ADD00(c); // 801AC5A4
  cmps(c,0,(int32_t)c->r[30],0); // 801AC5A8
  if (!crb(c,2)) { goto L_801AC5C8; } // 801AC5AC
  c->r[3]=c->r[1]+0x00000008u; // 801AC5B0
  c->lr=0x801AC5B8u; f_801ADA70(c); // 801AC5B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC5B8
  if (crb(c,2)) { goto L_801AC5C8; } // 801AC5BC
  c->r[3]=0u+0xFFFFFF9Au; // 801AC5C0
  goto L_801AC628; // 801AC5C4
L_801AC5C8:;
  cmps(c,0,(int32_t)c->r[27],3); // 801AC5C8
  if (crb(c,2)) { goto L_801AC5E4; } // 801AC5CC
  cmps(c,0,(int32_t)c->r[27],1); // 801AC5D0
  if (crb(c,2)) { goto L_801AC5EC; } // 801AC5D4
  cmps(c,0,(int32_t)c->r[27],2); // 801AC5D8
  if (crb(c,2)) { goto L_801AC5F4; } // 801AC5DC
  goto L_801AC5F8; // 801AC5E0
L_801AC5E4:;
  c->r[31]=0u+0x00000003u; // 801AC5E4
  goto L_801AC5F8; // 801AC5E8
L_801AC5EC:;
  c->r[31]=0u+0x00000001u; // 801AC5EC
  goto L_801AC5F8; // 801AC5F0
L_801AC5F4:;
  c->r[31]=0u+0x00000002u; // 801AC5F4
L_801AC5F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AC5F8
  if (crb(c,2)) { goto L_801AC61C; } // 801AC5FC
  c->r[5]=0u+0x801B0000u; // 801AC600
  c->r[4]=c->r[31]|c->r[31]; // 801AC604
  c->r[6]=c->r[28]|c->r[28]; // 801AC608
  c->r[3]=c->r[1]+0x00000008u; // 801AC60C
  c->r[5]=c->r[5]+0xFFFFC860u; // 801AC610
  c->lr=0x801AC618u; f_801B07E0(c); // 801AC614
  goto L_801AC628; // 801AC618
L_801AC61C:;
  c->r[4]=c->r[31]|c->r[31]; // 801AC61C
  c->r[3]=c->r[1]+0x00000008u; // 801AC620
  c->lr=0x801AC628u; f_801B0710(c); // 801AC624
L_801AC628:;
  c->r[11]=c->r[1]+0x00000060u; // 801AC628
  c->lr=0x801AC630u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AC62C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801AC630
  c->lr=c->r[0]; // 801AC634
  c->r[1]=c->r[1]+0x00000060u; // 801AC638
  return; // 801AC63C
}

// NANDOpen
void f_801AC640(Ctx* __restrict c) {
  trace_call(0x801AC640u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC640
  c->r[0]=c->lr; // 801AC644
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AC648
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AC64C
  c->r[31]=c->r[5]|c->r[5]; // 801AC650
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AC654
  c->r[30]=c->r[4]|c->r[4]; // 801AC658
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AC65C
  c->r[29]=c->r[3]|c->r[3]; // 801AC660
  c->lr=0x801AC668u; f_801ADB10(c); // 801AC664
  cmps(c,0,(int32_t)c->r[3],0); // 801AC668
  if (!crb(c,2)) { goto L_801AC678; } // 801AC66C
  c->r[3]=0u+0xFFFFFF80u; // 801AC670
  goto L_801AC6B0; // 801AC674
L_801AC678:;
  c->r[3]=c->r[29]|c->r[29]; // 801AC678
  c->r[4]=c->r[31]|c->r[31]; // 801AC67C
  c->r[5]=0u+0x00000000u; // 801AC680
  c->r[6]=0u+0x00000000u; // 801AC684
  c->r[7]=0u+0x00000000u; // 801AC688
  c->lr=0x801AC690u; f_801AC530(c); // 801AC68C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC690
  if (crb(c,0)) { goto L_801AC6AC; } // 801AC694
  W32(c->r[30]+0x00000000u,c->r[3]); // 801AC698
  c->r[0]=0u+0x00000001u; // 801AC69C
  c->r[3]=0u+0x00000000u; // 801AC6A0
  W8(c->r[30]+0x0000008Au,c->r[0]); // 801AC6A4
  goto L_801AC6B0; // 801AC6A8
L_801AC6AC:;
  c->lr=0x801AC6B0u; f_801ADB50(c); // 801AC6AC
L_801AC6B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AC6B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AC6B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AC6B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AC6BC
  c->lr=c->r[0]; // 801AC6C0
  c->r[1]=c->r[1]+0x00000020u; // 801AC6C4
  return; // 801AC6C8
}

// NANDPrivateOpen
void f_801AC6D0(Ctx* __restrict c) {
  trace_call(0x801AC6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC6D0
  c->r[0]=c->lr; // 801AC6D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AC6D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AC6DC
  c->r[31]=c->r[5]|c->r[5]; // 801AC6E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AC6E4
  c->r[30]=c->r[4]|c->r[4]; // 801AC6E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AC6EC
  c->r[29]=c->r[3]|c->r[3]; // 801AC6F0
  c->lr=0x801AC6F8u; f_801ADB10(c); // 801AC6F4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC6F8
  if (!crb(c,2)) { goto L_801AC708; } // 801AC6FC
  c->r[3]=0u+0xFFFFFF80u; // 801AC700
  goto L_801AC740; // 801AC704
L_801AC708:;
  c->r[3]=c->r[29]|c->r[29]; // 801AC708
  c->r[4]=c->r[31]|c->r[31]; // 801AC70C
  c->r[5]=0u+0x00000000u; // 801AC710
  c->r[6]=0u+0x00000000u; // 801AC714
  c->r[7]=0u+0x00000001u; // 801AC718
  c->lr=0x801AC720u; f_801AC530(c); // 801AC71C
  cmps(c,0,(int32_t)c->r[3],0); // 801AC720
  if (crb(c,0)) { goto L_801AC73C; } // 801AC724
  W32(c->r[30]+0x00000000u,c->r[3]); // 801AC728
  c->r[0]=0u+0x00000001u; // 801AC72C
  c->r[3]=0u+0x00000000u; // 801AC730
  W8(c->r[30]+0x0000008Au,c->r[0]); // 801AC734
  goto L_801AC740; // 801AC738
L_801AC73C:;
  c->lr=0x801AC740u; f_801ADB50(c); // 801AC73C
L_801AC740:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AC740
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AC744
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AC748
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AC74C
  c->lr=c->r[0]; // 801AC750
  c->r[1]=c->r[1]+0x00000020u; // 801AC754
  return; // 801AC758
}

// NANDOpenAsync
void f_801AC760(Ctx* __restrict c) {
  trace_call(0x801AC760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC760
  c->r[0]=c->lr; // 801AC764
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AC768
  c->r[11]=c->r[1]+0x00000020u; // 801AC76C
  c->lr=0x801AC774u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AC770
  c->r[27]=c->r[3]|c->r[3]; // 801AC774
  c->r[28]=c->r[4]|c->r[4]; // 801AC778
  c->r[29]=c->r[5]|c->r[5]; // 801AC77C
  c->r[30]=c->r[6]|c->r[6]; // 801AC780
  c->r[31]=c->r[7]|c->r[7]; // 801AC784
  c->lr=0x801AC78Cu; f_801ADB10(c); // 801AC788
  cmps(c,0,(int32_t)c->r[3],0); // 801AC78C
  if (!crb(c,2)) { goto L_801AC79C; } // 801AC790
  c->r[3]=0u+0xFFFFFF80u; // 801AC794
  goto L_801AC7C0; // 801AC798
L_801AC79C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AC79C
  c->r[3]=c->r[27]|c->r[27]; // 801AC7A0
  c->r[4]=c->r[29]|c->r[29]; // 801AC7A4
  c->r[5]=c->r[31]|c->r[31]; // 801AC7A8
  W32(c->r[31]+0x00000008u,c->r[28]); // 801AC7AC
  c->r[6]=0u+0x00000001u; // 801AC7B0
  c->r[7]=0u+0x00000000u; // 801AC7B4
  c->lr=0x801AC7BCu; f_801AC530(c); // 801AC7B8
  c->lr=0x801AC7C0u; f_801ADB50(c); // 801AC7BC
L_801AC7C0:;
  c->r[11]=c->r[1]+0x00000020u; // 801AC7C0
  c->lr=0x801AC7C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AC7C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AC7C8
  c->lr=c->r[0]; // 801AC7CC
  c->r[1]=c->r[1]+0x00000020u; // 801AC7D0
  return; // 801AC7D4
}

// NANDPrivateOpenAsync
void f_801AC7E0(Ctx* __restrict c) {
  trace_call(0x801AC7E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC7E0
  c->r[0]=c->lr; // 801AC7E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AC7E8
  c->r[11]=c->r[1]+0x00000020u; // 801AC7EC
  c->lr=0x801AC7F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AC7F0
  c->r[27]=c->r[3]|c->r[3]; // 801AC7F4
  c->r[28]=c->r[4]|c->r[4]; // 801AC7F8
  c->r[29]=c->r[5]|c->r[5]; // 801AC7FC
  c->r[30]=c->r[6]|c->r[6]; // 801AC800
  c->r[31]=c->r[7]|c->r[7]; // 801AC804
  c->lr=0x801AC80Cu; f_801ADB10(c); // 801AC808
  cmps(c,0,(int32_t)c->r[3],0); // 801AC80C
  if (!crb(c,2)) { goto L_801AC81C; } // 801AC810
  c->r[3]=0u+0xFFFFFF80u; // 801AC814
  goto L_801AC840; // 801AC818
L_801AC81C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AC81C
  c->r[3]=c->r[27]|c->r[27]; // 801AC820
  c->r[4]=c->r[29]|c->r[29]; // 801AC824
  c->r[5]=c->r[31]|c->r[31]; // 801AC828
  W32(c->r[31]+0x00000008u,c->r[28]); // 801AC82C
  c->r[6]=0u+0x00000001u; // 801AC830
  c->r[7]=0u+0x00000001u; // 801AC834
  c->lr=0x801AC83Cu; f_801AC530(c); // 801AC838
  c->lr=0x801AC840u; f_801ADB50(c); // 801AC83C
L_801AC840:;
  c->r[11]=c->r[1]+0x00000020u; // 801AC840
  c->lr=0x801AC848u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AC844
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AC848
  c->lr=c->r[0]; // 801AC84C
  c->r[1]=c->r[1]+0x00000020u; // 801AC850
  return; // 801AC854
}

// nandOpenCallback
void f_801AC860(Ctx* __restrict c) {
  trace_call(0x801AC860u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC860
  c->r[0]=c->lr; // 801AC864
  cmps(c,0,(int32_t)c->r[3],0); // 801AC868
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC86C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC870
  c->r[31]=c->r[4]|c->r[4]; // 801AC874
  if (crb(c,0)) { goto L_801AC8B0; } // 801AC878
  c->r[5]=R32(c->r[4]+0x00000008u); // 801AC87C
  c->r[6]=0u+0x00000002u; // 801AC880
  c->r[0]=0u+0x00000001u; // 801AC884
  W32(c->r[5]+0x00000000u,c->r[3]); // 801AC888
  c->r[3]=0u+0x00000000u; // 801AC88C
  c->r[5]=R32(c->r[4]+0x00000008u); // 801AC890
  W8(c->r[5]+0x00000089u,c->r[6]); // 801AC894
  c->r[5]=R32(c->r[4]+0x00000008u); // 801AC898
  W8(c->r[5]+0x0000008Au,c->r[0]); // 801AC89C
  c->r[12]=R32(c->r[4]+0x00000004u); // 801AC8A0
  c->ctr=c->r[12]; // 801AC8A4
  if (true) { c->lr=0x801AC8ACu; dispatch(c,c->ctr); } // 801AC8A8
  goto L_801AC8C4; // 801AC8AC
L_801AC8B0:;
  c->lr=0x801AC8B4u; f_801ADB50(c); // 801AC8B0
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AC8B4
  c->r[4]=c->r[31]|c->r[31]; // 801AC8B8
  c->ctr=c->r[12]; // 801AC8BC
  if (true) { c->lr=0x801AC8C4u; dispatch(c,c->ctr); } // 801AC8C0
L_801AC8C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC8C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC8C8
  c->lr=c->r[0]; // 801AC8CC
  c->r[1]=c->r[1]+0x00000010u; // 801AC8D0
  return; // 801AC8D4
}

// NANDClose
void f_801AC8E0(Ctx* __restrict c) {
  trace_call(0x801AC8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC8E0
  c->r[0]=c->lr; // 801AC8E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC8E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AC8EC
  c->r[31]=c->r[3]|c->r[3]; // 801AC8F0
  c->lr=0x801AC8F8u; f_801ADB10(c); // 801AC8F4
  cmps(c,0,(int32_t)c->r[3],0); // 801AC8F8
  if (!crb(c,2)) { goto L_801AC908; } // 801AC8FC
  c->r[3]=0u+0xFFFFFF80u; // 801AC900
  goto L_801AC938; // 801AC904
L_801AC908:;
  c->r[0]=R8(c->r[31]+0x0000008Au); // 801AC908
  cmpu(c,0,c->r[0],0x00000001u); // 801AC90C
  if (crb(c,2)) { goto L_801AC91C; } // 801AC910
  c->r[3]=0u+0xFFFFFFF8u; // 801AC914
  goto L_801AC938; // 801AC918
L_801AC91C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801AC91C
  c->lr=0x801AC924u; f_801B0BA0(c); // 801AC920
  cmps(c,0,(int32_t)c->r[3],0); // 801AC924
  if (!crb(c,2)) { goto L_801AC934; } // 801AC928
  c->r[0]=0u+0x00000002u; // 801AC92C
  W8(c->r[31]+0x0000008Au,c->r[0]); // 801AC930
L_801AC934:;
  c->lr=0x801AC938u; f_801ADB50(c); // 801AC934
L_801AC938:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AC93C
  c->lr=c->r[0]; // 801AC940
  c->r[1]=c->r[1]+0x00000010u; // 801AC944
  return; // 801AC948
}

// NANDCloseAsync
void f_801AC950(Ctx* __restrict c) {
  trace_call(0x801AC950u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC950
  c->r[0]=c->lr; // 801AC954
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AC958
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AC95C
  c->r[31]=c->r[5]|c->r[5]; // 801AC960
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AC964
  c->r[30]=c->r[4]|c->r[4]; // 801AC968
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AC96C
  c->r[29]=c->r[3]|c->r[3]; // 801AC970
  c->lr=0x801AC978u; f_801ADB10(c); // 801AC974
  cmps(c,0,(int32_t)c->r[3],0); // 801AC978
  if (!crb(c,2)) { goto L_801AC988; } // 801AC97C
  c->r[3]=0u+0xFFFFFF80u; // 801AC980
  goto L_801AC9BC; // 801AC984
L_801AC988:;
  c->r[0]=R8(c->r[29]+0x0000008Au); // 801AC988
  cmpu(c,0,c->r[0],0x00000001u); // 801AC98C
  if (crb(c,2)) { goto L_801AC99C; } // 801AC990
  c->r[3]=0u+0xFFFFFFF8u; // 801AC994
  goto L_801AC9BC; // 801AC998
L_801AC99C:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AC99C
  c->r[4]=0u+0x801B0000u; // 801AC9A0
  c->r[5]=c->r[31]|c->r[31]; // 801AC9A4
  W32(c->r[31]+0x00000008u,c->r[29]); // 801AC9A8
  c->r[4]=c->r[4]+0xFFFFD330u; // 801AC9AC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801AC9B0
  c->lr=0x801AC9B8u; f_801B0BB0(c); // 801AC9B4
  c->lr=0x801AC9BCu; f_801ADB50(c); // 801AC9B8
L_801AC9BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AC9BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AC9C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AC9C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AC9C8
  c->lr=c->r[0]; // 801AC9CC
  c->r[1]=c->r[1]+0x00000020u; // 801AC9D0
  return; // 801AC9D4
}

// fn_801AC9E0
void f_801AC9E0(Ctx* __restrict c) {
  trace_call(0x801AC9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AC9E0
  c->r[0]=c->lr; // 801AC9E4
  c->r[10]=0u+0x00000000u; // 801AC9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AC9EC
  c->r[0]=0u+0x00000001u; // 801AC9F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AC9F4
  c->lr=0x801AC9FCu; f_801ACA10(c); // 801AC9F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AC9FC
  c->lr=c->r[0]; // 801ACA00
  c->r[1]=c->r[1]+0x00000010u; // 801ACA04
  return; // 801ACA08
}

// fn_801ACA10
void f_801ACA10(Ctx* __restrict c) {
  trace_call(0x801ACA10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACA10
  c->r[0]=c->lr; // 801ACA14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ACA18
  c->r[11]=c->r[1]+0x00000030u; // 801ACA1C
  c->lr=0x801ACA24u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ACA20
  c->r[31]=R32(c->r[1]+0x00000038u); // 801ACA24
  c->r[23]=c->r[3]|c->r[3]; // 801ACA28
  c->r[24]=c->r[4]|c->r[4]; // 801ACA2C
  c->r[25]=c->r[5]|c->r[5]; // 801ACA30
  c->r[26]=c->r[6]|c->r[6]; // 801ACA34
  c->r[27]=c->r[7]|c->r[7]; // 801ACA38
  c->r[28]=c->r[8]|c->r[8]; // 801ACA3C
  c->r[29]=c->r[9]|c->r[9]; // 801ACA40
  c->r[30]=c->r[10]|c->r[10]; // 801ACA44
  c->lr=0x801ACA4Cu; f_801ADB10(c); // 801ACA48
  cmps(c,0,(int32_t)c->r[3],0); // 801ACA4C
  if (!crb(c,2)) { goto L_801ACA5C; } // 801ACA50
  c->r[3]=0u+0xFFFFFF80u; // 801ACA54
  goto L_801ACB60; // 801ACA58
L_801ACA5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ACA5C
  if (crb(c,2)) { goto L_801ACA74; } // 801ACA60
  c->r[0]=rotl(c->r[27],0)&0x00003FFFu; cr0(c,c->r[0]); // 801ACA64
  if (crb(c,2)) { goto L_801ACA74; } // 801ACA68
  c->r[3]=0u+0xFFFFFFF8u; // 801ACA6C
  goto L_801ACB60; // 801ACA70
L_801ACA74:;
  c->r[0]=0u+0x00000000u; // 801ACA74
  W8(c->r[24]+0x00000088u,c->r[25]); // 801ACA78
  c->r[4]=c->r[23]|c->r[23]; // 801ACA7C
  c->r[3]=c->r[24]+0x00000008u; // 801ACA80
  W8(c->r[24]+0x00000089u,c->r[0]); // 801ACA84
  W32(c->r[29]+0x000000B8u,c->r[31]); // 801ACA88
  c->lr=0x801ACA90u; f_801ADD00(c); // 801ACA8C
  cmps(c,0,(int32_t)c->r[30],0); // 801ACA90
  if (!crb(c,2)) { goto L_801ACAB0; } // 801ACA94
  c->r[3]=c->r[24]+0x00000008u; // 801ACA98
  c->lr=0x801ACAA0u; f_801ADA70(c); // 801ACA9C
  cmps(c,0,(int32_t)c->r[3],0); // 801ACAA0
  if (crb(c,2)) { goto L_801ACAB0; } // 801ACAA4
  c->r[3]=0u+0xFFFFFFFFu; // 801ACAA8
  goto L_801ACB60; // 801ACAAC
L_801ACAB0:;
  cmpu(c,0,c->r[25],0x00000001u); // 801ACAB0
  if (!crb(c,2)) { goto L_801ACAF0; } // 801ACAB4
  c->r[5]=0u+0x801B0000u; // 801ACAB8
  W32(c->r[29]+0x00000008u,c->r[24]); // 801ACABC
  c->r[6]=c->r[29]|c->r[29]; // 801ACAC0
  c->r[3]=c->r[24]+0x00000008u; // 801ACAC4
  W32(c->r[29]+0x00000004u,c->r[28]); // 801ACAC8
  c->r[5]=c->r[5]+0xFFFFCF50u; // 801ACACC
  c->r[4]=0u+0x00000001u; // 801ACAD0
  c->lr=0x801ACAD8u; f_801B07E0(c); // 801ACAD4
  cmps(c,0,(int32_t)c->r[3],0); // 801ACAD8
  if (!crb(c,2)) { goto L_801ACAE8; } // 801ACADC
  c->r[3]=0u+0x00000000u; // 801ACAE0
  goto L_801ACB60; // 801ACAE4
L_801ACAE8:;
  c->lr=0x801ACAECu; f_801ADB50(c); // 801ACAE8
  goto L_801ACB60; // 801ACAEC
L_801ACAF0:;
  c->r[0]=c->r[25]+0x000000FEu; // 801ACAF0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801ACAF4
  cmpu(c,0,c->r[0],0x00000001u); // 801ACAF8
  if (crb(c,1)) { goto L_801ACB5C; } // 801ACAFC
  c->r[31]=0u+0x00000000u; // 801ACB00
  c->r[3]=0u+0x803A0000u; // 801ACB04
  c->r[8]=0u+0x801B0000u; // 801ACB08
  W32(c->r[29]+0x00000008u,c->r[24]); // 801ACB0C
  c->r[9]=c->r[29]|c->r[29]; // 801ACB10
  c->r[3]=c->r[3]+0xFFFF9DB0u; // 801ACB14
  W32(c->r[29]+0x00000004u,c->r[28]); // 801ACB18
  c->r[8]=c->r[8]+0xFFFFCB80u; // 801ACB1C
  c->r[4]=0u+0x00000000u; // 801ACB20
  c->r[5]=0u+0x00000003u; // 801ACB24
  W32(c->r[29]+0x0000007Cu,c->r[31]); // 801ACB28
  c->r[6]=0u+0x00000003u; // 801ACB2C
  c->r[7]=0u+0x00000003u; // 801ACB30
  W32(c->r[29]+0x00000080u,c->r[26]); // 801ACB34
  W32(c->r[29]+0x00000084u,c->r[27]); // 801ACB38
  c->lr=0x801ACB40u; f_801AF880(c); // 801ACB3C
  cmps(c,0,(int32_t)c->r[3],0); // 801ACB40
  if (!crb(c,2)) { goto L_801ACB4C; } // 801ACB44
  goto L_801ACB54; // 801ACB48
L_801ACB4C:;
  c->lr=0x801ACB50u; f_801ADB50(c); // 801ACB4C
  c->r[31]=c->r[3]|c->r[3]; // 801ACB50
L_801ACB54:;
  c->r[3]=c->r[31]|c->r[31]; // 801ACB54
  goto L_801ACB60; // 801ACB58
L_801ACB5C:;
  c->r[3]=0u+0xFFFFFFF8u; // 801ACB5C
L_801ACB60:;
  c->r[11]=c->r[1]+0x00000030u; // 801ACB60
  c->lr=0x801ACB68u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ACB64
  c->r[0]=R32(c->r[1]+0x00000034u); // 801ACB68
  c->lr=c->r[0]; // 801ACB6C
  c->r[1]=c->r[1]+0x00000030u; // 801ACB70
  return; // 801ACB74
}

// fn_801ACB80
void f_801ACB80(Ctx* __restrict c) {
  trace_call(0x801ACB80u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACB80
  c->r[0]=c->lr; // 801ACB84
  cmps(c,0,(int32_t)c->r[3],0); // 801ACB88
  c->r[5]=c->r[3]|c->r[3]; // 801ACB8C
  W32(c->r[1]+0x00000074u,c->r[0]); // 801ACB90
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801ACB94
  W32(c->r[1]+0x00000068u,c->r[30]); // 801ACB98
  c->r[30]=c->r[4]|c->r[4]; // 801ACB9C
  if (!crb(c,0)) { goto L_801ACBB8; } // 801ACBA0
  cmps(c,0,(int32_t)c->r[3],-105); // 801ACBA4
  if (!crb(c,2)) { goto L_801ACF20; } // 801ACBA8
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801ACBAC
  cmps(c,0,(int32_t)c->r[0],0); // 801ACBB0
  if (!crb(c,2)) { goto L_801ACF20; } // 801ACBB4
L_801ACBB8:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801ACBB8
  c->r[7]=0u+0xFFFFFF8Bu; // 801ACBBC
  c->r[31]=R32(c->r[4]+0x00000008u); // 801ACBC0
  cmps(c,0,(int32_t)c->r[0],0); // 801ACBC4
  if (!crb(c,2)) { goto L_801ACBD4; } // 801ACBC8
  c->r[0]=0u+0x00000001u; // 801ACBCC
  W8(c->r[31]+0x00000089u,c->r[0]); // 801ACBD0
L_801ACBD4:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801ACBD4
  cmps(c,0,(int32_t)c->r[0],2); // 801ACBD8
  if (!crb(c,2)) { goto L_801ACBEC; } // 801ACBDC
  W32(c->r[31]+0x00000004u,c->r[3]); // 801ACBE0
  c->r[0]=0u+0x00000002u; // 801ACBE4
  W8(c->r[31]+0x00000089u,c->r[0]); // 801ACBE8
L_801ACBEC:;
  c->r[6]=R32(c->r[4]+0x0000007Cu); // 801ACBEC
  cmps(c,0,(int32_t)c->r[6],2); // 801ACBF0
  if (!crb(c,2)) { goto L_801ACC10; } // 801ACBF4
  c->r[0]=R32(c->r[4]+0x000000B8u); // 801ACBF8
  cmps(c,0,(int32_t)c->r[0],0); // 801ACBFC
  if (crb(c,2)) { goto L_801ACC10; } // 801ACC00
  c->r[0]=c->r[6]+0x00000002u; // 801ACC04
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 801ACC08
  goto L_801ACC1C; // 801ACC0C
L_801ACC10:;
  c->r[6]=R32(c->r[4]+0x0000007Cu); // 801ACC10
  c->r[0]=c->r[6]+0x00000001u; // 801ACC14
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 801ACC18
L_801ACC1C:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801ACC1C
  cmpu(c,0,c->r[0],0x00000009u); // 801ACC20
  if (crb(c,1)) { goto L_801ACEFC; } // 801ACC24
  c->r[6]=0u+0x803A0000u; // 801ACC28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ACC2C
  c->r[6]=c->r[6]+0xFFFF9DC8u; // 801ACC30
  c->r[6]=R32(c->r[6]+c->r[0]); // 801ACC34
  c->ctr=c->r[6]; // 801ACC38
  if (true) { switch (c->ctr) { case 0x801ACC40u: goto L_801ACC40; case 0x801ACC74u: goto L_801ACC74; case 0x801ACC94u: goto L_801ACC94; case 0x801ACCF4u: goto L_801ACCF4; case 0x801ACD84u: goto L_801ACD84; case 0x801ACDE8u: goto L_801ACDE8; case 0x801ACE20u: goto L_801ACE20; case 0x801ACE44u: goto L_801ACE44; case 0x801ACE9Cu: goto L_801ACE9C; case 0x801ACEFCu: goto L_801ACEFC; default: break; } dispatch(c,c->ctr); return; } // 801ACC3C
L_801ACC40:;
  c->r[10]=0u+0x801B0000u; // 801ACC40
  W32(c->r[1]+0x00000008u,c->r[4]); // 801ACC44
  c->r[3]=c->r[31]+0x00000008u; // 801ACC48
  c->r[5]=c->r[4]+0x0000001Cu; // 801ACC4C
  c->r[6]=c->r[4]+0x00000020u; // 801ACC50
  c->r[7]=c->r[4]+0x00000024u; // 801ACC54
  c->r[8]=c->r[4]+0x00000028u; // 801ACC58
  c->r[9]=c->r[4]+0x0000002Cu; // 801ACC5C
  c->r[10]=c->r[10]+0xFFFFCB80u; // 801ACC60
  c->r[4]=c->r[4]+0x00000018u; // 801ACC64
  c->lr=0x801ACC6Cu; f_801AFD90(c); // 801ACC68
  c->r[7]=c->r[3]|c->r[3]; // 801ACC6C
  goto L_801ACEFC; // 801ACC70
L_801ACC74:;
  c->r[5]=0u+0x801B0000u; // 801ACC74
  c->r[6]=c->r[30]|c->r[30]; // 801ACC78
  c->r[3]=c->r[31]+0x00000008u; // 801ACC7C
  c->r[4]=0u+0x00000001u; // 801ACC80
  c->r[5]=c->r[5]+0xFFFFCB80u; // 801ACC84
  c->lr=0x801ACC8Cu; f_801B07E0(c); // 801ACC88
  c->r[7]=c->r[3]|c->r[3]; // 801ACC8C
  goto L_801ACEFC; // 801ACC90
L_801ACC94:;
  c->lr=0x801ACC98u; f_801251B0(c); // 801ACC94
  c->r[31]=R32(c->r[13]+0xFFFFC390u); // 801ACC98
  c->r[0]=c->r[31]+0x00000001u; // 801ACC9C
  W32(c->r[13]+0xFFFFC390u,c->r[0]); // 801ACCA0
  c->lr=0x801ACCA8u; f_801251F0(c); // 801ACCA4
  c->r[5]=0u+0x803A0000u; // 801ACCA8
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 801ACCAC
  c->r[6]=c->r[31]|c->r[31]; // 801ACCB0
  c->r[3]=c->r[1]+0x00000020u; // 801ACCB4
  c->r[5]=c->r[5]+0xFFFF9DB0u; // 801ACCB8
  c->r[4]=c->r[13]+0xFFFFAC80u; // 801ACCBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACCC0
  c->lr=0x801ACCC8u; f_802EE604(c); // 801ACCC4
  c->r[8]=0u+0x801B0000u; // 801ACCC8
  c->r[9]=c->r[30]|c->r[30]; // 801ACCCC
  c->r[3]=c->r[1]+0x00000020u; // 801ACCD0
  c->r[4]=0u+0x00000000u; // 801ACCD4
  c->r[8]=c->r[8]+0xFFFFCB80u; // 801ACCD8
  c->r[5]=0u+0x00000003u; // 801ACCDC
  c->r[6]=0u+0x00000000u; // 801ACCE0
  c->r[7]=0u+0x00000000u; // 801ACCE4
  c->lr=0x801ACCECu; f_801AF880(c); // 801ACCE8
  c->r[7]=c->r[3]|c->r[3]; // 801ACCEC
  goto L_801ACEFC; // 801ACCF0
L_801ACCF4:;
  c->r[3]=c->r[1]+0x00000010u; // 801ACCF4
  c->r[4]=c->r[31]+0x00000008u; // 801ACCF8
  c->lr=0x801ACD00u; f_801AD870(c); // 801ACCFC
  c->r[0]=R32(c->r[30]+0x000000B8u); // 801ACD00
  cmps(c,0,(int32_t)c->r[0],0); // 801ACD04
  if (!crb(c,2)) { goto L_801ACD3C; } // 801ACD08
  c->r[0]=0u+0x00000003u; // 801ACD0C
  W8(c->r[31]+0x00000089u,c->r[0]); // 801ACD10
  c->r[4]=0u+0x803A0000u; // 801ACD14
  c->r[5]=0u+0x803A0000u; // 801ACD18
  c->r[6]=R32(c->r[30]+0x0000008Cu); // 801ACD1C
  c->r[3]=c->r[31]+0x00000048u; // 801ACD20
  c->r[4]=c->r[4]+0xFFFF9DBCu; // 801ACD24
  c->r[5]=c->r[5]+0xFFFF9DB0u; // 801ACD28
  c->r[7]=c->r[1]+0x00000010u; // 801ACD2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACD30
  c->lr=0x801ACD38u; f_802EE604(c); // 801ACD34
  goto L_801ACD58; // 801ACD38
L_801ACD3C:;
  c->r[5]=0u+0x803A0000u; // 801ACD3C
  c->r[3]=c->r[31]+0x00000048u; // 801ACD40
  c->r[5]=c->r[5]+0xFFFF9DB0u; // 801ACD44
  c->r[6]=c->r[1]+0x00000010u; // 801ACD48
  c->r[4]=c->r[13]+0xFFFFAC88u; // 801ACD4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ACD50
  c->lr=0x801ACD58u; f_802EE604(c); // 801ACD54
L_801ACD58:;
  c->r[8]=0u+0x801B0000u; // 801ACD58
  c->r[4]=R32(c->r[30]+0x00000020u); // 801ACD5C
  c->r[5]=R32(c->r[30]+0x00000024u); // 801ACD60
  c->r[9]=c->r[30]|c->r[30]; // 801ACD64
  c->r[6]=R32(c->r[30]+0x00000028u); // 801ACD68
  c->r[3]=c->r[31]+0x00000048u; // 801ACD6C
  c->r[7]=R32(c->r[30]+0x0000002Cu); // 801ACD70
  c->r[8]=c->r[8]+0xFFFFCB80u; // 801ACD74
  c->lr=0x801ACD7Cu; f_801B0610(c); // 801ACD78
  c->r[7]=c->r[3]|c->r[3]; // 801ACD7C
  goto L_801ACEFC; // 801ACD80
L_801ACD84:;
  c->r[0]=0u+0x00000004u; // 801ACD84
  W8(c->r[31]+0x00000089u,c->r[0]); // 801ACD88
  c->r[0]=R8(c->r[31]+0x00000088u); // 801ACD8C
  cmpu(c,0,c->r[0],0x00000002u); // 801ACD90
  if (!crb(c,2)) { goto L_801ACDB8; } // 801ACD94
  c->r[5]=0u+0x801B0000u; // 801ACD98
  c->r[6]=c->r[30]|c->r[30]; // 801ACD9C
  c->r[3]=c->r[31]+0x00000048u; // 801ACDA0
  c->r[4]=0u+0x00000002u; // 801ACDA4
  c->r[5]=c->r[5]+0xFFFFCB80u; // 801ACDA8
  c->lr=0x801ACDB0u; f_801B07E0(c); // 801ACDAC
  c->r[7]=c->r[3]|c->r[3]; // 801ACDB0
  goto L_801ACEFC; // 801ACDB4
L_801ACDB8:;
  cmpu(c,0,c->r[0],0x00000003u); // 801ACDB8
  if (!crb(c,2)) { goto L_801ACDE0; } // 801ACDBC
  c->r[5]=0u+0x801B0000u; // 801ACDC0
  c->r[6]=c->r[30]|c->r[30]; // 801ACDC4
  c->r[3]=c->r[31]+0x00000048u; // 801ACDC8
  c->r[4]=0u+0x00000003u; // 801ACDCC
  c->r[5]=c->r[5]+0xFFFFCB80u; // 801ACDD0
  c->lr=0x801ACDD8u; f_801B07E0(c); // 801ACDD4
  c->r[7]=c->r[3]|c->r[3]; // 801ACDD8
  goto L_801ACEFC; // 801ACDDC
L_801ACDE0:;
  c->r[7]=0u+0xFFFFFF8Bu; // 801ACDE0
  goto L_801ACEFC; // 801ACDE4
L_801ACDE8:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 801ACDE8
  c->r[3]=0u+0x00000005u; // 801ACDEC
  c->r[6]=0u+0x801B0000u; // 801ACDF0
  c->r[0]=0u+0x00000007u; // 801ACDF4
  W8(c->r[31]+0x00000089u,c->r[3]); // 801ACDF8
  c->r[7]=c->r[30]|c->r[30]; // 801ACDFC
  c->r[6]=c->r[6]+0xFFFFCB80u; // 801ACE00
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 801ACE04
  c->r[4]=R32(c->r[4]+0x00000080u); // 801ACE08
  c->r[3]=R32(c->r[31]+0x00000004u); // 801ACE0C
  c->r[5]=R32(c->r[30]+0x00000084u); // 801ACE10
  c->lr=0x801ACE18u; f_801B0A20(c); // 801ACE14
  c->r[7]=c->r[3]|c->r[3]; // 801ACE18
  goto L_801ACEFC; // 801ACE1C
L_801ACE20:;
  c->r[6]=0u+0x801B0000u; // 801ACE20
  c->r[3]=R32(c->r[31]+0x00000004u); // 801ACE24
  c->r[4]=R32(c->r[4]+0x00000080u); // 801ACE28
  c->r[7]=c->r[30]|c->r[30]; // 801ACE2C
  c->r[5]=R32(c->r[30]+0x00000084u); // 801ACE30
  c->r[6]=c->r[6]+0xFFFFCB80u; // 801ACE34
  c->lr=0x801ACE3Cu; f_801B0A20(c); // 801ACE38
  c->r[7]=c->r[3]|c->r[3]; // 801ACE3C
  goto L_801ACEFC; // 801ACE40
L_801ACE44:;
  cmps(c,0,(int32_t)c->r[3],0); // 801ACE44
  if (!crb(c,1)) { goto L_801ACE74; } // 801ACE48
  c->r[0]=0u+0x00000006u; // 801ACE4C
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 801ACE50
  c->r[6]=0u+0x801B0000u; // 801ACE54
  c->r[4]=R32(c->r[4]+0x00000080u); // 801ACE58
  c->r[3]=R32(c->r[31]+0x00000000u); // 801ACE5C
  c->r[7]=c->r[30]|c->r[30]; // 801ACE60
  c->r[6]=c->r[6]+0xFFFFCB80u; // 801ACE64
  c->lr=0x801ACE6Cu; f_801B0AF0(c); // 801ACE68
  c->r[7]=c->r[3]|c->r[3]; // 801ACE6C
  goto L_801ACEFC; // 801ACE70
L_801ACE74:;
  if (!crb(c,2)) { goto L_801ACEFC; } // 801ACE74
  c->r[6]=0u+0x801B0000u; // 801ACE78
  c->r[3]=R32(c->r[31]+0x00000000u); // 801ACE7C
  c->r[7]=c->r[30]|c->r[30]; // 801ACE80
  c->r[4]=0u+0x00000000u; // 801ACE84
  c->r[6]=c->r[6]+0xFFFFCB80u; // 801ACE88
  c->r[5]=0u+0x00000000u; // 801ACE8C
  c->lr=0x801ACE94u; f_801B0970(c); // 801ACE90
  c->r[7]=c->r[3]|c->r[3]; // 801ACE94
  goto L_801ACEFC; // 801ACE98
L_801ACE9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801ACE9C
  if (!crb(c,2)) { goto L_801ACEE0; } // 801ACEA0
  c->r[0]=R32(c->r[4]+0x000000B8u); // 801ACEA4
  cmps(c,0,(int32_t)c->r[0],0); // 801ACEA8
  if (!crb(c,2)) { goto L_801ACEBC; } // 801ACEAC
  c->r[0]=0u+0x00000003u; // 801ACEB0
  W8(c->r[31]+0x0000008Au,c->r[0]); // 801ACEB4
  goto L_801ACEC4; // 801ACEB8
L_801ACEBC:;
  c->r[0]=0u+0x00000005u; // 801ACEBC
  W8(c->r[31]+0x0000008Au,c->r[0]); // 801ACEC0
L_801ACEC4:;
  c->r[3]=0u+0x00000000u; // 801ACEC4
  c->lr=0x801ACECCu; f_801ADB50(c); // 801ACEC8
  c->r[12]=R32(c->r[30]+0x00000004u); // 801ACECC
  c->r[4]=c->r[30]|c->r[30]; // 801ACED0
  c->ctr=c->r[12]; // 801ACED4
  if (true) { c->lr=0x801ACEDCu; dispatch(c,c->ctr); } // 801ACED8
  goto L_801ACF38; // 801ACEDC
L_801ACEE0:;
  c->r[3]=c->r[5]|c->r[5]; // 801ACEE0
  c->lr=0x801ACEE8u; f_801ADB50(c); // 801ACEE4
  c->r[12]=R32(c->r[30]+0x00000004u); // 801ACEE8
  c->r[4]=c->r[30]|c->r[30]; // 801ACEEC
  c->ctr=c->r[12]; // 801ACEF0
  if (true) { c->lr=0x801ACEF8u; dispatch(c,c->ctr); } // 801ACEF4
  goto L_801ACF38; // 801ACEF8
L_801ACEFC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801ACEFC
  if (crb(c,2)) { goto L_801ACF38; } // 801ACF00
  c->r[3]=c->r[7]|c->r[7]; // 801ACF04
  c->lr=0x801ACF0Cu; f_801ADB50(c); // 801ACF08
  c->r[12]=R32(c->r[30]+0x00000004u); // 801ACF0C
  c->r[4]=c->r[30]|c->r[30]; // 801ACF10
  c->ctr=c->r[12]; // 801ACF14
  if (true) { c->lr=0x801ACF1Cu; dispatch(c,c->ctr); } // 801ACF18
  goto L_801ACF38; // 801ACF1C
L_801ACF20:;
  c->r[3]=c->r[5]|c->r[5]; // 801ACF20
  c->lr=0x801ACF28u; f_801ADB50(c); // 801ACF24
  c->r[12]=R32(c->r[30]+0x00000004u); // 801ACF28
  c->r[4]=c->r[30]|c->r[30]; // 801ACF2C
  c->ctr=c->r[12]; // 801ACF30
  if (true) { c->lr=0x801ACF38u; dispatch(c,c->ctr); } // 801ACF34
L_801ACF38:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801ACF38
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801ACF3C
  c->r[30]=R32(c->r[1]+0x00000068u); // 801ACF40
  c->lr=c->r[0]; // 801ACF44
  c->r[1]=c->r[1]+0x00000070u; // 801ACF48
  return; // 801ACF4C
}

// fn_801ACF50
void f_801ACF50(Ctx* __restrict c) {
  trace_call(0x801ACF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACF50
  c->r[0]=c->lr; // 801ACF54
  cmps(c,0,(int32_t)c->r[3],0); // 801ACF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ACF5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ACF60
  c->r[31]=c->r[4]|c->r[4]; // 801ACF64
  if (crb(c,0)) { goto L_801ACFC0; } // 801ACF68
  c->r[5]=R32(c->r[4]+0x00000008u); // 801ACF6C
  c->r[0]=0u+0x00000002u; // 801ACF70
  W32(c->r[5]+0x00000000u,c->r[3]); // 801ACF74
  c->r[3]=R32(c->r[4]+0x00000008u); // 801ACF78
  W8(c->r[3]+0x00000089u,c->r[0]); // 801ACF7C
  c->r[0]=R32(c->r[4]+0x000000B8u); // 801ACF80
  cmps(c,0,(int32_t)c->r[0],0); // 801ACF84
  if (!crb(c,2)) { goto L_801ACF9C; } // 801ACF88
  c->r[3]=R32(c->r[4]+0x00000008u); // 801ACF8C
  c->r[0]=0u+0x00000003u; // 801ACF90
  W8(c->r[3]+0x0000008Au,c->r[0]); // 801ACF94
  goto L_801ACFA8; // 801ACF98
L_801ACF9C:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 801ACF9C
  c->r[0]=0u+0x00000005u; // 801ACFA0
  W8(c->r[3]+0x0000008Au,c->r[0]); // 801ACFA4
L_801ACFA8:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801ACFA8
  c->r[4]=c->r[31]|c->r[31]; // 801ACFAC
  c->r[3]=0u+0x00000000u; // 801ACFB0
  c->ctr=c->r[12]; // 801ACFB4
  if (true) { c->lr=0x801ACFBCu; dispatch(c,c->ctr); } // 801ACFB8
  goto L_801ACFD4; // 801ACFBC
L_801ACFC0:;
  c->lr=0x801ACFC4u; f_801ADB50(c); // 801ACFC0
  c->r[12]=R32(c->r[31]+0x00000004u); // 801ACFC4
  c->r[4]=c->r[31]|c->r[31]; // 801ACFC8
  c->ctr=c->r[12]; // 801ACFCC
  if (true) { c->lr=0x801ACFD4u; dispatch(c,c->ctr); } // 801ACFD0
L_801ACFD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ACFD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ACFD8
  c->lr=c->r[0]; // 801ACFDC
  c->r[1]=c->r[1]+0x00000010u; // 801ACFE0
  return; // 801ACFE4
}

// fn_801ACFF0
void f_801ACFF0(Ctx* __restrict c) {
  trace_call(0x801ACFF0u);
  c->r[6]=0u+0x00000001u; // 801ACFF0
  f_801AD000(c); return; // 801ACFF4
}

// fn_801AD000
void f_801AD000(Ctx* __restrict c) {
  trace_call(0x801AD000u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD000
  c->r[0]=c->lr; // 801AD004
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD008
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD00C
  c->r[31]=c->r[6]|c->r[6]; // 801AD010
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD014
  c->r[30]=c->r[5]|c->r[5]; // 801AD018
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD01C
  c->r[29]=c->r[4]|c->r[4]; // 801AD020
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AD024
  c->r[28]=c->r[3]|c->r[3]; // 801AD028
  c->lr=0x801AD030u; f_801ADB10(c); // 801AD02C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD030
  if (!crb(c,2)) { goto L_801AD040; } // 801AD034
  c->r[3]=0u+0xFFFFFF80u; // 801AD038
  goto L_801AD0DC; // 801AD03C
L_801AD040:;
  c->r[0]=R8(c->r[28]+0x0000008Au); // 801AD040
  cmpu(c,0,c->r[0],0x00000003u); // 801AD044
  if (!crb(c,2)) { goto L_801AD054; } // 801AD048
  cmps(c,0,(int32_t)c->r[31],0); // 801AD04C
  if (crb(c,2)) { goto L_801AD06C; } // 801AD050
L_801AD054:;
  cmpu(c,0,c->r[0],0x00000005u); // 801AD054
  if (!crb(c,2)) { goto L_801AD064; } // 801AD058
  cmps(c,0,(int32_t)c->r[31],0); // 801AD05C
  if (!crb(c,2)) { goto L_801AD06C; } // 801AD060
L_801AD064:;
  c->r[3]=0u+0xFFFFFFF8u; // 801AD064
  goto L_801AD0DC; // 801AD068
L_801AD06C:;
  W32(c->r[30]+0x000000B8u,c->r[31]); // 801AD06C
  c->r[3]=R8(c->r[28]+0x00000088u); // 801AD070
  cmpu(c,0,c->r[3],0x00000001u); // 801AD074
  if (!crb(c,2)) { goto L_801AD09C; } // 801AD078
  W32(c->r[30]+0x00000008u,c->r[28]); // 801AD07C
  c->r[4]=0u+0x801B0000u; // 801AD080
  c->r[5]=c->r[30]|c->r[30]; // 801AD084
  W32(c->r[30]+0x00000004u,c->r[29]); // 801AD088
  c->r[4]=c->r[4]+0xFFFFD2D0u; // 801AD08C
  c->r[3]=R32(c->r[28]+0x00000000u); // 801AD090
  c->lr=0x801AD098u; f_801B0BB0(c); // 801AD094
  goto L_801AD0D8; // 801AD098
L_801AD09C:;
  c->r[0]=c->r[3]+0x000000FEu; // 801AD09C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801AD0A0
  cmpu(c,0,c->r[0],0x00000001u); // 801AD0A4
  if (crb(c,1)) { goto L_801AD0D4; } // 801AD0A8
  c->r[0]=0u+0x0000000Au; // 801AD0AC
  W32(c->r[30]+0x00000008u,c->r[28]); // 801AD0B0
  c->r[4]=0u+0x801B0000u; // 801AD0B4
  c->r[5]=c->r[30]|c->r[30]; // 801AD0B8
  W32(c->r[30]+0x00000004u,c->r[29]); // 801AD0BC
  c->r[4]=c->r[4]+0xFFFFD100u; // 801AD0C0
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 801AD0C4
  c->r[3]=R32(c->r[28]+0x00000000u); // 801AD0C8
  c->lr=0x801AD0D0u; f_801B0BB0(c); // 801AD0CC
  goto L_801AD0D8; // 801AD0D0
L_801AD0D4:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801AD0D4
L_801AD0D8:;
  c->lr=0x801AD0DCu; f_801ADB50(c); // 801AD0D8
L_801AD0DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD0DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD0E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD0E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD0E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AD0EC
  c->lr=c->r[0]; // 801AD0F0
  c->r[1]=c->r[1]+0x00000020u; // 801AD0F4
  return; // 801AD0F8
}

// fn_801AD100
void f_801AD100(Ctx* __restrict c) {
  trace_call(0x801AD100u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD100
  c->r[0]=c->lr; // 801AD104
  cmps(c,0,(int32_t)c->r[3],0); // 801AD108
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AD10C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801AD110
  c->r[31]=c->r[4]|c->r[4]; // 801AD114
  if (!crb(c,2)) { goto L_801AD29C; } // 801AD118
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801AD11C
  c->r[6]=0u+0xFFFFFF8Bu; // 801AD120
  c->r[7]=R32(c->r[4]+0x00000008u); // 801AD124
  cmps(c,0,(int32_t)c->r[0],12); // 801AD128
  if (!crb(c,2)) { goto L_801AD138; } // 801AD12C
  c->r[0]=0u+0x00000008u; // 801AD130
  W8(c->r[7]+0x00000089u,c->r[0]); // 801AD134
L_801AD138:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 801AD138
  cmps(c,0,(int32_t)c->r[5],12); // 801AD13C
  if (!crb(c,2)) { goto L_801AD15C; } // 801AD140
  c->r[0]=R32(c->r[4]+0x000000B8u); // 801AD144
  cmps(c,0,(int32_t)c->r[0],0); // 801AD148
  if (crb(c,2)) { goto L_801AD15C; } // 801AD14C
  c->r[0]=c->r[5]+0x00000002u; // 801AD150
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 801AD154
  goto L_801AD168; // 801AD158
L_801AD15C:;
  c->r[5]=R32(c->r[4]+0x0000007Cu); // 801AD15C
  c->r[0]=c->r[5]+0x00000001u; // 801AD160
  W32(c->r[4]+0x0000007Cu,c->r[0]); // 801AD164
L_801AD168:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801AD168
  cmps(c,0,(int32_t)c->r[0],11); // 801AD16C
  if (!crb(c,2)) { goto L_801AD198; } // 801AD170
  c->r[0]=0u+0x00000006u; // 801AD174
  W8(c->r[7]+0x00000089u,c->r[0]); // 801AD178
  c->r[4]=0u+0x801B0000u; // 801AD17C
  c->r[5]=c->r[31]|c->r[31]; // 801AD180
  c->r[3]=R32(c->r[7]+0x00000004u); // 801AD184
  c->r[4]=c->r[4]+0xFFFFD100u; // 801AD188
  c->lr=0x801AD190u; f_801B0BB0(c); // 801AD18C
  c->r[6]=c->r[3]|c->r[3]; // 801AD190
  goto L_801AD278; // 801AD194
L_801AD198:;
  cmps(c,0,(int32_t)c->r[0],12); // 801AD198
  if (!crb(c,2)) { goto L_801AD1C8; } // 801AD19C
  c->r[0]=0u+0x00000007u; // 801AD1A0
  c->r[5]=0u+0x801B0000u; // 801AD1A4
  W8(c->r[7]+0x00000089u,c->r[0]); // 801AD1A8
  c->r[6]=c->r[31]|c->r[31]; // 801AD1AC
  c->r[3]=c->r[7]+0x00000048u; // 801AD1B0
  c->r[4]=c->r[7]+0x00000008u; // 801AD1B4
  c->r[5]=c->r[5]+0xFFFFD100u; // 801AD1B8
  c->lr=0x801AD1C0u; f_801B0190(c); // 801AD1BC
  c->r[6]=c->r[3]|c->r[3]; // 801AD1C0
  goto L_801AD278; // 801AD1C4
L_801AD1C8:;
  cmps(c,0,(int32_t)c->r[0],13); // 801AD1C8
  if (!crb(c,2)) { goto L_801AD23C; } // 801AD1CC
  c->r[0]=0u+0x00000000u; // 801AD1D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AD1D4
  c->r[3]=c->r[1]+0x00000008u; // 801AD1D8
  c->r[4]=c->r[7]+0x00000048u; // 801AD1DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AD1E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AD1E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD1E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AD1EC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AD1F0
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AD1F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD1F8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AD1FC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AD200
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AD204
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AD208
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AD20C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AD210
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AD214
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AD218
  c->lr=0x801AD220u; f_801ADDD0(c); // 801AD21C
  c->r[4]=0u+0x801B0000u; // 801AD220
  c->r[5]=c->r[31]|c->r[31]; // 801AD224
  c->r[3]=c->r[1]+0x00000008u; // 801AD228
  c->r[4]=c->r[4]+0xFFFFD100u; // 801AD22C
  c->lr=0x801AD234u; f_801AFFB0(c); // 801AD230
  c->r[6]=c->r[3]|c->r[3]; // 801AD234
  goto L_801AD278; // 801AD238
L_801AD23C:;
  cmps(c,0,(int32_t)c->r[0],14); // 801AD23C
  if (!crb(c,2)) { goto L_801AD278; } // 801AD240
  c->r[0]=R32(c->r[4]+0x000000B8u); // 801AD244
  cmps(c,0,(int32_t)c->r[0],0); // 801AD248
  if (!crb(c,2)) { goto L_801AD258; } // 801AD24C
  c->r[0]=0u+0x00000009u; // 801AD250
  W8(c->r[7]+0x00000089u,c->r[0]); // 801AD254
L_801AD258:;
  c->r[0]=0u+0x00000004u; // 801AD258
  W8(c->r[7]+0x0000008Au,c->r[0]); // 801AD25C
  c->lr=0x801AD264u; f_801ADB50(c); // 801AD260
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AD264
  c->r[4]=c->r[31]|c->r[31]; // 801AD268
  c->ctr=c->r[12]; // 801AD26C
  if (true) { c->lr=0x801AD274u; dispatch(c,c->ctr); } // 801AD270
  goto L_801AD2B0; // 801AD274
L_801AD278:;
  cmps(c,0,(int32_t)c->r[6],0); // 801AD278
  if (crb(c,2)) { goto L_801AD2B0; } // 801AD27C
  c->r[3]=c->r[6]|c->r[6]; // 801AD280
  c->lr=0x801AD288u; f_801ADB50(c); // 801AD284
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AD288
  c->r[4]=c->r[31]|c->r[31]; // 801AD28C
  c->ctr=c->r[12]; // 801AD290
  if (true) { c->lr=0x801AD298u; dispatch(c,c->ctr); } // 801AD294
  goto L_801AD2B0; // 801AD298
L_801AD29C:;
  c->lr=0x801AD2A0u; f_801ADB50(c); // 801AD29C
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AD2A0
  c->r[4]=c->r[31]|c->r[31]; // 801AD2A4
  c->ctr=c->r[12]; // 801AD2A8
  if (true) { c->lr=0x801AD2B0u; dispatch(c,c->ctr); } // 801AD2AC
L_801AD2B0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AD2B0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801AD2B4
  c->lr=c->r[0]; // 801AD2B8
  c->r[1]=c->r[1]+0x00000050u; // 801AD2BC
  return; // 801AD2C0
}

// fn_801AD2D0
void f_801AD2D0(Ctx* __restrict c) {
  trace_call(0x801AD2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD2D0
  c->r[0]=c->lr; // 801AD2D4
  cmps(c,0,(int32_t)c->r[3],0); // 801AD2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD2DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD2E0
  c->r[31]=c->r[4]|c->r[4]; // 801AD2E4
  if (!crb(c,2)) { goto L_801AD304; } // 801AD2E8
  c->r[5]=R32(c->r[4]+0x00000008u); // 801AD2EC
  c->r[6]=0u+0x00000007u; // 801AD2F0
  c->r[0]=0u+0x00000004u; // 801AD2F4
  W8(c->r[5]+0x00000089u,c->r[6]); // 801AD2F8
  c->r[4]=R32(c->r[4]+0x00000008u); // 801AD2FC
  W8(c->r[4]+0x0000008Au,c->r[0]); // 801AD300
L_801AD304:;
  c->lr=0x801AD308u; f_801ADB50(c); // 801AD304
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AD308
  c->r[4]=c->r[31]|c->r[31]; // 801AD30C
  c->ctr=c->r[12]; // 801AD310
  if (true) { c->lr=0x801AD318u; dispatch(c,c->ctr); } // 801AD314
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD31C
  c->lr=c->r[0]; // 801AD320
  c->r[1]=c->r[1]+0x00000010u; // 801AD324
  return; // 801AD328
}

// fn_801AD330
void f_801AD330(Ctx* __restrict c) {
  trace_call(0x801AD330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD330
  c->r[0]=c->lr; // 801AD334
  cmps(c,0,(int32_t)c->r[3],0); // 801AD338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD340
  c->r[31]=c->r[4]|c->r[4]; // 801AD344
  if (!crb(c,2)) { goto L_801AD364; } // 801AD348
  c->r[5]=R32(c->r[4]+0x00000008u); // 801AD34C
  c->r[6]=0u+0x00000007u; // 801AD350
  c->r[0]=0u+0x00000002u; // 801AD354
  W8(c->r[5]+0x00000089u,c->r[6]); // 801AD358
  c->r[4]=R32(c->r[4]+0x00000008u); // 801AD35C
  W8(c->r[4]+0x0000008Au,c->r[0]); // 801AD360
L_801AD364:;
  c->lr=0x801AD368u; f_801ADB50(c); // 801AD364
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AD368
  c->r[4]=c->r[31]|c->r[31]; // 801AD36C
  c->ctr=c->r[12]; // 801AD370
  if (true) { c->lr=0x801AD378u; dispatch(c,c->ctr); } // 801AD374
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD37C
  c->lr=c->r[0]; // 801AD380
  c->r[1]=c->r[1]+0x00000010u; // 801AD384
  return; // 801AD388
}

// fn_801AD390
void f_801AD390(Ctx* __restrict c) {
  trace_call(0x801AD390u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD390
  c->r[0]=c->lr; // 801AD394
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD398
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD39C
  c->r[31]=c->r[5]|c->r[5]; // 801AD3A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD3A4
  c->r[30]=c->r[4]|c->r[4]; // 801AD3A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD3AC
  c->r[29]=c->r[3]|c->r[3]; // 801AD3B0
  c->lr=0x801AD3B8u; f_801ADB10(c); // 801AD3B4
  cmps(c,0,(int32_t)c->r[3],0); // 801AD3B8
  if (!crb(c,2)) { goto L_801AD3C8; } // 801AD3BC
  c->r[3]=0u+0xFFFFFF80u; // 801AD3C0
  goto L_801AD3F8; // 801AD3C4
L_801AD3C8:;
  c->r[0]=0u+0x00000040u; // 801AD3C8
  c->r[6]=0u+0x801B0000u; // 801AD3CC
  W32(c->r[31]+0x00000008u,c->r[29]); // 801AD3D0
  c->r[7]=c->r[31]|c->r[31]; // 801AD3D4
  c->r[6]=c->r[6]+0xFFFFD420u; // 801AD3D8
  c->r[3]=c->r[13]+0xFFFFAC90u; // 801AD3DC
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AD3E0
  c->r[4]=0u+0x00000000u; // 801AD3E4
  c->r[5]=c->r[13]+0xFFFFC394u; // 801AD3E8
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 801AD3EC
  c->lr=0x801AD3F4u; f_801AFAE0(c); // 801AD3F0
  c->lr=0x801AD3F8u; f_801ADB50(c); // 801AD3F4
L_801AD3F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD3F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD3FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD400
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD404
  c->lr=c->r[0]; // 801AD408
  c->r[1]=c->r[1]+0x00000020u; // 801AD40C
  return; // 801AD410
}

// fn_801AD420
void f_801AD420(Ctx* __restrict c) {
  trace_call(0x801AD420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD420
  c->r[0]=c->lr; // 801AD424
  cmps(c,0,(int32_t)c->r[3],0); // 801AD428
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD42C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD430
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD434
  c->r[30]=c->r[4]|c->r[4]; // 801AD438
  c->r[31]=R32(c->r[4]+0x00000008u); // 801AD43C
  if (!crb(c,0)) { goto L_801AD458; } // 801AD440
  c->lr=0x801AD448u; f_801ADB50(c); // 801AD444
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD448
  c->r[4]=c->r[30]|c->r[30]; // 801AD44C
  c->ctr=c->r[12]; // 801AD450
  if (true) { c->lr=0x801AD458u; dispatch(c,c->ctr); } // 801AD454
L_801AD458:;
  c->r[0]=R8(c->r[30]+0x0000001Eu); // 801AD458
  cmpu(c,0,c->r[0],0x00000040u); // 801AD45C
  if (crb(c,2)) { goto L_801AD468; } // 801AD460
  W8(c->r[31]+0x00000089u,c->r[0]); // 801AD464
L_801AD468:;
  c->r[3]=R8(c->r[31]+0x00000088u); // 801AD468
  cmpu(c,0,c->r[3],0x00000001u); // 801AD46C
  if (!crb(c,2)) { goto L_801AD4F4; } // 801AD470
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD474
  cmps(c,0,(int32_t)c->r[0],0); // 801AD478
  if (!crb(c,2)) { goto L_801AD498; } // 801AD47C
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD480
  c->r[4]=c->r[30]|c->r[30]; // 801AD484
  c->r[3]=0u+0x00000000u; // 801AD488
  c->ctr=c->r[12]; // 801AD48C
  if (true) { c->lr=0x801AD494u; dispatch(c,c->ctr); } // 801AD490
  goto L_801AD698; // 801AD494
L_801AD498:;
  cmpu(c,0,c->r[0],0x00000002u); // 801AD498
  if (!crb(c,2)) { goto L_801AD4DC; } // 801AD49C
  c->r[0]=0u+0x00000000u; // 801AD4A0
  W8(c->r[30]+0x0000001Eu,c->r[0]); // 801AD4A4
  c->r[4]=0u+0x801B0000u; // 801AD4A8
  c->r[5]=c->r[30]|c->r[30]; // 801AD4AC
  c->r[3]=R32(c->r[31]+0x00000000u); // 801AD4B0
  c->r[4]=c->r[4]+0xFFFFD420u; // 801AD4B4
  c->lr=0x801AD4BCu; f_801B0BB0(c); // 801AD4B8
  cmps(c,0,(int32_t)c->r[3],0); // 801AD4BC
  if (crb(c,2)) { goto L_801AD698; } // 801AD4C0
  c->lr=0x801AD4C8u; f_801ADB50(c); // 801AD4C4
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD4C8
  c->r[4]=c->r[30]|c->r[30]; // 801AD4CC
  c->ctr=c->r[12]; // 801AD4D0
  if (true) { c->lr=0x801AD4D8u; dispatch(c,c->ctr); } // 801AD4D4
  goto L_801AD698; // 801AD4D8
L_801AD4DC:;
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD4DC
  c->r[4]=c->r[30]|c->r[30]; // 801AD4E0
  c->r[3]=0u+0xFFFFFFF8u; // 801AD4E4
  c->ctr=c->r[12]; // 801AD4E8
  if (true) { c->lr=0x801AD4F0u; dispatch(c,c->ctr); } // 801AD4EC
  goto L_801AD698; // 801AD4F0
L_801AD4F4:;
  c->r[0]=c->r[3]+0x000000FEu; // 801AD4F4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801AD4F8
  cmpu(c,0,c->r[0],0x00000001u); // 801AD4FC
  if (crb(c,1)) { goto L_801AD698; } // 801AD500
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD504
  cmpu(c,0,c->r[0],0x00000008u); // 801AD508
  if (!crb(c,2)) { goto L_801AD524; } // 801AD50C
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD510
  c->r[4]=c->r[30]|c->r[30]; // 801AD514
  c->r[3]=0u+0xFFFFFFF8u; // 801AD518
  c->ctr=c->r[12]; // 801AD51C
  if (true) { c->lr=0x801AD524u; dispatch(c,c->ctr); } // 801AD520
L_801AD524:;
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD524
  cmpu(c,0,c->r[0],0x00000007u); // 801AD528
  if (!crb(c,2)) { goto L_801AD568; } // 801AD52C
  c->r[0]=0u+0x00000000u; // 801AD530
  c->r[4]=0u+0x801B0000u; // 801AD534
  W8(c->r[30]+0x0000001Eu,c->r[0]); // 801AD538
  c->r[5]=c->r[30]|c->r[30]; // 801AD53C
  c->r[3]=c->r[31]+0x00000048u; // 801AD540
  c->r[4]=c->r[4]+0xFFFFD420u; // 801AD544
  c->lr=0x801AD54Cu; f_801AFFB0(c); // 801AD548
  cmps(c,0,(int32_t)c->r[3],0); // 801AD54C
  if (crb(c,2)) { goto L_801AD568; } // 801AD550
  c->lr=0x801AD558u; f_801ADB50(c); // 801AD554
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD558
  c->r[4]=c->r[30]|c->r[30]; // 801AD55C
  c->ctr=c->r[12]; // 801AD560
  if (true) { c->lr=0x801AD568u; dispatch(c,c->ctr); } // 801AD564
L_801AD568:;
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD568
  cmpu(c,0,c->r[0],0x00000006u); // 801AD56C
  if (!crb(c,2)) { goto L_801AD5AC; } // 801AD570
  c->r[0]=0u+0x00000002u; // 801AD574
  c->r[4]=0u+0x801B0000u; // 801AD578
  W8(c->r[30]+0x0000001Eu,c->r[0]); // 801AD57C
  c->r[5]=c->r[30]|c->r[30]; // 801AD580
  c->r[3]=c->r[31]+0x00000048u; // 801AD584
  c->r[4]=c->r[4]+0xFFFFD420u; // 801AD588
  c->lr=0x801AD590u; f_801AFFB0(c); // 801AD58C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD590
  if (crb(c,2)) { goto L_801AD5AC; } // 801AD594
  c->lr=0x801AD59Cu; f_801ADB50(c); // 801AD598
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD59C
  c->r[4]=c->r[30]|c->r[30]; // 801AD5A0
  c->ctr=c->r[12]; // 801AD5A4
  if (true) { c->lr=0x801AD5ACu; dispatch(c,c->ctr); } // 801AD5A8
L_801AD5AC:;
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD5AC
  cmpu(c,0,c->r[0],0x00000005u); // 801AD5B0
  if (!crb(c,2)) { goto L_801AD5F0; } // 801AD5B4
  c->r[0]=0u+0x00000004u; // 801AD5B8
  W8(c->r[30]+0x0000001Eu,c->r[0]); // 801AD5BC
  c->r[4]=0u+0x801B0000u; // 801AD5C0
  c->r[5]=c->r[30]|c->r[30]; // 801AD5C4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801AD5C8
  c->r[4]=c->r[4]+0xFFFFD420u; // 801AD5CC
  c->lr=0x801AD5D4u; f_801B0BB0(c); // 801AD5D0
  cmps(c,0,(int32_t)c->r[3],0); // 801AD5D4
  if (crb(c,2)) { goto L_801AD5F0; } // 801AD5D8
  c->lr=0x801AD5E0u; f_801ADB50(c); // 801AD5DC
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD5E0
  c->r[4]=c->r[30]|c->r[30]; // 801AD5E4
  c->ctr=c->r[12]; // 801AD5E8
  if (true) { c->lr=0x801AD5F0u; dispatch(c,c->ctr); } // 801AD5EC
L_801AD5F0:;
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD5F0
  cmpu(c,0,c->r[0],0x00000004u); // 801AD5F4
  if (!crb(c,2)) { goto L_801AD634; } // 801AD5F8
  c->r[0]=0u+0x00000002u; // 801AD5FC
  c->r[4]=0u+0x801B0000u; // 801AD600
  W8(c->r[30]+0x0000001Eu,c->r[0]); // 801AD604
  c->r[5]=c->r[30]|c->r[30]; // 801AD608
  c->r[3]=c->r[31]+0x00000048u; // 801AD60C
  c->r[4]=c->r[4]+0xFFFFD420u; // 801AD610
  c->lr=0x801AD618u; f_801AFFB0(c); // 801AD614
  cmps(c,0,(int32_t)c->r[3],0); // 801AD618
  if (crb(c,2)) { goto L_801AD634; } // 801AD61C
  c->lr=0x801AD624u; f_801ADB50(c); // 801AD620
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD624
  c->r[4]=c->r[30]|c->r[30]; // 801AD628
  c->ctr=c->r[12]; // 801AD62C
  if (true) { c->lr=0x801AD634u; dispatch(c,c->ctr); } // 801AD630
L_801AD634:;
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD634
  cmpu(c,0,c->r[0],0x00000002u); // 801AD638
  if (!crb(c,2)) { goto L_801AD678; } // 801AD63C
  c->r[0]=0u+0x00000000u; // 801AD640
  W8(c->r[30]+0x0000001Eu,c->r[0]); // 801AD644
  c->r[4]=0u+0x801B0000u; // 801AD648
  c->r[5]=c->r[30]|c->r[30]; // 801AD64C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801AD650
  c->r[4]=c->r[4]+0xFFFFD420u; // 801AD654
  c->lr=0x801AD65Cu; f_801B0BB0(c); // 801AD658
  cmps(c,0,(int32_t)c->r[3],0); // 801AD65C
  if (crb(c,2)) { goto L_801AD678; } // 801AD660
  c->lr=0x801AD668u; f_801ADB50(c); // 801AD664
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD668
  c->r[4]=c->r[30]|c->r[30]; // 801AD66C
  c->ctr=c->r[12]; // 801AD670
  if (true) { c->lr=0x801AD678u; dispatch(c,c->ctr); } // 801AD674
L_801AD678:;
  c->r[0]=R8(c->r[31]+0x00000089u); // 801AD678
  cmpu(c,0,c->r[0],0x00000001u); // 801AD67C
  if (crb(c,1)) { goto L_801AD698; } // 801AD680
  c->r[12]=R32(c->r[30]+0x00000004u); // 801AD684
  c->r[4]=c->r[30]|c->r[30]; // 801AD688
  c->r[3]=0u+0x00000000u; // 801AD68C
  c->ctr=c->r[12]; // 801AD690
  if (true) { c->lr=0x801AD698u; dispatch(c,c->ctr); } // 801AD694
L_801AD698:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD69C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD6A0
  c->lr=c->r[0]; // 801AD6A4
  c->r[1]=c->r[1]+0x00000010u; // 801AD6A8
  return; // 801AD6AC
}

// nandRemoveTailToken
void f_801AD6B0(Ctx* __restrict c) {
  trace_call(0x801AD6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD6B0
  c->r[0]=c->lr; // 801AD6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD6B8
  c->r[0]=R8(c->r[4]+0x00000000u); // 801AD6BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD6C0
  cmps(c,0,(int32_t)c->r[0],47); // 801AD6C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD6C8
  c->r[30]=c->r[4]|c->r[4]; // 801AD6CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD6D0
  c->r[29]=c->r[3]|c->r[3]; // 801AD6D4
  if (!crb(c,2)) { goto L_801AD6FC; } // 801AD6D8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801AD6DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AD6E0
  if (!crb(c,2)) { goto L_801AD6FC; } // 801AD6E4
  c->r[4]=0u+0x0000002Fu; // 801AD6E8
  c->r[0]=0u+0x00000000u; // 801AD6EC
  W8(c->r[3]+0x00000000u,c->r[4]); // 801AD6F0
  W8(c->r[3]+0x00000001u,c->r[0]); // 801AD6F4
  goto L_801AD768; // 801AD6F8
L_801AD6FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801AD6FC
  c->lr=0x801AD704u; f_802E5F80(c); // 801AD700
  c->r[31]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[31]); // 801AD704
  c->r[0]=c->r[31]+0x00000001u; // 801AD708
  c->r[3]=c->r[30]+c->r[31]; // 801AD70C
  c->ctr=c->r[0]; // 801AD710
  if (crb(c,0)) { goto L_801AD768; } // 801AD714
L_801AD718:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AD718
  cmps(c,0,(int32_t)c->r[0],47); // 801AD71C
  if (!crb(c,2)) { goto L_801AD75C; } // 801AD720
  cmps(c,0,(int32_t)c->r[31],0); // 801AD724
  if (crb(c,2)) { goto L_801AD748; } // 801AD728
  c->r[3]=c->r[29]|c->r[29]; // 801AD72C
  c->r[4]=c->r[30]|c->r[30]; // 801AD730
  c->r[5]=c->r[31]|c->r[31]; // 801AD734
  c->lr=0x801AD73Cu; f_802EE8C8(c); // 801AD738
  c->r[0]=0u+0x00000000u; // 801AD73C
  W8(c->r[29]+c->r[31],c->r[0]); // 801AD740
  goto L_801AD768; // 801AD744
L_801AD748:;
  c->r[3]=0u+0x0000002Fu; // 801AD748
  c->r[0]=0u+0x00000000u; // 801AD74C
  W8(c->r[29]+0x00000000u,c->r[3]); // 801AD750
  W8(c->r[29]+0x00000001u,c->r[0]); // 801AD754
  goto L_801AD768; // 801AD758
L_801AD75C:;
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801AD75C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801AD760
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AD718; } // 801AD764
L_801AD768:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD768
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD76C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD770
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD774
  c->lr=c->r[0]; // 801AD778
  c->r[1]=c->r[1]+0x00000020u; // 801AD77C
  return; // 801AD780
}

// nandGetHeadToken
void f_801AD790(Ctx* __restrict c) {
  trace_call(0x801AD790u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD790
  c->r[0]=c->lr; // 801AD794
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD798
  c->r[11]=c->r[1]+0x00000020u; // 801AD79C
  c->lr=0x801AD7A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD7A0
  c->r[27]=c->r[3]|c->r[3]; // 801AD7A4
  c->r[28]=c->r[4]|c->r[4]; // 801AD7A8
  c->r[29]=c->r[5]|c->r[5]; // 801AD7AC
  c->r[31]=c->r[5]|c->r[5]; // 801AD7B0
  c->r[30]=0u+0x00000000u; // 801AD7B4
  goto L_801AD83C; // 801AD7B8
L_801AD7BC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801AD7BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801AD7C0
  cmps(c,0,(int32_t)c->r[0],47); // 801AD7C4
  if (!crb(c,2)) { goto L_801AD80C; } // 801AD7C8
  c->r[3]=c->r[27]|c->r[27]; // 801AD7CC
  c->r[4]=c->r[29]|c->r[29]; // 801AD7D0
  c->r[5]=c->r[30]|c->r[30]; // 801AD7D4
  c->lr=0x801AD7DCu; f_802EE8C8(c); // 801AD7D8
  c->r[4]=c->r[30]+c->r[29]; // 801AD7DC
  c->r[3]=0u+0x00000000u; // 801AD7E0
  c->r[0]=R8(c->r[4]+0x00000001u); // 801AD7E4
  W8(c->r[27]+c->r[30],c->r[3]); // 801AD7E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AD7EC
  if (!crb(c,2)) { goto L_801AD7FC; } // 801AD7F0
  W8(c->r[28]+0x00000000u,c->r[3]); // 801AD7F4
  goto L_801AD84C; // 801AD7F8
L_801AD7FC:;
  c->r[3]=c->r[28]|c->r[28]; // 801AD7FC
  c->r[4]=c->r[4]+0x00000001u; // 801AD800
  c->lr=0x801AD808u; f_802EE808(c); // 801AD804
  goto L_801AD84C; // 801AD808
L_801AD80C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AD80C
  if (!crb(c,2)) { goto L_801AD834; } // 801AD810
  c->r[3]=c->r[27]|c->r[27]; // 801AD814
  c->r[4]=c->r[29]|c->r[29]; // 801AD818
  c->r[5]=c->r[30]|c->r[30]; // 801AD81C
  c->lr=0x801AD824u; f_802EE8C8(c); // 801AD820
  c->r[0]=0u+0x00000000u; // 801AD824
  W8(c->r[27]+c->r[30],c->r[0]); // 801AD828
  W8(c->r[28]+0x00000000u,c->r[0]); // 801AD82C
  goto L_801AD84C; // 801AD830
L_801AD834:;
  c->r[30]=c->r[30]+0x00000001u; // 801AD834
  c->r[31]=c->r[31]+0x00000001u; // 801AD838
L_801AD83C:;
  c->r[3]=c->r[29]|c->r[29]; // 801AD83C
  c->lr=0x801AD844u; f_802E5F80(c); // 801AD840
  cmpu(c,0,c->r[30],c->r[3]); // 801AD844
  if (!crb(c,1)) { IRQCHK(c); goto L_801AD7BC; } // 801AD848
L_801AD84C:;
  c->r[11]=c->r[1]+0x00000020u; // 801AD84C
  c->lr=0x801AD854u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD850
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD854
  c->lr=c->r[0]; // 801AD858
  c->r[1]=c->r[1]+0x00000020u; // 801AD85C
  return; // 801AD860
}

// nandGetRelativeName
void f_801AD870(Ctx* __restrict c) {
  trace_call(0x801AD870u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD870
  c->r[0]=c->lr; // 801AD874
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD87C
  c->r[31]=c->r[4]|c->r[4]; // 801AD880
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD884
  c->r[30]=c->r[3]|c->r[3]; // 801AD888
  c->r[3]=c->r[13]+0xFFFFAC9Cu; // 801AD88C
  c->lr=0x801AD894u; f_802EE984(c); // 801AD890
  cmps(c,0,(int32_t)c->r[3],0); // 801AD894
  if (!crb(c,2)) { goto L_801AD8AC; } // 801AD898
  c->r[3]=c->r[30]|c->r[30]; // 801AD89C
  c->r[4]=c->r[13]+0xFFFFACA0u; // 801AD8A0
  c->lr=0x801AD8A8u; f_802EE808(c); // 801AD8A4
  goto L_801AD8F0; // 801AD8A8
L_801AD8AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801AD8AC
  c->lr=0x801AD8B4u; f_802E5F80(c); // 801AD8B0
  c->r[4]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801AD8B4
  c->r[0]=c->r[4]+0x00000001u; // 801AD8B8
  c->r[3]=c->r[31]+c->r[4]; // 801AD8BC
  c->ctr=c->r[0]; // 801AD8C0
  if (crb(c,0)) { goto L_801AD8E0; } // 801AD8C4
L_801AD8C8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AD8C8
  cmps(c,0,(int32_t)c->r[0],47); // 801AD8CC
  if (crb(c,2)) { goto L_801AD8E0; } // 801AD8D0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801AD8D4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801AD8D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AD8C8; } // 801AD8DC
L_801AD8E0:;
  c->r[4]=c->r[31]+c->r[4]; // 801AD8E0
  c->r[3]=c->r[30]|c->r[30]; // 801AD8E4
  c->r[4]=c->r[4]+0x00000001u; // 801AD8E8
  c->lr=0x801AD8F0u; f_802EE808(c); // 801AD8EC
L_801AD8F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD8F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD8F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD8F8
  c->lr=c->r[0]; // 801AD8FC
  c->r[1]=c->r[1]+0x00000010u; // 801AD900
  return; // 801AD904
}

// nandConvertPath
void f_801AD910(Ctx* __restrict c) {
  trace_call(0x801AD910u);
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD910
  c->r[0]=c->lr; // 801AD914
  W32(c->r[1]+0x00000224u,c->r[0]); // 801AD918
  W32(c->r[1]+0x0000021Cu,c->r[31]); // 801AD91C
  c->r[31]=c->r[5]|c->r[5]; // 801AD920
  W32(c->r[1]+0x00000218u,c->r[30]); // 801AD924
  c->r[30]=c->r[4]|c->r[4]; // 801AD928
  W32(c->r[1]+0x00000214u,c->r[29]); // 801AD92C
  c->r[29]=c->r[3]|c->r[3]; // 801AD930
  c->r[3]=c->r[31]|c->r[31]; // 801AD934
  c->lr=0x801AD93Cu; f_802E5F80(c); // 801AD938
  cmps(c,0,(int32_t)c->r[3],0); // 801AD93C
  if (!crb(c,2)) { goto L_801AD954; } // 801AD940
  c->r[3]=c->r[29]|c->r[29]; // 801AD944
  c->r[4]=c->r[30]|c->r[30]; // 801AD948
  c->lr=0x801AD950u; f_802EE808(c); // 801AD94C
  goto L_801ADA30; // 801AD950
L_801AD954:;
  c->r[5]=c->r[31]|c->r[31]; // 801AD954
  c->r[3]=c->r[1]+0x00000188u; // 801AD958
  c->r[4]=c->r[1]+0x00000108u; // 801AD95C
  c->lr=0x801AD964u; f_801AD790(c); // 801AD960
  c->r[3]=c->r[1]+0x00000188u; // 801AD964
  c->r[4]=c->r[13]+0xFFFFACA4u; // 801AD968
  c->lr=0x801AD970u; f_802EE984(c); // 801AD96C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD970
  if (!crb(c,2)) { goto L_801AD98C; } // 801AD974
  c->r[3]=c->r[29]|c->r[29]; // 801AD978
  c->r[4]=c->r[30]|c->r[30]; // 801AD97C
  c->r[5]=c->r[1]+0x00000108u; // 801AD980
  c->lr=0x801AD988u; f_801AD910(c); // 801AD984
  goto L_801ADA30; // 801AD988
L_801AD98C:;
  c->r[3]=c->r[1]+0x00000188u; // 801AD98C
  c->r[4]=c->r[13]+0xFFFFACA8u; // 801AD990
  c->lr=0x801AD998u; f_802EE984(c); // 801AD994
  cmps(c,0,(int32_t)c->r[3],0); // 801AD998
  if (!crb(c,2)) { goto L_801AD9C0; } // 801AD99C
  c->r[4]=c->r[30]|c->r[30]; // 801AD9A0
  c->r[3]=c->r[1]+0x00000088u; // 801AD9A4
  c->lr=0x801AD9ACu; f_801AD6B0(c); // 801AD9A8
  c->r[3]=c->r[29]|c->r[29]; // 801AD9AC
  c->r[4]=c->r[1]+0x00000088u; // 801AD9B0
  c->r[5]=c->r[1]+0x00000108u; // 801AD9B4
  c->lr=0x801AD9BCu; f_801AD910(c); // 801AD9B8
  goto L_801ADA30; // 801AD9BC
L_801AD9C0:;
  c->r[0]=R8(c->r[1]+0x00000188u); // 801AD9C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AD9C4
  if (crb(c,2)) { goto L_801ADA24; } // 801AD9C8
  c->r[3]=c->r[30]|c->r[30]; // 801AD9CC
  c->r[4]=c->r[13]+0xFFFFAC9Cu; // 801AD9D0
  c->lr=0x801AD9D8u; f_802EE984(c); // 801AD9D4
  cmps(c,0,(int32_t)c->r[3],0); // 801AD9D8
  if (!crb(c,2)) { goto L_801AD9F8; } // 801AD9DC
  c->r[3]=c->r[1]+0x00000008u; // 801AD9E0
  c->r[5]=c->r[1]+0x00000188u; // 801AD9E4
  c->r[4]=c->r[13]+0xFFFFACACu; // 801AD9E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AD9EC
  c->lr=0x801AD9F4u; f_802EE604(c); // 801AD9F0
  goto L_801ADA10; // 801AD9F4
L_801AD9F8:;
  c->r[5]=c->r[30]|c->r[30]; // 801AD9F8
  c->r[3]=c->r[1]+0x00000008u; // 801AD9FC
  c->r[6]=c->r[1]+0x00000188u; // 801ADA00
  c->r[4]=c->r[13]+0xFFFFACB0u; // 801ADA04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ADA08
  c->lr=0x801ADA10u; f_802EE604(c); // 801ADA0C
L_801ADA10:;
  c->r[3]=c->r[29]|c->r[29]; // 801ADA10
  c->r[4]=c->r[1]+0x00000008u; // 801ADA14
  c->r[5]=c->r[1]+0x00000108u; // 801ADA18
  c->lr=0x801ADA20u; f_801AD910(c); // 801ADA1C
  goto L_801ADA30; // 801ADA20
L_801ADA24:;
  c->r[3]=c->r[29]|c->r[29]; // 801ADA24
  c->r[4]=c->r[30]|c->r[30]; // 801ADA28
  c->lr=0x801ADA30u; f_802EE808(c); // 801ADA2C
L_801ADA30:;
  c->r[0]=R32(c->r[1]+0x00000224u); // 801ADA30
  c->r[31]=R32(c->r[1]+0x0000021Cu); // 801ADA34
  c->r[30]=R32(c->r[1]+0x00000218u); // 801ADA38
  c->r[29]=R32(c->r[1]+0x00000214u); // 801ADA3C
  c->lr=c->r[0]; // 801ADA40
  c->r[1]=c->r[1]+0x00000220u; // 801ADA44
  return; // 801ADA48
}

// fn_801ADA50
void f_801ADA50(Ctx* __restrict c) {
  trace_call(0x801ADA50u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801ADA50
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801ADA54
  c->r[3]=addc(c,~c->r[4],0x0000002Fu,1); // 801ADA58
  c->r[0]=c->r[4]+0xFFFFFFD1u; // 801ADA5C
  c->r[0]=c->r[3]|c->r[0]; // 801ADA60
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801ADA64
  return; // 801ADA68
}

// nandIsPrivatePath
void f_801ADA70(Ctx* __restrict c) {
  trace_call(0x801ADA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADA70
  c->r[0]=c->lr; // 801ADA74
  c->r[4]=0u+0x803A0000u; // 801ADA78
  c->r[5]=0u+0x00000008u; // 801ADA7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADA80
  c->r[4]=c->r[4]+0xFFFF9EB0u; // 801ADA84
  c->lr=0x801ADA8Cu; f_802EEAA0(c); // 801ADA88
  c->r[0]=cntlz(c->r[3]); // 801ADA8C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801ADA90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADA94
  c->lr=c->r[0]; // 801ADA98
  c->r[1]=c->r[1]+0x00000010u; // 801ADA9C
  return; // 801ADAA0
}

// nandIsUnderPrivatePath
void f_801ADAB0(Ctx* __restrict c) {
  trace_call(0x801ADAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADAB0
  c->r[0]=c->lr; // 801ADAB4
  c->r[4]=0u+0x803A0000u; // 801ADAB8
  c->r[5]=0u+0x00000009u; // 801ADABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADAC0
  c->r[4]=c->r[4]+0xFFFF9EBCu; // 801ADAC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADAC8
  c->r[31]=c->r[3]|c->r[3]; // 801ADACC
  c->lr=0x801ADAD4u; f_802EEAA0(c); // 801ADAD0
  cmps(c,0,(int32_t)c->r[3],0); // 801ADAD4
  if (!crb(c,2)) { goto L_801ADAF0; } // 801ADAD8
  c->r[0]=R8(c->r[31]+0x00000009u); // 801ADADC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801ADAE0
  if (crb(c,2)) { goto L_801ADAF0; } // 801ADAE4
  c->r[3]=0u+0x00000001u; // 801ADAE8
  goto L_801ADAF4; // 801ADAEC
L_801ADAF0:;
  c->r[3]=0u+0x00000000u; // 801ADAF0
L_801ADAF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADAF8
  c->lr=c->r[0]; // 801ADAFC
  c->r[1]=c->r[1]+0x00000010u; // 801ADB00
  return; // 801ADB04
}

// nandIsInitialized
void f_801ADB10(Ctx* __restrict c) {
  trace_call(0x801ADB10u);
  c->r[3]=R32(c->r[13]+0xFFFFC398u); // 801ADB10
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801ADB14
  c->r[0]=cntlz(c->r[0]); // 801ADB18
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801ADB1C
  return; // 801ADB20
}

// nandLoggingCallback
void f_801ADB30(Ctx* __restrict c) {
  trace_call(0x801ADB30u);
  cmps(c,0,(int32_t)c->r[4],-117); // 801ADB30
  if (crb(c,2)) { goto L_801ADB40; } // 801ADB34
  cmps(c,0,(int32_t)c->r[4],-9); // 801ADB38
  if (!crb(c,2)) return; // 801ADB3C
L_801ADB40:;
  c->r[3]=c->r[4]|c->r[4]; // 801ADB40
  f_801AF3D0(c); return; // 801ADB44
  return; // 801ADB48
}

// nandConvertErrorCode
void f_801ADB50(Ctx* __restrict c) {
  trace_call(0x801ADB50u);
  c->r[11]=rotl(c->r[1],0)&0x0000003Fu; // 801ADB50
  c->r[12]=c->r[1]|c->r[1]; // 801ADB54
  c->r[11]=addc(c,~c->r[11],0xFFFFFD00u,1); // 801ADB58
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADB5C
  c->r[0]=c->lr; // 801ADB60
  c->r[4]=0u+0x80310000u; // 801ADB64
  W32(c->r[12]+0x00000004u,c->r[0]); // 801ADB68
  c->r[4]=c->r[4]+0xFFFF9CD0u; // 801ADB6C
  c->r[0]=0u+0x00000029u; // 801ADB70
  c->r[6]=c->r[1]+0x0000013Cu; // 801ADB74
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801ADB78
  c->r[31]=0u+0x803A0000u; // 801ADB7C
  c->r[31]=c->r[31]+0xFFFF9E00u; // 801ADB80
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 801ADB84
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801ADB88
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 801ADB8C
  c->r[29]=c->r[3]|c->r[3]; // 801ADB90
  c->ctr=c->r[0]; // 801ADB94
L_801ADB98:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801ADB98
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 801ADB9C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801ADBA0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 801ADBA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801ADB98; } // 801ADBA8
  cmps(c,0,(int32_t)c->r[3],0); // 801ADBAC
  c->r[30]=0u+0x00000000u; // 801ADBB0
  c->r[4]=0u+0x00000000u; // 801ADBB4
  if (crb(c,0)) { goto L_801ADBC4; } // 801ADBB8
  c->r[3]=c->r[29]|c->r[29]; // 801ADBBC
  goto L_801ADCE0; // 801ADBC0
L_801ADBC4:;
  c->r[0]=0u+0x00000029u; // 801ADBC4
  c->r[5]=c->r[1]+0x00000140u; // 801ADBC8
  c->ctr=c->r[0]; // 801ADBCC
L_801ADBD0:;
  c->r[0]=R32(c->r[5]+c->r[4]); // 801ADBD0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801ADBD4
  if (!crb(c,2)) { goto L_801ADC88; } // 801ADBD8
  cmps(c,0,(int32_t)c->r[3],-114); // 801ADBDC
  if (crb(c,2)) { goto L_801ADC04; } // 801ADBE0
  cmps(c,0,(int32_t)c->r[3],-116); // 801ADBE4
  if (crb(c,2)) { goto L_801ADC04; } // 801ADBE8
  cmps(c,0,(int32_t)c->r[3],-117); // 801ADBEC
  if (crb(c,2)) { goto L_801ADC04; } // 801ADBF0
  cmps(c,0,(int32_t)c->r[3],-9); // 801ADBF4
  if (crb(c,2)) { goto L_801ADC04; } // 801ADBF8
  cmps(c,0,(int32_t)c->r[3],-12); // 801ADBFC
  if (!crb(c,2)) { goto L_801ADC30; } // 801ADC00
L_801ADC04:;
  c->r[5]=c->r[29]|c->r[29]; // 801ADC04
  c->r[3]=c->r[1]+0x000000C0u; // 801ADC08
  c->r[4]=c->r[31]+0x000000C8u; // 801ADC0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ADC10
  c->lr=0x801ADC18u; f_802EE604(c); // 801ADC14
  c->r[3]=0u+0x801B0000u; // 801ADC18
  c->r[4]=c->r[29]|c->r[29]; // 801ADC1C
  c->r[3]=c->r[3]+0xFFFFDB30u; // 801ADC20
  c->r[5]=c->r[1]+0x000000C0u; // 801ADC24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ADC28
  c->lr=0x801ADC30u; f_801AEB00(c); // 801ADC2C
L_801ADC30:;
  cmps(c,0,(int32_t)c->r[29],-23); // 801ADC30
  if (!crb(c,0)) { goto L_801ADC3C; } // 801ADC34
  cmps(c,0,(int32_t)c->r[29],-100); // 801ADC38
L_801ADC3C:;
  cmps(c,0,(int32_t)c->r[29],-108); // 801ADC3C
  if (crb(c,2)) { goto L_801ADC6C; } // 801ADC40
  cmps(c,0,(int32_t)c->r[29],-107); // 801ADC44
  if (crb(c,2)) { goto L_801ADC6C; } // 801ADC48
  cmps(c,0,(int32_t)c->r[29],-103); // 801ADC4C
  if (crb(c,2)) { goto L_801ADC6C; } // 801ADC50
  cmps(c,0,(int32_t)c->r[29],-118); // 801ADC54
  if (crb(c,2)) { goto L_801ADC6C; } // 801ADC58
  cmps(c,0,(int32_t)c->r[29],-8); // 801ADC5C
  if (crb(c,2)) { goto L_801ADC6C; } // 801ADC60
  cmps(c,0,(int32_t)c->r[29],-22); // 801ADC64
  if (!crb(c,2)) { goto L_801ADC74; } // 801ADC68
L_801ADC6C:;
  c->r[3]=c->r[29]|c->r[29]; // 801ADC6C
  c->lr=0x801ADC74u; f_801AF3D0(c); // 801ADC70
L_801ADC74:;
  c->r[0]=c->r[30]+0x00000001u; // 801ADC74
  c->r[3]=c->r[1]+0x00000140u; // 801ADC78
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ADC7C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801ADC80
  goto L_801ADCE0; // 801ADC84
L_801ADC88:;
  c->r[30]=c->r[30]+0x00000002u; // 801ADC88
  c->r[4]=c->r[4]+0x00000008u; // 801ADC8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801ADBD0; } // 801ADC90
  c->r[4]=c->r[29]|c->r[29]; // 801ADC94
  c->r[3]=c->r[31]+0x000000DCu; // 801ADC98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ADC9C
  c->lr=0x801ADCA4u; f_80121B20(c); // 801ADCA0
  c->r[5]=c->r[29]|c->r[29]; // 801ADCA4
  c->r[3]=c->r[1]+0x00000040u; // 801ADCA8
  c->r[4]=c->r[31]+0x00000110u; // 801ADCAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ADCB0
  c->lr=0x801ADCB8u; f_802EE604(c); // 801ADCB4
  c->r[3]=0u+0x801B0000u; // 801ADCB8
  c->r[4]=c->r[29]|c->r[29]; // 801ADCBC
  c->r[3]=c->r[3]+0xFFFFDB30u; // 801ADCC0
  c->r[5]=c->r[1]+0x00000040u; // 801ADCC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ADCC8
  c->lr=0x801ADCD0u; f_801AEB00(c); // 801ADCCC
  cmps(c,0,(int32_t)c->r[29],-23); // 801ADCD0
  if (!crb(c,0)) { goto L_801ADCDC; } // 801ADCD4
  cmps(c,0,(int32_t)c->r[29],-100); // 801ADCD8
L_801ADCDC:;
  c->r[3]=0u+0xFFFFFFC0u; // 801ADCDC
L_801ADCE0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801ADCE0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801ADCE4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801ADCE8
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801ADCEC
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 801ADCF0
  c->lr=c->r[0]; // 801ADCF4
  c->r[1]=c->r[10]|c->r[10]; // 801ADCF8
  return; // 801ADCFC
}

// nandGenerateAbsPath
void f_801ADD00(Ctx* __restrict c) {
  trace_call(0x801ADD00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADD00
  c->r[0]=c->lr; // 801ADD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADD08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADD0C
  c->r[31]=c->r[4]|c->r[4]; // 801ADD10
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADD14
  c->r[30]=c->r[3]|c->r[3]; // 801ADD18
  c->r[3]=c->r[31]|c->r[31]; // 801ADD1C
  c->lr=0x801ADD24u; f_802E5F80(c); // 801ADD20
  cmps(c,0,(int32_t)c->r[3],0); // 801ADD24
  if (!crb(c,2)) { goto L_801ADD3C; } // 801ADD28
  c->r[3]=c->r[30]|c->r[30]; // 801ADD2C
  c->r[4]=c->r[13]+0xFFFFACA0u; // 801ADD30
  c->lr=0x801ADD38u; f_802EE808(c); // 801ADD34
  goto L_801ADDB0; // 801ADD38
L_801ADD3C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801ADD3C
  cmps(c,0,(int32_t)c->r[0],47); // 801ADD40
  if (!crb(c,2)) { goto L_801ADD50; } // 801ADD44
  c->r[0]=0u+0x00000000u; // 801ADD48
  goto L_801ADD54; // 801ADD4C
L_801ADD50:;
  c->r[0]=0u+0x00000001u; // 801ADD50
L_801ADD54:;
  cmps(c,0,(int32_t)c->r[0],0); // 801ADD54
  if (crb(c,2)) { goto L_801ADD74; } // 801ADD58
  c->r[4]=0u+0x803A0000u; // 801ADD5C
  c->r[3]=c->r[30]|c->r[30]; // 801ADD60
  c->r[5]=c->r[31]|c->r[31]; // 801ADD64
  c->r[4]=c->r[4]+0xFFFF9E60u; // 801ADD68
  c->lr=0x801ADD70u; f_801AD910(c); // 801ADD6C
  goto L_801ADDB0; // 801ADD70
L_801ADD74:;
  c->r[3]=c->r[30]|c->r[30]; // 801ADD74
  c->r[4]=c->r[31]|c->r[31]; // 801ADD78
  c->lr=0x801ADD80u; f_802EE808(c); // 801ADD7C
  c->r[3]=c->r[30]|c->r[30]; // 801ADD80
  c->lr=0x801ADD88u; f_802E5F80(c); // 801ADD84
  cmps(c,0,(int32_t)c->r[3],0); // 801ADD88
  if (crb(c,2)) { goto L_801ADDB0; } // 801ADD8C
  c->r[4]=c->r[3]+c->r[30]; // 801ADD90
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 801ADD94
  cmps(c,0,(int32_t)c->r[0],47); // 801ADD98
  if (!crb(c,2)) { goto L_801ADDB0; } // 801ADD9C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801ADDA0
  if (crb(c,2)) { goto L_801ADDB0; } // 801ADDA4
  c->r[0]=0u+0x00000000u; // 801ADDA8
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 801ADDAC
L_801ADDB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADDB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADDB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADDB8
  c->lr=c->r[0]; // 801ADDBC
  c->r[1]=c->r[1]+0x00000010u; // 801ADDC0
  return; // 801ADDC4
}

// fn_801ADDD0
void f_801ADDD0(Ctx* __restrict c) {
  trace_call(0x801ADDD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADDD0
  c->r[0]=c->lr; // 801ADDD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADDD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADDDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ADDE0
  c->r[30]=c->r[4]|c->r[4]; // 801ADDE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ADDE8
  c->r[29]=c->r[3]|c->r[3]; // 801ADDEC
  c->r[3]=c->r[30]|c->r[30]; // 801ADDF0
  c->lr=0x801ADDF8u; f_802E5F80(c); // 801ADDF4
  c->r[0]=c->r[3]+0x00000001u; // 801ADDF8
  c->r[31]=c->r[3]|c->r[3]; // 801ADDFC
  c->r[4]=c->r[30]+c->r[3]; // 801ADE00
  c->ctr=c->r[0]; // 801ADE04
  cmps(c,0,(int32_t)c->r[3],0); // 801ADE08
  if (crb(c,0)) { goto L_801ADE28; } // 801ADE0C
L_801ADE10:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801ADE10
  cmps(c,0,(int32_t)c->r[0],47); // 801ADE14
  if (crb(c,2)) { goto L_801ADE28; } // 801ADE18
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801ADE1C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801ADE20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801ADE10; } // 801ADE24
L_801ADE28:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ADE28
  if (!crb(c,2)) { goto L_801ADE40; } // 801ADE2C
  c->r[3]=c->r[29]|c->r[29]; // 801ADE30
  c->r[4]=c->r[13]+0xFFFFAC9Cu; // 801ADE34
  c->lr=0x801ADE3Cu; f_802EE808(c); // 801ADE38
  goto L_801ADE58; // 801ADE3C
L_801ADE40:;
  c->r[3]=c->r[29]|c->r[29]; // 801ADE40
  c->r[4]=c->r[30]|c->r[30]; // 801ADE44
  c->r[5]=c->r[31]|c->r[31]; // 801ADE48
  c->lr=0x801ADE50u; f_802EE8C8(c); // 801ADE4C
  c->r[0]=0u+0x00000000u; // 801ADE50
  W8(c->r[29]+c->r[31],c->r[0]); // 801ADE54
L_801ADE58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADE58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADE5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ADE60
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ADE64
  c->lr=c->r[0]; // 801ADE68
  c->r[1]=c->r[1]+0x00000020u; // 801ADE6C
  return; // 801ADE70
}

// NANDInit
void f_801ADE80(Ctx* __restrict c) {
  trace_call(0x801ADE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE80
  c->r[0]=c->lr; // 801ADE84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADE88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADE8C
  c->r[31]=0u+0x803A0000u; // 801ADE90
  c->r[31]=c->r[31]+0xFFFF9E00u; // 801ADE94
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ADE98
  c->lr=0x801ADEA0u; f_801251B0(c); // 801ADE9C
  c->r[0]=R32(c->r[13]+0xFFFFC398u); // 801ADEA0
  cmps(c,0,(int32_t)c->r[0],1); // 801ADEA4
  if (!crb(c,2)) { goto L_801ADEB8; } // 801ADEA8
  c->lr=0x801ADEB0u; f_801251F0(c); // 801ADEAC
  c->r[3]=0u+0xFFFFFFFDu; // 801ADEB0
  goto L_801ADF9C; // 801ADEB4
L_801ADEB8:;
  cmps(c,0,(int32_t)c->r[0],2); // 801ADEB8
  if (!crb(c,2)) { goto L_801ADECC; } // 801ADEBC
  c->lr=0x801ADEC4u; f_801251F0(c); // 801ADEC0
  c->r[3]=0u+0x00000000u; // 801ADEC4
  goto L_801ADF9C; // 801ADEC8
L_801ADECC:;
  c->r[0]=0u+0x00000001u; // 801ADECC
  W32(c->r[13]+0xFFFFC398u,c->r[0]); // 801ADED0
  c->lr=0x801ADED8u; f_801251F0(c); // 801ADED4
  c->lr=0x801ADEDCu; f_801AF3F0(c); // 801ADED8
  cmps(c,0,(int32_t)c->r[3],0); // 801ADEDC
  c->r[30]=c->r[3]|c->r[3]; // 801ADEE0
  if (!crb(c,2)) { goto L_801ADF84; } // 801ADEE4
  c->lr=0x801ADEECu; f_801B46A0(c); // 801ADEE8
  cmps(c,0,(int32_t)c->r[3],0); // 801ADEEC
  c->r[30]=c->r[3]|c->r[3]; // 801ADEF0
  if (!crb(c,2)) { goto L_801ADF04; } // 801ADEF4
  c->r[3]=c->r[1]+0x00000008u; // 801ADEF8
  c->lr=0x801ADF00u; f_801B4B50(c); // 801ADEFC
  c->r[30]=c->r[3]|c->r[3]; // 801ADF00
L_801ADF04:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ADF04
  if (!crb(c,2)) { goto L_801ADF24; } // 801ADF08
  c->r[5]=0u+0x805B0000u; // 801ADF0C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801ADF10
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801ADF14
  c->r[5]=c->r[5]+0xFFFF8280u; // 801ADF18
  c->lr=0x801ADF20u; f_801B4AB0(c); // 801ADF1C
  c->r[30]=c->r[3]|c->r[3]; // 801ADF20
L_801ADF24:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ADF24
  if (!crb(c,2)) { goto L_801ADF3C; } // 801ADF28
  c->r[4]=0u+0x805B0000u; // 801ADF2C
  c->r[3]=c->r[31]+0x00000060u; // 801ADF30
  c->r[4]=c->r[4]+0xFFFF8280u; // 801ADF34
  c->lr=0x801ADF3Cu; f_802EE808(c); // 801ADF38
L_801ADF3C:;
  c->lr=0x801ADF40u; f_801B4700(c); // 801ADF3C
  cmps(c,0,(int32_t)c->r[30],0); // 801ADF40
  if (crb(c,2)) { goto L_801ADF54; } // 801ADF44
  c->r[3]=c->r[31]+0x00000130u; // 801ADF48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ADF4C
  c->lr=0x801ADF54u; f_80121B20(c); // 801ADF50
L_801ADF54:;
  c->r[3]=c->r[31]+0x000000A0u; // 801ADF54
  c->lr=0x801ADF5Cu; f_801272F0(c); // 801ADF58
  c->lr=0x801ADF60u; f_801251B0(c); // 801ADF5C
  c->r[0]=0u+0x00000002u; // 801ADF60
  W32(c->r[13]+0xFFFFC398u,c->r[0]); // 801ADF64
  c->lr=0x801ADF6Cu; f_801251F0(c); // 801ADF68
  c->r[3]=0u+0x00000001u; // 801ADF6C
  c->lr=0x801ADF74u; f_801AF370(c); // 801ADF70
  c->r[3]=R32(c->r[13]+0xFFFFAC98u); // 801ADF74
  c->lr=0x801ADF7Cu; f_8011F990(c); // 801ADF78
  c->r[3]=0u+0x00000000u; // 801ADF7C
  goto L_801ADF9C; // 801ADF80
L_801ADF84:;
  c->lr=0x801ADF88u; f_801251B0(c); // 801ADF84
  c->r[0]=0u+0x00000000u; // 801ADF88
  W32(c->r[13]+0xFFFFC398u,c->r[0]); // 801ADF8C
  c->lr=0x801ADF94u; f_801251F0(c); // 801ADF90
  c->r[3]=c->r[30]|c->r[30]; // 801ADF94
  c->lr=0x801ADF9Cu; f_801ADB50(c); // 801ADF98
L_801ADF9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADF9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADFA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ADFA4
  c->lr=c->r[0]; // 801ADFA8
  c->r[1]=c->r[1]+0x00000020u; // 801ADFAC
  return; // 801ADFB0
}

// fn_801ADFC0
void f_801ADFC0(Ctx* __restrict c) {
  trace_call(0x801ADFC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADFC0
  c->r[0]=c->lr; // 801ADFC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ADFC8
  c->r[11]=c->r[1]+0x00000030u; // 801ADFCC
  c->lr=0x801ADFD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ADFD0
  cmps(c,0,(int32_t)c->r[3],0); // 801ADFD4
  if (!crb(c,2)) { goto L_801AE070; } // 801ADFD8
  cmpu(c,0,c->r[4],0x00000002u); // 801ADFDC
  if (!crb(c,2)) { goto L_801AE068; } // 801ADFE0
  c->r[26]=0u+0x00000000u; // 801ADFE4
  W32(c->r[1]+0x00000008u,c->r[26]); // 801ADFE8
  c->lr=0x801ADFF0u; f_8012AB70(c); // 801ADFEC
  c->r[5]=0u+0x801B0000u; // 801ADFF0
  c->r[27]=c->r[4]|c->r[4]; // 801ADFF4
  c->r[28]=c->r[3]|c->r[3]; // 801ADFF8
  c->r[4]=c->r[1]+0x00000008u; // 801ADFFC
  c->r[3]=c->r[5]+0xFFFFE090u; // 801AE000
  c->lr=0x801AE008u; f_801B0C40(c); // 801AE004
  c->r[3]=0u+0x10620000u; // 801AE008
  c->r[30]=0u+0x80000000u; // 801AE00C
  c->r[29]=c->r[3]+0x00004DD3u; // 801AE010
  c->r[31]=0u+0x000001F4u; // 801AE014
  goto L_801AE028; // 801AE018
L_801AE01C:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE01C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE020
  if (!crb(c,2)) { goto L_801AE068; } // 801AE024
L_801AE028:;
  c->lr=0x801AE02Cu; f_8012AB70(c); // 801AE028
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801AE02C
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 801AE030
  c->r[3]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 801AE034
  c->r[5]=0u+0x00000000u; // 801AE038
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801AE03C
  c->r[0]=(uint32_t)(((uint64_t)c->r[29]*(uint64_t)c->r[0])>>32); // 801AE040
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 801AE044
  c->lr=0x801AE04Cu; f_802E6B1C(c); // 801AE048
  c->r[0]=c->r[3]^0x80000000u; // 801AE04C
  c->r[5]=c->r[26]^0x80000000u; // 801AE050
  c->r[3]=addc(c,~c->r[31],c->r[4],1); // 801AE054
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801AE058
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801AE05C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801AE060
  if (!crb(c,2)) { IRQCHK(c); goto L_801AE01C; } // 801AE064
L_801AE068:;
  c->r[3]=0u+0x00000001u; // 801AE068
  goto L_801AE074; // 801AE06C
L_801AE070:;
  c->r[3]=0u+0x00000001u; // 801AE070
L_801AE074:;
  c->r[11]=c->r[1]+0x00000030u; // 801AE074
  c->lr=0x801AE07Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE078
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AE07C
  c->lr=c->r[0]; // 801AE080
  c->r[1]=c->r[1]+0x00000030u; // 801AE084
  return; // 801AE088
}

// fn_801AE090
void f_801AE090(Ctx* __restrict c) {
  trace_call(0x801AE090u);
  c->r[0]=0u+0x00000001u; // 801AE090
  W32(c->r[4]+0x00000000u,c->r[0]); // 801AE094
  return; // 801AE098
}

// fn_801AE0A0
void f_801AE0A0(Ctx* __restrict c) {
  trace_call(0x801AE0A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE0A0
  c->r[0]=c->lr; // 801AE0A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE0A8
  c->r[0]=R32(c->r[13]+0xFFFFC398u); // 801AE0AC
  cmps(c,0,(int32_t)c->r[0],2); // 801AE0B0
  if (!crb(c,2)) { goto L_801AE0C0; } // 801AE0B4
  c->r[0]=0u+0x00000001u; // 801AE0B8
  goto L_801AE0C4; // 801AE0BC
L_801AE0C0:;
  c->r[0]=0u+0x00000000u; // 801AE0C0
L_801AE0C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AE0C4
  if (!crb(c,2)) { goto L_801AE0D4; } // 801AE0C8
  c->r[3]=0u+0xFFFFFF80u; // 801AE0CC
  goto L_801AE0E4; // 801AE0D0
L_801AE0D4:;
  c->r[4]=0u+0x805B0000u; // 801AE0D4
  c->r[4]=c->r[4]+0xFFFF8280u; // 801AE0D8
  c->lr=0x801AE0E0u; f_802EE808(c); // 801AE0DC
  c->r[3]=0u+0x00000000u; // 801AE0E0
L_801AE0E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE0E4
  c->lr=c->r[0]; // 801AE0E8
  c->r[1]=c->r[1]+0x00000010u; // 801AE0EC
  return; // 801AE0F0
}

// nandCallback
void f_801AE100(Ctx* __restrict c) {
  trace_call(0x801AE100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE100
  c->r[0]=c->lr; // 801AE104
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE10C
  c->r[31]=c->r[4]|c->r[4]; // 801AE110
  c->lr=0x801AE118u; f_801ADB50(c); // 801AE114
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AE118
  c->r[4]=c->r[31]|c->r[31]; // 801AE11C
  c->ctr=c->r[12]; // 801AE120
  if (true) { c->lr=0x801AE128u; dispatch(c,c->ctr); } // 801AE124
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE12C
  c->lr=c->r[0]; // 801AE130
  c->r[1]=c->r[1]+0x00000010u; // 801AE134
  return; // 801AE138
}

// nandGetType
void f_801AE140(Ctx* __restrict c) {
  trace_call(0x801AE140u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE140
  c->r[0]=c->lr; // 801AE144
  W32(c->r[1]+0x00000074u,c->r[0]); // 801AE148
  c->r[11]=c->r[1]+0x00000070u; // 801AE14C
  c->lr=0x801AE154u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE150
  c->r[27]=c->r[3]|c->r[3]; // 801AE154
  c->r[30]=c->r[4]|c->r[4]; // 801AE158
  c->r[28]=c->r[5]|c->r[5]; // 801AE15C
  c->r[29]=c->r[6]|c->r[6]; // 801AE160
  c->r[31]=c->r[7]|c->r[7]; // 801AE164
  c->lr=0x801AE16Cu; f_802E5F80(c); // 801AE168
  cmps(c,0,(int32_t)c->r[3],0); // 801AE16C
  if (!crb(c,2)) { goto L_801AE17C; } // 801AE170
  c->r[3]=0u+0xFFFFFF9Bu; // 801AE174
  goto L_801AE3FC; // 801AE178
L_801AE17C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AE17C
  if (crb(c,2)) { goto L_801AE288; } // 801AE180
  c->r[3]=c->r[27]|c->r[27]; // 801AE184
  c->lr=0x801AE18Cu; f_802E5F80(c); // 801AE188
  cmps(c,0,(int32_t)c->r[3],0); // 801AE18C
  if (!crb(c,2)) { goto L_801AE1A4; } // 801AE190
  c->r[3]=c->r[28]+0x00000034u; // 801AE194
  c->r[4]=c->r[13]+0xFFFFACA0u; // 801AE198
  c->lr=0x801AE1A0u; f_802EE808(c); // 801AE19C
  goto L_801AE218; // 801AE1A0
L_801AE1A4:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801AE1A4
  cmps(c,0,(int32_t)c->r[0],47); // 801AE1A8
  if (!crb(c,2)) { goto L_801AE1B8; } // 801AE1AC
  c->r[0]=0u+0x00000000u; // 801AE1B0
  goto L_801AE1BC; // 801AE1B4
L_801AE1B8:;
  c->r[0]=0u+0x00000001u; // 801AE1B8
L_801AE1BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AE1BC
  if (crb(c,2)) { goto L_801AE1DC; } // 801AE1C0
  c->r[4]=0u+0x803A0000u; // 801AE1C4
  c->r[5]=c->r[27]|c->r[27]; // 801AE1C8
  c->r[3]=c->r[28]+0x00000034u; // 801AE1CC
  c->r[4]=c->r[4]+0xFFFF9E60u; // 801AE1D0
  c->lr=0x801AE1D8u; f_801AD910(c); // 801AE1D4
  goto L_801AE218; // 801AE1D8
L_801AE1DC:;
  c->r[4]=c->r[27]|c->r[27]; // 801AE1DC
  c->r[3]=c->r[28]+0x00000034u; // 801AE1E0
  c->lr=0x801AE1E8u; f_802EE808(c); // 801AE1E4
  c->r[3]=c->r[28]+0x00000034u; // 801AE1E8
  c->lr=0x801AE1F0u; f_802E5F80(c); // 801AE1EC
  cmps(c,0,(int32_t)c->r[3],0); // 801AE1F0
  if (crb(c,2)) { goto L_801AE218; } // 801AE1F4
  c->r[4]=c->r[3]+c->r[28]; // 801AE1F8
  c->r[0]=R8(c->r[4]+0x00000033u); // 801AE1FC
  cmps(c,0,(int32_t)c->r[0],47); // 801AE200
  if (!crb(c,2)) { goto L_801AE218; } // 801AE204
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801AE208
  if (crb(c,2)) { goto L_801AE218; } // 801AE20C
  c->r[0]=0u+0x00000000u; // 801AE210
  W8(c->r[4]+0x00000033u,c->r[0]); // 801AE214
L_801AE218:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AE218
  if (!crb(c,2)) { goto L_801AE264; } // 801AE21C
  c->r[4]=0u+0x803A0000u; // 801AE220
  c->r[3]=c->r[28]+0x00000034u; // 801AE224
  c->r[4]=c->r[4]+0xFFFF9EBCu; // 801AE228
  c->r[5]=0u+0x00000009u; // 801AE22C
  c->lr=0x801AE234u; f_802EEAA0(c); // 801AE230
  cmps(c,0,(int32_t)c->r[3],0); // 801AE234
  if (!crb(c,2)) { goto L_801AE250; } // 801AE238
  c->r[0]=R8(c->r[28]+0x0000003Du); // 801AE23C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AE240
  if (crb(c,2)) { goto L_801AE250; } // 801AE244
  c->r[0]=0u+0x00000001u; // 801AE248
  goto L_801AE254; // 801AE24C
L_801AE250:;
  c->r[0]=0u+0x00000000u; // 801AE250
L_801AE254:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AE254
  if (crb(c,2)) { goto L_801AE264; } // 801AE258
  c->r[3]=0u+0xFFFFFF9Au; // 801AE25C
  goto L_801AE3FC; // 801AE260
L_801AE264:;
  c->r[6]=0u+0x801B0000u; // 801AE264
  W32(c->r[28]+0x00000088u,c->r[30]); // 801AE268
  c->r[7]=c->r[28]|c->r[28]; // 801AE26C
  c->r[3]=c->r[28]+0x00000034u; // 801AE270
  c->r[5]=c->r[28]+0x00000030u; // 801AE274
  c->r[6]=c->r[6]+0xFFFFE470u; // 801AE278
  c->r[4]=0u+0x00000000u; // 801AE27C
  c->lr=0x801AE284u; f_801AFAE0(c); // 801AE280
  goto L_801AE3FC; // 801AE284
L_801AE288:;
  c->r[0]=0u+0x00000000u; // 801AE288
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AE28C
  c->r[3]=c->r[27]|c->r[27]; // 801AE290
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE294
  W32(c->r[1]+0x00000018u,c->r[0]); // 801AE298
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801AE29C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801AE2A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE2A4
  W32(c->r[1]+0x00000028u,c->r[0]); // 801AE2A8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801AE2AC
  W32(c->r[1]+0x00000030u,c->r[0]); // 801AE2B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AE2B4
  W32(c->r[1]+0x00000038u,c->r[0]); // 801AE2B8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801AE2BC
  W32(c->r[1]+0x00000040u,c->r[0]); // 801AE2C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AE2C4
  W32(c->r[1]+0x00000048u,c->r[0]); // 801AE2C8
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801AE2CC
  c->lr=0x801AE2D4u; f_802E5F80(c); // 801AE2D0
  cmps(c,0,(int32_t)c->r[3],0); // 801AE2D4
  if (!crb(c,2)) { goto L_801AE2EC; } // 801AE2D8
  c->r[3]=c->r[1]+0x00000010u; // 801AE2DC
  c->r[4]=c->r[13]+0xFFFFACA0u; // 801AE2E0
  c->lr=0x801AE2E8u; f_802EE808(c); // 801AE2E4
  goto L_801AE364; // 801AE2E8
L_801AE2EC:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801AE2EC
  cmps(c,0,(int32_t)c->r[0],47); // 801AE2F0
  if (!crb(c,2)) { goto L_801AE300; } // 801AE2F4
  c->r[0]=0u+0x00000000u; // 801AE2F8
  goto L_801AE304; // 801AE2FC
L_801AE300:;
  c->r[0]=0u+0x00000001u; // 801AE300
L_801AE304:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AE304
  if (crb(c,2)) { goto L_801AE324; } // 801AE308
  c->r[4]=0u+0x803A0000u; // 801AE30C
  c->r[5]=c->r[27]|c->r[27]; // 801AE310
  c->r[3]=c->r[1]+0x00000010u; // 801AE314
  c->r[4]=c->r[4]+0xFFFF9E60u; // 801AE318
  c->lr=0x801AE320u; f_801AD910(c); // 801AE31C
  goto L_801AE364; // 801AE320
L_801AE324:;
  c->r[4]=c->r[27]|c->r[27]; // 801AE324
  c->r[3]=c->r[1]+0x00000010u; // 801AE328
  c->lr=0x801AE330u; f_802EE808(c); // 801AE32C
  c->r[3]=c->r[1]+0x00000010u; // 801AE330
  c->lr=0x801AE338u; f_802E5F80(c); // 801AE334
  cmps(c,0,(int32_t)c->r[3],0); // 801AE338
  if (crb(c,2)) { goto L_801AE364; } // 801AE33C
  c->r[0]=c->r[1]+0x00000010u; // 801AE340
  c->r[4]=c->r[3]+c->r[0]; // 801AE344
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 801AE348
  cmps(c,0,(int32_t)c->r[0],47); // 801AE34C
  if (!crb(c,2)) { goto L_801AE364; } // 801AE350
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801AE354
  if (crb(c,2)) { goto L_801AE364; } // 801AE358
  c->r[0]=0u+0x00000000u; // 801AE35C
  W8(c->r[4]+0xFFFFFFFFu,c->r[0]); // 801AE360
L_801AE364:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AE364
  if (!crb(c,2)) { goto L_801AE3B0; } // 801AE368
  c->r[4]=0u+0x803A0000u; // 801AE36C
  c->r[3]=c->r[1]+0x00000010u; // 801AE370
  c->r[4]=c->r[4]+0xFFFF9EBCu; // 801AE374
  c->r[5]=0u+0x00000009u; // 801AE378
  c->lr=0x801AE380u; f_802EEAA0(c); // 801AE37C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE380
  if (!crb(c,2)) { goto L_801AE39C; } // 801AE384
  c->r[0]=R8(c->r[1]+0x00000019u); // 801AE388
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801AE38C
  if (crb(c,2)) { goto L_801AE39C; } // 801AE390
  c->r[0]=0u+0x00000001u; // 801AE394
  goto L_801AE3A0; // 801AE398
L_801AE39C:;
  c->r[0]=0u+0x00000000u; // 801AE39C
L_801AE3A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801AE3A0
  if (crb(c,2)) { goto L_801AE3B0; } // 801AE3A4
  c->r[3]=0u+0xFFFFFF9Au; // 801AE3A8
  goto L_801AE3FC; // 801AE3AC
L_801AE3B0:;
  c->r[0]=0u+0x00000000u; // 801AE3B0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AE3B4
  c->r[3]=c->r[1]+0x00000010u; // 801AE3B8
  c->r[5]=c->r[1]+0x00000008u; // 801AE3BC
  c->r[4]=0u+0x00000000u; // 801AE3C0
  c->lr=0x801AE3C8u; f_801AF980(c); // 801AE3C4
  cmps(c,0,(int32_t)c->r[3],0); // 801AE3C8
  if (crb(c,2)) { goto L_801AE3D8; } // 801AE3CC
  cmps(c,0,(int32_t)c->r[3],-102); // 801AE3D0
  if (!crb(c,2)) { goto L_801AE3E8; } // 801AE3D4
L_801AE3D8:;
  c->r[0]=0u+0x00000002u; // 801AE3D8
  W8(c->r[30]+0x00000000u,c->r[0]); // 801AE3DC
  c->r[3]=0u+0x00000000u; // 801AE3E0
  goto L_801AE3FC; // 801AE3E4
L_801AE3E8:;
  cmps(c,0,(int32_t)c->r[3],-101); // 801AE3E8
  if (!crb(c,2)) { goto L_801AE3FC; } // 801AE3EC
  c->r[0]=0u+0x00000001u; // 801AE3F0
  W8(c->r[30]+0x00000000u,c->r[0]); // 801AE3F4
  c->r[3]=0u+0x00000000u; // 801AE3F8
L_801AE3FC:;
  c->r[11]=c->r[1]+0x00000070u; // 801AE3FC
  c->lr=0x801AE404u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE400
  c->r[0]=R32(c->r[1]+0x00000074u); // 801AE404
  c->lr=c->r[0]; // 801AE408
  c->r[1]=c->r[1]+0x00000070u; // 801AE40C
  return; // 801AE410
}

// NANDPrivateGetTypeAsync
void f_801AE420(Ctx* __restrict c) {
  trace_call(0x801AE420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE420
  c->r[0]=c->lr; // 801AE424
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE428
  c->r[0]=R32(c->r[13]+0xFFFFC398u); // 801AE42C
  cmps(c,0,(int32_t)c->r[0],2); // 801AE430
  if (crb(c,2)) { goto L_801AE440; } // 801AE434
  c->r[3]=0u+0xFFFFFF80u; // 801AE438
  goto L_801AE458; // 801AE43C
L_801AE440:;
  W32(c->r[6]+0x00000004u,c->r[5]); // 801AE440
  c->r[5]=c->r[6]|c->r[6]; // 801AE444
  c->r[6]=0u+0x00000001u; // 801AE448
  c->r[7]=0u+0x00000001u; // 801AE44C
  c->lr=0x801AE454u; f_801AE140(c); // 801AE450
  c->lr=0x801AE458u; f_801ADB50(c); // 801AE454
L_801AE458:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE458
  c->lr=c->r[0]; // 801AE45C
  c->r[1]=c->r[1]+0x00000010u; // 801AE460
  return; // 801AE464
}

// nandGetTypeCallback
void f_801AE470(Ctx* __restrict c) {
  trace_call(0x801AE470u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE470
  c->r[0]=c->lr; // 801AE474
  cmps(c,0,(int32_t)c->r[3],0); // 801AE478
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE480
  c->r[31]=c->r[4]|c->r[4]; // 801AE484
  if (crb(c,2)) { goto L_801AE494; } // 801AE488
  cmps(c,0,(int32_t)c->r[3],-102); // 801AE48C
  if (!crb(c,2)) { goto L_801AE4A8; } // 801AE490
L_801AE494:;
  c->r[4]=R32(c->r[4]+0x00000088u); // 801AE494
  c->r[0]=0u+0x00000002u; // 801AE498
  c->r[3]=0u+0x00000000u; // 801AE49C
  W8(c->r[4]+0x00000000u,c->r[0]); // 801AE4A0
  goto L_801AE4C0; // 801AE4A4
L_801AE4A8:;
  cmps(c,0,(int32_t)c->r[3],-101); // 801AE4A8
  if (!crb(c,2)) { goto L_801AE4C0; } // 801AE4AC
  c->r[4]=R32(c->r[4]+0x00000088u); // 801AE4B0
  c->r[0]=0u+0x00000001u; // 801AE4B4
  c->r[3]=0u+0x00000000u; // 801AE4B8
  W8(c->r[4]+0x00000000u,c->r[0]); // 801AE4BC
L_801AE4C0:;
  c->lr=0x801AE4C4u; f_801ADB50(c); // 801AE4C0
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AE4C4
  c->r[4]=c->r[31]|c->r[31]; // 801AE4C8
  c->ctr=c->r[12]; // 801AE4CC
  if (true) { c->lr=0x801AE4D4u; dispatch(c,c->ctr); } // 801AE4D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE4D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE4D8
  c->lr=c->r[0]; // 801AE4DC
  c->r[1]=c->r[1]+0x00000010u; // 801AE4E0
  return; // 801AE4E4
}

// fn_801AE4F0
void f_801AE4F0(Ctx* __restrict c) {
  trace_call(0x801AE4F0u);
  c->r[3]=0u+0x805B0000u; // 801AE4F0
  c->r[3]=c->r[3]+0xFFFF8280u; // 801AE4F4
  return; // 801AE4F8
}

// NANDInitBanner
void f_801AE500(Ctx* __restrict c) {
  trace_call(0x801AE500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE500
  c->r[0]=c->lr; // 801AE504
  c->r[7]=0u+0x00010000u; // 801AE508
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE50C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AE510
  c->r[31]=c->r[6]|c->r[6]; // 801AE514
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AE518
  c->r[30]=c->r[5]|c->r[5]; // 801AE51C
  c->r[5]=c->r[7]+0xFFFFF0A0u; // 801AE520
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AE524
  c->r[29]=c->r[4]|c->r[4]; // 801AE528
  c->r[4]=0u+0x00000000u; // 801AE52C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AE530
  c->r[28]=c->r[3]|c->r[3]; // 801AE534
  c->lr=0x801AE53Cu; f_80004714(c); // 801AE538
  c->r[3]=0u+0x57490000u; // 801AE53C
  W32(c->r[28]+0x00000004u,c->r[29]); // 801AE540
  c->r[0]=c->r[3]+0x0000424Eu; // 801AE544
  c->r[4]=c->r[13]+0xFFFFACB8u; // 801AE548
  W32(c->r[28]+0x00000000u,c->r[0]); // 801AE54C
  c->r[3]=c->r[30]|c->r[30]; // 801AE550
  c->lr=0x801AE558u; f_802F280C(c); // 801AE554
  cmps(c,0,(int32_t)c->r[3],0); // 801AE558
  if (!crb(c,2)) { goto L_801AE574; } // 801AE55C
  c->r[3]=c->r[28]+0x00000020u; // 801AE560
  c->r[4]=c->r[13]+0xFFFFACBCu; // 801AE564
  c->r[5]=0u+0x00000020u; // 801AE568
  c->lr=0x801AE570u; f_802F27C8(c); // 801AE56C
  goto L_801AE584; // 801AE570
L_801AE574:;
  c->r[4]=c->r[30]|c->r[30]; // 801AE574
  c->r[3]=c->r[28]+0x00000020u; // 801AE578
  c->r[5]=0u+0x00000020u; // 801AE57C
  c->lr=0x801AE584u; f_802F27C8(c); // 801AE580
L_801AE584:;
  c->r[3]=c->r[31]|c->r[31]; // 801AE584
  c->r[4]=c->r[13]+0xFFFFACB8u; // 801AE588
  c->lr=0x801AE590u; f_802F280C(c); // 801AE58C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE590
  if (!crb(c,2)) { goto L_801AE5AC; } // 801AE594
  c->r[3]=c->r[28]+0x00000060u; // 801AE598
  c->r[4]=c->r[13]+0xFFFFACBCu; // 801AE59C
  c->r[5]=0u+0x00000020u; // 801AE5A0
  c->lr=0x801AE5A8u; f_802F27C8(c); // 801AE5A4
  goto L_801AE5BC; // 801AE5A8
L_801AE5AC:;
  c->r[4]=c->r[31]|c->r[31]; // 801AE5AC
  c->r[3]=c->r[28]+0x00000060u; // 801AE5B0
  c->r[5]=0u+0x00000020u; // 801AE5B4
  c->lr=0x801AE5BCu; f_802F27C8(c); // 801AE5B8
L_801AE5BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE5BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AE5C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AE5C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AE5C8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AE5CC
  c->lr=c->r[0]; // 801AE5D0
  c->r[1]=c->r[1]+0x00000020u; // 801AE5D4
  return; // 801AE5D8
}

// fn_801AE5E0
void f_801AE5E0(Ctx* __restrict c) {
  trace_call(0x801AE5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE5E0
  c->r[0]=c->lr; // 801AE5E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE5E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AE5EC
  c->r[31]=0u+0x00000000u; // 801AE5F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AE5F4
  c->r[30]=c->r[5]|c->r[5]; // 801AE5F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AE5FC
  c->r[29]=c->r[4]|c->r[4]; // 801AE600
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AE604
  c->r[28]=c->r[3]|c->r[3]; // 801AE608
  W32(c->r[3]+0x00000000u,c->r[31]); // 801AE60C
  c->r[3]=0u+0xFFFFFF8Bu; // 801AE610
  W32(c->r[4]+0x00000000u,c->r[31]); // 801AE614
  goto L_801AE670; // 801AE618
L_801AE61C:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE61C
  c->r[4]=c->r[1]+0x0000000Cu; // 801AE620
  c->r[5]=c->r[1]+0x00000008u; // 801AE624
  W32(c->r[1]+0x00000008u,c->r[31]); // 801AE628
  c->r[3]=R32(c->r[30]+0x00000000u); // 801AE62C
  c->lr=0x801AE634u; f_801B02A0(c); // 801AE630
  cmps(c,0,(int32_t)c->r[3],0); // 801AE634
  if (!crb(c,2)) { goto L_801AE660; } // 801AE638
  c->r[4]=R32(c->r[28]+0x00000000u); // 801AE63C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801AE640
  c->r[0]=c->r[4]+c->r[0]; // 801AE644
  W32(c->r[28]+0x00000000u,c->r[0]); // 801AE648
  c->r[4]=R32(c->r[29]+0x00000000u); // 801AE64C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801AE650
  c->r[0]=c->r[4]+c->r[0]; // 801AE654
  W32(c->r[29]+0x00000000u,c->r[0]); // 801AE658
  goto L_801AE66C; // 801AE65C
L_801AE660:;
  cmps(c,0,(int32_t)c->r[3],-106); // 801AE660
  if (!crb(c,2)) { goto L_801AE67C; } // 801AE664
  c->r[3]=0u+0x00000000u; // 801AE668
L_801AE66C:;
  c->r[30]=c->r[30]+0x00000004u; // 801AE66C
L_801AE670:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AE670
  cmps(c,0,(int32_t)c->r[0],0); // 801AE674
  if (!crb(c,2)) { IRQCHK(c); goto L_801AE61C; } // 801AE678
L_801AE67C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE67C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AE680
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AE684
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AE688
  c->r[28]=R32(c->r[1]+0x00000010u); // 801AE68C
  c->lr=c->r[0]; // 801AE690
  c->r[1]=c->r[1]+0x00000020u; // 801AE694
  return; // 801AE698
}

// fn_801AE6A0
void f_801AE6A0(Ctx* __restrict c) {
  trace_call(0x801AE6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE6A0
  c->r[0]=c->lr; // 801AE6A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AE6A8
  c->r[0]=0u+0xFFFFFFFFu; // 801AE6AC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801AE6B0
  c->r[31]=c->r[5]|c->r[5]; // 801AE6B4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801AE6B8
  c->r[30]=c->r[4]|c->r[4]; // 801AE6BC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801AE6C0
  c->r[29]=c->r[3]|c->r[3]; // 801AE6C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE6C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801AE6CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801AE6D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801AE6D4
  c->lr=0x801AE6DCu; f_801ADB10(c); // 801AE6D8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE6DC
  if (!crb(c,2)) { goto L_801AE6EC; } // 801AE6E0
  c->r[3]=0u+0xFFFFFF80u; // 801AE6E4
  goto L_801AE78C; // 801AE6E8
L_801AE6EC:;
  c->lr=0x801AE6F0u; f_801AE4F0(c); // 801AE6EC
  c->r[4]=c->r[1]+0x00000014u; // 801AE6F0
  c->r[5]=c->r[1]+0x00000010u; // 801AE6F4
  c->lr=0x801AE6FCu; f_801B02A0(c); // 801AE6F8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE6FC
  if (crb(c,2)) { goto L_801AE70C; } // 801AE700
  c->lr=0x801AE708u; f_801ADB50(c); // 801AE704
  goto L_801AE78C; // 801AE708
L_801AE70C:;
  c->r[5]=0u+0x803A0000u; // 801AE70C
  c->r[3]=c->r[1]+0x0000000Cu; // 801AE710
  c->r[4]=c->r[1]+0x00000008u; // 801AE714
  c->r[5]=c->r[5]+0xFFFF9FD0u; // 801AE718
  c->lr=0x801AE720u; f_801AE5E0(c); // 801AE71C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE720
  if (crb(c,2)) { goto L_801AE730; } // 801AE724
  c->lr=0x801AE72Cu; f_801ADB50(c); // 801AE728
  goto L_801AE78C; // 801AE72C
L_801AE730:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE730
  c->r[5]=0u+0x00000000u; // 801AE734
  c->r[4]=R32(c->r[1]+0x00000008u); // 801AE738
  c->r[0]=c->r[0]+c->r[29]; // 801AE73C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801AE740
  cmpu(c,0,c->r[0],0x00000400u); // 801AE744
  c->r[0]=R32(c->r[1]+0x00000010u); // 801AE748
  if (!crb(c,1)) { goto L_801AE754; } // 801AE74C
  c->r[5]=c->r[5]|0x00000001u; // 801AE750
L_801AE754:;
  c->r[0]=c->r[0]+c->r[30]; // 801AE754
  cmpu(c,0,c->r[0],0x00000021u); // 801AE758
  if (!crb(c,1)) { goto L_801AE764; } // 801AE75C
  c->r[5]=c->r[5]|0x00000002u; // 801AE760
L_801AE764:;
  c->r[0]=c->r[3]+c->r[29]; // 801AE764
  cmpu(c,0,c->r[0],0x00004400u); // 801AE768
  if (!crb(c,1)) { goto L_801AE774; } // 801AE76C
  c->r[5]=c->r[5]|0x00000004u; // 801AE770
L_801AE774:;
  c->r[0]=c->r[4]+c->r[30]; // 801AE774
  cmpu(c,0,c->r[0],0x00000FA0u); // 801AE778
  if (!crb(c,1)) { goto L_801AE784; } // 801AE77C
  c->r[5]=c->r[5]|0x00000008u; // 801AE780
L_801AE784:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801AE784
  c->r[3]=0u+0x00000000u; // 801AE788
L_801AE78C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AE78C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801AE790
  c->r[30]=R32(c->r[1]+0x00000028u); // 801AE794
  c->r[29]=R32(c->r[1]+0x00000024u); // 801AE798
  c->lr=c->r[0]; // 801AE79C
  c->r[1]=c->r[1]+0x00000030u; // 801AE7A0
  return; // 801AE7A4
}

// fn_801AE7B0
void f_801AE7B0(Ctx* __restrict c) {
  trace_call(0x801AE7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE7B0
  c->r[0]=c->lr; // 801AE7B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE7B8
  c->r[11]=c->r[1]+0x00000020u; // 801AE7BC
  c->lr=0x801AE7C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE7C0
  c->r[27]=c->r[3]|c->r[3]; // 801AE7C4
  c->r[28]=c->r[4]|c->r[4]; // 801AE7C8
  c->r[29]=c->r[5]|c->r[5]; // 801AE7CC
  c->r[30]=c->r[6]|c->r[6]; // 801AE7D0
  c->r[31]=c->r[7]|c->r[7]; // 801AE7D4
  c->lr=0x801AE7DCu; f_801ADB10(c); // 801AE7D8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE7DC
  if (!crb(c,2)) { goto L_801AE7EC; } // 801AE7E0
  c->r[3]=0u+0xFFFFFF80u; // 801AE7E4
  goto L_801AE844; // 801AE7E8
L_801AE7EC:;
  c->r[3]=0u+0x803A0000u; // 801AE7EC
  c->r[4]=0u+0x00000000u; // 801AE7F0
  c->r[3]=c->r[3]+0xFFFF9FD0u; // 801AE7F4
  c->r[0]=0u+0x00000014u; // 801AE7F8
  W32(c->r[31]+0x00000004u,c->r[30]); // 801AE7FC
  W32(c->r[31]+0x00000090u,c->r[27]); // 801AE800
  W32(c->r[31]+0x00000094u,c->r[28]); // 801AE804
  W32(c->r[31]+0x00000098u,c->r[29]); // 801AE808
  W32(c->r[31]+0x000000A4u,c->r[4]); // 801AE80C
  W32(c->r[31]+0x000000A8u,c->r[4]); // 801AE810
  W32(c->r[31]+0x000000ACu,c->r[4]); // 801AE814
  W32(c->r[31]+0x000000B0u,c->r[4]); // 801AE818
  W32(c->r[31]+0x000000B4u,c->r[3]); // 801AE81C
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 801AE820
  c->lr=0x801AE828u; f_801AE4F0(c); // 801AE824
  c->r[6]=0u+0x801B0000u; // 801AE828
  c->r[7]=c->r[31]|c->r[31]; // 801AE82C
  c->r[4]=c->r[31]+0x0000009Cu; // 801AE830
  c->r[5]=c->r[31]+0x000000A0u; // 801AE834
  c->r[6]=c->r[6]+0xFFFFE860u; // 801AE838
  c->lr=0x801AE840u; f_801B03E0(c); // 801AE83C
  c->lr=0x801AE844u; f_801ADB50(c); // 801AE840
L_801AE844:;
  c->r[11]=c->r[1]+0x00000020u; // 801AE844
  c->lr=0x801AE84Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE848
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE84C
  c->lr=c->r[0]; // 801AE850
  c->r[1]=c->r[1]+0x00000020u; // 801AE854
  return; // 801AE858
}

// fn_801AE860
void f_801AE860(Ctx* __restrict c) {
  trace_call(0x801AE860u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE860
  c->r[0]=c->lr; // 801AE864
  cmps(c,0,(int32_t)c->r[3],0); // 801AE868
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE86C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE870
  c->r[31]=c->r[4]|c->r[4]; // 801AE874
  if (crb(c,2)) { goto L_801AE884; } // 801AE878
  cmps(c,0,(int32_t)c->r[3],-106); // 801AE87C
  if (!crb(c,2)) { goto L_801AEA6C; } // 801AE880
L_801AE884:;
  c->r[5]=R32(c->r[4]+0x000000B4u); // 801AE884
  cmps(c,0,(int32_t)c->r[3],0); // 801AE888
  c->r[3]=R32(c->r[5]+0x00000000u); // 801AE88C
  if (!crb(c,2)) { goto L_801AE8B4; } // 801AE890
  c->r[7]=R32(c->r[4]+0x000000A4u); // 801AE894
  c->r[6]=R32(c->r[4]+0x000000ACu); // 801AE898
  c->r[5]=R32(c->r[4]+0x000000A8u); // 801AE89C
  c->r[0]=R32(c->r[4]+0x000000B0u); // 801AE8A0
  c->r[6]=c->r[7]+c->r[6]; // 801AE8A4
  W32(c->r[4]+0x000000A4u,c->r[6]); // 801AE8A8
  c->r[0]=c->r[5]+c->r[0]; // 801AE8AC
  W32(c->r[4]+0x000000A8u,c->r[0]); // 801AE8B0
L_801AE8B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801AE8B4
  if (crb(c,2)) { goto L_801AE900; } // 801AE8B8
  c->r[5]=R32(c->r[4]+0x000000B4u); // 801AE8BC
  c->r[6]=0u+0x801B0000u; // 801AE8C0
  c->r[7]=c->r[31]|c->r[31]; // 801AE8C4
  c->r[0]=c->r[5]+0x00000004u; // 801AE8C8
  W32(c->r[4]+0x000000B4u,c->r[0]); // 801AE8CC
  c->r[4]=c->r[4]+0x000000ACu; // 801AE8D0
  c->r[5]=c->r[31]+0x000000B0u; // 801AE8D4
  c->r[6]=c->r[6]+0xFFFFE860u; // 801AE8D8
  c->lr=0x801AE8E0u; f_801B03E0(c); // 801AE8DC
  cmps(c,0,(int32_t)c->r[3],0); // 801AE8E0
  if (crb(c,2)) { goto L_801AEA80; } // 801AE8E4
  c->lr=0x801AE8ECu; f_801ADB50(c); // 801AE8E8
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AE8EC
  c->r[4]=c->r[31]|c->r[31]; // 801AE8F0
  c->ctr=c->r[12]; // 801AE8F4
  if (true) { c->lr=0x801AE8FCu; dispatch(c,c->ctr); } // 801AE8F8
  goto L_801AEA80; // 801AE8FC
L_801AE900:;
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801AE900
  cmps(c,0,(int32_t)c->r[0],20); // 801AE904
  if (!crb(c,2)) { goto L_801AE98C; } // 801AE908
  c->r[3]=R32(c->r[4]+0x00000090u); // 801AE90C
  c->r[8]=0u+0x00000000u; // 801AE910
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 801AE914
  c->r[7]=R32(c->r[4]+0x000000A8u); // 801AE918
  c->r[0]=c->r[0]+c->r[3]; // 801AE91C
  c->r[6]=R32(c->r[4]+0x000000A4u); // 801AE920
  cmpu(c,0,c->r[0],0x00000400u); // 801AE924
  c->r[0]=R32(c->r[4]+0x000000A0u); // 801AE928
  c->r[5]=R32(c->r[4]+0x00000094u); // 801AE92C
  if (!crb(c,1)) { goto L_801AE938; } // 801AE930
  c->r[8]=c->r[8]|0x00000001u; // 801AE934
L_801AE938:;
  c->r[0]=c->r[0]+c->r[5]; // 801AE938
  cmpu(c,0,c->r[0],0x00000021u); // 801AE93C
  if (!crb(c,1)) { goto L_801AE948; } // 801AE940
  c->r[8]=c->r[8]|0x00000002u; // 801AE944
L_801AE948:;
  c->r[0]=c->r[6]+c->r[3]; // 801AE948
  cmpu(c,0,c->r[0],0x00004400u); // 801AE94C
  if (!crb(c,1)) { goto L_801AE958; } // 801AE950
  c->r[8]=c->r[8]|0x00000004u; // 801AE954
L_801AE958:;
  c->r[0]=c->r[7]+c->r[5]; // 801AE958
  cmpu(c,0,c->r[0],0x00000FA0u); // 801AE95C
  if (!crb(c,1)) { goto L_801AE968; } // 801AE960
  c->r[8]=c->r[8]|0x00000008u; // 801AE964
L_801AE968:;
  c->r[4]=R32(c->r[4]+0x00000098u); // 801AE968
  c->r[3]=0u+0x00000000u; // 801AE96C
  W32(c->r[4]+0x00000000u,c->r[8]); // 801AE970
  c->lr=0x801AE978u; f_801ADB50(c); // 801AE974
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AE978
  c->r[4]=c->r[31]|c->r[31]; // 801AE97C
  c->ctr=c->r[12]; // 801AE980
  if (true) { c->lr=0x801AE988u; dispatch(c,c->ctr); } // 801AE984
  goto L_801AEA80; // 801AE988
L_801AE98C:;
  cmps(c,0,(int32_t)c->r[0],21); // 801AE98C
  if (!crb(c,2)) { goto L_801AEA38; } // 801AE990
  c->r[5]=R32(c->r[4]+0x000000A4u); // 801AE994
  c->r[3]=0u+0x00004400u; // 801AE998
  c->r[9]=R32(c->r[4]+0x000000A8u); // 801AE99C
  c->r[0]=0u+0x00000FA0u; // 801AE9A0
  c->r[3]=addc(c,~c->r[5],c->r[3],1); // 801AE9A4
  c->r[10]=R32(c->r[4]+0x0000009Cu); // 801AE9A8
  c->r[8]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 801AE9AC
  c->r[11]=R32(c->r[4]+0x000000A0u); // 801AE9B0
  c->r[6]=addc(c,~c->r[5],0x00004400u,1); // 801AE9B4
  c->r[3]=0u+0x00000400u; // 801AE9B8
  c->r[5]=addc(c,~c->r[9],c->r[0],1); // 801AE9BC
  c->r[0]=0u+0x00000021u; // 801AE9C0
  c->r[7]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801AE9C4
  c->r[8]=c->r[6]&~c->r[8]; // 801AE9C8
  c->r[6]=addc(c,~c->r[9],0x00000FA0u,1); // 801AE9CC
  c->r[3]=addc(c,~c->r[10],c->r[3],1); // 801AE9D0
  c->r[5]=addc(c,~c->r[3],c->r[3],c->xer_ca); // 801AE9D4
  c->r[6]=c->r[6]&~c->r[7]; // 801AE9D8
  c->r[3]=addc(c,~c->r[10],0x00000400u,1); // 801AE9DC
  c->r[5]=c->r[3]&~c->r[5]; // 801AE9E0
  c->r[0]=addc(c,~c->r[11],c->r[0],1); // 801AE9E4
  c->r[3]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801AE9E8
  c->r[0]=addc(c,~c->r[11],0x00000021u,1); // 801AE9EC
  cmpu(c,0,c->r[8],c->r[5]); // 801AE9F0
  c->r[0]=c->r[0]&~c->r[3]; // 801AE9F4
  if (!crb(c,0)) { goto L_801AEA00; } // 801AE9F8
  c->r[5]=c->r[8]|c->r[8]; // 801AE9FC
L_801AEA00:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801AEA00
  cmpu(c,0,c->r[6],c->r[0]); // 801AEA04
  W32(c->r[3]+0x00000000u,c->r[5]); // 801AEA08
  if (!crb(c,0)) { goto L_801AEA14; } // 801AEA0C
  c->r[0]=c->r[6]|c->r[6]; // 801AEA10
L_801AEA14:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 801AEA14
  c->r[3]=0u+0x00000000u; // 801AEA18
  W32(c->r[4]+0x00000000u,c->r[0]); // 801AEA1C
  c->lr=0x801AEA24u; f_801ADB50(c); // 801AEA20
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AEA24
  c->r[4]=c->r[31]|c->r[31]; // 801AEA28
  c->ctr=c->r[12]; // 801AEA2C
  if (true) { c->lr=0x801AEA34u; dispatch(c,c->ctr); } // 801AEA30
  goto L_801AEA80; // 801AEA34
L_801AEA38:;
  c->r[3]=0u+0x803A0000u; // 801AEA38
  c->r[4]=0u+0x803A0000u; // 801AEA3C
  c->r[3]=c->r[3]+0xFFFFA014u; // 801AEA40
  c->r[4]=c->r[4]+0xFFFF9FFCu; // 801AEA44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AEA48
  c->lr=0x801AEA50u; f_80121B20(c); // 801AEA4C
  c->r[3]=0u+0xFFFFFF8Bu; // 801AEA50
  c->lr=0x801AEA58u; f_801ADB50(c); // 801AEA54
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AEA58
  c->r[4]=c->r[31]|c->r[31]; // 801AEA5C
  c->ctr=c->r[12]; // 801AEA60
  if (true) { c->lr=0x801AEA68u; dispatch(c,c->ctr); } // 801AEA64
  goto L_801AEA80; // 801AEA68
L_801AEA6C:;
  c->lr=0x801AEA70u; f_801ADB50(c); // 801AEA6C
  c->r[12]=R32(c->r[31]+0x00000004u); // 801AEA70
  c->r[4]=c->r[31]|c->r[31]; // 801AEA74
  c->ctr=c->r[12]; // 801AEA78
  if (true) { c->lr=0x801AEA80u; dispatch(c,c->ctr); } // 801AEA7C
L_801AEA80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEA80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEA84
  c->lr=c->r[0]; // 801AEA88
  c->r[1]=c->r[1]+0x00000010u; // 801AEA8C
  return; // 801AEA90
}

// reserveFileDescriptor
void f_801AEAA0(Ctx* __restrict c) {
  trace_call(0x801AEAA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEAA0
  c->r[0]=c->lr; // 801AEAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEAA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEAAC
  c->lr=0x801AEAB4u; f_801251B0(c); // 801AEAB0
  c->r[0]=R32(c->r[13]+0xFFFFACD0u); // 801AEAB4
  cmps(c,0,(int32_t)c->r[0],-255); // 801AEAB8
  if (!crb(c,2)) { goto L_801AEAD0; } // 801AEABC
  c->r[0]=0u+0xFFFFFF02u; // 801AEAC0
  W32(c->r[13]+0xFFFFACD0u,c->r[0]); // 801AEAC4
  c->r[31]=0u+0x00000000u; // 801AEAC8
  goto L_801AEAD4; // 801AEACC
L_801AEAD0:;
  c->r[31]=0u+0x00000001u; // 801AEAD0
L_801AEAD4:;
  c->lr=0x801AEAD8u; f_801251F0(c); // 801AEAD4
  c->r[0]=cntlz(c->r[31]); // 801AEAD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEADC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AEAE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEAE4
  c->lr=c->r[0]; // 801AEAE8
  c->r[1]=c->r[1]+0x00000010u; // 801AEAEC
  return; // 801AEAF0
}

// NANDLoggingAddMessageAsync
void f_801AEB00(Ctx* __restrict c) {
  trace_call(0x801AEB00u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEB00
  c->r[0]=c->lr; // 801AEB04
  W32(c->r[1]+0x00000094u,c->r[0]); // 801AEB08
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801AEB0C
  c->r[31]=c->r[5]|c->r[5]; // 801AEB10
  W32(c->r[1]+0x00000088u,c->r[30]); // 801AEB14
  c->r[30]=c->r[4]|c->r[4]; // 801AEB18
  W32(c->r[1]+0x00000084u,c->r[29]); // 801AEB1C
  c->r[29]=c->r[3]|c->r[3]; // 801AEB20
  if (!crb(c,6)) { goto L_801AEB48; } // 801AEB24
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801AEB28
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801AEB2C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801AEB30
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801AEB34
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801AEB38
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801AEB3C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801AEB40
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801AEB44
L_801AEB48:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801AEB48
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801AEB4C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801AEB50
  W32(c->r[1]+0x00000014u,c->r[6]); // 801AEB54
  W32(c->r[1]+0x00000018u,c->r[7]); // 801AEB58
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801AEB5C
  W32(c->r[1]+0x00000020u,c->r[9]); // 801AEB60
  W32(c->r[1]+0x00000024u,c->r[10]); // 801AEB64
  c->lr=0x801AEB6Cu; f_801AEAA0(c); // 801AEB68
  cmps(c,0,(int32_t)c->r[3],0); // 801AEB6C
  if (!crb(c,2)) { goto L_801AEB7C; } // 801AEB70
  c->r[3]=0u+0x00000000u; // 801AEB74
  goto L_801AEBFC; // 801AEB78
L_801AEB7C:;
  c->r[4]=c->r[1]+0x00000098u; // 801AEB7C
  c->r[0]=c->r[1]+0x00000008u; // 801AEB80
  c->r[5]=0u+0x03000000u; // 801AEB84
  c->r[3]=0u+0x805B0000u; // 801AEB88
  W32(c->r[1]+0x00000068u,c->r[5]); // 801AEB8C
  c->r[6]=c->r[1]+0x00000068u; // 801AEB90
  c->r[5]=c->r[31]|c->r[31]; // 801AEB94
  c->r[3]=c->r[3]+0xFFFF82C0u; // 801AEB98
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 801AEB9C
  c->r[4]=0u+0x00000100u; // 801AEBA0
  W32(c->r[1]+0x00000070u,c->r[0]); // 801AEBA4
  c->lr=0x801AEBACu; f_802EE404(c); // 801AEBA8
  cmps(c,0,(int32_t)c->r[30],-117); // 801AEBAC
  c->r[0]=0u+0x00000001u; // 801AEBB0
  W32(c->r[13]+0xFFFFC3A0u,c->r[29]); // 801AEBB4
  W32(c->r[13]+0xFFFFC3A4u,c->r[0]); // 801AEBB8
  if (crb(c,2)) { goto L_801AEBC8; } // 801AEBBC
  cmps(c,0,(int32_t)c->r[30],-9); // 801AEBC0
  if (!crb(c,2)) { goto L_801AEBCC; } // 801AEBC4
L_801AEBC8:;
  W32(c->r[13]+0xFFFFACD4u,c->r[30]); // 801AEBC8
L_801AEBCC:;
  c->r[3]=0u+0x803A0000u; // 801AEBCC
  c->r[5]=0u+0x801B0000u; // 801AEBD0
  c->r[3]=c->r[3]+0xFFFFA038u; // 801AEBD4
  c->r[4]=0u+0x00000003u; // 801AEBD8
  c->r[5]=c->r[5]+0xFFFFEC20u; // 801AEBDC
  c->r[6]=0u+0x00000000u; // 801AEBE0
  c->lr=0x801AEBE8u; f_801B07E0(c); // 801AEBE4
  cmps(c,0,(int32_t)c->r[3],0); // 801AEBE8
  if (!crb(c,2)) { goto L_801AEBF8; } // 801AEBEC
  c->r[3]=0u+0x00000001u; // 801AEBF0
  goto L_801AEBFC; // 801AEBF4
L_801AEBF8:;
  c->r[3]=0u+0x00000000u; // 801AEBF8
L_801AEBFC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801AEBFC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801AEC00
  c->r[30]=R32(c->r[1]+0x00000088u); // 801AEC04
  c->r[29]=R32(c->r[1]+0x00000084u); // 801AEC08
  c->lr=c->r[0]; // 801AEC0C
  c->r[1]=c->r[1]+0x00000090u; // 801AEC10
  return; // 801AEC14
}

// asyncRoutine
void f_801AEC20(Ctx* __restrict c) {
  trace_call(0x801AEC20u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEC20
  c->r[0]=c->lr; // 801AEC24
  W32(c->r[1]+0x00000094u,c->r[0]); // 801AEC28
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801AEC2C
  c->r[31]=0u+0x805B0000u; // 801AEC30
  c->r[31]=c->r[31]+0xFFFF82C0u; // 801AEC34
  W32(c->r[1]+0x00000088u,c->r[30]); // 801AEC38
  c->r[30]=c->r[3]|c->r[3]; // 801AEC3C
  c->r[4]=R32(c->r[13]+0xFFFFC3A4u); // 801AEC40
  c->r[0]=c->r[4]+0x00000001u; // 801AEC44
  W32(c->r[13]+0xFFFFC3A4u,c->r[0]); // 801AEC48
  cmps(c,0,(int32_t)c->r[0],2); // 801AEC4C
  if (!crb(c,2)) { goto L_801AECC0; } // 801AEC50
  cmps(c,0,(int32_t)c->r[3],0); // 801AEC54
  if (crb(c,0)) { goto L_801AECA0; } // 801AEC58
  c->r[6]=0u+0x801B0000u; // 801AEC5C
  W32(c->r[13]+0xFFFFACD0u,c->r[3]); // 801AEC60
  c->r[6]=c->r[6]+0xFFFFEC20u; // 801AEC64
  c->r[4]=0u+0x00000000u; // 801AEC68
  c->r[5]=0u+0x00000000u; // 801AEC6C
  c->r[7]=0u+0x00000000u; // 801AEC70
  c->lr=0x801AEC78u; f_801B0970(c); // 801AEC74
  cmps(c,0,(int32_t)c->r[3],0); // 801AEC78
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEC7C
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AEC80
  cmps(c,0,(int32_t)c->r[12],0); // 801AEC84
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEC88
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AEC8C
  c->r[3]=0u+0x00000000u; // 801AEC90
  c->ctr=c->r[12]; // 801AEC94
  if (true) { c->lr=0x801AEC9Cu; dispatch(c,c->ctr); } // 801AEC98
  goto L_801AF0CC; // 801AEC9C
L_801AECA0:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AECA0
  cmps(c,0,(int32_t)c->r[12],0); // 801AECA4
  if (crb(c,2)) { goto L_801AF0CC; } // 801AECA8
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AECAC
  c->r[3]=0u+0x00000000u; // 801AECB0
  c->ctr=c->r[12]; // 801AECB4
  if (true) { c->lr=0x801AECBCu; dispatch(c,c->ctr); } // 801AECB8
  goto L_801AF0CC; // 801AECBC
L_801AECC0:;
  cmps(c,0,(int32_t)c->r[0],3); // 801AECC0
  if (!crb(c,2)) { goto L_801AED34; } // 801AECC4
  cmps(c,0,(int32_t)c->r[3],0); // 801AECC8
  if (!crb(c,2)) { goto L_801AED14; } // 801AECCC
  c->r[6]=0u+0x801B0000u; // 801AECD0
  c->r[3]=R32(c->r[13]+0xFFFFACD0u); // 801AECD4
  c->r[4]=c->r[31]+0x00000100u; // 801AECD8
  c->r[5]=0u+0x00000100u; // 801AECDC
  c->r[6]=c->r[6]+0xFFFFEC20u; // 801AECE0
  c->r[7]=0u+0x00000000u; // 801AECE4
  c->lr=0x801AECECu; f_801B0A20(c); // 801AECE8
  cmps(c,0,(int32_t)c->r[3],0); // 801AECEC
  if (crb(c,2)) { goto L_801AF0CC; } // 801AECF0
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AECF4
  cmps(c,0,(int32_t)c->r[12],0); // 801AECF8
  if (crb(c,2)) { goto L_801AF0CC; } // 801AECFC
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AED00
  c->r[3]=0u+0x00000000u; // 801AED04
  c->ctr=c->r[12]; // 801AED08
  if (true) { c->lr=0x801AED10u; dispatch(c,c->ctr); } // 801AED0C
  goto L_801AF0CC; // 801AED10
L_801AED14:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AED14
  cmps(c,0,(int32_t)c->r[12],0); // 801AED18
  if (crb(c,2)) { goto L_801AF0CC; } // 801AED1C
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AED20
  c->r[3]=0u+0x00000000u; // 801AED24
  c->ctr=c->r[12]; // 801AED28
  if (true) { c->lr=0x801AED30u; dispatch(c,c->ctr); } // 801AED2C
  goto L_801AF0CC; // 801AED30
L_801AED34:;
  cmps(c,0,(int32_t)c->r[0],4); // 801AED34
  if (!crb(c,2)) { goto L_801AEDA8; } // 801AED38
  cmps(c,0,(int32_t)c->r[3],256); // 801AED3C
  if (!crb(c,2)) { goto L_801AED88; } // 801AED40
  c->r[6]=0u+0x801B0000u; // 801AED44
  c->r[3]=R32(c->r[13]+0xFFFFACD0u); // 801AED48
  c->r[6]=c->r[6]+0xFFFFEC20u; // 801AED4C
  c->r[4]=0u+0x00000000u; // 801AED50
  c->r[5]=0u+0x00000000u; // 801AED54
  c->r[7]=0u+0x00000000u; // 801AED58
  c->lr=0x801AED60u; f_801B0970(c); // 801AED5C
  cmps(c,0,(int32_t)c->r[3],0); // 801AED60
  if (crb(c,2)) { goto L_801AF0CC; } // 801AED64
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AED68
  cmps(c,0,(int32_t)c->r[12],0); // 801AED6C
  if (crb(c,2)) { goto L_801AF0CC; } // 801AED70
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AED74
  c->r[3]=0u+0x00000000u; // 801AED78
  c->ctr=c->r[12]; // 801AED7C
  if (true) { c->lr=0x801AED84u; dispatch(c,c->ctr); } // 801AED80
  goto L_801AF0CC; // 801AED84
L_801AED88:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AED88
  cmps(c,0,(int32_t)c->r[12],0); // 801AED8C
  if (crb(c,2)) { goto L_801AF0CC; } // 801AED90
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AED94
  c->r[3]=0u+0x00000000u; // 801AED98
  c->ctr=c->r[12]; // 801AED9C
  if (true) { c->lr=0x801AEDA4u; dispatch(c,c->ctr); } // 801AEDA0
  goto L_801AF0CC; // 801AEDA4
L_801AEDA8:;
  cmps(c,0,(int32_t)c->r[0],5); // 801AEDA8
  if (!crb(c,2)) { goto L_801AEF0C; } // 801AEDAC
  cmps(c,0,(int32_t)c->r[3],0); // 801AEDB0
  if (!crb(c,2)) { goto L_801AEEEC; } // 801AEDB4
  c->r[3]=c->r[31]+0x00000100u; // 801AEDB8
  c->r[0]=0u+0x00000000u; // 801AEDBC
  W8(c->r[3]+0x000000FFu,c->r[0]); // 801AEDC0
  c->lr=0x801AEDC8u; f_802F047C(c); // 801AEDC4
  c->r[30]=c->r[3]|c->r[3]; // 801AEDC8
  c->r[3]=c->r[31]+0x00000200u; // 801AEDCC
  c->r[4]=0u+0x00000020u; // 801AEDD0
  c->r[5]=0u+0x000000FEu; // 801AEDD4
  c->lr=0x801AEDDCu; f_80004714(c); // 801AEDD8
  c->lr=0x801AEDE0u; f_8012AB70(c); // 801AEDDC
  c->r[5]=c->r[1]+0x00000058u; // 801AEDE0
  c->lr=0x801AEDE8u; f_8012AC70(c); // 801AEDE4
  c->lr=0x801AEDECu; f_801AE4F0(c); // 801AEDE8
  c->r[4]=c->r[3]|c->r[3]; // 801AEDEC
  c->r[3]=c->r[1]+0x00000018u; // 801AEDF0
  c->r[4]=c->r[4]+0x00000007u; // 801AEDF4
  c->r[5]=0u+0x00000011u; // 801AEDF8
  c->lr=0x801AEE00u; f_802EE8C8(c); // 801AEDFC
  c->r[3]=0u+0x82080000u; // 801AEE00
  c->r[5]=0u+0x0000002Du; // 801AEE04
  c->r[0]=c->r[3]+0x00002083u; // 801AEE08
  c->r[4]=0u+0x00000000u; // 801AEE0C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[30])>>32); // 801AEE10
  W8(c->r[1]+0x00000020u,c->r[5]); // 801AEE14
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 801AEE18
  c->r[5]=0u+0x803A0000u; // 801AEE1C
  W8(c->r[1]+0x00000029u,c->r[4]); // 801AEE20
  c->r[4]=c->r[1]+0x00000018u; // 801AEE24
  W32(c->r[1]+0x00000008u,c->r[3]); // 801AEE28
  c->r[0]=c->r[0]+c->r[30]; // 801AEE2C
  c->r[0]=sraw(c,c->r[0],5); // 801AEE30
  c->r[6]=c->r[31]+0x00000000u; // 801AEE34
  c->r[7]=R32(c->r[1]+0x00000058u); // 801AEE38
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801AEE3C
  c->r[0]=c->r[0]+c->r[3]; // 801AEE40
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801AEE44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)63); // 801AEE48
  c->r[3]=c->r[31]+0x00000200u; // 801AEE4C
  W32(c->r[1]+0x00000010u,c->r[4]); // 801AEE50
  c->r[5]=c->r[5]+0xFFFFA054u; // 801AEE54
  c->r[4]=0u+0x00000100u; // 801AEE58
  W32(c->r[1]+0x00000014u,c->r[6]); // 801AEE5C
  c->r[6]=c->r[30]-c->r[0]; // 801AEE60
  c->r[8]=R32(c->r[1]+0x00000068u); // 801AEE64
  c->r[6]=c->r[6]+0x00000001u; // 801AEE68
  c->r[7]=R32(c->r[1]+0x0000006Cu); // 801AEE6C
  c->r[9]=R32(c->r[1]+0x00000064u); // 801AEE70
  c->r[8]=c->r[8]+0x00000001u; // 801AEE74
  c->r[10]=R32(c->r[1]+0x00000060u); // 801AEE78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AEE7C
  c->lr=0x801AEE84u; f_802EE510(c); // 801AEE80
  cmps(c,0,(int32_t)c->r[3],256); // 801AEE84
  if (!crb(c,0)) { goto L_801AEE98; } // 801AEE88
  c->r[4]=c->r[31]+0x00000200u; // 801AEE8C
  c->r[0]=0u+0x00000020u; // 801AEE90
  W8(c->r[4]+c->r[3],c->r[0]); // 801AEE94
L_801AEE98:;
  c->r[4]=c->r[31]+0x00000200u; // 801AEE98
  c->r[3]=0u+0x0000000Du; // 801AEE9C
  c->r[0]=0u+0x0000000Au; // 801AEEA0
  c->r[6]=0u+0x801B0000u; // 801AEEA4
  W8(c->r[4]+0x000000FEu,c->r[3]); // 801AEEA8
  c->r[6]=c->r[6]+0xFFFFEC20u; // 801AEEAC
  c->r[3]=R32(c->r[13]+0xFFFFACD0u); // 801AEEB0
  c->r[5]=0u+0x00000100u; // 801AEEB4
  W8(c->r[4]+0x000000FFu,c->r[0]); // 801AEEB8
  c->r[7]=0u+0x00000000u; // 801AEEBC
  c->lr=0x801AEEC4u; f_801B0AF0(c); // 801AEEC0
  cmps(c,0,(int32_t)c->r[3],0); // 801AEEC4
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEEC8
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AEECC
  cmps(c,0,(int32_t)c->r[12],0); // 801AEED0
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEED4
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AEED8
  c->r[3]=0u+0x00000000u; // 801AEEDC
  c->ctr=c->r[12]; // 801AEEE0
  if (true) { c->lr=0x801AEEE8u; dispatch(c,c->ctr); } // 801AEEE4
  goto L_801AF0CC; // 801AEEE8
L_801AEEEC:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AEEEC
  cmps(c,0,(int32_t)c->r[12],0); // 801AEEF0
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEEF4
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AEEF8
  c->r[3]=0u+0x00000000u; // 801AEEFC
  c->ctr=c->r[12]; // 801AEF00
  if (true) { c->lr=0x801AEF08u; dispatch(c,c->ctr); } // 801AEF04
  goto L_801AF0CC; // 801AEF08
L_801AEF0C:;
  cmps(c,0,(int32_t)c->r[0],6); // 801AEF0C
  if (!crb(c,2)) { goto L_801AEF8C; } // 801AEF10
  cmps(c,0,(int32_t)c->r[3],256); // 801AEF14
  if (!crb(c,2)) { goto L_801AEF6C; } // 801AEF18
  c->r[3]=c->r[31]+0x00000100u; // 801AEF1C
  c->lr=0x801AEF24u; f_802F047C(c); // 801AEF20
  c->r[0]=c->r[3]|c->r[3]; // 801AEF24
  c->r[6]=0u+0x801B0000u; // 801AEF28
  c->r[3]=R32(c->r[13]+0xFFFFACD0u); // 801AEF2C
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 801AEF30
  c->r[6]=c->r[6]+0xFFFFEC20u; // 801AEF34
  c->r[5]=0u+0x00000000u; // 801AEF38
  c->r[7]=0u+0x00000000u; // 801AEF3C
  c->lr=0x801AEF44u; f_801B0970(c); // 801AEF40
  cmps(c,0,(int32_t)c->r[3],0); // 801AEF44
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEF48
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AEF4C
  cmps(c,0,(int32_t)c->r[12],0); // 801AEF50
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEF54
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AEF58
  c->r[3]=0u+0x00000000u; // 801AEF5C
  c->ctr=c->r[12]; // 801AEF60
  if (true) { c->lr=0x801AEF68u; dispatch(c,c->ctr); } // 801AEF64
  goto L_801AF0CC; // 801AEF68
L_801AEF6C:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AEF6C
  cmps(c,0,(int32_t)c->r[12],0); // 801AEF70
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEF74
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AEF78
  c->r[3]=0u+0x00000000u; // 801AEF7C
  c->ctr=c->r[12]; // 801AEF80
  if (true) { c->lr=0x801AEF88u; dispatch(c,c->ctr); } // 801AEF84
  goto L_801AF0CC; // 801AEF88
L_801AEF8C:;
  cmps(c,0,(int32_t)c->r[0],7); // 801AEF8C
  if (!crb(c,2)) { goto L_801AF00C; } // 801AEF90
  c->r[3]=c->r[31]+0x00000100u; // 801AEF94
  c->lr=0x801AEF9Cu; f_802F047C(c); // 801AEF98
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801AEF9C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801AEFA0
  if (!crb(c,2)) { goto L_801AEFEC; } // 801AEFA4
  c->r[6]=0u+0x801B0000u; // 801AEFA8
  c->r[3]=R32(c->r[13]+0xFFFFACD0u); // 801AEFAC
  c->r[4]=c->r[31]+0x00000200u; // 801AEFB0
  c->r[5]=0u+0x00000100u; // 801AEFB4
  c->r[6]=c->r[6]+0xFFFFEC20u; // 801AEFB8
  c->r[7]=0u+0x00000000u; // 801AEFBC
  c->lr=0x801AEFC4u; f_801B0AF0(c); // 801AEFC0
  cmps(c,0,(int32_t)c->r[3],0); // 801AEFC4
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEFC8
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AEFCC
  cmps(c,0,(int32_t)c->r[12],0); // 801AEFD0
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEFD4
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AEFD8
  c->r[3]=0u+0x00000000u; // 801AEFDC
  c->ctr=c->r[12]; // 801AEFE0
  if (true) { c->lr=0x801AEFE8u; dispatch(c,c->ctr); } // 801AEFE4
  goto L_801AF0CC; // 801AEFE8
L_801AEFEC:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AEFEC
  cmps(c,0,(int32_t)c->r[12],0); // 801AEFF0
  if (crb(c,2)) { goto L_801AF0CC; } // 801AEFF4
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AEFF8
  c->r[3]=0u+0x00000000u; // 801AEFFC
  c->ctr=c->r[12]; // 801AF000
  if (true) { c->lr=0x801AF008u; dispatch(c,c->ctr); } // 801AF004
  goto L_801AF0CC; // 801AF008
L_801AF00C:;
  cmps(c,0,(int32_t)c->r[0],8); // 801AF00C
  if (!crb(c,2)) { goto L_801AF078; } // 801AF010
  cmps(c,0,(int32_t)c->r[3],256); // 801AF014
  if (!crb(c,2)) { goto L_801AF058; } // 801AF018
  c->r[4]=0u+0x801B0000u; // 801AF01C
  c->r[3]=R32(c->r[13]+0xFFFFACD0u); // 801AF020
  c->r[4]=c->r[4]+0xFFFFEC20u; // 801AF024
  c->r[5]=0u+0x00000000u; // 801AF028
  c->lr=0x801AF030u; f_801B0BB0(c); // 801AF02C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF030
  if (crb(c,2)) { goto L_801AF0CC; } // 801AF034
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AF038
  cmps(c,0,(int32_t)c->r[12],0); // 801AF03C
  if (crb(c,2)) { goto L_801AF0CC; } // 801AF040
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AF044
  c->r[3]=0u+0x00000000u; // 801AF048
  c->ctr=c->r[12]; // 801AF04C
  if (true) { c->lr=0x801AF054u; dispatch(c,c->ctr); } // 801AF050
  goto L_801AF0CC; // 801AF054
L_801AF058:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AF058
  cmps(c,0,(int32_t)c->r[12],0); // 801AF05C
  if (crb(c,2)) { goto L_801AF0CC; } // 801AF060
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AF064
  c->r[3]=0u+0x00000000u; // 801AF068
  c->ctr=c->r[12]; // 801AF06C
  if (true) { c->lr=0x801AF074u; dispatch(c,c->ctr); } // 801AF070
  goto L_801AF0CC; // 801AF074
L_801AF078:;
  cmps(c,0,(int32_t)c->r[0],9); // 801AF078
  if (!crb(c,2)) { goto L_801AF0CC; } // 801AF07C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF080
  if (!crb(c,2)) { goto L_801AF0B0; } // 801AF084
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AF088
  c->r[0]=0u+0xFFFFFF01u; // 801AF08C
  W32(c->r[13]+0xFFFFACD0u,c->r[0]); // 801AF090
  cmps(c,0,(int32_t)c->r[12],0); // 801AF094
  if (crb(c,2)) { goto L_801AF0CC; } // 801AF098
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AF09C
  c->r[3]=0u+0x00000001u; // 801AF0A0
  c->ctr=c->r[12]; // 801AF0A4
  if (true) { c->lr=0x801AF0ACu; dispatch(c,c->ctr); } // 801AF0A8
  goto L_801AF0CC; // 801AF0AC
L_801AF0B0:;
  c->r[12]=R32(c->r[13]+0xFFFFC3A0u); // 801AF0B0
  cmps(c,0,(int32_t)c->r[12],0); // 801AF0B4
  if (crb(c,2)) { goto L_801AF0CC; } // 801AF0B8
  c->r[4]=R32(c->r[13]+0xFFFFACD4u); // 801AF0BC
  c->r[3]=0u+0x00000000u; // 801AF0C0
  c->ctr=c->r[12]; // 801AF0C4
  if (true) { c->lr=0x801AF0CCu; dispatch(c,c->ctr); } // 801AF0C8
L_801AF0CC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801AF0CC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801AF0D0
  c->r[30]=R32(c->r[1]+0x00000088u); // 801AF0D4
  c->lr=c->r[0]; // 801AF0D8
  c->r[1]=c->r[1]+0x00000090u; // 801AF0DC
  return; // 801AF0E0
}

// __NANDShowErrorMessage
void f_801AF0F0(Ctx* __restrict c) {
  trace_call(0x801AF0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFCE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF0F0
  c->r[0]=c->lr; // 801AF0F4
  W32(c->r[1]+0x00000324u,c->r[0]); // 801AF0F8
  W32(c->r[1]+0x0000031Cu,c->r[31]); // 801AF0FC
  c->r[31]=c->r[3]|c->r[3]; // 801AF100
  W32(c->r[1]+0x00000318u,c->r[30]); // 801AF104
  c->r[30]=0u+0x00000000u; // 801AF108
  W32(c->r[1]+0x00000314u,c->r[29]); // 801AF10C
  c->r[29]=R32(c->r[2]+0xFFFFA560u); // 801AF110
  c->lr=0x801AF118u; f_801AA930(c); // 801AF114
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AF118
  if (!crb(c,2)) { goto L_801AF12C; } // 801AF11C
  c->r[3]=0u+0x00000001u; // 801AF120
  c->lr=0x801AF128u; f_801247B0(c); // 801AF124
  goto L_801AF134; // 801AF128
L_801AF12C:;
  c->r[3]=0u+0x00000000u; // 801AF12C
  c->lr=0x801AF134u; f_801247B0(c); // 801AF130
L_801AF134:;
  c->lr=0x801AF138u; f_801AAEF0(c); // 801AF134
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801AF138
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801AF13C
  cmpu(c,0,c->r[0],0x00000001u); // 801AF140
  if (!crb(c,1)) { goto L_801AF280; } // 801AF144
  cmps(c,0,(int32_t)c->r[3],2); // 801AF148
  if (crb(c,2)) { goto L_801AF1E8; } // 801AF14C
  c->r[3]=0u+0x80310000u; // 801AF150
  c->r[0]=0u+0x0000001Fu; // 801AF154
  c->r[3]=c->r[3]+0xFFFF9F30u; // 801AF158
  c->r[5]=c->r[1]+0x00000204u; // 801AF15C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 801AF160
  c->r[6]=0u+0x00000000u; // 801AF164
  c->ctr=c->r[0]; // 801AF168
  c->r[0]=c->r[0]|0x00000000u; // 801AF16C
L_801AF170:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801AF170
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801AF174
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AF178
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801AF17C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AF170; } // 801AF180
  c->r[0]=R32(c->r[4]+0x00000004u); // 801AF184
  W32(c->r[5]+0x00000004u,c->r[0]); // 801AF188
  goto L_801AF1D0; // 801AF18C
L_801AF190:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801AF190
  c->r[3]=c->r[1]+0x00000208u; // 801AF194
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801AF198
  c->r[3]=c->r[3]+c->r[4]; // 801AF19C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801AF1A0
  cmps(c,0,(int32_t)c->r[0],0); // 801AF1A4
  if (!crb(c,2)) { goto L_801AF1CC; } // 801AF1A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AF1AC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801AF1B0
  if (!crb(c,2)) { goto L_801AF1C4; } // 801AF1B4
  c->r[3]=c->r[1]+0x00000210u; // 801AF1B8
  c->r[31]=R32(c->r[3]+c->r[4]); // 801AF1BC
  goto L_801AF314; // 801AF1C0
L_801AF1C4:;
  c->r[6]=c->r[6]+0x00000001u; // 801AF1C4
  goto L_801AF1D0; // 801AF1C8
L_801AF1CC:;
  c->r[6]=c->r[6]+0x00000007u; // 801AF1CC
L_801AF1D0:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801AF1D0
  cmpu(c,0,c->r[0],0x00000015u); // 801AF1D4
  if (crb(c,0)) { IRQCHK(c); goto L_801AF190; } // 801AF1D8
  c->r[31]=0u+0x80310000u; // 801AF1DC
  c->r[31]=c->r[31]+0xFFFF9EF8u; // 801AF1E0
  goto L_801AF314; // 801AF1E4
L_801AF1E8:;
  c->r[3]=0u+0x80310000u; // 801AF1E8
  c->r[0]=0u+0x0000001Fu; // 801AF1EC
  c->r[3]=c->r[3]+0xFFFF9F30u; // 801AF1F0
  c->r[5]=c->r[1]+0x00000108u; // 801AF1F4
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 801AF1F8
  c->r[6]=0u+0x00000000u; // 801AF1FC
  c->ctr=c->r[0]; // 801AF200
  c->r[0]=c->r[0]|0x00000000u; // 801AF204
L_801AF208:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801AF208
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801AF20C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AF210
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801AF214
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AF208; } // 801AF218
  c->r[0]=R32(c->r[4]+0x00000004u); // 801AF21C
  W32(c->r[5]+0x00000004u,c->r[0]); // 801AF220
  goto L_801AF268; // 801AF224
L_801AF228:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801AF228
  c->r[3]=c->r[1]+0x0000010Cu; // 801AF22C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801AF230
  c->r[3]=c->r[3]+c->r[4]; // 801AF234
  c->r[0]=R32(c->r[3]+0x00000004u); // 801AF238
  cmps(c,0,(int32_t)c->r[0],1); // 801AF23C
  if (!crb(c,2)) { goto L_801AF264; } // 801AF240
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AF244
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801AF248
  if (!crb(c,2)) { goto L_801AF25C; } // 801AF24C
  c->r[3]=c->r[1]+0x00000114u; // 801AF250
  c->r[31]=R32(c->r[3]+c->r[4]); // 801AF254
  goto L_801AF314; // 801AF258
L_801AF25C:;
  c->r[6]=c->r[6]+0x00000001u; // 801AF25C
  goto L_801AF268; // 801AF260
L_801AF264:;
  c->r[6]=c->r[6]+0x00000007u; // 801AF264
L_801AF268:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801AF268
  cmpu(c,0,c->r[0],0x00000015u); // 801AF26C
  if (crb(c,0)) { IRQCHK(c); goto L_801AF228; } // 801AF270
  c->r[31]=0u+0x80310000u; // 801AF274
  c->r[31]=c->r[31]+0xFFFF9EF8u; // 801AF278
  goto L_801AF314; // 801AF27C
L_801AF280:;
  c->r[3]=0u+0x80310000u; // 801AF280
  c->r[0]=0u+0x0000001Fu; // 801AF284
  c->r[3]=c->r[3]+0xFFFF9F30u; // 801AF288
  c->r[5]=c->r[1]+0x0000000Cu; // 801AF28C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 801AF290
  c->r[6]=0u+0x00000000u; // 801AF294
  c->ctr=c->r[0]; // 801AF298
  c->r[0]=c->r[0]|0x00000000u; // 801AF29C
L_801AF2A0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801AF2A0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801AF2A4
  W32(c->r[5]+0x00000004u,c->r[3]); // 801AF2A8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801AF2AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AF2A0; } // 801AF2B0
  c->r[0]=R32(c->r[4]+0x00000004u); // 801AF2B4
  W32(c->r[5]+0x00000004u,c->r[0]); // 801AF2B8
  goto L_801AF300; // 801AF2BC
L_801AF2C0:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801AF2C0
  c->r[3]=c->r[1]+0x00000010u; // 801AF2C4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801AF2C8
  c->r[3]=c->r[3]+c->r[4]; // 801AF2CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801AF2D0
  cmps(c,0,(int32_t)c->r[0],2); // 801AF2D4
  if (!crb(c,2)) { goto L_801AF2FC; } // 801AF2D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801AF2DC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801AF2E0
  if (!crb(c,2)) { goto L_801AF2F4; } // 801AF2E4
  c->r[3]=c->r[1]+0x00000018u; // 801AF2E8
  c->r[31]=R32(c->r[3]+c->r[4]); // 801AF2EC
  goto L_801AF314; // 801AF2F0
L_801AF2F4:;
  c->r[6]=c->r[6]+0x00000001u; // 801AF2F4
  goto L_801AF300; // 801AF2F8
L_801AF2FC:;
  c->r[6]=c->r[6]+0x00000007u; // 801AF2FC
L_801AF300:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801AF300
  cmpu(c,0,c->r[0],0x00000015u); // 801AF304
  if (crb(c,0)) { IRQCHK(c); goto L_801AF2C0; } // 801AF308
  c->r[31]=0u+0x80310000u; // 801AF30C
  c->r[31]=c->r[31]+0xFFFF9EF8u; // 801AF310
L_801AF314:;
  c->lr=0x801AF318u; f_801AA930(c); // 801AF314
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801AF318
  cmpu(c,0,c->r[0],0x00000006u); // 801AF31C
  if (!crb(c,1)) { goto L_801AF32C; } // 801AF320
  c->r[5]=R32(c->r[31]+0x00000004u); // 801AF324
  goto L_801AF338; // 801AF328
L_801AF32C:;
  c->lr=0x801AF330u; f_801AA930(c); // 801AF32C
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801AF330
  c->r[5]=R32(c->r[31]+c->r[0]); // 801AF334
L_801AF338:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AF338
  c->r[3]=c->r[1]+0x0000000Cu; // 801AF33C
  c->r[4]=c->r[1]+0x00000008u; // 801AF340
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 801AF344
  c->lr=0x801AF34Cu; f_80123CE0(c); // 801AF348
  c->r[0]=R32(c->r[1]+0x00000324u); // 801AF34C
  c->r[31]=R32(c->r[1]+0x0000031Cu); // 801AF350
  c->r[30]=R32(c->r[1]+0x00000318u); // 801AF354
  c->r[29]=R32(c->r[1]+0x00000314u); // 801AF358
  c->lr=c->r[0]; // 801AF35C
  c->r[1]=c->r[1]+0x00000320u; // 801AF360
  return; // 801AF364
}

// NANDSetAutoErrorMessaging
void f_801AF370(Ctx* __restrict c) {
  trace_call(0x801AF370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF370
  c->r[0]=c->lr; // 801AF374
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF378
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF37C
  c->r[31]=c->r[3]|c->r[3]; // 801AF380
  c->lr=0x801AF388u; f_801251B0(c); // 801AF384
  c->r[5]=R32(c->r[13]+0xFFFFC3A8u); // 801AF388
  cmps(c,0,(int32_t)c->r[31],0); // 801AF38C
  c->r[4]=0u+0x00000000u; // 801AF390
  c->r[0]=0u-c->r[5]; // 801AF394
  c->r[0]=c->r[0]|c->r[5]; // 801AF398
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 801AF39C
  if (crb(c,2)) { goto L_801AF3AC; } // 801AF3A0
  c->r[4]=0u+0x801B0000u; // 801AF3A4
  c->r[4]=c->r[4]+0xFFFFF0F0u; // 801AF3A8
L_801AF3AC:;
  W32(c->r[13]+0xFFFFC3A8u,c->r[4]); // 801AF3AC
  c->lr=0x801AF3B4u; f_801251F0(c); // 801AF3B0
  c->r[3]=c->r[31]|c->r[31]; // 801AF3B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF3B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF3BC
  c->lr=c->r[0]; // 801AF3C0
  c->r[1]=c->r[1]+0x00000010u; // 801AF3C4
  return; // 801AF3C8
}

// __NANDPrintErrorMessage
void f_801AF3D0(Ctx* __restrict c) {
  trace_call(0x801AF3D0u);
  c->r[12]=R32(c->r[13]+0xFFFFC3A8u); // 801AF3D0
  cmps(c,0,(int32_t)c->r[12],0); // 801AF3D4
  if (crb(c,2)) return; // 801AF3D8
  c->ctr=c->r[12]; // 801AF3DC
  if (true) { dispatch(c,c->ctr); return; } // 801AF3E0
  return; // 801AF3E4
}

// ISFS_OpenLib
void f_801AF3F0(Ctx* __restrict c) {
  trace_call(0x801AF3F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF3F0
  c->r[0]=c->lr; // 801AF3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF3FC
  c->r[31]=0u+0x00000000u; // 801AF400
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AF404
  c->r[0]=R32(c->r[13]+0xFFFFC3B0u); // 801AF408
  cmps(c,0,(int32_t)c->r[0],0); // 801AF40C
  if (!crb(c,2)) { goto L_801AF424; } // 801AF410
  c->lr=0x801AF418u; f_801B1DD0(c); // 801AF414
  W32(c->r[13]+0xFFFFC3BCu,c->r[3]); // 801AF418
  c->lr=0x801AF420u; f_801B1DC0(c); // 801AF41C
  W32(c->r[13]+0xFFFFC3C0u,c->r[3]); // 801AF420
L_801AF424:;
  c->r[3]=R32(c->r[13]+0xFFFFC3BCu); // 801AF424
  c->r[0]=R32(c->r[13]+0xFFFFC3B0u); // 801AF428
  c->r[3]=c->r[3]+0x0000001Fu; // 801AF42C
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801AF430
  cmps(c,0,(int32_t)c->r[0],0); // 801AF434
  W32(c->r[13]+0xFFFFC3B4u,c->r[3]); // 801AF438
  if (!crb(c,2)) { goto L_801AF468; } // 801AF43C
  c->r[0]=R32(c->r[13]+0xFFFFC3C0u); // 801AF440
  c->r[4]=c->r[3]+0x00000040u; // 801AF444
  cmpu(c,0,c->r[4],c->r[0]); // 801AF448
  if (!crb(c,1)) { goto L_801AF468; } // 801AF44C
  c->r[3]=0u+0x803A0000u; // 801AF450
  c->r[3]=c->r[3]+0xFFFFBCB0u; // 801AF454
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AF458
  c->lr=0x801AF460u; f_80121B20(c); // 801AF45C
  c->r[31]=0u+0xFFFFFFEAu; // 801AF460
  goto L_801AF4FC; // 801AF464
L_801AF468:;
  c->r[4]=c->r[13]+0xFFFFACE0u; // 801AF468
  c->lr=0x801AF470u; f_802EE808(c); // 801AF46C
  c->r[3]=R32(c->r[13]+0xFFFFC3B4u); // 801AF470
  c->r[4]=0u+0x00000000u; // 801AF474
  c->lr=0x801AF47Cu; f_801B2710(c); // 801AF478
  cmps(c,0,(int32_t)c->r[3],0); // 801AF47C
  W32(c->r[13]+0xFFFFACD8u,c->r[3]); // 801AF480
  if (!crb(c,0)) { goto L_801AF490; } // 801AF484
  c->r[31]=c->r[3]|c->r[3]; // 801AF488
  goto L_801AF4FC; // 801AF48C
L_801AF490:;
  c->r[4]=R32(c->r[13]+0xFFFFC3B0u); // 801AF490
  c->r[30]=R32(c->r[13]+0xFFFFC3B4u); // 801AF494
  cmps(c,0,(int32_t)c->r[4],0); // 801AF498
  if (!crb(c,2)) { goto L_801AF4C8; } // 801AF49C
  c->r[0]=R32(c->r[13]+0xFFFFC3C0u); // 801AF4A0
  c->r[3]=c->r[30]+0x00001540u; // 801AF4A4
  cmpu(c,0,c->r[3],c->r[0]); // 801AF4A8
  if (!crb(c,1)) { goto L_801AF4C8; } // 801AF4AC
  c->r[3]=0u+0x803A0000u; // 801AF4B0
  c->r[3]=c->r[3]+0xFFFFBCB0u; // 801AF4B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801AF4B8
  c->lr=0x801AF4C0u; f_80121B20(c); // 801AF4BC
  c->r[31]=0u+0xFFFFFFEAu; // 801AF4C0
  goto L_801AF4FC; // 801AF4C4
L_801AF4C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801AF4C8
  if (!crb(c,2)) { goto L_801AF4E0; } // 801AF4CC
  c->r[3]=c->r[30]+0x00001540u; // 801AF4D0
  c->lr=0x801AF4D8u; f_801B1DE0(c); // 801AF4D4
  c->r[0]=0u+0x00000001u; // 801AF4D8
  W32(c->r[13]+0xFFFFC3B0u,c->r[0]); // 801AF4DC
L_801AF4E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801AF4E0
  c->r[4]=0u+0x00001540u; // 801AF4E4
  c->lr=0x801AF4ECu; f_801B3760(c); // 801AF4E8
  cmps(c,0,(int32_t)c->r[3],0); // 801AF4EC
  W32(c->r[13]+0xFFFFC3C4u,c->r[3]); // 801AF4F0
  if (!crb(c,0)) { goto L_801AF4FC; } // 801AF4F4
  c->r[31]=0u+0xFFFFFFEAu; // 801AF4F8
L_801AF4FC:;
  c->r[3]=c->r[31]|c->r[31]; // 801AF4FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF500
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AF504
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF508
  c->lr=c->r[0]; // 801AF50C
  c->r[1]=c->r[1]+0x00000010u; // 801AF510
  return; // 801AF514
}

// _isfsFuncCb
void f_801AF520(Ctx* __restrict c) {
  trace_call(0x801AF520u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF520
  c->r[0]=c->lr; // 801AF524
  cmps(c,1,(int32_t)c->r[3],0); // 801AF528
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF52C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF530
  c->r[31]=c->r[4]|c->r[4]; // 801AF534
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AF538
  c->r[30]=c->r[3]|c->r[3]; // 801AF53C
  if (crb(c,4)) { goto L_801AF64C; } // 801AF540
  c->r[0]=R32(c->r[4]+0x00000108u); // 801AF544
  cmpu(c,0,c->r[0],0x00000001u); // 801AF548
  if (crb(c,2)) { goto L_801AF574; } // 801AF54C
  cmpu(c,0,c->r[0],0x00000002u); // 801AF550
  if (crb(c,2)) { goto L_801AF588; } // 801AF554
  cmpu(c,0,c->r[0],0x00000003u); // 801AF558
  if (crb(c,2)) { goto L_801AF5AC; } // 801AF55C
  cmpu(c,0,c->r[0],0x00000004u); // 801AF560
  if (crb(c,2)) { goto L_801AF604; } // 801AF564
  cmpu(c,0,c->r[0],0x00000005u); // 801AF568
  if (crb(c,2)) { goto L_801AF63C; } // 801AF56C
  goto L_801AF64C; // 801AF570
L_801AF574:;
  if (!crb(c,6)) { goto L_801AF64C; } // 801AF574
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 801AF578
  c->r[5]=0u+0x0000001Cu; // 801AF57C
  c->lr=0x801AF584u; f_800043C4(c); // 801AF580
  goto L_801AF64C; // 801AF584
L_801AF588:;
  if (!crb(c,6)) { goto L_801AF64C; } // 801AF588
  c->r[0]=c->r[4]+0x0000003Fu; // 801AF58C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 801AF590
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AF594
  c->r[0]=c->r[4]+0x0000005Fu; // 801AF598
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AF59C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801AF5A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF5A4
  goto L_801AF64C; // 801AF5A8
L_801AF5AC:;
  if (!crb(c,6)) { goto L_801AF64C; } // 801AF5AC
  c->r[0]=c->r[4]+0x0000005Fu; // 801AF5B0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 801AF5B4
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AF5B8
  c->r[0]=R32(c->r[5]+0x00000000u); // 801AF5BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF5C0
  c->r[3]=R32(c->r[4]+0x00000110u); // 801AF5C4
  c->r[0]=R16(c->r[5]+0x00000004u); // 801AF5C8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AF5CC
  c->r[3]=R32(c->r[4]+0x00000114u); // 801AF5D0
  c->r[0]=R8(c->r[5]+0x00000049u); // 801AF5D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF5D8
  c->r[3]=R32(c->r[4]+0x00000118u); // 801AF5DC
  c->r[0]=R8(c->r[5]+0x00000046u); // 801AF5E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF5E4
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 801AF5E8
  c->r[0]=R8(c->r[5]+0x00000047u); // 801AF5EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF5F0
  c->r[3]=R32(c->r[4]+0x00000120u); // 801AF5F4
  c->r[0]=R8(c->r[5]+0x00000048u); // 801AF5F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF5FC
  goto L_801AF64C; // 801AF600
L_801AF604:;
  if (!crb(c,6)) { goto L_801AF64C; } // 801AF604
  c->r[0]=c->r[4]+0x0000003Fu; // 801AF608
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 801AF60C
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AF610
  c->r[0]=c->r[5]+0x0000005Fu; // 801AF614
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AF618
  c->r[5]=R32(c->r[6]+0x00000000u); // 801AF61C
  c->r[0]=c->r[6]+0x00000023u; // 801AF620
  W32(c->r[3]+0x00000000u,c->r[5]); // 801AF624
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AF628
  c->r[3]=R32(c->r[4]+0x00000110u); // 801AF62C
  c->r[0]=R32(c->r[5]+0x00000000u); // 801AF630
  W32(c->r[3]+0x00000000u,c->r[0]); // 801AF634
  goto L_801AF64C; // 801AF638
L_801AF63C:;
  if (!crb(c,6)) { goto L_801AF64C; } // 801AF63C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 801AF640
  c->r[5]=0u+0x00000008u; // 801AF644
  c->lr=0x801AF64Cu; f_800043C4(c); // 801AF648
L_801AF64C:;
  c->r[0]=0u+0x00000000u; // 801AF64C
  W32(c->r[13]+0xFFFFC3B8u,c->r[0]); // 801AF650
  c->r[12]=R32(c->r[31]+0x00000100u); // 801AF654
  cmps(c,0,(int32_t)c->r[12],0); // 801AF658
  if (crb(c,2)) { goto L_801AF670; } // 801AF65C
  c->r[3]=c->r[30]|c->r[30]; // 801AF660
  c->r[4]=R32(c->r[31]+0x00000104u); // 801AF664
  c->ctr=c->r[12]; // 801AF668
  if (true) { c->lr=0x801AF670u; dispatch(c,c->ctr); } // 801AF66C
L_801AF670:;
  cmps(c,0,(int32_t)c->r[31],0); // 801AF670
  if (crb(c,2)) { goto L_801AF684; } // 801AF674
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AF678
  c->r[4]=c->r[31]|c->r[31]; // 801AF67C
  c->lr=0x801AF684u; f_801B3AA0(c); // 801AF680
L_801AF684:;
  c->r[3]=c->r[30]|c->r[30]; // 801AF684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF688
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AF68C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF690
  c->lr=c->r[0]; // 801AF694
  c->r[1]=c->r[1]+0x00000010u; // 801AF698
  return; // 801AF69C
}

// fn_801AF6A0
void f_801AF6A0(Ctx* __restrict c) {
  trace_call(0x801AF6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF6A0
  c->r[0]=c->lr; // 801AF6A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF6A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF6AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF6B0
  c->r[30]=0u+0x00000000u; // 801AF6B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AF6B8
  c->r[29]=c->r[3]|c->r[3]; // 801AF6BC
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AF6C0
  cmps(c,0,(int32_t)c->r[0],0); // 801AF6C4
  if (crb(c,0)) { goto L_801AF6D4; } // 801AF6C8
  cmps(c,0,(int32_t)c->r[3],0); // 801AF6CC
  if (!crb(c,2)) { goto L_801AF6DC; } // 801AF6D0
L_801AF6D4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801AF6D4
  goto L_801AF73C; // 801AF6D8
L_801AF6DC:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AF6DC
  c->r[4]=0u+0x00000140u; // 801AF6E0
  c->r[5]=0u+0x00000020u; // 801AF6E4
  c->lr=0x801AF6ECu; f_801B3A90(c); // 801AF6E8
  cmps(c,0,(int32_t)c->r[3],0); // 801AF6EC
  c->r[30]=c->r[3]|c->r[3]; // 801AF6F0
  if (!crb(c,2)) { goto L_801AF700; } // 801AF6F4
  c->r[31]=0u+0xFFFFFFEAu; // 801AF6F8
  goto L_801AF73C; // 801AF6FC
L_801AF700:;
  W32(c->r[3]+0x0000010Cu,c->r[29]); // 801AF700
  c->r[7]=c->r[30]|c->r[30]; // 801AF704
  c->r[4]=0u+0x00000002u; // 801AF708
  c->r[5]=0u+0x00000000u; // 801AF70C
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AF710
  c->r[6]=0u+0x00000000u; // 801AF714
  c->r[8]=0u+0x0000001Cu; // 801AF718
  c->lr=0x801AF720u; f_801B2FF0(c); // 801AF71C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF720
  c->r[31]=c->r[3]|c->r[3]; // 801AF724
  if (!crb(c,2)) { goto L_801AF73C; } // 801AF728
  c->r[3]=c->r[29]|c->r[29]; // 801AF72C
  c->r[4]=c->r[30]|c->r[30]; // 801AF730
  c->r[5]=0u+0x0000001Cu; // 801AF734
  c->lr=0x801AF73Cu; f_800043C4(c); // 801AF738
L_801AF73C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AF73C
  if (crb(c,2)) { goto L_801AF754; } // 801AF740
  if (crb(c,2)) { goto L_801AF754; } // 801AF744
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AF748
  c->r[4]=c->r[30]|c->r[30]; // 801AF74C
  c->lr=0x801AF754u; f_801B3AA0(c); // 801AF750
L_801AF754:;
  c->r[3]=c->r[31]|c->r[31]; // 801AF754
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF758
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF75C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AF760
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF764
  c->lr=c->r[0]; // 801AF768
  c->r[1]=c->r[1]+0x00000020u; // 801AF76C
  return; // 801AF770
}

// fn_801AF780
void f_801AF780(Ctx* __restrict c) {
  trace_call(0x801AF780u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF780
  c->r[0]=c->lr; // 801AF784
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF788
  c->r[11]=c->r[1]+0x00000030u; // 801AF78C
  c->lr=0x801AF794u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF790
  cmps(c,0,(int32_t)c->r[3],0); // 801AF794
  c->r[25]=c->r[3]|c->r[3]; // 801AF798
  c->r[26]=c->r[4]|c->r[4]; // 801AF79C
  c->r[27]=c->r[5]|c->r[5]; // 801AF7A0
  c->r[28]=c->r[6]|c->r[6]; // 801AF7A4
  c->r[29]=c->r[7]|c->r[7]; // 801AF7A8
  c->r[30]=0u+0x00000000u; // 801AF7AC
  if (crb(c,2)) { goto L_801AF7D4; } // 801AF7B0
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AF7B4
  cmps(c,0,(int32_t)c->r[0],0); // 801AF7B8
  if (crb(c,0)) { goto L_801AF7D4; } // 801AF7BC
  c->r[4]=0u+0x00000040u; // 801AF7C0
  c->lr=0x801AF7C8u; f_801B1DF0(c); // 801AF7C4
  cmpu(c,0,c->r[3],0x00000040u); // 801AF7C8
  c->r[31]=c->r[3]|c->r[3]; // 801AF7CC
  if (!crb(c,2)) { goto L_801AF7DC; } // 801AF7D0
L_801AF7D4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801AF7D4
  goto L_801AF840; // 801AF7D8
L_801AF7DC:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AF7DC
  c->r[4]=0u+0x00000140u; // 801AF7E0
  c->r[5]=0u+0x00000020u; // 801AF7E4
  c->lr=0x801AF7ECu; f_801B3A90(c); // 801AF7E8
  cmps(c,0,(int32_t)c->r[3],0); // 801AF7EC
  c->r[30]=c->r[3]|c->r[3]; // 801AF7F0
  if (!crb(c,2)) { goto L_801AF800; } // 801AF7F4
  c->r[31]=0u+0xFFFFFFEAu; // 801AF7F8
  goto L_801AF840; // 801AF7FC
L_801AF800:;
  c->r[4]=c->r[25]|c->r[25]; // 801AF800
  c->r[5]=c->r[31]+0x00000001u; // 801AF804
  c->r[3]=c->r[3]+0x00000006u; // 801AF808
  c->lr=0x801AF810u; f_800043C4(c); // 801AF80C
  W8(c->r[30]+0x00000049u,c->r[26]); // 801AF810
  c->r[5]=c->r[30]|c->r[30]; // 801AF814
  c->r[4]=0u+0x00000003u; // 801AF818
  c->r[6]=0u+0x0000004Cu; // 801AF81C
  W8(c->r[30]+0x00000046u,c->r[27]); // 801AF820
  c->r[7]=0u+0x00000000u; // 801AF824
  c->r[8]=0u+0x00000000u; // 801AF828
  W8(c->r[30]+0x00000047u,c->r[28]); // 801AF82C
  W8(c->r[30]+0x00000048u,c->r[29]); // 801AF830
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AF834
  c->lr=0x801AF83Cu; f_801B2FF0(c); // 801AF838
  c->r[31]=c->r[3]|c->r[3]; // 801AF83C
L_801AF840:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AF840
  if (crb(c,2)) { goto L_801AF858; } // 801AF844
  if (crb(c,2)) { goto L_801AF858; } // 801AF848
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AF84C
  c->r[4]=c->r[30]|c->r[30]; // 801AF850
  c->lr=0x801AF858u; f_801B3AA0(c); // 801AF854
L_801AF858:;
  c->r[11]=c->r[1]+0x00000030u; // 801AF858
  c->r[3]=c->r[31]|c->r[31]; // 801AF85C
  c->lr=0x801AF864u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF860
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF864
  c->lr=c->r[0]; // 801AF868
  c->r[1]=c->r[1]+0x00000030u; // 801AF86C
  return; // 801AF870
}

// fn_801AF880
void f_801AF880(Ctx* __restrict c) {
  trace_call(0x801AF880u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF880
  c->r[0]=c->lr; // 801AF884
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF888
  c->r[11]=c->r[1]+0x00000030u; // 801AF88C
  c->lr=0x801AF894u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF890
  cmps(c,0,(int32_t)c->r[3],0); // 801AF894
  c->r[23]=c->r[3]|c->r[3]; // 801AF898
  c->r[24]=c->r[4]|c->r[4]; // 801AF89C
  c->r[25]=c->r[5]|c->r[5]; // 801AF8A0
  c->r[26]=c->r[6]|c->r[6]; // 801AF8A4
  c->r[27]=c->r[7]|c->r[7]; // 801AF8A8
  c->r[28]=c->r[8]|c->r[8]; // 801AF8AC
  c->r[29]=c->r[9]|c->r[9]; // 801AF8B0
  if (crb(c,2)) { goto L_801AF8D8; } // 801AF8B4
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AF8B8
  cmps(c,0,(int32_t)c->r[0],0); // 801AF8BC
  if (crb(c,0)) { goto L_801AF8D8; } // 801AF8C0
  c->r[4]=0u+0x00000040u; // 801AF8C4
  c->lr=0x801AF8CCu; f_801B1DF0(c); // 801AF8C8
  cmpu(c,0,c->r[3],0x00000040u); // 801AF8CC
  c->r[31]=c->r[3]|c->r[3]; // 801AF8D0
  if (!crb(c,2)) { goto L_801AF8E0; } // 801AF8D4
L_801AF8D8:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801AF8D8
  goto L_801AF95C; // 801AF8DC
L_801AF8E0:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AF8E0
  c->r[4]=0u+0x00000140u; // 801AF8E4
  c->r[5]=0u+0x00000020u; // 801AF8E8
  c->lr=0x801AF8F0u; f_801B3A90(c); // 801AF8EC
  cmps(c,0,(int32_t)c->r[3],0); // 801AF8F0
  c->r[30]=c->r[3]|c->r[3]; // 801AF8F4
  if (!crb(c,2)) { goto L_801AF904; } // 801AF8F8
  c->r[3]=0u+0xFFFFFF8Au; // 801AF8FC
  goto L_801AF95C; // 801AF900
L_801AF904:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 801AF904
  c->r[0]=0u+0x00000000u; // 801AF908
  c->r[4]=c->r[23]|c->r[23]; // 801AF90C
  c->r[5]=c->r[31]+0x00000001u; // 801AF910
  W32(c->r[3]+0x00000104u,c->r[29]); // 801AF914
  W32(c->r[3]+0x00000108u,c->r[0]); // 801AF918
  c->r[3]=c->r[3]+0x00000006u; // 801AF91C
  c->lr=0x801AF924u; f_800043C4(c); // 801AF920
  W8(c->r[30]+0x00000049u,c->r[24]); // 801AF924
  c->r[9]=0u+0x801B0000u; // 801AF928
  c->r[5]=c->r[30]|c->r[30]; // 801AF92C
  c->r[10]=c->r[30]|c->r[30]; // 801AF930
  W8(c->r[30]+0x00000046u,c->r[25]); // 801AF934
  c->r[9]=c->r[9]+0xFFFFF520u; // 801AF938
  c->r[4]=0u+0x00000003u; // 801AF93C
  c->r[6]=0u+0x0000004Cu; // 801AF940
  W8(c->r[30]+0x00000047u,c->r[26]); // 801AF944
  c->r[7]=0u+0x00000000u; // 801AF948
  c->r[8]=0u+0x00000000u; // 801AF94C
  W8(c->r[30]+0x00000048u,c->r[27]); // 801AF950
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AF954
  c->lr=0x801AF95Cu; f_801B2EB0(c); // 801AF958
L_801AF95C:;
  c->r[11]=c->r[1]+0x00000030u; // 801AF95C
  c->lr=0x801AF964u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AF960
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF964
  c->lr=c->r[0]; // 801AF968
  c->r[1]=c->r[1]+0x00000030u; // 801AF96C
  return; // 801AF970
}

// ISFS_ReadDir
void f_801AF980(Ctx* __restrict c) {
  trace_call(0x801AF980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF980
  c->r[0]=c->lr; // 801AF984
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF988
  c->r[11]=c->r[1]+0x00000020u; // 801AF98C
  c->lr=0x801AF994u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AF990
  cmps(c,0,(int32_t)c->r[3],0); // 801AF994
  c->r[26]=c->r[3]|c->r[3]; // 801AF998
  c->r[27]=c->r[4]|c->r[4]; // 801AF99C
  c->r[28]=c->r[5]|c->r[5]; // 801AF9A0
  c->r[29]=0u+0x00000000u; // 801AF9A4
  if (crb(c,2)) { goto L_801AF9DC; } // 801AF9A8
  cmps(c,0,(int32_t)c->r[5],0); // 801AF9AC
  if (crb(c,2)) { goto L_801AF9DC; } // 801AF9B0
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AF9B4
  cmps(c,0,(int32_t)c->r[0],0); // 801AF9B8
  if (crb(c,0)) { goto L_801AF9DC; } // 801AF9BC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AF9C0
  if (!crb(c,2)) { goto L_801AF9DC; } // 801AF9C4
  c->r[4]=0u+0x00000040u; // 801AF9C8
  c->lr=0x801AF9D0u; f_801B1DF0(c); // 801AF9CC
  cmpu(c,0,c->r[3],0x00000040u); // 801AF9D0
  c->r[31]=c->r[3]|c->r[3]; // 801AF9D4
  if (!crb(c,2)) { goto L_801AF9E4; } // 801AF9D8
L_801AF9DC:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801AF9DC
  goto L_801AFAA0; // 801AF9E0
L_801AF9E4:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AF9E4
  c->r[4]=0u+0x00000140u; // 801AF9E8
  c->r[5]=0u+0x00000020u; // 801AF9EC
  c->lr=0x801AF9F4u; f_801B3A90(c); // 801AF9F0
  cmps(c,0,(int32_t)c->r[3],0); // 801AF9F4
  c->r[29]=c->r[3]|c->r[3]; // 801AF9F8
  if (!crb(c,2)) { goto L_801AFA08; } // 801AF9FC
  c->r[31]=0u+0xFFFFFFEAu; // 801AFA00
  goto L_801AFAA0; // 801AFA04
L_801AFA08:;
  c->r[0]=c->r[3]+0x0000003Fu; // 801AFA08
  c->r[4]=c->r[26]|c->r[26]; // 801AFA0C
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AFA10
  c->r[5]=c->r[31]+0x00000001u; // 801AFA14
  c->r[3]=c->r[30]|c->r[30]; // 801AFA18
  c->lr=0x801AFA20u; f_800043C4(c); // 801AFA1C
  W32(c->r[29]+0x00000000u,c->r[30]); // 801AFA20
  c->r[3]=0u+0x00000040u; // 801AFA24
  c->r[0]=c->r[30]+0x0000005Fu; // 801AFA28
  cmps(c,0,(int32_t)c->r[27],0); // 801AFA2C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801AFA30
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AFA34
  c->r[3]=0u+0x00000004u; // 801AFA38
  W32(c->r[29]+0x00000008u,c->r[30]); // 801AFA3C
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 801AFA40
  if (crb(c,2)) { goto L_801AFA74; } // 801AFA44
  c->r[0]=R32(c->r[28]+0x00000000u); // 801AFA48
  c->r[5]=0u+0x00000002u; // 801AFA4C
  W32(c->r[30]+0x00000000u,c->r[0]); // 801AFA50
  c->r[6]=0u+0x00000002u; // 801AFA54
  W32(c->r[29]+0x00000010u,c->r[27]); // 801AFA58
  c->r[0]=R32(c->r[28]+0x00000000u); // 801AFA5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 801AFA60
  W32(c->r[29]+0x00000014u,c->r[0]); // 801AFA64
  W32(c->r[29]+0x00000018u,c->r[30]); // 801AFA68
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 801AFA6C
  goto L_801AFA7C; // 801AFA70
L_801AFA74:;
  c->r[5]=0u+0x00000001u; // 801AFA74
  c->r[6]=0u+0x00000001u; // 801AFA78
L_801AFA7C:;
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AFA7C
  c->r[7]=c->r[29]|c->r[29]; // 801AFA80
  c->r[4]=0u+0x00000004u; // 801AFA84
  c->lr=0x801AFA8Cu; f_801B3350(c); // 801AFA88
  cmps(c,0,(int32_t)c->r[3],0); // 801AFA8C
  c->r[31]=c->r[3]|c->r[3]; // 801AFA90
  if (!crb(c,2)) { goto L_801AFAA0; } // 801AFA94
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AFA98
  W32(c->r[28]+0x00000000u,c->r[0]); // 801AFA9C
L_801AFAA0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AFAA0
  if (crb(c,2)) { goto L_801AFAB8; } // 801AFAA4
  if (crb(c,2)) { goto L_801AFAB8; } // 801AFAA8
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AFAAC
  c->r[4]=c->r[29]|c->r[29]; // 801AFAB0
  c->lr=0x801AFAB8u; f_801B3AA0(c); // 801AFAB4
L_801AFAB8:;
  c->r[11]=c->r[1]+0x00000020u; // 801AFAB8
  c->r[3]=c->r[31]|c->r[31]; // 801AFABC
  c->lr=0x801AFAC4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFAC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFAC4
  c->lr=c->r[0]; // 801AFAC8
  c->r[1]=c->r[1]+0x00000020u; // 801AFACC
  return; // 801AFAD0
}

// ISFS_ReadDirAsync
void f_801AFAE0(Ctx* __restrict c) {
  trace_call(0x801AFAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFAE0
  c->r[0]=c->lr; // 801AFAE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AFAE8
  c->r[11]=c->r[1]+0x00000030u; // 801AFAEC
  c->lr=0x801AFAF4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFAF0
  cmps(c,0,(int32_t)c->r[3],0); // 801AFAF4
  c->r[25]=c->r[3]|c->r[3]; // 801AFAF8
  c->r[26]=c->r[4]|c->r[4]; // 801AFAFC
  c->r[27]=c->r[5]|c->r[5]; // 801AFB00
  c->r[28]=c->r[6]|c->r[6]; // 801AFB04
  c->r[29]=c->r[7]|c->r[7]; // 801AFB08
  if (crb(c,2)) { goto L_801AFB40; } // 801AFB0C
  cmps(c,0,(int32_t)c->r[5],0); // 801AFB10
  if (crb(c,2)) { goto L_801AFB40; } // 801AFB14
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AFB18
  cmps(c,0,(int32_t)c->r[0],0); // 801AFB1C
  if (crb(c,0)) { goto L_801AFB40; } // 801AFB20
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801AFB24
  if (!crb(c,2)) { goto L_801AFB40; } // 801AFB28
  c->r[4]=0u+0x00000040u; // 801AFB2C
  c->lr=0x801AFB34u; f_801B1DF0(c); // 801AFB30
  cmpu(c,0,c->r[3],0x00000040u); // 801AFB34
  c->r[31]=c->r[3]|c->r[3]; // 801AFB38
  if (!crb(c,2)) { goto L_801AFB48; } // 801AFB3C
L_801AFB40:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801AFB40
  goto L_801AFC10; // 801AFB44
L_801AFB48:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AFB48
  c->r[4]=0u+0x00000140u; // 801AFB4C
  c->r[5]=0u+0x00000020u; // 801AFB50
  c->lr=0x801AFB58u; f_801B3A90(c); // 801AFB54
  cmps(c,0,(int32_t)c->r[3],0); // 801AFB58
  c->r[30]=c->r[3]|c->r[3]; // 801AFB5C
  if (!crb(c,2)) { goto L_801AFB6C; } // 801AFB60
  c->r[3]=0u+0xFFFFFF8Au; // 801AFB64
  goto L_801AFC10; // 801AFB68
L_801AFB6C:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 801AFB6C
  c->r[6]=0u+0x00000002u; // 801AFB70
  c->r[0]=c->r[3]+0x0000003Fu; // 801AFB74
  c->r[4]=c->r[25]|c->r[25]; // 801AFB78
  W32(c->r[3]+0x00000104u,c->r[29]); // 801AFB7C
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AFB80
  c->r[5]=c->r[31]+0x00000001u; // 801AFB84
  W32(c->r[3]+0x00000108u,c->r[6]); // 801AFB88
  W32(c->r[3]+0x0000010Cu,c->r[27]); // 801AFB8C
  c->r[3]=c->r[29]|c->r[29]; // 801AFB90
  c->lr=0x801AFB98u; f_800043C4(c); // 801AFB94
  W32(c->r[30]+0x00000000u,c->r[29]); // 801AFB98
  c->r[3]=0u+0x00000040u; // 801AFB9C
  c->r[0]=c->r[29]+0x0000005Fu; // 801AFBA0
  cmps(c,0,(int32_t)c->r[26],0); // 801AFBA4
  W32(c->r[30]+0x00000004u,c->r[3]); // 801AFBA8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AFBAC
  c->r[3]=0u+0x00000004u; // 801AFBB0
  W32(c->r[30]+0x00000008u,c->r[4]); // 801AFBB4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 801AFBB8
  if (crb(c,2)) { goto L_801AFBEC; } // 801AFBBC
  c->r[0]=R32(c->r[27]+0x00000000u); // 801AFBC0
  c->r[5]=0u+0x00000002u; // 801AFBC4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801AFBC8
  c->r[6]=0u+0x00000002u; // 801AFBCC
  W32(c->r[30]+0x00000010u,c->r[26]); // 801AFBD0
  c->r[0]=R32(c->r[27]+0x00000000u); // 801AFBD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 801AFBD8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801AFBDC
  W32(c->r[30]+0x00000018u,c->r[4]); // 801AFBE0
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 801AFBE4
  goto L_801AFBF4; // 801AFBE8
L_801AFBEC:;
  c->r[5]=0u+0x00000001u; // 801AFBEC
  c->r[6]=0u+0x00000001u; // 801AFBF0
L_801AFBF4:;
  c->r[8]=0u+0x801B0000u; // 801AFBF4
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AFBF8
  c->r[7]=c->r[30]|c->r[30]; // 801AFBFC
  c->r[9]=c->r[30]|c->r[30]; // 801AFC00
  c->r[8]=c->r[8]+0xFFFFF520u; // 801AFC04
  c->r[4]=0u+0x00000004u; // 801AFC08
  c->lr=0x801AFC10u; f_801B3260(c); // 801AFC0C
L_801AFC10:;
  c->r[11]=c->r[1]+0x00000030u; // 801AFC10
  c->lr=0x801AFC18u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFC14
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AFC18
  c->lr=c->r[0]; // 801AFC1C
  c->r[1]=c->r[1]+0x00000030u; // 801AFC20
  return; // 801AFC24
}

// ISFS_GetAttr
void f_801AFC30(Ctx* __restrict c) {
  trace_call(0x801AFC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFC30
  c->r[0]=c->lr; // 801AFC34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AFC38
  c->r[11]=c->r[1]+0x00000030u; // 801AFC3C
  c->lr=0x801AFC44u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFC40
  cmps(c,0,(int32_t)c->r[3],0); // 801AFC44
  c->r[30]=c->r[3]|c->r[3]; // 801AFC48
  c->r[23]=c->r[4]|c->r[4]; // 801AFC4C
  c->r[24]=c->r[5]|c->r[5]; // 801AFC50
  c->r[25]=c->r[6]|c->r[6]; // 801AFC54
  c->r[26]=c->r[7]|c->r[7]; // 801AFC58
  c->r[27]=c->r[8]|c->r[8]; // 801AFC5C
  c->r[28]=c->r[9]|c->r[9]; // 801AFC60
  c->r[29]=0u+0x00000000u; // 801AFC64
  if (crb(c,2)) { goto L_801AFCBC; } // 801AFC68
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AFC6C
  cmps(c,0,(int32_t)c->r[0],0); // 801AFC70
  if (crb(c,0)) { goto L_801AFCBC; } // 801AFC74
  c->r[4]=0u+0x00000040u; // 801AFC78
  c->lr=0x801AFC80u; f_801B1DF0(c); // 801AFC7C
  cmpu(c,0,c->r[3],0x00000040u); // 801AFC80
  c->r[31]=c->r[3]|c->r[3]; // 801AFC84
  if (crb(c,2)) { goto L_801AFCBC; } // 801AFC88
  cmps(c,0,(int32_t)c->r[23],0); // 801AFC8C
  if (crb(c,2)) { goto L_801AFCBC; } // 801AFC90
  cmps(c,0,(int32_t)c->r[24],0); // 801AFC94
  if (crb(c,2)) { goto L_801AFCBC; } // 801AFC98
  cmps(c,0,(int32_t)c->r[25],0); // 801AFC9C
  if (crb(c,2)) { goto L_801AFCBC; } // 801AFCA0
  cmps(c,0,(int32_t)c->r[26],0); // 801AFCA4
  if (crb(c,2)) { goto L_801AFCBC; } // 801AFCA8
  cmps(c,0,(int32_t)c->r[27],0); // 801AFCAC
  if (crb(c,2)) { goto L_801AFCBC; } // 801AFCB0
  cmps(c,0,(int32_t)c->r[28],0); // 801AFCB4
  if (!crb(c,2)) { goto L_801AFCC4; } // 801AFCB8
L_801AFCBC:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801AFCBC
  goto L_801AFD54; // 801AFCC0
L_801AFCC4:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AFCC4
  c->r[4]=0u+0x00000140u; // 801AFCC8
  c->r[5]=0u+0x00000020u; // 801AFCCC
  c->lr=0x801AFCD4u; f_801B3A90(c); // 801AFCD0
  cmps(c,0,(int32_t)c->r[3],0); // 801AFCD4
  c->r[29]=c->r[3]|c->r[3]; // 801AFCD8
  if (!crb(c,2)) { goto L_801AFCE8; } // 801AFCDC
  c->r[31]=0u+0xFFFFFFEAu; // 801AFCE0
  goto L_801AFD54; // 801AFCE4
L_801AFCE8:;
  c->r[4]=c->r[30]|c->r[30]; // 801AFCE8
  c->r[5]=c->r[31]+0x00000001u; // 801AFCEC
  c->lr=0x801AFCF4u; f_800043C4(c); // 801AFCF0
  c->r[0]=c->r[29]+0x0000005Fu; // 801AFCF4
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AFCF8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AFCFC
  c->r[5]=c->r[29]|c->r[29]; // 801AFD00
  c->r[7]=c->r[30]|c->r[30]; // 801AFD04
  c->r[4]=0u+0x00000006u; // 801AFD08
  c->r[6]=0u+0x00000040u; // 801AFD0C
  c->r[8]=0u+0x0000004Cu; // 801AFD10
  c->lr=0x801AFD18u; f_801B2FF0(c); // 801AFD14
  cmps(c,0,(int32_t)c->r[3],0); // 801AFD18
  c->r[31]=c->r[3]|c->r[3]; // 801AFD1C
  if (!crb(c,2)) { goto L_801AFD54; } // 801AFD20
  c->r[0]=R32(c->r[30]+0x00000000u); // 801AFD24
  W32(c->r[23]+0x00000000u,c->r[0]); // 801AFD28
  c->r[0]=R16(c->r[30]+0x00000004u); // 801AFD2C
  W16(c->r[24]+0x00000000u,c->r[0]); // 801AFD30
  c->r[0]=R8(c->r[30]+0x00000049u); // 801AFD34
  W32(c->r[25]+0x00000000u,c->r[0]); // 801AFD38
  c->r[0]=R8(c->r[30]+0x00000046u); // 801AFD3C
  W32(c->r[26]+0x00000000u,c->r[0]); // 801AFD40
  c->r[0]=R8(c->r[30]+0x00000047u); // 801AFD44
  W32(c->r[27]+0x00000000u,c->r[0]); // 801AFD48
  c->r[0]=R8(c->r[30]+0x00000048u); // 801AFD4C
  W32(c->r[28]+0x00000000u,c->r[0]); // 801AFD50
L_801AFD54:;
  cmps(c,0,(int32_t)c->r[29],0); // 801AFD54
  if (crb(c,2)) { goto L_801AFD6C; } // 801AFD58
  if (crb(c,2)) { goto L_801AFD6C; } // 801AFD5C
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AFD60
  c->r[4]=c->r[29]|c->r[29]; // 801AFD64
  c->lr=0x801AFD6Cu; f_801B3AA0(c); // 801AFD68
L_801AFD6C:;
  c->r[11]=c->r[1]+0x00000030u; // 801AFD6C
  c->r[3]=c->r[31]|c->r[31]; // 801AFD70
  c->lr=0x801AFD78u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFD74
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AFD78
  c->lr=c->r[0]; // 801AFD7C
  c->r[1]=c->r[1]+0x00000030u; // 801AFD80
  return; // 801AFD84
}

// ISFS_GetAttrAsync
void f_801AFD90(Ctx* __restrict c) {
  trace_call(0x801AFD90u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFD90
  c->r[0]=c->lr; // 801AFD94
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AFD98
  c->r[11]=c->r[1]+0x00000040u; // 801AFD9C
  c->lr=0x801AFDA4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFDA0
  cmps(c,0,(int32_t)c->r[3],0); // 801AFDA4
  c->r[29]=R32(c->r[1]+0x00000048u); // 801AFDA8
  c->r[21]=c->r[3]|c->r[3]; // 801AFDAC
  c->r[22]=c->r[4]|c->r[4]; // 801AFDB0
  c->r[23]=c->r[5]|c->r[5]; // 801AFDB4
  c->r[24]=c->r[6]|c->r[6]; // 801AFDB8
  c->r[25]=c->r[7]|c->r[7]; // 801AFDBC
  c->r[26]=c->r[8]|c->r[8]; // 801AFDC0
  c->r[27]=c->r[9]|c->r[9]; // 801AFDC4
  c->r[28]=c->r[10]|c->r[10]; // 801AFDC8
  if (crb(c,2)) { goto L_801AFE20; } // 801AFDCC
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AFDD0
  cmps(c,0,(int32_t)c->r[0],0); // 801AFDD4
  if (crb(c,0)) { goto L_801AFE20; } // 801AFDD8
  c->r[4]=0u+0x00000040u; // 801AFDDC
  c->lr=0x801AFDE4u; f_801B1DF0(c); // 801AFDE0
  cmpu(c,0,c->r[3],0x00000040u); // 801AFDE4
  c->r[31]=c->r[3]|c->r[3]; // 801AFDE8
  if (crb(c,2)) { goto L_801AFE20; } // 801AFDEC
  cmps(c,0,(int32_t)c->r[22],0); // 801AFDF0
  if (crb(c,2)) { goto L_801AFE20; } // 801AFDF4
  cmps(c,0,(int32_t)c->r[23],0); // 801AFDF8
  if (crb(c,2)) { goto L_801AFE20; } // 801AFDFC
  cmps(c,0,(int32_t)c->r[24],0); // 801AFE00
  if (crb(c,2)) { goto L_801AFE20; } // 801AFE04
  cmps(c,0,(int32_t)c->r[25],0); // 801AFE08
  if (crb(c,2)) { goto L_801AFE20; } // 801AFE0C
  cmps(c,0,(int32_t)c->r[26],0); // 801AFE10
  if (crb(c,2)) { goto L_801AFE20; } // 801AFE14
  cmps(c,0,(int32_t)c->r[27],0); // 801AFE18
  if (!crb(c,2)) { goto L_801AFE28; } // 801AFE1C
L_801AFE20:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801AFE20
  goto L_801AFEAC; // 801AFE24
L_801AFE28:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AFE28
  c->r[4]=0u+0x00000140u; // 801AFE2C
  c->r[5]=0u+0x00000020u; // 801AFE30
  c->lr=0x801AFE38u; f_801B3A90(c); // 801AFE34
  cmps(c,0,(int32_t)c->r[3],0); // 801AFE38
  c->r[30]=c->r[3]|c->r[3]; // 801AFE3C
  if (!crb(c,2)) { goto L_801AFE4C; } // 801AFE40
  c->r[3]=0u+0xFFFFFF8Au; // 801AFE44
  goto L_801AFEAC; // 801AFE48
L_801AFE4C:;
  W32(c->r[3]+0x0000010Cu,c->r[22]); // 801AFE4C
  c->r[0]=0u+0x00000003u; // 801AFE50
  c->r[4]=c->r[21]|c->r[21]; // 801AFE54
  c->r[5]=c->r[31]+0x00000001u; // 801AFE58
  W32(c->r[3]+0x00000110u,c->r[23]); // 801AFE5C
  W32(c->r[3]+0x00000114u,c->r[24]); // 801AFE60
  W32(c->r[3]+0x00000118u,c->r[25]); // 801AFE64
  W32(c->r[3]+0x0000011Cu,c->r[26]); // 801AFE68
  W32(c->r[3]+0x00000120u,c->r[27]); // 801AFE6C
  W32(c->r[3]+0x00000100u,c->r[28]); // 801AFE70
  W32(c->r[3]+0x00000104u,c->r[29]); // 801AFE74
  W32(c->r[3]+0x00000108u,c->r[0]); // 801AFE78
  c->lr=0x801AFE80u; f_800043C4(c); // 801AFE7C
  c->r[0]=c->r[30]+0x0000005Fu; // 801AFE80
  c->r[9]=0u+0x801B0000u; // 801AFE84
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AFE88
  c->r[5]=c->r[30]|c->r[30]; // 801AFE8C
  c->r[10]=c->r[30]|c->r[30]; // 801AFE90
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801AFE94
  c->r[9]=c->r[9]+0xFFFFF520u; // 801AFE98
  c->r[4]=0u+0x00000006u; // 801AFE9C
  c->r[6]=0u+0x00000040u; // 801AFEA0
  c->r[8]=0u+0x0000004Cu; // 801AFEA4
  c->lr=0x801AFEACu; f_801B2EB0(c); // 801AFEA8
L_801AFEAC:;
  c->r[11]=c->r[1]+0x00000040u; // 801AFEAC
  c->lr=0x801AFEB4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFEB0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AFEB4
  c->lr=c->r[0]; // 801AFEB8
  c->r[1]=c->r[1]+0x00000040u; // 801AFEBC
  return; // 801AFEC0
}

// ISFS_Delete
void f_801AFED0(Ctx* __restrict c) {
  trace_call(0x801AFED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFED0
  c->r[0]=c->lr; // 801AFED4
  cmps(c,0,(int32_t)c->r[3],0); // 801AFED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFEDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AFEE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AFEE4
  c->r[30]=0u+0x00000000u; // 801AFEE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AFEEC
  c->r[29]=c->r[3]|c->r[3]; // 801AFEF0
  if (crb(c,2)) { goto L_801AFF18; } // 801AFEF4
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AFEF8
  cmps(c,0,(int32_t)c->r[0],0); // 801AFEFC
  if (crb(c,0)) { goto L_801AFF18; } // 801AFF00
  c->r[4]=0u+0x00000040u; // 801AFF04
  c->lr=0x801AFF0Cu; f_801B1DF0(c); // 801AFF08
  cmpu(c,0,c->r[3],0x00000040u); // 801AFF0C
  c->r[31]=c->r[3]|c->r[3]; // 801AFF10
  if (!crb(c,2)) { goto L_801AFF20; } // 801AFF14
L_801AFF18:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801AFF18
  goto L_801AFF70; // 801AFF1C
L_801AFF20:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AFF20
  c->r[4]=0u+0x00000140u; // 801AFF24
  c->r[5]=0u+0x00000020u; // 801AFF28
  c->lr=0x801AFF30u; f_801B3A90(c); // 801AFF2C
  cmps(c,0,(int32_t)c->r[3],0); // 801AFF30
  c->r[30]=c->r[3]|c->r[3]; // 801AFF34
  if (!crb(c,2)) { goto L_801AFF44; } // 801AFF38
  c->r[31]=0u+0xFFFFFFEAu; // 801AFF3C
  goto L_801AFF70; // 801AFF40
L_801AFF44:;
  c->r[4]=c->r[29]|c->r[29]; // 801AFF44
  c->r[5]=c->r[31]+0x00000001u; // 801AFF48
  c->lr=0x801AFF50u; f_800043C4(c); // 801AFF4C
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801AFF50
  c->r[5]=c->r[30]|c->r[30]; // 801AFF54
  c->r[4]=0u+0x00000007u; // 801AFF58
  c->r[6]=0u+0x00000040u; // 801AFF5C
  c->r[7]=0u+0x00000000u; // 801AFF60
  c->r[8]=0u+0x00000000u; // 801AFF64
  c->lr=0x801AFF6Cu; f_801B2FF0(c); // 801AFF68
  c->r[31]=c->r[3]|c->r[3]; // 801AFF6C
L_801AFF70:;
  cmps(c,0,(int32_t)c->r[30],0); // 801AFF70
  if (crb(c,2)) { goto L_801AFF88; } // 801AFF74
  if (crb(c,2)) { goto L_801AFF88; } // 801AFF78
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801AFF7C
  c->r[4]=c->r[30]|c->r[30]; // 801AFF80
  c->lr=0x801AFF88u; f_801B3AA0(c); // 801AFF84
L_801AFF88:;
  c->r[3]=c->r[31]|c->r[31]; // 801AFF88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AFF8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AFF90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AFF94
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFF98
  c->lr=c->r[0]; // 801AFF9C
  c->r[1]=c->r[1]+0x00000020u; // 801AFFA0
  return; // 801AFFA4
}

// ISFS_DeleteAsync
void f_801AFFB0(Ctx* __restrict c) {
  trace_call(0x801AFFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFFB0
  c->r[0]=c->lr; // 801AFFB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFFB8
  c->r[11]=c->r[1]+0x00000020u; // 801AFFBC
  c->lr=0x801AFFC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFFC0
  cmps(c,0,(int32_t)c->r[3],0); // 801AFFC4
  c->r[27]=c->r[3]|c->r[3]; // 801AFFC8
  c->r[28]=c->r[4]|c->r[4]; // 801AFFCC
  c->r[29]=c->r[5]|c->r[5]; // 801AFFD0
  if (crb(c,2)) { goto L_801AFFF8; } // 801AFFD4
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801AFFD8
  cmps(c,0,(int32_t)c->r[0],0); // 801AFFDC
  if (crb(c,0)) { goto L_801AFFF8; } // 801AFFE0
  c->r[4]=0u+0x00000040u; // 801AFFE4
  c->lr=0x801AFFECu; f_801B1DF0(c); // 801AFFE8
  cmpu(c,0,c->r[3],0x00000040u); // 801AFFEC
  c->r[31]=c->r[3]|c->r[3]; // 801AFFF0
  if (!crb(c,2)) { goto L_801B0000; } // 801AFFF4
L_801AFFF8:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801AFFF8
  goto L_801B0068; // 801AFFFC
L_801B0000:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0000
  c->r[4]=0u+0x00000140u; // 801B0004
  c->r[5]=0u+0x00000020u; // 801B0008
  c->lr=0x801B0010u; f_801B3A90(c); // 801B000C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0010
  c->r[30]=c->r[3]|c->r[3]; // 801B0014
  if (!crb(c,2)) { goto L_801B0024; } // 801B0018
  c->r[3]=0u+0xFFFFFF8Au; // 801B001C
  goto L_801B0068; // 801B0020
L_801B0024:;
  c->r[4]=c->r[27]|c->r[27]; // 801B0024
  c->r[5]=c->r[31]+0x00000001u; // 801B0028
  c->lr=0x801B0030u; f_800043C4(c); // 801B002C
  W32(c->r[30]+0x00000100u,c->r[28]); // 801B0030
  c->r[9]=0u+0x801B0000u; // 801B0034
  c->r[0]=0u+0x00000000u; // 801B0038
  c->r[5]=c->r[30]|c->r[30]; // 801B003C
  W32(c->r[30]+0x00000104u,c->r[29]); // 801B0040
  c->r[10]=c->r[30]|c->r[30]; // 801B0044
  c->r[9]=c->r[9]+0xFFFFF520u; // 801B0048
  c->r[4]=0u+0x00000007u; // 801B004C
  W32(c->r[30]+0x00000108u,c->r[0]); // 801B0050
  c->r[6]=0u+0x00000040u; // 801B0054
  c->r[7]=0u+0x00000000u; // 801B0058
  c->r[8]=0u+0x00000000u; // 801B005C
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B0060
  c->lr=0x801B0068u; f_801B2EB0(c); // 801B0064
L_801B0068:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0068
  c->lr=0x801B0070u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B006C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0070
  c->lr=c->r[0]; // 801B0074
  c->r[1]=c->r[1]+0x00000020u; // 801B0078
  return; // 801B007C
}

// ISFS_Rename
void f_801B0080(Ctx* __restrict c) {
  trace_call(0x801B0080u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0080
  c->r[0]=c->lr; // 801B0084
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0088
  c->r[11]=c->r[1]+0x00000020u; // 801B008C
  c->lr=0x801B0094u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0090
  cmps(c,0,(int32_t)c->r[3],0); // 801B0094
  c->r[27]=c->r[3]|c->r[3]; // 801B0098
  c->r[28]=c->r[4]|c->r[4]; // 801B009C
  c->r[29]=0u+0x00000000u; // 801B00A0
  if (crb(c,2)) { goto L_801B00E8; } // 801B00A4
  cmps(c,0,(int32_t)c->r[4],0); // 801B00A8
  if (crb(c,2)) { goto L_801B00E8; } // 801B00AC
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801B00B0
  cmps(c,0,(int32_t)c->r[0],0); // 801B00B4
  if (crb(c,0)) { goto L_801B00E8; } // 801B00B8
  c->r[4]=0u+0x00000040u; // 801B00BC
  c->lr=0x801B00C4u; f_801B1DF0(c); // 801B00C0
  cmpu(c,0,c->r[3],0x00000040u); // 801B00C4
  c->r[30]=c->r[3]|c->r[3]; // 801B00C8
  if (crb(c,2)) { goto L_801B00E8; } // 801B00CC
  c->r[3]=c->r[28]|c->r[28]; // 801B00D0
  c->r[4]=0u+0x00000040u; // 801B00D4
  c->lr=0x801B00DCu; f_801B1DF0(c); // 801B00D8
  cmpu(c,0,c->r[3],0x00000040u); // 801B00DC
  c->r[31]=c->r[3]|c->r[3]; // 801B00E0
  if (!crb(c,2)) { goto L_801B00F0; } // 801B00E4
L_801B00E8:;
  c->r[30]=0u+0xFFFFFF9Bu; // 801B00E8
  goto L_801B0150; // 801B00EC
L_801B00F0:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B00F0
  c->r[4]=0u+0x00000140u; // 801B00F4
  c->r[5]=0u+0x00000020u; // 801B00F8
  c->lr=0x801B0100u; f_801B3A90(c); // 801B00FC
  cmps(c,0,(int32_t)c->r[3],0); // 801B0100
  c->r[29]=c->r[3]|c->r[3]; // 801B0104
  if (!crb(c,2)) { goto L_801B0114; } // 801B0108
  c->r[30]=0u+0xFFFFFFEAu; // 801B010C
  goto L_801B0150; // 801B0110
L_801B0114:;
  c->r[4]=c->r[27]|c->r[27]; // 801B0114
  c->r[5]=c->r[30]+0x00000001u; // 801B0118
  c->lr=0x801B0120u; f_800043C4(c); // 801B011C
  c->r[4]=c->r[28]|c->r[28]; // 801B0120
  c->r[3]=c->r[29]+0x00000040u; // 801B0124
  c->r[5]=c->r[31]+0x00000001u; // 801B0128
  c->lr=0x801B0130u; f_800043C4(c); // 801B012C
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B0130
  c->r[5]=c->r[29]|c->r[29]; // 801B0134
  c->r[4]=0u+0x00000008u; // 801B0138
  c->r[6]=0u+0x00000080u; // 801B013C
  c->r[7]=0u+0x00000000u; // 801B0140
  c->r[8]=0u+0x00000000u; // 801B0144
  c->lr=0x801B014Cu; f_801B2FF0(c); // 801B0148
  c->r[30]=c->r[3]|c->r[3]; // 801B014C
L_801B0150:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B0150
  if (crb(c,2)) { goto L_801B0168; } // 801B0154
  if (crb(c,2)) { goto L_801B0168; } // 801B0158
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B015C
  c->r[4]=c->r[29]|c->r[29]; // 801B0160
  c->lr=0x801B0168u; f_801B3AA0(c); // 801B0164
L_801B0168:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0168
  c->r[3]=c->r[30]|c->r[30]; // 801B016C
  c->lr=0x801B0174u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0170
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0174
  c->lr=c->r[0]; // 801B0178
  c->r[1]=c->r[1]+0x00000020u; // 801B017C
  return; // 801B0180
}

// ISFS_RenameAsync
void f_801B0190(Ctx* __restrict c) {
  trace_call(0x801B0190u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0190
  c->r[0]=c->lr; // 801B0194
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0198
  c->r[11]=c->r[1]+0x00000030u; // 801B019C
  c->lr=0x801B01A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B01A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B01A4
  c->r[25]=c->r[3]|c->r[3]; // 801B01A8
  c->r[26]=c->r[4]|c->r[4]; // 801B01AC
  c->r[27]=c->r[5]|c->r[5]; // 801B01B0
  c->r[28]=c->r[6]|c->r[6]; // 801B01B4
  if (crb(c,2)) { goto L_801B01FC; } // 801B01B8
  cmps(c,0,(int32_t)c->r[4],0); // 801B01BC
  if (crb(c,2)) { goto L_801B01FC; } // 801B01C0
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801B01C4
  cmps(c,0,(int32_t)c->r[0],0); // 801B01C8
  if (crb(c,0)) { goto L_801B01FC; } // 801B01CC
  c->r[4]=0u+0x00000040u; // 801B01D0
  c->lr=0x801B01D8u; f_801B1DF0(c); // 801B01D4
  cmpu(c,0,c->r[3],0x00000040u); // 801B01D8
  c->r[30]=c->r[3]|c->r[3]; // 801B01DC
  if (crb(c,2)) { goto L_801B01FC; } // 801B01E0
  c->r[3]=c->r[26]|c->r[26]; // 801B01E4
  c->r[4]=0u+0x00000040u; // 801B01E8
  c->lr=0x801B01F0u; f_801B1DF0(c); // 801B01EC
  cmpu(c,0,c->r[3],0x00000040u); // 801B01F0
  c->r[31]=c->r[3]|c->r[3]; // 801B01F4
  if (!crb(c,2)) { goto L_801B0204; } // 801B01F8
L_801B01FC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B01FC
  goto L_801B027C; // 801B0200
L_801B0204:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0204
  c->r[4]=0u+0x00000140u; // 801B0208
  c->r[5]=0u+0x00000020u; // 801B020C
  c->lr=0x801B0214u; f_801B3A90(c); // 801B0210
  cmps(c,0,(int32_t)c->r[3],0); // 801B0214
  c->r[29]=c->r[3]|c->r[3]; // 801B0218
  if (!crb(c,2)) { goto L_801B0228; } // 801B021C
  c->r[3]=0u+0xFFFFFF8Au; // 801B0220
  goto L_801B027C; // 801B0224
L_801B0228:;
  W32(c->r[3]+0x00000100u,c->r[27]); // 801B0228
  c->r[0]=0u+0x00000000u; // 801B022C
  c->r[4]=c->r[25]|c->r[25]; // 801B0230
  c->r[5]=c->r[30]+0x00000001u; // 801B0234
  W32(c->r[3]+0x00000104u,c->r[28]); // 801B0238
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B023C
  c->lr=0x801B0244u; f_800043C4(c); // 801B0240
  c->r[4]=c->r[26]|c->r[26]; // 801B0244
  c->r[3]=c->r[29]+0x00000040u; // 801B0248
  c->r[5]=c->r[31]+0x00000001u; // 801B024C
  c->lr=0x801B0254u; f_800043C4(c); // 801B0250
  c->r[9]=0u+0x801B0000u; // 801B0254
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B0258
  c->r[5]=c->r[29]|c->r[29]; // 801B025C
  c->r[10]=c->r[29]|c->r[29]; // 801B0260
  c->r[9]=c->r[9]+0xFFFFF520u; // 801B0264
  c->r[4]=0u+0x00000008u; // 801B0268
  c->r[6]=0u+0x00000080u; // 801B026C
  c->r[7]=0u+0x00000000u; // 801B0270
  c->r[8]=0u+0x00000000u; // 801B0274
  c->lr=0x801B027Cu; f_801B2EB0(c); // 801B0278
L_801B027C:;
  c->r[11]=c->r[1]+0x00000030u; // 801B027C
  c->lr=0x801B0284u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0280
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B0284
  c->lr=c->r[0]; // 801B0288
  c->r[1]=c->r[1]+0x00000030u; // 801B028C
  return; // 801B0290
}

// fn_801B02A0
void f_801B02A0(Ctx* __restrict c) {
  trace_call(0x801B02A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B02A0
  c->r[0]=c->lr; // 801B02A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B02A8
  c->r[11]=c->r[1]+0x00000020u; // 801B02AC
  c->lr=0x801B02B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B02B0
  cmps(c,0,(int32_t)c->r[3],0); // 801B02B4
  c->r[30]=c->r[3]|c->r[3]; // 801B02B8
  c->r[26]=c->r[4]|c->r[4]; // 801B02BC
  c->r[27]=c->r[5]|c->r[5]; // 801B02C0
  c->r[28]=0u+0x00000000u; // 801B02C4
  if (crb(c,2)) { goto L_801B02FC; } // 801B02C8
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801B02CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B02D0
  if (crb(c,0)) { goto L_801B02FC; } // 801B02D4
  cmps(c,0,(int32_t)c->r[4],0); // 801B02D8
  if (crb(c,2)) { goto L_801B02FC; } // 801B02DC
  cmps(c,0,(int32_t)c->r[5],0); // 801B02E0
  if (crb(c,2)) { goto L_801B02FC; } // 801B02E4
  c->r[4]=0u+0x00000040u; // 801B02E8
  c->lr=0x801B02F0u; f_801B1DF0(c); // 801B02EC
  cmpu(c,0,c->r[3],0x00000040u); // 801B02F0
  c->r[31]=c->r[3]|c->r[3]; // 801B02F4
  if (!crb(c,2)) { goto L_801B0304; } // 801B02F8
L_801B02FC:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801B02FC
  goto L_801B03A4; // 801B0300
L_801B0304:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0304
  c->r[4]=0u+0x00000140u; // 801B0308
  c->r[5]=0u+0x00000020u; // 801B030C
  c->lr=0x801B0314u; f_801B3A90(c); // 801B0310
  cmps(c,0,(int32_t)c->r[3],0); // 801B0314
  c->r[28]=c->r[3]|c->r[3]; // 801B0318
  if (!crb(c,2)) { goto L_801B0328; } // 801B031C
  c->r[31]=0u+0xFFFFFFEAu; // 801B0320
  goto L_801B03A4; // 801B0324
L_801B0328:;
  c->r[0]=c->r[3]+0x00000037u; // 801B0328
  c->r[4]=c->r[30]|c->r[30]; // 801B032C
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B0330
  c->r[5]=c->r[31]+0x00000001u; // 801B0334
  c->r[3]=c->r[29]|c->r[29]; // 801B0338
  c->lr=0x801B0340u; f_800043C4(c); // 801B033C
  W32(c->r[28]+0x00000000u,c->r[29]); // 801B0340
  c->r[4]=0u+0x00000040u; // 801B0344
  c->r[3]=c->r[29]+0x0000005Fu; // 801B0348
  c->r[0]=0u+0x00000004u; // 801B034C
  W32(c->r[28]+0x00000004u,c->r[4]); // 801B0350
  c->r[30]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801B0354
  c->r[3]=c->r[30]+0x00000023u; // 801B0358
  c->r[7]=c->r[28]|c->r[28]; // 801B035C
  W32(c->r[28]+0x00000008u,c->r[30]); // 801B0360
  c->r[29]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801B0364
  c->r[4]=0u+0x0000000Cu; // 801B0368
  c->r[5]=0u+0x00000001u; // 801B036C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801B0370
  c->r[6]=0u+0x00000002u; // 801B0374
  W32(c->r[28]+0x00000010u,c->r[29]); // 801B0378
  W32(c->r[28]+0x00000014u,c->r[0]); // 801B037C
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B0380
  c->lr=0x801B0388u; f_801B3350(c); // 801B0384
  cmps(c,0,(int32_t)c->r[3],0); // 801B0388
  c->r[31]=c->r[3]|c->r[3]; // 801B038C
  if (!crb(c,2)) { goto L_801B03A4; } // 801B0390
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B0394
  W32(c->r[26]+0x00000000u,c->r[0]); // 801B0398
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B039C
  W32(c->r[27]+0x00000000u,c->r[0]); // 801B03A0
L_801B03A4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B03A4
  if (crb(c,2)) { goto L_801B03BC; } // 801B03A8
  if (crb(c,2)) { goto L_801B03BC; } // 801B03AC
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B03B0
  c->r[4]=c->r[28]|c->r[28]; // 801B03B4
  c->lr=0x801B03BCu; f_801B3AA0(c); // 801B03B8
L_801B03BC:;
  c->r[11]=c->r[1]+0x00000020u; // 801B03BC
  c->r[3]=c->r[31]|c->r[31]; // 801B03C0
  c->lr=0x801B03C8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B03C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B03C8
  c->lr=c->r[0]; // 801B03CC
  c->r[1]=c->r[1]+0x00000020u; // 801B03D0
  return; // 801B03D4
}

// fn_801B03E0
void f_801B03E0(Ctx* __restrict c) {
  trace_call(0x801B03E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B03E0
  c->r[0]=c->lr; // 801B03E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B03E8
  c->r[11]=c->r[1]+0x00000030u; // 801B03EC
  c->lr=0x801B03F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B03F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B03F4
  c->r[25]=c->r[3]|c->r[3]; // 801B03F8
  c->r[26]=c->r[4]|c->r[4]; // 801B03FC
  c->r[27]=c->r[5]|c->r[5]; // 801B0400
  c->r[31]=c->r[6]|c->r[6]; // 801B0404
  c->r[28]=c->r[7]|c->r[7]; // 801B0408
  if (crb(c,2)) { goto L_801B0440; } // 801B040C
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801B0410
  cmps(c,0,(int32_t)c->r[0],0); // 801B0414
  if (crb(c,0)) { goto L_801B0440; } // 801B0418
  cmps(c,0,(int32_t)c->r[4],0); // 801B041C
  if (crb(c,2)) { goto L_801B0440; } // 801B0420
  cmps(c,0,(int32_t)c->r[5],0); // 801B0424
  if (crb(c,2)) { goto L_801B0440; } // 801B0428
  c->r[4]=0u+0x00000040u; // 801B042C
  c->lr=0x801B0434u; f_801B1DF0(c); // 801B0430
  cmpu(c,0,c->r[3],0x00000040u); // 801B0434
  c->r[30]=c->r[3]|c->r[3]; // 801B0438
  if (!crb(c,2)) { goto L_801B0448; } // 801B043C
L_801B0440:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0440
  goto L_801B04EC; // 801B0444
L_801B0448:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0448
  c->r[4]=0u+0x00000140u; // 801B044C
  c->r[5]=0u+0x00000020u; // 801B0450
  c->lr=0x801B0458u; f_801B3A90(c); // 801B0454
  cmps(c,0,(int32_t)c->r[3],0); // 801B0458
  c->r[29]=c->r[3]|c->r[3]; // 801B045C
  if (!crb(c,2)) { goto L_801B046C; } // 801B0460
  c->r[3]=0u+0xFFFFFF8Au; // 801B0464
  goto L_801B04EC; // 801B0468
L_801B046C:;
  W32(c->r[3]+0x00000100u,c->r[31]); // 801B046C
  c->r[31]=0u+0x00000004u; // 801B0470
  c->r[0]=c->r[3]+0x00000037u; // 801B0474
  c->r[4]=c->r[25]|c->r[25]; // 801B0478
  W32(c->r[3]+0x00000104u,c->r[28]); // 801B047C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B0480
  c->r[5]=c->r[30]+0x00000001u; // 801B0484
  W32(c->r[3]+0x00000108u,c->r[31]); // 801B0488
  W32(c->r[3]+0x0000010Cu,c->r[26]); // 801B048C
  W32(c->r[3]+0x00000110u,c->r[27]); // 801B0490
  c->r[3]=c->r[28]|c->r[28]; // 801B0494
  c->lr=0x801B049Cu; f_800043C4(c); // 801B0498
  W32(c->r[29]+0x00000000u,c->r[28]); // 801B049C
  c->r[3]=0u+0x00000040u; // 801B04A0
  c->r[8]=0u+0x801B0000u; // 801B04A4
  c->r[0]=c->r[28]+0x0000005Fu; // 801B04A8
  W32(c->r[29]+0x00000004u,c->r[3]); // 801B04AC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B04B0
  c->r[0]=c->r[3]+0x00000023u; // 801B04B4
  c->r[7]=c->r[29]|c->r[29]; // 801B04B8
  W32(c->r[29]+0x00000008u,c->r[3]); // 801B04BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B04C0
  c->r[9]=c->r[29]|c->r[29]; // 801B04C4
  c->r[8]=c->r[8]+0xFFFFF520u; // 801B04C8
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801B04CC
  c->r[4]=0u+0x0000000Cu; // 801B04D0
  c->r[5]=0u+0x00000001u; // 801B04D4
  c->r[6]=0u+0x00000002u; // 801B04D8
  W32(c->r[29]+0x00000010u,c->r[0]); // 801B04DC
  W32(c->r[29]+0x00000014u,c->r[31]); // 801B04E0
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B04E4
  c->lr=0x801B04ECu; f_801B3260(c); // 801B04E8
L_801B04EC:;
  c->r[11]=c->r[1]+0x00000030u; // 801B04EC
  c->lr=0x801B04F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B04F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B04F4
  c->lr=c->r[0]; // 801B04F8
  c->r[1]=c->r[1]+0x00000030u; // 801B04FC
  return; // 801B0500
}

// fn_801B0510
void f_801B0510(Ctx* __restrict c) {
  trace_call(0x801B0510u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0510
  c->r[0]=c->lr; // 801B0514
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0518
  c->r[11]=c->r[1]+0x00000030u; // 801B051C
  c->lr=0x801B0524u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0520
  cmps(c,0,(int32_t)c->r[3],0); // 801B0524
  c->r[25]=c->r[3]|c->r[3]; // 801B0528
  c->r[26]=c->r[4]|c->r[4]; // 801B052C
  c->r[27]=c->r[5]|c->r[5]; // 801B0530
  c->r[28]=c->r[6]|c->r[6]; // 801B0534
  c->r[29]=c->r[7]|c->r[7]; // 801B0538
  c->r[30]=0u+0x00000000u; // 801B053C
  if (crb(c,2)) { goto L_801B0564; } // 801B0540
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801B0544
  cmps(c,0,(int32_t)c->r[0],0); // 801B0548
  if (crb(c,0)) { goto L_801B0564; } // 801B054C
  c->r[4]=0u+0x00000040u; // 801B0550
  c->lr=0x801B0558u; f_801B1DF0(c); // 801B0554
  cmpu(c,0,c->r[3],0x00000040u); // 801B0558
  c->r[31]=c->r[3]|c->r[3]; // 801B055C
  if (!crb(c,2)) { goto L_801B056C; } // 801B0560
L_801B0564:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801B0564
  goto L_801B05D0; // 801B0568
L_801B056C:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B056C
  c->r[4]=0u+0x00000140u; // 801B0570
  c->r[5]=0u+0x00000020u; // 801B0574
  c->lr=0x801B057Cu; f_801B3A90(c); // 801B0578
  cmps(c,0,(int32_t)c->r[3],0); // 801B057C
  c->r[30]=c->r[3]|c->r[3]; // 801B0580
  if (!crb(c,2)) { goto L_801B0590; } // 801B0584
  c->r[31]=0u+0xFFFFFFEAu; // 801B0588
  goto L_801B05D0; // 801B058C
L_801B0590:;
  c->r[4]=c->r[25]|c->r[25]; // 801B0590
  c->r[5]=c->r[31]+0x00000001u; // 801B0594
  c->r[3]=c->r[3]+0x00000006u; // 801B0598
  c->lr=0x801B05A0u; f_800043C4(c); // 801B059C
  W8(c->r[30]+0x00000049u,c->r[26]); // 801B05A0
  c->r[5]=c->r[30]|c->r[30]; // 801B05A4
  c->r[4]=0u+0x00000009u; // 801B05A8
  c->r[6]=0u+0x0000004Cu; // 801B05AC
  W8(c->r[30]+0x00000046u,c->r[27]); // 801B05B0
  c->r[7]=0u+0x00000000u; // 801B05B4
  c->r[8]=0u+0x00000000u; // 801B05B8
  W8(c->r[30]+0x00000047u,c->r[28]); // 801B05BC
  W8(c->r[30]+0x00000048u,c->r[29]); // 801B05C0
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B05C4
  c->lr=0x801B05CCu; f_801B2FF0(c); // 801B05C8
  c->r[31]=c->r[3]|c->r[3]; // 801B05CC
L_801B05D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B05D0
  if (crb(c,2)) { goto L_801B05E8; } // 801B05D4
  if (crb(c,2)) { goto L_801B05E8; } // 801B05D8
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B05DC
  c->r[4]=c->r[30]|c->r[30]; // 801B05E0
  c->lr=0x801B05E8u; f_801B3AA0(c); // 801B05E4
L_801B05E8:;
  c->r[11]=c->r[1]+0x00000030u; // 801B05E8
  c->r[3]=c->r[31]|c->r[31]; // 801B05EC
  c->lr=0x801B05F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B05F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B05F4
  c->lr=c->r[0]; // 801B05F8
  c->r[1]=c->r[1]+0x00000030u; // 801B05FC
  return; // 801B0600
}

// fn_801B0610
void f_801B0610(Ctx* __restrict c) {
  trace_call(0x801B0610u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0610
  c->r[0]=c->lr; // 801B0614
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0618
  c->r[11]=c->r[1]+0x00000030u; // 801B061C
  c->lr=0x801B0624u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0620
  cmps(c,0,(int32_t)c->r[3],0); // 801B0624
  c->r[23]=c->r[3]|c->r[3]; // 801B0628
  c->r[24]=c->r[4]|c->r[4]; // 801B062C
  c->r[25]=c->r[5]|c->r[5]; // 801B0630
  c->r[26]=c->r[6]|c->r[6]; // 801B0634
  c->r[27]=c->r[7]|c->r[7]; // 801B0638
  c->r[28]=c->r[8]|c->r[8]; // 801B063C
  c->r[29]=c->r[9]|c->r[9]; // 801B0640
  if (crb(c,2)) { goto L_801B0668; } // 801B0644
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801B0648
  cmps(c,0,(int32_t)c->r[0],0); // 801B064C
  if (crb(c,0)) { goto L_801B0668; } // 801B0650
  c->r[4]=0u+0x00000040u; // 801B0654
  c->lr=0x801B065Cu; f_801B1DF0(c); // 801B0658
  cmpu(c,0,c->r[3],0x00000040u); // 801B065C
  c->r[31]=c->r[3]|c->r[3]; // 801B0660
  if (!crb(c,2)) { goto L_801B0670; } // 801B0664
L_801B0668:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0668
  goto L_801B06EC; // 801B066C
L_801B0670:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0670
  c->r[4]=0u+0x00000140u; // 801B0674
  c->r[5]=0u+0x00000020u; // 801B0678
  c->lr=0x801B0680u; f_801B3A90(c); // 801B067C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0680
  c->r[30]=c->r[3]|c->r[3]; // 801B0684
  if (!crb(c,2)) { goto L_801B0694; } // 801B0688
  c->r[3]=0u+0xFFFFFF8Au; // 801B068C
  goto L_801B06EC; // 801B0690
L_801B0694:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 801B0694
  c->r[0]=0u+0x00000000u; // 801B0698
  c->r[4]=c->r[23]|c->r[23]; // 801B069C
  c->r[5]=c->r[31]+0x00000001u; // 801B06A0
  W32(c->r[3]+0x00000104u,c->r[29]); // 801B06A4
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B06A8
  c->r[3]=c->r[3]+0x00000006u; // 801B06AC
  c->lr=0x801B06B4u; f_800043C4(c); // 801B06B0
  W8(c->r[30]+0x00000049u,c->r[24]); // 801B06B4
  c->r[9]=0u+0x801B0000u; // 801B06B8
  c->r[5]=c->r[30]|c->r[30]; // 801B06BC
  c->r[10]=c->r[30]|c->r[30]; // 801B06C0
  W8(c->r[30]+0x00000046u,c->r[25]); // 801B06C4
  c->r[9]=c->r[9]+0xFFFFF520u; // 801B06C8
  c->r[4]=0u+0x00000009u; // 801B06CC
  c->r[6]=0u+0x0000004Cu; // 801B06D0
  W8(c->r[30]+0x00000047u,c->r[26]); // 801B06D4
  c->r[7]=0u+0x00000000u; // 801B06D8
  c->r[8]=0u+0x00000000u; // 801B06DC
  W8(c->r[30]+0x00000048u,c->r[27]); // 801B06E0
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B06E4
  c->lr=0x801B06ECu; f_801B2EB0(c); // 801B06E8
L_801B06EC:;
  c->r[11]=c->r[1]+0x00000030u; // 801B06EC
  c->lr=0x801B06F4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B06F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B06F4
  c->lr=c->r[0]; // 801B06F8
  c->r[1]=c->r[1]+0x00000030u; // 801B06FC
  return; // 801B0700
}

// ISFS_Open
void f_801B0710(Ctx* __restrict c) {
  trace_call(0x801B0710u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0710
  c->r[0]=c->lr; // 801B0714
  cmps(c,0,(int32_t)c->r[3],0); // 801B0718
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B071C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0720
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0724
  c->r[30]=0u+0x00000000u; // 801B0728
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B072C
  c->r[29]=c->r[4]|c->r[4]; // 801B0730
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B0734
  c->r[28]=c->r[3]|c->r[3]; // 801B0738
  if (crb(c,2)) { goto L_801B0754; } // 801B073C
  c->r[4]=0u+0x00000040u; // 801B0740
  c->lr=0x801B0748u; f_801B1DF0(c); // 801B0744
  cmpu(c,0,c->r[3],0x00000040u); // 801B0748
  c->r[31]=c->r[3]|c->r[3]; // 801B074C
  if (!crb(c,2)) { goto L_801B075C; } // 801B0750
L_801B0754:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801B0754
  goto L_801B079C; // 801B0758
L_801B075C:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B075C
  c->r[4]=0u+0x00000140u; // 801B0760
  c->r[5]=0u+0x00000020u; // 801B0764
  c->lr=0x801B076Cu; f_801B3A90(c); // 801B0768
  cmps(c,0,(int32_t)c->r[3],0); // 801B076C
  c->r[30]=c->r[3]|c->r[3]; // 801B0770
  if (!crb(c,2)) { goto L_801B0780; } // 801B0774
  c->r[31]=0u+0xFFFFFFEAu; // 801B0778
  goto L_801B079C; // 801B077C
L_801B0780:;
  c->r[4]=c->r[28]|c->r[28]; // 801B0780
  c->r[5]=c->r[31]+0x00000001u; // 801B0784
  c->lr=0x801B078Cu; f_800043C4(c); // 801B0788
  c->r[3]=c->r[30]|c->r[30]; // 801B078C
  c->r[4]=c->r[29]|c->r[29]; // 801B0790
  c->lr=0x801B0798u; f_801B2710(c); // 801B0794
  c->r[31]=c->r[3]|c->r[3]; // 801B0798
L_801B079C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B079C
  if (crb(c,2)) { goto L_801B07B4; } // 801B07A0
  if (crb(c,2)) { goto L_801B07B4; } // 801B07A4
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B07A8
  c->r[4]=c->r[30]|c->r[30]; // 801B07AC
  c->lr=0x801B07B4u; f_801B3AA0(c); // 801B07B0
L_801B07B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B07B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B07B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B07BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B07C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B07C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B07C8
  c->lr=c->r[0]; // 801B07CC
  c->r[1]=c->r[1]+0x00000020u; // 801B07D0
  return; // 801B07D4
}

// ISFS_OpenAsync
void f_801B07E0(Ctx* __restrict c) {
  trace_call(0x801B07E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B07E0
  c->r[0]=c->lr; // 801B07E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B07E8
  c->r[11]=c->r[1]+0x00000020u; // 801B07EC
  c->lr=0x801B07F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B07F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B07F4
  c->r[26]=c->r[3]|c->r[3]; // 801B07F8
  c->r[27]=c->r[4]|c->r[4]; // 801B07FC
  c->r[28]=c->r[5]|c->r[5]; // 801B0800
  c->r[29]=c->r[6]|c->r[6]; // 801B0804
  if (crb(c,2)) { goto L_801B0820; } // 801B0808
  c->r[4]=0u+0x00000040u; // 801B080C
  c->lr=0x801B0814u; f_801B1DF0(c); // 801B0810
  cmpu(c,0,c->r[3],0x00000040u); // 801B0814
  c->r[31]=c->r[3]|c->r[3]; // 801B0818
  if (!crb(c,2)) { goto L_801B0828; } // 801B081C
L_801B0820:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0820
  goto L_801B0880; // 801B0824
L_801B0828:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0828
  c->r[4]=0u+0x00000140u; // 801B082C
  c->r[5]=0u+0x00000020u; // 801B0830
  c->lr=0x801B0838u; f_801B3A90(c); // 801B0834
  cmps(c,0,(int32_t)c->r[3],0); // 801B0838
  c->r[30]=c->r[3]|c->r[3]; // 801B083C
  if (!crb(c,2)) { goto L_801B084C; } // 801B0840
  c->r[3]=0u+0xFFFFFF8Au; // 801B0844
  goto L_801B0880; // 801B0848
L_801B084C:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 801B084C
  c->r[0]=0u+0x00000000u; // 801B0850
  c->r[4]=c->r[26]|c->r[26]; // 801B0854
  c->r[5]=c->r[31]+0x00000001u; // 801B0858
  W32(c->r[3]+0x00000104u,c->r[29]); // 801B085C
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B0860
  c->lr=0x801B0868u; f_800043C4(c); // 801B0864
  c->r[5]=0u+0x801B0000u; // 801B0868
  c->r[3]=c->r[30]|c->r[30]; // 801B086C
  c->r[4]=c->r[27]|c->r[27]; // 801B0870
  c->r[6]=c->r[30]|c->r[30]; // 801B0874
  c->r[5]=c->r[5]+0xFFFFF520u; // 801B0878
  c->lr=0x801B0880u; f_801B25F0(c); // 801B087C
L_801B0880:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0880
  c->lr=0x801B0888u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0884
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0888
  c->lr=c->r[0]; // 801B088C
  c->r[1]=c->r[1]+0x00000020u; // 801B0890
  return; // 801B0894
}

// ISFS_GetFileStats
void f_801B08A0(Ctx* __restrict c) {
  trace_call(0x801B08A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B08A0
  c->r[0]=c->lr; // 801B08A4
  cmps(c,0,(int32_t)c->r[4],0); // 801B08A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B08AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B08B0
  c->r[31]=c->r[3]|c->r[3]; // 801B08B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B08B8
  c->r[30]=0u+0x00000000u; // 801B08BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B08C0
  c->r[29]=c->r[4]|c->r[4]; // 801B08C4
  if (crb(c,2)) { goto L_801B08D4; } // 801B08C8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B08CC
  if (crb(c,2)) { goto L_801B08DC; } // 801B08D0
L_801B08D4:;
  c->r[31]=0u+0xFFFFFF9Bu; // 801B08D4
  goto L_801B0938; // 801B08D8
L_801B08DC:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B08DC
  c->r[4]=0u+0x00000140u; // 801B08E0
  c->r[5]=0u+0x00000020u; // 801B08E4
  c->lr=0x801B08ECu; f_801B3A90(c); // 801B08E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B08EC
  c->r[30]=c->r[3]|c->r[3]; // 801B08F0
  if (!crb(c,2)) { goto L_801B0900; } // 801B08F4
  c->r[31]=0u+0xFFFFFFEAu; // 801B08F8
  goto L_801B0938; // 801B08FC
L_801B0900:;
  c->r[3]=c->r[31]|c->r[31]; // 801B0900
  c->r[7]=c->r[30]|c->r[30]; // 801B0904
  c->r[4]=0u+0x0000000Bu; // 801B0908
  c->r[5]=0u+0x00000000u; // 801B090C
  c->r[6]=0u+0x00000000u; // 801B0910
  c->r[8]=0u+0x00000008u; // 801B0914
  c->lr=0x801B091Cu; f_801B2FF0(c); // 801B0918
  cmps(c,0,(int32_t)c->r[3],0); // 801B091C
  c->r[31]=c->r[3]|c->r[3]; // 801B0920
  if (!crb(c,2)) { goto L_801B0938; } // 801B0924
  c->r[3]=c->r[29]|c->r[29]; // 801B0928
  c->r[4]=c->r[30]|c->r[30]; // 801B092C
  c->r[5]=0u+0x00000008u; // 801B0930
  c->lr=0x801B0938u; f_800043C4(c); // 801B0934
L_801B0938:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B0938
  if (crb(c,2)) { goto L_801B0950; } // 801B093C
  if (crb(c,2)) { goto L_801B0950; } // 801B0940
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0944
  c->r[4]=c->r[30]|c->r[30]; // 801B0948
  c->lr=0x801B0950u; f_801B3AA0(c); // 801B094C
L_801B0950:;
  c->r[3]=c->r[31]|c->r[31]; // 801B0950
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0954
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0958
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B095C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0960
  c->lr=c->r[0]; // 801B0964
  c->r[1]=c->r[1]+0x00000020u; // 801B0968
  return; // 801B096C
}

// fn_801B0970
void f_801B0970(Ctx* __restrict c) {
  trace_call(0x801B0970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0970
  c->r[0]=c->lr; // 801B0974
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0978
  c->r[11]=c->r[1]+0x00000020u; // 801B097C
  c->lr=0x801B0984u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0980
  c->r[27]=c->r[3]|c->r[3]; // 801B0984
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0988
  c->r[28]=c->r[4]|c->r[4]; // 801B098C
  c->r[29]=c->r[5]|c->r[5]; // 801B0990
  c->r[30]=c->r[6]|c->r[6]; // 801B0994
  c->r[31]=c->r[7]|c->r[7]; // 801B0998
  c->r[4]=0u+0x00000140u; // 801B099C
  c->r[5]=0u+0x00000020u; // 801B09A0
  c->lr=0x801B09A8u; f_801B3A90(c); // 801B09A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B09A8
  if (!crb(c,2)) { goto L_801B09B8; } // 801B09AC
  c->r[3]=0u+0xFFFFFF8Au; // 801B09B0
  goto L_801B09E4; // 801B09B4
L_801B09B8:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 801B09B8
  c->r[6]=0u+0x801B0000u; // 801B09BC
  c->r[0]=0u+0x00000000u; // 801B09C0
  c->r[4]=c->r[28]|c->r[28]; // 801B09C4
  W32(c->r[3]+0x00000104u,c->r[31]); // 801B09C8
  c->r[5]=c->r[29]|c->r[29]; // 801B09CC
  c->r[7]=c->r[3]|c->r[3]; // 801B09D0
  c->r[6]=c->r[6]+0xFFFFF520u; // 801B09D4
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B09D8
  c->r[3]=c->r[27]|c->r[27]; // 801B09DC
  c->lr=0x801B09E4u; f_801B2DD0(c); // 801B09E0
L_801B09E4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B09E4
  c->lr=0x801B09ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B09E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B09EC
  c->lr=c->r[0]; // 801B09F0
  c->r[1]=c->r[1]+0x00000020u; // 801B09F4
  return; // 801B09F8
}

// fn_801B0A00
void f_801B0A00(Ctx* __restrict c) {
  trace_call(0x801B0A00u);
  cmps(c,0,(int32_t)c->r[4],0); // 801B0A00
  if (crb(c,2)) { goto L_801B0A10; } // 801B0A04
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B0A08
  if (crb(c,2)) { goto L_801B0A18; } // 801B0A0C
L_801B0A10:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0A10
  return; // 801B0A14
L_801B0A18:;
  f_801B2AB0(c); return; // 801B0A18
  return; // 801B0A1C
}

// fn_801B0A20
void f_801B0A20(Ctx* __restrict c) {
  trace_call(0x801B0A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0A20
  c->r[0]=c->lr; // 801B0A24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0A28
  c->r[11]=c->r[1]+0x00000020u; // 801B0A2C
  c->lr=0x801B0A34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0A30
  cmps(c,0,(int32_t)c->r[4],0); // 801B0A34
  c->r[27]=c->r[3]|c->r[3]; // 801B0A38
  c->r[28]=c->r[4]|c->r[4]; // 801B0A3C
  c->r[29]=c->r[5]|c->r[5]; // 801B0A40
  c->r[30]=c->r[6]|c->r[6]; // 801B0A44
  c->r[31]=c->r[7]|c->r[7]; // 801B0A48
  if (crb(c,2)) { goto L_801B0A58; } // 801B0A4C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B0A50
  if (crb(c,2)) { goto L_801B0A60; } // 801B0A54
L_801B0A58:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0A58
  goto L_801B0AAC; // 801B0A5C
L_801B0A60:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0A60
  c->r[4]=0u+0x00000140u; // 801B0A64
  c->r[5]=0u+0x00000020u; // 801B0A68
  c->lr=0x801B0A70u; f_801B3A90(c); // 801B0A6C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0A70
  if (!crb(c,2)) { goto L_801B0A80; } // 801B0A74
  c->r[3]=0u+0xFFFFFF8Au; // 801B0A78
  goto L_801B0AAC; // 801B0A7C
L_801B0A80:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 801B0A80
  c->r[6]=0u+0x801B0000u; // 801B0A84
  c->r[0]=0u+0x00000000u; // 801B0A88
  c->r[4]=c->r[28]|c->r[28]; // 801B0A8C
  W32(c->r[3]+0x00000104u,c->r[31]); // 801B0A90
  c->r[5]=c->r[29]|c->r[29]; // 801B0A94
  c->r[7]=c->r[3]|c->r[3]; // 801B0A98
  c->r[6]=c->r[6]+0xFFFFF520u; // 801B0A9C
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B0AA0
  c->r[3]=c->r[27]|c->r[27]; // 801B0AA4
  c->lr=0x801B0AACu; f_801B29B0(c); // 801B0AA8
L_801B0AAC:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0AAC
  c->lr=0x801B0AB4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0AB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0AB4
  c->lr=c->r[0]; // 801B0AB8
  c->r[1]=c->r[1]+0x00000020u; // 801B0ABC
  return; // 801B0AC0
}

// fn_801B0AD0
void f_801B0AD0(Ctx* __restrict c) {
  trace_call(0x801B0AD0u);
  cmps(c,0,(int32_t)c->r[4],0); // 801B0AD0
  if (crb(c,2)) { goto L_801B0AE0; } // 801B0AD4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B0AD8
  if (crb(c,2)) { goto L_801B0AE8; } // 801B0ADC
L_801B0AE0:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0AE0
  return; // 801B0AE4
L_801B0AE8:;
  f_801B2CC0(c); return; // 801B0AE8
  return; // 801B0AEC
}

// fn_801B0AF0
void f_801B0AF0(Ctx* __restrict c) {
  trace_call(0x801B0AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0AF0
  c->r[0]=c->lr; // 801B0AF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0AF8
  c->r[11]=c->r[1]+0x00000020u; // 801B0AFC
  c->lr=0x801B0B04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0B00
  cmps(c,0,(int32_t)c->r[4],0); // 801B0B04
  c->r[27]=c->r[3]|c->r[3]; // 801B0B08
  c->r[28]=c->r[4]|c->r[4]; // 801B0B0C
  c->r[29]=c->r[5]|c->r[5]; // 801B0B10
  c->r[30]=c->r[6]|c->r[6]; // 801B0B14
  c->r[31]=c->r[7]|c->r[7]; // 801B0B18
  if (crb(c,2)) { goto L_801B0B28; } // 801B0B1C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B0B20
  if (crb(c,2)) { goto L_801B0B30; } // 801B0B24
L_801B0B28:;
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0B28
  goto L_801B0B7C; // 801B0B2C
L_801B0B30:;
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0B30
  c->r[4]=0u+0x00000140u; // 801B0B34
  c->r[5]=0u+0x00000020u; // 801B0B38
  c->lr=0x801B0B40u; f_801B3A90(c); // 801B0B3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0B40
  if (!crb(c,2)) { goto L_801B0B50; } // 801B0B44
  c->r[3]=0u+0xFFFFFF8Au; // 801B0B48
  goto L_801B0B7C; // 801B0B4C
L_801B0B50:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 801B0B50
  c->r[6]=0u+0x801B0000u; // 801B0B54
  c->r[0]=0u+0x00000000u; // 801B0B58
  c->r[4]=c->r[28]|c->r[28]; // 801B0B5C
  W32(c->r[3]+0x00000104u,c->r[31]); // 801B0B60
  c->r[5]=c->r[29]|c->r[29]; // 801B0B64
  c->r[7]=c->r[3]|c->r[3]; // 801B0B68
  c->r[6]=c->r[6]+0xFFFFF520u; // 801B0B6C
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B0B70
  c->r[3]=c->r[27]|c->r[27]; // 801B0B74
  c->lr=0x801B0B7Cu; f_801B2BC0(c); // 801B0B78
L_801B0B7C:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0B7C
  c->lr=0x801B0B84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0B80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0B84
  c->lr=c->r[0]; // 801B0B88
  c->r[1]=c->r[1]+0x00000020u; // 801B0B8C
  return; // 801B0B90
}

// fn_801B0BA0
void f_801B0BA0(Ctx* __restrict c) {
  trace_call(0x801B0BA0u);
  f_801B2900(c); return; // 801B0BA0
}

// fn_801B0BB0
void f_801B0BB0(Ctx* __restrict c) {
  trace_call(0x801B0BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0BB0
  c->r[0]=c->lr; // 801B0BB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0BB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0BBC
  c->r[31]=c->r[5]|c->r[5]; // 801B0BC0
  c->r[5]=0u+0x00000020u; // 801B0BC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0BC8
  c->r[30]=c->r[4]|c->r[4]; // 801B0BCC
  c->r[4]=0u+0x00000140u; // 801B0BD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0BD4
  c->r[29]=c->r[3]|c->r[3]; // 801B0BD8
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0BDC
  c->lr=0x801B0BE4u; f_801B3A90(c); // 801B0BE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B0BE4
  if (!crb(c,2)) { goto L_801B0BF4; } // 801B0BE8
  c->r[3]=0u+0xFFFFFF8Au; // 801B0BEC
  goto L_801B0C18; // 801B0BF0
L_801B0BF4:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 801B0BF4
  c->r[4]=0u+0x801B0000u; // 801B0BF8
  c->r[0]=0u+0x00000000u; // 801B0BFC
  c->r[5]=c->r[3]|c->r[3]; // 801B0C00
  W32(c->r[3]+0x00000104u,c->r[31]); // 801B0C04
  c->r[4]=c->r[4]+0xFFFFF520u; // 801B0C08
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B0C0C
  c->r[3]=c->r[29]|c->r[29]; // 801B0C10
  c->lr=0x801B0C18u; f_801B2840(c); // 801B0C14
L_801B0C18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0C18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0C1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0C20
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0C24
  c->lr=c->r[0]; // 801B0C28
  c->r[1]=c->r[1]+0x00000020u; // 801B0C2C
  return; // 801B0C30
}

// fn_801B0C40
void f_801B0C40(Ctx* __restrict c) {
  trace_call(0x801B0C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0C40
  c->r[0]=c->lr; // 801B0C44
  c->r[5]=0u+0x00000020u; // 801B0C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0C50
  c->r[31]=c->r[4]|c->r[4]; // 801B0C54
  c->r[4]=0u+0x00000140u; // 801B0C58
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0C5C
  c->r[30]=c->r[3]|c->r[3]; // 801B0C60
  c->r[3]=R32(c->r[13]+0xFFFFC3C4u); // 801B0C64
  c->lr=0x801B0C6Cu; f_801B3A90(c); // 801B0C68
  c->r[0]=R32(c->r[13]+0xFFFFACD8u); // 801B0C6C
  cmps(c,0,(int32_t)c->r[0],0); // 801B0C70
  if (!crb(c,0)) { goto L_801B0C80; } // 801B0C74
  c->r[3]=0u+0xFFFFFF9Bu; // 801B0C78
  goto L_801B0CB8; // 801B0C7C
L_801B0C80:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 801B0C80
  c->r[9]=0u+0x801B0000u; // 801B0C84
  c->r[0]=0u+0x00000000u; // 801B0C88
  c->r[10]=c->r[3]|c->r[3]; // 801B0C8C
  W32(c->r[3]+0x00000104u,c->r[31]); // 801B0C90
  c->r[9]=c->r[9]+0xFFFFF520u; // 801B0C94
  c->r[4]=0u+0x0000000Du; // 801B0C98
  c->r[5]=0u+0x00000000u; // 801B0C9C
  W32(c->r[3]+0x00000108u,c->r[0]); // 801B0CA0
  c->r[6]=0u+0x00000000u; // 801B0CA4
  c->r[7]=0u+0x00000000u; // 801B0CA8
  c->r[8]=0u+0x00000000u; // 801B0CAC
  c->r[3]=R32(c->r[13]+0xFFFFACD8u); // 801B0CB0
  c->lr=0x801B0CB8u; f_801B2EB0(c); // 801B0CB4
L_801B0CB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0CBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0CC0
  c->lr=c->r[0]; // 801B0CC4
  c->r[1]=c->r[1]+0x00000010u; // 801B0CC8
  return; // 801B0CCC
}

// ARCInitHandle
void f_801B0CD0(Ctx* __restrict c) {
  trace_call(0x801B0CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0CD0
  c->r[0]=c->lr; // 801B0CD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0CD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0CDC
  c->r[31]=c->r[4]|c->r[4]; // 801B0CE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0CE4
  c->r[30]=c->r[3]|c->r[3]; // 801B0CE8
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B0CEC
  c->r[0]=c->r[5]+0xAA560000u; // 801B0CF0
  cmpu(c,0,c->r[0],0x0000382Du); // 801B0CF4
  if (crb(c,2)) { goto L_801B0D14; } // 801B0CF8
  c->r[5]=0u+0x803A0000u; // 801B0CFC
  c->r[3]=c->r[13]+0xFFFFACE8u; // 801B0D00
  c->r[5]=c->r[5]+0xFFFFBCD8u; // 801B0D04
  c->r[4]=0u+0x0000004Au; // 801B0D08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B0D0C
  c->lr=0x801B0D14u; f_80033390(c); // 801B0D10
L_801B0D14:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 801B0D14
  c->r[0]=0u+0x00000000u; // 801B0D18
  c->r[3]=0u+0x00000001u; // 801B0D1C
  c->r[4]=R32(c->r[30]+0x00000004u); // 801B0D20
  c->r[5]=c->r[30]+c->r[4]; // 801B0D24
  W32(c->r[31]+0x00000004u,c->r[5]); // 801B0D28
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801B0D2C
  c->r[4]=c->r[30]+c->r[4]; // 801B0D30
  W32(c->r[31]+0x00000008u,c->r[4]); // 801B0D34
  c->r[4]=R32(c->r[5]+0x00000008u); // 801B0D38
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801B0D3C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B0D40
  c->r[4]=c->r[5]+c->r[4]; // 801B0D44
  W32(c->r[31]+0x00000010u,c->r[4]); // 801B0D48
  c->r[4]=R32(c->r[30]+0x00000008u); // 801B0D4C
  W32(c->r[31]+0x00000014u,c->r[4]); // 801B0D50
  W32(c->r[31]+0x00000018u,c->r[0]); // 801B0D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0D58
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0D5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0D60
  c->lr=c->r[0]; // 801B0D64
  c->r[1]=c->r[1]+0x00000010u; // 801B0D68
  return; // 801B0D6C
}

// ARCOpen
void f_801B0D70(Ctx* __restrict c) {
  trace_call(0x801B0D70u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0D70
  c->r[0]=c->lr; // 801B0D74
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801B0D78
  c->r[11]=c->r[1]+0x000000A0u; // 801B0D7C
  c->lr=0x801B0D84u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0D80
  c->r[28]=R32(c->r[3]+0x00000004u); // 801B0D84
  c->r[26]=c->r[3]|c->r[3]; // 801B0D88
  c->r[27]=c->r[4]|c->r[4]; // 801B0D8C
  c->r[29]=c->r[5]|c->r[5]; // 801B0D90
  c->lr=0x801B0D98u; f_801B1070(c); // 801B0D94
  cmps(c,0,(int32_t)c->r[3],0); // 801B0D98
  if (!crb(c,0)) { goto L_801B0FD0; } // 801B0D9C
  c->r[29]=R32(c->r[26]+0x00000018u); // 801B0DA0
  c->r[28]=R32(c->r[26]+0x00000004u); // 801B0DA4
  cmps(c,0,(int32_t)c->r[29],0); // 801B0DA8
  if (!crb(c,2)) { goto L_801B0DB8; } // 801B0DAC
  c->r[4]=0u+0x00000000u; // 801B0DB0
  goto L_801B0F58; // 801B0DB4
L_801B0DB8:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801B0DB8
  c->r[7]=R32(c->r[26]+0x00000010u); // 801B0DBC
  c->r[3]=c->r[28]+c->r[0]; // 801B0DC0
  c->r[0]=R32(c->r[28]+c->r[0]); // 801B0DC4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B0DC8
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B0DCC
  cmps(c,0,(int32_t)c->r[3],0); // 801B0DD0
  c->r[30]=c->r[7]+c->r[0]; // 801B0DD4
  if (!crb(c,2)) { goto L_801B0DE4; } // 801B0DD8
  c->r[4]=0u+0x00000000u; // 801B0DDC
  goto L_801B0EF8; // 801B0DE0
L_801B0DE4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801B0DE4
  c->r[3]=c->r[28]+c->r[0]; // 801B0DE8
  c->r[0]=R32(c->r[28]+c->r[0]); // 801B0DEC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B0DF0
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B0DF4
  cmps(c,0,(int32_t)c->r[3],0); // 801B0DF8
  c->r[31]=c->r[7]+c->r[0]; // 801B0DFC
  if (!crb(c,2)) { goto L_801B0E0C; } // 801B0E00
  c->r[4]=0u+0x00000000u; // 801B0E04
  goto L_801B0E98; // 801B0E08
L_801B0E0C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801B0E0C
  c->r[3]=c->r[26]|c->r[26]; // 801B0E10
  c->r[5]=c->r[1]+0x00000008u; // 801B0E14
  c->r[6]=0u+0x00000080u; // 801B0E18
  c->r[0]=R32(c->r[28]+c->r[4]); // 801B0E1C
  c->r[4]=c->r[28]+c->r[4]; // 801B0E20
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B0E24
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B0E28
  c->r[26]=c->r[7]+c->r[0]; // 801B0E2C
  c->lr=0x801B0E34u; f_801B12F0(c); // 801B0E30
  cmpu(c,0,c->r[3],0x00000080u); // 801B0E34
  c->r[4]=c->r[3]|c->r[3]; // 801B0E38
  if (!crb(c,2)) { goto L_801B0E44; } // 801B0E3C
  goto L_801B0E98; // 801B0E40
L_801B0E44:;
  c->r[4]=c->r[3]+0x00000001u; // 801B0E44
  c->r[5]=c->r[1]+0x00000008u; // 801B0E48
  c->r[0]=0u+0x0000002Fu; // 801B0E4C
  W8(c->r[5]+c->r[3],c->r[0]); // 801B0E50
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 801B0E54
  c->r[5]=c->r[5]+c->r[4]; // 801B0E58
  c->r[3]=c->r[6]|c->r[6]; // 801B0E5C
  goto L_801B0E7C; // 801B0E60
  c->r[0]=c->r[0]|0x00000000u; // 801B0E64
L_801B0E68:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B0E68
  c->r[26]=c->r[26]+0x00000001u; // 801B0E6C
  W8(c->r[5]+0x00000000u,c->r[0]); // 801B0E70
  c->r[5]=c->r[5]+0x00000001u; // 801B0E74
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B0E78
L_801B0E7C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B0E7C
  if (crb(c,2)) { goto L_801B0E90; } // 801B0E80
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B0E84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0E88
  if (!crb(c,2)) { IRQCHK(c); goto L_801B0E68; } // 801B0E8C
L_801B0E90:;
  c->r[0]=c->r[6]-c->r[3]; // 801B0E90
  c->r[4]=c->r[4]+c->r[0]; // 801B0E94
L_801B0E98:;
  cmpu(c,0,c->r[4],0x00000080u); // 801B0E98
  if (!crb(c,2)) { goto L_801B0EA4; } // 801B0E9C
  goto L_801B0EF8; // 801B0EA0
L_801B0EA4:;
  c->r[5]=c->r[4]+0x00000001u; // 801B0EA4
  c->r[3]=c->r[1]+0x00000008u; // 801B0EA8
  c->r[0]=0u+0x0000002Fu; // 801B0EAC
  W8(c->r[3]+c->r[4],c->r[0]); // 801B0EB0
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 801B0EB4
  c->r[3]=c->r[3]+c->r[5]; // 801B0EB8
  c->r[4]=c->r[6]|c->r[6]; // 801B0EBC
  goto L_801B0EDC; // 801B0EC0
  c->r[0]=c->r[0]|0x00000000u; // 801B0EC4
L_801B0EC8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B0EC8
  c->r[31]=c->r[31]+0x00000001u; // 801B0ECC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B0ED0
  c->r[3]=c->r[3]+0x00000001u; // 801B0ED4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B0ED8
L_801B0EDC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B0EDC
  if (crb(c,2)) { goto L_801B0EF0; } // 801B0EE0
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B0EE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0EE8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B0EC8; } // 801B0EEC
L_801B0EF0:;
  c->r[0]=c->r[6]-c->r[4]; // 801B0EF0
  c->r[4]=c->r[5]+c->r[0]; // 801B0EF4
L_801B0EF8:;
  cmpu(c,0,c->r[4],0x00000080u); // 801B0EF8
  if (!crb(c,2)) { goto L_801B0F04; } // 801B0EFC
  goto L_801B0F58; // 801B0F00
L_801B0F04:;
  c->r[5]=c->r[4]+0x00000001u; // 801B0F04
  c->r[3]=c->r[1]+0x00000008u; // 801B0F08
  c->r[0]=0u+0x0000002Fu; // 801B0F0C
  W8(c->r[3]+c->r[4],c->r[0]); // 801B0F10
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 801B0F14
  c->r[3]=c->r[3]+c->r[5]; // 801B0F18
  c->r[4]=c->r[6]|c->r[6]; // 801B0F1C
  goto L_801B0F3C; // 801B0F20
  c->r[0]=c->r[0]|0x00000000u; // 801B0F24
L_801B0F28:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B0F28
  c->r[30]=c->r[30]+0x00000001u; // 801B0F2C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B0F30
  c->r[3]=c->r[3]+0x00000001u; // 801B0F34
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B0F38
L_801B0F3C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B0F3C
  if (crb(c,2)) { goto L_801B0F50; } // 801B0F40
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B0F44
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B0F48
  if (!crb(c,2)) { IRQCHK(c); goto L_801B0F28; } // 801B0F4C
L_801B0F50:;
  c->r[0]=c->r[6]-c->r[4]; // 801B0F50
  c->r[4]=c->r[5]+c->r[0]; // 801B0F54
L_801B0F58:;
  cmpu(c,0,c->r[4],0x00000080u); // 801B0F58
  if (!crb(c,2)) { goto L_801B0F6C; } // 801B0F5C
  c->r[0]=0u+0x00000000u; // 801B0F60
  W8(c->r[1]+0x00000087u,c->r[0]); // 801B0F64
  goto L_801B0FB0; // 801B0F68
L_801B0F6C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801B0F6C
  c->r[0]=R32(c->r[28]+c->r[0]); // 801B0F70
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801B0F74
  if (crb(c,2)) { goto L_801B0FA4; } // 801B0F78
  cmpu(c,0,c->r[4],0x0000007Fu); // 801B0F7C
  if (!crb(c,2)) { goto L_801B0F94; } // 801B0F80
  c->r[3]=c->r[1]+0x00000008u; // 801B0F84
  c->r[0]=0u+0x00000000u; // 801B0F88
  W8(c->r[3]+c->r[4],c->r[0]); // 801B0F8C
  goto L_801B0FB0; // 801B0F90
L_801B0F94:;
  c->r[3]=c->r[1]+0x00000008u; // 801B0F94
  c->r[0]=0u+0x0000002Fu; // 801B0F98
  W8(c->r[3]+c->r[4],c->r[0]); // 801B0F9C
  c->r[4]=c->r[4]+0x00000001u; // 801B0FA0
L_801B0FA4:;
  c->r[3]=c->r[1]+0x00000008u; // 801B0FA4
  c->r[0]=0u+0x00000000u; // 801B0FA8
  W8(c->r[3]+c->r[4],c->r[0]); // 801B0FAC
L_801B0FB0:;
  c->r[3]=0u+0x803A0000u; // 801B0FB0
  c->r[4]=c->r[27]|c->r[27]; // 801B0FB4
  c->r[3]=c->r[3]+0xFFFFBCFCu; // 801B0FB8
  c->r[5]=c->r[1]+0x00000008u; // 801B0FBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B0FC0
  c->lr=0x801B0FC8u; f_80121B20(c); // 801B0FC4
  c->r[3]=0u+0x00000000u; // 801B0FC8
  goto L_801B1004; // 801B0FCC
L_801B0FD0:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801B0FD0
  c->r[0]=R32(c->r[28]+c->r[3]); // 801B0FD4
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801B0FD8
  if (crb(c,2)) { goto L_801B0FE8; } // 801B0FDC
  c->r[3]=0u+0x00000000u; // 801B0FE0
  goto L_801B1004; // 801B0FE4
L_801B0FE8:;
  W32(c->r[29]+0x00000000u,c->r[26]); // 801B0FE8
  c->r[4]=c->r[28]+c->r[3]; // 801B0FEC
  c->r[3]=0u+0x00000001u; // 801B0FF0
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B0FF4
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B0FF8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B0FFC
  W32(c->r[29]+0x00000008u,c->r[0]); // 801B1000
L_801B1004:;
  c->r[11]=c->r[1]+0x000000A0u; // 801B1004
  c->lr=0x801B100Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1008
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801B100C
  c->lr=c->r[0]; // 801B1010
  c->r[1]=c->r[1]+0x000000A0u; // 801B1014
  return; // 801B1018
}

// ARCFastOpen
void f_801B1020(Ctx* __restrict c) {
  trace_call(0x801B1020u);
  cmps(c,0,(int32_t)c->r[4],0); // 801B1020
  c->r[6]=R32(c->r[3]+0x00000004u); // 801B1024
  if (crb(c,0)) { goto L_801B1048; } // 801B1028
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B102C
  cmpu(c,0,c->r[4],c->r[0]); // 801B1030
  if (!crb(c,0)) { goto L_801B1048; } // 801B1034
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B1038
  c->r[0]=R32(c->r[6]+c->r[4]); // 801B103C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801B1040
  if (crb(c,2)) { goto L_801B1050; } // 801B1044
L_801B1048:;
  c->r[3]=0u+0x00000000u; // 801B1048
  return; // 801B104C
L_801B1050:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 801B1050
  c->r[4]=c->r[6]+c->r[4]; // 801B1054
  c->r[3]=0u+0x00000001u; // 801B1058
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B105C
  W32(c->r[5]+0x00000004u,c->r[0]); // 801B1060
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B1064
  W32(c->r[5]+0x00000008u,c->r[0]); // 801B1068
  return; // 801B106C
}

// ARCConvertPathToEntrynum
void f_801B1070(Ctx* __restrict c) {
  trace_call(0x801B1070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1070
  c->r[6]=0u+0x803C0000u; // 801B1074
  c->r[6]=c->r[6]+0x00000FC8u; // 801B1078
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B107C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1080
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1084
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B1088
  c->r[9]=R32(c->r[3]+0x00000018u); // 801B108C
  c->r[10]=R32(c->r[3]+0x00000004u); // 801B1090
  c->r[0]=c->r[0]|0x00000000u; // 801B1094
L_801B1098:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801B1098
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B109C
  if (!crb(c,2)) { goto L_801B10AC; } // 801B10A0
  c->r[3]=c->r[9]|c->r[9]; // 801B10A4
  goto L_801B12D4; // 801B10A8
L_801B10AC:;
  cmps(c,0,(int32_t)c->r[0],47); // 801B10AC
  if (!crb(c,2)) { goto L_801B10C0; } // 801B10B0
  c->r[9]=0u+0x00000000u; // 801B10B4
  c->r[4]=c->r[4]+0x00000001u; // 801B10B8
  IRQCHK(c); goto L_801B1098; // 801B10BC
L_801B10C0:;
  cmps(c,0,(int32_t)c->r[0],46); // 801B10C0
  if (!crb(c,2)) { goto L_801B1134; } // 801B10C4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801B10C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B10CC
  cmps(c,0,(int32_t)c->r[0],46); // 801B10D0
  if (!crb(c,2)) { goto L_801B1114; } // 801B10D4
  c->r[0]=R8(c->r[4]+0x00000002u); // 801B10D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801B10DC
  cmps(c,0,(int32_t)c->r[0],47); // 801B10E0
  if (!crb(c,2)) { goto L_801B10FC; } // 801B10E4
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801B10E8
  c->r[4]=c->r[4]+0x00000003u; // 801B10EC
  c->r[5]=c->r[10]+c->r[0]; // 801B10F0
  c->r[9]=R32(c->r[5]+0x00000004u); // 801B10F4
  IRQCHK(c); goto L_801B1098; // 801B10F8
L_801B10FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B10FC
  if (!crb(c,2)) { goto L_801B1134; } // 801B1100
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801B1104
  c->r[3]=c->r[10]+c->r[0]; // 801B1108
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B110C
  goto L_801B12D4; // 801B1110
L_801B1114:;
  cmps(c,0,(int32_t)c->r[0],47); // 801B1114
  if (!crb(c,2)) { goto L_801B1124; } // 801B1118
  c->r[4]=c->r[4]+0x00000002u; // 801B111C
  IRQCHK(c); goto L_801B1098; // 801B1120
L_801B1124:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B1124
  if (!crb(c,2)) { goto L_801B1134; } // 801B1128
  c->r[3]=c->r[9]|c->r[9]; // 801B112C
  goto L_801B12D4; // 801B1130
L_801B1134:;
  c->r[8]=c->r[4]|c->r[4]; // 801B1134
  goto L_801B1144; // 801B1138
  c->r[0]=c->r[0]|0x00000000u; // 801B113C
L_801B1140:;
  c->r[8]=c->r[8]+0x00000001u; // 801B1140
L_801B1144:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801B1144
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1148
  if (crb(c,2)) { goto L_801B115C; } // 801B114C
  cmps(c,0,(int32_t)c->r[0],47); // 801B1150
  if (crb(c,2)) { goto L_801B1164; } // 801B1154
  IRQCHK(c); goto L_801B1140; // 801B1158
L_801B115C:;
  c->r[0]=0u+0x00000000u; // 801B115C
  goto L_801B1168; // 801B1160
L_801B1164:;
  c->r[0]=0u+0x00000001u; // 801B1164
L_801B1168:;
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801B1168
  c->r[5]=R32(c->r[6]+0x00000038u); // 801B116C
  c->r[8]=c->r[8]-c->r[4]; // 801B1170
  c->r[9]=c->r[9]+0x00000001u; // 801B1174
  c->r[7]=c->r[10]+c->r[7]; // 801B1178
  c->r[7]=R32(c->r[7]+0x00000008u); // 801B117C
  goto L_801B12A8; // 801B1180
  c->r[0]=c->r[0]|0x00000000u; // 801B1184
L_801B1188:;
  c->r[11]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801B1188
  c->r[29]=c->r[10]+c->r[11]; // 801B118C
L_801B1190:;
  c->r[30]=R32(c->r[29]+0x00000000u); // 801B1190
  c->r[11]=rotl(c->r[30],0)&0xFF000000u; cr0(c,c->r[11]); // 801B1194
  if (!crb(c,2)) { goto L_801B11A4; } // 801B1198
  cmps(c,0,(int32_t)c->r[0],1); // 801B119C
  if (crb(c,2)) { goto L_801B1288; } // 801B11A0
L_801B11A4:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 801B11A4
  c->r[11]=rotl(c->r[30],0)&0x00FFFFFFu; // 801B11A8
  c->r[28]=c->r[12]+c->r[11]; // 801B11AC
  c->r[11]=R8(c->r[12]+c->r[11]); // 801B11B0
  cmps(c,0,(int32_t)c->r[11],46); // 801B11B4
  if (!crb(c,2)) { goto L_801B11D4; } // 801B11B8
  c->r[11]=R8(c->r[28]+0x00000001u); // 801B11BC
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 801B11C0
  if (!crb(c,2)) { goto L_801B11D4; } // 801B11C4
  c->r[29]=c->r[29]+0x0000000Cu; // 801B11C8
  c->r[9]=c->r[9]+0x00000001u; // 801B11CC
  IRQCHK(c); goto L_801B1190; // 801B11D0
L_801B11D4:;
  c->r[12]=c->r[4]|c->r[4]; // 801B11D4
  goto L_801B1250; // 801B11D8
  c->r[0]=c->r[0]|0x00000000u; // 801B11DC
L_801B11E0:;
  c->r[11]=R8(c->r[28]+0x00000000u); // 801B11E0
  c->r[31]=0u+0x00000001u; // 801B11E4
  c->r[28]=c->r[28]+0x00000001u; // 801B11E8
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801B11EC
  cmpu(c,0,c->r[30],0x000000FFu); // 801B11F0
  if (crb(c,1)) { goto L_801B11FC; } // 801B11F4
  c->r[31]=0u+0x00000000u; // 801B11F8
L_801B11FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B11FC
  if (crb(c,2)) { goto L_801B1208; } // 801B1200
  goto L_801B1210; // 801B1204
L_801B1208:;
  c->r[11]=R32(c->r[5]+0x00000010u); // 801B1208
  c->r[30]=R8(c->r[11]+c->r[30]); // 801B120C
L_801B1210:;
  c->r[11]=R8(c->r[12]+0x00000000u); // 801B1210
  c->r[29]=0u+0x00000001u; // 801B1214
  c->r[12]=c->r[12]+0x00000001u; // 801B1218
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801B121C
  cmpu(c,0,c->r[31],0x000000FFu); // 801B1220
  if (crb(c,1)) { goto L_801B122C; } // 801B1224
  c->r[29]=0u+0x00000000u; // 801B1228
L_801B122C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B122C
  if (crb(c,2)) { goto L_801B1238; } // 801B1230
  goto L_801B1240; // 801B1234
L_801B1238:;
  c->r[11]=R32(c->r[5]+0x00000010u); // 801B1238
  c->r[31]=R8(c->r[11]+c->r[31]); // 801B123C
L_801B1240:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 801B1240
  if (crb(c,2)) { goto L_801B1250; } // 801B1244
  c->r[11]=0u+0x00000000u; // 801B1248
  goto L_801B1280; // 801B124C
L_801B1250:;
  c->r[11]=R8(c->r[28]+0x00000000u); // 801B1250
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 801B1254
  if (!crb(c,2)) { IRQCHK(c); goto L_801B11E0; } // 801B1258
  c->r[11]=R8(c->r[12]+0x00000000u); // 801B125C
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801B1260
  cmps(c,0,(int32_t)c->r[11],47); // 801B1264
  if (crb(c,2)) { goto L_801B1274; } // 801B1268
  cmps(c,0,(int32_t)c->r[11],0); // 801B126C
  if (!crb(c,2)) { goto L_801B127C; } // 801B1270
L_801B1274:;
  c->r[11]=0u+0x00000001u; // 801B1274
  goto L_801B1280; // 801B1278
L_801B127C:;
  c->r[11]=0u+0x00000000u; // 801B127C
L_801B1280:;
  cmps(c,0,(int32_t)c->r[11],1); // 801B1280
  if (crb(c,2)) { goto L_801B12B8; } // 801B1284
L_801B1288:;
  c->r[11]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801B1288
  c->r[12]=c->r[10]+c->r[11]; // 801B128C
  c->r[11]=R32(c->r[10]+c->r[11]); // 801B1290
  c->r[11]=rotl(c->r[11],0)&0xFF000000u; cr0(c,c->r[11]); // 801B1294
  if (crb(c,2)) { goto L_801B12A4; } // 801B1298
  c->r[9]=R32(c->r[12]+0x00000008u); // 801B129C
  goto L_801B12A8; // 801B12A0
L_801B12A4:;
  c->r[9]=c->r[9]+0x00000001u; // 801B12A4
L_801B12A8:;
  cmpu(c,0,c->r[9],c->r[7]); // 801B12A8
  if (crb(c,0)) { IRQCHK(c); goto L_801B1188; } // 801B12AC
  c->r[3]=0u+0xFFFFFFFFu; // 801B12B0
  goto L_801B12D4; // 801B12B4
L_801B12B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B12B8
  if (!crb(c,2)) { goto L_801B12C8; } // 801B12BC
  c->r[3]=c->r[9]|c->r[9]; // 801B12C0
  goto L_801B12D4; // 801B12C4
L_801B12C8:;
  c->r[4]=c->r[8]+c->r[4]; // 801B12C8
  c->r[4]=c->r[4]+0x00000001u; // 801B12CC
  IRQCHK(c); goto L_801B1098; // 801B12D0
L_801B12D4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B12D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B12D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B12DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B12E0
  c->r[1]=c->r[1]+0x00000020u; // 801B12E4
  return; // 801B12E8
}

// entryToPath
void f_801B12F0(Ctx* __restrict c) {
  trace_call(0x801B12F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B12F0
  c->r[0]=c->lr; // 801B12F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B12F8
  c->r[11]=c->r[1]+0x00000020u; // 801B12FC
  c->lr=0x801B1304u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1300
  cmps(c,0,(int32_t)c->r[4],0); // 801B1304
  c->r[7]=R32(c->r[3]+0x00000004u); // 801B1308
  c->r[28]=c->r[5]|c->r[5]; // 801B130C
  c->r[29]=c->r[6]|c->r[6]; // 801B1310
  if (!crb(c,2)) { goto L_801B1320; } // 801B1314
  c->r[3]=0u+0x00000000u; // 801B1318
  goto L_801B14A8; // 801B131C
L_801B1320:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B1320
  c->r[8]=R32(c->r[3]+0x00000010u); // 801B1324
  c->r[4]=c->r[7]+c->r[0]; // 801B1328
  c->r[0]=R32(c->r[7]+c->r[0]); // 801B132C
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B1330
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B1334
  cmps(c,0,(int32_t)c->r[4],0); // 801B1338
  c->r[30]=c->r[8]+c->r[0]; // 801B133C
  if (!crb(c,2)) { goto L_801B134C; } // 801B1340
  c->r[4]=0u+0x00000000u; // 801B1344
  goto L_801B1448; // 801B1348
L_801B134C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B134C
  c->r[4]=c->r[7]+c->r[0]; // 801B1350
  c->r[0]=R32(c->r[7]+c->r[0]); // 801B1354
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B1358
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B135C
  cmps(c,0,(int32_t)c->r[4],0); // 801B1360
  c->r[31]=c->r[8]+c->r[0]; // 801B1364
  if (!crb(c,2)) { goto L_801B1374; } // 801B1368
  c->r[4]=0u+0x00000000u; // 801B136C
  goto L_801B13F0; // 801B1370
L_801B1374:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B1374
  c->r[0]=R32(c->r[7]+c->r[4]); // 801B1378
  c->r[4]=c->r[7]+c->r[4]; // 801B137C
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B1380
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B1384
  c->r[27]=c->r[8]+c->r[0]; // 801B1388
  c->lr=0x801B1390u; f_801B12F0(c); // 801B138C
  cmpu(c,0,c->r[3],c->r[29]); // 801B1390
  c->r[4]=c->r[3]|c->r[3]; // 801B1394
  if (!crb(c,2)) { goto L_801B13A0; } // 801B1398
  goto L_801B13F0; // 801B139C
L_801B13A0:;
  c->r[4]=c->r[3]+0x00000001u; // 801B13A0
  c->r[0]=0u+0x0000002Fu; // 801B13A4
  c->r[6]=c->r[29]-c->r[4]; // 801B13A8
  W8(c->r[28]+c->r[3],c->r[0]); // 801B13AC
  c->r[3]=c->r[28]+c->r[4]; // 801B13B0
  c->r[5]=c->r[6]|c->r[6]; // 801B13B4
  goto L_801B13D4; // 801B13B8
  c->r[0]=c->r[0]|0x00000000u; // 801B13BC
L_801B13C0:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801B13C0
  c->r[27]=c->r[27]+0x00000001u; // 801B13C4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B13C8
  c->r[3]=c->r[3]+0x00000001u; // 801B13CC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B13D0
L_801B13D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B13D4
  if (crb(c,2)) { goto L_801B13E8; } // 801B13D8
  c->r[0]=R8(c->r[27]+0x00000000u); // 801B13DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B13E0
  if (!crb(c,2)) { IRQCHK(c); goto L_801B13C0; } // 801B13E4
L_801B13E8:;
  c->r[0]=c->r[6]-c->r[5]; // 801B13E8
  c->r[4]=c->r[4]+c->r[0]; // 801B13EC
L_801B13F0:;
  cmpu(c,0,c->r[4],c->r[29]); // 801B13F0
  if (!crb(c,2)) { goto L_801B13FC; } // 801B13F4
  goto L_801B1448; // 801B13F8
L_801B13FC:;
  c->r[3]=c->r[4]+0x00000001u; // 801B13FC
  c->r[0]=0u+0x0000002Fu; // 801B1400
  c->r[6]=c->r[29]-c->r[3]; // 801B1404
  W8(c->r[28]+c->r[4],c->r[0]); // 801B1408
  c->r[4]=c->r[28]+c->r[3]; // 801B140C
  c->r[5]=c->r[6]|c->r[6]; // 801B1410
  goto L_801B142C; // 801B1414
L_801B1418:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B1418
  c->r[31]=c->r[31]+0x00000001u; // 801B141C
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B1420
  c->r[4]=c->r[4]+0x00000001u; // 801B1424
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B1428
L_801B142C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B142C
  if (crb(c,2)) { goto L_801B1440; } // 801B1430
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B1434
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1438
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1418; } // 801B143C
L_801B1440:;
  c->r[0]=c->r[6]-c->r[5]; // 801B1440
  c->r[4]=c->r[3]+c->r[0]; // 801B1444
L_801B1448:;
  cmpu(c,0,c->r[4],c->r[29]); // 801B1448
  if (!crb(c,2)) { goto L_801B1458; } // 801B144C
  c->r[3]=c->r[4]|c->r[4]; // 801B1450
  goto L_801B14A8; // 801B1454
L_801B1458:;
  c->r[6]=c->r[4]+0x00000001u; // 801B1458
  c->r[0]=0u+0x0000002Fu; // 801B145C
  c->r[5]=c->r[29]-c->r[6]; // 801B1460
  W8(c->r[28]+c->r[4],c->r[0]); // 801B1464
  c->r[3]=c->r[28]+c->r[6]; // 801B1468
  c->r[4]=c->r[5]|c->r[5]; // 801B146C
  goto L_801B148C; // 801B1470
  c->r[0]=c->r[0]|0x00000000u; // 801B1474
L_801B1478:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B1478
  c->r[30]=c->r[30]+0x00000001u; // 801B147C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B1480
  c->r[3]=c->r[3]+0x00000001u; // 801B1484
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B1488
L_801B148C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B148C
  if (crb(c,2)) { goto L_801B14A0; } // 801B1490
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B1494
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1498
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1478; } // 801B149C
L_801B14A0:;
  c->r[0]=c->r[5]-c->r[4]; // 801B14A0
  c->r[3]=c->r[6]+c->r[0]; // 801B14A4
L_801B14A8:;
  c->r[11]=c->r[1]+0x00000020u; // 801B14A8
  c->lr=0x801B14B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B14AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B14B0
  c->lr=c->r[0]; // 801B14B4
  c->r[1]=c->r[1]+0x00000020u; // 801B14B8
  return; // 801B14BC
}

// fn_801B14C0
void f_801B14C0(Ctx* __restrict c) {
  trace_call(0x801B14C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B14C0
  c->r[0]=c->lr; // 801B14C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B14C8
  c->r[11]=c->r[1]+0x00000030u; // 801B14CC
  c->lr=0x801B14D4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B14D0
  c->r[31]=R32(c->r[3]+0x00000018u); // 801B14D4
  c->r[26]=c->r[4]|c->r[4]; // 801B14D8
  c->r[28]=R32(c->r[3]+0x00000004u); // 801B14DC
  c->r[27]=c->r[5]|c->r[5]; // 801B14E0
  cmps(c,0,(int32_t)c->r[31],0); // 801B14E4
  if (!crb(c,2)) { goto L_801B14F4; } // 801B14E8
  c->r[5]=0u+0x00000000u; // 801B14EC
  goto L_801B1678; // 801B14F0
L_801B14F4:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801B14F4
  c->r[7]=R32(c->r[3]+0x00000010u); // 801B14F8
  c->r[4]=c->r[28]+c->r[0]; // 801B14FC
  c->r[0]=R32(c->r[28]+c->r[0]); // 801B1500
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B1504
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B1508
  cmps(c,0,(int32_t)c->r[4],0); // 801B150C
  c->r[30]=c->r[7]+c->r[0]; // 801B1510
  if (!crb(c,2)) { goto L_801B1520; } // 801B1514
  c->r[5]=0u+0x00000000u; // 801B1518
  goto L_801B1620; // 801B151C
L_801B1520:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B1520
  c->r[4]=c->r[28]+c->r[0]; // 801B1524
  c->r[0]=R32(c->r[28]+c->r[0]); // 801B1528
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B152C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B1530
  cmps(c,0,(int32_t)c->r[4],0); // 801B1534
  c->r[29]=c->r[7]+c->r[0]; // 801B1538
  if (!crb(c,2)) { goto L_801B1548; } // 801B153C
  c->r[5]=0u+0x00000000u; // 801B1540
  goto L_801B15C8; // 801B1544
L_801B1548:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801B1548
  c->r[5]=c->r[26]|c->r[26]; // 801B154C
  c->r[6]=c->r[27]|c->r[27]; // 801B1550
  c->r[0]=R32(c->r[28]+c->r[4]); // 801B1554
  c->r[4]=c->r[28]+c->r[4]; // 801B1558
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B155C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B1560
  c->r[25]=c->r[7]+c->r[0]; // 801B1564
  c->lr=0x801B156Cu; f_801B12F0(c); // 801B1568
  cmpu(c,0,c->r[3],c->r[27]); // 801B156C
  c->r[5]=c->r[3]|c->r[3]; // 801B1570
  if (!crb(c,2)) { goto L_801B157C; } // 801B1574
  goto L_801B15C8; // 801B1578
L_801B157C:;
  c->r[5]=c->r[3]+0x00000001u; // 801B157C
  c->r[0]=0u+0x0000002Fu; // 801B1580
  c->r[6]=c->r[27]-c->r[5]; // 801B1584
  W8(c->r[26]+c->r[3],c->r[0]); // 801B1588
  c->r[3]=c->r[26]+c->r[5]; // 801B158C
  c->r[4]=c->r[6]|c->r[6]; // 801B1590
  goto L_801B15AC; // 801B1594
L_801B1598:;
  c->r[0]=R8(c->r[25]+0x00000000u); // 801B1598
  c->r[25]=c->r[25]+0x00000001u; // 801B159C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B15A0
  c->r[3]=c->r[3]+0x00000001u; // 801B15A4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B15A8
L_801B15AC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B15AC
  if (crb(c,2)) { goto L_801B15C0; } // 801B15B0
  c->r[0]=R8(c->r[25]+0x00000000u); // 801B15B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B15B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1598; } // 801B15BC
L_801B15C0:;
  c->r[0]=c->r[6]-c->r[4]; // 801B15C0
  c->r[5]=c->r[5]+c->r[0]; // 801B15C4
L_801B15C8:;
  cmpu(c,0,c->r[5],c->r[27]); // 801B15C8
  if (!crb(c,2)) { goto L_801B15D4; } // 801B15CC
  goto L_801B1620; // 801B15D0
L_801B15D4:;
  c->r[3]=c->r[5]+0x00000001u; // 801B15D4
  c->r[0]=0u+0x0000002Fu; // 801B15D8
  c->r[6]=c->r[27]-c->r[3]; // 801B15DC
  W8(c->r[26]+c->r[5],c->r[0]); // 801B15E0
  c->r[4]=c->r[26]+c->r[3]; // 801B15E4
  c->r[5]=c->r[6]|c->r[6]; // 801B15E8
  goto L_801B1604; // 801B15EC
L_801B15F0:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801B15F0
  c->r[29]=c->r[29]+0x00000001u; // 801B15F4
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B15F8
  c->r[4]=c->r[4]+0x00000001u; // 801B15FC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B1600
L_801B1604:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B1604
  if (crb(c,2)) { goto L_801B1618; } // 801B1608
  c->r[0]=R8(c->r[29]+0x00000000u); // 801B160C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1610
  if (!crb(c,2)) { IRQCHK(c); goto L_801B15F0; } // 801B1614
L_801B1618:;
  c->r[0]=c->r[6]-c->r[5]; // 801B1618
  c->r[5]=c->r[3]+c->r[0]; // 801B161C
L_801B1620:;
  cmpu(c,0,c->r[5],c->r[27]); // 801B1620
  if (!crb(c,2)) { goto L_801B162C; } // 801B1624
  goto L_801B1678; // 801B1628
L_801B162C:;
  c->r[3]=c->r[5]+0x00000001u; // 801B162C
  c->r[0]=0u+0x0000002Fu; // 801B1630
  c->r[6]=c->r[27]-c->r[3]; // 801B1634
  W8(c->r[26]+c->r[5],c->r[0]); // 801B1638
  c->r[4]=c->r[26]+c->r[3]; // 801B163C
  c->r[5]=c->r[6]|c->r[6]; // 801B1640
  goto L_801B165C; // 801B1644
L_801B1648:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B1648
  c->r[30]=c->r[30]+0x00000001u; // 801B164C
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B1650
  c->r[4]=c->r[4]+0x00000001u; // 801B1654
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B1658
L_801B165C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B165C
  if (crb(c,2)) { goto L_801B1670; } // 801B1660
  c->r[0]=R8(c->r[30]+0x00000000u); // 801B1664
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B1668
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1648; } // 801B166C
L_801B1670:;
  c->r[0]=c->r[6]-c->r[5]; // 801B1670
  c->r[5]=c->r[3]+c->r[0]; // 801B1674
L_801B1678:;
  cmpu(c,0,c->r[5],c->r[27]); // 801B1678
  if (!crb(c,2)) { goto L_801B1694; } // 801B167C
  c->r[3]=c->r[26]+c->r[27]; // 801B1680
  c->r[0]=0u+0x00000000u; // 801B1684
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 801B1688
  c->r[3]=0u+0x00000000u; // 801B168C
  goto L_801B16D8; // 801B1690
L_801B1694:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801B1694
  c->r[0]=R32(c->r[28]+c->r[0]); // 801B1698
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801B169C
  if (crb(c,2)) { goto L_801B16CC; } // 801B16A0
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 801B16A4
  cmpu(c,0,c->r[5],c->r[0]); // 801B16A8
  if (!crb(c,2)) { goto L_801B16C0; } // 801B16AC
  c->r[0]=0u+0x00000000u; // 801B16B0
  W8(c->r[26]+c->r[5],c->r[0]); // 801B16B4
  c->r[3]=0u+0x00000000u; // 801B16B8
  goto L_801B16D8; // 801B16BC
L_801B16C0:;
  c->r[0]=0u+0x0000002Fu; // 801B16C0
  W8(c->r[26]+c->r[5],c->r[0]); // 801B16C4
  c->r[5]=c->r[5]+0x00000001u; // 801B16C8
L_801B16CC:;
  c->r[0]=0u+0x00000000u; // 801B16CC
  W8(c->r[26]+c->r[5],c->r[0]); // 801B16D0
  c->r[3]=0u+0x00000001u; // 801B16D4
L_801B16D8:;
  c->r[11]=c->r[1]+0x00000030u; // 801B16D8
  c->lr=0x801B16E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B16DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B16E0
  c->lr=c->r[0]; // 801B16E4
  c->r[1]=c->r[1]+0x00000030u; // 801B16E8
  return; // 801B16EC
}

// ARCGetStartAddrInMem
void f_801B16F0(Ctx* __restrict c) {
  trace_call(0x801B16F0u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B16F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B16F4
  c->r[3]=R32(c->r[4]+0x00000000u); // 801B16F8
  c->r[3]=c->r[3]+c->r[0]; // 801B16FC
  return; // 801B1700
}

// ARCGetStartOffset
void f_801B1710(Ctx* __restrict c) {
  trace_call(0x801B1710u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B1710
  return; // 801B1714
}

// ARCGetLength
void f_801B1720(Ctx* __restrict c) {
  trace_call(0x801B1720u);
  c->r[3]=0u+0x00000001u; // 801B1720
  return; // 801B1724
}

// fn_801B1730
void f_801B1730(Ctx* __restrict c) {
  trace_call(0x801B1730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1730
  c->r[0]=c->lr; // 801B1734
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B173C
  c->r[31]=c->r[3]|c->r[3]; // 801B1740
  c->lr=0x801B1748u; f_801B1070(c); // 801B1744
  cmps(c,0,(int32_t)c->r[3],0); // 801B1748
  c->r[4]=R32(c->r[31]+0x00000004u); // 801B174C
  if (crb(c,0)) { goto L_801B1764; } // 801B1750
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801B1754
  c->r[0]=R32(c->r[4]+c->r[0]); // 801B1758
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801B175C
  if (!crb(c,2)) { goto L_801B176C; } // 801B1760
L_801B1764:;
  c->r[3]=0u+0x00000000u; // 801B1764
  goto L_801B1774; // 801B1768
L_801B176C:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 801B176C
  c->r[3]=0u+0x00000001u; // 801B1770
L_801B1774:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1778
  c->lr=c->r[0]; // 801B177C
  c->r[1]=c->r[1]+0x00000010u; // 801B1780
  return; // 801B1784
}

// fn_801B1790
void f_801B1790(Ctx* __restrict c) {
  trace_call(0x801B1790u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1790
  c->r[0]=c->lr; // 801B1794
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1798
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B179C
  c->r[31]=c->r[5]|c->r[5]; // 801B17A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B17A4
  c->r[30]=c->r[3]|c->r[3]; // 801B17A8
  c->lr=0x801B17B0u; f_801B1070(c); // 801B17AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B17B0
  c->r[5]=R32(c->r[30]+0x00000004u); // 801B17B4
  if (crb(c,0)) { goto L_801B17CC; } // 801B17B8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801B17BC
  c->r[0]=R32(c->r[5]+c->r[4]); // 801B17C0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801B17C4
  if (!crb(c,2)) { goto L_801B17D4; } // 801B17C8
L_801B17CC:;
  c->r[3]=0u+0x00000000u; // 801B17CC
  goto L_801B17F4; // 801B17D0
L_801B17D4:;
  c->r[0]=c->r[3]+0x00000001u; // 801B17D4
  W32(c->r[31]+0x00000004u,c->r[3]); // 801B17D8
  c->r[4]=c->r[5]+c->r[4]; // 801B17DC
  c->r[3]=0u+0x00000001u; // 801B17E0
  W32(c->r[31]+0x00000000u,c->r[30]); // 801B17E4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801B17E8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B17EC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B17F0
L_801B17F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B17F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B17F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B17FC
  c->lr=c->r[0]; // 801B1800
  c->r[1]=c->r[1]+0x00000010u; // 801B1804
  return; // 801B1808
}

// ARCReadDir
void f_801B1810(Ctx* __restrict c) {
  trace_call(0x801B1810u);
  c->r[7]=R32(c->r[3]+0x00000008u); // 801B1810
  c->r[9]=R32(c->r[3]+0x00000000u); // 801B1814
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 801B1818
  c->r[8]=R32(c->r[9]+0x00000004u); // 801B181C
  c->r[6]=c->r[8]+c->r[0]; // 801B1820
  c->r[0]=c->r[0]|0x00000000u; // 801B1824
L_801B1828:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B1828
  cmpu(c,0,c->r[7],c->r[0]); // 801B182C
  if (!crb(c,1)) { goto L_801B1840; } // 801B1830
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B1834
  cmpu(c,0,c->r[0],c->r[7]); // 801B1838
  if (crb(c,1)) { goto L_801B1848; } // 801B183C
L_801B1840:;
  c->r[3]=0u+0x00000000u; // 801B1840
  return; // 801B1844
L_801B1848:;
  W32(c->r[4]+0x00000000u,c->r[9]); // 801B1848
  W32(c->r[4]+0x00000004u,c->r[7]); // 801B184C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B1850
  c->r[5]=rotl(c->r[0],0)&0xFF000000u; // 801B1854
  c->r[0]=0u-c->r[5]; // 801B1858
  c->r[0]=c->r[0]|c->r[5]; // 801B185C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801B1860
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B1864
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B1868
  c->r[5]=R32(c->r[9]+0x00000010u); // 801B186C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801B1870
  c->r[5]=c->r[5]+c->r[0]; // 801B1874
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 801B1878
  c->r[0]=R8(c->r[5]+0x00000000u); // 801B187C
  cmps(c,0,(int32_t)c->r[0],46); // 801B1880
  if (!crb(c,2)) { goto L_801B18A0; } // 801B1884
  c->r[0]=R8(c->r[5]+0x00000001u); // 801B1888
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B188C
  if (!crb(c,2)) { goto L_801B18A0; } // 801B1890
  c->r[6]=c->r[6]+0x0000000Cu; // 801B1894
  c->r[7]=c->r[7]+0x00000001u; // 801B1898
  IRQCHK(c); goto L_801B1828; // 801B189C
L_801B18A0:;
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 801B18A0
  c->r[0]=R32(c->r[8]+c->r[4]); // 801B18A4
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801B18A8
  if (crb(c,2)) { goto L_801B18BC; } // 801B18AC
  c->r[4]=c->r[8]+c->r[4]; // 801B18B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B18B4
  goto L_801B18C0; // 801B18B8
L_801B18BC:;
  c->r[0]=c->r[7]+0x00000001u; // 801B18BC
L_801B18C0:;
  W32(c->r[3]+0x00000008u,c->r[0]); // 801B18C0
  c->r[3]=0u+0x00000001u; // 801B18C4
  return; // 801B18C8
}

// fn_801B18D0
void f_801B18D0(Ctx* __restrict c) {
  trace_call(0x801B18D0u);
  c->r[3]=0u+0x00000001u; // 801B18D0
  return; // 801B18D4
}

// fn_801B18E0
void f_801B18E0(Ctx* __restrict c) {
  trace_call(0x801B18E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B18E0
  c->r[0]=c->lr; // 801B18E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B18E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B18EC
  c->r[31]=c->r[3]|c->r[3]; // 801B18F0
  c->r[4]=R32(c->r[3]+0x00000000u); // 801B18F4
  c->r[0]=c->r[4]+0xFFE00000u; // 801B18F8
  cmpu(c,0,c->r[0],0x0000AF30u); // 801B18FC
  if (crb(c,2)) { goto L_801B191C; } // 801B1900
  c->r[5]=0u+0x803A0000u; // 801B1904
  c->r[3]=c->r[13]+0xFFFFACF0u; // 801B1908
  c->r[5]=c->r[5]+0xFFFFBD48u; // 801B190C
  c->r[4]=0u+0x00000019u; // 801B1910
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B1914
  c->lr=0x801B191Cu; f_80033390(c); // 801B1918
L_801B191C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B191C
  c->r[3]=0u+0x00000000u; // 801B1920
  c->r[5]=0u+0x00000001u; // 801B1924
  c->r[0]=c->r[0]+c->r[31]; // 801B1928
  W32(c->r[31]+0x00000008u,c->r[0]); // 801B192C
  goto L_801B19D4; // 801B1930
  c->r[0]=c->r[0]|0x00000000u; // 801B1934
L_801B1938:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B1938
  c->r[6]=rotl(c->r[3],3)&0x0007FFF8u; // 801B193C
  c->r[0]=R32(c->r[4]+c->r[6]); // 801B1940
  cmps(c,0,(int32_t)c->r[0],0); // 801B1944
  if (crb(c,2)) { goto L_801B1980; } // 801B1948
  c->r[0]=c->r[31]+c->r[0]; // 801B194C
  W32(c->r[4]+c->r[6],c->r[0]); // 801B1950
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B1954
  c->r[4]=R32(c->r[4]+c->r[6]); // 801B1958
  c->r[0]=R8(c->r[4]+0x00000023u); // 801B195C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1960
  if (!crb(c,2)) { goto L_801B1980; } // 801B1964
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B1968
  c->r[0]=c->r[31]+c->r[0]; // 801B196C
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B1970
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B1974
  c->r[4]=R32(c->r[4]+c->r[6]); // 801B1978
  W8(c->r[4]+0x00000023u,c->r[5]); // 801B197C
L_801B1980:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B1980
  c->r[4]=c->r[0]+c->r[6]; // 801B1984
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B1988
  cmps(c,0,(int32_t)c->r[0],0); // 801B198C
  if (crb(c,2)) { goto L_801B19D0; } // 801B1990
  c->r[0]=c->r[31]+c->r[0]; // 801B1994
  W32(c->r[4]+0x00000004u,c->r[0]); // 801B1998
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B199C
  c->r[4]=c->r[0]+c->r[6]; // 801B19A0
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B19A4
  c->r[0]=R8(c->r[4]+0x00000002u); // 801B19A8
  cmps(c,0,(int32_t)c->r[0],0); // 801B19AC
  if (!crb(c,2)) { goto L_801B19D0; } // 801B19B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B19B4
  c->r[0]=c->r[31]+c->r[0]; // 801B19B8
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B19BC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B19C0
  c->r[4]=c->r[0]+c->r[6]; // 801B19C4
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B19C8
  W8(c->r[4]+0x00000002u,c->r[5]); // 801B19CC
L_801B19D0:;
  c->r[3]=c->r[3]+0x00000001u; // 801B19D0
L_801B19D4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B19D4
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801B19D8
  cmpu(c,0,c->r[4],c->r[0]); // 801B19DC
  if (crb(c,0)) { IRQCHK(c); goto L_801B1938; } // 801B19E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B19E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B19E8
  c->lr=c->r[0]; // 801B19EC
  c->r[1]=c->r[1]+0x00000010u; // 801B19F0
  return; // 801B19F4
}

// fn_801B1A00
void f_801B1A00(Ctx* __restrict c) {
  trace_call(0x801B1A00u);
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B1A00
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B1A04
  c->r[0]=divwu(c->r[4],c->r[5]); // 801B1A08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801B1A0C
  c->r[0]=c->r[4]-c->r[0]; // 801B1A10
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B1A14
  c->r[3]=c->r[3]+c->r[0]; // 801B1A18
  return; // 801B1A1C
}

// fn_801B1A20
void f_801B1A20(Ctx* __restrict c) {
  trace_call(0x801B1A20u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1A20
  c->r[0]=c->lr; // 801B1A24
  W32(c->r[1]+0x00000094u,c->r[0]); // 801B1A28
  c->r[11]=c->r[1]+0x00000090u; // 801B1A2C
  c->lr=0x801B1A34u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1A30
  c->r[10]=0u+0x80310000u; // 801B1A34
  {uint32_t ea=c->r[10]+0xFFFFA030u; c->r[9]=R32(ea); c->r[10]=ea;} // 801B1A38
  c->r[11]=c->r[6]+0x00000001u; // 801B1A3C
  c->r[25]=c->r[4]|c->r[4]; // 801B1A40
  c->r[4]=rotl(c->r[11],1)&0x00000001u; // 801B1A44
  c->r[8]=R32(c->r[10]+0x00000004u); // 801B1A48
  c->r[31]=c->r[7]|c->r[7]; // 801B1A4C
  c->r[0]=R32(c->r[10]+0x00000008u); // 801B1A50
  c->r[4]=c->r[4]+c->r[11]; // 801B1A54
  c->r[18]=R32(c->r[10]+0x0000000Cu); // 801B1A58
  c->r[27]=R32(c->r[10]+0x00000010u); // 801B1A5C
  c->r[30]=c->r[6]|c->r[6]; // 801B1A60
  c->r[26]=R32(c->r[10]+0x00000014u); // 801B1A64
  c->r[28]=c->r[3]|c->r[3]; // 801B1A68
  c->r[24]=R32(c->r[10]+0x00000018u); // 801B1A6C
  c->r[29]=c->r[5]|c->r[5]; // 801B1A70
  c->r[23]=R32(c->r[10]+0x0000001Cu); // 801B1A74
  c->r[5]=sraw(c,c->r[4],1); // 801B1A78
  c->r[22]=R32(c->r[10]+0x00000020u); // 801B1A7C
  c->r[3]=c->r[31]|c->r[31]; // 801B1A80
  c->r[21]=R32(c->r[10]+0x00000024u); // 801B1A84
  c->r[4]=0u+0x00000000u; // 801B1A88
  c->r[20]=R32(c->r[10]+0x00000028u); // 801B1A8C
  c->r[19]=R32(c->r[10]+0x0000002Cu); // 801B1A90
  c->r[12]=R32(c->r[10]+0x00000030u); // 801B1A94
  c->r[11]=R32(c->r[10]+0x00000034u); // 801B1A98
  c->r[7]=R32(c->r[10]+0x00000038u); // 801B1A9C
  c->r[6]=R32(c->r[10]+0x0000003Cu); // 801B1AA0
  W32(c->r[1]+0x00000008u,c->r[9]); // 801B1AA4
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 801B1AA8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B1AAC
  W32(c->r[1]+0x00000014u,c->r[18]); // 801B1AB0
  W32(c->r[1]+0x00000018u,c->r[27]); // 801B1AB4
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 801B1AB8
  W32(c->r[1]+0x00000020u,c->r[24]); // 801B1ABC
  W32(c->r[1]+0x00000024u,c->r[23]); // 801B1AC0
  W32(c->r[1]+0x00000028u,c->r[22]); // 801B1AC4
  W32(c->r[1]+0x0000002Cu,c->r[21]); // 801B1AC8
  W32(c->r[1]+0x00000030u,c->r[20]); // 801B1ACC
  W32(c->r[1]+0x00000034u,c->r[19]); // 801B1AD0
  W32(c->r[1]+0x00000038u,c->r[12]); // 801B1AD4
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 801B1AD8
  W32(c->r[1]+0x00000040u,c->r[7]); // 801B1ADC
  W32(c->r[1]+0x00000044u,c->r[6]); // 801B1AE0
  c->lr=0x801B1AE8u; f_80004714(c); // 801B1AE4
  c->r[0]=rotl(c->r[25],0)&0x00000001u; cr0(c,c->r[0]); // 801B1AE8
  if (!crb(c,2)) { goto L_801B1B0C; } // 801B1AEC
  c->r[11]=0u+0x00000000u; // 801B1AF0
  c->r[12]=0u+0x0000007Fu; // 801B1AF4
  c->r[5]=0u+0x00000000u; // 801B1AF8
  c->r[27]=0u+0x00000000u; // 801B1AFC
  c->r[26]=0u+0x00000000u; // 801B1B00
  c->r[25]=0u+0x00000000u; // 801B1B04
  goto L_801B1B24; // 801B1B08
L_801B1B0C:;
  c->r[11]=R32(c->r[28]+0x00000000u); // 801B1B0C
  c->r[12]=R32(c->r[28]+0x00000004u); // 801B1B10
  c->r[5]=R32(c->r[28]+0x00000008u); // 801B1B14
  c->r[27]=R32(c->r[28]+0x0000000Cu); // 801B1B18
  c->r[26]=R32(c->r[28]+0x00000010u); // 801B1B1C
  c->r[25]=R32(c->r[28]+0x00000014u); // 801B1B20
L_801B1B24:;
  c->r[3]=0u+0x00010000u; // 801B1B24
  c->r[24]=c->r[1]+0x00000008u; // 801B1B28
  {uint32_t ea=c->r[2]+0xFFFFA568u; c->f[2]=RF64(ea);} // 801B1B2C
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801B1B30
  c->r[6]=0u+0x00000000u; // 801B1B34
  c->r[0]=0u+0xFFFF0000u; // 801B1B38
  c->r[23]=0u+0x43300000u; // 801B1B3C
  c->ctr=c->r[30]; // 801B1B40
  cmps(c,0,(int32_t)c->r[30],0); // 801B1B44
  if (!crb(c,1)) { goto L_801B1CC4; } // 801B1B48
L_801B1B4C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801B1B4C
  c->r[10]=0u+0x00000000u; // 801B1B50
  c->r[9]=0u+0x00000000u; // 801B1B54
  c->r[8]=0u+0x00000000u; // 801B1B58
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[11]); // 801B1B5C
  c->r[7]=0u+0x00000000u; // 801B1B60
  c->r[29]=c->r[29]+0x00000002u; // 801B1B64
  if (!crb(c,0)) { goto L_801B1B70; } // 801B1B68
  c->r[7]=0u+0x00000001u; // 801B1B6C
L_801B1B70:;
  c->r[19]=c->r[5]-c->r[11]; // 801B1B70
  c->r[5]=sraw(c,c->r[19],31); // 801B1B74
  c->r[27]=c->r[5]^c->r[19]; // 801B1B78
  c->r[27]=c->r[27]-c->r[5]; // 801B1B7C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[12]); // 801B1B80
  if (crb(c,0)) { goto L_801B1B90; } // 801B1B84
  c->r[8]=0u+0x00000001u; // 801B1B88
  c->r[27]=c->r[27]-c->r[12]; // 801B1B8C
L_801B1B90:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 801B1B90
  c->r[5]=c->r[5]+c->r[12]; // 801B1B94
  c->r[26]=sraw(c,c->r[5],1); // 801B1B98
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[26]); // 801B1B9C
  if (crb(c,0)) { goto L_801B1BAC; } // 801B1BA0
  c->r[9]=0u+0x00000001u; // 801B1BA4
  c->r[27]=c->r[27]-c->r[26]; // 801B1BA8
L_801B1BAC:;
  c->r[5]=rotl(c->r[26],1)&0x00000001u; // 801B1BAC
  c->r[5]=c->r[5]+c->r[26]; // 801B1BB0
  c->r[25]=sraw(c,c->r[5],1); // 801B1BB4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[25]); // 801B1BB8
  if (crb(c,0)) { goto L_801B1BC8; } // 801B1BBC
  c->r[10]=0u+0x00000001u; // 801B1BC0
  c->r[27]=c->r[27]-c->r[25]; // 801B1BC4
L_801B1BC8:;
  c->r[20]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[10]); // 801B1BC8
  c->r[5]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801B1BCC
  c->r[19]=rotl(c->r[25],1)&0x00000001u; // 801B1BD0
  c->r[5]=addc(c,~c->r[5],0x00000001u,1); // 801B1BD4
  c->r[19]=c->r[19]+c->r[25]; // 801B1BD8
  c->r[21]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 801B1BDC
  c->r[19]=sraw(c,c->r[19],1); // 801B1BE0
  c->r[22]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[9]); // 801B1BE4
  c->r[21]=c->r[20]+c->r[21]; // 801B1BE8
  c->r[22]=c->r[19]+c->r[22]; // 801B1BEC
  c->r[22]=c->r[21]+c->r[22]; // 801B1BF0
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[22]); // 801B1BF4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801B1BF8
  if (!crb(c,1)) { goto L_801B1C04; } // 801B1BFC
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801B1C00
L_801B1C04:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801B1C04
  if (!crb(c,0)) { goto L_801B1C10; } // 801B1C08
  c->r[5]=0u+0xFFFF0000u; // 801B1C0C
L_801B1C10:;
  c->r[11]=c->r[11]+c->r[5]; // 801B1C10
  cmps(c,0,(int32_t)c->r[11],32767); // 801B1C14
  if (!crb(c,1)) { goto L_801B1C20; } // 801B1C18
  c->r[11]=0u+0x00007FFFu; // 801B1C1C
L_801B1C20:;
  cmps(c,0,(int32_t)c->r[11],-32768); // 801B1C20
  if (!crb(c,0)) { goto L_801B1C2C; } // 801B1C24
  c->r[11]=0u+0xFFFF8000u; // 801B1C28
L_801B1C2C:;
  c->r[12]=c->r[12]^0x80000000u; // 801B1C2C
  c->r[18]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801B1C30
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 801B1C34
  c->r[22]=rotl(c->r[6],0)&0x00000001u; // 801B1C38
  c->r[9]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801B1C3C
  c->r[8]=c->r[10]+c->r[18]; // 801B1C40
  W32(c->r[1]+0x00000048u,c->r[23]); // 801B1C44
  c->r[8]=c->r[9]+c->r[8]; // 801B1C48
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801B1C4C
  c->r[12]=rotl(c->r[6],1)&0x00000001u; // 801B1C50
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 801B1C54
  c->r[9]=c->r[9]+c->r[18]; // 801B1C58
  {uint32_t ea=c->r[24]+c->r[8]; c->f[0]=RF64(ea);} // 801B1C5C
  c->r[8]=c->r[12]+c->r[6]; // 801B1C60
  c->f[1]=c->f[1]-c->f[2]; // 801B1C64
  c->r[12]=sraw(c,c->r[8],1); // 801B1C68
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801B1C6C
  c->r[7]=c->r[10]+c->r[9]; // 801B1C70
  c->r[7]=c->r[8]+c->r[7]; // 801B1C74
  c->r[22]=c->r[22]+0xFFFFFFFFu; // 801B1C78
  c->f[0]=c->f[1]*c->f[0]; // 801B1C7C
  c->r[9]=rotl(c->r[22],0)&0x00000004u; // 801B1C80
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 801B1C84
  c->r[8]=R8(c->r[31]+c->r[12]); // 801B1C88
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[7]<<((c->r[9])&31)); // 801B1C8C
  c->r[7]=c->r[8]|c->r[7]; // 801B1C90
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B1C94
  W8(c->r[31]+c->r[12],c->r[7]); // 801B1C98
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 801B1C9C
  c->r[12]=R32(c->r[1]+0x00000054u); // 801B1CA0
  cmps(c,0,(int32_t)c->r[12],127); // 801B1CA4
  if (crb(c,1)) { goto L_801B1CB0; } // 801B1CA8
  c->r[12]=0u+0x0000007Fu; // 801B1CAC
L_801B1CB0:;
  cmps(c,0,(int32_t)c->r[12],24576); // 801B1CB0
  if (crb(c,0)) { goto L_801B1CBC; } // 801B1CB4
  c->r[12]=0u+0x00006000u; // 801B1CB8
L_801B1CBC:;
  c->r[6]=c->r[6]+0x00000001u; // 801B1CBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B1B4C; } // 801B1CC0
L_801B1CC4:;
  W32(c->r[28]+0x00000000u,c->r[11]); // 801B1CC4
  c->r[11]=c->r[1]+0x00000090u; // 801B1CC8
  c->r[3]=c->r[30]|c->r[30]; // 801B1CCC
  W32(c->r[28]+0x00000004u,c->r[12]); // 801B1CD0
  W32(c->r[28]+0x00000008u,c->r[5]); // 801B1CD4
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 801B1CD8
  W32(c->r[28]+0x00000010u,c->r[26]); // 801B1CDC
  W32(c->r[28]+0x00000014u,c->r[25]); // 801B1CE0
  c->lr=0x801B1CE8u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1CE4
  c->r[0]=R32(c->r[1]+0x00000094u); // 801B1CE8
  c->lr=c->r[0]; // 801B1CEC
  c->r[1]=c->r[1]+0x00000090u; // 801B1CF0
  return; // 801B1CF4
}

// IPCInit
void f_801B1D00(Ctx* __restrict c) {
  trace_call(0x801B1D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1D00
  c->r[0]=c->lr; // 801B1D04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1D08
  c->r[0]=R8(c->r[13]+0xFFFFC3C8u); // 801B1D0C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1D10
  if (!crb(c,2)) { goto L_801B1D3C; } // 801B1D14
  c->lr=0x801B1D1Cu; f_8012B1F0(c); // 801B1D18
  W32(c->r[13]+0xFFFFC3D8u,c->r[3]); // 801B1D1C
  c->lr=0x801B1D24u; f_8012B200(c); // 801B1D20
  c->r[4]=R32(c->r[13]+0xFFFFC3D8u); // 801B1D24
  c->r[0]=0u+0x00000001u; // 801B1D28
  W32(c->r[13]+0xFFFFC3D4u,c->r[3]); // 801B1D2C
  W32(c->r[13]+0xFFFFC3D0u,c->r[4]); // 801B1D30
  W32(c->r[13]+0xFFFFC3CCu,c->r[3]); // 801B1D34
  W8(c->r[13]+0xFFFFC3C8u,c->r[0]); // 801B1D38
L_801B1D3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1D3C
  c->lr=c->r[0]; // 801B1D40
  c->r[1]=c->r[1]+0x00000010u; // 801B1D44
  return; // 801B1D48
}

// IPCReInit
void f_801B1D50(Ctx* __restrict c) {
  trace_call(0x801B1D50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1D50
  c->r[0]=c->lr; // 801B1D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1D58
  c->r[0]=0u+0x00000000u; // 801B1D5C
  W8(c->r[13]+0xFFFFC3C8u,c->r[0]); // 801B1D60
  c->lr=0x801B1D68u; f_8012B1F0(c); // 801B1D64
  W32(c->r[13]+0xFFFFC3D8u,c->r[3]); // 801B1D68
  c->lr=0x801B1D70u; f_8012B200(c); // 801B1D6C
  c->r[4]=R32(c->r[13]+0xFFFFC3D8u); // 801B1D70
  c->r[0]=0u+0x00000001u; // 801B1D74
  W32(c->r[13]+0xFFFFC3D4u,c->r[3]); // 801B1D78
  W32(c->r[13]+0xFFFFC3D0u,c->r[4]); // 801B1D7C
  W32(c->r[13]+0xFFFFC3CCu,c->r[3]); // 801B1D80
  W8(c->r[13]+0xFFFFC3C8u,c->r[0]); // 801B1D84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1D88
  c->lr=c->r[0]; // 801B1D8C
  c->r[1]=c->r[1]+0x00000010u; // 801B1D90
  return; // 801B1D94
}

// IPCReadReg
void f_801B1DA0(Ctx* __restrict c) {
  trace_call(0x801B1DA0u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1DA0
  c->r[3]=0u+0xCD000000u; // 801B1DA4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B1DA8
  return; // 801B1DAC
}

// IPCWriteReg
void f_801B1DB0(Ctx* __restrict c) {
  trace_call(0x801B1DB0u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801B1DB0
  c->r[3]=0u+0xCD000000u; // 801B1DB4
  W32(c->r[3]+c->r[0],c->r[4]); // 801B1DB8
  return; // 801B1DBC
}

// IPCGetBufferHi
void f_801B1DC0(Ctx* __restrict c) {
  trace_call(0x801B1DC0u);
  c->r[3]=R32(c->r[13]+0xFFFFC3D0u); // 801B1DC0
  return; // 801B1DC4
}

// IPCGetBufferLo
void f_801B1DD0(Ctx* __restrict c) {
  trace_call(0x801B1DD0u);
  c->r[3]=R32(c->r[13]+0xFFFFC3CCu); // 801B1DD0
  return; // 801B1DD4
}

// IPCSetBufferLo
void f_801B1DE0(Ctx* __restrict c) {
  trace_call(0x801B1DE0u);
  W32(c->r[13]+0xFFFFC3CCu,c->r[3]); // 801B1DE0
  return; // 801B1DE4
}

// strnlen
void f_801B1DF0(Ctx* __restrict c) {
  trace_call(0x801B1DF0u);
  c->r[5]=c->r[3]|c->r[3]; // 801B1DF0
  goto L_801B1DFC; // 801B1DF4
L_801B1DF8:;
  c->r[5]=c->r[5]+0x00000001u; // 801B1DF8
L_801B1DFC:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801B1DFC
  cmps(c,0,(int32_t)c->r[0],0); // 801B1E00
  if (crb(c,2)) { goto L_801B1E14; } // 801B1E04
  cmps(c,0,(int32_t)c->r[4],0); // 801B1E08
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B1E0C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B1DF8; } // 801B1E10
L_801B1E14:;
  c->r[3]=c->r[5]-c->r[3]; // 801B1E14
  return; // 801B1E18
}

// IpcReplyHandler
void f_801B1E20(Ctx* __restrict c) {
  trace_call(0x801B1E20u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1E20
  c->r[0]=c->lr; // 801B1E24
  c->r[3]=0u+0x00000002u; // 801B1E28
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801B1E2C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801B1E30
  W32(c->r[1]+0x000002D8u,c->r[30]); // 801B1E34
  c->r[30]=c->r[4]|c->r[4]; // 801B1E38
  W32(c->r[1]+0x000002D4u,c->r[29]); // 801B1E3C
  W32(c->r[1]+0x000002D0u,c->r[28]); // 801B1E40
  c->lr=0x801B1E48u; f_801B1DA0(c); // 801B1E44
  cmps(c,0,(int32_t)c->r[3],0); // 801B1E48
  if (crb(c,2)) { goto L_801B2058; } // 801B1E4C
  c->r[31]=c->r[3]+0x80000000u; // 801B1E50
  c->r[3]=0u+0x00000001u; // 801B1E54
  c->lr=0x801B1E5Cu; f_801B1DA0(c); // 801B1E58
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 801B1E5C
  c->r[3]=0u+0x00000001u; // 801B1E60
  c->r[4]=c->r[0]|0x00000004u; // 801B1E64
  c->lr=0x801B1E6Cu; f_801B1DB0(c); // 801B1E68
  c->r[3]=0u+0xCD000000u; // 801B1E6C
  c->r[0]=0u+0x40000000u; // 801B1E70
  W32(c->r[3]+0x00000030u,c->r[0]); // 801B1E74
  c->r[3]=c->r[31]|c->r[31]; // 801B1E78
  c->r[4]=0u+0x00000020u; // 801B1E7C
  c->lr=0x801B1E84u; f_80120C10(c); // 801B1E80
  c->r[0]=R32(c->r[31]+0x00000008u); // 801B1E84
  cmps(c,0,(int32_t)c->r[0],6); // 801B1E88
  if (crb(c,2)) { goto L_801B1EE0; } // 801B1E8C
  if (!crb(c,0)) { goto L_801B1EA0; } // 801B1E90
  cmps(c,0,(int32_t)c->r[0],3); // 801B1E94
  if (crb(c,2)) { goto L_801B1EAC; } // 801B1E98
  goto L_801B1FDC; // 801B1E9C
L_801B1EA0:;
  cmps(c,0,(int32_t)c->r[0],8); // 801B1EA0
  if (!crb(c,0)) { goto L_801B1FDC; } // 801B1EA4
  goto L_801B1F18; // 801B1EA8
L_801B1EAC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801B1EAC
  cmps(c,0,(int32_t)c->r[3],0); // 801B1EB0
  if (crb(c,2)) { goto L_801B1EC0; } // 801B1EB4
  c->r[0]=c->r[3]+0x80000000u; // 801B1EB8
  goto L_801B1EC4; // 801B1EBC
L_801B1EC0:;
  c->r[0]=0u+0x00000000u; // 801B1EC0
L_801B1EC4:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B1EC4
  c->r[4]=R32(c->r[31]+0x00000004u); // 801B1EC8
  cmps(c,0,(int32_t)c->r[4],0); // 801B1ECC
  if (!crb(c,1)) { goto L_801B1FDC; } // 801B1ED0
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801B1ED4
  c->lr=0x801B1EDCu; f_80120C10(c); // 801B1ED8
  goto L_801B1FDC; // 801B1EDC
L_801B1EE0:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B1EE0
  cmps(c,0,(int32_t)c->r[3],0); // 801B1EE4
  if (crb(c,2)) { goto L_801B1EF4; } // 801B1EE8
  c->r[0]=c->r[3]+0x80000000u; // 801B1EEC
  goto L_801B1EF8; // 801B1EF0
L_801B1EF4:;
  c->r[0]=0u+0x00000000u; // 801B1EF4
L_801B1EF8:;
  W32(c->r[31]+0x00000018u,c->r[0]); // 801B1EF8
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B1EFC
  c->r[4]=R32(c->r[31]+0x00000014u); // 801B1F00
  c->lr=0x801B1F08u; f_80120C10(c); // 801B1F04
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B1F08
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801B1F0C
  c->lr=0x801B1F14u; f_80120C10(c); // 801B1F10
  goto L_801B1FDC; // 801B1F14
L_801B1F18:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B1F18
  cmps(c,0,(int32_t)c->r[3],0); // 801B1F1C
  if (crb(c,2)) { goto L_801B1F2C; } // 801B1F20
  c->r[3]=c->r[3]+0x80000000u; // 801B1F24
  goto L_801B1F30; // 801B1F28
L_801B1F2C:;
  c->r[3]=0u+0x00000000u; // 801B1F2C
L_801B1F30:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 801B1F30
  c->r[4]=R32(c->r[31]+0x00000010u); // 801B1F34
  c->r[0]=R32(c->r[31]+0x00000014u); // 801B1F38
  c->r[0]=c->r[4]+c->r[0]; // 801B1F3C
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B1F40
  c->lr=0x801B1F48u; f_80120C10(c); // 801B1F44
  c->r[28]=0u+0x00000000u; // 801B1F48
  c->r[29]=0u+0x00000000u; // 801B1F4C
  goto L_801B1F94; // 801B1F50
L_801B1F54:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B1F54
  c->r[3]=R32(c->r[3]+c->r[29]); // 801B1F58
  cmps(c,0,(int32_t)c->r[3],0); // 801B1F5C
  if (crb(c,2)) { goto L_801B1F6C; } // 801B1F60
  c->r[0]=c->r[3]+0x80000000u; // 801B1F64
  goto L_801B1F70; // 801B1F68
L_801B1F6C:;
  c->r[0]=0u+0x00000000u; // 801B1F6C
L_801B1F70:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B1F70
  W32(c->r[3]+c->r[29],c->r[0]); // 801B1F74
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B1F78
  c->r[4]=c->r[3]+c->r[29]; // 801B1F7C
  c->r[3]=R32(c->r[3]+c->r[29]); // 801B1F80
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B1F84
  c->lr=0x801B1F8Cu; f_80120C10(c); // 801B1F88
  c->r[28]=c->r[28]+0x00000001u; // 801B1F8C
  c->r[29]=c->r[29]+0x00000008u; // 801B1F90
L_801B1F94:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B1F94
  c->r[0]=R32(c->r[31]+0x00000014u); // 801B1F98
  c->r[0]=c->r[3]+c->r[0]; // 801B1F9C
  cmpu(c,0,c->r[28],c->r[0]); // 801B1FA0
  if (crb(c,0)) { IRQCHK(c); goto L_801B1F54; } // 801B1FA4
  c->r[0]=R32(c->r[13]+0xFFFFC3E0u); // 801B1FA8
  cmps(c,0,(int32_t)c->r[0],0); // 801B1FAC
  if (crb(c,2)) { goto L_801B1FDC; } // 801B1FB0
  c->r[0]=R32(c->r[13]+0xFFFFC3E8u); // 801B1FB4
  cmpu(c,0,c->r[0],c->r[31]); // 801B1FB8
  if (!crb(c,2)) { goto L_801B1FDC; } // 801B1FBC
  c->r[3]=R32(c->r[13]+0xFFFFACF8u); // 801B1FC0
  c->r[0]=0u+0x00000000u; // 801B1FC4
  W32(c->r[13]+0xFFFFC3E0u,c->r[0]); // 801B1FC8
  cmps(c,0,(int32_t)c->r[3],1); // 801B1FCC
  if (!crb(c,0)) { goto L_801B1FDC; } // 801B1FD0
  c->r[0]=c->r[3]+0x00000001u; // 801B1FD4
  W32(c->r[13]+0xFFFFACF8u,c->r[0]); // 801B1FD8
L_801B1FDC:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 801B1FDC
  cmps(c,0,(int32_t)c->r[0],0); // 801B1FE0
  if (crb(c,2)) { goto L_801B202C; } // 801B1FE4
  c->r[3]=c->r[1]+0x00000008u; // 801B1FE8
  c->lr=0x801B1FF0u; f_80121700(c); // 801B1FEC
  c->r[3]=c->r[1]+0x00000008u; // 801B1FF0
  c->lr=0x801B1FF8u; f_801214C0(c); // 801B1FF4
  c->r[12]=R32(c->r[31]+0x00000020u); // 801B1FF8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B1FFC
  c->r[4]=R32(c->r[31]+0x00000024u); // 801B2000
  c->ctr=c->r[12]; // 801B2004
  if (true) { c->lr=0x801B200Cu; dispatch(c,c->ctr); } // 801B2008
  c->r[3]=c->r[1]+0x00000008u; // 801B200C
  c->lr=0x801B2014u; f_80121700(c); // 801B2010
  c->r[3]=c->r[30]|c->r[30]; // 801B2014
  c->lr=0x801B201Cu; f_801214C0(c); // 801B2018
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B201C
  c->r[4]=c->r[31]|c->r[31]; // 801B2020
  c->lr=0x801B2028u; f_801B3AA0(c); // 801B2024
  goto L_801B2034; // 801B2028
L_801B202C:;
  c->r[3]=c->r[31]+0x0000002Cu; // 801B202C
  c->lr=0x801B2034u; f_8012A1C0(c); // 801B2030
L_801B2034:;
  c->r[3]=0u+0x00000001u; // 801B2034
  c->lr=0x801B203Cu; f_801B1DA0(c); // 801B2038
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 801B203C
  c->r[3]=0u+0x00000001u; // 801B2040
  c->r[4]=c->r[0]|0x00000008u; // 801B2044
  c->lr=0x801B204Cu; f_801B1DB0(c); // 801B2048
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B204C
  c->r[3]=c->r[31]|c->r[31]; // 801B2050
  c->lr=0x801B2058u; f_801B3E10(c); // 801B2054
L_801B2058:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801B2058
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801B205C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 801B2060
  c->r[29]=R32(c->r[1]+0x000002D4u); // 801B2064
  c->r[28]=R32(c->r[1]+0x000002D0u); // 801B2068
  c->lr=c->r[0]; // 801B206C
  c->r[1]=c->r[1]+0x000002E0u; // 801B2070
  return; // 801B2074
}

// IPCInterruptHandler
void f_801B2080(Ctx* __restrict c) {
  trace_call(0x801B2080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2080
  c->r[0]=c->lr; // 801B2084
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B208C
  c->r[31]=c->r[4]|c->r[4]; // 801B2090
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2094
  c->r[30]=c->r[3]|c->r[3]; // 801B2098
  c->r[3]=0u+0x00000001u; // 801B209C
  c->lr=0x801B20A4u; f_801B1DA0(c); // 801B20A0
  c->r[0]=c->r[3]&0x00000014u; cr0(c,c->r[0]); // 801B20A4
  cmpu(c,0,c->r[0],0x00000014u); // 801B20A8
  if (!crb(c,2)) { goto L_801B20BC; } // 801B20AC
  c->r[3]=c->r[30]|c->r[30]; // 801B20B0
  c->r[4]=c->r[31]|c->r[31]; // 801B20B4
  c->lr=0x801B20BCu; f_801B1E20(c); // 801B20B8
L_801B20BC:;
  c->r[3]=0u+0x00000001u; // 801B20BC
  c->lr=0x801B20C4u; f_801B1DA0(c); // 801B20C0
  c->r[0]=c->r[3]&0x00000022u; cr0(c,c->r[0]); // 801B20C4
  cmpu(c,0,c->r[0],0x00000022u); // 801B20C8
  if (!crb(c,2)) { goto L_801B2228; } // 801B20CC
  c->r[3]=0u+0x00000001u; // 801B20D0
  c->lr=0x801B20D8u; f_801B1DA0(c); // 801B20D4
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 801B20D8
  c->r[3]=0u+0x00000001u; // 801B20DC
  c->r[4]=c->r[0]|0x00000002u; // 801B20E0
  c->lr=0x801B20E8u; f_801B1DB0(c); // 801B20E4
  c->r[3]=0u+0xCD000000u; // 801B20E8
  c->r[0]=0u+0x40000000u; // 801B20EC
  W32(c->r[3]+0x00000030u,c->r[0]); // 801B20F0
  c->r[31]=R32(c->r[13]+0xFFFFACF8u); // 801B20F4
  cmps(c,0,(int32_t)c->r[31],1); // 801B20F8
  if (!crb(c,0)) { goto L_801B210C; } // 801B20FC
  c->r[31]=c->r[31]+0x00000001u; // 801B2100
  W32(c->r[13]+0xFFFFACF8u,c->r[31]); // 801B2104
  c->lr=0x801B210Cu; f_801B3E00(c); // 801B2108
L_801B210C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B210C
  if (!crb(c,1)) { goto L_801B2228; } // 801B2110
  c->r[0]=R32(c->r[13]+0xFFFFC3E0u); // 801B2114
  cmps(c,0,(int32_t)c->r[0],0); // 801B2118
  if (crb(c,2)) { goto L_801B2154; } // 801B211C
  c->r[3]=R32(c->r[13]+0xFFFFC3E4u); // 801B2120
  c->r[0]=0u+0x00000000u; // 801B2124
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B2128
  c->r[3]=R32(c->r[13]+0xFFFFC3E4u); // 801B212C
  W32(c->r[13]+0xFFFFC3E0u,c->r[0]); // 801B2130
  c->r[3]=c->r[3]+0x0000002Cu; // 801B2134
  c->lr=0x801B213Cu; f_8012A1C0(c); // 801B2138
  c->r[3]=0u+0x00000001u; // 801B213C
  c->lr=0x801B2144u; f_801B1DA0(c); // 801B2140
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 801B2144
  c->r[3]=0u+0x00000001u; // 801B2148
  c->r[4]=c->r[0]|0x00000008u; // 801B214C
  c->lr=0x801B2154u; f_801B1DB0(c); // 801B2150
L_801B2154:;
  c->r[4]=0u+0x805B0000u; // 801B2154
  c->r[3]=c->r[4]+0xFFFF85C0u; // 801B2158
  c->r[4]=R32(c->r[4]+0xFFFF85C0u); // 801B215C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B2160
  cmpu(c,0,c->r[0],c->r[4]); // 801B2164
  if (!crb(c,0)) { goto L_801B2174; } // 801B2168
  c->r[0]=c->r[0]-c->r[4]; // 801B216C
  goto L_801B2180; // 801B2170
L_801B2174:;
  c->r[0]=c->r[0]-c->r[4]; // 801B2174
  c->r[0]=cntlz(c->r[0]); // 801B2178
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B217C
L_801B2180:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B2180
  if (!crb(c,2)) { goto L_801B2228; } // 801B2184
  c->r[3]=0u+0x805B0000u; // 801B2188
  c->r[3]=c->r[3]+0xFFFF85C0u; // 801B218C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B2190
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B2194
  c->r[3]=c->r[3]+c->r[0]; // 801B2198
  c->r[4]=R32(c->r[3]+0x00000010u); // 801B219C
  cmps(c,0,(int32_t)c->r[4],0); // 801B21A0
  if (crb(c,2)) { goto L_801B2228; } // 801B21A4
  c->r[0]=R32(c->r[4]+0x00000028u); // 801B21A8
  cmps(c,0,(int32_t)c->r[0],0); // 801B21AC
  if (crb(c,2)) { goto L_801B21C0; } // 801B21B0
  c->r[3]=R32(c->r[13]+0xFFFFACF8u); // 801B21B4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B21B8
  W32(c->r[13]+0xFFFFACF8u,c->r[0]); // 801B21BC
L_801B21C0:;
  c->r[4]=c->r[4]+0x80000000u; // 801B21C0
  c->r[3]=0u+0x00000000u; // 801B21C4
  c->lr=0x801B21CCu; f_801B1DB0(c); // 801B21C8
  c->r[8]=0u+0x805B0000u; // 801B21CC
  c->r[3]=0u+0xAAAB0000u; // 801B21D0
  c->r[7]=c->r[8]+0xFFFF85C0u; // 801B21D4
  c->r[4]=R32(c->r[8]+0xFFFF85C0u); // 801B21D8
  c->r[6]=R32(c->r[7]+0x00000008u); // 801B21DC
  c->r[5]=c->r[3]+0xFFFFAAABu; // 801B21E0
  c->r[0]=c->r[4]+0x00000001u; // 801B21E4
  c->r[3]=R32(c->r[13]+0xFFFFACF8u); // 801B21E8
  c->r[6]=c->r[6]+0x00000001u; // 801B21EC
  W32(c->r[8]+0xFFFF85C0u,c->r[0]); // 801B21F0
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[6])>>32); // 801B21F4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B21F8
  W32(c->r[13]+0xFFFFACF8u,c->r[0]); // 801B21FC
  c->r[3]=0u+0x00000001u; // 801B2200
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B2204
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801B2208
  c->r[0]=c->r[6]-c->r[0]; // 801B220C
  W32(c->r[7]+0x00000008u,c->r[0]); // 801B2210
  c->lr=0x801B2218u; f_801B1DA0(c); // 801B2214
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 801B2218
  c->r[3]=0u+0x00000001u; // 801B221C
  c->r[4]=c->r[0]|0x00000001u; // 801B2220
  c->lr=0x801B2228u; f_801B1DB0(c); // 801B2224
L_801B2228:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B222C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2230
  c->lr=c->r[0]; // 801B2234
  c->r[1]=c->r[1]+0x00000010u; // 801B2238
  return; // 801B223C
}

// IPCCltInit
void f_801B2240(Ctx* __restrict c) {
  trace_call(0x801B2240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2240
  c->r[0]=c->lr; // 801B2244
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2248
  c->r[0]=R32(c->r[13]+0xFFFFC3ECu); // 801B224C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2250
  cmps(c,0,(int32_t)c->r[0],0); // 801B2254
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2258
  c->r[30]=0u+0x00000000u; // 801B225C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2260
  if (!crb(c,2)) { goto L_801B22E0; } // 801B2264
  c->r[0]=0u+0x00000001u; // 801B2268
  W32(c->r[13]+0xFFFFC3ECu,c->r[0]); // 801B226C
  c->lr=0x801B2274u; f_801B1D00(c); // 801B2270
  c->lr=0x801B2278u; f_801B1DD0(c); // 801B2274
  c->r[29]=c->r[3]|c->r[3]; // 801B2278
  c->r[31]=c->r[3]+0x00002000u; // 801B227C
  c->lr=0x801B2284u; f_801B1DC0(c); // 801B2280
  cmpu(c,0,c->r[31],c->r[3]); // 801B2284
  if (!crb(c,1)) { goto L_801B2294; } // 801B2288
  c->r[30]=0u+0xFFFFFFEAu; // 801B228C
  goto L_801B22E0; // 801B2290
L_801B2294:;
  c->r[3]=c->r[29]|c->r[29]; // 801B2294
  c->r[4]=0u+0x00002000u; // 801B2298
  c->lr=0x801B22A0u; f_801B3760(c); // 801B229C
  W32(c->r[13]+0xFFFFACFCu,c->r[3]); // 801B22A0
  c->r[3]=c->r[31]|c->r[31]; // 801B22A4
  c->lr=0x801B22ACu; f_801B1DE0(c); // 801B22A8
  c->r[4]=0u+0x801B0000u; // 801B22AC
  c->r[3]=0u+0x0000001Bu; // 801B22B0
  c->r[4]=c->r[4]+0x00002080u; // 801B22B4
  c->lr=0x801B22BCu; f_80125220(c); // 801B22B8
  c->r[3]=0u+0x00000010u; // 801B22BC
  c->lr=0x801B22C4u; f_80125600(c); // 801B22C0
  c->r[3]=0u+0x00000001u; // 801B22C4
  c->r[4]=0u+0x00000038u; // 801B22C8
  c->lr=0x801B22D0u; f_801B1DB0(c); // 801B22CC
  c->lr=0x801B22D4u; f_801B3C90(c); // 801B22D0
  c->r[3]=0u+0x805B0000u; // 801B22D4
  c->r[3]=c->r[3]+0xFFFF8690u; // 801B22D8
  c->lr=0x801B22E0u; f_8011FAB0(c); // 801B22DC
L_801B22E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B22E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B22E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B22E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B22EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B22F0
  c->lr=c->r[0]; // 801B22F4
  c->r[1]=c->r[1]+0x00000020u; // 801B22F8
  return; // 801B22FC
}

// IPCCltReInit
void f_801B2300(Ctx* __restrict c) {
  trace_call(0x801B2300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2300
  c->r[0]=c->lr; // 801B2304
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B230C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2310
  c->r[30]=0u+0x00000000u; // 801B2314
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2318
  c->lr=0x801B2320u; f_801B1DD0(c); // 801B231C
  c->r[29]=c->r[3]|c->r[3]; // 801B2320
  c->r[31]=c->r[3]+0x00001000u; // 801B2324
  c->lr=0x801B232Cu; f_801B1DC0(c); // 801B2328
  cmpu(c,0,c->r[31],c->r[3]); // 801B232C
  if (!crb(c,1)) { goto L_801B233C; } // 801B2330
  c->r[30]=0u+0xFFFFFFEAu; // 801B2334
  goto L_801B2354; // 801B2338
L_801B233C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B233C
  c->r[4]=0u+0x00001000u; // 801B2340
  c->lr=0x801B2348u; f_801B3760(c); // 801B2344
  W32(c->r[13]+0xFFFFACFCu,c->r[3]); // 801B2348
  c->r[3]=c->r[31]|c->r[31]; // 801B234C
  c->lr=0x801B2354u; f_801B1DE0(c); // 801B2350
L_801B2354:;
  c->r[3]=c->r[30]|c->r[30]; // 801B2354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2358
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B235C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2360
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2364
  c->lr=c->r[0]; // 801B2368
  c->r[1]=c->r[1]+0x00000020u; // 801B236C
  return; // 801B2370
}

void hle___ios_Ipc2(Ctx*);
// __ios_Ipc2
void f_801B2380(Ctx* __restrict c) {
  hle___ios_Ipc2(c);
}

// IOS_OpenAsync
void f_801B25F0(Ctx* __restrict c) {
  trace_call(0x801B25F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B25F0
  c->r[0]=c->lr; // 801B25F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B25F8
  c->r[11]=c->r[1]+0x00000030u; // 801B25FC
  c->lr=0x801B2604u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2600
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B2604
  c->r[27]=c->r[3]|c->r[3]; // 801B2608
  c->r[28]=c->r[4]|c->r[4]; // 801B260C
  c->r[29]=c->r[5]|c->r[5]; // 801B2610
  c->r[31]=c->r[6]|c->r[6]; // 801B2614
  c->r[30]=0u+0x00000000u; // 801B2618
  if (!crb(c,2)) { goto L_801B2628; } // 801B261C
  c->r[30]=0u+0xFFFFFFFCu; // 801B2620
  goto L_801B2670; // 801B2624
L_801B2628:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B2628
  c->r[4]=0u+0x00000040u; // 801B262C
  c->r[5]=0u+0x00000020u; // 801B2630
  c->lr=0x801B2638u; f_801B3A90(c); // 801B2634
  cmps(c,0,(int32_t)c->r[3],0); // 801B2638
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B263C
  if (!crb(c,2)) { goto L_801B264C; } // 801B2640
  c->r[30]=0u+0xFFFFFFEAu; // 801B2644
  goto L_801B2670; // 801B2648
L_801B264C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801B264C
  c->r[5]=0u+0x00000000u; // 801B2650
  c->r[0]=0u+0x00000001u; // 801B2654
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2658
  W32(c->r[4]+0x00000024u,c->r[31]); // 801B265C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2660
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2664
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2668
  W32(c->r[3]+0x00000008u,c->r[5]); // 801B266C
L_801B2670:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2670
  if (!crb(c,2)) { goto L_801B26F0; } // 801B2674
  c->r[31]=R32(c->r[1]+0x00000008u); // 801B2678
  c->r[30]=0u+0x00000000u; // 801B267C
  cmps(c,0,(int32_t)c->r[31],0); // 801B2680
  if (!crb(c,2)) { goto L_801B2690; } // 801B2684
  c->r[30]=0u+0xFFFFFFFCu; // 801B2688
  goto L_801B26D8; // 801B268C
L_801B2690:;
  c->r[3]=c->r[27]|c->r[27]; // 801B2690
  c->r[4]=0u+0x00000040u; // 801B2694
  goto L_801B26A4; // 801B2698
  c->r[0]=c->r[0]|0x00000000u; // 801B269C
L_801B26A0:;
  c->r[3]=c->r[3]+0x00000001u; // 801B26A0
L_801B26A4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B26A4
  cmps(c,0,(int32_t)c->r[0],0); // 801B26A8
  if (crb(c,2)) { goto L_801B26BC; } // 801B26AC
  cmps(c,0,(int32_t)c->r[4],0); // 801B26B0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B26B4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B26A0; } // 801B26B8
L_801B26BC:;
  c->r[4]=c->r[3]-c->r[27]; // 801B26BC
  c->r[3]=c->r[27]|c->r[27]; // 801B26C0
  c->r[4]=c->r[4]+0x00000001u; // 801B26C4
  c->lr=0x801B26CCu; f_80120C40(c); // 801B26C8
  c->r[0]=c->r[27]+0x80000000u; // 801B26CC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B26D0
  W32(c->r[31]+0x00000010u,c->r[28]); // 801B26D4
L_801B26D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B26D8
  if (!crb(c,2)) { goto L_801B26F0; } // 801B26DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B26E0
  c->r[4]=c->r[29]|c->r[29]; // 801B26E4
  c->lr=0x801B26ECu; f_801B2380(c); // 801B26E8
  c->r[30]=c->r[3]|c->r[3]; // 801B26EC
L_801B26F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801B26F0
  c->r[3]=c->r[30]|c->r[30]; // 801B26F4
  c->lr=0x801B26FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B26F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B26FC
  c->lr=c->r[0]; // 801B2700
  c->r[1]=c->r[1]+0x00000030u; // 801B2704
  return; // 801B2708
}

// IOS_Open
void f_801B2710(Ctx* __restrict c) {
  trace_call(0x801B2710u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2710
  c->r[0]=c->lr; // 801B2714
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2718
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B271C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2720
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2724
  c->r[30]=0u+0x00000000u; // 801B2728
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B272C
  c->r[29]=c->r[4]|c->r[4]; // 801B2730
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B2734
  c->r[28]=c->r[3]|c->r[3]; // 801B2738
  if (!crb(c,2)) { goto L_801B2748; } // 801B273C
  c->r[30]=0u+0xFFFFFFFCu; // 801B2740
  goto L_801B2790; // 801B2744
L_801B2748:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B2748
  c->r[4]=0u+0x00000040u; // 801B274C
  c->r[5]=0u+0x00000020u; // 801B2750
  c->lr=0x801B2758u; f_801B3A90(c); // 801B2754
  cmps(c,0,(int32_t)c->r[3],0); // 801B2758
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B275C
  if (!crb(c,2)) { goto L_801B276C; } // 801B2760
  c->r[30]=0u+0xFFFFFFEAu; // 801B2764
  goto L_801B2790; // 801B2768
L_801B276C:;
  c->r[5]=0u+0x00000000u; // 801B276C
  W32(c->r[3]+0x00000020u,c->r[5]); // 801B2770
  c->r[0]=0u+0x00000001u; // 801B2774
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2778
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B277C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2780
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2784
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2788
  W32(c->r[3]+0x00000008u,c->r[5]); // 801B278C
L_801B2790:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2790
  if (!crb(c,2)) { goto L_801B2810; } // 801B2794
  c->r[31]=R32(c->r[1]+0x00000008u); // 801B2798
  c->r[30]=0u+0x00000000u; // 801B279C
  cmps(c,0,(int32_t)c->r[31],0); // 801B27A0
  if (!crb(c,2)) { goto L_801B27B0; } // 801B27A4
  c->r[30]=0u+0xFFFFFFFCu; // 801B27A8
  goto L_801B27F8; // 801B27AC
L_801B27B0:;
  c->r[3]=c->r[28]|c->r[28]; // 801B27B0
  c->r[4]=0u+0x00000040u; // 801B27B4
  goto L_801B27C4; // 801B27B8
  c->r[0]=c->r[0]|0x00000000u; // 801B27BC
L_801B27C0:;
  c->r[3]=c->r[3]+0x00000001u; // 801B27C0
L_801B27C4:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B27C4
  cmps(c,0,(int32_t)c->r[0],0); // 801B27C8
  if (crb(c,2)) { goto L_801B27DC; } // 801B27CC
  cmps(c,0,(int32_t)c->r[4],0); // 801B27D0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801B27D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801B27C0; } // 801B27D8
L_801B27DC:;
  c->r[4]=c->r[3]-c->r[28]; // 801B27DC
  c->r[3]=c->r[28]|c->r[28]; // 801B27E0
  c->r[4]=c->r[4]+0x00000001u; // 801B27E4
  c->lr=0x801B27ECu; f_80120C40(c); // 801B27E8
  c->r[0]=c->r[28]+0x80000000u; // 801B27EC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B27F0
  W32(c->r[31]+0x00000010u,c->r[29]); // 801B27F4
L_801B27F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B27F8
  if (!crb(c,2)) { goto L_801B2810; } // 801B27FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2800
  c->r[4]=0u+0x00000000u; // 801B2804
  c->lr=0x801B280Cu; f_801B2380(c); // 801B2808
  c->r[30]=c->r[3]|c->r[3]; // 801B280C
L_801B2810:;
  c->r[3]=c->r[30]|c->r[30]; // 801B2810
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2814
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2818
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B281C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B2820
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2824
  c->lr=c->r[0]; // 801B2828
  c->r[1]=c->r[1]+0x00000020u; // 801B282C
  return; // 801B2830
}

// IOS_CloseAsync
void f_801B2840(Ctx* __restrict c) {
  trace_call(0x801B2840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2840
  c->r[0]=c->lr; // 801B2844
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2848
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B284C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2850
  c->r[31]=0u+0x00000000u; // 801B2854
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2858
  c->r[30]=c->r[5]|c->r[5]; // 801B285C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2860
  c->r[29]=c->r[4]|c->r[4]; // 801B2864
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B2868
  c->r[28]=c->r[3]|c->r[3]; // 801B286C
  if (!crb(c,2)) { goto L_801B287C; } // 801B2870
  c->r[31]=0u+0xFFFFFFFCu; // 801B2874
  goto L_801B28C4; // 801B2878
L_801B287C:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B287C
  c->r[4]=0u+0x00000040u; // 801B2880
  c->r[5]=0u+0x00000020u; // 801B2884
  c->lr=0x801B288Cu; f_801B3A90(c); // 801B2888
  cmps(c,0,(int32_t)c->r[3],0); // 801B288C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2890
  if (!crb(c,2)) { goto L_801B28A0; } // 801B2894
  c->r[31]=0u+0xFFFFFFEAu; // 801B2898
  goto L_801B28C4; // 801B289C
L_801B28A0:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801B28A0
  c->r[5]=0u+0x00000000u; // 801B28A4
  c->r[0]=0u+0x00000002u; // 801B28A8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B28AC
  W32(c->r[4]+0x00000024u,c->r[30]); // 801B28B0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B28B4
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B28B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B28BC
  W32(c->r[3]+0x00000008u,c->r[28]); // 801B28C0
L_801B28C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B28C4
  if (!crb(c,2)) { goto L_801B28DC; } // 801B28C8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B28CC
  c->r[4]=c->r[29]|c->r[29]; // 801B28D0
  c->lr=0x801B28D8u; f_801B2380(c); // 801B28D4
  c->r[31]=c->r[3]|c->r[3]; // 801B28D8
L_801B28DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801B28DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B28E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B28E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B28E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B28EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B28F0
  c->lr=c->r[0]; // 801B28F4
  c->r[1]=c->r[1]+0x00000020u; // 801B28F8
  return; // 801B28FC
}

// IOS_Close
void f_801B2900(Ctx* __restrict c) {
  trace_call(0x801B2900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2900
  c->r[0]=c->lr; // 801B2904
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2908
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B290C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2910
  c->r[31]=0u+0x00000000u; // 801B2914
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2918
  c->r[30]=c->r[3]|c->r[3]; // 801B291C
  if (!crb(c,2)) { goto L_801B292C; } // 801B2920
  c->r[31]=0u+0xFFFFFFFCu; // 801B2924
  goto L_801B2974; // 801B2928
L_801B292C:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B292C
  c->r[4]=0u+0x00000040u; // 801B2930
  c->r[5]=0u+0x00000020u; // 801B2934
  c->lr=0x801B293Cu; f_801B3A90(c); // 801B2938
  cmps(c,0,(int32_t)c->r[3],0); // 801B293C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2940
  if (!crb(c,2)) { goto L_801B2950; } // 801B2944
  c->r[31]=0u+0xFFFFFFEAu; // 801B2948
  goto L_801B2974; // 801B294C
L_801B2950:;
  c->r[5]=0u+0x00000000u; // 801B2950
  W32(c->r[3]+0x00000020u,c->r[5]); // 801B2954
  c->r[0]=0u+0x00000002u; // 801B2958
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B295C
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B2960
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2964
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2968
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B296C
  W32(c->r[3]+0x00000008u,c->r[30]); // 801B2970
L_801B2974:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2974
  if (!crb(c,2)) { goto L_801B298C; } // 801B2978
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B297C
  c->r[4]=0u+0x00000000u; // 801B2980
  c->lr=0x801B2988u; f_801B2380(c); // 801B2984
  c->r[31]=c->r[3]|c->r[3]; // 801B2988
L_801B298C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B298C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2990
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2994
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2998
  c->lr=c->r[0]; // 801B299C
  c->r[1]=c->r[1]+0x00000020u; // 801B29A0
  return; // 801B29A4
}

// IOS_ReadAsync
void f_801B29B0(Ctx* __restrict c) {
  trace_call(0x801B29B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B29B0
  c->r[0]=c->lr; // 801B29B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B29B8
  c->r[11]=c->r[1]+0x00000030u; // 801B29BC
  c->lr=0x801B29C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B29C0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B29C4
  c->r[26]=c->r[3]|c->r[3]; // 801B29C8
  c->r[27]=c->r[4]|c->r[4]; // 801B29CC
  c->r[28]=c->r[5]|c->r[5]; // 801B29D0
  c->r[29]=c->r[6]|c->r[6]; // 801B29D4
  c->r[31]=c->r[7]|c->r[7]; // 801B29D8
  c->r[30]=0u+0x00000000u; // 801B29DC
  if (!crb(c,2)) { goto L_801B29EC; } // 801B29E0
  c->r[30]=0u+0xFFFFFFFCu; // 801B29E4
  goto L_801B2A34; // 801B29E8
L_801B29EC:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B29EC
  c->r[4]=0u+0x00000040u; // 801B29F0
  c->r[5]=0u+0x00000020u; // 801B29F4
  c->lr=0x801B29FCu; f_801B3A90(c); // 801B29F8
  cmps(c,0,(int32_t)c->r[3],0); // 801B29FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2A00
  if (!crb(c,2)) { goto L_801B2A10; } // 801B2A04
  c->r[30]=0u+0xFFFFFFEAu; // 801B2A08
  goto L_801B2A34; // 801B2A0C
L_801B2A10:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801B2A10
  c->r[5]=0u+0x00000000u; // 801B2A14
  c->r[0]=0u+0x00000003u; // 801B2A18
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2A1C
  W32(c->r[4]+0x00000024u,c->r[31]); // 801B2A20
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2A24
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2A28
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2A2C
  W32(c->r[3]+0x00000008u,c->r[26]); // 801B2A30
L_801B2A34:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2A34
  if (!crb(c,2)) { goto L_801B2A94; } // 801B2A38
  c->r[31]=R32(c->r[1]+0x00000008u); // 801B2A3C
  c->r[30]=0u+0x00000000u; // 801B2A40
  cmps(c,0,(int32_t)c->r[31],0); // 801B2A44
  if (!crb(c,2)) { goto L_801B2A54; } // 801B2A48
  c->r[30]=0u+0xFFFFFFFCu; // 801B2A4C
  goto L_801B2A7C; // 801B2A50
L_801B2A54:;
  c->r[3]=c->r[27]|c->r[27]; // 801B2A54
  c->r[4]=c->r[28]|c->r[28]; // 801B2A58
  c->lr=0x801B2A60u; f_80120C10(c); // 801B2A5C
  cmps(c,0,(int32_t)c->r[27],0); // 801B2A60
  if (crb(c,2)) { goto L_801B2A70; } // 801B2A64
  c->r[0]=c->r[27]+0x80000000u; // 801B2A68
  goto L_801B2A74; // 801B2A6C
L_801B2A70:;
  c->r[0]=0u+0x00000000u; // 801B2A70
L_801B2A74:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B2A74
  W32(c->r[31]+0x00000010u,c->r[28]); // 801B2A78
L_801B2A7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2A7C
  if (!crb(c,2)) { goto L_801B2A94; } // 801B2A80
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2A84
  c->r[4]=c->r[29]|c->r[29]; // 801B2A88
  c->lr=0x801B2A90u; f_801B2380(c); // 801B2A8C
  c->r[30]=c->r[3]|c->r[3]; // 801B2A90
L_801B2A94:;
  c->r[11]=c->r[1]+0x00000030u; // 801B2A94
  c->r[3]=c->r[30]|c->r[30]; // 801B2A98
  c->lr=0x801B2AA0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2A9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B2AA0
  c->lr=c->r[0]; // 801B2AA4
  c->r[1]=c->r[1]+0x00000030u; // 801B2AA8
  return; // 801B2AAC
}

// IOS_Read
void f_801B2AB0(Ctx* __restrict c) {
  trace_call(0x801B2AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2AB0
  c->r[0]=c->lr; // 801B2AB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2AB8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B2ABC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2AC0
  c->r[31]=c->r[3]|c->r[3]; // 801B2AC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2AC8
  c->r[30]=0u+0x00000000u; // 801B2ACC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2AD0
  c->r[29]=c->r[5]|c->r[5]; // 801B2AD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B2AD8
  c->r[28]=c->r[4]|c->r[4]; // 801B2ADC
  if (!crb(c,2)) { goto L_801B2AEC; } // 801B2AE0
  c->r[30]=0u+0xFFFFFFFCu; // 801B2AE4
  goto L_801B2B34; // 801B2AE8
L_801B2AEC:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B2AEC
  c->r[4]=0u+0x00000040u; // 801B2AF0
  c->r[5]=0u+0x00000020u; // 801B2AF4
  c->lr=0x801B2AFCu; f_801B3A90(c); // 801B2AF8
  cmps(c,0,(int32_t)c->r[3],0); // 801B2AFC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2B00
  if (!crb(c,2)) { goto L_801B2B10; } // 801B2B04
  c->r[30]=0u+0xFFFFFFEAu; // 801B2B08
  goto L_801B2B34; // 801B2B0C
L_801B2B10:;
  c->r[5]=0u+0x00000000u; // 801B2B10
  W32(c->r[3]+0x00000020u,c->r[5]); // 801B2B14
  c->r[0]=0u+0x00000003u; // 801B2B18
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2B1C
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B2B20
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2B24
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2B28
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2B2C
  W32(c->r[3]+0x00000008u,c->r[31]); // 801B2B30
L_801B2B34:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2B34
  if (!crb(c,2)) { goto L_801B2B94; } // 801B2B38
  c->r[31]=R32(c->r[1]+0x00000008u); // 801B2B3C
  c->r[30]=0u+0x00000000u; // 801B2B40
  cmps(c,0,(int32_t)c->r[31],0); // 801B2B44
  if (!crb(c,2)) { goto L_801B2B54; } // 801B2B48
  c->r[30]=0u+0xFFFFFFFCu; // 801B2B4C
  goto L_801B2B7C; // 801B2B50
L_801B2B54:;
  c->r[3]=c->r[28]|c->r[28]; // 801B2B54
  c->r[4]=c->r[29]|c->r[29]; // 801B2B58
  c->lr=0x801B2B60u; f_80120C10(c); // 801B2B5C
  cmps(c,0,(int32_t)c->r[28],0); // 801B2B60
  if (crb(c,2)) { goto L_801B2B70; } // 801B2B64
  c->r[0]=c->r[28]+0x80000000u; // 801B2B68
  goto L_801B2B74; // 801B2B6C
L_801B2B70:;
  c->r[0]=0u+0x00000000u; // 801B2B70
L_801B2B74:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801B2B74
  W32(c->r[31]+0x00000010u,c->r[29]); // 801B2B78
L_801B2B7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2B7C
  if (!crb(c,2)) { goto L_801B2B94; } // 801B2B80
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2B84
  c->r[4]=0u+0x00000000u; // 801B2B88
  c->lr=0x801B2B90u; f_801B2380(c); // 801B2B8C
  c->r[30]=c->r[3]|c->r[3]; // 801B2B90
L_801B2B94:;
  c->r[3]=c->r[30]|c->r[30]; // 801B2B94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2B98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2B9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2BA0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B2BA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2BA8
  c->lr=c->r[0]; // 801B2BAC
  c->r[1]=c->r[1]+0x00000020u; // 801B2BB0
  return; // 801B2BB4
}

// IOS_WriteAsync
void f_801B2BC0(Ctx* __restrict c) {
  trace_call(0x801B2BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2BC0
  c->r[0]=c->lr; // 801B2BC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B2BC8
  c->r[11]=c->r[1]+0x00000030u; // 801B2BCC
  c->lr=0x801B2BD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2BD0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B2BD4
  c->r[26]=c->r[3]|c->r[3]; // 801B2BD8
  c->r[27]=c->r[4]|c->r[4]; // 801B2BDC
  c->r[28]=c->r[5]|c->r[5]; // 801B2BE0
  c->r[29]=c->r[6]|c->r[6]; // 801B2BE4
  c->r[30]=c->r[7]|c->r[7]; // 801B2BE8
  c->r[31]=0u+0x00000000u; // 801B2BEC
  if (!crb(c,2)) { goto L_801B2BFC; } // 801B2BF0
  c->r[31]=0u+0xFFFFFFFCu; // 801B2BF4
  goto L_801B2C44; // 801B2BF8
L_801B2BFC:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B2BFC
  c->r[4]=0u+0x00000040u; // 801B2C00
  c->r[5]=0u+0x00000020u; // 801B2C04
  c->lr=0x801B2C0Cu; f_801B3A90(c); // 801B2C08
  cmps(c,0,(int32_t)c->r[3],0); // 801B2C0C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2C10
  if (!crb(c,2)) { goto L_801B2C20; } // 801B2C14
  c->r[31]=0u+0xFFFFFFEAu; // 801B2C18
  goto L_801B2C44; // 801B2C1C
L_801B2C20:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801B2C20
  c->r[5]=0u+0x00000000u; // 801B2C24
  c->r[0]=0u+0x00000004u; // 801B2C28
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2C2C
  W32(c->r[4]+0x00000024u,c->r[30]); // 801B2C30
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2C34
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2C38
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2C3C
  W32(c->r[3]+0x00000008u,c->r[26]); // 801B2C40
L_801B2C44:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2C44
  if (!crb(c,2)) { goto L_801B2CA4; } // 801B2C48
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B2C4C
  c->r[31]=0u+0x00000000u; // 801B2C50
  cmps(c,0,(int32_t)c->r[5],0); // 801B2C54
  if (!crb(c,2)) { goto L_801B2C64; } // 801B2C58
  c->r[31]=0u+0xFFFFFFFCu; // 801B2C5C
  goto L_801B2C8C; // 801B2C60
L_801B2C64:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B2C64
  if (crb(c,2)) { goto L_801B2C74; } // 801B2C68
  c->r[0]=c->r[27]+0x80000000u; // 801B2C6C
  goto L_801B2C78; // 801B2C70
L_801B2C74:;
  c->r[0]=0u+0x00000000u; // 801B2C74
L_801B2C78:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801B2C78
  c->r[3]=c->r[27]|c->r[27]; // 801B2C7C
  c->r[4]=c->r[28]|c->r[28]; // 801B2C80
  W32(c->r[5]+0x00000010u,c->r[28]); // 801B2C84
  c->lr=0x801B2C8Cu; f_80120C40(c); // 801B2C88
L_801B2C8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2C8C
  if (!crb(c,2)) { goto L_801B2CA4; } // 801B2C90
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2C94
  c->r[4]=c->r[29]|c->r[29]; // 801B2C98
  c->lr=0x801B2CA0u; f_801B2380(c); // 801B2C9C
  c->r[31]=c->r[3]|c->r[3]; // 801B2CA0
L_801B2CA4:;
  c->r[11]=c->r[1]+0x00000030u; // 801B2CA4
  c->r[3]=c->r[31]|c->r[31]; // 801B2CA8
  c->lr=0x801B2CB0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2CAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B2CB0
  c->lr=c->r[0]; // 801B2CB4
  c->r[1]=c->r[1]+0x00000030u; // 801B2CB8
  return; // 801B2CBC
}

// IOS_Write
void f_801B2CC0(Ctx* __restrict c) {
  trace_call(0x801B2CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2CC0
  c->r[0]=c->lr; // 801B2CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2CC8
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B2CCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2CD0
  c->r[31]=0u+0x00000000u; // 801B2CD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2CD8
  c->r[30]=c->r[5]|c->r[5]; // 801B2CDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2CE0
  c->r[29]=c->r[4]|c->r[4]; // 801B2CE4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B2CE8
  c->r[28]=c->r[3]|c->r[3]; // 801B2CEC
  if (!crb(c,2)) { goto L_801B2CFC; } // 801B2CF0
  c->r[31]=0u+0xFFFFFFFCu; // 801B2CF4
  goto L_801B2D44; // 801B2CF8
L_801B2CFC:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B2CFC
  c->r[4]=0u+0x00000040u; // 801B2D00
  c->r[5]=0u+0x00000020u; // 801B2D04
  c->lr=0x801B2D0Cu; f_801B3A90(c); // 801B2D08
  cmps(c,0,(int32_t)c->r[3],0); // 801B2D0C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2D10
  if (!crb(c,2)) { goto L_801B2D20; } // 801B2D14
  c->r[31]=0u+0xFFFFFFEAu; // 801B2D18
  goto L_801B2D44; // 801B2D1C
L_801B2D20:;
  c->r[5]=0u+0x00000000u; // 801B2D20
  W32(c->r[3]+0x00000020u,c->r[5]); // 801B2D24
  c->r[0]=0u+0x00000004u; // 801B2D28
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2D2C
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B2D30
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2D34
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2D38
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2D3C
  W32(c->r[3]+0x00000008u,c->r[28]); // 801B2D40
L_801B2D44:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2D44
  if (!crb(c,2)) { goto L_801B2DA4; } // 801B2D48
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B2D4C
  c->r[31]=0u+0x00000000u; // 801B2D50
  cmps(c,0,(int32_t)c->r[5],0); // 801B2D54
  if (!crb(c,2)) { goto L_801B2D64; } // 801B2D58
  c->r[31]=0u+0xFFFFFFFCu; // 801B2D5C
  goto L_801B2D8C; // 801B2D60
L_801B2D64:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B2D64
  if (crb(c,2)) { goto L_801B2D74; } // 801B2D68
  c->r[0]=c->r[29]+0x80000000u; // 801B2D6C
  goto L_801B2D78; // 801B2D70
L_801B2D74:;
  c->r[0]=0u+0x00000000u; // 801B2D74
L_801B2D78:;
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801B2D78
  c->r[3]=c->r[29]|c->r[29]; // 801B2D7C
  c->r[4]=c->r[30]|c->r[30]; // 801B2D80
  W32(c->r[5]+0x00000010u,c->r[30]); // 801B2D84
  c->lr=0x801B2D8Cu; f_80120C40(c); // 801B2D88
L_801B2D8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2D8C
  if (!crb(c,2)) { goto L_801B2DA4; } // 801B2D90
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2D94
  c->r[4]=0u+0x00000000u; // 801B2D98
  c->lr=0x801B2DA0u; f_801B2380(c); // 801B2D9C
  c->r[31]=c->r[3]|c->r[3]; // 801B2DA0
L_801B2DA4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B2DA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2DA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2DAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2DB0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B2DB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2DB8
  c->lr=c->r[0]; // 801B2DBC
  c->r[1]=c->r[1]+0x00000020u; // 801B2DC0
  return; // 801B2DC4
}

// IOS_SeekAsync
void f_801B2DD0(Ctx* __restrict c) {
  trace_call(0x801B2DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2DD0
  c->r[0]=c->lr; // 801B2DD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B2DD8
  c->r[11]=c->r[1]+0x00000030u; // 801B2DDC
  c->lr=0x801B2DE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2DE0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B2DE4
  c->r[26]=c->r[3]|c->r[3]; // 801B2DE8
  c->r[27]=c->r[4]|c->r[4]; // 801B2DEC
  c->r[28]=c->r[5]|c->r[5]; // 801B2DF0
  c->r[29]=c->r[6]|c->r[6]; // 801B2DF4
  c->r[30]=c->r[7]|c->r[7]; // 801B2DF8
  c->r[31]=0u+0x00000000u; // 801B2DFC
  if (!crb(c,2)) { goto L_801B2E0C; } // 801B2E00
  c->r[31]=0u+0xFFFFFFFCu; // 801B2E04
  goto L_801B2E54; // 801B2E08
L_801B2E0C:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B2E0C
  c->r[4]=0u+0x00000040u; // 801B2E10
  c->r[5]=0u+0x00000020u; // 801B2E14
  c->lr=0x801B2E1Cu; f_801B3A90(c); // 801B2E18
  cmps(c,0,(int32_t)c->r[3],0); // 801B2E1C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2E20
  if (!crb(c,2)) { goto L_801B2E30; } // 801B2E24
  c->r[31]=0u+0xFFFFFFEAu; // 801B2E28
  goto L_801B2E54; // 801B2E2C
L_801B2E30:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801B2E30
  c->r[5]=0u+0x00000000u; // 801B2E34
  c->r[0]=0u+0x00000005u; // 801B2E38
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2E3C
  W32(c->r[4]+0x00000024u,c->r[30]); // 801B2E40
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2E44
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2E48
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2E4C
  W32(c->r[3]+0x00000008u,c->r[26]); // 801B2E50
L_801B2E54:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2E54
  if (!crb(c,2)) { goto L_801B2E94; } // 801B2E58
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2E5C
  c->r[31]=0u+0x00000000u; // 801B2E60
  cmps(c,0,(int32_t)c->r[3],0); // 801B2E64
  if (!crb(c,2)) { goto L_801B2E74; } // 801B2E68
  c->r[31]=0u+0xFFFFFFFCu; // 801B2E6C
  goto L_801B2E7C; // 801B2E70
L_801B2E74:;
  W32(c->r[3]+0x0000000Cu,c->r[27]); // 801B2E74
  W32(c->r[3]+0x00000010u,c->r[28]); // 801B2E78
L_801B2E7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2E7C
  if (!crb(c,2)) { goto L_801B2E94; } // 801B2E80
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2E84
  c->r[4]=c->r[29]|c->r[29]; // 801B2E88
  c->lr=0x801B2E90u; f_801B2380(c); // 801B2E8C
  c->r[31]=c->r[3]|c->r[3]; // 801B2E90
L_801B2E94:;
  c->r[11]=c->r[1]+0x00000030u; // 801B2E94
  c->r[3]=c->r[31]|c->r[31]; // 801B2E98
  c->lr=0x801B2EA0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2E9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B2EA0
  c->lr=c->r[0]; // 801B2EA4
  c->r[1]=c->r[1]+0x00000030u; // 801B2EA8
  return; // 801B2EAC
}

// IOS_IoctlAsync
void f_801B2EB0(Ctx* __restrict c) {
  trace_call(0x801B2EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2EB0
  c->r[0]=c->lr; // 801B2EB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B2EB8
  c->r[11]=c->r[1]+0x00000040u; // 801B2EBC
  c->lr=0x801B2EC4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2EC0
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B2EC4
  c->r[23]=c->r[3]|c->r[3]; // 801B2EC8
  c->r[24]=c->r[4]|c->r[4]; // 801B2ECC
  c->r[25]=c->r[5]|c->r[5]; // 801B2ED0
  c->r[26]=c->r[6]|c->r[6]; // 801B2ED4
  c->r[27]=c->r[7]|c->r[7]; // 801B2ED8
  c->r[28]=c->r[8]|c->r[8]; // 801B2EDC
  c->r[29]=c->r[9]|c->r[9]; // 801B2EE0
  c->r[30]=c->r[10]|c->r[10]; // 801B2EE4
  c->r[31]=0u+0x00000000u; // 801B2EE8
  if (!crb(c,2)) { goto L_801B2EF8; } // 801B2EEC
  c->r[31]=0u+0xFFFFFFFCu; // 801B2EF0
  goto L_801B2F40; // 801B2EF4
L_801B2EF8:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B2EF8
  c->r[4]=0u+0x00000040u; // 801B2EFC
  c->r[5]=0u+0x00000020u; // 801B2F00
  c->lr=0x801B2F08u; f_801B3A90(c); // 801B2F04
  cmps(c,0,(int32_t)c->r[3],0); // 801B2F08
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B2F0C
  if (!crb(c,2)) { goto L_801B2F1C; } // 801B2F10
  c->r[31]=0u+0xFFFFFFEAu; // 801B2F14
  goto L_801B2F40; // 801B2F18
L_801B2F1C:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801B2F1C
  c->r[5]=0u+0x00000000u; // 801B2F20
  c->r[0]=0u+0x00000006u; // 801B2F24
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2F28
  W32(c->r[4]+0x00000024u,c->r[30]); // 801B2F2C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B2F30
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B2F34
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B2F38
  W32(c->r[3]+0x00000008u,c->r[23]); // 801B2F3C
L_801B2F40:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2F40
  if (!crb(c,2)) { goto L_801B2FCC; } // 801B2F44
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B2F48
  c->r[31]=0u+0x00000000u; // 801B2F4C
  cmps(c,0,(int32_t)c->r[5],0); // 801B2F50
  if (!crb(c,2)) { goto L_801B2F60; } // 801B2F54
  c->r[31]=0u+0xFFFFFFFCu; // 801B2F58
  goto L_801B2FB4; // 801B2F5C
L_801B2F60:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B2F60
  W32(c->r[5]+0x0000000Cu,c->r[24]); // 801B2F64
  if (crb(c,2)) { goto L_801B2F74; } // 801B2F68
  c->r[0]=c->r[27]+0x80000000u; // 801B2F6C
  goto L_801B2F78; // 801B2F70
L_801B2F74:;
  c->r[0]=0u+0x00000000u; // 801B2F74
L_801B2F78:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 801B2F78
  cmps(c,0,(int32_t)c->r[25],0); // 801B2F7C
  W32(c->r[5]+0x0000001Cu,c->r[28]); // 801B2F80
  if (crb(c,2)) { goto L_801B2F90; } // 801B2F84
  c->r[0]=c->r[25]+0x80000000u; // 801B2F88
  goto L_801B2F94; // 801B2F8C
L_801B2F90:;
  c->r[0]=0u+0x00000000u; // 801B2F90
L_801B2F94:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 801B2F94
  c->r[3]=c->r[25]|c->r[25]; // 801B2F98
  c->r[4]=c->r[26]|c->r[26]; // 801B2F9C
  W32(c->r[5]+0x00000014u,c->r[26]); // 801B2FA0
  c->lr=0x801B2FA8u; f_80120C40(c); // 801B2FA4
  c->r[3]=c->r[27]|c->r[27]; // 801B2FA8
  c->r[4]=c->r[28]|c->r[28]; // 801B2FAC
  c->lr=0x801B2FB4u; f_80120C40(c); // 801B2FB0
L_801B2FB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2FB4
  if (!crb(c,2)) { goto L_801B2FCC; } // 801B2FB8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B2FBC
  c->r[4]=c->r[29]|c->r[29]; // 801B2FC0
  c->lr=0x801B2FC8u; f_801B2380(c); // 801B2FC4
  c->r[31]=c->r[3]|c->r[3]; // 801B2FC8
L_801B2FCC:;
  c->r[11]=c->r[1]+0x00000040u; // 801B2FCC
  c->r[3]=c->r[31]|c->r[31]; // 801B2FD0
  c->lr=0x801B2FD8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2FD4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B2FD8
  c->lr=c->r[0]; // 801B2FDC
  c->r[1]=c->r[1]+0x00000040u; // 801B2FE0
  return; // 801B2FE4
}

// IOS_Ioctl
void f_801B2FF0(Ctx* __restrict c) {
  trace_call(0x801B2FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2FF0
  c->r[0]=c->lr; // 801B2FF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B2FF8
  c->r[11]=c->r[1]+0x00000030u; // 801B2FFC
  c->lr=0x801B3004u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3000
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B3004
  c->r[25]=c->r[3]|c->r[3]; // 801B3008
  c->r[26]=c->r[4]|c->r[4]; // 801B300C
  c->r[27]=c->r[5]|c->r[5]; // 801B3010
  c->r[28]=c->r[6]|c->r[6]; // 801B3014
  c->r[29]=c->r[7]|c->r[7]; // 801B3018
  c->r[30]=c->r[8]|c->r[8]; // 801B301C
  c->r[31]=0u+0x00000000u; // 801B3020
  if (!crb(c,2)) { goto L_801B3030; } // 801B3024
  c->r[31]=0u+0xFFFFFFFCu; // 801B3028
  goto L_801B3078; // 801B302C
L_801B3030:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B3030
  c->r[4]=0u+0x00000040u; // 801B3034
  c->r[5]=0u+0x00000020u; // 801B3038
  c->lr=0x801B3040u; f_801B3A90(c); // 801B303C
  cmps(c,0,(int32_t)c->r[3],0); // 801B3040
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B3044
  if (!crb(c,2)) { goto L_801B3054; } // 801B3048
  c->r[31]=0u+0xFFFFFFEAu; // 801B304C
  goto L_801B3078; // 801B3050
L_801B3054:;
  c->r[5]=0u+0x00000000u; // 801B3054
  W32(c->r[3]+0x00000020u,c->r[5]); // 801B3058
  c->r[0]=0u+0x00000006u; // 801B305C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B3060
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B3064
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B3068
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B306C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B3070
  W32(c->r[3]+0x00000008u,c->r[25]); // 801B3074
L_801B3078:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B3078
  if (!crb(c,2)) { goto L_801B3104; } // 801B307C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801B3080
  c->r[31]=0u+0x00000000u; // 801B3084
  cmps(c,0,(int32_t)c->r[5],0); // 801B3088
  if (!crb(c,2)) { goto L_801B3098; } // 801B308C
  c->r[31]=0u+0xFFFFFFFCu; // 801B3090
  goto L_801B30EC; // 801B3094
L_801B3098:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B3098
  W32(c->r[5]+0x0000000Cu,c->r[26]); // 801B309C
  if (crb(c,2)) { goto L_801B30AC; } // 801B30A0
  c->r[0]=c->r[29]+0x80000000u; // 801B30A4
  goto L_801B30B0; // 801B30A8
L_801B30AC:;
  c->r[0]=0u+0x00000000u; // 801B30AC
L_801B30B0:;
  W32(c->r[5]+0x00000018u,c->r[0]); // 801B30B0
  cmps(c,0,(int32_t)c->r[27],0); // 801B30B4
  W32(c->r[5]+0x0000001Cu,c->r[30]); // 801B30B8
  if (crb(c,2)) { goto L_801B30C8; } // 801B30BC
  c->r[0]=c->r[27]+0x80000000u; // 801B30C0
  goto L_801B30CC; // 801B30C4
L_801B30C8:;
  c->r[0]=0u+0x00000000u; // 801B30C8
L_801B30CC:;
  W32(c->r[5]+0x00000010u,c->r[0]); // 801B30CC
  c->r[3]=c->r[27]|c->r[27]; // 801B30D0
  c->r[4]=c->r[28]|c->r[28]; // 801B30D4
  W32(c->r[5]+0x00000014u,c->r[28]); // 801B30D8
  c->lr=0x801B30E0u; f_80120C40(c); // 801B30DC
  c->r[3]=c->r[29]|c->r[29]; // 801B30E0
  c->r[4]=c->r[30]|c->r[30]; // 801B30E4
  c->lr=0x801B30ECu; f_80120C40(c); // 801B30E8
L_801B30EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B30EC
  if (!crb(c,2)) { goto L_801B3104; } // 801B30F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B30F4
  c->r[4]=0u+0x00000000u; // 801B30F8
  c->lr=0x801B3100u; f_801B2380(c); // 801B30FC
  c->r[31]=c->r[3]|c->r[3]; // 801B3100
L_801B3104:;
  c->r[11]=c->r[1]+0x00000030u; // 801B3104
  c->r[3]=c->r[31]|c->r[31]; // 801B3108
  c->lr=0x801B3110u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B310C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B3110
  c->lr=c->r[0]; // 801B3114
  c->r[1]=c->r[1]+0x00000030u; // 801B3118
  return; // 801B311C
}

// fn_801B3120
void f_801B3120(Ctx* __restrict c) {
  trace_call(0x801B3120u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3120
  c->r[0]=c->lr; // 801B3124
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3128
  c->r[11]=c->r[1]+0x00000020u; // 801B312C
  c->lr=0x801B3134u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3130
  cmps(c,0,(int32_t)c->r[3],0); // 801B3134
  c->r[29]=c->r[3]|c->r[3]; // 801B3138
  c->r[30]=c->r[7]|c->r[7]; // 801B313C
  c->r[31]=0u+0x00000000u; // 801B3140
  if (!crb(c,2)) { goto L_801B3150; } // 801B3144
  c->r[31]=0u+0xFFFFFFFCu; // 801B3148
  goto L_801B3240; // 801B314C
L_801B3150:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801B3150
  c->r[27]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801B3154
  c->r[26]=0u+0x00000000u; // 801B3158
  c->r[28]=0u+0x00000000u; // 801B315C
  W32(c->r[3]+0x00000010u,c->r[5]); // 801B3160
  W32(c->r[3]+0x00000014u,c->r[6]); // 801B3164
  W32(c->r[3]+0x00000018u,c->r[7]); // 801B3168
  goto L_801B31B4; // 801B316C
L_801B3170:;
  c->r[3]=R32(c->r[29]+0x00000018u); // 801B3170
  c->r[0]=c->r[28]+c->r[27]; // 801B3174
  c->r[4]=c->r[3]+c->r[0]; // 801B3178
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B317C
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B3180
  c->lr=0x801B3188u; f_80120C40(c); // 801B3184
  c->r[4]=R32(c->r[29]+0x00000018u); // 801B3188
  c->r[3]=c->r[28]+c->r[27]; // 801B318C
  c->r[5]=R32(c->r[4]+c->r[3]); // 801B3190
  cmps(c,0,(int32_t)c->r[5],0); // 801B3194
  if (crb(c,2)) { goto L_801B31A4; } // 801B3198
  c->r[0]=c->r[5]+0x80000000u; // 801B319C
  goto L_801B31A8; // 801B31A0
L_801B31A4:;
  c->r[0]=0u+0x00000000u; // 801B31A4
L_801B31A8:;
  W32(c->r[4]+c->r[3],c->r[0]); // 801B31A8
  c->r[28]=c->r[28]+0x00000008u; // 801B31AC
  c->r[26]=c->r[26]+0x00000001u; // 801B31B0
L_801B31B4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801B31B4
  cmpu(c,0,c->r[26],c->r[0]); // 801B31B8
  if (crb(c,0)) { IRQCHK(c); goto L_801B3170; } // 801B31BC
  c->r[27]=0u+0x00000000u; // 801B31C0
  c->r[28]=0u+0x00000000u; // 801B31C4
  goto L_801B3208; // 801B31C8
L_801B31CC:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801B31CC
  c->r[4]=c->r[0]+c->r[28]; // 801B31D0
  c->r[3]=R32(c->r[28]+c->r[0]); // 801B31D4
  c->r[4]=R32(c->r[4]+0x00000004u); // 801B31D8
  c->lr=0x801B31E0u; f_80120C40(c); // 801B31DC
  c->r[3]=R32(c->r[29]+0x00000018u); // 801B31E0
  c->r[4]=R32(c->r[3]+c->r[28]); // 801B31E4
  cmps(c,0,(int32_t)c->r[4],0); // 801B31E8
  if (crb(c,2)) { goto L_801B31F8; } // 801B31EC
  c->r[0]=c->r[4]+0x80000000u; // 801B31F0
  goto L_801B31FC; // 801B31F4
L_801B31F8:;
  c->r[0]=0u+0x00000000u; // 801B31F8
L_801B31FC:;
  W32(c->r[3]+c->r[28],c->r[0]); // 801B31FC
  c->r[28]=c->r[28]+0x00000008u; // 801B3200
  c->r[27]=c->r[27]+0x00000001u; // 801B3204
L_801B3208:;
  c->r[4]=R32(c->r[29]+0x00000010u); // 801B3208
  cmpu(c,0,c->r[27],c->r[4]); // 801B320C
  if (crb(c,0)) { IRQCHK(c); goto L_801B31CC; } // 801B3210
  c->r[0]=R32(c->r[29]+0x00000014u); // 801B3214
  c->r[3]=R32(c->r[29]+0x00000018u); // 801B3218
  c->r[0]=c->r[4]+c->r[0]; // 801B321C
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B3220
  c->lr=0x801B3228u; f_80120C40(c); // 801B3224
  cmps(c,0,(int32_t)c->r[30],0); // 801B3228
  if (crb(c,2)) { goto L_801B3238; } // 801B322C
  c->r[0]=c->r[30]+0x80000000u; // 801B3230
  goto L_801B323C; // 801B3234
L_801B3238:;
  c->r[0]=0u+0x00000000u; // 801B3238
L_801B323C:;
  W32(c->r[29]+0x00000018u,c->r[0]); // 801B323C
L_801B3240:;
  c->r[11]=c->r[1]+0x00000020u; // 801B3240
  c->r[3]=c->r[31]|c->r[31]; // 801B3244
  c->lr=0x801B324Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3248
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B324C
  c->lr=c->r[0]; // 801B3250
  c->r[1]=c->r[1]+0x00000020u; // 801B3254
  return; // 801B3258
}

// fn_801B3260
void f_801B3260(Ctx* __restrict c) {
  trace_call(0x801B3260u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3260
  c->r[0]=c->lr; // 801B3264
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3268
  c->r[11]=c->r[1]+0x00000030u; // 801B326C
  c->lr=0x801B3274u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3270
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B3274
  c->r[24]=c->r[3]|c->r[3]; // 801B3278
  c->r[25]=c->r[4]|c->r[4]; // 801B327C
  c->r[26]=c->r[5]|c->r[5]; // 801B3280
  c->r[27]=c->r[6]|c->r[6]; // 801B3284
  c->r[28]=c->r[7]|c->r[7]; // 801B3288
  c->r[29]=c->r[8]|c->r[8]; // 801B328C
  c->r[30]=c->r[9]|c->r[9]; // 801B3290
  c->r[31]=0u+0x00000000u; // 801B3294
  if (!crb(c,2)) { goto L_801B32A4; } // 801B3298
  c->r[31]=0u+0xFFFFFFFCu; // 801B329C
  goto L_801B32EC; // 801B32A0
L_801B32A4:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B32A4
  c->r[4]=0u+0x00000040u; // 801B32A8
  c->r[5]=0u+0x00000020u; // 801B32AC
  c->lr=0x801B32B4u; f_801B3A90(c); // 801B32B0
  cmps(c,0,(int32_t)c->r[3],0); // 801B32B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B32B8
  if (!crb(c,2)) { goto L_801B32C8; } // 801B32BC
  c->r[31]=0u+0xFFFFFFEAu; // 801B32C0
  goto L_801B32EC; // 801B32C4
L_801B32C8:;
  W32(c->r[3]+0x00000020u,c->r[29]); // 801B32C8
  c->r[5]=0u+0x00000000u; // 801B32CC
  c->r[0]=0u+0x00000007u; // 801B32D0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B32D4
  W32(c->r[4]+0x00000024u,c->r[30]); // 801B32D8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B32DC
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B32E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B32E4
  W32(c->r[3]+0x00000008u,c->r[24]); // 801B32E8
L_801B32EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B32EC
  if (!crb(c,2)) { goto L_801B3328; } // 801B32F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B32F4
  c->r[4]=c->r[25]|c->r[25]; // 801B32F8
  c->r[5]=c->r[26]|c->r[26]; // 801B32FC
  c->r[6]=c->r[27]|c->r[27]; // 801B3300
  c->r[7]=c->r[28]|c->r[28]; // 801B3304
  c->lr=0x801B330Cu; f_801B3120(c); // 801B3308
  cmps(c,0,(int32_t)c->r[3],0); // 801B330C
  c->r[31]=c->r[3]|c->r[3]; // 801B3310
  if (!crb(c,2)) { goto L_801B3328; } // 801B3314
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B3318
  c->r[4]=c->r[29]|c->r[29]; // 801B331C
  c->lr=0x801B3324u; f_801B2380(c); // 801B3320
  c->r[31]=c->r[3]|c->r[3]; // 801B3324
L_801B3328:;
  c->r[11]=c->r[1]+0x00000030u; // 801B3328
  c->r[3]=c->r[31]|c->r[31]; // 801B332C
  c->lr=0x801B3334u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3330
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B3334
  c->lr=c->r[0]; // 801B3338
  c->r[1]=c->r[1]+0x00000030u; // 801B333C
  return; // 801B3340
}

// IOS_Ioctlv
void f_801B3350(Ctx* __restrict c) {
  trace_call(0x801B3350u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3350
  c->r[0]=c->lr; // 801B3354
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3358
  c->r[11]=c->r[1]+0x00000030u; // 801B335C
  c->lr=0x801B3364u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3360
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B3364
  c->r[26]=c->r[3]|c->r[3]; // 801B3368
  c->r[27]=c->r[4]|c->r[4]; // 801B336C
  c->r[28]=c->r[5]|c->r[5]; // 801B3370
  c->r[29]=c->r[6]|c->r[6]; // 801B3374
  c->r[30]=c->r[7]|c->r[7]; // 801B3378
  c->r[31]=0u+0x00000000u; // 801B337C
  if (!crb(c,2)) { goto L_801B338C; } // 801B3380
  c->r[31]=0u+0xFFFFFFFCu; // 801B3384
  goto L_801B33D4; // 801B3388
L_801B338C:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B338C
  c->r[4]=0u+0x00000040u; // 801B3390
  c->r[5]=0u+0x00000020u; // 801B3394
  c->lr=0x801B339Cu; f_801B3A90(c); // 801B3398
  cmps(c,0,(int32_t)c->r[3],0); // 801B339C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B33A0
  if (!crb(c,2)) { goto L_801B33B0; } // 801B33A4
  c->r[31]=0u+0xFFFFFFEAu; // 801B33A8
  goto L_801B33D4; // 801B33AC
L_801B33B0:;
  c->r[5]=0u+0x00000000u; // 801B33B0
  W32(c->r[3]+0x00000020u,c->r[5]); // 801B33B4
  c->r[0]=0u+0x00000007u; // 801B33B8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B33BC
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B33C0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B33C4
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B33C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B33CC
  W32(c->r[3]+0x00000008u,c->r[26]); // 801B33D0
L_801B33D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B33D4
  if (!crb(c,2)) { goto L_801B3410; } // 801B33D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B33DC
  c->r[4]=c->r[27]|c->r[27]; // 801B33E0
  c->r[5]=c->r[28]|c->r[28]; // 801B33E4
  c->r[6]=c->r[29]|c->r[29]; // 801B33E8
  c->r[7]=c->r[30]|c->r[30]; // 801B33EC
  c->lr=0x801B33F4u; f_801B3120(c); // 801B33F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B33F4
  c->r[31]=c->r[3]|c->r[3]; // 801B33F8
  if (!crb(c,2)) { goto L_801B3410; } // 801B33FC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B3400
  c->r[4]=0u+0x00000000u; // 801B3404
  c->lr=0x801B340Cu; f_801B2380(c); // 801B3408
  c->r[31]=c->r[3]|c->r[3]; // 801B340C
L_801B3410:;
  c->r[11]=c->r[1]+0x00000030u; // 801B3410
  c->r[3]=c->r[31]|c->r[31]; // 801B3414
  c->lr=0x801B341Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3418
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B341C
  c->lr=c->r[0]; // 801B3420
  c->r[1]=c->r[1]+0x00000030u; // 801B3424
  return; // 801B3428
}

// fn_801B3430
void f_801B3430(Ctx* __restrict c) {
  trace_call(0x801B3430u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3430
  c->r[0]=c->lr; // 801B3434
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3438
  c->r[11]=c->r[1]+0x00000030u; // 801B343C
  c->lr=0x801B3444u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3440
  c->r[26]=c->r[3]|c->r[3]; // 801B3444
  c->r[27]=c->r[4]|c->r[4]; // 801B3448
  c->r[28]=c->r[5]|c->r[5]; // 801B344C
  c->r[30]=c->r[6]|c->r[6]; // 801B3450
  c->r[29]=c->r[7]|c->r[7]; // 801B3454
  c->lr=0x801B345Cu; f_801251B0(c); // 801B3458
  c->r[0]=R32(c->r[13]+0xFFFFC3E0u); // 801B345C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3460
  if (crb(c,2)) { goto L_801B3474; } // 801B3464
  c->lr=0x801B346Cu; f_801251F0(c); // 801B3468
  c->r[31]=0u+0xFFFFFFF6u; // 801B346C
  goto L_801B3738; // 801B3470
L_801B3474:;
  c->r[0]=0u+0x00000001u; // 801B3474
  W32(c->r[13]+0xFFFFC3E0u,c->r[0]); // 801B3478
  c->lr=0x801B3480u; f_801251F0(c); // 801B347C
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801B3480
  c->r[31]=0u+0x00000000u; // 801B3484
  if (!crb(c,2)) { goto L_801B3494; } // 801B3488
  c->r[31]=0u+0xFFFFFFFCu; // 801B348C
  goto L_801B34DC; // 801B3490
L_801B3494:;
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B3494
  c->r[4]=0u+0x00000040u; // 801B3498
  c->r[5]=0u+0x00000020u; // 801B349C
  c->lr=0x801B34A4u; f_801B3A90(c); // 801B34A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B34A4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B34A8
  if (!crb(c,2)) { goto L_801B34B8; } // 801B34AC
  c->r[31]=0u+0xFFFFFFEAu; // 801B34B0
  goto L_801B34DC; // 801B34B4
L_801B34B8:;
  c->r[5]=0u+0x00000000u; // 801B34B8
  W32(c->r[3]+0x00000020u,c->r[5]); // 801B34BC
  c->r[0]=0u+0x00000007u; // 801B34C0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B34C4
  W32(c->r[4]+0x00000024u,c->r[5]); // 801B34C8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B34CC
  W32(c->r[4]+0x00000028u,c->r[5]); // 801B34D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B34D4
  W32(c->r[3]+0x00000008u,c->r[26]); // 801B34D8
L_801B34DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B34DC
  if (!crb(c,2)) { goto L_801B3710; } // 801B34E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B34E4
  c->r[0]=0u+0x00000001u; // 801B34E8
  W32(c->r[13]+0xFFFFC3E8u,c->r[3]); // 801B34EC
  c->r[4]=c->r[27]|c->r[27]; // 801B34F0
  c->r[5]=c->r[28]|c->r[28]; // 801B34F4
  c->r[6]=c->r[30]|c->r[30]; // 801B34F8
  W32(c->r[3]+0x00000028u,c->r[0]); // 801B34FC
  c->r[7]=c->r[29]|c->r[29]; // 801B3500
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B3504
  c->lr=0x801B350Cu; f_801B3120(c); // 801B3508
  cmps(c,0,(int32_t)c->r[3],0); // 801B350C
  c->r[31]=c->r[3]|c->r[3]; // 801B3510
  if (!crb(c,2)) { goto L_801B3710; } // 801B3514
  c->r[29]=0u+0x805B0000u; // 801B3518
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B351C
  c->r[3]=c->r[29]+0xFFFF86C0u; // 801B3520
  c->r[5]=0u+0x00000040u; // 801B3524
  c->lr=0x801B352Cu; f_800043C4(c); // 801B3528
  c->r[3]=c->r[29]+0xFFFF86C0u; // 801B352C
  W32(c->r[13]+0xFFFFC3E4u,c->r[3]); // 801B3530
  c->r[29]=R32(c->r[1]+0x00000008u); // 801B3534
  c->r[3]=c->r[3]+0x0000002Cu; // 801B3538
  c->lr=0x801B3540u; f_80129000(c); // 801B353C
  c->r[3]=c->r[29]|c->r[29]; // 801B3540
  c->r[4]=0u+0x00000020u; // 801B3544
  c->lr=0x801B354Cu; f_80120C40(c); // 801B3548
  c->lr=0x801B3550u; f_801251B0(c); // 801B354C
  c->r[4]=0u+0x805B0000u; // 801B3550
  c->r[30]=c->r[3]|c->r[3]; // 801B3554
  c->r[3]=c->r[4]+0xFFFF85C0u; // 801B3558
  c->r[0]=R32(c->r[4]+0xFFFF85C0u); // 801B355C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B3560
  c->r[31]=0u+0x00000000u; // 801B3564
  cmpu(c,0,c->r[3],c->r[0]); // 801B3568
  if (!crb(c,0)) { goto L_801B357C; } // 801B356C
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 801B3570
  c->r[0]=c->r[0]+c->r[3]; // 801B3574
  goto L_801B3598; // 801B3578
L_801B357C:;
  c->r[4]=c->r[3]-c->r[0]; // 801B357C
  c->r[3]=0u+0x00000030u; // 801B3580
  c->r[0]=c->r[4]+0xFFFFFFD0u; // 801B3584
  c->r[3]=c->r[4]|~c->r[3]; // 801B3588
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801B358C
  c->r[0]=c->r[3]-c->r[0]; // 801B3590
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801B3594
L_801B3598:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B3598
  if (crb(c,2)) { goto L_801B35A8; } // 801B359C
  c->r[31]=0u+0xFFFFFFF8u; // 801B35A0
  goto L_801B35FC; // 801B35A4
L_801B35A8:;
  c->r[7]=0u+0x805B0000u; // 801B35A8
  c->r[4]=0u+0xAAAB0000u; // 801B35AC
  c->r[7]=c->r[7]+0xFFFF85C0u; // 801B35B0
  c->r[3]=c->r[29]|c->r[29]; // 801B35B4
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 801B35B8
  c->r[0]=c->r[4]+0xFFFFAAABu; // 801B35BC
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801B35C0
  c->r[4]=c->r[7]+c->r[4]; // 801B35C4
  W32(c->r[4]+0x00000010u,c->r[29]); // 801B35C8
  c->r[5]=R32(c->r[7]+0x0000000Cu); // 801B35CC
  c->r[4]=R32(c->r[7]+0x00000004u); // 801B35D0
  c->r[6]=c->r[5]+0x00000001u; // 801B35D4
  c->r[5]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[6])>>32); // 801B35D8
  c->r[0]=c->r[4]+0x00000001u; // 801B35DC
  W32(c->r[7]+0x00000004u,c->r[0]); // 801B35E0
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; // 801B35E4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 801B35E8
  c->r[0]=c->r[6]-c->r[0]; // 801B35EC
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 801B35F0
  c->r[4]=R32(c->r[29]+0x00000008u); // 801B35F4
  c->lr=0x801B35FCu; f_801B3DE0(c); // 801B35F8
L_801B35FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B35FC
  if (crb(c,2)) { goto L_801B3610; } // 801B3600
  c->r[3]=c->r[30]|c->r[30]; // 801B3604
  c->lr=0x801B360Cu; f_801251F0(c); // 801B3608
  goto L_801B3710; // 801B360C
L_801B3610:;
  c->r[0]=R32(c->r[13]+0xFFFFACF8u); // 801B3610
  cmps(c,0,(int32_t)c->r[0],0); // 801B3614
  if (!crb(c,1)) { goto L_801B36F4; } // 801B3618
  c->r[4]=0u+0x805B0000u; // 801B361C
  c->r[3]=c->r[4]+0xFFFF85C0u; // 801B3620
  c->r[0]=R32(c->r[4]+0xFFFF85C0u); // 801B3624
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B3628
  cmpu(c,0,c->r[3],c->r[0]); // 801B362C
  if (!crb(c,0)) { goto L_801B3640; } // 801B3630
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 801B3634
  c->r[0]=c->r[0]+c->r[3]; // 801B3638
  goto L_801B364C; // 801B363C
L_801B3640:;
  c->r[0]=c->r[3]-c->r[0]; // 801B3640
  c->r[0]=cntlz(c->r[0]); // 801B3644
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B3648
L_801B364C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B364C
  if (!crb(c,2)) { goto L_801B36F4; } // 801B3650
  c->r[3]=0u+0x805B0000u; // 801B3654
  c->r[3]=c->r[3]+0xFFFF85C0u; // 801B3658
  c->r[0]=R32(c->r[3]+0x00000008u); // 801B365C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B3660
  c->r[3]=c->r[3]+c->r[0]; // 801B3664
  c->r[4]=R32(c->r[3]+0x00000010u); // 801B3668
  cmps(c,0,(int32_t)c->r[4],0); // 801B366C
  if (crb(c,2)) { goto L_801B36F4; } // 801B3670
  c->r[0]=R32(c->r[4]+0x00000028u); // 801B3674
  cmps(c,0,(int32_t)c->r[0],0); // 801B3678
  if (crb(c,2)) { goto L_801B368C; } // 801B367C
  c->r[3]=R32(c->r[13]+0xFFFFACF8u); // 801B3680
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B3684
  W32(c->r[13]+0xFFFFACF8u,c->r[0]); // 801B3688
L_801B368C:;
  c->r[4]=c->r[4]+0x80000000u; // 801B368C
  c->r[3]=0u+0x00000000u; // 801B3690
  c->lr=0x801B3698u; f_801B1DB0(c); // 801B3694
  c->r[8]=0u+0x805B0000u; // 801B3698
  c->r[3]=0u+0xAAAB0000u; // 801B369C
  c->r[7]=c->r[8]+0xFFFF85C0u; // 801B36A0
  c->r[4]=R32(c->r[8]+0xFFFF85C0u); // 801B36A4
  c->r[6]=R32(c->r[7]+0x00000008u); // 801B36A8
  c->r[5]=c->r[3]+0xFFFFAAABu; // 801B36AC
  c->r[0]=c->r[4]+0x00000001u; // 801B36B0
  c->r[3]=R32(c->r[13]+0xFFFFACF8u); // 801B36B4
  c->r[6]=c->r[6]+0x00000001u; // 801B36B8
  W32(c->r[8]+0xFFFF85C0u,c->r[0]); // 801B36BC
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[6])>>32); // 801B36C0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B36C4
  W32(c->r[13]+0xFFFFACF8u,c->r[0]); // 801B36C8
  c->r[3]=0u+0x00000001u; // 801B36CC
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B36D0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801B36D4
  c->r[0]=c->r[6]-c->r[0]; // 801B36D8
  W32(c->r[7]+0x00000008u,c->r[0]); // 801B36DC
  c->lr=0x801B36E4u; f_801B1DA0(c); // 801B36E0
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 801B36E4
  c->r[3]=0u+0x00000001u; // 801B36E8
  c->r[4]=c->r[0]|0x00000001u; // 801B36EC
  c->lr=0x801B36F4u; f_801B1DB0(c); // 801B36F0
L_801B36F4:;
  c->r[3]=R32(c->r[13]+0xFFFFC3E4u); // 801B36F4
  c->r[3]=c->r[3]+0x0000002Cu; // 801B36F8
  c->lr=0x801B3700u; f_8012A0D0(c); // 801B36FC
  c->r[3]=c->r[30]|c->r[30]; // 801B3700
  c->lr=0x801B3708u; f_801251F0(c); // 801B3704
  c->r[3]=R32(c->r[13]+0xFFFFC3E4u); // 801B3708
  c->r[31]=R32(c->r[3]+0x00000004u); // 801B370C
L_801B3710:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801B3710
  c->r[0]=0u+0x00000000u; // 801B3714
  W32(c->r[13]+0xFFFFC3E0u,c->r[0]); // 801B3718
  cmps(c,0,(int32_t)c->r[4],0); // 801B371C
  W32(c->r[13]+0xFFFFC3E8u,c->r[0]); // 801B3720
  if (crb(c,2)) { goto L_801B3738; } // 801B3724
  cmps(c,0,(int32_t)c->r[31],0); // 801B3728
  if (crb(c,2)) { goto L_801B3738; } // 801B372C
  c->r[3]=R32(c->r[13]+0xFFFFACFCu); // 801B3730
  c->lr=0x801B3738u; f_801B3AA0(c); // 801B3734
L_801B3738:;
  c->r[11]=c->r[1]+0x00000030u; // 801B3738
  c->r[3]=c->r[31]|c->r[31]; // 801B373C
  c->lr=0x801B3744u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3740
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B3744
  c->lr=c->r[0]; // 801B3748
  c->r[1]=c->r[1]+0x00000030u; // 801B374C
  return; // 801B3750
}

// iosCreateHeap
void f_801B3760(Ctx* __restrict c) {
  trace_call(0x801B3760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3760
  c->r[0]=c->lr; // 801B3764
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3768
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B376C
  c->r[31]=0u+0xFFFFFFFCu; // 801B3770
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3774
  c->r[30]=c->r[4]|c->r[4]; // 801B3778
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B377C
  c->r[29]=c->r[3]|c->r[3]; // 801B3780
  c->lr=0x801B3788u; f_801251B0(c); // 801B3784
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B3788
  if (!crb(c,2)) { goto L_801B386C; } // 801B378C
  c->r[4]=0u+0x805B0000u; // 801B3790
  {uint32_t ea=c->r[4]+0xFFFF8700u; c->r[0]=R32(ea); c->r[4]=ea;} // 801B3794
  c->r[31]=0u+0x00000000u; // 801B3798
  cmps(c,0,(int32_t)c->r[0],0); // 801B379C
  if (crb(c,2)) { goto L_801B3818; } // 801B37A0
  c->r[0]=R32(c->r[4]+0x00000010u); // 801B37A4
  c->r[31]=0u+0x00000001u; // 801B37A8
  cmps(c,0,(int32_t)c->r[0],0); // 801B37AC
  if (crb(c,2)) { goto L_801B3818; } // 801B37B0
  c->r[0]=R32(c->r[4]+0x00000020u); // 801B37B4
  c->r[31]=0u+0x00000002u; // 801B37B8
  cmps(c,0,(int32_t)c->r[0],0); // 801B37BC
  if (crb(c,2)) { goto L_801B3818; } // 801B37C0
  c->r[0]=R32(c->r[4]+0x00000030u); // 801B37C4
  c->r[31]=0u+0x00000003u; // 801B37C8
  cmps(c,0,(int32_t)c->r[0],0); // 801B37CC
  if (crb(c,2)) { goto L_801B3818; } // 801B37D0
  c->r[0]=R32(c->r[4]+0x00000040u); // 801B37D4
  c->r[31]=0u+0x00000004u; // 801B37D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B37DC
  if (crb(c,2)) { goto L_801B3818; } // 801B37E0
  c->r[0]=R32(c->r[4]+0x00000050u); // 801B37E4
  c->r[31]=0u+0x00000005u; // 801B37E8
  cmps(c,0,(int32_t)c->r[0],0); // 801B37EC
  if (crb(c,2)) { goto L_801B3818; } // 801B37F0
  c->r[0]=R32(c->r[4]+0x00000060u); // 801B37F4
  c->r[31]=0u+0x00000006u; // 801B37F8
  cmps(c,0,(int32_t)c->r[0],0); // 801B37FC
  if (crb(c,2)) { goto L_801B3818; } // 801B3800
  c->r[0]=R32(c->r[4]+0x00000070u); // 801B3804
  c->r[31]=0u+0x00000007u; // 801B3808
  cmps(c,0,(int32_t)c->r[0],0); // 801B380C
  if (crb(c,2)) { goto L_801B3818; } // 801B3810
  c->r[31]=0u+0x00000008u; // 801B3814
L_801B3818:;
  cmps(c,0,(int32_t)c->r[31],8); // 801B3818
  if (!crb(c,2)) { goto L_801B3828; } // 801B381C
  c->r[31]=0u+0xFFFFFFFBu; // 801B3820
  goto L_801B386C; // 801B3824
L_801B3828:;
  c->r[5]=0u+0x805B0000u; // 801B3828
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 801B382C
  c->r[5]=c->r[5]+0xFFFF8700u; // 801B3830
  c->r[4]=0u+0xBABE0000u; // 801B3834
  c->r[6]=c->r[5]+c->r[0]; // 801B3838
  c->r[0]=0u+0x00000000u; // 801B383C
  W32(c->r[6]+0x00000000u,c->r[29]); // 801B3840
  c->r[5]=c->r[30]+0xFFFFFFF0u; // 801B3844
  W32(c->r[6]+0x00000008u,c->r[30]); // 801B3848
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 801B384C
  W32(c->r[29]+0x00000000u,c->r[4]); // 801B3850
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801B3854
  W32(c->r[4]+0x00000004u,c->r[5]); // 801B3858
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801B385C
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B3860
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801B3864
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801B3868
L_801B386C:;
  c->lr=0x801B3870u; f_801251F0(c); // 801B386C
  c->r[3]=c->r[31]|c->r[31]; // 801B3870
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3874
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3878
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B387C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3880
  c->lr=c->r[0]; // 801B3884
  c->r[1]=c->r[1]+0x00000020u; // 801B3888
  return; // 801B388C
}

// __iosAlloc
void f_801B3890(Ctx* __restrict c) {
  trace_call(0x801B3890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3890
  c->r[0]=c->lr; // 801B3894
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B389C
  c->r[31]=0u+0x00000000u; // 801B38A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B38A4
  c->r[30]=c->r[5]|c->r[5]; // 801B38A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B38AC
  c->r[29]=c->r[4]|c->r[4]; // 801B38B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B38B4
  c->r[28]=c->r[3]|c->r[3]; // 801B38B8
  c->lr=0x801B38C0u; f_801251B0(c); // 801B38BC
  cmps(c,0,(int32_t)c->r[29],0); // 801B38C0
  if (crb(c,2)) { goto L_801B3A64; } // 801B38C4
  cmps(c,0,(int32_t)c->r[30],0); // 801B38C8
  if (crb(c,2)) { goto L_801B3A64; } // 801B38CC
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 801B38D0
  c->r[0]=c->r[30]&c->r[0]; cr0(c,c->r[0]); // 801B38D4
  if (!crb(c,2)) { goto L_801B3A64; } // 801B38D8
  cmpu(c,0,c->r[30],0x00000020u); // 801B38DC
  if (!crb(c,0)) { goto L_801B38E8; } // 801B38E0
  c->r[30]=0u+0x00000020u; // 801B38E4
L_801B38E8:;
  cmpu(c,0,c->r[28],0x00000007u); // 801B38E8
  c->r[0]=c->r[29]+0x0000001Fu; // 801B38EC
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801B38F0
  if (crb(c,1)) { goto L_801B3910; } // 801B38F4
  c->r[4]=0u+0x805B0000u; // 801B38F8
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 801B38FC
  c->r[4]=c->r[4]+0xFFFF8700u; // 801B3900
  {uint32_t ea=c->r[4]+c->r[0]; c->r[0]=R32(ea); c->r[4]=ea;} // 801B3904
  cmps(c,0,(int32_t)c->r[0],0); // 801B3908
  if (!crb(c,2)) { goto L_801B3918; } // 801B390C
L_801B3910:;
  c->r[31]=0u+0x00000000u; // 801B3910
  goto L_801B3A64; // 801B3914
L_801B3918:;
  c->r[8]=R32(c->r[4]+0x0000000Cu); // 801B3918
  c->r[6]=c->r[30]+0xFFFFFFFFu; // 801B391C
  c->r[5]=0u+0x00000000u; // 801B3920
  goto L_801B397C; // 801B3924
L_801B3928:;
  c->r[7]=R32(c->r[8]+0x00000004u); // 801B3928
  c->r[0]=c->r[8]+0x00000010u; // 801B392C
  c->r[0]=c->r[0]&c->r[6]; // 801B3930
  cmpu(c,0,c->r[7],c->r[29]); // 801B3934
  c->r[0]=c->r[30]-c->r[0]; // 801B3938
  c->r[0]=c->r[6]&c->r[0]; // 801B393C
  if (!crb(c,2)) { goto L_801B3954; } // 801B3940
  cmps(c,0,(int32_t)c->r[0],0); // 801B3944
  if (!crb(c,2)) { goto L_801B3954; } // 801B3948
  c->r[5]=c->r[8]|c->r[8]; // 801B394C
  goto L_801B3984; // 801B3950
L_801B3954:;
  c->r[0]=c->r[29]+c->r[0]; // 801B3954
  cmpu(c,0,c->r[7],c->r[0]); // 801B3958
  if (crb(c,0)) { goto L_801B3978; } // 801B395C
  cmps(c,0,(int32_t)c->r[5],0); // 801B3960
  if (crb(c,2)) { goto L_801B3974; } // 801B3964
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B3968
  cmpu(c,0,c->r[7],c->r[0]); // 801B396C
  if (!crb(c,0)) { goto L_801B3978; } // 801B3970
L_801B3974:;
  c->r[5]=c->r[8]|c->r[8]; // 801B3974
L_801B3978:;
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 801B3978
L_801B397C:;
  cmps(c,0,(int32_t)c->r[8],0); // 801B397C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3928; } // 801B3980
L_801B3984:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B3984
  if (crb(c,2)) { goto L_801B3A64; } // 801B3988
  c->r[7]=c->r[30]+0xFFFFFFFFu; // 801B398C
  c->r[0]=c->r[5]+0x00000010u; // 801B3990
  c->r[0]=c->r[0]&c->r[7]; // 801B3994
  c->r[6]=R32(c->r[5]+0x00000004u); // 801B3998
  c->r[0]=c->r[30]-c->r[0]; // 801B399C
  c->r[8]=c->r[7]&c->r[0]; // 801B39A0
  c->r[7]=c->r[29]+c->r[8]; // 801B39A4
  c->r[0]=c->r[7]+0x00000010u; // 801B39A8
  cmpu(c,0,c->r[6],c->r[0]); // 801B39AC
  if (!crb(c,1)) { goto L_801B39F8; } // 801B39B0
  c->r[6]=c->r[5]+c->r[29]; // 801B39B4
  c->r[0]=0u+0xBABE0000u; // 801B39B8
  c->r[9]=c->r[8]+c->r[6]; // 801B39BC
  W32(c->r[9]+0x00000010u,c->r[0]); // 801B39C0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B39C4
  c->r[0]=c->r[0]-c->r[29]; // 801B39C8
  c->r[6]=c->r[0]-c->r[8]; // 801B39CC
  c->r[0]=c->r[6]+0xFFFFFFF0u; // 801B39D0
  W32(c->r[9]+0x00000014u,c->r[0]); // 801B39D4
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 801B39D8
  W32(c->r[9]+0x0000001Cu,c->r[6]); // 801B39DC
  c->r[9]=c->r[9]+0x00000010u; // 801B39E0
  cmps(c,0,(int32_t)c->r[6],0); // 801B39E4
  if (crb(c,2)) { goto L_801B39F0; } // 801B39E8
  W32(c->r[6]+0x00000008u,c->r[9]); // 801B39EC
L_801B39F0:;
  W32(c->r[5]+0x0000000Cu,c->r[9]); // 801B39F0
  W32(c->r[5]+0x00000004u,c->r[7]); // 801B39F4
L_801B39F8:;
  c->r[6]=0u+0xBABE0000u; // 801B39F8
  c->r[0]=c->r[6]+0x00000001u; // 801B39FC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801B3A00
  c->r[6]=R32(c->r[5]+0x00000008u); // 801B3A04
  cmps(c,0,(int32_t)c->r[6],0); // 801B3A08
  if (crb(c,2)) { goto L_801B3A1C; } // 801B3A0C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B3A10
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801B3A14
  goto L_801B3A24; // 801B3A18
L_801B3A1C:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B3A1C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801B3A20
L_801B3A24:;
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 801B3A24
  cmps(c,0,(int32_t)c->r[4],0); // 801B3A28
  if (crb(c,2)) { goto L_801B3A38; } // 801B3A2C
  c->r[0]=R32(c->r[5]+0x00000008u); // 801B3A30
  W32(c->r[4]+0x00000008u,c->r[0]); // 801B3A34
L_801B3A38:;
  c->r[0]=0u+0x00000000u; // 801B3A38
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801B3A3C
  c->r[31]=c->r[5]+c->r[8]; // 801B3A40
  cmps(c,0,(int32_t)c->r[8],0); // 801B3A44
  W32(c->r[5]+0x00000008u,c->r[0]); // 801B3A48
  c->r[31]=c->r[31]+0x00000010u; // 801B3A4C
  if (crb(c,2)) { goto L_801B3A64; } // 801B3A50
  c->r[4]=0u+0xBABE0000u; // 801B3A54
  c->r[0]=c->r[4]+0x00000002u; // 801B3A58
  W32(c->r[31]+0xFFFFFFF0u,c->r[0]); // 801B3A5C
  W32(c->r[31]+0xFFFFFFF8u,c->r[5]); // 801B3A60
L_801B3A64:;
  c->lr=0x801B3A68u; f_801251F0(c); // 801B3A64
  c->r[3]=c->r[31]|c->r[31]; // 801B3A68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3A6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3A70
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B3A74
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B3A78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3A7C
  c->lr=c->r[0]; // 801B3A80
  c->r[1]=c->r[1]+0x00000020u; // 801B3A84
  return; // 801B3A88
}

// iosAllocAligned
void f_801B3A90(Ctx* __restrict c) {
  trace_call(0x801B3A90u);
  f_801B3890(c); return; // 801B3A90
}

// iosFree
void f_801B3AA0(Ctx* __restrict c) {
  trace_call(0x801B3AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3AA0
  c->r[0]=c->lr; // 801B3AA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3AA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3AAC
  c->r[31]=0u+0xFFFFFFFCu; // 801B3AB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3AB4
  c->r[30]=c->r[4]|c->r[4]; // 801B3AB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3ABC
  c->r[29]=c->r[3]|c->r[3]; // 801B3AC0
  c->lr=0x801B3AC8u; f_801251B0(c); // 801B3AC4
  cmps(c,0,(int32_t)c->r[30],0); // 801B3AC8
  if (crb(c,2)) { goto L_801B3C64; } // 801B3ACC
  cmpu(c,0,c->r[29],0x00000007u); // 801B3AD0
  if (crb(c,1)) { goto L_801B3AF4; } // 801B3AD4
  c->r[4]=0u+0x805B0000u; // 801B3AD8
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 801B3ADC
  c->r[4]=c->r[4]+0xFFFF8700u; // 801B3AE0
  c->r[5]=c->r[4]+c->r[0]; // 801B3AE4
  c->r[4]=R32(c->r[4]+c->r[0]); // 801B3AE8
  cmps(c,0,(int32_t)c->r[4],0); // 801B3AEC
  if (!crb(c,2)) { goto L_801B3AFC; } // 801B3AF0
L_801B3AF4:;
  c->r[31]=0u+0xFFFFFFFCu; // 801B3AF4
  goto L_801B3C64; // 801B3AF8
L_801B3AFC:;
  c->r[0]=c->r[4]+0x00000010u; // 801B3AFC
  cmpu(c,0,c->r[30],c->r[0]); // 801B3B00
  if (crb(c,0)) { goto L_801B3C64; } // 801B3B04
  c->r[0]=R32(c->r[5]+0x00000008u); // 801B3B08
  c->r[0]=c->r[4]+c->r[0]; // 801B3B0C
  cmpu(c,0,c->r[30],c->r[0]); // 801B3B10
  if (crb(c,1)) { goto L_801B3C64; } // 801B3B14
  c->r[4]=R32(c->r[30]+0xFFFFFFF0u); // 801B3B18
  c->r[6]=c->r[30]+0xFFFFFFF0u; // 801B3B1C
  c->r[0]=c->r[4]+0x45420000u; // 801B3B20
  cmpu(c,0,c->r[0],0x00000002u); // 801B3B24
  if (!crb(c,2)) { goto L_801B3B30; } // 801B3B28
  c->r[6]=R32(c->r[6]+0x00000008u); // 801B3B2C
L_801B3B30:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 801B3B30
  c->r[0]=c->r[4]+0x45420000u; // 801B3B34
  cmpu(c,0,c->r[0],0x00000001u); // 801B3B38
  if (!crb(c,2)) { goto L_801B3C64; } // 801B3B3C
  c->r[0]=0u+0xBABE0000u; // 801B3B40
  W32(c->r[6]+0x00000000u,c->r[0]); // 801B3B44
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 801B3B48
  c->r[7]=c->r[4]|c->r[4]; // 801B3B4C
  goto L_801B3B70; // 801B3B50
  c->r[0]=c->r[0]|0x00000000u; // 801B3B54
L_801B3B58:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801B3B58
  cmps(c,0,(int32_t)c->r[0],0); // 801B3B5C
  if (crb(c,2)) { goto L_801B3B78; } // 801B3B60
  cmpu(c,0,c->r[0],c->r[6]); // 801B3B64
  if (crb(c,1)) { goto L_801B3B78; } // 801B3B68
  c->r[7]=c->r[0]|c->r[0]; // 801B3B6C
L_801B3B70:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B3B70
  if (!crb(c,2)) { IRQCHK(c); goto L_801B3B58; } // 801B3B74
L_801B3B78:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B3B78
  if (crb(c,2)) { goto L_801B3BAC; } // 801B3B7C
  cmpu(c,0,c->r[6],c->r[7]); // 801B3B80
  if (!crb(c,1)) { goto L_801B3BAC; } // 801B3B84
  W32(c->r[6]+0x00000008u,c->r[7]); // 801B3B88
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801B3B8C
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801B3B90
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 801B3B94
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801B3B98
  cmps(c,0,(int32_t)c->r[4],0); // 801B3B9C
  if (crb(c,2)) { goto L_801B3BCC; } // 801B3BA0
  W32(c->r[4]+0x00000008u,c->r[6]); // 801B3BA4
  goto L_801B3BCC; // 801B3BA8
L_801B3BAC:;
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 801B3BAC
  c->r[0]=0u+0x00000000u; // 801B3BB0
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 801B3BB4
  W32(c->r[6]+0x00000008u,c->r[0]); // 801B3BB8
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801B3BBC
  cmps(c,0,(int32_t)c->r[4],0); // 801B3BC0
  if (crb(c,2)) { goto L_801B3BCC; } // 801B3BC4
  W32(c->r[4]+0x00000008u,c->r[6]); // 801B3BC8
L_801B3BCC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801B3BCC
  if (crb(c,2)) { goto L_801B3C14; } // 801B3BD0
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B3BD4
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801B3BD8
  c->r[4]=c->r[6]+c->r[0]; // 801B3BDC
  c->r[0]=c->r[4]+0x00000010u; // 801B3BE0
  cmpu(c,0,c->r[5],c->r[0]); // 801B3BE4
  if (!crb(c,2)) { goto L_801B3C14; } // 801B3BE8
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 801B3BEC
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 801B3BF0
  cmps(c,0,(int32_t)c->r[4],0); // 801B3BF4
  if (crb(c,2)) { goto L_801B3C00; } // 801B3BF8
  W32(c->r[4]+0x00000008u,c->r[6]); // 801B3BFC
L_801B3C00:;
  c->r[4]=R32(c->r[6]+0x00000004u); // 801B3C00
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B3C04
  c->r[4]=c->r[0]+c->r[4]; // 801B3C08
  c->r[0]=c->r[4]+0x00000010u; // 801B3C0C
  W32(c->r[6]+0x00000004u,c->r[0]); // 801B3C10
L_801B3C14:;
  c->r[5]=R32(c->r[6]+0x00000008u); // 801B3C14
  cmps(c,0,(int32_t)c->r[5],0); // 801B3C18
  if (crb(c,2)) { goto L_801B3C60; } // 801B3C1C
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B3C20
  c->r[6]=R32(c->r[5]+0x0000000Cu); // 801B3C24
  c->r[4]=c->r[5]+c->r[0]; // 801B3C28
  c->r[0]=c->r[4]+0x00000010u; // 801B3C2C
  cmpu(c,0,c->r[6],c->r[0]); // 801B3C30
  if (!crb(c,2)) { goto L_801B3C60; } // 801B3C34
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801B3C38
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801B3C3C
  cmps(c,0,(int32_t)c->r[4],0); // 801B3C40
  if (crb(c,2)) { goto L_801B3C4C; } // 801B3C44
  W32(c->r[4]+0x00000008u,c->r[5]); // 801B3C48
L_801B3C4C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801B3C4C
  c->r[0]=R32(c->r[6]+0x00000004u); // 801B3C50
  c->r[4]=c->r[0]+c->r[4]; // 801B3C54
  c->r[0]=c->r[4]+0x00000010u; // 801B3C58
  W32(c->r[5]+0x00000004u,c->r[0]); // 801B3C5C
L_801B3C60:;
  c->r[31]=0u+0x00000000u; // 801B3C60
L_801B3C64:;
  c->lr=0x801B3C68u; f_801251F0(c); // 801B3C64
  c->r[3]=c->r[31]|c->r[31]; // 801B3C68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B3C6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B3C70
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B3C74
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3C78
  c->lr=c->r[0]; // 801B3C7C
  c->r[1]=c->r[1]+0x00000020u; // 801B3C80
  return; // 801B3C84
}

// IPCiProfInit
void f_801B3C90(Ctx* __restrict c) {
  trace_call(0x801B3C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3C90
  c->r[0]=c->lr; // 801B3C94
  c->r[3]=0u+0x00000000u; // 801B3C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3C9C
  c->r[0]=0u+0x00000006u; // 801B3CA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3CA4
  c->r[31]=0u+0x805B0000u; // 801B3CA8
  c->r[31]=c->r[31]+0xFFFF8780u; // 801B3CAC
  W32(c->r[13]+0xFFFFC3F0u,c->r[3]); // 801B3CB0
  c->r[4]=c->r[31]+0x00000C00u; // 801B3CB4
  c->r[5]=c->r[31]+0x00000D80u; // 801B3CB8
  W32(c->r[13]+0xFFFFC3F4u,c->r[3]); // 801B3CBC
  c->ctr=c->r[0]; // 801B3CC0
L_801B3CC4:;
  W32(c->r[5]+0x00000004u,c->r[3]); // 801B3CC4
  W32(c->r[5]+0x00000000u,c->r[3]); // 801B3CC8
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801B3CCC
  W32(c->r[5]+0x00000008u,c->r[3]); // 801B3CD0
  W32(c->r[5]+0x00000014u,c->r[3]); // 801B3CD4
  W32(c->r[5]+0x00000010u,c->r[3]); // 801B3CD8
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 801B3CDC
  W32(c->r[5]+0x00000018u,c->r[3]); // 801B3CE0
  W32(c->r[5]+0x00000024u,c->r[3]); // 801B3CE4
  W32(c->r[5]+0x00000020u,c->r[3]); // 801B3CE8
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801B3CEC
  W32(c->r[5]+0x00000028u,c->r[3]); // 801B3CF0
  W32(c->r[5]+0x00000034u,c->r[3]); // 801B3CF4
  W32(c->r[5]+0x00000030u,c->r[3]); // 801B3CF8
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801B3CFC
  W32(c->r[5]+0x00000038u,c->r[3]); // 801B3D00
  W32(c->r[4]+0x00000000u,c->r[3]); // 801B3D04
  W32(c->r[5]+0x00000044u,c->r[3]); // 801B3D08
  W32(c->r[4]+0x00000004u,c->r[3]); // 801B3D0C
  W32(c->r[5]+0x00000040u,c->r[3]); // 801B3D10
  W32(c->r[4]+0x00000008u,c->r[3]); // 801B3D14
  W32(c->r[5]+0x0000004Cu,c->r[3]); // 801B3D18
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801B3D1C
  W32(c->r[5]+0x00000048u,c->r[3]); // 801B3D20
  W32(c->r[4]+0x00000010u,c->r[3]); // 801B3D24
  W32(c->r[5]+0x00000054u,c->r[3]); // 801B3D28
  W32(c->r[4]+0x00000014u,c->r[3]); // 801B3D2C
  W32(c->r[5]+0x00000050u,c->r[3]); // 801B3D30
  W32(c->r[4]+0x00000018u,c->r[3]); // 801B3D34
  W32(c->r[5]+0x0000005Cu,c->r[3]); // 801B3D38
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801B3D3C
  W32(c->r[5]+0x00000058u,c->r[3]); // 801B3D40
  W32(c->r[4]+0x00000020u,c->r[3]); // 801B3D44
  W32(c->r[5]+0x00000064u,c->r[3]); // 801B3D48
  W32(c->r[4]+0x00000024u,c->r[3]); // 801B3D4C
  W32(c->r[5]+0x00000060u,c->r[3]); // 801B3D50
  W32(c->r[4]+0x00000028u,c->r[3]); // 801B3D54
  W32(c->r[5]+0x0000006Cu,c->r[3]); // 801B3D58
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801B3D5C
  W32(c->r[5]+0x00000068u,c->r[3]); // 801B3D60
  W32(c->r[4]+0x00000030u,c->r[3]); // 801B3D64
  W32(c->r[5]+0x00000074u,c->r[3]); // 801B3D68
  W32(c->r[4]+0x00000034u,c->r[3]); // 801B3D6C
  W32(c->r[5]+0x00000070u,c->r[3]); // 801B3D70
  W32(c->r[4]+0x00000038u,c->r[3]); // 801B3D74
  W32(c->r[5]+0x0000007Cu,c->r[3]); // 801B3D78
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801B3D7C
  c->r[4]=c->r[4]+0x00000040u; // 801B3D80
  W32(c->r[5]+0x00000078u,c->r[3]); // 801B3D84
  c->r[5]=c->r[5]+0x00000080u; // 801B3D88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3CC4; } // 801B3D8C
  c->r[3]=c->r[31]+0x00001080u; // 801B3D90
  c->r[4]=0u+0x00000000u; // 801B3D94
  c->r[5]=0u+0x00001800u; // 801B3D98
  c->lr=0x801B3DA0u; f_80004714(c); // 801B3D9C
  c->r[3]=c->r[31]+0x00002880u; // 801B3DA0
  c->r[4]=0u+0x00000000u; // 801B3DA4
  c->r[5]=0u+0x00001200u; // 801B3DA8
  c->lr=0x801B3DB0u; f_80004714(c); // 801B3DAC
  c->r[3]=c->r[31]+0x00000000u; // 801B3DB0
  c->r[4]=0u+0x00000000u; // 801B3DB4
  c->r[5]=0u+0x00000C00u; // 801B3DB8
  c->lr=0x801B3DC0u; f_80004714(c); // 801B3DBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3DC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3DC4
  c->lr=c->r[0]; // 801B3DC8
  c->r[1]=c->r[1]+0x00000010u; // 801B3DCC
  return; // 801B3DD0
}

// IPCiProfQueueReq
void f_801B3DE0(Ctx* __restrict c) {
  trace_call(0x801B3DE0u);
  c->r[5]=R32(c->r[13]+0xFFFFC3F0u); // 801B3DE0
  c->r[4]=R32(c->r[13]+0xFFFFC3F4u); // 801B3DE4
  c->r[0]=c->r[5]+0x00000001u; // 801B3DE8
  W32(c->r[13]+0xFFFFC3F0u,c->r[0]); // 801B3DEC
  c->r[0]=c->r[4]+0x00000001u; // 801B3DF0
  W32(c->r[13]+0xFFFFC3F4u,c->r[0]); // 801B3DF4
  f_801B3E20(c); return; // 801B3DF8
}

// fn_801B3E00
void f_801B3E00(Ctx* __restrict c) {
  trace_call(0x801B3E00u);
  c->r[3]=R32(c->r[13]+0xFFFFC3F4u); // 801B3E00
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B3E04
  W32(c->r[13]+0xFFFFC3F4u,c->r[0]); // 801B3E08
  return; // 801B3E0C
}

// fn_801B3E10
void f_801B3E10(Ctx* __restrict c) {
  trace_call(0x801B3E10u);
  c->r[4]=R32(c->r[13]+0xFFFFC3F0u); // 801B3E10
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B3E14
  W32(c->r[13]+0xFFFFC3F0u,c->r[0]); // 801B3E18
  f_801B3F40(c); return; // 801B3E1C
}

// AddReqInfo
void f_801B3E20(Ctx* __restrict c) {
  trace_call(0x801B3E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3E20
  c->r[0]=c->lr; // 801B3E24
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3E28
  c->r[11]=c->r[1]+0x00000030u; // 801B3E2C
  c->lr=0x801B3E34u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3E30
  c->r[30]=0u+0x805B0000u; // 801B3E34
  c->r[0]=0u+0x00000060u; // 801B3E38
  c->r[30]=c->r[30]+0xFFFF8780u; // 801B3E3C
  c->r[25]=c->r[3]|c->r[3]; // 801B3E40
  c->r[3]=c->r[30]+0x00000C00u; // 801B3E44
  c->r[27]=0u+0x00000000u; // 801B3E48
  c->ctr=c->r[0]; // 801B3E4C
L_801B3E50:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B3E50
  cmps(c,0,(int32_t)c->r[0],0); // 801B3E54
  if (!crb(c,2)) { goto L_801B3F1C; } // 801B3E58
  c->lr=0x801B3E60u; f_801251B0(c); // 801B3E5C
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801B3E60
  c->r[4]=c->r[30]+0x00000C00u; // 801B3E64
  W32(c->r[4]+c->r[0],c->r[25]); // 801B3E68
  c->r[26]=c->r[3]|c->r[3]; // 801B3E6C
  c->r[28]=rotl(c->r[27],5)&0xFFFFFFE0u; // 801B3E70
  c->r[31]=c->r[30]+0x00000000u; // 801B3E74
  c->r[0]=R32(c->r[25]+0x00000004u); // 801B3E78
  c->r[29]=c->r[31]+c->r[28]; // 801B3E7C
  c->r[3]=R32(c->r[25]+0x00000000u); // 801B3E80
  W32(c->r[31]+c->r[28],c->r[3]); // 801B3E84
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B3E88
  c->r[0]=R32(c->r[25]+0x0000000Cu); // 801B3E8C
  c->r[3]=R32(c->r[25]+0x00000008u); // 801B3E90
  W32(c->r[29]+0x00000008u,c->r[3]); // 801B3E94
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801B3E98
  c->r[0]=R32(c->r[25]+0x00000014u); // 801B3E9C
  c->r[3]=R32(c->r[25]+0x00000010u); // 801B3EA0
  W32(c->r[29]+0x00000010u,c->r[3]); // 801B3EA4
  W32(c->r[29]+0x00000014u,c->r[0]); // 801B3EA8
  c->r[0]=R32(c->r[25]+0x0000001Cu); // 801B3EAC
  c->r[3]=R32(c->r[25]+0x00000018u); // 801B3EB0
  W32(c->r[29]+0x00000018u,c->r[3]); // 801B3EB4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801B3EB8
  c->lr=0x801B3EC0u; f_8012AB70(c); // 801B3EBC
  c->r[5]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801B3EC0
  c->r[0]=c->r[30]+0x00000D80u; // 801B3EC4
  c->r[5]=c->r[0]+c->r[5]; // 801B3EC8
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B3ECC
  W32(c->r[5]+0x00000004u,c->r[4]); // 801B3ED0
  cmpu(c,0,c->r[0],0x00000001u); // 801B3ED4
  W32(c->r[5]+0x00000000u,c->r[3]); // 801B3ED8
  if (!crb(c,2)) { goto L_801B3F10; } // 801B3EDC
  c->r[29]=(uint32_t)((int32_t)c->r[27]*(int32_t)48); // 801B3EE0
  c->r[27]=c->r[31]+c->r[28]; // 801B3EE4
  c->r[25]=c->r[30]+0x00002880u; // 801B3EE8
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801B3EEC
  c->r[5]=0u+0x0000002Fu; // 801B3EF0
  c->r[28]=c->r[25]+c->r[29]; // 801B3EF4
  c->r[3]=c->r[28]|c->r[28]; // 801B3EF8
  c->r[4]=c->r[4]+0x80000000u; // 801B3EFC
  c->lr=0x801B3F04u; f_802EE8C8(c); // 801B3F00
  c->r[0]=0u+0x00000000u; // 801B3F04
  W8(c->r[28]+0x0000002Fu,c->r[0]); // 801B3F08
  W32(c->r[27]+0x0000000Cu,c->r[28]); // 801B3F0C
L_801B3F10:;
  c->r[3]=c->r[26]|c->r[26]; // 801B3F10
  c->lr=0x801B3F18u; f_801251F0(c); // 801B3F14
  goto L_801B3F28; // 801B3F18
L_801B3F1C:;
  c->r[3]=c->r[3]+0x00000004u; // 801B3F1C
  c->r[27]=c->r[27]+0x00000001u; // 801B3F20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3E50; } // 801B3F24
L_801B3F28:;
  c->r[11]=c->r[1]+0x00000030u; // 801B3F28
  c->lr=0x801B3F30u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3F2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B3F30
  c->lr=c->r[0]; // 801B3F34
  c->r[1]=c->r[1]+0x00000030u; // 801B3F38
  return; // 801B3F3C
}

// fn_801B3F40
void f_801B3F40(Ctx* __restrict c) {
  trace_call(0x801B3F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3F40
  c->r[0]=c->lr; // 801B3F44
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B3F48
  c->r[11]=c->r[1]+0x00000030u; // 801B3F4C
  c->lr=0x801B3F54u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3F50
  c->r[31]=0u+0x805B0000u; // 801B3F54
  c->r[0]=0u+0x00000060u; // 801B3F58
  c->r[31]=c->r[31]+0xFFFF8780u; // 801B3F5C
  c->r[25]=c->r[3]|c->r[3]; // 801B3F60
  c->r[5]=c->r[31]+0x00000C00u; // 801B3F64
  c->r[28]=0u+0x00000000u; // 801B3F68
  c->r[6]=c->r[31]+0x00000000u; // 801B3F6C
  c->ctr=c->r[0]; // 801B3F70
  c->r[0]=c->r[0]|0x00000000u; // 801B3F74
L_801B3F78:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B3F78
  cmpu(c,0,c->r[3],c->r[0]); // 801B3F7C
  if (!crb(c,2)) { goto L_801B4074; } // 801B3F80
  c->r[4]=R32(c->r[3]+0x00000008u); // 801B3F84
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B3F88
  cmpu(c,0,c->r[4],c->r[0]); // 801B3F8C
  if (!crb(c,2)) { goto L_801B4074; } // 801B3F90
  c->lr=0x801B3F98u; f_801251B0(c); // 801B3F94
  c->r[30]=rotl(c->r[28],5)&0xFFFFFFE0u; // 801B3F98
  c->r[0]=c->r[31]+0x00000000u; // 801B3F9C
  c->r[29]=c->r[0]+c->r[30]; // 801B3FA0
  c->r[0]=R32(c->r[30]+c->r[0]); // 801B3FA4
  c->r[27]=c->r[3]|c->r[3]; // 801B3FA8
  cmpu(c,0,c->r[0],0x00000001u); // 801B3FAC
  if (!crb(c,2)) { goto L_801B4004; } // 801B3FB0
  c->r[0]=R32(c->r[25]+0x00000004u); // 801B3FB4
  cmps(c,0,(int32_t)c->r[0],0); // 801B3FB8
  if (crb(c,0)) { goto L_801B4004; } // 801B3FBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 801B3FC0
  c->r[26]=c->r[31]+0x00001080u; // 801B3FC4
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801B3FC8
  c->r[5]=0u+0x0000002Fu; // 801B3FCC
  c->r[3]=c->r[26]+c->r[0]; // 801B3FD0
  c->lr=0x801B3FD8u; f_802EE8C8(c); // 801B3FD4
  c->r[4]=R32(c->r[25]+0x00000004u); // 801B3FD8
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 801B3FDC
  c->r[0]=c->r[31]+0x00002880u; // 801B3FE0
  c->r[7]=0u+0x00000000u; // 801B3FE4
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 801B3FE8
  c->r[4]=0u+0x00000000u; // 801B3FEC
  c->r[3]=c->r[0]+c->r[3]; // 801B3FF0
  c->r[5]=0u+0x00000030u; // 801B3FF4
  c->r[6]=c->r[26]+c->r[6]; // 801B3FF8
  W8(c->r[6]+0x0000002Fu,c->r[7]); // 801B3FFC
  c->lr=0x801B4004u; f_80004714(c); // 801B4000
L_801B4004:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B4004
  cmpu(c,0,c->r[0],0x00000002u); // 801B4008
  if (!crb(c,2)) { goto L_801B4034; } // 801B400C
  c->r[3]=c->r[31]+0x00000000u; // 801B4010
  c->r[0]=c->r[31]+0x00001080u; // 801B4014
  c->r[3]=c->r[3]+c->r[30]; // 801B4018
  c->r[4]=0u+0x00000000u; // 801B401C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B4020
  c->r[5]=0u+0x00000030u; // 801B4024
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 801B4028
  c->r[3]=c->r[0]+c->r[3]; // 801B402C
  c->lr=0x801B4034u; f_80004714(c); // 801B4030
L_801B4034:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801B4034
  c->r[3]=c->r[31]+0x00000C00u; // 801B4038
  c->r[30]=0u+0x00000000u; // 801B403C
  W32(c->r[3]+c->r[0],c->r[30]); // 801B4040
  c->r[3]=c->r[29]|c->r[29]; // 801B4044
  c->r[4]=0u+0x00000000u; // 801B4048
  c->r[5]=0u+0x00000020u; // 801B404C
  c->lr=0x801B4054u; f_80004714(c); // 801B4050
  c->r[3]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801B4054
  c->r[0]=c->r[31]+0x00000D80u; // 801B4058
  c->r[4]=c->r[0]+c->r[3]; // 801B405C
  W32(c->r[4]+0x00000004u,c->r[30]); // 801B4060
  c->r[3]=c->r[27]|c->r[27]; // 801B4064
  W32(c->r[4]+0x00000000u,c->r[30]); // 801B4068
  c->lr=0x801B4070u; f_801251F0(c); // 801B406C
  goto L_801B4084; // 801B4070
L_801B4074:;
  c->r[5]=c->r[5]+0x00000004u; // 801B4074
  c->r[6]=c->r[6]+0x00000020u; // 801B4078
  c->r[28]=c->r[28]+0x00000001u; // 801B407C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3F78; } // 801B4080
L_801B4084:;
  c->r[11]=c->r[1]+0x00000030u; // 801B4084
  c->lr=0x801B408Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4088
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B408C
  c->lr=c->r[0]; // 801B4090
  c->r[1]=c->r[1]+0x00000030u; // 801B4094
  return; // 801B4098
}

// fn_801B40A0
void f_801B40A0(Ctx* __restrict c) {
  trace_call(0x801B40A0u);
  c->r[7]=0u+0x00000000u; // 801B40A0
  c->r[5]=c->r[3]+0x00000020u; // 801B40A4
  c->r[6]=0u+0xFFFFFFFFu; // 801B40A8
  c->r[0]=0u+0x00000008u; // 801B40AC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801B40B0
  W32(c->r[3]+0x00000004u,c->r[7]); // 801B40B4
  W8(c->r[3]+0x0000001Cu,c->r[7]); // 801B40B8
  W16(c->r[3]+0x00000018u,c->r[6]); // 801B40BC
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801B40C0
  W32(c->r[3]+0x00000014u,c->r[7]); // 801B40C4
  W8(c->r[3]+0x0000001Bu,c->r[7]); // 801B40C8
  W32(c->r[3]+0x00000010u,c->r[7]); // 801B40CC
  W8(c->r[3]+0x0000001Au,c->r[7]); // 801B40D0
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801B40D4
  W32(c->r[3]+0x00000008u,c->r[7]); // 801B40D8
  return; // 801B40DC
}

// fn_801B40E0
void f_801B40E0(Ctx* __restrict c) {
  trace_call(0x801B40E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B40E0
  c->r[0]=c->lr; // 801B40E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B40E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B40EC
  c->r[31]=c->r[4]|c->r[4]; // 801B40F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B40F4
  c->r[30]=c->r[5]|c->r[5]; // 801B40F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B40FC
  c->r[29]=c->r[3]|c->r[3]; // 801B4100
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B4104
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801B4108
  cmps(c,0,(int32_t)c->r[0],0); // 801B410C
  if (crb(c,2)) { goto L_801B424C; } // 801B4110
  cmpu(c,0,c->r[0],0x00000008u); // 801B4114
  if (!crb(c,2)) { goto L_801B4154; } // 801B4118
  c->r[6]=R8(c->r[4]+0x00000000u); // 801B411C
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 801B4120
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 801B4124
  cmps(c,0,(int32_t)c->r[0],32); // 801B4128
  W8(c->r[3]+0x0000001Cu,c->r[6]); // 801B412C
  if (crb(c,2)) { goto L_801B413C; } // 801B4130
  c->r[3]=0u+0xFFFFFFFFu; // 801B4134
  goto L_801B4488; // 801B4138
L_801B413C:;
  cmpu(c,0,c->r[6],0x00000004u); // 801B413C
  if (crb(c,2)) { goto L_801B4154; } // 801B4140
  cmpu(c,0,c->r[6],0x00000008u); // 801B4144
  if (crb(c,2)) { goto L_801B4154; } // 801B4148
  c->r[3]=0u+0xFFFFFFFFu; // 801B414C
  goto L_801B4488; // 801B4150
L_801B4154:;
  c->r[10]=R32(c->r[3]+0x00000008u); // 801B4154
  c->r[6]=0u+0x00000000u; // 801B4158
  c->r[7]=0u+0x00000000u; // 801B415C
  goto L_801B4200; // 801B4160
  c->r[0]=c->r[0]|0x00000000u; // 801B4164
L_801B4168:;
  c->r[8]=R8(c->r[3]+0x0000001Du); // 801B4168
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 801B416C
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801B4170
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B4174
  cmpu(c,0,c->r[0],0x00000003u); // 801B4178
  if (crb(c,1)) { goto L_801B41A0; } // 801B417C
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 801B4180
  c->r[8]=R8(c->r[31]+0x00000000u); // 801B4184
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B4188
  c->r[9]=R32(c->r[3]+0x00000004u); // 801B418C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801B4190
  c->r[0]=c->r[9]|c->r[0]; // 801B4194
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B4198
  goto L_801B41C4; // 801B419C
L_801B41A0:;
  cmpu(c,0,c->r[0],0x00000006u); // 801B41A0
  if (crb(c,1)) { goto L_801B41C4; } // 801B41A4
  c->r[0]=addc(c,~c->r[0],0x00000006u,1); // 801B41A8
  c->r[8]=R8(c->r[31]+0x00000000u); // 801B41AC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B41B0
  c->r[9]=R32(c->r[3]+0x00000004u); // 801B41B4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801B41B8
  c->r[0]=c->r[9]|c->r[0]; // 801B41BC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B41C0
L_801B41C4:;
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801B41C4
  c->r[31]=c->r[31]+0x00000001u; // 801B41C8
  c->r[6]=c->r[6]+0x00000001u; // 801B41CC
  cmpu(c,0,c->r[0],0x00000004u); // 801B41D0
  if (!crb(c,2)) { goto L_801B41E8; } // 801B41D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B41D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B41DC
  if (!crb(c,1)) { goto L_801B41E8; } // 801B41E0
  W8(c->r[3]+0x0000001Du,c->r[7]); // 801B41E4
L_801B41E8:;
  c->r[30]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 801B41E8
  if (!crb(c,2)) { goto L_801B4200; } // 801B41EC
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801B41F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B41F4
  if (crb(c,2)) { goto L_801B4200; } // 801B41F8
  goto L_801B4224; // 801B41FC
L_801B4200:;
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801B4200
  cmps(c,0,(int32_t)c->r[0],0); // 801B4204
  if (!crb(c,2)) { IRQCHK(c); goto L_801B4168; } // 801B4208
  cmps(c,0,(int32_t)c->r[10],0); // 801B420C
  if (!crb(c,1)) { goto L_801B4224; } // 801B4210
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B4214
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 801B4218
  if (!crb(c,0)) { goto L_801B4224; } // 801B421C
  W32(c->r[3]+0x00000004u,c->r[10]); // 801B4220
L_801B4224:;
  c->r[30]=c->r[5]-c->r[6]; cr0(c,c->r[30]); // 801B4224
  c->r[31]=c->r[4]+c->r[6]; // 801B4228
  if (!crb(c,2)) { goto L_801B424C; } // 801B422C
  c->r[0]=R8(c->r[3]+0x0000001Du); // 801B4230
  cmps(c,0,(int32_t)c->r[0],0); // 801B4234
  if (!crb(c,2)) { goto L_801B4244; } // 801B4238
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B423C
  goto L_801B4488; // 801B4240
L_801B4244:;
  c->r[3]=0u+0xFFFFFFFFu; // 801B4244
  goto L_801B4488; // 801B4248
L_801B424C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000018u); // 801B424C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4250
  if (!crb(c,0)) { goto L_801B4284; } // 801B4254
  c->r[6]=R8(c->r[31]+0x00000000u); // 801B4258
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801B425C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801B4260
  c->r[31]=c->r[31]+0x00000001u; // 801B4264
  c->r[0]=c->r[6]+0x00000001u; // 801B4268
  c->r[5]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801B426C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B4270
  W16(c->r[3]+0x00000018u,c->r[5]); // 801B4274
  c->r[0]=c->r[4]+0x00000001u; // 801B4278
  W8(c->r[4]+0x00000000u,c->r[6]); // 801B427C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B4280
L_801B4284:;
  c->r[28]=c->r[3]+0x00000021u; // 801B4284
  goto L_801B42EC; // 801B4288
L_801B428C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B428C
  if (!crb(c,2)) { goto L_801B429C; } // 801B4290
  c->r[3]=R32(c->r[29]+0x00000004u); // 801B4294
  goto L_801B4488; // 801B4298
L_801B429C:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801B429C
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801B42A0
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B42A4
  c->r[31]=c->r[31]+0x00000001u; // 801B42A8
  W8(c->r[3]+0x00000000u,c->r[0]); // 801B42AC
  c->r[0]=c->r[3]+0x00000001u; // 801B42B0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000018u); // 801B42B4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801B42B8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B42BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; cr0(c,c->r[0]); // 801B42C0
  W16(c->r[29]+0x00000018u,c->r[3]); // 801B42C4
  if (!crb(c,2)) { goto L_801B42EC; } // 801B42C8
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 801B42CC
  c->r[3]=c->r[29]+0x00000020u; // 801B42D0
  c->r[4]=R8(c->r[29]+0x0000001Cu); // 801B42D4
  c->lr=0x801B42DCu; f_801B44F0(c); // 801B42D8
  cmps(c,0,(int32_t)c->r[3],0); // 801B42DC
  if (!crb(c,2)) { goto L_801B42EC; } // 801B42E0
  c->r[3]=0u+0xFFFFFFFBu; // 801B42E4
  goto L_801B4488; // 801B42E8
L_801B42EC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000018u); // 801B42EC
  cmps(c,0,(int32_t)c->r[0],0); // 801B42F0
  if (crb(c,1)) { IRQCHK(c); goto L_801B428C; } // 801B42F4
  c->r[6]=0u+0x00000020u; // 801B42F8
  c->r[3]=0u+0x00000000u; // 801B42FC
  goto L_801B445C; // 801B4300
  c->r[0]=c->r[0]|0x00000000u; // 801B4304
  goto L_801B4348; // 801B4308
  c->r[0]=c->r[0]|0x00000000u; // 801B430C
L_801B4310:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B4310
  if (!crb(c,2)) { goto L_801B4320; } // 801B4314
  c->r[3]=R32(c->r[29]+0x00000004u); // 801B4318
  goto L_801B4488; // 801B431C
L_801B4320:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B4320
  c->r[31]=c->r[31]+0x00000001u; // 801B4324
  c->r[4]=R8(c->r[29]+0x0000001Au); // 801B4328
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801B432C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801B4330
  c->r[7]=R32(c->r[29]+0x00000010u); // 801B4334
  c->r[0]=c->r[4]+0x00000008u; // 801B4338
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801B433C
  c->r[0]=c->r[7]|c->r[5]; // 801B4340
  W32(c->r[29]+0x00000010u,c->r[0]); // 801B4344
L_801B4348:;
  c->r[5]=R8(c->r[29]+0x0000001Au); // 801B4348
  cmpu(c,0,c->r[5],0x00000020u); // 801B434C
  if (crb(c,0)) { IRQCHK(c); goto L_801B4310; } // 801B4350
  goto L_801B4450; // 801B4354
L_801B4358:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801B4358
  c->r[9]=R32(c->r[29]+0x00000010u); // 801B435C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801B4360
  c->r[8]=rotl(c->r[4],0)&0xFFFFFFFEu; // 801B4364
  c->r[5]=R8(c->r[4]+0x00000000u); // 801B4368
  c->r[10]=rotl(c->r[9],1)&0x00000001u; // 801B436C
  c->r[7]=rotl(c->r[0],0)&0x0000003Fu; // 801B4370
  c->r[4]=R8(c->r[29]+0x0000001Au); // 801B4374
  c->r[0]=((c->r[10])&0x20)?0u:(c->r[5]<<((c->r[10])&31)); // 801B4378
  c->r[5]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801B437C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B4380
  c->r[7]=c->r[7]+0x00000001u; // 801B4384
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B4388
  c->r[4]=c->r[10]+c->r[8]; // 801B438C
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801B4390
  W32(c->r[29]+0x00000010u,c->r[5]); // 801B4394
  c->r[9]=c->r[7]+c->r[4]; // 801B4398
  W32(c->r[29]+0x0000000Cu,c->r[9]); // 801B439C
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801B43A0
  if (crb(c,2)) { goto L_801B4450; } // 801B43A4
  c->r[4]=R8(c->r[29]+0x0000001Cu); // 801B43A8
  c->r[7]=c->r[29]+0x00000021u; // 801B43AC
  c->r[5]=R32(c->r[29]+0x00000014u); // 801B43B0
  c->r[0]=R8(c->r[29]+0x0000001Bu); // 801B43B4
  c->r[8]=addc(c,~c->r[4],0x00000020u,1); // 801B43B8
  c->r[10]=((c->r[4])&0x20)?0u:(c->r[5]>>((c->r[4])&31)); // 801B43BC
  W32(c->r[29]+0x00000014u,c->r[10]); // 801B43C0
  c->r[5]=c->r[0]+c->r[4]; // 801B43C4
  c->r[4]=R32(c->r[29]+0x00000004u); // 801B43C8
  c->r[9]=R8(c->r[9]+0x00000000u); // 801B43CC
  c->r[0]=rotl(c->r[5],29)&0x0000001Fu; // 801B43D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801B43D4
  c->r[11]=rotl(c->r[5],0)&0x000000FFu; // 801B43D8
  c->r[0]=((c->r[8])&0x20)?0u:(c->r[9]<<((c->r[8])&31)); // 801B43DC
  W32(c->r[29]+0x0000000Cu,c->r[7]); // 801B43E0
  c->r[4]=c->r[10]|c->r[0]; // 801B43E4
  W32(c->r[29]+0x00000014u,c->r[4]); // 801B43E8
  W8(c->r[29]+0x0000001Bu,c->r[5]); // 801B43EC
  if (crb(c,1)) { goto L_801B4404; } // 801B43F0
  c->r[0]=addc(c,~c->r[11],0x00000020u,1); // 801B43F4
  W8(c->r[29]+0x0000001Bu,c->r[6]); // 801B43F8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]>>((c->r[0])&31)); // 801B43FC
  W32(c->r[29]+0x00000014u,c->r[0]); // 801B4400
L_801B4404:;
  c->r[0]=R8(c->r[29]+0x0000001Bu); // 801B4404
  cmpu(c,0,c->r[0],0x00000020u); // 801B4408
  if (!crb(c,2)) { goto L_801B4450; } // 801B440C
  c->r[7]=R32(c->r[29]+0x00000014u); // 801B4410
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B4414
  c->r[5]=rotl(c->r[7],8)&0x00FF0000u; // 801B4418
  c->r[0]=rotl(c->r[7],24)&0x0000FF00u; // 801B441C
  c->r[5]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 801B4420
  c->r[0]=(rotl(c->r[7],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B4424
  c->r[0]=c->r[5]|c->r[0]; // 801B4428
  W32(c->r[4]+0x00000000u,c->r[0]); // 801B442C
  c->r[4]=R32(c->r[29]+0x00000004u); // 801B4430
  c->r[5]=R32(c->r[29]+0x00000000u); // 801B4434
  c->r[0]=addc(c,c->r[4],0xFFFFFFFCu,0); cr0(c,c->r[0]); // 801B4438
  W8(c->r[29]+0x0000001Bu,c->r[3]); // 801B443C
  c->r[4]=c->r[5]+0x00000004u; // 801B4440
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B4444
  W32(c->r[29]+0x00000000u,c->r[4]); // 801B4448
  if (!crb(c,1)) { goto L_801B4468; } // 801B444C
L_801B4450:;
  c->r[0]=R8(c->r[29]+0x0000001Au); // 801B4450
  cmps(c,0,(int32_t)c->r[0],0); // 801B4454
  if (!crb(c,2)) { IRQCHK(c); goto L_801B4358; } // 801B4458
L_801B445C:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B445C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4460
  if (crb(c,1)) { IRQCHK(c); goto L_801B4348; } // 801B4464
L_801B4468:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801B4468
  cmps(c,0,(int32_t)c->r[0],0); // 801B446C
  if (!crb(c,2)) { goto L_801B4484; } // 801B4470
  cmpu(c,0,c->r[30],0x00000020u); // 801B4474
  if (!crb(c,1)) { goto L_801B4484; } // 801B4478
  c->r[3]=0u+0xFFFFFFFDu; // 801B447C
  goto L_801B4488; // 801B4480
L_801B4484:;
  c->r[3]=0u+0x00000000u; // 801B4484
L_801B4488:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4488
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B448C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4490
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4494
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B4498
  c->lr=c->r[0]; // 801B449C
  c->r[1]=c->r[1]+0x00000020u; // 801B44A0
  return; // 801B44A4
}

// fn_801B44B0
void f_801B44B0(Ctx* __restrict c) {
  trace_call(0x801B44B0u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B44B0
  c->r[4]=rotl(c->r[5],8)&0x00FF0000u; // 801B44B4
  c->r[0]=rotl(c->r[5],24)&0x0000FF00u; // 801B44B8
  c->r[4]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 801B44BC
  c->r[0]=(rotl(c->r[5],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B44C0
  c->r[0]=c->r[4]|c->r[0]; // 801B44C4
  c->r[0]=rotl(c->r[0],24)&0x00FFFFFFu; cr0(c,c->r[0]); // 801B44C8
  if (!crb(c,2)) { goto L_801B44E8; } // 801B44CC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B44D0
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801B44D4
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801B44D8
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801B44DC
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801B44E0
  c->r[0]=c->r[3]|c->r[0]; // 801B44E4
L_801B44E8:;
  c->r[3]=c->r[0]|c->r[0]; // 801B44E8
  return; // 801B44EC
}

// fn_801B44F0
void f_801B44F0(Ctx* __restrict c) {
  trace_call(0x801B44F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B44F0
  c->r[0]=0u+0x00000002u; // 801B44F4
  c->r[5]=c->r[3]+0x00000001u; // 801B44F8
  c->r[9]=R8(c->r[3]+0x00000000u); // 801B44FC
  c->r[8]=c->r[1]+0x00000008u; // 801B4500
  c->r[6]=c->r[9]+0x00000001u; // 801B4504
  c->r[7]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801B4508
  c->r[6]=0u+0x00000000u; // 801B450C
  c->r[3]=c->r[3]+c->r[7]; // 801B4510
  c->ctr=c->r[0]; // 801B4514
L_801B4518:;
  W8(c->r[8]+0x00000000u,c->r[6]); // 801B4518
  W8(c->r[8]+0x00000001u,c->r[6]); // 801B451C
  W8(c->r[8]+0x00000002u,c->r[6]); // 801B4520
  W8(c->r[8]+0x00000003u,c->r[6]); // 801B4524
  W8(c->r[8]+0x00000004u,c->r[6]); // 801B4528
  W8(c->r[8]+0x00000005u,c->r[6]); // 801B452C
  W8(c->r[8]+0x00000006u,c->r[6]); // 801B4530
  W8(c->r[8]+0x00000007u,c->r[6]); // 801B4534
  W8(c->r[8]+0x00000008u,c->r[6]); // 801B4538
  W8(c->r[8]+0x00000009u,c->r[6]); // 801B453C
  W8(c->r[8]+0x0000000Au,c->r[6]); // 801B4540
  W8(c->r[8]+0x0000000Bu,c->r[6]); // 801B4544
  W8(c->r[8]+0x0000000Cu,c->r[6]); // 801B4548
  W8(c->r[8]+0x0000000Du,c->r[6]); // 801B454C
  W8(c->r[8]+0x0000000Eu,c->r[6]); // 801B4550
  W8(c->r[8]+0x0000000Fu,c->r[6]); // 801B4554
  W8(c->r[8]+0x00000010u,c->r[6]); // 801B4558
  W8(c->r[8]+0x00000011u,c->r[6]); // 801B455C
  W8(c->r[8]+0x00000012u,c->r[6]); // 801B4560
  W8(c->r[8]+0x00000013u,c->r[6]); // 801B4564
  W8(c->r[8]+0x00000014u,c->r[6]); // 801B4568
  W8(c->r[8]+0x00000015u,c->r[6]); // 801B456C
  W8(c->r[8]+0x00000016u,c->r[6]); // 801B4570
  W8(c->r[8]+0x00000017u,c->r[6]); // 801B4574
  W8(c->r[8]+0x00000018u,c->r[6]); // 801B4578
  W8(c->r[8]+0x00000019u,c->r[6]); // 801B457C
  W8(c->r[8]+0x0000001Au,c->r[6]); // 801B4580
  W8(c->r[8]+0x0000001Bu,c->r[6]); // 801B4584
  W8(c->r[8]+0x0000001Cu,c->r[6]); // 801B4588
  W8(c->r[8]+0x0000001Du,c->r[6]); // 801B458C
  W8(c->r[8]+0x0000001Eu,c->r[6]); // 801B4590
  W8(c->r[8]+0x0000001Fu,c->r[6]); // 801B4594
  c->r[8]=c->r[8]+0x00000020u; // 801B4598
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B4518; } // 801B459C
  cmpu(c,0,c->r[4],0x00000004u); // 801B45A0
  if (!crb(c,2)) { goto L_801B45B8; } // 801B45A4
  cmpu(c,0,c->r[9],0x00000010u); // 801B45A8
  if (crb(c,0)) { goto L_801B45B8; } // 801B45AC
  c->r[3]=0u+0x00000000u; // 801B45B0
  goto L_801B4698; // 801B45B4
L_801B45B8:;
  c->r[6]=c->r[3]-c->r[5]; // 801B45B8
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801B45BC
  c->r[10]=c->r[1]+0x00000008u; // 801B45C0
  c->r[4]=0u+0x00000001u; // 801B45C4
  c->r[9]=0u+0x00000001u; // 801B45C8
  c->ctr=c->r[6]; // 801B45CC
  cmpu(c,0,c->r[5],c->r[3]); // 801B45D0
  if (!crb(c,0)) { goto L_801B4694; } // 801B45D4
L_801B45D8:;
  c->r[7]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B45D8
  c->r[6]=rotl(c->r[4],0)&0x00000007u; // 801B45DC
  c->r[7]=R8(c->r[10]+c->r[7]); // 801B45E0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 801B45E4
  c->r[6]=c->r[7]&c->r[6]; cr0(c,c->r[6]); // 801B45E8
  if (!crb(c,2)) { goto L_801B4688; } // 801B45EC
  c->r[8]=R8(c->r[5]+0x00000000u); // 801B45F0
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFFEu; // 801B45F4
  c->r[7]=rotl(c->r[8],0)&0x0000003Fu; // 801B45F8
  cmps(c,0,(int32_t)c->r[8],0); // 801B45FC
  c->r[7]=c->r[7]+0x00000001u; // 801B4600
  c->r[11]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801B4604
  c->r[6]=c->r[6]+c->r[11]; // 801B4608
  if (!crb(c,2)) { goto L_801B4618; } // 801B460C
  cmpu(c,0,c->r[4],c->r[0]); // 801B4610
  if (!crb(c,0)) { goto L_801B4688; } // 801B4614
L_801B4618:;
  cmpu(c,0,c->r[6],c->r[3]); // 801B4618
  if (crb(c,0)) { goto L_801B4628; } // 801B461C
  c->r[3]=0u+0x00000000u; // 801B4620
  goto L_801B4698; // 801B4624
L_801B4628:;
  c->r[6]=rotl(c->r[8],0)&0x00000080u; cr0(c,c->r[6]); // 801B4628
  if (crb(c,2)) { goto L_801B4654; } // 801B462C
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFEu; // 801B4630
  c->r[6]=c->r[6]+c->r[11]; // 801B4634
  c->r[8]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801B4638
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 801B463C
  c->r[7]=R8(c->r[10]+c->r[8]); // 801B4640
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 801B4644
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801B4648
  c->r[6]=c->r[7]|c->r[6]; // 801B464C
  W8(c->r[10]+c->r[8],c->r[6]); // 801B4650
L_801B4654:;
  c->r[6]=R8(c->r[5]+0x00000000u); // 801B4654
  c->r[6]=rotl(c->r[6],0)&0x00000040u; cr0(c,c->r[6]); // 801B4658
  if (crb(c,2)) { goto L_801B4688; } // 801B465C
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFEu; // 801B4660
  c->r[6]=c->r[11]+c->r[6]; // 801B4664
  c->r[6]=c->r[6]+0x00000001u; // 801B4668
  c->r[8]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801B466C
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 801B4670
  c->r[7]=R8(c->r[10]+c->r[8]); // 801B4674
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[9]<<((c->r[6])&31)); // 801B4678
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801B467C
  c->r[6]=c->r[7]|c->r[6]; // 801B4680
  W8(c->r[10]+c->r[8],c->r[6]); // 801B4684
L_801B4688:;
  c->r[4]=c->r[4]+0x00000001u; // 801B4688
  c->r[5]=c->r[5]+0x00000001u; // 801B468C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B45D8; } // 801B4690
L_801B4694:;
  c->r[3]=0u+0x00000001u; // 801B4694
L_801B4698:;
  c->r[1]=c->r[1]+0x00000050u; // 801B4698
  return; // 801B469C
}

// ESP_InitLib
void f_801B46A0(Ctx* __restrict c) {
  trace_call(0x801B46A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B46A0
  c->r[0]=c->lr; // 801B46A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B46A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B46AC
  c->r[31]=0u+0x00000000u; // 801B46B0
  c->r[0]=R32(c->r[13]+0xFFFFAD00u); // 801B46B4
  cmps(c,0,(int32_t)c->r[0],0); // 801B46B8
  if (!crb(c,0)) { goto L_801B46DC; } // 801B46BC
  c->r[3]=c->r[13]+0xFFFFAD08u; // 801B46C0
  c->r[4]=0u+0x00000000u; // 801B46C4
  c->lr=0x801B46CCu; f_801B2710(c); // 801B46C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B46CC
  W32(c->r[13]+0xFFFFAD00u,c->r[3]); // 801B46D0
  if (!crb(c,0)) { goto L_801B46DC; } // 801B46D4
  c->r[31]=c->r[3]|c->r[3]; // 801B46D8
L_801B46DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801B46DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B46E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B46E4
  c->lr=c->r[0]; // 801B46E8
  c->r[1]=c->r[1]+0x00000010u; // 801B46EC
  return; // 801B46F0
}

// ESP_CloseLib
void f_801B4700(Ctx* __restrict c) {
  trace_call(0x801B4700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4700
  c->r[0]=c->lr; // 801B4704
  c->r[4]=0u+0x00000000u; // 801B4708
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B470C
  c->r[3]=R32(c->r[13]+0xFFFFAD00u); // 801B4710
  cmps(c,0,(int32_t)c->r[3],0); // 801B4714
  if (crb(c,0)) { goto L_801B4734; } // 801B4718
  c->lr=0x801B4720u; f_801B2900(c); // 801B471C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4720
  c->r[4]=c->r[3]|c->r[3]; // 801B4724
  if (!crb(c,2)) { goto L_801B4734; } // 801B4728
  c->r[0]=0u+0xFFFFFFFFu; // 801B472C
  W32(c->r[13]+0xFFFFAD00u,c->r[0]); // 801B4730
L_801B4734:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4734
  c->r[3]=c->r[4]|c->r[4]; // 801B4738
  c->lr=c->r[0]; // 801B473C
  c->r[1]=c->r[1]+0x00000010u; // 801B4740
  return; // 801B4744
}

// fn_801B4750
void f_801B4750(Ctx* __restrict c) {
  trace_call(0x801B4750u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B4750
  c->r[12]=c->r[1]|c->r[1]; // 801B4754
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801B4758
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B475C
  c->r[0]=c->lr; // 801B4760
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B4764
  c->r[7]=c->r[1]+0x000000F0u; // 801B4768
  c->r[9]=c->r[1]+0x00000020u; // 801B476C
  c->r[6]=R32(c->r[13]+0xFFFFAD00u); // 801B4770
  cmps(c,0,(int32_t)c->r[6],0); // 801B4774
  if (!crb(c,0)) { goto L_801B4784; } // 801B4778
  c->r[3]=0u+0xFFFFFC07u; // 801B477C
  goto L_801B47D0; // 801B4780
L_801B4784:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B4784
  if (crb(c,2)) { goto L_801B4794; } // 801B4788
  c->r[3]=0u+0xFFFFFC07u; // 801B478C
  goto L_801B47D0; // 801B4790
L_801B4794:;
  W32(c->r[1]+0x00000024u,c->r[4]); // 801B4794
  c->r[8]=0u+0x00000008u; // 801B4798
  c->r[0]=0u+0x000000D8u; // 801B479C
  c->r[4]=0u+0x00000008u; // 801B47A0
  W32(c->r[1]+0x00000020u,c->r[3]); // 801B47A4
  c->r[3]=c->r[6]|c->r[6]; // 801B47A8
  c->r[6]=0u+0x00000000u; // 801B47AC
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801B47B0
  c->r[5]=0u+0x00000002u; // 801B47B4
  W32(c->r[1]+0x000000F0u,c->r[9]); // 801B47B8
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801B47BC
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B47C0
  c->lr=0x801B47C8u; f_801B3430(c); // 801B47C4
  c->r[0]=0u+0xFFFFFFFFu; // 801B47C8
  W32(c->r[13]+0xFFFFAD00u,c->r[0]); // 801B47CC
L_801B47D0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B47D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B47D4
  c->lr=c->r[0]; // 801B47D8
  c->r[1]=c->r[10]|c->r[10]; // 801B47DC
  return; // 801B47E0
}

// fn_801B47F0
void f_801B47F0(Ctx* __restrict c) {
  trace_call(0x801B47F0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B47F0
  c->r[12]=c->r[1]|c->r[1]; // 801B47F4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801B47F8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B47FC
  c->r[0]=c->lr; // 801B4800
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B4804
  c->r[7]=c->r[1]+0x000000F0u; // 801B4808
  c->r[10]=c->r[1]+0x00000020u; // 801B480C
  c->r[11]=c->r[1]+0x00000040u; // 801B4810
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801B4814
  c->r[31]=c->r[6]|c->r[6]; // 801B4818
  c->r[9]=R32(c->r[13]+0xFFFFAD00u); // 801B481C
  cmps(c,0,(int32_t)c->r[9],0); // 801B4820
  if (crb(c,0)) { goto L_801B4834; } // 801B4824
  c->r[8]=0u+0x00000000u; // 801B4828
  cmpu(c,0,c->r[6],c->r[8]); // 801B482C
  if (!crb(c,2)) { goto L_801B483C; } // 801B4830
L_801B4834:;
  c->r[3]=0u+0xFFFFFC07u; // 801B4834
  goto L_801B48EC; // 801B4838
L_801B483C:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B483C
  if (crb(c,2)) { goto L_801B484C; } // 801B4840
  c->r[3]=0u+0xFFFFFC07u; // 801B4844
  goto L_801B48EC; // 801B4848
L_801B484C:;
  cmpu(c,0,c->r[5],c->r[8]); // 801B484C
  W32(c->r[1]+0x00000024u,c->r[4]); // 801B4850
  W32(c->r[1]+0x00000020u,c->r[3]); // 801B4854
  if (!crb(c,2)) { goto L_801B489C; } // 801B4858
  c->r[5]=0u+0x00000008u; // 801B485C
  c->r[0]=0u+0x00000004u; // 801B4860
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801B4864
  c->r[3]=c->r[9]|c->r[9]; // 801B4868
  c->r[4]=0u+0x00000012u; // 801B486C
  c->r[5]=0u+0x00000001u; // 801B4870
  W32(c->r[1]+0x000000F0u,c->r[10]); // 801B4874
  c->r[6]=0u+0x00000001u; // 801B4878
  W32(c->r[1]+0x000000F8u,c->r[11]); // 801B487C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B4880
  c->lr=0x801B4888u; f_801B3350(c); // 801B4884
  cmps(c,0,(int32_t)c->r[3],0); // 801B4888
  if (!crb(c,2)) { goto L_801B48EC; } // 801B488C
  c->r[0]=R32(c->r[1]+0x00000040u); // 801B4890
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B4894
  goto L_801B48EC; // 801B4898
L_801B489C:;
  c->r[3]=R32(c->r[6]+0x00000000u); // 801B489C
  cmps(c,0,(int32_t)c->r[3],0); // 801B48A0
  if (!crb(c,2)) { goto L_801B48B0; } // 801B48A4
  c->r[3]=0u+0xFFFFFC07u; // 801B48A8
  goto L_801B48EC; // 801B48AC
L_801B48B0:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)216); // 801B48B0
  W32(c->r[1]+0x00000100u,c->r[5]); // 801B48B4
  c->r[6]=0u+0x00000008u; // 801B48B8
  c->r[8]=0u+0x00000004u; // 801B48BC
  W32(c->r[1]+0x00000040u,c->r[3]); // 801B48C0
  c->r[3]=c->r[9]|c->r[9]; // 801B48C4
  W32(c->r[1]+0x000000F4u,c->r[6]); // 801B48C8
  c->r[4]=0u+0x00000013u; // 801B48CC
  c->r[5]=0u+0x00000002u; // 801B48D0
  c->r[6]=0u+0x00000001u; // 801B48D4
  W32(c->r[1]+0x000000F0u,c->r[10]); // 801B48D8
  W32(c->r[1]+0x000000F8u,c->r[11]); // 801B48DC
  W32(c->r[1]+0x000000FCu,c->r[8]); // 801B48E0
  W32(c->r[1]+0x00000104u,c->r[0]); // 801B48E4
  c->lr=0x801B48ECu; f_801B3350(c); // 801B48E8
L_801B48EC:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B48EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B48F0
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801B48F4
  c->lr=c->r[0]; // 801B48F8
  c->r[1]=c->r[10]|c->r[10]; // 801B48FC
  return; // 801B4900
}

// ESP_DiGetTicketView
void f_801B4910(Ctx* __restrict c) {
  trace_call(0x801B4910u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B4910
  c->r[12]=c->r[1]|c->r[1]; // 801B4914
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801B4918
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B491C
  c->r[0]=c->lr; // 801B4920
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B4924
  c->r[7]=c->r[1]+0x000000F0u; // 801B4928
  c->r[0]=R32(c->r[13]+0xFFFFAD00u); // 801B492C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4930
  if (crb(c,0)) { goto L_801B4944; } // 801B4934
  c->r[5]=0u+0x00000000u; // 801B4938
  cmpu(c,0,c->r[4],c->r[5]); // 801B493C
  if (!crb(c,2)) { goto L_801B494C; } // 801B4940
L_801B4944:;
  c->r[3]=0u+0xFFFFFC07u; // 801B4944
  goto L_801B49A0; // 801B4948
L_801B494C:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B494C
  if (!crb(c,2)) { goto L_801B495C; } // 801B4950
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B4954
  if (crb(c,2)) { goto L_801B4964; } // 801B4958
L_801B495C:;
  c->r[3]=0u+0xFFFFFC07u; // 801B495C
  goto L_801B49A0; // 801B4960
L_801B4964:;
  cmpu(c,0,c->r[3],c->r[5]); // 801B4964
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801B4968
  if (!crb(c,2)) { goto L_801B4978; } // 801B496C
  W32(c->r[1]+0x000000F4u,c->r[5]); // 801B4970
  goto L_801B4980; // 801B4974
L_801B4978:;
  c->r[0]=0u+0x000002A4u; // 801B4978
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801B497C
L_801B4980:;
  W32(c->r[1]+0x000000F8u,c->r[4]); // 801B4980
  c->r[0]=0u+0x000000D8u; // 801B4984
  c->r[3]=R32(c->r[13]+0xFFFFAD00u); // 801B4988
  c->r[4]=0u+0x0000001Bu; // 801B498C
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B4990
  c->r[5]=0u+0x00000001u; // 801B4994
  c->r[6]=0u+0x00000001u; // 801B4998
  c->lr=0x801B49A0u; f_801B3350(c); // 801B499C
L_801B49A0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B49A0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B49A4
  c->lr=c->r[0]; // 801B49A8
  c->r[1]=c->r[10]|c->r[10]; // 801B49AC
  return; // 801B49B0
}

// ESP_DiGetTmd
void f_801B49C0(Ctx* __restrict c) {
  trace_call(0x801B49C0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B49C0
  c->r[12]=c->r[1]|c->r[1]; // 801B49C4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801B49C8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B49CC
  c->r[0]=c->lr; // 801B49D0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B49D4
  c->r[7]=c->r[1]+0x000000F0u; // 801B49D8
  c->r[9]=c->r[1]+0x00000020u; // 801B49DC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801B49E0
  c->r[31]=c->r[4]|c->r[4]; // 801B49E4
  c->r[6]=R32(c->r[13]+0xFFFFAD00u); // 801B49E8
  cmps(c,0,(int32_t)c->r[6],0); // 801B49EC
  if (crb(c,0)) { goto L_801B4A00; } // 801B49F0
  c->r[5]=0u+0x00000000u; // 801B49F4
  cmpu(c,0,c->r[4],c->r[5]); // 801B49F8
  if (!crb(c,2)) { goto L_801B4A08; } // 801B49FC
L_801B4A00:;
  c->r[3]=0u+0xFFFFFC07u; // 801B4A00
  goto L_801B4A94; // 801B4A04
L_801B4A08:;
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B4A08
  if (crb(c,2)) { goto L_801B4A18; } // 801B4A0C
  c->r[3]=0u+0xFFFFFC07u; // 801B4A10
  goto L_801B4A94; // 801B4A14
L_801B4A18:;
  cmpu(c,0,c->r[3],c->r[5]); // 801B4A18
  if (!crb(c,2)) { goto L_801B4A54; } // 801B4A1C
  c->r[0]=0u+0x00000004u; // 801B4A20
  W32(c->r[1]+0x000000F0u,c->r[9]); // 801B4A24
  c->r[3]=c->r[6]|c->r[6]; // 801B4A28
  c->r[4]=0u+0x00000039u; // 801B4A2C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801B4A30
  c->r[5]=0u+0x00000000u; // 801B4A34
  c->r[6]=0u+0x00000001u; // 801B4A38
  c->lr=0x801B4A40u; f_801B3350(c); // 801B4A3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4A40
  if (!crb(c,2)) { goto L_801B4A94; } // 801B4A44
  c->r[0]=R32(c->r[1]+0x00000020u); // 801B4A48
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B4A4C
  goto L_801B4A94; // 801B4A50
L_801B4A54:;
  c->r[8]=R32(c->r[4]+0x00000000u); // 801B4A54
  cmps(c,0,(int32_t)c->r[8],0); // 801B4A58
  if (!crb(c,2)) { goto L_801B4A68; } // 801B4A5C
  c->r[3]=0u+0xFFFFFC07u; // 801B4A60
  goto L_801B4A94; // 801B4A64
L_801B4A68:;
  W32(c->r[1]+0x000000F8u,c->r[3]); // 801B4A68
  c->r[0]=0u+0x00000004u; // 801B4A6C
  c->r[3]=c->r[6]|c->r[6]; // 801B4A70
  c->r[4]=0u+0x0000003Au; // 801B4A74
  W32(c->r[1]+0x00000020u,c->r[8]); // 801B4A78
  c->r[5]=0u+0x00000001u; // 801B4A7C
  c->r[6]=0u+0x00000001u; // 801B4A80
  W32(c->r[1]+0x000000F0u,c->r[9]); // 801B4A84
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801B4A88
  W32(c->r[1]+0x000000FCu,c->r[8]); // 801B4A8C
  c->lr=0x801B4A94u; f_801B3350(c); // 801B4A90
L_801B4A94:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B4A94
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B4A98
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801B4A9C
  c->lr=c->r[0]; // 801B4AA0
  c->r[1]=c->r[10]|c->r[10]; // 801B4AA4
  return; // 801B4AA8
}

// ESP_GetDataDir
void f_801B4AB0(Ctx* __restrict c) {
  trace_call(0x801B4AB0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B4AB0
  c->r[12]=c->r[1]|c->r[1]; // 801B4AB4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEE0u,1); // 801B4AB8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4ABC
  c->r[0]=c->lr; // 801B4AC0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B4AC4
  c->r[7]=c->r[1]+0x000000F0u; // 801B4AC8
  c->r[9]=c->r[1]+0x00000020u; // 801B4ACC
  c->r[6]=R32(c->r[13]+0xFFFFAD00u); // 801B4AD0
  cmps(c,0,(int32_t)c->r[6],0); // 801B4AD4
  if (crb(c,0)) { goto L_801B4AE8; } // 801B4AD8
  c->r[0]=0u+0x00000000u; // 801B4ADC
  cmpu(c,0,c->r[5],c->r[0]); // 801B4AE0
  if (!crb(c,2)) { goto L_801B4AF0; } // 801B4AE4
L_801B4AE8:;
  c->r[3]=0u+0xFFFFFC07u; // 801B4AE8
  goto L_801B4B34; // 801B4AEC
L_801B4AF0:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B4AF0
  if (crb(c,2)) { goto L_801B4B00; } // 801B4AF4
  c->r[3]=0u+0xFFFFFC07u; // 801B4AF8
  goto L_801B4B34; // 801B4AFC
L_801B4B00:;
  W32(c->r[1]+0x00000024u,c->r[4]); // 801B4B00
  c->r[8]=0u+0x00000008u; // 801B4B04
  c->r[0]=0u+0x0000001Eu; // 801B4B08
  c->r[4]=0u+0x0000001Du; // 801B4B0C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801B4B10
  c->r[3]=c->r[6]|c->r[6]; // 801B4B14
  c->r[6]=0u+0x00000001u; // 801B4B18
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801B4B1C
  c->r[5]=0u+0x00000001u; // 801B4B20
  W32(c->r[1]+0x000000F0u,c->r[9]); // 801B4B24
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801B4B28
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B4B2C
  c->lr=0x801B4B34u; f_801B3350(c); // 801B4B30
L_801B4B34:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B4B34
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B4B38
  c->lr=c->r[0]; // 801B4B3C
  c->r[1]=c->r[10]|c->r[10]; // 801B4B40
  return; // 801B4B44
}

// ESP_GetTitleId
void f_801B4B50(Ctx* __restrict c) {
  trace_call(0x801B4B50u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B4B50
  c->r[12]=c->r[1]|c->r[1]; // 801B4B54
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801B4B58
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4B5C
  c->r[0]=c->lr; // 801B4B60
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B4B64
  c->r[7]=c->r[1]+0x000000F0u; // 801B4B68
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801B4B6C
  c->r[31]=c->r[3]|c->r[3]; // 801B4B70
  c->r[4]=R32(c->r[13]+0xFFFFAD00u); // 801B4B74
  cmps(c,0,(int32_t)c->r[4],0); // 801B4B78
  if (crb(c,0)) { goto L_801B4B8C; } // 801B4B7C
  c->r[0]=0u+0x00000000u; // 801B4B80
  cmpu(c,0,c->r[3],c->r[0]); // 801B4B84
  if (!crb(c,2)) { goto L_801B4B94; } // 801B4B88
L_801B4B8C:;
  c->r[3]=0u+0xFFFFFC07u; // 801B4B8C
  goto L_801B4BD0; // 801B4B90
L_801B4B94:;
  c->r[3]=c->r[1]+0x00000020u; // 801B4B94
  c->r[0]=0u+0x00000008u; // 801B4B98
  W32(c->r[1]+0x000000F0u,c->r[3]); // 801B4B9C
  c->r[3]=c->r[4]|c->r[4]; // 801B4BA0
  c->r[4]=0u+0x00000020u; // 801B4BA4
  c->r[5]=0u+0x00000000u; // 801B4BA8
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801B4BAC
  c->r[6]=0u+0x00000001u; // 801B4BB0
  c->lr=0x801B4BB8u; f_801B3350(c); // 801B4BB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4BB8
  if (!crb(c,2)) { goto L_801B4BD0; } // 801B4BBC
  c->r[0]=R32(c->r[1]+0x00000020u); // 801B4BC0
  c->r[4]=R32(c->r[1]+0x00000024u); // 801B4BC4
  W32(c->r[31]+0x00000004u,c->r[4]); // 801B4BC8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B4BCC
L_801B4BD0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B4BD0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B4BD4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801B4BD8
  c->lr=c->r[0]; // 801B4BDC
  c->r[1]=c->r[10]|c->r[10]; // 801B4BE0
  return; // 801B4BE4
}

// fn_801B4BF0
void f_801B4BF0(Ctx* __restrict c) {
  trace_call(0x801B4BF0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801B4BF0
  c->r[12]=c->r[1]|c->r[1]; // 801B4BF4
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 801B4BF8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4BFC
  c->r[0]=c->lr; // 801B4C00
  W32(c->r[12]+0x00000004u,c->r[0]); // 801B4C04
  c->r[7]=c->r[1]+0x000000F0u; // 801B4C08
  c->r[9]=c->r[1]+0x00000020u; // 801B4C0C
  c->r[10]=c->r[1]+0x00000040u; // 801B4C10
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801B4C14
  c->r[31]=c->r[6]|c->r[6]; // 801B4C18
  c->r[0]=R32(c->r[13]+0xFFFFAD00u); // 801B4C1C
  cmps(c,0,(int32_t)c->r[0],0); // 801B4C20
  if (!crb(c,0)) { goto L_801B4C30; } // 801B4C24
  c->r[3]=0u+0xFFFFFC07u; // 801B4C28
  goto L_801B4CA8; // 801B4C2C
L_801B4C30:;
  c->r[0]=rotl(c->r[5],0)&0x0000001Fu; cr0(c,c->r[0]); // 801B4C30
  if (crb(c,2)) { goto L_801B4C40; } // 801B4C34
  c->r[3]=0u+0xFFFFFC07u; // 801B4C38
  goto L_801B4CA8; // 801B4C3C
L_801B4C40:;
  c->r[0]=0u+0x00000000u; // 801B4C40
  c->r[8]=0u+0x00000008u; // 801B4C44
  cmpu(c,0,c->r[5],c->r[0]); // 801B4C48
  W32(c->r[1]+0x00000024u,c->r[4]); // 801B4C4C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801B4C50
  W32(c->r[1]+0x000000F0u,c->r[9]); // 801B4C54
  W32(c->r[1]+0x000000F4u,c->r[8]); // 801B4C58
  if (!crb(c,2)) { goto L_801B4C6C; } // 801B4C5C
  W32(c->r[1]+0x000000F8u,c->r[0]); // 801B4C60
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B4C64
  goto L_801B4C80; // 801B4C68
L_801B4C6C:;
  W32(c->r[1]+0x000000F8u,c->r[5]); // 801B4C6C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801B4C70
  W32(c->r[1]+0x00000040u,c->r[0]); // 801B4C74
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801B4C78
  W32(c->r[1]+0x000000FCu,c->r[0]); // 801B4C7C
L_801B4C80:;
  c->r[0]=0u+0x00000004u; // 801B4C80
  W32(c->r[1]+0x00000100u,c->r[10]); // 801B4C84
  c->r[3]=R32(c->r[13]+0xFFFFAD00u); // 801B4C88
  c->r[4]=0u+0x00000016u; // 801B4C8C
  W32(c->r[1]+0x00000104u,c->r[0]); // 801B4C90
  c->r[5]=0u+0x00000001u; // 801B4C94
  c->r[6]=0u+0x00000002u; // 801B4C98
  c->lr=0x801B4CA0u; f_801B3350(c); // 801B4C9C
  c->r[0]=R32(c->r[1]+0x00000040u); // 801B4CA0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801B4CA4
L_801B4CA8:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801B4CA8
  c->r[0]=R32(c->r[10]+0x00000004u); // 801B4CAC
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801B4CB0
  c->lr=c->r[0]; // 801B4CB4
  c->r[1]=c->r[10]|c->r[10]; // 801B4CB8
  return; // 801B4CBC
}

// fn_801B4CC0
void f_801B4CC0(Ctx* __restrict c) {
  trace_call(0x801B4CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4CC0
  c->r[0]=c->lr; // 801B4CC4
  c->r[7]=c->r[3]+0x00000064u; // 801B4CC8
  c->r[4]=c->r[3]+0x00000084u; // 801B4CCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4CD0
  cmpu(c,0,c->r[7],c->r[4]); // 801B4CD4
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4CD8
  c->r[6]=0u+0x00000000u; // 801B4CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4CE0
  c->r[8]=c->r[3]+0x0000000Cu; // 801B4CE4
  c->r[5]=0u+0x00000001u; // 801B4CE8
  c->r[0]=0u+0xFFFFFFFFu; // 801B4CEC
  W32(c->r[3]+0x00000000u,c->r[6]); // 801B4CF0
  c->r[31]=c->r[3]|c->r[3]; // 801B4CF4
  W32(c->r[3]+0x00000004u,c->r[6]); // 801B4CF8
  W32(c->r[3]+0x00000008u,c->r[6]); // 801B4CFC
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 801B4D00
  W32(c->r[3]+0x00000010u,c->r[8]); // 801B4D04
  W8(c->r[3]+0x00000018u,c->r[6]); // 801B4D08
  W8(c->r[3]+0x00000019u,c->r[5]); // 801B4D0C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B4D10
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801B4D14
  W32(c->r[3]+0x00000024u,c->r[6]); // 801B4D18
  W32(c->r[3]+0x00000028u,c->r[6]); // 801B4D1C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801B4D20
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801B4D24
  W32(c->r[3]+0x00000034u,c->r[6]); // 801B4D28
  W32(c->r[3]+0x00000038u,c->r[6]); // 801B4D2C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801B4D30
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801B4D34
  W32(c->r[3]+0x00000044u,c->r[6]); // 801B4D38
  W32(c->r[3]+0x00000048u,c->r[6]); // 801B4D3C
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 801B4D40
  W32(c->r[3]+0x00000050u,c->r[0]); // 801B4D44
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801B4D48
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801B4D4C
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 801B4D50
  W32(c->r[3]+0x00000060u,c->r[6]); // 801B4D54
  if (!crb(c,0)) { goto L_801B4D88; } // 801B4D58
  c->r[0]=c->r[4]+0x0000000Fu; // 801B4D5C
  c->r[0]=c->r[0]-c->r[7]; // 801B4D60
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801B4D64
  c->ctr=c->r[0]; // 801B4D68
  if (!crb(c,0)) { goto L_801B4D88; } // 801B4D6C
L_801B4D70:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 801B4D70
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 801B4D74
  W32(c->r[7]+0x00000008u,c->r[6]); // 801B4D78
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 801B4D7C
  c->r[7]=c->r[7]+0x00000010u; // 801B4D80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B4D70; } // 801B4D84
L_801B4D88:;
  c->r[6]=c->r[3]+0x00000094u; // 801B4D88
  c->r[4]=c->r[3]+0x000000B4u; // 801B4D8C
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4D90
  cmpu(c,0,c->r[6],c->r[4]); // 801B4D94
  c->r[5]=0u+0x00000000u; // 801B4D98
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 801B4D9C
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 801B4DA0
  W32(c->r[3]+0x0000008Cu,c->r[5]); // 801B4DA4
  W32(c->r[3]+0x00000090u,c->r[5]); // 801B4DA8
  if (!crb(c,0)) { goto L_801B4DDC; } // 801B4DAC
  c->r[0]=c->r[4]+0x0000000Fu; // 801B4DB0
  c->r[0]=c->r[0]-c->r[6]; // 801B4DB4
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801B4DB8
  c->ctr=c->r[0]; // 801B4DBC
  if (!crb(c,0)) { goto L_801B4DDC; } // 801B4DC0
L_801B4DC4:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 801B4DC4
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 801B4DC8
  W32(c->r[6]+0x00000008u,c->r[5]); // 801B4DCC
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801B4DD0
  c->r[6]=c->r[6]+0x00000010u; // 801B4DD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B4DC4; } // 801B4DD8
L_801B4DDC:;
  c->r[4]=0u+0x801B0000u; // 801B4DDC
  c->r[5]=0u+0x801B0000u; // 801B4DE0
  c->r[4]=c->r[4]+0x00004ED0u; // 801B4DE4
  c->r[6]=0u+0x0000000Cu; // 801B4DE8
  c->r[5]=c->r[5]+0x00004EF0u; // 801B4DEC
  c->r[7]=0u+0x00000003u; // 801B4DF0
  c->r[3]=c->r[3]+0x000000B4u; // 801B4DF4
  c->lr=0x801B4DFCu; f_802E66A0(c); // 801B4DF8
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B4DFC
  c->r[0]=0u+0x00000000u; // 801B4E00
  W32(c->r[31]+0x00000034u,c->r[0]); // 801B4E04
  c->r[3]=c->r[31]|c->r[31]; // 801B4E08
  W32(c->r[31]+0x00000038u,c->r[0]); // 801B4E0C
  W32(c->r[31]+0x00000024u,c->r[0]); // 801B4E10
  W32(c->r[31]+0x00000028u,c->r[0]); // 801B4E14
  W32(c->r[31]+0x00000044u,c->r[0]); // 801B4E18
  W32(c->r[31]+0x00000048u,c->r[0]); // 801B4E1C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801B4E20
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 801B4E24
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B4E28
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 801B4E2C
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 801B4E30
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 801B4E34
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 801B4E38
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 801B4E3C
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 801B4E40
  W32(c->r[31]+0x00000060u,c->r[0]); // 801B4E44
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 801B4E48
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 801B4E4C
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 801B4E50
  W32(c->r[31]+0x00000090u,c->r[0]); // 801B4E54
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801B4E58
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801B4E5C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801B4E60
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 801B4E64
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 801B4E68
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 801B4E6C
  W32(c->r[31]+0x00000070u,c->r[0]); // 801B4E70
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 801B4E74
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 801B4E78
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 801B4E7C
  W32(c->r[31]+0x000000A0u,c->r[0]); // 801B4E80
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801B4E84
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801B4E88
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801B4E8C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 801B4E90
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 801B4E94
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 801B4E98
  W32(c->r[31]+0x00000080u,c->r[0]); // 801B4E9C
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 801B4EA0
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 801B4EA4
  W32(c->r[31]+0x000000ACu,c->r[0]); // 801B4EA8
  W32(c->r[31]+0x000000B0u,c->r[0]); // 801B4EAC
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801B4EB0
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801B4EB4
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801B4EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4EBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4EC0
  c->lr=c->r[0]; // 801B4EC4
  c->r[1]=c->r[1]+0x00000010u; // 801B4EC8
  return; // 801B4ECC
}

// fn_801B4ED0
void f_801B4ED0(Ctx* __restrict c) {
  trace_call(0x801B4ED0u);
  c->r[4]=c->r[3]+0x00000004u; // 801B4ED0
  c->r[0]=0u+0x00000000u; // 801B4ED4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B4ED8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801B4EDC
  W32(c->r[3]+0x00000008u,c->r[4]); // 801B4EE0
  return; // 801B4EE4
}

// fn_801B4EF0
void f_801B4EF0(Ctx* __restrict c) {
  trace_call(0x801B4EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4EF0
  c->r[0]=c->lr; // 801B4EF4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4EFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4F00
  c->r[31]=c->r[4]|c->r[4]; // 801B4F04
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4F08
  c->r[30]=c->r[3]|c->r[3]; // 801B4F0C
  if (crb(c,2)) { goto L_801B4F2C; } // 801B4F10
  c->r[4]=0u+0x00000000u; // 801B4F14
  c->lr=0x801B4F1Cu; f_801E4130(c); // 801B4F18
  cmps(c,0,(int32_t)c->r[31],0); // 801B4F1C
  if (!crb(c,1)) { goto L_801B4F2C; } // 801B4F20
  c->r[3]=c->r[30]|c->r[30]; // 801B4F24
  c->lr=0x801B4F2Cu; f_802E61AC(c); // 801B4F28
L_801B4F2C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B4F2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4F30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4F34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4F38
  c->lr=c->r[0]; // 801B4F3C
  c->r[1]=c->r[1]+0x00000010u; // 801B4F40
  return; // 801B4F44
}

// fn_801B4F50
void f_801B4F50(Ctx* __restrict c) {
  trace_call(0x801B4F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4F50
  c->r[0]=c->lr; // 801B4F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4F5C
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B4F60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B4F64
  if (!crb(c,2)) { goto L_801B4F98; } // 801B4F68
  c->r[31]=0u+0x805B0000u; // 801B4F6C
  c->r[3]=c->r[31]+0xFFFFC510u; // 801B4F70
  c->lr=0x801B4F78u; f_801B4CC0(c); // 801B4F74
  c->r[4]=0u+0x801B0000u; // 801B4F78
  c->r[5]=0u+0x805B0000u; // 801B4F7C
  c->r[3]=c->r[31]+0xFFFFC510u; // 801B4F80
  c->r[4]=c->r[4]+0x00004FC0u; // 801B4F84
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B4F88
  c->lr=0x801B4F90u; f_802E6064(c); // 801B4F8C
  c->r[0]=0u+0x00000001u; // 801B4F90
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B4F94
L_801B4F98:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4F98
  c->r[3]=0u+0x805B0000u; // 801B4F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4FA0
  c->r[3]=c->r[3]+0xFFFFC510u; // 801B4FA4
  c->lr=c->r[0]; // 801B4FA8
  c->r[1]=c->r[1]+0x00000010u; // 801B4FAC
  return; // 801B4FB0
}

// fn_801B4FC0
void f_801B4FC0(Ctx* __restrict c) {
  trace_call(0x801B4FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4FC0
  c->r[0]=c->lr; // 801B4FC4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4FCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4FD0
  c->r[31]=c->r[4]|c->r[4]; // 801B4FD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4FD8
  c->r[30]=c->r[3]|c->r[3]; // 801B4FDC
  if (crb(c,2)) { goto L_801B501C; } // 801B4FE0
  c->r[4]=0u+0x801B0000u; // 801B4FE4
  c->r[5]=0u+0x0000000Cu; // 801B4FE8
  c->r[4]=c->r[4]+0x00004EF0u; // 801B4FEC
  c->r[6]=0u+0x00000003u; // 801B4FF0
  c->r[3]=c->r[3]+0x000000B4u; // 801B4FF4
  c->lr=0x801B4FFCu; f_802E6798(c); // 801B4FF8
  c->r[3]=addc(c,c->r[30],0x00000008u,0); cr0(c,c->r[3]); // 801B4FFC
  if (crb(c,2)) { goto L_801B500C; } // 801B5000
  c->r[4]=0u+0x00000000u; // 801B5004
  c->lr=0x801B500Cu; f_801E4130(c); // 801B5008
L_801B500C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B500C
  if (!crb(c,1)) { goto L_801B501C; } // 801B5010
  c->r[3]=c->r[30]|c->r[30]; // 801B5014
  c->lr=0x801B501Cu; f_802E61AC(c); // 801B5018
L_801B501C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B501C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5020
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B5024
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5028
  c->lr=c->r[0]; // 801B502C
  c->r[1]=c->r[1]+0x00000010u; // 801B5030
  return; // 801B5034
}

// fn_801B5040
void f_801B5040(Ctx* __restrict c) {
  trace_call(0x801B5040u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5040
  c->r[0]=c->lr; // 801B5044
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5048
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B504C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5050
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5054
  c->r[29]=c->r[3]|c->r[3]; // 801B5058
  c->r[0]=R8(c->r[3]+0x00000018u); // 801B505C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5060
  if (!crb(c,2)) { goto L_801B5174; } // 801B5064
  c->lr=0x801B506Cu; f_8013D6A0(c); // 801B5068
  cmps(c,0,(int32_t)c->r[3],0); // 801B506C
  if (!crb(c,2)) { goto L_801B5090; } // 801B5070
  c->r[3]=0u+0x803A0000u; // 801B5074
  c->r[5]=0u+0x803A0000u; // 801B5078
  c->r[3]=c->r[3]+0xFFFFBDA0u; // 801B507C
  c->r[4]=0u+0x00000068u; // 801B5080
  c->r[5]=c->r[5]+0xFFFFBDB4u; // 801B5084
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5088
  c->lr=0x801B5090u; f_80212260(c); // 801B508C
L_801B5090:;
  c->r[31]=0u+0x805B0000u; // 801B5090
  c->r[4]=0u+0x00000000u; // 801B5094
  c->r[3]=c->r[31]+0xFFFFC200u; // 801B5098
  c->r[5]=0u+0x00000100u; // 801B509C
  c->lr=0x801B50A4u; f_80004714(c); // 801B50A0
  c->r[3]=c->r[31]+0xFFFFC200u; // 801B50A4
  c->r[4]=0u+0x00000100u; // 801B50A8
  c->lr=0x801B50B0u; f_80120C40(c); // 801B50AC
  c->r[0]=c->r[31]+0xFFFFC200u; // 801B50B0
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B50B4
  c->r[30]=c->r[1]+0x00000008u; // 801B50B8
  c->lr=0x801B50C0u; f_801251B0(c); // 801B50BC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B50C0
  c->r[3]=c->r[29]+0x000000D8u; // 801B50C4
  c->r[4]=c->r[29]+0x000000E4u; // 801B50C8
  c->lr=0x801B50D0u; f_80150060(c); // 801B50CC
  c->r[3]=c->r[29]+0x000000DCu; // 801B50D0
  c->r[4]=c->r[29]+0x000000E8u; // 801B50D4
  c->lr=0x801B50DCu; f_80150080(c); // 801B50D8
  c->r[3]=c->r[29]+0x000000E0u; // 801B50DC
  c->r[4]=c->r[29]+0x000000ECu; // 801B50E0
  c->lr=0x801B50E8u; f_801500A0(c); // 801B50E4
  c->r[3]=0u+0x00000000u; // 801B50E8
  c->r[4]=0u+0x00000000u; // 801B50EC
  c->lr=0x801B50F4u; f_8014FF10(c); // 801B50F0
  c->r[3]=0u+0x00000000u; // 801B50F4
  c->r[4]=0u+0x00000000u; // 801B50F8
  c->lr=0x801B5100u; f_8014FF80(c); // 801B50FC
  c->r[3]=0u+0x00000000u; // 801B5100
  c->r[4]=0u+0x00000000u; // 801B5104
  c->lr=0x801B510Cu; f_8014FFF0(c); // 801B5108
  c->r[3]=0u+0x801B0000u; // 801B510C
  c->r[3]=c->r[3]+0x000059A0u; // 801B5110
  c->lr=0x801B5118u; f_80151240(c); // 801B5114
  W32(c->r[29]+0x00000014u,c->r[3]); // 801B5118
  c->r[31]=0u+0x805B0000u; // 801B511C
  c->r[3]=c->r[31]+0xFFFFC300u; // 801B5120
  c->r[4]=0u+0x00000000u; // 801B5124
  c->r[5]=0u+0x00000200u; // 801B5128
  c->lr=0x801B5130u; f_80004714(c); // 801B512C
  c->r[7]=c->r[31]+0xFFFFC300u; // 801B5130
  c->r[6]=c->r[13]+0xFFFFC3FCu; // 801B5134
  c->r[5]=c->r[13]+0xFFFFC400u; // 801B5138
  c->r[4]=c->r[13]+0xFFFFC404u; // 801B513C
  c->r[3]=c->r[13]+0xFFFFC408u; // 801B5140
  c->r[0]=c->r[13]+0xFFFFC3F8u; // 801B5144
  W32(c->r[7]+0x00000004u,c->r[0]); // 801B5148
  cmps(c,0,(int32_t)c->r[30],0); // 801B514C
  c->r[0]=0u+0x00000001u; // 801B5150
  W32(c->r[7]+0x00000008u,c->r[6]); // 801B5154
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 801B5158
  W32(c->r[7]+0x00000010u,c->r[4]); // 801B515C
  W32(c->r[7]+0x00000014u,c->r[3]); // 801B5160
  W8(c->r[29]+0x00000018u,c->r[0]); // 801B5164
  if (crb(c,2)) { goto L_801B5174; } // 801B5168
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B516C
  c->lr=0x801B5174u; f_801251F0(c); // 801B5170
L_801B5174:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5174
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5178
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B517C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B5180
  c->lr=c->r[0]; // 801B5184
  c->r[1]=c->r[1]+0x00000020u; // 801B5188
  return; // 801B518C
}

// fn_801B5190
void f_801B5190(Ctx* __restrict c) {
  trace_call(0x801B5190u);
  c->r[5]=R32(c->r[3]+0x00000024u); // 801B5190
  c->r[0]=R32(c->r[3]+0x00000028u); // 801B5194
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5198
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801B519C
  if (crb(c,0)) { goto L_801B51AC; } // 801B51A0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B51A4
  goto L_801B51F4; // 801B51A8
L_801B51AC:;
  c->r[4]=0u+0x43300000u; // 801B51AC
  c->r[0]=c->r[0]^0x80000000u; // 801B51B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B51B4
  c->r[0]=c->r[5]^0x80000000u; // 801B51B8
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B51BC
  W32(c->r[1]+0x00000008u,c->r[4]); // 801B51C0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B51C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801B51C8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B51CC
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801B51D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B51D4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801B51D8
  W32(c->r[1]+0x00000010u,c->r[4]); // 801B51DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B51E0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B51E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B51E8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B51EC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801B51F0
L_801B51F4:;
  c->r[1]=c->r[1]+0x00000020u; // 801B51F4
  return; // 801B51F8
}

// fn_801B5200
void f_801B5200(Ctx* __restrict c) {
  trace_call(0x801B5200u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5200
  c->r[0]=c->lr; // 801B5204
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B5208
  c->r[0]=0u+0x43300000u; // 801B520C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 801B5210
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 801B5214
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[31]=RF64(ea);} // 801B5218
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 801B521C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 801B5220
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[30]=c->ps1[30]=RF32(ea);} // 801B5224
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 801B5228
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 801B522C
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[29]=c->ps1[29]=RF32(ea);} // 801B5230
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 801B5234
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 801B5238
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[28]=c->ps1[28]=RF32(ea);} // 801B523C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B5240
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B5244
  c->r[30]=0u+0x00000000u; // 801B5248
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B524C
  c->r[29]=c->r[3]|c->r[3]; // 801B5250
  c->r[31]=c->r[29]|c->r[29]; // 801B5254
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B5258
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B525C
L_801B5260:;
  c->r[3]=R32(c->r[31]+0x00000090u); // 801B5260
  c->r[4]=0u+0x00000000u; // 801B5264
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801B5268
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B526C
  if (!crb(c,0)) { goto L_801B5290; } // 801B5270
  c->r[3]=R32(c->r[31]+0x00000090u); // 801B5274
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801B5278
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B527C
  if (!crb(c,0)) { goto L_801B528C; } // 801B5280
  c->r[0]=c->r[3]+0x00000001u; // 801B5284
  W32(c->r[31]+0x00000090u,c->r[0]); // 801B5288
L_801B528C:;
  c->r[4]=0u+0x00000001u; // 801B528C
L_801B5290:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 801B5290
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 801B5294
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B5298
  if (!crb(c,0)) { goto L_801B52D8; } // 801B529C
  c->r[3]=R32(c->r[31]+0x00000060u); // 801B52A0
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 801B52A4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B52A8
  if (!crb(c,0)) { goto L_801B52B8; } // 801B52AC
  c->r[0]=c->r[3]+0x00000001u; // 801B52B0
  W32(c->r[31]+0x00000060u,c->r[0]); // 801B52B4
L_801B52B8:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 801B52B8
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 801B52BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B52C0
  if (crb(c,0)) { goto L_801B52D4; } // 801B52C4
  c->r[3]=c->r[29]|c->r[29]; // 801B52C8
  c->r[4]=c->r[30]|c->r[30]; // 801B52CC
  c->lr=0x801B52D4u; f_801B5F40(c); // 801B52D0
L_801B52D4:;
  c->r[4]=0u+0x00000001u; // 801B52D4
L_801B52D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B52D8
  if (crb(c,2)) { goto L_801B5410; } // 801B52DC
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 801B52E0
  c->r[0]=R32(c->r[31]+0x00000090u); // 801B52E4
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[4]=c->ps1[4]=RF32(ea);} // 801B52E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B52EC
  if (crb(c,0)) { goto L_801B52FC; } // 801B52F0
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B52F4
  goto L_801B5334; // 801B52F8
L_801B52FC:;
  c->r[0]=c->r[0]^0x80000000u; // 801B52FC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B5300
  c->r[0]=c->r[3]^0x80000000u; // 801B5304
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5308
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801B530C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5310
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 801B5314
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5318
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801B531C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B5320
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B5324
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801B5328
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B532C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801B5330
L_801B5334:;
  fcmp(c,0,c->f[0],c->f[28]); // 801B5334
  if (!crb(c,1)) { goto L_801B5344; } // 801B5338
  c->f[0]=c->f[28]; // 801B533C
  goto L_801B5350; // 801B5340
L_801B5344:;
  fcmp(c,0,c->f[0],c->f[29]); // 801B5344
  if (!crb(c,0)) { goto L_801B5350; } // 801B5348
  c->f[0]=c->f[29]; // 801B534C
L_801B5350:;
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 801B5350
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801B5354
  c->r[0]=R32(c->r[31]+0x00000060u); // 801B5358
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B535C
  if (crb(c,0)) { goto L_801B536C; } // 801B5360
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5364
  goto L_801B53A4; // 801B5368
L_801B536C:;
  c->r[0]=c->r[0]^0x80000000u; // 801B536C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B5370
  c->r[0]=c->r[3]^0x80000000u; // 801B5374
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5378
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801B537C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5380
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[31]); // 801B5384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5388
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801B538C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B5390
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B5394
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801B5398
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B539C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801B53A0
L_801B53A4:;
  fcmp(c,0,c->f[0],c->f[28]); // 801B53A4
  if (!crb(c,1)) { goto L_801B53B4; } // 801B53A8
  c->f[0]=c->f[28]; // 801B53AC
  goto L_801B53C0; // 801B53B0
L_801B53B4:;
  fcmp(c,0,c->f[0],c->f[29]); // 801B53B4
  if (!crb(c,0)) { goto L_801B53C0; } // 801B53B8
  c->f[0]=c->f[29]; // 801B53BC
L_801B53C0:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 801B53C0
  cmps(c,0,(int32_t)c->r[30],0); // 801B53C4
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[4]); // 801B53C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B53CC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801B53D0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801B53D4
  if (crb(c,2)) { goto L_801B53F0; } // 801B53D8
  cmps(c,0,(int32_t)c->r[30],1); // 801B53DC
  if (crb(c,2)) { goto L_801B53FC; } // 801B53E0
  cmps(c,0,(int32_t)c->r[30],2); // 801B53E4
  if (crb(c,2)) { goto L_801B5408; } // 801B53E8
  goto L_801B5410; // 801B53EC
L_801B53F0:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B53F0
  c->lr=0x801B53F8u; f_80150B80(c); // 801B53F4
  goto L_801B5410; // 801B53F8
L_801B53FC:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B53FC
  c->lr=0x801B5404u; f_80150B90(c); // 801B5400
  goto L_801B5410; // 801B5404
L_801B5408:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B5408
  c->lr=0x801B5410u; f_80150BA0(c); // 801B540C
L_801B5410:;
  c->r[30]=c->r[30]+0x00000001u; // 801B5410
  c->r[31]=c->r[31]+0x00000010u; // 801B5414
  cmps(c,0,(int32_t)c->r[30],3); // 801B5418
  if (crb(c,0)) { IRQCHK(c); goto L_801B5260; } // 801B541C
  c->r[3]=R32(c->r[29]+0x00000028u); // 801B5420
  c->r[0]=R32(c->r[29]+0x00000024u); // 801B5424
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B5428
  if (!crb(c,0)) { goto L_801B5454; } // 801B542C
  c->r[3]=R32(c->r[29]+0x00000028u); // 801B5430
  c->r[0]=R32(c->r[29]+0x00000024u); // 801B5434
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B5438
  if (!crb(c,0)) { goto L_801B5448; } // 801B543C
  c->r[0]=c->r[3]+0x00000001u; // 801B5440
  W32(c->r[29]+0x00000028u,c->r[0]); // 801B5444
L_801B5448:;
  c->lr=0x801B544Cu; f_801E0470(c); // 801B5448
  c->r[4]=0u+0x00000008u; // 801B544C
  c->lr=0x801B5454u; f_801E1030(c); // 801B5450
L_801B5454:;
  c->r[3]=R32(c->r[29]+0x00000048u); // 801B5454
  c->r[0]=R32(c->r[29]+0x00000044u); // 801B5458
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B545C
  if (!crb(c,0)) { goto L_801B547C; } // 801B5460
  c->r[3]=R32(c->r[29]+0x00000048u); // 801B5464
  c->r[0]=R32(c->r[29]+0x00000044u); // 801B5468
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B546C
  if (!crb(c,0)) { goto L_801B547C; } // 801B5470
  c->r[0]=c->r[3]+0x00000001u; // 801B5474
  W32(c->r[29]+0x00000048u,c->r[0]); // 801B5478
L_801B547C:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 801B547C
  c->r[0]=R32(c->r[29]+0x00000034u); // 801B5480
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B5484
  if (!crb(c,0)) { goto L_801B54A4; } // 801B5488
  c->r[3]=R32(c->r[29]+0x00000038u); // 801B548C
  c->r[0]=R32(c->r[29]+0x00000034u); // 801B5490
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B5494
  if (!crb(c,0)) { goto L_801B54A4; } // 801B5498
  c->r[0]=c->r[3]+0x00000001u; // 801B549C
  W32(c->r[29]+0x00000038u,c->r[0]); // 801B54A0
L_801B54A4:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 801B54A4
  c->r[0]=R32(c->r[29]+0x00000038u); // 801B54A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B54AC
  if (crb(c,0)) { goto L_801B54BC; } // 801B54B0
  {uint32_t ea=c->r[29]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 801B54B4
  goto L_801B54F8; // 801B54B8
L_801B54BC:;
  c->r[0]=c->r[0]^0x80000000u; // 801B54BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B54C0
  c->r[0]=c->r[3]^0x80000000u; // 801B54C4
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B54C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B54CC
  {uint32_t ea=c->r[29]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B54D0
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B54D4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801B54D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B54DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801B54E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B54E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B54E8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B54EC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B54F0
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[0]); // 801B54F4
L_801B54F8:;
  c->r[3]=R32(c->r[29]+0x00000044u); // 801B54F8
  c->r[0]=R32(c->r[29]+0x00000048u); // 801B54FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B5500
  if (crb(c,0)) { goto L_801B5510; } // 801B5504
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5508
  goto L_801B554C; // 801B550C
L_801B5510:;
  c->r[0]=c->r[0]^0x80000000u; // 801B5510
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B5514
  c->r[0]=c->r[3]^0x80000000u; // 801B5518
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B551C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B5520
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5524
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5528
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801B552C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5530
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801B5534
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B5538
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B553C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B5540
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B5544
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801B5548
L_801B554C:;
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801B554C
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5550
  fcmp(c,0,c->f[0],c->f[1]); // 801B5554
  if (!crb(c,1)) { goto L_801B5560; } // 801B5558
  goto L_801B5574; // 801B555C
L_801B5560:;
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5560
  fcmp(c,0,c->f[0],c->f[1]); // 801B5564
  if (!crb(c,0)) { goto L_801B5570; } // 801B5568
  goto L_801B5574; // 801B556C
L_801B5570:;
  c->f[1]=c->f[0]; // 801B5570
L_801B5574:;
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5574
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801B5578
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B557C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801B5580
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801B5584
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801B5588
  c->lr=0x801B5590u; f_80150B60(c); // 801B558C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B5590
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 801B5594
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 801B5598
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 801B559C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 801B55A0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 801B55A4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 801B55A8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 801B55AC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 801B55B0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B55B4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B55B8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B55BC
  c->lr=c->r[0]; // 801B55C0
  c->r[1]=c->r[1]+0x00000070u; // 801B55C4
  return; // 801B55C8
}

// fn_801B55D0
void f_801B55D0(Ctx* __restrict c) {
  trace_call(0x801B55D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B55D0
  c->r[0]=c->lr; // 801B55D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B55D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B55DC
  c->r[31]=c->r[3]|c->r[3]; // 801B55E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801B55E4
  cmps(c,0,(int32_t)c->r[0],0); // 801B55E8
  if (!crb(c,2)) { goto L_801B560C; } // 801B55EC
  c->r[3]=0u+0x803A0000u; // 801B55F0
  c->r[5]=0u+0x803A0000u; // 801B55F4
  c->r[3]=c->r[3]+0xFFFFBDA0u; // 801B55F8
  c->r[4]=0u+0x00000105u; // 801B55FC
  c->r[5]=c->r[5]+0xFFFFBDCCu; // 801B5600
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5604
  c->lr=0x801B560Cu; f_80212260(c); // 801B5608
L_801B560C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B560C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5610
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5614
  c->lr=c->r[0]; // 801B5618
  c->r[1]=c->r[1]+0x00000010u; // 801B561C
  return; // 801B5620
}

// fn_801B5630
void f_801B5630(Ctx* __restrict c) {
  trace_call(0x801B5630u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5630
  c->r[0]=c->lr; // 801B5634
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5638
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B563C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5640
  c->r[30]=c->r[5]|c->r[5]; // 801B5644
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5648
  c->r[29]=c->r[4]|c->r[4]; // 801B564C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B5650
  c->r[28]=c->r[3]|c->r[3]; // 801B5654
  c->lr=0x801B565Cu; f_801251B0(c); // 801B5658
  cmps(c,0,(int32_t)c->r[29],0); // 801B565C
  W32(c->r[29]+0x00000008u,c->r[30]); // 801B5660
  c->r[31]=c->r[3]|c->r[3]; // 801B5664
  c->r[30]=c->r[28]+0x0000000Cu; // 801B5668
  if (!crb(c,2)) { goto L_801B568C; } // 801B566C
  c->r[3]=0u+0x803A0000u; // 801B5670
  c->r[5]=0u+0x803A0000u; // 801B5674
  c->r[3]=c->r[3]+0xFFFFBEFCu; // 801B5678
  c->r[4]=0u+0x00000233u; // 801B567C
  c->r[5]=c->r[5]+0xFFFFBED8u; // 801B5680
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5684
  c->lr=0x801B568Cu; f_80212260(c); // 801B5688
L_801B568C:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B568C
  c->r[5]=c->r[29]|c->r[29]; // 801B5690
  c->r[3]=c->r[28]+0x00000008u; // 801B5694
  c->r[4]=c->r[1]+0x00000008u; // 801B5698
  c->lr=0x801B56A0u; f_801E44B0(c); // 801B569C
  c->r[3]=c->r[31]|c->r[31]; // 801B56A0
  c->lr=0x801B56A8u; f_801251F0(c); // 801B56A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B56A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B56AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B56B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B56B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B56B8
  c->lr=c->r[0]; // 801B56BC
  c->r[1]=c->r[1]+0x00000020u; // 801B56C0
  return; // 801B56C4
}

// fn_801B56D0
void f_801B56D0(Ctx* __restrict c) {
  trace_call(0x801B56D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B56D0
  c->r[0]=c->lr; // 801B56D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B56D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B56DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B56E0
  c->r[30]=c->r[4]|c->r[4]; // 801B56E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B56E8
  c->r[29]=c->r[3]|c->r[3]; // 801B56EC
  c->lr=0x801B56F4u; f_801251B0(c); // 801B56F0
  cmps(c,0,(int32_t)c->r[30],0); // 801B56F4
  c->r[31]=c->r[3]|c->r[3]; // 801B56F8
  if (!crb(c,2)) { goto L_801B571C; } // 801B56FC
  c->r[3]=0u+0x803A0000u; // 801B5700
  c->r[5]=0u+0x803A0000u; // 801B5704
  c->r[3]=c->r[3]+0xFFFFBEFCu; // 801B5708
  c->r[4]=0u+0x00000233u; // 801B570C
  c->r[5]=c->r[5]+0xFFFFBED8u; // 801B5710
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5714
  c->lr=0x801B571Cu; f_80212260(c); // 801B5718
L_801B571C:;
  c->r[4]=c->r[30]|c->r[30]; // 801B571C
  c->r[3]=c->r[29]+0x00000008u; // 801B5720
  c->lr=0x801B5728u; f_801E45B0(c); // 801B5724
  c->r[3]=c->r[31]|c->r[31]; // 801B5728
  c->lr=0x801B5730u; f_801251F0(c); // 801B572C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5730
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5734
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B5738
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B573C
  c->lr=c->r[0]; // 801B5740
  c->r[1]=c->r[1]+0x00000020u; // 801B5744
  return; // 801B5748
}

// fn_801B5750
void f_801B5750(Ctx* __restrict c) {
  trace_call(0x801B5750u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5750
  c->r[0]=c->lr; // 801B5754
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B5758
  c->r[11]=c->r[1]+0x00000040u; // 801B575C
  c->lr=0x801B5764u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5760
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B5764
  c->r[21]=c->r[3]|c->r[3]; // 801B5768
  c->r[22]=c->r[4]|c->r[4]; // 801B576C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B5770
  if (crb(c,2)) { goto L_801B58A0; } // 801B5774
  c->lr=0x801B577Cu; f_801251B0(c); // 801B5778
  cmps(c,0,(int32_t)c->r[22],0); // 801B577C
  W32(c->r[21]+0x00000000u,c->r[22]); // 801B5780
  c->r[31]=c->r[3]|c->r[3]; // 801B5784
  if (crb(c,2)) { goto L_801B57A8; } // 801B5788
  cmps(c,0,(int32_t)c->r[22],1); // 801B578C
  if (crb(c,2)) { goto L_801B57B4; } // 801B5790
  cmps(c,0,(int32_t)c->r[22],2); // 801B5794
  if (crb(c,2)) { goto L_801B57C0; } // 801B5798
  cmps(c,0,(int32_t)c->r[22],3); // 801B579C
  if (crb(c,2)) { goto L_801B57CC; } // 801B57A0
  goto L_801B57D4; // 801B57A4
L_801B57A8:;
  c->r[3]=0u+0x00000000u; // 801B57A8
  c->lr=0x801B57B0u; f_80150B10(c); // 801B57AC
  goto L_801B57D4; // 801B57B0
L_801B57B4:;
  c->r[3]=0u+0x00000001u; // 801B57B4
  c->lr=0x801B57BCu; f_80150B10(c); // 801B57B8
  goto L_801B57D4; // 801B57BC
L_801B57C0:;
  c->r[3]=0u+0x00000002u; // 801B57C0
  c->lr=0x801B57C8u; f_80150B10(c); // 801B57C4
  goto L_801B57D4; // 801B57C8
L_801B57CC:;
  c->r[3]=0u+0x00000000u; // 801B57CC
  c->lr=0x801B57D4u; f_80150B10(c); // 801B57D0
L_801B57D4:;
  c->lr=0x801B57D8u; f_801E0470(c); // 801B57D4
  c->r[4]=0u+0x00000010u; // 801B57D8
  c->lr=0x801B57E0u; f_801E1030(c); // 801B57DC
  c->r[24]=c->r[21]+0x000000B4u; // 801B57E0
  c->r[23]=0u+0x00000000u; // 801B57E4
  c->r[27]=0u+0x803A0000u; // 801B57E8
  c->r[28]=0u+0x803A0000u; // 801B57EC
  c->r[25]=0u+0x803A0000u; // 801B57F0
  c->r[26]=0u+0x803A0000u; // 801B57F4
L_801B57F8:;
  cmpu(c,0,c->r[23],0x00000002u); // 801B57F8
  c->r[0]=0u+0x00000000u; // 801B57FC
  if (crb(c,1)) { goto L_801B5808; } // 801B5800
  c->r[0]=0u+0x00000001u; // 801B5804
L_801B5808:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B5808
  if (!crb(c,2)) { goto L_801B5830; } // 801B580C
  c->r[6]=c->r[23]|c->r[23]; // 801B5810
  c->r[3]=c->r[25]+0xFFFFBF40u; // 801B5814
  c->r[5]=c->r[26]+0xFFFFBF08u; // 801B5818
  c->r[4]=0u+0x000000ADu; // 801B581C
  c->r[7]=0u+0x00000000u; // 801B5820
  c->r[8]=0u+0x00000003u; // 801B5824
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5828
  c->lr=0x801B5830u; f_80212260(c); // 801B582C
L_801B5830:;
  c->r[30]=R32(c->r[24]+0x00000004u); // 801B5830
  c->r[29]=c->r[24]+0x00000004u; // 801B5834
  goto L_801B5870; // 801B5838
L_801B583C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B583C
  if (!crb(c,2)) { goto L_801B5858; } // 801B5840
  c->r[3]=c->r[27]+0xFFFFBECCu; // 801B5844
  c->r[5]=c->r[28]+0xFFFFBEA8u; // 801B5848
  c->r[4]=0u+0x0000023Du; // 801B584C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5850
  c->lr=0x801B5858u; f_80212260(c); // 801B5854
L_801B5858:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 801B5858
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 801B585C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801B5860
  c->ctr=c->r[12]; // 801B5864
  if (true) { c->lr=0x801B586Cu; dispatch(c,c->ctr); } // 801B5868
  c->r[30]=R32(c->r[30]+0x00000000u); // 801B586C
L_801B5870:;
  cmpu(c,0,c->r[30],c->r[29]); // 801B5870
  if (!crb(c,2)) { IRQCHK(c); goto L_801B583C; } // 801B5874
  c->r[23]=c->r[23]+0x00000001u; // 801B5878
  c->r[24]=c->r[24]+0x0000000Cu; // 801B587C
  cmps(c,0,(int32_t)c->r[23],3); // 801B5880
  if (crb(c,0)) { IRQCHK(c); goto L_801B57F8; } // 801B5884
  cmps(c,0,(int32_t)c->r[22],2); // 801B5888
  if (!crb(c,2)) { goto L_801B5898; } // 801B588C
  c->r[0]=0u+0x00000000u; // 801B5890
  W32(c->r[21]+0x000000FCu,c->r[0]); // 801B5894
L_801B5898:;
  c->r[3]=c->r[31]|c->r[31]; // 801B5898
  c->lr=0x801B58A0u; f_801251F0(c); // 801B589C
L_801B58A0:;
  c->r[11]=c->r[1]+0x00000040u; // 801B58A0
  c->lr=0x801B58A8u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B58A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B58A8
  c->lr=c->r[0]; // 801B58AC
  c->r[1]=c->r[1]+0x00000040u; // 801B58B0
  return; // 801B58B4
}

// fn_801B58C0
void f_801B58C0(Ctx* __restrict c) {
  trace_call(0x801B58C0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B58C0
  return; // 801B58C4
}

// fn_801B58D0
void f_801B58D0(Ctx* __restrict c) {
  trace_call(0x801B58D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B58D0
  c->r[0]=c->lr; // 801B58D4
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B58D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B58DC
  fcmp(c,0,c->f[1],c->f[0]); // 801B58E0
  if (!crb(c,0)) { goto L_801B58EC; } // 801B58E4
  c->f[1]=c->f[0]; // 801B58E8
L_801B58EC:;
  c->r[6]=R32(c->r[3]+0x00000024u); // 801B58EC
  c->r[0]=R32(c->r[3]+0x00000028u); // 801B58F0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801B58F4
  if (crb(c,0)) { goto L_801B5904; } // 801B58F8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B58FC
  goto L_801B594C; // 801B5900
L_801B5904:;
  c->r[5]=0u+0x43300000u; // 801B5904
  c->r[0]=c->r[0]^0x80000000u; // 801B5908
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B590C
  c->r[0]=c->r[6]^0x80000000u; // 801B5910
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[5]=RF64(ea);} // 801B5914
  W32(c->r[1]+0x00000008u,c->r[5]); // 801B5918
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B591C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801B5920
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801B5924
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[5]); // 801B5928
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B592C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801B5930
  W32(c->r[1]+0x00000010u,c->r[5]); // 801B5934
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B5938
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801B593C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 801B5940
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 801B5944
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 801B5948
L_801B594C:;
  c->r[5]=0u+0x55550000u; // 801B594C
  c->r[0]=0u+0x00000000u; // 801B5950
  c->r[6]=c->r[4]+0x00000002u; // 801B5954
  cmps(c,0,(int32_t)c->r[4],0); // 801B5958
  c->r[4]=c->r[5]+0x00005556u; // 801B595C
  W32(c->r[3]+0x00000028u,c->r[0]); // 801B5960
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[6])>>32); // 801B5964
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 801B5968
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801B596C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801B5970
  c->r[0]=c->r[4]+c->r[0]; // 801B5974
  W32(c->r[3]+0x00000024u,c->r[0]); // 801B5978
  if (!crb(c,2)) { goto L_801B598C; } // 801B597C
  c->lr=0x801B5984u; f_801E0470(c); // 801B5980
  c->r[4]=0u+0x00000008u; // 801B5984
  c->lr=0x801B598Cu; f_801E1030(c); // 801B5988
L_801B598C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B598C
  c->lr=c->r[0]; // 801B5990
  c->r[1]=c->r[1]+0x00000020u; // 801B5994
  return; // 801B5998
}

// fn_801B59A0
void f_801B59A0(Ctx* __restrict c) {
  trace_call(0x801B59A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B59A0
  c->r[0]=c->lr; // 801B59A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B59A8
  c->r[11]=c->r[1]+0x00000030u; // 801B59AC
  c->lr=0x801B59B4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B59B0
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B59B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B59B8
  if (!crb(c,2)) { goto L_801B59EC; } // 801B59BC
  c->r[22]=0u+0x805B0000u; // 801B59C0
  c->r[3]=c->r[22]+0xFFFFC510u; // 801B59C4
  c->lr=0x801B59CCu; f_801B4CC0(c); // 801B59C8
  c->r[4]=0u+0x801B0000u; // 801B59CC
  c->r[5]=0u+0x805B0000u; // 801B59D0
  c->r[3]=c->r[22]+0xFFFFC510u; // 801B59D4
  c->r[4]=c->r[4]+0x00004FC0u; // 801B59D8
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B59DC
  c->lr=0x801B59E4u; f_802E6064(c); // 801B59E0
  c->r[0]=0u+0x00000001u; // 801B59E4
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B59E8
L_801B59EC:;
  c->r[22]=0u+0x805B0000u; // 801B59EC
  c->r[27]=0u+0x801B0000u; // 801B59F0
  c->r[23]=c->r[22]+0xFFFFC510u; // 801B59F4
  c->r[28]=0u+0x805B0000u; // 801B59F8
  c->r[31]=R32(c->r[23]+0x0000000Cu); // 801B59FC
  c->r[30]=c->r[23]+0x0000000Cu; // 801B5A00
  c->r[29]=0u+0x00000001u; // 801B5A04
  c->r[25]=0u+0x803A0000u; // 801B5A08
  c->r[26]=0u+0x803A0000u; // 801B5A0C
  goto L_801B5A40; // 801B5A10
L_801B5A14:;
  c->r[24]=c->r[31]|c->r[31]; cr0(c,c->r[24]); // 801B5A14
  c->r[31]=R32(c->r[31]+0x00000000u); // 801B5A18
  if (!crb(c,2)) { goto L_801B5A34; } // 801B5A1C
  c->r[3]=c->r[25]+0xFFFFBE9Cu; // 801B5A20
  c->r[5]=c->r[26]+0xFFFFBE78u; // 801B5A24
  c->r[4]=0u+0x0000023Du; // 801B5A28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5A2C
  c->lr=0x801B5A34u; f_80212260(c); // 801B5A30
L_801B5A34:;
  c->r[12]=R32(c->r[24]+0x00000008u); // 801B5A34
  c->ctr=c->r[12]; // 801B5A38
  if (true) { c->lr=0x801B5A40u; dispatch(c,c->ctr); } // 801B5A3C
L_801B5A40:;
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B5A40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B5A44
  if (!crb(c,2)) { goto L_801B5A68; } // 801B5A48
  c->r[3]=c->r[22]+0xFFFFC510u; // 801B5A4C
  c->lr=0x801B5A54u; f_801B4CC0(c); // 801B5A50
  c->r[3]=c->r[22]+0xFFFFC510u; // 801B5A54
  c->r[4]=c->r[27]+0x00004FC0u; // 801B5A58
  c->r[5]=c->r[28]+0xFFFFC500u; // 801B5A5C
  c->lr=0x801B5A64u; f_802E6064(c); // 801B5A60
  W8(c->r[13]+0xFFFFC40Cu,c->r[29]); // 801B5A64
L_801B5A68:;
  cmpu(c,0,c->r[31],c->r[30]); // 801B5A68
  if (!crb(c,2)) { IRQCHK(c); goto L_801B5A14; } // 801B5A6C
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B5A70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B5A74
  if (!crb(c,2)) { goto L_801B5AA4; } // 801B5A78
  c->r[3]=c->r[23]|c->r[23]; // 801B5A7C
  c->lr=0x801B5A84u; f_801B4CC0(c); // 801B5A80
  c->r[4]=0u+0x801B0000u; // 801B5A84
  c->r[5]=0u+0x805B0000u; // 801B5A88
  c->r[3]=c->r[23]|c->r[23]; // 801B5A8C
  c->r[4]=c->r[4]+0x00004FC0u; // 801B5A90
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B5A94
  c->lr=0x801B5A9Cu; f_802E6064(c); // 801B5A98
  c->r[0]=0u+0x00000001u; // 801B5A9C
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B5AA0
L_801B5AA4:;
  c->r[31]=0u+0x805B0000u; // 801B5AA4
  c->r[31]=c->r[31]+0xFFFFC510u; // 801B5AA8
  c->r[0]=R32(c->r[31]+0x00000014u); // 801B5AAC
  cmps(c,0,(int32_t)c->r[0],0); // 801B5AB0
  if (crb(c,2)) { goto L_801B5B00; } // 801B5AB4
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B5AB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B5ABC
  if (!crb(c,2)) { goto L_801B5AEC; } // 801B5AC0
  c->r[3]=c->r[31]|c->r[31]; // 801B5AC4
  c->lr=0x801B5ACCu; f_801B4CC0(c); // 801B5AC8
  c->r[4]=0u+0x801B0000u; // 801B5ACC
  c->r[5]=0u+0x805B0000u; // 801B5AD0
  c->r[3]=c->r[31]|c->r[31]; // 801B5AD4
  c->r[4]=c->r[4]+0x00004FC0u; // 801B5AD8
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B5ADC
  c->lr=0x801B5AE4u; f_802E6064(c); // 801B5AE0
  c->r[0]=0u+0x00000001u; // 801B5AE4
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B5AE8
L_801B5AEC:;
  c->r[3]=0u+0x805B0000u; // 801B5AEC
  c->r[3]=c->r[3]+0xFFFFC510u; // 801B5AF0
  c->r[12]=R32(c->r[3]+0x00000014u); // 801B5AF4
  c->ctr=c->r[12]; // 801B5AF8
  if (true) { c->lr=0x801B5B00u; dispatch(c,c->ctr); } // 801B5AFC
L_801B5B00:;
  c->r[11]=c->r[1]+0x00000030u; // 801B5B00
  c->lr=0x801B5B08u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5B04
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B5B08
  c->lr=c->r[0]; // 801B5B0C
  c->r[1]=c->r[1]+0x00000030u; // 801B5B10
  return; // 801B5B14
}

// fn_801B5B20
void f_801B5B20(Ctx* __restrict c) {
  trace_call(0x801B5B20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5B20
  c->r[0]=c->lr; // 801B5B24
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B5B28
  c->r[11]=c->r[1]+0x00000040u; // 801B5B2C
  c->lr=0x801B5B34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5B30
  cmps(c,0,(int32_t)c->r[5],0); // 801B5B34
  c->r[29]=c->r[3]|c->r[3]; // 801B5B38
  c->r[30]=c->r[4]|c->r[4]; // 801B5B3C
  c->r[31]=c->r[5]|c->r[5]; // 801B5B40
  if (!crb(c,2)) { goto L_801B5B64; } // 801B5B44
  c->r[3]=0u+0x803A0000u; // 801B5B48
  c->r[5]=0u+0x803A0000u; // 801B5B4C
  c->r[3]=c->r[3]+0xFFFFBDA0u; // 801B5B50
  c->r[4]=0u+0x000001A9u; // 801B5B54
  c->r[5]=c->r[5]+0xFFFFBDE8u; // 801B5B58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5B5C
  c->lr=0x801B5B64u; f_80212260(c); // 801B5B60
L_801B5B64:;
  c->r[27]=rotl(c->r[30],4)&0xFFFFFFF0u; // 801B5B64
  c->r[28]=c->r[29]+c->r[27]; // 801B5B68
  c->r[3]=R32(c->r[28]+0x00000060u); // 801B5B6C
  c->r[0]=R32(c->r[28]+0x0000005Cu); // 801B5B70
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801B5B74
  if (!crb(c,0)) { goto L_801B5B88; } // 801B5B78
  c->r[3]=c->r[29]|c->r[29]; // 801B5B7C
  c->r[4]=c->r[30]|c->r[30]; // 801B5B80
  c->lr=0x801B5B88u; f_801B5F40(c); // 801B5B84
L_801B5B88:;
  c->r[5]=R32(c->r[28]+0x0000005Cu); // 801B5B88
  c->r[0]=R32(c->r[28]+0x00000060u); // 801B5B8C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801B5B90
  if (crb(c,0)) { goto L_801B5BA4; } // 801B5B94
  c->r[3]=c->r[29]+c->r[27]; // 801B5B98
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5B9C
  goto L_801B5BF0; // 801B5BA0
L_801B5BA4:;
  c->r[3]=0u+0x43300000u; // 801B5BA4
  c->r[0]=c->r[0]^0x80000000u; // 801B5BA8
  c->r[4]=c->r[29]+c->r[27]; // 801B5BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5BB0
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B5BB4
  c->r[0]=c->r[5]^0x80000000u; // 801B5BB8
  W32(c->r[1]+0x00000010u,c->r[3]); // 801B5BBC
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5BC0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801B5BC4
  {uint32_t ea=c->r[4]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5BC8
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801B5BCC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B5BD0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801B5BD4
  W32(c->r[1]+0x00000018u,c->r[3]); // 801B5BD8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801B5BDC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B5BE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B5BE4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B5BE8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801B5BEC
L_801B5BF0:;
  c->r[3]=c->r[29]+c->r[27]; // 801B5BF0
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5BF4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 801B5BF8
  cmps(c,0,(int32_t)c->r[30],0); // 801B5BFC
  c->r[0]=0u+0x00000000u; // 801B5C00
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801B5C04
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801B5C08
  W32(c->r[3]+0x00000060u,c->r[0]); // 801B5C0C
  if (crb(c,2)) { goto L_801B5C28; } // 801B5C10
  cmps(c,0,(int32_t)c->r[30],1); // 801B5C14
  if (crb(c,2)) { goto L_801B5C3C; } // 801B5C18
  cmps(c,0,(int32_t)c->r[30],2); // 801B5C1C
  if (crb(c,2)) { goto L_801B5C50; } // 801B5C20
  goto L_801B5C60; // 801B5C24
L_801B5C28:;
  c->r[3]=0u+0x00010000u; // 801B5C28
  c->r[0]=c->r[3]+0xFFFF8000u; // 801B5C2C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B5C30
  c->lr=0x801B5C38u; f_80150B80(c); // 801B5C34
  goto L_801B5C60; // 801B5C38
L_801B5C3C:;
  c->r[3]=0u+0x00010000u; // 801B5C3C
  c->r[0]=c->r[3]+0xFFFF8000u; // 801B5C40
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B5C44
  c->lr=0x801B5C4Cu; f_80150B90(c); // 801B5C48
  goto L_801B5C60; // 801B5C4C
L_801B5C50:;
  c->r[3]=0u+0x00010000u; // 801B5C50
  c->r[0]=c->r[3]+0xFFFF8000u; // 801B5C54
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B5C58
  c->lr=0x801B5C60u; f_80150BA0(c); // 801B5C5C
L_801B5C60:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B5C60
  c->r[3]=c->r[31]|c->r[31]; // 801B5C64
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B5C68
  c->ctr=c->r[12]; // 801B5C6C
  if (true) { c->lr=0x801B5C74u; dispatch(c,c->ctr); } // 801B5C70
  cmps(c,0,(int32_t)c->r[3],0); // 801B5C74
  if (!crb(c,2)) { goto L_801B5C84; } // 801B5C78
  c->r[3]=0u+0x00000000u; // 801B5C7C
  goto L_801B5DC8; // 801B5C80
L_801B5C84:;
  c->lr=0x801B5C88u; f_801251B0(c); // 801B5C84
  cmpu(c,0,c->r[30],0x00000002u); // 801B5C88
  c->r[28]=c->r[3]|c->r[3]; // 801B5C8C
  c->r[0]=0u+0x00000000u; // 801B5C90
  if (crb(c,1)) { goto L_801B5C9C; } // 801B5C94
  c->r[0]=0u+0x00000001u; // 801B5C98
L_801B5C9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B5C9C
  if (!crb(c,2)) { goto L_801B5CCC; } // 801B5CA0
  c->r[3]=0u+0x803A0000u; // 801B5CA4
  c->r[5]=0u+0x803A0000u; // 801B5CA8
  c->r[6]=c->r[30]|c->r[30]; // 801B5CAC
  c->r[4]=0u+0x000000ADu; // 801B5CB0
  c->r[3]=c->r[3]+0xFFFFBF40u; // 801B5CB4
  c->r[5]=c->r[5]+0xFFFFBF08u; // 801B5CB8
  c->r[7]=0u+0x00000000u; // 801B5CBC
  c->r[8]=0u+0x00000003u; // 801B5CC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5CC4
  c->lr=0x801B5CCCu; f_80212260(c); // 801B5CC8
L_801B5CCC:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801B5CCC
  c->r[27]=c->r[29]+c->r[0]; // 801B5CD0
  {uint32_t ea=c->r[27]+0x000000B4u; c->r[0]=R32(ea); c->r[27]=ea;} // 801B5CD4
  cmps(c,0,(int32_t)c->r[0],0); // 801B5CD8
  if (!crb(c,2)) { goto L_801B5D40; } // 801B5CDC
  cmps(c,0,(int32_t)c->r[30],0); // 801B5CE0
  if (crb(c,2)) { goto L_801B5CFC; } // 801B5CE4
  cmps(c,0,(int32_t)c->r[30],1); // 801B5CE8
  if (crb(c,2)) { goto L_801B5D10; } // 801B5CEC
  cmps(c,0,(int32_t)c->r[30],2); // 801B5CF0
  if (crb(c,2)) { goto L_801B5D24; } // 801B5CF4
  goto L_801B5D34; // 801B5CF8
L_801B5CFC:;
  c->r[3]=0u+0x801B0000u; // 801B5CFC
  c->r[4]=c->r[30]|c->r[30]; // 801B5D00
  c->r[3]=c->r[3]+0x000060A0u; // 801B5D04
  c->lr=0x801B5D0Cu; f_8014FF10(c); // 801B5D08
  goto L_801B5D34; // 801B5D0C
L_801B5D10:;
  c->r[3]=0u+0x801B0000u; // 801B5D10
  c->r[4]=c->r[30]|c->r[30]; // 801B5D14
  c->r[3]=c->r[3]+0x000060A0u; // 801B5D18
  c->lr=0x801B5D20u; f_8014FF80(c); // 801B5D1C
  goto L_801B5D34; // 801B5D20
L_801B5D24:;
  c->r[3]=0u+0x801B0000u; // 801B5D24
  c->r[4]=c->r[30]|c->r[30]; // 801B5D28
  c->r[3]=c->r[3]+0x000060A0u; // 801B5D2C
  c->lr=0x801B5D34u; f_8014FFF0(c); // 801B5D30
L_801B5D34:;
  c->r[3]=c->r[29]+c->r[30]; // 801B5D34
  c->r[0]=0u+0x00000002u; // 801B5D38
  W8(c->r[3]+0x000000F0u,c->r[0]); // 801B5D3C
L_801B5D40:;
  cmpu(c,0,c->r[30],0x00000002u); // 801B5D40
  c->r[0]=0u+0x00000000u; // 801B5D44
  if (crb(c,1)) { goto L_801B5D50; } // 801B5D48
  c->r[0]=0u+0x00000001u; // 801B5D4C
L_801B5D50:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B5D50
  if (!crb(c,2)) { goto L_801B5D80; } // 801B5D54
  c->r[3]=0u+0x803A0000u; // 801B5D58
  c->r[5]=0u+0x803A0000u; // 801B5D5C
  c->r[6]=c->r[30]|c->r[30]; // 801B5D60
  c->r[4]=0u+0x000000ADu; // 801B5D64
  c->r[3]=c->r[3]+0xFFFFBF40u; // 801B5D68
  c->r[5]=c->r[5]+0xFFFFBF08u; // 801B5D6C
  c->r[7]=0u+0x00000000u; // 801B5D70
  c->r[8]=0u+0x00000003u; // 801B5D74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5D78
  c->lr=0x801B5D80u; f_80212260(c); // 801B5D7C
L_801B5D80:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B5D80
  c->r[29]=c->r[27]+0x00000004u; // 801B5D84
  if (!crb(c,2)) { goto L_801B5DA8; } // 801B5D88
  c->r[3]=0u+0x803A0000u; // 801B5D8C
  c->r[5]=0u+0x803A0000u; // 801B5D90
  c->r[3]=c->r[3]+0xFFFFBE6Cu; // 801B5D94
  c->r[4]=0u+0x00000233u; // 801B5D98
  c->r[5]=c->r[5]+0xFFFFBE48u; // 801B5D9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5DA0
  c->lr=0x801B5DA8u; f_80212260(c); // 801B5DA4
L_801B5DA8:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801B5DA8
  c->r[3]=c->r[27]|c->r[27]; // 801B5DAC
  c->r[4]=c->r[1]+0x00000008u; // 801B5DB0
  c->r[5]=c->r[31]+0x00000004u; // 801B5DB4
  c->lr=0x801B5DBCu; f_801E44B0(c); // 801B5DB8
  c->r[3]=c->r[28]|c->r[28]; // 801B5DBC
  c->lr=0x801B5DC4u; f_801251F0(c); // 801B5DC0
  c->r[3]=0u+0x00000001u; // 801B5DC4
L_801B5DC8:;
  c->r[11]=c->r[1]+0x00000040u; // 801B5DC8
  c->lr=0x801B5DD0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5DCC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B5DD0
  c->lr=c->r[0]; // 801B5DD4
  c->r[1]=c->r[1]+0x00000040u; // 801B5DD8
  return; // 801B5DDC
}

// fn_801B5DE0
void f_801B5DE0(Ctx* __restrict c) {
  trace_call(0x801B5DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5DE0
  c->r[0]=c->lr; // 801B5DE4
  cmps(c,0,(int32_t)c->r[5],0); // 801B5DE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5DEC
  c->r[0]=0u+0x43300000u; // 801B5DF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5DF4
  c->r[31]=c->r[4]|c->r[4]; // 801B5DF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5DFC
  c->r[30]=c->r[3]|c->r[3]; // 801B5E00
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B5E04
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B5E08
  if (!crb(c,2)) { goto L_801B5E94; } // 801B5E0C
  c->lr=0x801B5E14u; f_801B5F40(c); // 801B5E10
  c->r[5]=rotl(c->r[31],4)&0xFFFFFFF0u; // 801B5E14
  c->r[3]=c->r[30]+c->r[5]; // 801B5E18
  c->r[4]=R32(c->r[3]+0x0000005Cu); // 801B5E1C
  c->r[0]=R32(c->r[3]+0x00000060u); // 801B5E20
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B5E24
  if (!crb(c,0)) { goto L_801B5F24; } // 801B5E28
  if (crb(c,0)) { goto L_801B5E38; } // 801B5E2C
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5E30
  goto L_801B5E74; // 801B5E34
L_801B5E38:;
  c->r[0]=c->r[0]^0x80000000u; // 801B5E38
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B5E3C
  c->r[0]=c->r[4]^0x80000000u; // 801B5E40
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B5E44
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B5E48
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5E4C
  {uint32_t ea=c->r[3]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5E50
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801B5E54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5E58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801B5E5C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B5E60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B5E64
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B5E68
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B5E6C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801B5E70
L_801B5E74:;
  c->r[3]=c->r[30]+c->r[5]; // 801B5E74
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5E78
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 801B5E7C
  c->r[0]=0u+0x00000000u; // 801B5E80
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801B5E84
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801B5E88
  W32(c->r[3]+0x00000060u,c->r[0]); // 801B5E8C
  goto L_801B5F24; // 801B5E90
L_801B5E94:;
  c->r[7]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801B5E94
  c->r[4]=c->r[3]+c->r[7]; // 801B5E98
  c->r[6]=R32(c->r[4]+0x0000005Cu); // 801B5E9C
  c->r[0]=R32(c->r[4]+0x00000060u); // 801B5EA0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 801B5EA4
  if (crb(c,0)) { goto L_801B5EB4; } // 801B5EA8
  {uint32_t ea=c->r[4]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5EAC
  goto L_801B5EF0; // 801B5EB0
L_801B5EB4:;
  c->r[0]=c->r[0]^0x80000000u; // 801B5EB4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B5EB8
  c->r[0]=c->r[6]^0x80000000u; // 801B5EBC
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B5EC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B5EC4
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B5EC8
  {uint32_t ea=c->r[4]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B5ECC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801B5ED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B5ED4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801B5ED8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B5EDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B5EE0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B5EE4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B5EE8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801B5EEC
L_801B5EF0:;
  c->r[4]=0u+0x55550000u; // 801B5EF0
  c->r[6]=c->r[3]+c->r[7]; // 801B5EF4
  c->r[0]=c->r[5]+0x00000002u; // 801B5EF8
  {uint32_t ea=c->r[6]+0x00000054u; WF32(ea,c->f[0]);} // 801B5EFC
  c->r[3]=c->r[4]+0x00005556u; // 801B5F00
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B5F04
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B5F08
  {uint32_t ea=c->r[6]+0x00000058u; WF32(ea,c->f[0]);} // 801B5F0C
  c->r[0]=0u+0x00000000u; // 801B5F10
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801B5F14
  c->r[3]=c->r[4]+c->r[3]; // 801B5F18
  W32(c->r[6]+0x0000005Cu,c->r[3]); // 801B5F1C
  W32(c->r[6]+0x00000060u,c->r[0]); // 801B5F20
L_801B5F24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5F24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5F28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B5F2C
  c->lr=c->r[0]; // 801B5F30
  c->r[1]=c->r[1]+0x00000020u; // 801B5F34
  return; // 801B5F38
}

// fn_801B5F40
void f_801B5F40(Ctx* __restrict c) {
  trace_call(0x801B5F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5F40
  c->r[0]=c->lr; // 801B5F44
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5F48
  c->r[11]=c->r[1]+0x00000030u; // 801B5F4C
  c->lr=0x801B5F54u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5F50
  c->r[24]=c->r[3]|c->r[3]; // 801B5F54
  c->r[25]=c->r[4]|c->r[4]; // 801B5F58
  c->lr=0x801B5F60u; f_801251B0(c); // 801B5F5C
  cmpu(c,0,c->r[25],0x00000002u); // 801B5F60
  c->r[31]=c->r[3]|c->r[3]; // 801B5F64
  c->r[0]=0u+0x00000000u; // 801B5F68
  if (crb(c,1)) { goto L_801B5F74; } // 801B5F6C
  c->r[0]=0u+0x00000001u; // 801B5F70
L_801B5F74:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B5F74
  if (!crb(c,2)) { goto L_801B5FA4; } // 801B5F78
  c->r[3]=0u+0x803A0000u; // 801B5F7C
  c->r[5]=0u+0x803A0000u; // 801B5F80
  c->r[6]=c->r[25]|c->r[25]; // 801B5F84
  c->r[4]=0u+0x000000ADu; // 801B5F88
  c->r[3]=c->r[3]+0xFFFFBF40u; // 801B5F8C
  c->r[5]=c->r[5]+0xFFFFBF08u; // 801B5F90
  c->r[7]=0u+0x00000000u; // 801B5F94
  c->r[8]=0u+0x00000003u; // 801B5F98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5F9C
  c->lr=0x801B5FA4u; f_80212260(c); // 801B5FA0
L_801B5FA4:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)12); // 801B5FA4
  c->r[26]=c->r[24]+c->r[0]; // 801B5FA8
  {uint32_t ea=c->r[26]+0x000000B4u; c->r[0]=R32(ea); c->r[26]=ea;} // 801B5FAC
  cmps(c,0,(int32_t)c->r[0],0); // 801B5FB0
  if (!crb(c,2)) { goto L_801B5FC4; } // 801B5FB4
  c->r[3]=c->r[31]|c->r[31]; // 801B5FB8
  c->lr=0x801B5FC0u; f_801251F0(c); // 801B5FBC
  goto L_801B6084; // 801B5FC0
L_801B5FC4:;
  c->r[30]=R32(c->r[26]+0x00000004u); // 801B5FC4
  c->r[29]=c->r[26]+0x00000004u; // 801B5FC8
  c->r[27]=0u+0x803A0000u; // 801B5FCC
  c->r[28]=0u+0x803A0000u; // 801B5FD0
  goto L_801B600C; // 801B5FD4
L_801B5FD8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B5FD8
  if (!crb(c,2)) { goto L_801B5FF4; } // 801B5FDC
  c->r[3]=c->r[27]+0xFFFFBECCu; // 801B5FE0
  c->r[5]=c->r[28]+0xFFFFBEA8u; // 801B5FE4
  c->r[4]=0u+0x0000023Du; // 801B5FE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B5FEC
  c->lr=0x801B5FF4u; f_80212260(c); // 801B5FF0
L_801B5FF4:;
  c->r[12]=R32(c->r[30]+0xFFFFFFFCu); // 801B5FF4
  c->r[3]=c->r[30]+0xFFFFFFFCu; // 801B5FF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801B5FFC
  c->ctr=c->r[12]; // 801B6000
  if (true) { c->lr=0x801B6008u; dispatch(c,c->ctr); } // 801B6004
  c->r[30]=R32(c->r[30]+0x00000000u); // 801B6008
L_801B600C:;
  cmpu(c,0,c->r[30],c->r[29]); // 801B600C
  if (!crb(c,2)) { IRQCHK(c); goto L_801B5FD8; } // 801B6010
  c->r[3]=c->r[26]|c->r[26]; // 801B6014
  c->lr=0x801B601Cu; f_801E43A0(c); // 801B6018
  cmps(c,0,(int32_t)c->r[25],0); // 801B601C
  if (crb(c,2)) { goto L_801B6038; } // 801B6020
  cmps(c,0,(int32_t)c->r[25],1); // 801B6024
  if (crb(c,2)) { goto L_801B6050; } // 801B6028
  cmps(c,0,(int32_t)c->r[25],2); // 801B602C
  if (crb(c,2)) { goto L_801B6068; } // 801B6030
  goto L_801B607C; // 801B6034
L_801B6038:;
  c->r[3]=0u+0x00000000u; // 801B6038
  c->r[4]=0u+0x00000000u; // 801B603C
  c->lr=0x801B6044u; f_8014FF10(c); // 801B6040
  c->r[0]=0u+0x00000000u; // 801B6044
  W32(c->r[24]+0x000000F4u,c->r[0]); // 801B6048
  goto L_801B607C; // 801B604C
L_801B6050:;
  c->r[3]=0u+0x00000000u; // 801B6050
  c->r[4]=0u+0x00000000u; // 801B6054
  c->lr=0x801B605Cu; f_8014FF80(c); // 801B6058
  c->r[0]=0u+0x00000000u; // 801B605C
  W32(c->r[24]+0x000000F8u,c->r[0]); // 801B6060
  goto L_801B607C; // 801B6064
L_801B6068:;
  c->r[3]=0u+0x00000000u; // 801B6068
  c->r[4]=0u+0x00000000u; // 801B606C
  c->lr=0x801B6074u; f_8014FFF0(c); // 801B6070
  c->r[0]=0u+0x00000000u; // 801B6074
  W32(c->r[24]+0x000000FCu,c->r[0]); // 801B6078
L_801B607C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B607C
  c->lr=0x801B6084u; f_801251F0(c); // 801B6080
L_801B6084:;
  c->r[11]=c->r[1]+0x00000030u; // 801B6084
  c->lr=0x801B608Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6088
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B608C
  c->lr=c->r[0]; // 801B6090
  c->r[1]=c->r[1]+0x00000030u; // 801B6094
  return; // 801B6098
}

// fn_801B60A0
void f_801B60A0(Ctx* __restrict c) {
  trace_call(0x801B60A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B60A0
  c->r[0]=c->lr; // 801B60A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B60A8
  c->r[11]=c->r[1]+0x00000050u; // 801B60AC
  c->lr=0x801B60B4u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B60B0
  cmpu(c,0,c->r[4],0x00000002u); // 801B60B4
  c->r[18]=c->r[3]|c->r[3]; // 801B60B8
  c->r[30]=c->r[4]|c->r[4]; // 801B60BC
  c->r[0]=0u+0x00000000u; // 801B60C0
  if (crb(c,1)) { goto L_801B60CC; } // 801B60C4
  c->r[0]=0u+0x00000001u; // 801B60C8
L_801B60CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B60CC
  if (!crb(c,2)) { goto L_801B60FC; } // 801B60D0
  c->r[3]=0u+0x803A0000u; // 801B60D4
  c->r[5]=0u+0x803A0000u; // 801B60D8
  c->r[6]=c->r[30]|c->r[30]; // 801B60DC
  c->r[4]=0u+0x0000022Eu; // 801B60E0
  c->r[3]=c->r[3]+0xFFFFBDA0u; // 801B60E4
  c->r[5]=c->r[5]+0xFFFFBE10u; // 801B60E8
  c->r[7]=0u+0x00000000u; // 801B60EC
  c->r[8]=0u+0x00000003u; // 801B60F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B60F4
  c->lr=0x801B60FCu; f_80212260(c); // 801B60F8
L_801B60FC:;
  c->lr=0x801B6100u; f_8012AB90(c); // 801B60FC
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B6100
  c->r[31]=c->r[3]|c->r[3]; // 801B6104
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B6108
  if (!crb(c,2)) { goto L_801B613C; } // 801B610C
  c->r[19]=0u+0x805B0000u; // 801B6110
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B6114
  c->lr=0x801B611Cu; f_801B4CC0(c); // 801B6118
  c->r[4]=0u+0x801B0000u; // 801B611C
  c->r[5]=0u+0x805B0000u; // 801B6120
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B6124
  c->r[4]=c->r[4]+0x00004FC0u; // 801B6128
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B612C
  c->lr=0x801B6134u; f_802E6064(c); // 801B6130
  c->r[0]=0u+0x00000001u; // 801B6134
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B6138
L_801B613C:;
  c->r[3]=0u+0x805B0000u; // 801B613C
  c->r[0]=R32(c->r[3]+0xFFFFC510u); // 801B6140
  cmps(c,0,(int32_t)c->r[0],2); // 801B6144
  if (!crb(c,2)) { goto L_801B6174; } // 801B6148
  c->r[0]=R32(c->r[18]+0x00000000u); // 801B614C
  c->r[29]=0u+0x00000004u; // 801B6150
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B6154
  c->r[0]=R32(c->r[18]+0x00000004u); // 801B6158
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B615C
  c->r[0]=R32(c->r[18]+0x00000008u); // 801B6160
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B6164
  c->r[0]=R32(c->r[18]+0x0000000Cu); // 801B6168
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B616C
  goto L_801B6190; // 801B6170
L_801B6174:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801B6174
  c->r[29]=0u+0x00000003u; // 801B6178
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B617C
  c->r[0]=R32(c->r[18]+0x00000004u); // 801B6180
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B6184
  c->r[0]=R32(c->r[18]+0x00000008u); // 801B6188
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B618C
L_801B6190:;
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B6190
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B6194
  if (!crb(c,2)) { goto L_801B61C8; } // 801B6198
  c->r[19]=0u+0x805B0000u; // 801B619C
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B61A0
  c->lr=0x801B61A8u; f_801B4CC0(c); // 801B61A4
  c->r[4]=0u+0x801B0000u; // 801B61A8
  c->r[5]=0u+0x805B0000u; // 801B61AC
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B61B0
  c->r[4]=c->r[4]+0x00004FC0u; // 801B61B4
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B61B8
  c->lr=0x801B61C0u; f_802E6064(c); // 801B61BC
  c->r[0]=0u+0x00000001u; // 801B61C0
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B61C4
L_801B61C8:;
  c->r[20]=0u+0x805B0000u; // 801B61C8
  c->r[20]=c->r[20]+0xFFFFC510u; // 801B61CC
  c->r[19]=c->r[20]+c->r[30]; // 801B61D0
  c->r[0]=R8(c->r[19]+0x000000F0u); // 801B61D4
  cmps(c,0,(int32_t)c->r[0],0); // 801B61D8
  if (crb(c,2)) { goto L_801B62A4; } // 801B61DC
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B61E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B61E4
  if (!crb(c,2)) { goto L_801B6214; } // 801B61E8
  c->r[3]=c->r[20]|c->r[20]; // 801B61EC
  c->lr=0x801B61F4u; f_801B4CC0(c); // 801B61F0
  c->r[4]=0u+0x801B0000u; // 801B61F4
  c->r[5]=0u+0x805B0000u; // 801B61F8
  c->r[3]=c->r[20]|c->r[20]; // 801B61FC
  c->r[4]=c->r[4]+0x00004FC0u; // 801B6200
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B6204
  c->lr=0x801B620Cu; f_802E6064(c); // 801B6208
  c->r[0]=0u+0x00000001u; // 801B620C
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B6210
L_801B6214:;
  c->r[3]=R8(c->r[19]+0x000000F0u); // 801B6214
  c->r[18]=c->r[1]+0x00000008u; // 801B6218
  c->r[20]=0u+0x00000000u; // 801B621C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B6220
  W8(c->r[19]+0x000000F0u,c->r[0]); // 801B6224
  goto L_801B6244; // 801B6228
L_801B622C:;
  c->r[3]=R32(c->r[18]+0x00000000u); // 801B622C
  c->r[4]=0u+0x00000000u; // 801B6230
  c->r[5]=0u+0x00000180u; // 801B6234
  c->lr=0x801B623Cu; f_80004714(c); // 801B6238
  c->r[18]=c->r[18]+0x00000004u; // 801B623C
  c->r[20]=c->r[20]+0x00000001u; // 801B6240
L_801B6244:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[29]); // 801B6244
  if (crb(c,0)) { IRQCHK(c); goto L_801B622C; } // 801B6248
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B624C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B6250
  if (!crb(c,2)) { goto L_801B6284; } // 801B6254
  c->r[19]=0u+0x805B0000u; // 801B6258
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B625C
  c->lr=0x801B6264u; f_801B4CC0(c); // 801B6260
  c->r[4]=0u+0x801B0000u; // 801B6264
  c->r[5]=0u+0x805B0000u; // 801B6268
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B626C
  c->r[4]=c->r[4]+0x00004FC0u; // 801B6270
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B6274
  c->lr=0x801B627Cu; f_802E6064(c); // 801B6278
  c->r[0]=0u+0x00000001u; // 801B627C
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B6280
L_801B6284:;
  c->lr=0x801B6288u; f_8012AB90(c); // 801B6284
  c->r[4]=0u+0x805B0000u; // 801B6288
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801B628C
  c->r[4]=c->r[4]+0xFFFFC510u; // 801B6290
  c->r[5]=c->r[3]-c->r[31]; // 801B6294
  c->r[3]=c->r[4]+c->r[0]; // 801B6298
  W32(c->r[3]+0x000000F4u,c->r[5]); // 801B629C
  goto L_801B65A4; // 801B62A0
L_801B62A4:;
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B62A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B62A8
  if (!crb(c,2)) { goto L_801B62D8; } // 801B62AC
  c->r[3]=c->r[20]|c->r[20]; // 801B62B0
  c->lr=0x801B62B8u; f_801B4CC0(c); // 801B62B4
  c->r[4]=0u+0x801B0000u; // 801B62B8
  c->r[5]=0u+0x805B0000u; // 801B62BC
  c->r[3]=c->r[20]|c->r[20]; // 801B62C0
  c->r[4]=c->r[4]+0x00004FC0u; // 801B62C4
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B62C8
  c->lr=0x801B62D0u; f_802E6064(c); // 801B62CC
  c->r[0]=0u+0x00000001u; // 801B62D0
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B62D4
L_801B62D8:;
  cmpu(c,0,c->r[30],0x00000002u); // 801B62D8
  c->r[19]=0u+0x805B0000u; // 801B62DC
  c->r[19]=c->r[19]+0xFFFFC510u; // 801B62E0
  c->r[0]=0u+0x00000000u; // 801B62E4
  if (crb(c,1)) { goto L_801B62F0; } // 801B62E8
  c->r[0]=0u+0x00000001u; // 801B62EC
L_801B62F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B62F0
  if (!crb(c,2)) { goto L_801B6320; } // 801B62F4
  c->r[3]=0u+0x803A0000u; // 801B62F8
  c->r[5]=0u+0x803A0000u; // 801B62FC
  c->r[6]=c->r[30]|c->r[30]; // 801B6300
  c->r[4]=0u+0x000000ADu; // 801B6304
  c->r[3]=c->r[3]+0xFFFFBF40u; // 801B6308
  c->r[5]=c->r[5]+0xFFFFBF08u; // 801B630C
  c->r[7]=0u+0x00000000u; // 801B6310
  c->r[8]=0u+0x00000003u; // 801B6314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6318
  c->lr=0x801B6320u; f_80212260(c); // 801B631C
L_801B6320:;
  c->r[18]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 801B6320
  c->r[3]=c->r[19]+c->r[18]; // 801B6324
  c->r[0]=R32(c->r[3]+0x000000B4u); // 801B6328
  cmps(c,0,(int32_t)c->r[0],0); // 801B632C
  if (!crb(c,2)) { goto L_801B63B8; } // 801B6330
  c->r[18]=c->r[1]+0x00000008u; // 801B6334
  c->r[19]=0u+0x00000000u; // 801B6338
  goto L_801B6358; // 801B633C
L_801B6340:;
  c->r[3]=R32(c->r[18]+0x00000000u); // 801B6340
  c->r[4]=0u+0x00000000u; // 801B6344
  c->r[5]=0u+0x00000180u; // 801B6348
  c->lr=0x801B6350u; f_80004714(c); // 801B634C
  c->r[18]=c->r[18]+0x00000004u; // 801B6350
  c->r[19]=c->r[19]+0x00000001u; // 801B6354
L_801B6358:;
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[29]); // 801B6358
  if (crb(c,0)) { IRQCHK(c); goto L_801B6340; } // 801B635C
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B6360
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B6364
  if (!crb(c,2)) { goto L_801B6398; } // 801B6368
  c->r[19]=0u+0x805B0000u; // 801B636C
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B6370
  c->lr=0x801B6378u; f_801B4CC0(c); // 801B6374
  c->r[4]=0u+0x801B0000u; // 801B6378
  c->r[5]=0u+0x805B0000u; // 801B637C
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B6380
  c->r[4]=c->r[4]+0x00004FC0u; // 801B6384
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B6388
  c->lr=0x801B6390u; f_802E6064(c); // 801B638C
  c->r[0]=0u+0x00000001u; // 801B6390
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B6394
L_801B6398:;
  c->lr=0x801B639Cu; f_8012AB90(c); // 801B6398
  c->r[4]=0u+0x805B0000u; // 801B639C
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801B63A0
  c->r[4]=c->r[4]+0xFFFFC510u; // 801B63A4
  c->r[5]=c->r[3]-c->r[31]; // 801B63A8
  c->r[3]=c->r[4]+c->r[0]; // 801B63AC
  W32(c->r[3]+0x000000F4u,c->r[5]); // 801B63B0
  goto L_801B65A4; // 801B63B4
L_801B63B8:;
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B63B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B63BC
  if (!crb(c,2)) { goto L_801B63F0; } // 801B63C0
  c->r[19]=0u+0x805B0000u; // 801B63C4
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B63C8
  c->lr=0x801B63D0u; f_801B4CC0(c); // 801B63CC
  c->r[4]=0u+0x801B0000u; // 801B63D0
  c->r[5]=0u+0x805B0000u; // 801B63D4
  c->r[3]=c->r[19]+0xFFFFC510u; // 801B63D8
  c->r[4]=c->r[4]+0x00004FC0u; // 801B63DC
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B63E0
  c->lr=0x801B63E8u; f_802E6064(c); // 801B63E4
  c->r[0]=0u+0x00000001u; // 801B63E8
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B63EC
L_801B63F0:;
  cmpu(c,0,c->r[30],0x00000002u); // 801B63F0
  c->r[19]=0u+0x805B0000u; // 801B63F4
  c->r[19]=c->r[19]+0xFFFFC510u; // 801B63F8
  c->r[0]=0u+0x00000000u; // 801B63FC
  if (crb(c,1)) { goto L_801B6408; } // 801B6400
  c->r[0]=0u+0x00000001u; // 801B6404
L_801B6408:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B6408
  if (!crb(c,2)) { goto L_801B6438; } // 801B640C
  c->r[3]=0u+0x803A0000u; // 801B6410
  c->r[5]=0u+0x803A0000u; // 801B6414
  c->r[6]=c->r[30]|c->r[30]; // 801B6418
  c->r[4]=0u+0x000000ADu; // 801B641C
  c->r[3]=c->r[3]+0xFFFFBF40u; // 801B6420
  c->r[5]=c->r[5]+0xFFFFBF08u; // 801B6424
  c->r[7]=0u+0x00000000u; // 801B6428
  c->r[8]=0u+0x00000003u; // 801B642C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6430
  c->lr=0x801B6438u; f_80212260(c); // 801B6434
L_801B6438:;
  c->r[21]=0u+0x805B0000u; // 801B6438
  c->r[3]=c->r[19]+c->r[18]; // 801B643C
  c->r[0]=c->r[21]+0xFFFFC510u; // 801B6440
  c->r[28]=R32(c->r[3]+0x000000B8u); // 801B6444
  c->r[3]=c->r[0]+c->r[18]; // 801B6448
  c->r[22]=0u+0x801B0000u; // 801B644C
  c->r[27]=c->r[3]+0x000000B8u; // 801B6450
  c->r[23]=0u+0x805B0000u; // 801B6454
  c->r[24]=0u+0x00000001u; // 801B6458
  c->r[25]=0u+0x803A0000u; // 801B645C
  c->r[26]=0u+0x803A0000u; // 801B6460
  c->r[19]=0u+0x803A0000u; // 801B6464
  c->r[20]=0u+0x803A0000u; // 801B6468
  goto L_801B64E8; // 801B646C
L_801B6470:;
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B6470
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B6474
  if (!crb(c,2)) { goto L_801B6498; } // 801B6478
  c->r[3]=c->r[21]+0xFFFFC510u; // 801B647C
  c->lr=0x801B6484u; f_801B4CC0(c); // 801B6480
  c->r[3]=c->r[21]+0xFFFFC510u; // 801B6484
  c->r[4]=c->r[22]+0x00004FC0u; // 801B6488
  c->r[5]=c->r[23]+0xFFFFC500u; // 801B648C
  c->lr=0x801B6494u; f_802E6064(c); // 801B6490
  W8(c->r[13]+0xFFFFC40Cu,c->r[24]); // 801B6494
L_801B6498:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B6498
  c->r[18]=R32(c->r[21]+0xFFFFC510u); // 801B649C
  if (!crb(c,2)) { goto L_801B64B8; } // 801B64A0
  c->r[3]=c->r[19]+0xFFFFBECCu; // 801B64A4
  c->r[5]=c->r[20]+0xFFFFBEA8u; // 801B64A8
  c->r[4]=0u+0x0000023Du; // 801B64AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B64B0
  c->lr=0x801B64B8u; f_80212260(c); // 801B64B4
L_801B64B8:;
  c->r[12]=R32(c->r[28]+0xFFFFFFFCu); // 801B64B8
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 801B64BC
  c->r[4]=c->r[29]|c->r[29]; // 801B64C0
  c->r[8]=c->r[18]|c->r[18]; // 801B64C4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801B64C8
  c->r[5]=c->r[1]+0x00000008u; // 801B64CC
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B64D0
  c->r[6]=0u+0x00000180u; // 801B64D4
  c->r[7]=0u+0x00000000u; // 801B64D8
  c->ctr=c->r[12]; // 801B64DC
  if (true) { c->lr=0x801B64E4u; dispatch(c,c->ctr); } // 801B64E0
  c->r[28]=R32(c->r[28]+0x00000000u); // 801B64E4
L_801B64E8:;
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B64E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B64EC
  if (!crb(c,2)) { goto L_801B6510; } // 801B64F0
  c->r[3]=c->r[21]+0xFFFFC510u; // 801B64F4
  c->lr=0x801B64FCu; f_801B4CC0(c); // 801B64F8
  c->r[3]=c->r[21]+0xFFFFC510u; // 801B64FC
  c->r[4]=c->r[22]+0x00004FC0u; // 801B6500
  c->r[5]=c->r[23]+0xFFFFC500u; // 801B6504
  c->lr=0x801B650Cu; f_802E6064(c); // 801B6508
  W8(c->r[13]+0xFFFFC40Cu,c->r[24]); // 801B650C
L_801B6510:;
  cmpu(c,0,c->r[30],0x00000002u); // 801B6510
  c->r[0]=0u+0x00000000u; // 801B6514
  if (crb(c,1)) { goto L_801B6520; } // 801B6518
  c->r[0]=0u+0x00000001u; // 801B651C
L_801B6520:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B6520
  if (!crb(c,2)) { goto L_801B6548; } // 801B6524
  c->r[6]=c->r[30]|c->r[30]; // 801B6528
  c->r[3]=c->r[25]+0xFFFFBF40u; // 801B652C
  c->r[5]=c->r[26]+0xFFFFBF08u; // 801B6530
  c->r[4]=0u+0x000000ADu; // 801B6534
  c->r[7]=0u+0x00000000u; // 801B6538
  c->r[8]=0u+0x00000003u; // 801B653C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6540
  c->lr=0x801B6548u; f_80212260(c); // 801B6544
L_801B6548:;
  cmpu(c,0,c->r[28],c->r[27]); // 801B6548
  if (!crb(c,2)) { IRQCHK(c); goto L_801B6470; } // 801B654C
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B6550
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B6554
  if (!crb(c,2)) { goto L_801B6588; } // 801B6558
  c->r[28]=0u+0x805B0000u; // 801B655C
  c->r[3]=c->r[28]+0xFFFFC510u; // 801B6560
  c->lr=0x801B6568u; f_801B4CC0(c); // 801B6564
  c->r[4]=0u+0x801B0000u; // 801B6568
  c->r[5]=0u+0x805B0000u; // 801B656C
  c->r[3]=c->r[28]+0xFFFFC510u; // 801B6570
  c->r[4]=c->r[4]+0x00004FC0u; // 801B6574
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B6578
  c->lr=0x801B6580u; f_802E6064(c); // 801B657C
  c->r[0]=0u+0x00000001u; // 801B6580
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B6584
L_801B6588:;
  c->lr=0x801B658Cu; f_8012AB90(c); // 801B6588
  c->r[4]=0u+0x805B0000u; // 801B658C
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801B6590
  c->r[4]=c->r[4]+0xFFFFC510u; // 801B6594
  c->r[5]=c->r[3]-c->r[31]; // 801B6598
  c->r[3]=c->r[4]+c->r[0]; // 801B659C
  W32(c->r[3]+0x000000F4u,c->r[5]); // 801B65A0
L_801B65A4:;
  c->r[11]=c->r[1]+0x00000050u; // 801B65A4
  c->lr=0x801B65ACu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B65A8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B65AC
  c->lr=c->r[0]; // 801B65B0
  c->r[1]=c->r[1]+0x00000050u; // 801B65B4
  return; // 801B65B8
}

// PrepareReset__Q44nw4r3snd6detail9AxManagerFv
void f_801B65C0(Ctx* __restrict c) {
  trace_call(0x801B65C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B65C0
  c->r[0]=c->lr; // 801B65C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B65C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B65CC
  c->r[31]=c->r[3]|c->r[3]; // 801B65D0
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 801B65D4
  cmps(c,0,(int32_t)c->r[0],0); // 801B65D8
  if (!crb(c,2)) { goto L_801B6674; } // 801B65DC
  c->r[5]=R32(c->r[3]+0x00000044u); // 801B65E0
  c->r[0]=R32(c->r[3]+0x00000048u); // 801B65E4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801B65E8
  if (crb(c,0)) { goto L_801B65F8; } // 801B65EC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B65F0
  goto L_801B6640; // 801B65F4
L_801B65F8:;
  c->r[4]=0u+0x43300000u; // 801B65F8
  c->r[0]=c->r[0]^0x80000000u; // 801B65FC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B6600
  c->r[0]=c->r[5]^0x80000000u; // 801B6604
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B6608
  W32(c->r[1]+0x00000008u,c->r[4]); // 801B660C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6610
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801B6614
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6618
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801B661C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6620
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801B6624
  W32(c->r[1]+0x00000010u,c->r[4]); // 801B6628
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B662C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B6630
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B6634
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B6638
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801B663C
L_801B6640:;
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6640
  c->r[6]=0u+0x00000003u; // 801B6644
  c->r[5]=0u+0x00000000u; // 801B6648
  c->r[0]=0u+0xFFFFFFFFu; // 801B664C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801B6650
  c->r[4]=0u+0x801B0000u; // 801B6654
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801B6658
  W32(c->r[3]+0x00000044u,c->r[6]); // 801B665C
  W32(c->r[3]+0x00000048u,c->r[5]); // 801B6660
  W32(c->r[3]+0x00000050u,c->r[0]); // 801B6664
  c->r[3]=c->r[4]+0x00006690u; // 801B6668
  c->lr=0x801B6670u; f_8013D570(c); // 801B666C
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801B6670
L_801B6674:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6674
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6678
  c->lr=c->r[0]; // 801B667C
  c->r[1]=c->r[1]+0x00000020u; // 801B6680
  return; // 801B6684
}

// AiDmaCallbackFunc__Q44nw4r3snd6detail9AxManagerFv
void f_801B6690(Ctx* __restrict c) {
  trace_call(0x801B6690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6690
  c->r[0]=c->lr; // 801B6694
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B669C
  c->r[0]=R8(c->r[13]+0xFFFFC40Cu); // 801B66A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B66A4
  if (!crb(c,2)) { goto L_801B66D8; } // 801B66A8
  c->r[31]=0u+0x805B0000u; // 801B66AC
  c->r[3]=c->r[31]+0xFFFFC510u; // 801B66B0
  c->lr=0x801B66B8u; f_801B4CC0(c); // 801B66B4
  c->r[4]=0u+0x801B0000u; // 801B66B8
  c->r[5]=0u+0x805B0000u; // 801B66BC
  c->r[3]=c->r[31]+0xFFFFC510u; // 801B66C0
  c->r[4]=c->r[4]+0x00004FC0u; // 801B66C4
  c->r[5]=c->r[5]+0xFFFFC500u; // 801B66C8
  c->lr=0x801B66D0u; f_802E6064(c); // 801B66CC
  c->r[0]=0u+0x00000001u; // 801B66D0
  W8(c->r[13]+0xFFFFC40Cu,c->r[0]); // 801B66D4
L_801B66D8:;
  c->r[31]=0u+0x805B0000u; // 801B66D8
  c->r[31]=c->r[31]+0xFFFFC510u; // 801B66DC
  c->r[12]=R32(c->r[31]+0x0000004Cu); // 801B66E0
  c->ctr=c->r[12]; // 801B66E4
  if (true) { c->lr=0x801B66ECu; dispatch(c,c->ctr); } // 801B66E8
  c->r[0]=R8(c->r[13]+0xFFFFC40Du); // 801B66EC
  cmps(c,0,(int32_t)c->r[0],0); // 801B66F0
  if (crb(c,2)) { goto L_801B6718; } // 801B66F4
  c->r[0]=R32(c->r[31]+0x00000050u); // 801B66F8
  cmps(c,0,(int32_t)c->r[0],0); // 801B66FC
  if (!crb(c,0)) { goto L_801B678C; } // 801B6700
  c->r[3]=0u+0x00000000u; // 801B6704
  c->lr=0x801B670Cu; f_801525C0(c); // 801B6708
  c->r[0]=0u+0x00000006u; // 801B670C
  W32(c->r[31]+0x00000050u,c->r[0]); // 801B6710
  goto L_801B678C; // 801B6714
L_801B6718:;
  c->r[4]=R32(c->r[31]+0x00000044u); // 801B6718
  c->r[0]=R32(c->r[31]+0x00000048u); // 801B671C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B6720
  if (crb(c,0)) { goto L_801B6730; } // 801B6724
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B6728
  goto L_801B6778; // 801B672C
L_801B6730:;
  c->r[3]=0u+0x43300000u; // 801B6730
  c->r[0]=c->r[0]^0x80000000u; // 801B6734
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B6738
  c->r[0]=c->r[4]^0x80000000u; // 801B673C
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[4]=RF64(ea);} // 801B6740
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B6744
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6748
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801B674C
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801B6750
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801B6754
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6758
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801B675C
  W32(c->r[1]+0x00000010u,c->r[3]); // 801B6760
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B6764
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801B6768
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B676C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B6770
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801B6774
L_801B6778:;
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B6778
  fcmp(c,0,c->f[0],c->f[1]); // 801B677C
  if (!crb(c,2)) { goto L_801B678C; } // 801B6780
  c->r[0]=0u+0x00000001u; // 801B6784
  W8(c->r[13]+0xFFFFC40Du,c->r[0]); // 801B6788
L_801B678C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 801B678C
  cmps(c,0,(int32_t)c->r[0],0); // 801B6790
  if (!crb(c,1)) { goto L_801B67A4; } // 801B6794
  c->r[3]=R32(c->r[31]+0x00000050u); // 801B6798
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B679C
  W32(c->r[31]+0x00000050u,c->r[0]); // 801B67A0
L_801B67A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B67A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B67A8
  c->lr=c->r[0]; // 801B67AC
  c->r[1]=c->r[1]+0x00000020u; // 801B67B0
  return; // 801B67B4
}

// fn_801B67C0
void f_801B67C0(Ctx* __restrict c) {
  trace_call(0x801B67C0u);
  c->r[7]=0u+0x803A0000u; // 801B67C0
  c->r[6]=0u+0x803A0000u; // 801B67C4
  c->r[5]=0u+0x803A0000u; // 801B67C8
  c->r[4]=0u+0x803A0000u; // 801B67CC
  c->r[3]=0u+0x803A0000u; // 801B67D0
  c->r[7]=c->r[7]+0xFFFFCA98u; // 801B67D4
  c->r[6]=c->r[6]+0xFFFFCA88u; // 801B67D8
  c->r[5]=c->r[5]+0xFFFFCA78u; // 801B67DC
  c->r[4]=c->r[4]+0xFFFFCA68u; // 801B67E0
  c->r[3]=c->r[3]+0xFFFFCA58u; // 801B67E4
  W32(c->r[13]+0xFFFFC3F8u,c->r[7]); // 801B67E8
  W32(c->r[13]+0xFFFFC3FCu,c->r[6]); // 801B67EC
  W32(c->r[13]+0xFFFFC400u,c->r[5]); // 801B67F0
  W32(c->r[13]+0xFFFFC404u,c->r[4]); // 801B67F4
  W32(c->r[13]+0xFFFFC408u,c->r[3]); // 801B67F8
  return; // 801B67FC
}

// fn_801B6800
void f_801B6800(Ctx* __restrict c) {
  trace_call(0x801B6800u);
  c->r[4]=0u+0x00010000u; // 801B6800
  c->r[5]=0u+0x00000000u; // 801B6804
  c->r[0]=c->r[4]+0xFFFF8000u; // 801B6808
  W16(c->r[3]+0x00000008u,c->r[0]); // 801B680C
  W32(c->r[3]+0x00000000u,c->r[5]); // 801B6810
  W32(c->r[3]+0x00000004u,c->r[5]); // 801B6814
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801B6818
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 801B681C
  W16(c->r[3]+0x0000000Au,c->r[5]); // 801B6820
  W32(c->r[3]+0x00000010u,c->r[5]); // 801B6824
  W8(c->r[3]+0x0000001Cu,c->r[5]); // 801B6828
  W8(c->r[3]+0x0000001Du,c->r[5]); // 801B682C
  W32(c->r[3]+0x00000038u,c->r[5]); // 801B6830
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 801B6834
  W32(c->r[3]+0x00000040u,c->r[5]); // 801B6838
  W32(c->r[3]+0x00000044u,c->r[5]); // 801B683C
  return; // 801B6840
}

// fn_801B6850
void f_801B6850(Ctx* __restrict c) {
  trace_call(0x801B6850u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6850
  c->r[0]=c->lr; // 801B6854
  cmps(c,0,(int32_t)c->r[3],0); // 801B6858
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B685C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6860
  c->r[31]=c->r[3]|c->r[3]; // 801B6864
  if (crb(c,2)) { goto L_801B6878; } // 801B6868
  cmps(c,0,(int32_t)c->r[4],0); // 801B686C
  if (!crb(c,1)) { goto L_801B6878; } // 801B6870
  c->lr=0x801B6878u; f_802E61AC(c); // 801B6874
L_801B6878:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6878
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B687C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6880
  c->lr=c->r[0]; // 801B6884
  c->r[1]=c->r[1]+0x00000010u; // 801B6888
  return; // 801B688C
}

// fn_801B6890
void f_801B6890(Ctx* __restrict c) {
  trace_call(0x801B6890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6890
  c->r[0]=c->lr; // 801B6894
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B689C
  c->r[31]=c->r[4]|c->r[4]; // 801B68A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B68A4
  c->r[30]=c->r[6]|c->r[6]; // 801B68A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B68AC
  c->r[29]=c->r[5]|c->r[5]; // 801B68B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B68B4
  c->r[28]=c->r[3]|c->r[3]; // 801B68B8
  c->lr=0x801B68C0u; f_801251B0(c); // 801B68BC
  W32(c->r[28]+0x00000010u,c->r[31]); // 801B68C0
  c->r[31]=c->r[3]|c->r[3]; // 801B68C4
  c->r[3]=c->r[28]+0x0000001Eu; // 801B68C8
  c->r[4]=0u+0x00000000u; // 801B68CC
  W32(c->r[28]+0x00000014u,c->r[29]); // 801B68D0
  c->r[5]=0u+0x00000018u; // 801B68D4
  W32(c->r[28]+0x00000018u,c->r[30]); // 801B68D8
  c->lr=0x801B68E0u; f_80004714(c); // 801B68DC
  c->r[0]=0u+0x00000001u; // 801B68E0
  W8(c->r[28]+0x0000001Cu,c->r[0]); // 801B68E4
  c->r[3]=c->r[31]|c->r[31]; // 801B68E8
  c->lr=0x801B68F0u; f_801251F0(c); // 801B68EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B68F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B68F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B68F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B68FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B6900
  c->lr=c->r[0]; // 801B6904
  c->r[1]=c->r[1]+0x00000020u; // 801B6908
  return; // 801B690C
}

// fn_801B6910
void f_801B6910(Ctx* __restrict c) {
  trace_call(0x801B6910u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6910
  c->r[0]=c->lr; // 801B6914
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B691C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6920
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6924
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B6928
  c->r[28]=c->r[3]|c->r[3]; // 801B692C
  c->lr=0x801B6934u; f_801251B0(c); // 801B6930
  c->r[0]=R32(c->r[28]+0x00000010u); // 801B6934
  c->r[31]=c->r[3]|c->r[3]; // 801B6938
  cmps(c,0,(int32_t)c->r[0],0); // 801B693C
  if (!crb(c,2)) { goto L_801B6950; } // 801B6940
  c->lr=0x801B6948u; f_801251F0(c); // 801B6944
  c->r[3]=0u+0x00000000u; // 801B6948
  goto L_801B6A74; // 801B694C
L_801B6950:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 801B6950
  cmps(c,0,(int32_t)c->r[4],0); // 801B6954
  if (crb(c,2)) { goto L_801B6970; } // 801B6958
  c->r[3]=R16(c->r[4]+0x000000A2u); // 801B695C
  c->r[0]=R16(c->r[4]+0x000000A4u); // 801B6960
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801B6964
  c->r[30]=c->r[3]+c->r[0]; // 801B6968
  goto L_801B6974; // 801B696C
L_801B6970:;
  c->r[30]=0u+0x00000000u; // 801B6970
L_801B6974:;
  c->lr=0x801B6978u; f_801B4F50(c); // 801B6974
  c->lr=0x801B697Cu; f_801B55D0(c); // 801B6978
  cmps(c,0,(int32_t)c->r[3],0); // 801B697C
  c->r[0]=R32(c->r[28]+0x00000014u); // 801B6980
  if (crb(c,2)) { goto L_801B698C; } // 801B6984
  c->r[3]=c->r[3]+0x80000000u; // 801B6988
L_801B698C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B698C
  c->r[29]=0u+0x00000000u; // 801B6990
  if (crb(c,2)) { goto L_801B69AC; } // 801B6994
  cmps(c,0,(int32_t)c->r[0],2); // 801B6998
  if (crb(c,2)) { goto L_801B69B8; } // 801B699C
  cmps(c,0,(int32_t)c->r[0],1); // 801B69A0
  if (crb(c,2)) { goto L_801B69C0; } // 801B69A4
  goto L_801B69C8; // 801B69A8
L_801B69AC:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B69AC
  c->r[29]=c->r[3]+0x00000002u; // 801B69B0
  goto L_801B69E4; // 801B69B4
L_801B69B8:;
  c->r[29]=c->r[3]|c->r[3]; // 801B69B8
  goto L_801B69E4; // 801B69BC
L_801B69C0:;
  c->r[29]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B69C0
  goto L_801B69E4; // 801B69C4
L_801B69C8:;
  c->r[3]=0u+0x803A0000u; // 801B69C8
  c->r[5]=0u+0x803A0000u; // 801B69CC
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B69D0
  c->r[4]=0u+0x0000013Eu; // 801B69D4
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B69D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B69DC
  c->lr=0x801B69E4u; f_80212260(c); // 801B69E0
L_801B69E4:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 801B69E4
  cmps(c,0,(int32_t)c->r[0],3); // 801B69E8
  if (crb(c,2)) { goto L_801B6A04; } // 801B69EC
  cmps(c,0,(int32_t)c->r[0],2); // 801B69F0
  if (crb(c,2)) { goto L_801B6A0C; } // 801B69F4
  cmps(c,0,(int32_t)c->r[0],1); // 801B69F8
  if (crb(c,2)) { goto L_801B6A14; } // 801B69FC
  goto L_801B6A1C; // 801B6A00
L_801B6A04:;
  c->r[0]=c->r[29]+0x00000200u; // 801B6A04
  goto L_801B6A48; // 801B6A08
L_801B6A0C:;
  c->r[0]=c->r[29]+0x00000100u; // 801B6A0C
  goto L_801B6A48; // 801B6A10
L_801B6A14:;
  c->r[0]=c->r[29]+0x00000080u; // 801B6A14
  goto L_801B6A48; // 801B6A18
L_801B6A1C:;
  c->r[3]=0u+0x803A0000u; // 801B6A1C
  c->r[5]=0u+0x803A0000u; // 801B6A20
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B6A24
  c->r[4]=0u+0x00000067u; // 801B6A28
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B6A2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6A30
  c->lr=0x801B6A38u; f_80212260(c); // 801B6A34
  c->r[3]=c->r[31]|c->r[31]; // 801B6A38
  c->lr=0x801B6A40u; f_801251F0(c); // 801B6A3C
  c->r[3]=0u+0x00000000u; // 801B6A40
  goto L_801B6A74; // 801B6A44
L_801B6A48:;
  cmpu(c,0,c->r[29],c->r[30]); // 801B6A48
  if (crb(c,1)) { goto L_801B6A68; } // 801B6A4C
  cmpu(c,0,c->r[30],c->r[0]); // 801B6A50
  if (!crb(c,0)) { goto L_801B6A68; } // 801B6A54
  c->r[3]=c->r[31]|c->r[31]; // 801B6A58
  c->lr=0x801B6A60u; f_801251F0(c); // 801B6A5C
  c->r[3]=0u+0x00000001u; // 801B6A60
  goto L_801B6A74; // 801B6A64
L_801B6A68:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6A68
  c->lr=0x801B6A70u; f_801251F0(c); // 801B6A6C
  c->r[3]=0u+0x00000000u; // 801B6A70
L_801B6A74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6A74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6A78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6A7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6A80
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B6A84
  c->lr=c->r[0]; // 801B6A88
  c->r[1]=c->r[1]+0x00000020u; // 801B6A8C
  return; // 801B6A90
}

// fn_801B6AA0
void f_801B6AA0(Ctx* __restrict c) {
  trace_call(0x801B6AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6AA0
  c->r[0]=c->lr; // 801B6AA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6AA8
  c->r[11]=c->r[1]+0x00000020u; // 801B6AAC
  c->lr=0x801B6AB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6AB0
  c->r[31]=c->r[3]|c->r[3]; // 801B6AB4
  c->r[27]=c->r[4]|c->r[4]; // 801B6AB8
  c->r[28]=c->r[5]|c->r[5]; // 801B6ABC
  c->lr=0x801B6AC4u; f_801251B0(c); // 801B6AC0
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B6AC4
  c->r[30]=c->r[3]|c->r[3]; // 801B6AC8
  cmps(c,0,(int32_t)c->r[0],0); // 801B6ACC
  if (!crb(c,2)) { goto L_801B6ADC; } // 801B6AD0
  c->lr=0x801B6AD8u; f_801251F0(c); // 801B6AD4
  goto L_801B6BC4; // 801B6AD8
L_801B6ADC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B6ADC
  c->r[0]=R32(c->r[31]+0x00000014u); // 801B6AE0
  if (crb(c,2)) { goto L_801B6AEC; } // 801B6AE4
  c->r[27]=c->r[27]+0x80000000u; // 801B6AE8
L_801B6AEC:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B6AEC
  c->r[29]=0u+0x00000000u; // 801B6AF0
  if (crb(c,2)) { goto L_801B6B0C; } // 801B6AF4
  cmps(c,0,(int32_t)c->r[0],2); // 801B6AF8
  if (crb(c,2)) { goto L_801B6B48; } // 801B6AFC
  cmps(c,0,(int32_t)c->r[0],1); // 801B6B00
  if (crb(c,2)) { goto L_801B6B50; } // 801B6B04
  goto L_801B6B5C; // 801B6B08
L_801B6B0C:;
  c->r[3]=0u+0x24920000u; // 801B6B0C
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801B6B10
  c->r[3]=c->r[3]+0x00004925u; // 801B6B14
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[28])>>32); // 801B6B18
  c->r[3]=c->r[28]-c->r[4]; // 801B6B1C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B6B20
  c->r[4]=c->r[3]+c->r[4]; // 801B6B24
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B6B28
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801B6B2C
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801B6B30
  c->r[4]=c->r[28]-c->r[5]; // 801B6B34
  c->r[0]=c->r[4]+c->r[0]; // 801B6B38
  c->r[29]=c->r[0]+c->r[3]; // 801B6B3C
  c->r[29]=c->r[29]+0x00000002u; // 801B6B40
  goto L_801B6B78; // 801B6B44
L_801B6B48:;
  c->r[29]=c->r[27]+c->r[28]; // 801B6B48
  goto L_801B6B78; // 801B6B4C
L_801B6B50:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801B6B50
  c->r[29]=c->r[0]+c->r[28]; // 801B6B54
  goto L_801B6B78; // 801B6B58
L_801B6B5C:;
  c->r[3]=0u+0x803A0000u; // 801B6B5C
  c->r[5]=0u+0x803A0000u; // 801B6B60
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B6B64
  c->r[4]=0u+0x0000013Eu; // 801B6B68
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B6B6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6B70
  c->lr=0x801B6B78u; f_80212260(c); // 801B6B74
L_801B6B78:;
  c->lr=0x801B6B7Cu; f_801251B0(c); // 801B6B78
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B6B7C
  cmps(c,0,(int32_t)c->r[4],0); // 801B6B80
  if (!crb(c,2)) { goto L_801B6B90; } // 801B6B84
  c->lr=0x801B6B8Cu; f_801251F0(c); // 801B6B88
  goto L_801B6BBC; // 801B6B8C
L_801B6B90:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801B6B90
  W16(c->r[4]+0x0000009Au,c->r[0]); // 801B6B94
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B6B98
  W16(c->r[4]+0x0000009Cu,c->r[29]); // 801B6B9C
  c->r[5]=R32(c->r[31]+0x00000000u); // 801B6BA0
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801B6BA4
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801B6BA8
  if (!crb(c,2)) { goto L_801B6BB8; } // 801B6BAC
  c->r[0]=c->r[4]|0x00001000u; // 801B6BB0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801B6BB4
L_801B6BB8:;
  c->lr=0x801B6BBCu; f_801251F0(c); // 801B6BB8
L_801B6BBC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6BBC
  c->lr=0x801B6BC4u; f_801251F0(c); // 801B6BC0
L_801B6BC4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B6BC4
  c->lr=0x801B6BCCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6BC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6BCC
  c->lr=c->r[0]; // 801B6BD0
  c->r[1]=c->r[1]+0x00000020u; // 801B6BD4
  return; // 801B6BD8
}

// fn_801B6BE0
void f_801B6BE0(Ctx* __restrict c) {
  trace_call(0x801B6BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6BE0
  c->r[0]=c->lr; // 801B6BE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6BE8
  c->r[11]=c->r[1]+0x00000020u; // 801B6BEC
  c->lr=0x801B6BF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6BF0
  c->r[31]=c->r[3]|c->r[3]; // 801B6BF4
  c->r[27]=c->r[4]|c->r[4]; // 801B6BF8
  c->r[28]=c->r[5]|c->r[5]; // 801B6BFC
  c->lr=0x801B6C04u; f_801251B0(c); // 801B6C00
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B6C04
  c->r[30]=c->r[3]|c->r[3]; // 801B6C08
  cmps(c,0,(int32_t)c->r[0],0); // 801B6C0C
  if (!crb(c,2)) { goto L_801B6C1C; } // 801B6C10
  c->lr=0x801B6C18u; f_801251F0(c); // 801B6C14
  goto L_801B6D10; // 801B6C18
L_801B6C1C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B6C1C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801B6C20
  if (crb(c,2)) { goto L_801B6C2C; } // 801B6C24
  c->r[27]=c->r[27]+0x80000000u; // 801B6C28
L_801B6C2C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B6C2C
  c->r[29]=0u+0x00000000u; // 801B6C30
  if (crb(c,2)) { goto L_801B6C4C; } // 801B6C34
  cmps(c,0,(int32_t)c->r[0],2); // 801B6C38
  if (crb(c,2)) { goto L_801B6C8C; } // 801B6C3C
  cmps(c,0,(int32_t)c->r[0],1); // 801B6C40
  if (crb(c,2)) { goto L_801B6C98; } // 801B6C44
  goto L_801B6CA8; // 801B6C48
L_801B6C4C:;
  c->r[3]=0u+0x24920000u; // 801B6C4C
  c->r[6]=c->r[28]+0xFFFFFFFFu; // 801B6C50
  c->r[3]=c->r[3]+0x00004925u; // 801B6C54
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801B6C58
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 801B6C5C
  c->r[3]=c->r[6]-c->r[4]; // 801B6C60
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B6C64
  c->r[4]=c->r[3]+c->r[4]; // 801B6C68
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B6C6C
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801B6C70
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801B6C74
  c->r[4]=c->r[6]-c->r[5]; // 801B6C78
  c->r[0]=c->r[4]+c->r[0]; // 801B6C7C
  c->r[29]=c->r[0]+c->r[3]; // 801B6C80
  c->r[29]=c->r[29]+0x00000002u; // 801B6C84
  goto L_801B6CC4; // 801B6C88
L_801B6C8C:;
  c->r[29]=c->r[27]+c->r[28]; // 801B6C8C
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 801B6C90
  goto L_801B6CC4; // 801B6C94
L_801B6C98:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801B6C98
  c->r[3]=c->r[28]+c->r[0]; // 801B6C9C
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 801B6CA0
  goto L_801B6CC4; // 801B6CA4
L_801B6CA8:;
  c->r[3]=0u+0x803A0000u; // 801B6CA8
  c->r[5]=0u+0x803A0000u; // 801B6CAC
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B6CB0
  c->r[4]=0u+0x0000013Eu; // 801B6CB4
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B6CB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6CBC
  c->lr=0x801B6CC4u; f_80212260(c); // 801B6CC0
L_801B6CC4:;
  c->lr=0x801B6CC8u; f_801251B0(c); // 801B6CC4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B6CC8
  cmps(c,0,(int32_t)c->r[4],0); // 801B6CCC
  if (!crb(c,2)) { goto L_801B6CDC; } // 801B6CD0
  c->lr=0x801B6CD8u; f_801251F0(c); // 801B6CD4
  goto L_801B6D08; // 801B6CD8
L_801B6CDC:;
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801B6CDC
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 801B6CE0
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B6CE4
  W16(c->r[4]+0x000000A0u,c->r[29]); // 801B6CE8
  c->r[5]=R32(c->r[31]+0x00000000u); // 801B6CEC
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801B6CF0
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801B6CF4
  if (!crb(c,2)) { goto L_801B6D04; } // 801B6CF8
  c->r[0]=c->r[4]|0x00002000u; // 801B6CFC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801B6D00
L_801B6D04:;
  c->lr=0x801B6D08u; f_801251F0(c); // 801B6D04
L_801B6D08:;
  c->r[3]=c->r[30]|c->r[30]; // 801B6D08
  c->lr=0x801B6D10u; f_801251F0(c); // 801B6D0C
L_801B6D10:;
  c->r[11]=c->r[1]+0x00000020u; // 801B6D10
  c->lr=0x801B6D18u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6D14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6D18
  c->lr=c->r[0]; // 801B6D1C
  c->r[1]=c->r[1]+0x00000020u; // 801B6D20
  return; // 801B6D24
}

// SetLoopFlag__Q44nw4r3snd6detail7AxVoiceFb
void f_801B6D30(Ctx* __restrict c) {
  trace_call(0x801B6D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6D30
  c->r[0]=c->lr; // 801B6D34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6D38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6D3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6D40
  c->r[30]=c->r[4]|c->r[4]; // 801B6D44
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6D48
  c->r[29]=c->r[3]|c->r[3]; // 801B6D4C
  c->lr=0x801B6D54u; f_801251B0(c); // 801B6D50
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B6D54
  c->r[31]=c->r[3]|c->r[3]; // 801B6D58
  cmps(c,0,(int32_t)c->r[0],0); // 801B6D5C
  if (!crb(c,2)) { goto L_801B6D6C; } // 801B6D60
  c->lr=0x801B6D68u; f_801251F0(c); // 801B6D64
  goto L_801B6DAC; // 801B6D68
L_801B6D6C:;
  c->lr=0x801B6D70u; f_801251B0(c); // 801B6D6C
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B6D70
  cmps(c,0,(int32_t)c->r[4],0); // 801B6D74
  if (!crb(c,2)) { goto L_801B6D84; } // 801B6D78
  c->lr=0x801B6D80u; f_801251F0(c); // 801B6D7C
  goto L_801B6DA4; // 801B6D80
L_801B6D84:;
  W16(c->r[4]+0x00000096u,c->r[30]); // 801B6D84
  c->r[5]=R32(c->r[29]+0x00000000u); // 801B6D88
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801B6D8C
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801B6D90
  if (!crb(c,2)) { goto L_801B6DA0; } // 801B6D94
  c->r[0]=c->r[4]|0x00000800u; // 801B6D98
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801B6D9C
L_801B6DA0:;
  c->lr=0x801B6DA4u; f_801251F0(c); // 801B6DA0
L_801B6DA4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B6DA4
  c->lr=0x801B6DACu; f_801251F0(c); // 801B6DA8
L_801B6DAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6DAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6DB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6DB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6DB8
  c->lr=c->r[0]; // 801B6DBC
  c->r[1]=c->r[1]+0x00000020u; // 801B6DC0
  return; // 801B6DC4
}

// fn_801B6DD0
void f_801B6DD0(Ctx* __restrict c) {
  trace_call(0x801B6DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6DD0
  c->r[0]=c->lr; // 801B6DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6DD8
  c->r[11]=c->r[1]+0x00000020u; // 801B6DDC
  c->lr=0x801B6DE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6DE0
  c->r[30]=c->r[3]|c->r[3]; // 801B6DE4
  c->r[26]=c->r[4]|c->r[4]; // 801B6DE8
  c->r[27]=c->r[5]|c->r[5]; // 801B6DEC
  c->lr=0x801B6DF4u; f_801251B0(c); // 801B6DF0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B6DF4
  c->r[29]=c->r[3]|c->r[3]; // 801B6DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801B6DFC
  if (!crb(c,2)) { goto L_801B6E0C; } // 801B6E00
  c->lr=0x801B6E08u; f_801251F0(c); // 801B6E04
  goto L_801B6FF0; // 801B6E08
L_801B6E0C:;
  c->lr=0x801B6E10u; f_801B4F50(c); // 801B6E0C
  c->lr=0x801B6E14u; f_801B55D0(c); // 801B6E10
  cmps(c,0,(int32_t)c->r[3],0); // 801B6E14
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B6E18
  if (crb(c,2)) { goto L_801B6E24; } // 801B6E1C
  c->r[3]=c->r[3]+0x80000000u; // 801B6E20
L_801B6E24:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B6E24
  c->r[31]=0u+0x00000000u; // 801B6E28
  if (crb(c,2)) { goto L_801B6E44; } // 801B6E2C
  cmps(c,0,(int32_t)c->r[0],2); // 801B6E30
  if (crb(c,2)) { goto L_801B6E50; } // 801B6E34
  cmps(c,0,(int32_t)c->r[0],1); // 801B6E38
  if (crb(c,2)) { goto L_801B6E58; } // 801B6E3C
  goto L_801B6E60; // 801B6E40
L_801B6E44:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B6E44
  c->r[31]=c->r[3]+0x00000002u; // 801B6E48
  goto L_801B6E7C; // 801B6E4C
L_801B6E50:;
  c->r[31]=c->r[3]|c->r[3]; // 801B6E50
  goto L_801B6E7C; // 801B6E54
L_801B6E58:;
  c->r[31]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B6E58
  goto L_801B6E7C; // 801B6E5C
L_801B6E60:;
  c->r[3]=0u+0x803A0000u; // 801B6E60
  c->r[5]=0u+0x803A0000u; // 801B6E64
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B6E68
  c->r[4]=0u+0x0000013Eu; // 801B6E6C
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B6E70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6E74
  c->lr=0x801B6E7Cu; f_80212260(c); // 801B6E78
L_801B6E7C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B6E7C
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B6E80
  if (crb(c,2)) { goto L_801B6E8C; } // 801B6E84
  c->r[26]=c->r[26]+0x80000000u; // 801B6E88
L_801B6E8C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B6E8C
  c->r[28]=0u+0x00000000u; // 801B6E90
  if (crb(c,2)) { goto L_801B6EAC; } // 801B6E94
  cmps(c,0,(int32_t)c->r[0],2); // 801B6E98
  if (crb(c,2)) { goto L_801B6EEC; } // 801B6E9C
  cmps(c,0,(int32_t)c->r[0],1); // 801B6EA0
  if (crb(c,2)) { goto L_801B6EF8; } // 801B6EA4
  goto L_801B6F08; // 801B6EA8
L_801B6EAC:;
  c->r[3]=0u+0x24920000u; // 801B6EAC
  c->r[6]=c->r[27]+0xFFFFFFFFu; // 801B6EB0
  c->r[3]=c->r[3]+0x00004925u; // 801B6EB4
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 801B6EB8
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 801B6EBC
  c->r[3]=c->r[6]-c->r[4]; // 801B6EC0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B6EC4
  c->r[4]=c->r[3]+c->r[4]; // 801B6EC8
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B6ECC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801B6ED0
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801B6ED4
  c->r[4]=c->r[6]-c->r[5]; // 801B6ED8
  c->r[0]=c->r[4]+c->r[0]; // 801B6EDC
  c->r[28]=c->r[0]+c->r[3]; // 801B6EE0
  c->r[28]=c->r[28]+0x00000002u; // 801B6EE4
  goto L_801B6F24; // 801B6EE8
L_801B6EEC:;
  c->r[28]=c->r[26]+c->r[27]; // 801B6EEC
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801B6EF0
  goto L_801B6F24; // 801B6EF4
L_801B6EF8:;
  c->r[0]=rotl(c->r[26],31)&0x7FFFFFFFu; // 801B6EF8
  c->r[3]=c->r[27]+c->r[0]; // 801B6EFC
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 801B6F00
  goto L_801B6F24; // 801B6F04
L_801B6F08:;
  c->r[3]=0u+0x803A0000u; // 801B6F08
  c->r[5]=0u+0x803A0000u; // 801B6F0C
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B6F10
  c->r[4]=0u+0x0000013Eu; // 801B6F14
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B6F18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B6F1C
  c->lr=0x801B6F24u; f_80212260(c); // 801B6F20
L_801B6F24:;
  c->lr=0x801B6F28u; f_801251B0(c); // 801B6F24
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B6F28
  cmps(c,0,(int32_t)c->r[4],0); // 801B6F2C
  if (!crb(c,2)) { goto L_801B6F3C; } // 801B6F30
  c->lr=0x801B6F38u; f_801251F0(c); // 801B6F34
  goto L_801B6F68; // 801B6F38
L_801B6F3C:;
  c->r[0]=rotl(c->r[31],16)&0x0000FFFFu; // 801B6F3C
  W16(c->r[4]+0x0000009Au,c->r[0]); // 801B6F40
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B6F44
  W16(c->r[4]+0x0000009Cu,c->r[31]); // 801B6F48
  c->r[5]=R32(c->r[30]+0x00000000u); // 801B6F4C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801B6F50
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801B6F54
  if (!crb(c,2)) { goto L_801B6F64; } // 801B6F58
  c->r[0]=c->r[4]|0x00001000u; // 801B6F5C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801B6F60
L_801B6F64:;
  c->lr=0x801B6F68u; f_801251F0(c); // 801B6F64
L_801B6F68:;
  c->lr=0x801B6F6Cu; f_801251B0(c); // 801B6F68
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B6F6C
  cmps(c,0,(int32_t)c->r[4],0); // 801B6F70
  if (!crb(c,2)) { goto L_801B6F80; } // 801B6F74
  c->lr=0x801B6F7Cu; f_801251F0(c); // 801B6F78
  goto L_801B6FAC; // 801B6F7C
L_801B6F80:;
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801B6F80
  W16(c->r[4]+0x0000009Eu,c->r[0]); // 801B6F84
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B6F88
  W16(c->r[4]+0x000000A0u,c->r[28]); // 801B6F8C
  c->r[5]=R32(c->r[30]+0x00000000u); // 801B6F90
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801B6F94
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801B6F98
  if (!crb(c,2)) { goto L_801B6FA8; } // 801B6F9C
  c->r[0]=c->r[4]|0x00002000u; // 801B6FA0
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801B6FA4
L_801B6FA8:;
  c->lr=0x801B6FACu; f_801251F0(c); // 801B6FA8
L_801B6FAC:;
  c->lr=0x801B6FB0u; f_801251B0(c); // 801B6FAC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B6FB0
  cmps(c,0,(int32_t)c->r[4],0); // 801B6FB4
  if (!crb(c,2)) { goto L_801B6FC4; } // 801B6FB8
  c->lr=0x801B6FC0u; f_801251F0(c); // 801B6FBC
  goto L_801B6FE8; // 801B6FC0
L_801B6FC4:;
  c->r[0]=0u+0x00000000u; // 801B6FC4
  W16(c->r[4]+0x00000096u,c->r[0]); // 801B6FC8
  c->r[5]=R32(c->r[30]+0x00000000u); // 801B6FCC
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801B6FD0
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 801B6FD4
  if (!crb(c,2)) { goto L_801B6FE4; } // 801B6FD8
  c->r[0]=c->r[4]|0x00000800u; // 801B6FDC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801B6FE0
L_801B6FE4:;
  c->lr=0x801B6FE8u; f_801251F0(c); // 801B6FE4
L_801B6FE8:;
  c->r[3]=c->r[29]|c->r[29]; // 801B6FE8
  c->lr=0x801B6FF0u; f_801251F0(c); // 801B6FEC
L_801B6FF0:;
  c->r[11]=c->r[1]+0x00000020u; // 801B6FF0
  c->lr=0x801B6FF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6FF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6FF8
  c->lr=c->r[0]; // 801B6FFC
  c->r[1]=c->r[1]+0x00000020u; // 801B7000
  return; // 801B7004
}

// IsDataAddressCoverd__Q44nw4r3snd6detail7AxVoiceCFPCvPCv
void f_801B7010(Ctx* __restrict c) {
  trace_call(0x801B7010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7010
  c->r[0]=c->lr; // 801B7014
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7018
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B701C
  c->r[31]=c->r[3]|c->r[3]; // 801B7020
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7024
  c->r[30]=c->r[5]|c->r[5]; // 801B7028
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B702C
  c->r[29]=c->r[4]|c->r[4]; // 801B7030
  c->lr=0x801B7038u; f_801251B0(c); // 801B7034
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B7038
  cmps(c,0,(int32_t)c->r[0],0); // 801B703C
  if (!crb(c,2)) { goto L_801B7050; } // 801B7040
  c->lr=0x801B7048u; f_801251F0(c); // 801B7044
  c->r[3]=0u+0x00000000u; // 801B7048
  goto L_801B708C; // 801B704C
L_801B7050:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 801B7050
  c->r[31]=0u+0x00000000u; // 801B7054
  cmps(c,0,(int32_t)c->r[4],0); // 801B7058
  if (crb(c,2)) { goto L_801B7084; } // 801B705C
  cmpu(c,0,c->r[29],c->r[4]); // 801B7060
  c->r[0]=0u+0x00000000u; // 801B7064
  if (crb(c,1)) { goto L_801B7078; } // 801B7068
  cmpu(c,0,c->r[4],c->r[30]); // 801B706C
  if (crb(c,1)) { goto L_801B7078; } // 801B7070
  c->r[0]=0u+0x00000001u; // 801B7074
L_801B7078:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B7078
  if (crb(c,2)) { goto L_801B7084; } // 801B707C
  c->r[31]=0u+0x00000001u; // 801B7080
L_801B7084:;
  c->lr=0x801B7088u; f_801251F0(c); // 801B7084
  c->r[3]=c->r[31]|c->r[31]; // 801B7088
L_801B708C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B708C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7090
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7094
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B7098
  c->lr=c->r[0]; // 801B709C
  c->r[1]=c->r[1]+0x00000020u; // 801B70A0
  return; // 801B70A4
}

// fn_801B70B0
void f_801B70B0(Ctx* __restrict c) {
  trace_call(0x801B70B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B70B0
  c->r[0]=c->lr; // 801B70B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B70B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B70BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B70C0
  c->r[30]=c->r[3]|c->r[3]; // 801B70C4
  c->lr=0x801B70CCu; f_801251B0(c); // 801B70C8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B70CC
  c->r[31]=c->r[3]|c->r[3]; // 801B70D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B70D4
  if (!crb(c,2)) { goto L_801B70E8; } // 801B70D8
  c->lr=0x801B70E0u; f_801251F0(c); // 801B70DC
  c->r[3]=0u+0x00000000u; // 801B70E0
  goto L_801B7280; // 801B70E4
L_801B70E8:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801B70E8
  cmps(c,0,(int32_t)c->r[0],0); // 801B70EC
  if (!crb(c,2)) { goto L_801B7100; } // 801B70F0
  c->lr=0x801B70F8u; f_801251F0(c); // 801B70F4
  c->r[3]=0u+0x00000000u; // 801B70F8
  goto L_801B7280; // 801B70FC
L_801B7100:;
  c->r[3]=c->r[30]|c->r[30]; // 801B7100
  c->lr=0x801B7108u; f_801B6910(c); // 801B7104
  cmps(c,0,(int32_t)c->r[3],0); // 801B7108
  if (crb(c,2)) { goto L_801B71CC; } // 801B710C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B7110
  cmps(c,0,(int32_t)c->r[4],0); // 801B7114
  if (crb(c,2)) { goto L_801B7130; } // 801B7118
  c->r[3]=R16(c->r[4]+0x0000009Eu); // 801B711C
  c->r[0]=R16(c->r[4]+0x000000A0u); // 801B7120
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801B7124
  c->r[3]=c->r[3]+c->r[0]; // 801B7128
  goto L_801B7134; // 801B712C
L_801B7130:;
  c->r[3]=0u+0x00000000u; // 801B7130
L_801B7134:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 801B7134
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B7138
  cmps(c,0,(int32_t)c->r[4],0); // 801B713C
  if (crb(c,2)) { goto L_801B7148; } // 801B7140
  c->r[4]=c->r[4]+0x80000000u; // 801B7144
L_801B7148:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B7148
  c->r[30]=0u+0x00000000u; // 801B714C
  if (crb(c,2)) { goto L_801B7168; } // 801B7150
  cmps(c,0,(int32_t)c->r[0],2); // 801B7154
  if (crb(c,2)) { goto L_801B7188; } // 801B7158
  cmps(c,0,(int32_t)c->r[0],1); // 801B715C
  if (crb(c,2)) { goto L_801B7190; } // 801B7160
  goto L_801B719C; // 801B7164
L_801B7168:;
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801B7168
  c->r[4]=c->r[3]-c->r[0]; // 801B716C
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801B7170
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801B7174
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801B7178
  c->r[3]=c->r[0]+c->r[3]; // 801B717C
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 801B7180
  goto L_801B71B8; // 801B7184
L_801B7188:;
  c->r[30]=c->r[3]-c->r[4]; // 801B7188
  goto L_801B71B8; // 801B718C
L_801B7190:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801B7190
  c->r[30]=c->r[3]-c->r[0]; // 801B7194
  goto L_801B71B8; // 801B7198
L_801B719C:;
  c->r[3]=0u+0x803A0000u; // 801B719C
  c->r[5]=0u+0x803A0000u; // 801B71A0
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B71A4
  c->r[4]=0u+0x0000015Eu; // 801B71A8
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B71AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B71B0
  c->lr=0x801B71B8u; f_80212260(c); // 801B71B4
L_801B71B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801B71B8
  c->r[31]=c->r[30]+0x00000001u; // 801B71BC
  c->lr=0x801B71C4u; f_801251F0(c); // 801B71C0
  c->r[3]=c->r[31]|c->r[31]; // 801B71C4
  goto L_801B7280; // 801B71C8
L_801B71CC:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B71CC
  cmps(c,0,(int32_t)c->r[4],0); // 801B71D0
  if (crb(c,2)) { goto L_801B71EC; } // 801B71D4
  c->r[3]=R16(c->r[4]+0x000000A2u); // 801B71D8
  c->r[0]=R16(c->r[4]+0x000000A4u); // 801B71DC
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 801B71E0
  c->r[3]=c->r[3]+c->r[0]; // 801B71E4
  goto L_801B71F0; // 801B71E8
L_801B71EC:;
  c->r[3]=0u+0x00000000u; // 801B71EC
L_801B71F0:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 801B71F0
  c->r[0]=R32(c->r[30]+0x00000014u); // 801B71F4
  cmps(c,0,(int32_t)c->r[4],0); // 801B71F8
  if (crb(c,2)) { goto L_801B7204; } // 801B71FC
  c->r[4]=c->r[4]+0x80000000u; // 801B7200
L_801B7204:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B7204
  c->r[30]=0u+0x00000000u; // 801B7208
  if (crb(c,2)) { goto L_801B7224; } // 801B720C
  cmps(c,0,(int32_t)c->r[0],2); // 801B7210
  if (crb(c,2)) { goto L_801B7244; } // 801B7214
  cmps(c,0,(int32_t)c->r[0],1); // 801B7218
  if (crb(c,2)) { goto L_801B724C; } // 801B721C
  goto L_801B7258; // 801B7220
L_801B7224:;
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801B7224
  c->r[4]=c->r[3]-c->r[0]; // 801B7228
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801B722C
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801B7230
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801B7234
  c->r[3]=c->r[0]+c->r[3]; // 801B7238
  c->r[30]=c->r[3]+0xFFFFFFFEu; // 801B723C
  goto L_801B7274; // 801B7240
L_801B7244:;
  c->r[30]=c->r[3]-c->r[4]; // 801B7244
  goto L_801B7274; // 801B7248
L_801B724C:;
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801B724C
  c->r[30]=c->r[3]-c->r[0]; // 801B7250
  goto L_801B7274; // 801B7254
L_801B7258:;
  c->r[3]=0u+0x803A0000u; // 801B7258
  c->r[5]=0u+0x803A0000u; // 801B725C
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B7260
  c->r[4]=0u+0x0000015Eu; // 801B7264
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B7268
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B726C
  c->lr=0x801B7274u; f_80212260(c); // 801B7270
L_801B7274:;
  c->r[3]=c->r[31]|c->r[31]; // 801B7274
  c->lr=0x801B727Cu; f_801251F0(c); // 801B7278
  c->r[3]=c->r[30]|c->r[30]; // 801B727C
L_801B7280:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7284
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B7288
  c->lr=c->r[0]; // 801B728C
  c->r[1]=c->r[1]+0x00000010u; // 801B7290
  return; // 801B7294
}

// fn_801B72A0
void f_801B72A0(Ctx* __restrict c) {
  trace_call(0x801B72A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B72A0
  c->r[0]=c->lr; // 801B72A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B72A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B72AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B72B0
  c->r[30]=c->r[3]|c->r[3]; // 801B72B4
  c->lr=0x801B72BCu; f_801251B0(c); // 801B72B8
  c->r[30]=R32(c->r[30]+0x00000014u); // 801B72BC
  c->r[31]=c->r[3]|c->r[3]; // 801B72C0
  cmps(c,0,(int32_t)c->r[30],0); // 801B72C4
  if (!crb(c,2)) { goto L_801B72E8; } // 801B72C8
  c->r[3]=0u+0x803A0000u; // 801B72CC
  c->r[5]=0u+0x803A0000u; // 801B72D0
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B72D4
  c->r[4]=0u+0x00000114u; // 801B72D8
  c->r[5]=c->r[5]+0xFFFFBF70u; // 801B72DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B72E0
  c->lr=0x801B72E8u; f_80212260(c); // 801B72E4
L_801B72E8:;
  c->r[0]=0u+0x00000000u; // 801B72E8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801B72EC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B72F0
  c->lr=0x801B72F8u; f_801B98B0(c); // 801B72F4
  c->r[4]=c->r[30]|c->r[30]; // 801B72F8
  c->lr=0x801B7300u; f_801BA130(c); // 801B72FC
  c->r[3]=c->r[31]|c->r[31]; // 801B7300
  c->lr=0x801B7308u; f_801251F0(c); // 801B7304
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B730C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B7310
  c->lr=c->r[0]; // 801B7314
  c->r[1]=c->r[1]+0x00000010u; // 801B7318
  return; // 801B731C
}

// fn_801B7320
void f_801B7320(Ctx* __restrict c) {
  trace_call(0x801B7320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7320
  c->r[0]=c->lr; // 801B7324
  cmps(c,0,(int32_t)c->r[3],0); // 801B7328
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B732C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7330
  if (crb(c,2)) { goto L_801B733C; } // 801B7334
  c->r[3]=c->r[3]+0x80000000u; // 801B7338
L_801B733C:;
  cmps(c,0,(int32_t)c->r[5],3); // 801B733C
  c->r[31]=0u+0x00000000u; // 801B7340
  if (crb(c,2)) { goto L_801B735C; } // 801B7344
  cmps(c,0,(int32_t)c->r[5],2); // 801B7348
  if (crb(c,2)) { goto L_801B737C; } // 801B734C
  cmps(c,0,(int32_t)c->r[5],1); // 801B7350
  if (crb(c,2)) { goto L_801B7384; } // 801B7354
  goto L_801B7390; // 801B7358
L_801B735C:;
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B735C
  c->r[4]=c->r[4]-c->r[0]; // 801B7360
  c->r[0]=rotl(c->r[4],28)&0x0FFFFFFFu; // 801B7364
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801B7368
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801B736C
  c->r[3]=c->r[0]+c->r[3]; // 801B7370
  c->r[31]=c->r[3]+0xFFFFFFFEu; // 801B7374
  goto L_801B73AC; // 801B7378
L_801B737C:;
  c->r[31]=c->r[4]-c->r[3]; // 801B737C
  goto L_801B73AC; // 801B7380
L_801B7384:;
  c->r[0]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B7384
  c->r[31]=c->r[4]-c->r[0]; // 801B7388
  goto L_801B73AC; // 801B738C
L_801B7390:;
  c->r[3]=0u+0x803A0000u; // 801B7390
  c->r[5]=0u+0x803A0000u; // 801B7394
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B7398
  c->r[4]=0u+0x0000015Eu; // 801B739C
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B73A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B73A4
  c->lr=0x801B73ACu; f_80212260(c); // 801B73A8
L_801B73AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801B73AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B73B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B73B4
  c->lr=c->r[0]; // 801B73B8
  c->r[1]=c->r[1]+0x00000010u; // 801B73BC
  return; // 801B73C0
}

// SetPriority__Q44nw4r3snd6detail7AxVoiceFUl
void f_801B73D0(Ctx* __restrict c) {
  trace_call(0x801B73D0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801B73D0
  cmps(c,0,(int32_t)c->r[3],0); // 801B73D4
  if (crb(c,2)) return; // 801B73D8
  f_8014F780(c); return; // 801B73DC
  return; // 801B73E0
}

// SetVoiceType__Q44nw4r3snd6detail7AxVoiceFQ54nw4r3snd6detail7AxVoice9VoiceType
void f_801B73F0(Ctx* __restrict c) {
  trace_call(0x801B73F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B73F0
  c->r[0]=c->lr; // 801B73F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B73F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B73FC
  c->r[31]=c->r[4]|c->r[4]; // 801B7400
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B7404
  c->r[30]=c->r[3]|c->r[3]; // 801B7408
  c->lr=0x801B7410u; f_801251B0(c); // 801B740C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B7410
  cmps(c,0,(int32_t)c->r[4],0); // 801B7414
  if (!crb(c,2)) { goto L_801B7424; } // 801B7418
  c->lr=0x801B7420u; f_801251F0(c); // 801B741C
  goto L_801B7438; // 801B7420
L_801B7424:;
  W16(c->r[4]+0x0000003Au,c->r[31]); // 801B7424
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B7428
  c->r[0]=c->r[0]|0x00000008u; // 801B742C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B7430
  c->lr=0x801B7438u; f_801251F0(c); // 801B7434
L_801B7438:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B743C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B7440
  c->lr=c->r[0]; // 801B7444
  c->r[1]=c->r[1]+0x00000010u; // 801B7448
  return; // 801B744C
}

// EnableRemote__Q44nw4r3snd6detail7AxVoiceFb
void f_801B7450(Ctx* __restrict c) {
  trace_call(0x801B7450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7450
  c->r[0]=c->lr; // 801B7454
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B745C
  c->r[31]=c->r[4]|c->r[4]; // 801B7460
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B7464
  c->r[30]=c->r[3]|c->r[3]; // 801B7468
  c->lr=0x801B7470u; f_801251B0(c); // 801B746C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B7470
  cmps(c,0,(int32_t)c->r[4],0); // 801B7474
  if (!crb(c,2)) { goto L_801B7484; } // 801B7478
  c->lr=0x801B7480u; f_801251F0(c); // 801B747C
  goto L_801B7498; // 801B7480
L_801B7484:;
  W16(c->r[4]+0x000000FEu,c->r[31]); // 801B7484
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B7488
  c->r[0]=c->r[0]|0x00800000u; // 801B748C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B7490
  c->lr=0x801B7498u; f_801251F0(c); // 801B7494
L_801B7498:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B749C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B74A0
  c->lr=c->r[0]; // 801B74A4
  c->r[1]=c->r[1]+0x00000010u; // 801B74A8
  return; // 801B74AC
}

// fn_801B74B0
void f_801B74B0(Ctx* __restrict c) {
  trace_call(0x801B74B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B74B0
  c->r[0]=c->lr; // 801B74B4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B74B8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801B74BC
  c->r[31]=c->r[3]|c->r[3]; // 801B74C0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801B74C4
  c->lr=0x801B74CCu; f_801251B0(c); // 801B74C8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B74CC
  c->r[30]=c->r[3]|c->r[3]; // 801B74D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B74D4
  if (!crb(c,2)) { goto L_801B74E4; } // 801B74D8
  c->lr=0x801B74E0u; f_801251F0(c); // 801B74DC
  goto L_801B75E8; // 801B74E0
L_801B74E4:;
  c->lr=0x801B74E8u; f_801251B0(c); // 801B74E4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B74E8
  cmps(c,0,(int32_t)c->r[4],0); // 801B74EC
  if (!crb(c,2)) { goto L_801B74FC; } // 801B74F0
  c->lr=0x801B74F8u; f_801251F0(c); // 801B74F4
  goto L_801B753C; // 801B74F8
L_801B74FC:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 801B74FC
  c->r[0]=0u+0x00000000u; // 801B7500
  c->r[6]=R16(c->r[31]+0x00000008u); // 801B7504
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 801B7508
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B750C
  c->r[5]=c->r[6]+c->r[5]; // 801B7510
  W16(c->r[31]+0x00000008u,c->r[5]); // 801B7514
  c->r[5]=R16(c->r[31]+0x00000008u); // 801B7518
  W16(c->r[4]+0x00000092u,c->r[5]); // 801B751C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B7520
  W16(c->r[4]+0x00000094u,c->r[0]); // 801B7524
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B7528
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801B752C
  c->r[0]=c->r[0]|0x00000100u; // 801B7530
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801B7534
  c->lr=0x801B753Cu; f_801251F0(c); // 801B7538
L_801B753C:;
  c->r[0]=R16(c->r[31]+0x0000001Eu); // 801B753C
  c->r[6]=0u+0x00000000u; // 801B7540
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B7544
  c->r[3]=c->r[31]|c->r[31]; // 801B7548
  c->r[4]=c->r[1]+0x00000008u; // 801B754C
  c->r[5]=0u+0x00000001u; // 801B7550
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801B7554
  c->r[0]=R16(c->r[31]+0x00000020u); // 801B7558
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B755C
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 801B7560
  c->r[0]=R16(c->r[31]+0x00000024u); // 801B7564
  W16(c->r[1]+0x00000010u,c->r[0]); // 801B7568
  W16(c->r[1]+0x00000012u,c->r[6]); // 801B756C
  c->r[0]=R16(c->r[31]+0x00000026u); // 801B7570
  W16(c->r[1]+0x00000014u,c->r[0]); // 801B7574
  W16(c->r[1]+0x00000016u,c->r[6]); // 801B7578
  c->r[0]=R16(c->r[31]+0x0000002Au); // 801B757C
  W16(c->r[1]+0x00000018u,c->r[0]); // 801B7580
  W16(c->r[1]+0x0000001Au,c->r[6]); // 801B7584
  c->r[0]=R16(c->r[31]+0x0000002Cu); // 801B7588
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801B758C
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 801B7590
  c->r[0]=R16(c->r[31]+0x00000030u); // 801B7594
  W16(c->r[1]+0x00000020u,c->r[0]); // 801B7598
  W16(c->r[1]+0x00000022u,c->r[6]); // 801B759C
  c->r[0]=R16(c->r[31]+0x00000032u); // 801B75A0
  W16(c->r[1]+0x00000024u,c->r[0]); // 801B75A4
  W16(c->r[1]+0x00000026u,c->r[6]); // 801B75A8
  c->r[0]=R16(c->r[31]+0x00000022u); // 801B75AC
  W16(c->r[1]+0x00000028u,c->r[0]); // 801B75B0
  W16(c->r[1]+0x0000002Au,c->r[6]); // 801B75B4
  c->r[0]=R16(c->r[31]+0x00000028u); // 801B75B8
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801B75BC
  W16(c->r[1]+0x0000002Eu,c->r[6]); // 801B75C0
  c->r[0]=R16(c->r[31]+0x0000002Eu); // 801B75C4
  W16(c->r[1]+0x00000030u,c->r[0]); // 801B75C8
  W16(c->r[1]+0x00000032u,c->r[6]); // 801B75CC
  c->r[0]=R16(c->r[31]+0x00000034u); // 801B75D0
  W16(c->r[1]+0x00000034u,c->r[0]); // 801B75D4
  W16(c->r[1]+0x00000036u,c->r[6]); // 801B75D8
  c->lr=0x801B75E0u; f_801B91D0(c); // 801B75DC
  c->r[3]=c->r[30]|c->r[30]; // 801B75E0
  c->lr=0x801B75E8u; f_801251F0(c); // 801B75E4
L_801B75E8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B75E8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801B75EC
  c->r[30]=R32(c->r[1]+0x00000038u); // 801B75F0
  c->lr=c->r[0]; // 801B75F4
  c->r[1]=c->r[1]+0x00000040u; // 801B75F8
  return; // 801B75FC
}

// fn_801B7600
void f_801B7600(Ctx* __restrict c) {
  trace_call(0x801B7600u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7600
  c->r[0]=c->lr; // 801B7604
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B7608
  c->r[11]=c->r[1]+0x00000040u; // 801B760C
  c->lr=0x801B7614u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7610
  c->r[25]=c->r[3]|c->r[3]; // 801B7614
  c->r[26]=c->r[4]|c->r[4]; // 801B7618
  c->r[27]=c->r[5]|c->r[5]; // 801B761C
  c->r[28]=c->r[6]|c->r[6]; // 801B7620
  c->r[31]=c->r[7]|c->r[7]; // 801B7624
  c->r[29]=c->r[8]|c->r[8]; // 801B7628
  c->lr=0x801B7630u; f_801251B0(c); // 801B762C
  c->r[0]=R32(c->r[25]+0x00000000u); // 801B7630
  c->r[24]=c->r[3]|c->r[3]; // 801B7634
  cmps(c,0,(int32_t)c->r[0],0); // 801B7638
  if (!crb(c,2)) { goto L_801B7648; } // 801B763C
  c->lr=0x801B7644u; f_801251F0(c); // 801B7640
  goto L_801B7AAC; // 801B7644
L_801B7648:;
  cmpu(c,0,c->r[28],c->r[29]); // 801B7648
  if (!crb(c,1)) { goto L_801B77A8; } // 801B764C
  c->lr=0x801B7654u; f_801B4F50(c); // 801B7650
  c->lr=0x801B7658u; f_801B55D0(c); // 801B7654
  cmps(c,0,(int32_t)c->r[3],0); // 801B7658
  c->r[27]=c->r[3]|c->r[3]; // 801B765C
  c->r[4]=R32(c->r[25]+0x00000014u); // 801B7660
  c->r[0]=c->r[27]|c->r[27]; // 801B7664
  c->r[26]=0u+0x00000000u; // 801B7668
  if (crb(c,2)) { goto L_801B7674; } // 801B766C
  c->r[0]=c->r[3]+0x80000000u; // 801B7670
L_801B7674:;
  cmps(c,0,(int32_t)c->r[4],3); // 801B7674
  c->r[31]=0u+0x00000000u; // 801B7678
  if (crb(c,2)) { goto L_801B7694; } // 801B767C
  cmps(c,0,(int32_t)c->r[4],2); // 801B7680
  if (crb(c,2)) { goto L_801B76A0; } // 801B7684
  cmps(c,0,(int32_t)c->r[4],1); // 801B7688
  if (crb(c,2)) { goto L_801B76A8; } // 801B768C
  goto L_801B76B0; // 801B7690
L_801B7694:;
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801B7694
  c->r[31]=c->r[3]+0x00000002u; // 801B7698
  goto L_801B76CC; // 801B769C
L_801B76A0:;
  c->r[31]=c->r[0]|c->r[0]; // 801B76A0
  goto L_801B76CC; // 801B76A4
L_801B76A8:;
  c->r[31]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801B76A8
  goto L_801B76CC; // 801B76AC
L_801B76B0:;
  c->r[3]=0u+0x803A0000u; // 801B76B0
  c->r[5]=0u+0x803A0000u; // 801B76B4
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B76B8
  c->r[4]=0u+0x0000013Eu; // 801B76BC
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B76C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B76C4
  c->lr=0x801B76CCu; f_80212260(c); // 801B76C8
L_801B76CC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B76CC
  c->r[3]=R32(c->r[25]+0x00000014u); // 801B76D0
  c->r[0]=c->r[27]|c->r[27]; // 801B76D4
  if (crb(c,2)) { goto L_801B76E0; } // 801B76D8
  c->r[0]=c->r[27]+0x80000000u; // 801B76DC
L_801B76E0:;
  cmps(c,0,(int32_t)c->r[3],3); // 801B76E0
  c->r[30]=0u+0x00000000u; // 801B76E4
  if (crb(c,2)) { goto L_801B7700; } // 801B76E8
  cmps(c,0,(int32_t)c->r[3],2); // 801B76EC
  if (crb(c,2)) { goto L_801B770C; } // 801B76F0
  cmps(c,0,(int32_t)c->r[3],1); // 801B76F4
  if (crb(c,2)) { goto L_801B7714; } // 801B76F8
  goto L_801B771C; // 801B76FC
L_801B7700:;
  c->r[3]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801B7700
  c->r[30]=c->r[3]+0x00000002u; // 801B7704
  goto L_801B7738; // 801B7708
L_801B770C:;
  c->r[30]=c->r[0]|c->r[0]; // 801B770C
  goto L_801B7738; // 801B7710
L_801B7714:;
  c->r[30]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801B7714
  goto L_801B7738; // 801B7718
L_801B771C:;
  c->r[3]=0u+0x803A0000u; // 801B771C
  c->r[5]=0u+0x803A0000u; // 801B7720
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B7724
  c->r[4]=0u+0x0000013Eu; // 801B7728
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B772C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7730
  c->lr=0x801B7738u; f_80212260(c); // 801B7734
L_801B7738:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B7738
  c->r[0]=R32(c->r[25]+0x00000014u); // 801B773C
  if (crb(c,2)) { goto L_801B7748; } // 801B7740
  c->r[27]=c->r[27]+0x80000000u; // 801B7744
L_801B7748:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B7748
  c->r[28]=0u+0x00000000u; // 801B774C
  if (crb(c,2)) { goto L_801B7768; } // 801B7750
  cmps(c,0,(int32_t)c->r[0],2); // 801B7754
  if (crb(c,2)) { goto L_801B7774; } // 801B7758
  cmps(c,0,(int32_t)c->r[0],1); // 801B775C
  if (crb(c,2)) { goto L_801B777C; } // 801B7760
  goto L_801B7788; // 801B7764
L_801B7768:;
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801B7768
  c->r[28]=c->r[3]+0x00000003u; // 801B776C
  goto L_801B7A0C; // 801B7770
L_801B7774:;
  c->r[28]=c->r[27]+0x00000001u; // 801B7774
  goto L_801B7A0C; // 801B7778
L_801B777C:;
  c->r[3]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801B777C
  c->r[28]=c->r[3]+0x00000001u; // 801B7780
  goto L_801B7A0C; // 801B7784
L_801B7788:;
  c->r[3]=0u+0x803A0000u; // 801B7788
  c->r[5]=0u+0x803A0000u; // 801B778C
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B7790
  c->r[4]=0u+0x0000013Eu; // 801B7794
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B7798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B779C
  c->lr=0x801B77A4u; f_80212260(c); // 801B77A0
  goto L_801B7A0C; // 801B77A4
L_801B77A8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B77A8
  if (crb(c,2)) { goto L_801B7854; } // 801B77AC
  cmps(c,0,(int32_t)c->r[27],0); // 801B77B0
  c->r[3]=R32(c->r[25]+0x00000014u); // 801B77B4
  c->r[0]=c->r[27]|c->r[27]; // 801B77B8
  if (crb(c,2)) { goto L_801B77C4; } // 801B77BC
  c->r[0]=c->r[27]+0x80000000u; // 801B77C0
L_801B77C4:;
  cmps(c,0,(int32_t)c->r[3],3); // 801B77C4
  c->r[30]=0u+0x00000000u; // 801B77C8
  if (crb(c,2)) { goto L_801B77E4; } // 801B77CC
  cmps(c,0,(int32_t)c->r[3],2); // 801B77D0
  if (crb(c,2)) { goto L_801B7820; } // 801B77D4
  cmps(c,0,(int32_t)c->r[3],1); // 801B77D8
  if (crb(c,2)) { goto L_801B7828; } // 801B77DC
  goto L_801B7834; // 801B77E0
L_801B77E4:;
  c->r[3]=0u+0x24920000u; // 801B77E4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801B77E8
  c->r[3]=c->r[3]+0x00004925u; // 801B77EC
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[31])>>32); // 801B77F0
  c->r[3]=c->r[31]-c->r[4]; // 801B77F4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B77F8
  c->r[4]=c->r[3]+c->r[4]; // 801B77FC
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B7800
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801B7804
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801B7808
  c->r[4]=c->r[31]-c->r[5]; // 801B780C
  c->r[0]=c->r[4]+c->r[0]; // 801B7810
  c->r[30]=c->r[0]+c->r[3]; // 801B7814
  c->r[30]=c->r[30]+0x00000002u; // 801B7818
  goto L_801B78C4; // 801B781C
L_801B7820:;
  c->r[30]=c->r[0]+c->r[31]; // 801B7820
  goto L_801B78C4; // 801B7824
L_801B7828:;
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801B7828
  c->r[30]=c->r[0]+c->r[31]; // 801B782C
  goto L_801B78C4; // 801B7830
L_801B7834:;
  c->r[3]=0u+0x803A0000u; // 801B7834
  c->r[5]=0u+0x803A0000u; // 801B7838
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B783C
  c->r[4]=0u+0x0000013Eu; // 801B7840
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B7844
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7848
  c->lr=0x801B7850u; f_80212260(c); // 801B784C
  goto L_801B78C4; // 801B7850
L_801B7854:;
  c->lr=0x801B7858u; f_801B4F50(c); // 801B7854
  c->lr=0x801B785Cu; f_801B55D0(c); // 801B7858
  cmps(c,0,(int32_t)c->r[3],0); // 801B785C
  c->r[0]=R32(c->r[25]+0x00000014u); // 801B7860
  if (crb(c,2)) { goto L_801B786C; } // 801B7864
  c->r[3]=c->r[3]+0x80000000u; // 801B7868
L_801B786C:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B786C
  c->r[30]=0u+0x00000000u; // 801B7870
  if (crb(c,2)) { goto L_801B788C; } // 801B7874
  cmps(c,0,(int32_t)c->r[0],2); // 801B7878
  if (crb(c,2)) { goto L_801B7898; } // 801B787C
  cmps(c,0,(int32_t)c->r[0],1); // 801B7880
  if (crb(c,2)) { goto L_801B78A0; } // 801B7884
  goto L_801B78A8; // 801B7888
L_801B788C:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801B788C
  c->r[30]=c->r[3]+0x00000002u; // 801B7890
  goto L_801B78C4; // 801B7894
L_801B7898:;
  c->r[30]=c->r[3]|c->r[3]; // 801B7898
  goto L_801B78C4; // 801B789C
L_801B78A0:;
  c->r[30]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B78A0
  goto L_801B78C4; // 801B78A4
L_801B78A8:;
  c->r[3]=0u+0x803A0000u; // 801B78A8
  c->r[5]=0u+0x803A0000u; // 801B78AC
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B78B0
  c->r[4]=0u+0x0000013Eu; // 801B78B4
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B78B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B78BC
  c->lr=0x801B78C4u; f_80212260(c); // 801B78C0
L_801B78C4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B78C4
  c->r[3]=R32(c->r[25]+0x00000014u); // 801B78C8
  c->r[0]=c->r[27]|c->r[27]; // 801B78CC
  if (crb(c,2)) { goto L_801B78D8; } // 801B78D0
  c->r[0]=c->r[27]+0x80000000u; // 801B78D4
L_801B78D8:;
  cmps(c,0,(int32_t)c->r[3],3); // 801B78D8
  c->r[31]=0u+0x00000000u; // 801B78DC
  if (crb(c,2)) { goto L_801B78F8; } // 801B78E0
  cmps(c,0,(int32_t)c->r[3],2); // 801B78E4
  if (crb(c,2)) { goto L_801B7934; } // 801B78E8
  cmps(c,0,(int32_t)c->r[3],1); // 801B78EC
  if (crb(c,2)) { goto L_801B793C; } // 801B78F0
  goto L_801B7948; // 801B78F4
L_801B78F8:;
  c->r[3]=0u+0x24920000u; // 801B78F8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801B78FC
  c->r[3]=c->r[3]+0x00004925u; // 801B7900
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[28])>>32); // 801B7904
  c->r[3]=c->r[28]-c->r[4]; // 801B7908
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B790C
  c->r[4]=c->r[3]+c->r[4]; // 801B7910
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B7914
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801B7918
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801B791C
  c->r[4]=c->r[28]-c->r[5]; // 801B7920
  c->r[0]=c->r[4]+c->r[0]; // 801B7924
  c->r[31]=c->r[0]+c->r[3]; // 801B7928
  c->r[31]=c->r[31]+0x00000002u; // 801B792C
  goto L_801B7964; // 801B7930
L_801B7934:;
  c->r[31]=c->r[0]+c->r[28]; // 801B7934
  goto L_801B7964; // 801B7938
L_801B793C:;
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801B793C
  c->r[31]=c->r[0]+c->r[28]; // 801B7940
  goto L_801B7964; // 801B7944
L_801B7948:;
  c->r[3]=0u+0x803A0000u; // 801B7948
  c->r[5]=0u+0x803A0000u; // 801B794C
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B7950
  c->r[4]=0u+0x0000013Eu; // 801B7954
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B7958
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B795C
  c->lr=0x801B7964u; f_80212260(c); // 801B7960
L_801B7964:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B7964
  c->r[0]=R32(c->r[25]+0x00000014u); // 801B7968
  if (crb(c,2)) { goto L_801B7974; } // 801B796C
  c->r[27]=c->r[27]+0x80000000u; // 801B7970
L_801B7974:;
  cmps(c,0,(int32_t)c->r[0],3); // 801B7974
  c->r[28]=0u+0x00000000u; // 801B7978
  if (crb(c,2)) { goto L_801B7994; } // 801B797C
  cmps(c,0,(int32_t)c->r[0],2); // 801B7980
  if (crb(c,2)) { goto L_801B79D4; } // 801B7984
  cmps(c,0,(int32_t)c->r[0],1); // 801B7988
  if (crb(c,2)) { goto L_801B79E0; } // 801B798C
  goto L_801B79F0; // 801B7990
L_801B7994:;
  c->r[3]=0u+0x24920000u; // 801B7994
  c->r[6]=c->r[29]+0xFFFFFFFFu; // 801B7998
  c->r[3]=c->r[3]+0x00004925u; // 801B799C
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 801B79A0
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[6])>>32); // 801B79A4
  c->r[3]=c->r[6]-c->r[4]; // 801B79A8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B79AC
  c->r[4]=c->r[3]+c->r[4]; // 801B79B0
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B79B4
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801B79B8
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801B79BC
  c->r[4]=c->r[6]-c->r[5]; // 801B79C0
  c->r[0]=c->r[4]+c->r[0]; // 801B79C4
  c->r[28]=c->r[0]+c->r[3]; // 801B79C8
  c->r[28]=c->r[28]+0x00000002u; // 801B79CC
  goto L_801B7A0C; // 801B79D0
L_801B79D4:;
  c->r[28]=c->r[27]+c->r[29]; // 801B79D4
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 801B79D8
  goto L_801B7A0C; // 801B79DC
L_801B79E0:;
  c->r[0]=rotl(c->r[27],31)&0x7FFFFFFFu; // 801B79E0
  c->r[3]=c->r[29]+c->r[0]; // 801B79E4
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 801B79E8
  goto L_801B7A0C; // 801B79EC
L_801B79F0:;
  c->r[3]=0u+0x803A0000u; // 801B79F0
  c->r[5]=0u+0x803A0000u; // 801B79F4
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B79F8
  c->r[4]=0u+0x0000013Eu; // 801B79FC
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B7A00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7A04
  c->lr=0x801B7A0Cu; f_80212260(c); // 801B7A08
L_801B7A0C:;
  W16(c->r[1]+0x00000008u,c->r[26]); // 801B7A0C
  c->r[0]=R32(c->r[25]+0x00000014u); // 801B7A10
  cmps(c,0,(int32_t)c->r[0],3); // 801B7A14
  if (crb(c,2)) { goto L_801B7A30; } // 801B7A18
  cmps(c,0,(int32_t)c->r[0],2); // 801B7A1C
  if (crb(c,2)) { goto L_801B7A38; } // 801B7A20
  cmps(c,0,(int32_t)c->r[0],1); // 801B7A24
  if (crb(c,2)) { goto L_801B7A40; } // 801B7A28
  goto L_801B7A48; // 801B7A2C
L_801B7A30:;
  c->r[5]=0u+0x00000000u; // 801B7A30
  goto L_801B7A68; // 801B7A34
L_801B7A38:;
  c->r[5]=0u+0x00000019u; // 801B7A38
  goto L_801B7A68; // 801B7A3C
L_801B7A40:;
  c->r[5]=0u+0x0000000Au; // 801B7A40
  goto L_801B7A68; // 801B7A44
L_801B7A48:;
  c->r[3]=0u+0x803A0000u; // 801B7A48
  c->r[5]=0u+0x803A0000u; // 801B7A4C
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B7A50
  c->r[4]=0u+0x000001F7u; // 801B7A54
  c->r[5]=c->r[5]+0xFFFFBF60u; // 801B7A58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7A5C
  c->lr=0x801B7A64u; f_80212260(c); // 801B7A60
  c->r[5]=0u+0x00000000u; // 801B7A64
L_801B7A68:;
  c->r[4]=rotl(c->r[30],16)&0x0000FFFFu; // 801B7A68
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801B7A6C
  c->r[0]=rotl(c->r[31],16)&0x0000FFFFu; // 801B7A70
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801B7A74
  W16(c->r[1]+0x0000000Cu,c->r[4]); // 801B7A78
  W16(c->r[1]+0x0000000Eu,c->r[30]); // 801B7A7C
  W16(c->r[1]+0x00000010u,c->r[3]); // 801B7A80
  W16(c->r[1]+0x00000012u,c->r[28]); // 801B7A84
  W16(c->r[1]+0x00000014u,c->r[0]); // 801B7A88
  W16(c->r[1]+0x00000016u,c->r[31]); // 801B7A8C
  c->r[3]=R32(c->r[25]+0x00000000u); // 801B7A90
  cmps(c,0,(int32_t)c->r[3],0); // 801B7A94
  if (crb(c,2)) { goto L_801B7AA4; } // 801B7A98
  c->r[4]=c->r[1]+0x00000008u; // 801B7A9C
  c->lr=0x801B7AA4u; f_80152410(c); // 801B7AA0
L_801B7AA4:;
  c->r[3]=c->r[24]|c->r[24]; // 801B7AA4
  c->lr=0x801B7AACu; f_801251F0(c); // 801B7AA8
L_801B7AAC:;
  c->r[11]=c->r[1]+0x00000040u; // 801B7AAC
  c->lr=0x801B7AB4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7AB0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B7AB4
  c->lr=c->r[0]; // 801B7AB8
  c->r[1]=c->r[1]+0x00000040u; // 801B7ABC
  return; // 801B7AC0
}

// fn_801B7AD0
void f_801B7AD0(Ctx* __restrict c) {
  trace_call(0x801B7AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7AD0
  c->r[0]=c->lr; // 801B7AD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7AD8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801B7ADC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801B7AE0
  c->f[31]=c->f[1]; // 801B7AE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7AE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7AEC
  c->r[30]=c->r[4]|c->r[4]; // 801B7AF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7AF4
  c->r[29]=c->r[3]|c->r[3]; // 801B7AF8
  c->lr=0x801B7B00u; f_801251B0(c); // 801B7AFC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B7B00
  c->r[31]=c->r[3]|c->r[3]; // 801B7B04
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B08
  if (!crb(c,2)) { goto L_801B7B18; } // 801B7B0C
  c->lr=0x801B7B14u; f_801251F0(c); // 801B7B10
  goto L_801B7B8C; // 801B7B14
L_801B7B18:;
  cmps(c,0,(int32_t)c->r[30],5); // 801B7B18
  if (!crb(c,2)) { goto L_801B7B78; } // 801B7B1C
  c->r[3]=R32(c->r[29]+0x00000018u); // 801B7B20
  c->r[0]=0u+0x43300000u; // 801B7B24
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B7B28
  c->r[0]=c->r[3]^0x80000000u; // 801B7B2C
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[3]=RF64(ea);} // 801B7B30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B7B34
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 801B7B38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801B7B3C
  {uint32_t ea=c->r[2]+0xFFFFA58Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7B40
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801B7B44
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 801B7B48
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801B7B4C
  fcmp(c,0,c->f[1],c->f[0]); // 801B7B50
  if (!crb(c,1)) { goto L_801B7B60; } // 801B7B54
  c->r[30]=0u+0x00000002u; // 801B7B58
  goto L_801B7B78; // 801B7B5C
L_801B7B60:;
  {uint32_t ea=c->r[2]+0xFFFFA590u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B7B60
  fcmp(c,0,c->f[1],c->f[0]); // 801B7B64
  if (!crb(c,1)) { goto L_801B7B74; } // 801B7B68
  c->r[30]=0u+0x00000003u; // 801B7B6C
  goto L_801B7B78; // 801B7B70
L_801B7B74:;
  c->r[30]=0u+0x00000004u; // 801B7B74
L_801B7B78:;
  c->r[3]=c->r[29]|c->r[29]; // 801B7B78
  c->r[4]=c->r[30]|c->r[30]; // 801B7B7C
  c->lr=0x801B7B84u; f_801B9450(c); // 801B7B80
  c->r[3]=c->r[31]|c->r[31]; // 801B7B84
  c->lr=0x801B7B8Cu; f_801251F0(c); // 801B7B88
L_801B7B8C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B7B8C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801B7B90
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801B7B94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7B98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7B9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B7BA0
  c->lr=c->r[0]; // 801B7BA4
  c->r[1]=c->r[1]+0x00000030u; // 801B7BA8
  return; // 801B7BAC
}

// fn_801B7BB0
void f_801B7BB0(Ctx* __restrict c) {
  trace_call(0x801B7BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7BB0
  c->r[0]=c->lr; // 801B7BB4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B7BB8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801B7BBC
  c->r[31]=c->r[3]|c->r[3]; // 801B7BC0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801B7BC4
  W32(c->r[1]+0x00000034u,c->r[29]); // 801B7BC8
  c->r[29]=0u+0x803A0000u; // 801B7BCC
  c->r[29]=c->r[29]+0xFFFFBF50u; // 801B7BD0
  W32(c->r[1]+0x00000030u,c->r[28]); // 801B7BD4
  c->r[28]=c->r[4]|c->r[4]; // 801B7BD8
  c->lr=0x801B7BE0u; f_801251B0(c); // 801B7BDC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B7BE0
  c->r[30]=c->r[3]|c->r[3]; // 801B7BE4
  cmps(c,0,(int32_t)c->r[0],0); // 801B7BE8
  if (!crb(c,2)) { goto L_801B7BF8; } // 801B7BEC
  c->lr=0x801B7BF4u; f_801251F0(c); // 801B7BF0
  goto L_801B7D1C; // 801B7BF4
L_801B7BF8:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801B7BF8
  cmps(c,0,(int32_t)c->r[0],3); // 801B7BFC
  if (crb(c,2)) { goto L_801B7C18; } // 801B7C00
  cmps(c,0,(int32_t)c->r[0],1); // 801B7C04
  if (crb(c,2)) { goto L_801B7C68; } // 801B7C08
  cmps(c,0,(int32_t)c->r[0],2); // 801B7C0C
  if (crb(c,2)) { goto L_801B7C94; } // 801B7C10
  goto L_801B7CC0; // 801B7C14
L_801B7C18:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B7C18
  if (!crb(c,2)) { goto L_801B7C34; } // 801B7C1C
  c->r[3]=c->r[29]+0x00000000u; // 801B7C20
  c->r[5]=c->r[29]+0x00000048u; // 801B7C24
  c->r[4]=0u+0x00000215u; // 801B7C28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7C2C
  c->lr=0x801B7C34u; f_80212260(c); // 801B7C30
L_801B7C34:;
  c->r[4]=c->r[28]|c->r[28]; // 801B7C34
  c->r[3]=c->r[1]+0x00000008u; // 801B7C38
  c->r[5]=0u+0x00000020u; // 801B7C3C
  c->lr=0x801B7C44u; f_800043C4(c); // 801B7C40
  c->r[5]=R16(c->r[28]+0x00000020u); // 801B7C44
  c->r[4]=R16(c->r[28]+0x00000022u); // 801B7C48
  c->r[3]=R16(c->r[28]+0x00000024u); // 801B7C4C
  c->r[0]=R16(c->r[28]+0x00000026u); // 801B7C50
  W16(c->r[1]+0x00000028u,c->r[5]); // 801B7C54
  W16(c->r[1]+0x0000002Au,c->r[4]); // 801B7C58
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 801B7C5C
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801B7C60
  goto L_801B7CD4; // 801B7C64
L_801B7C68:;
  c->r[3]=c->r[1]+0x00000008u; // 801B7C68
  c->r[4]=0u+0x00000000u; // 801B7C6C
  c->r[5]=0u+0x00000020u; // 801B7C70
  c->lr=0x801B7C78u; f_80004714(c); // 801B7C74
  c->r[0]=0u+0x00000000u; // 801B7C78
  c->r[3]=0u+0x00000800u; // 801B7C7C
  W16(c->r[1]+0x00000028u,c->r[3]); // 801B7C80
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801B7C84
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801B7C88
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801B7C8C
  goto L_801B7CD4; // 801B7C90
L_801B7C94:;
  c->r[3]=c->r[1]+0x00000008u; // 801B7C94
  c->r[4]=0u+0x00000000u; // 801B7C98
  c->r[5]=0u+0x00000020u; // 801B7C9C
  c->lr=0x801B7CA4u; f_80004714(c); // 801B7CA0
  c->r[0]=0u+0x00000000u; // 801B7CA4
  c->r[3]=0u+0x00000100u; // 801B7CA8
  W16(c->r[1]+0x00000028u,c->r[3]); // 801B7CAC
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801B7CB0
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801B7CB4
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801B7CB8
  goto L_801B7CD4; // 801B7CBC
L_801B7CC0:;
  c->r[3]=c->r[29]+0x00000000u; // 801B7CC0
  c->r[5]=c->r[29]+0x00000010u; // 801B7CC4
  c->r[4]=0u+0x0000022Bu; // 801B7CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7CCC
  c->lr=0x801B7CD4u; f_80212260(c); // 801B7CD0
L_801B7CD4:;
  c->lr=0x801B7CD8u; f_801251B0(c); // 801B7CD4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B7CD8
  c->r[29]=c->r[3]|c->r[3]; // 801B7CDC
  cmps(c,0,(int32_t)c->r[4],0); // 801B7CE0
  if (!crb(c,2)) { goto L_801B7CF0; } // 801B7CE4
  c->lr=0x801B7CECu; f_801251F0(c); // 801B7CE8
  goto L_801B7D14; // 801B7CEC
L_801B7CF0:;
  c->r[3]=c->r[4]+0x000000A6u; // 801B7CF0
  c->r[4]=c->r[1]+0x00000008u; // 801B7CF4
  c->r[5]=0u+0x00000028u; // 801B7CF8
  c->lr=0x801B7D00u; f_800043C4(c); // 801B7CFC
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B7D00
  c->r[3]=c->r[29]|c->r[29]; // 801B7D04
  c->r[0]=c->r[0]|0x00008000u; // 801B7D08
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B7D0C
  c->lr=0x801B7D14u; f_801251F0(c); // 801B7D10
L_801B7D14:;
  c->r[3]=c->r[30]|c->r[30]; // 801B7D14
  c->lr=0x801B7D1Cu; f_801251F0(c); // 801B7D18
L_801B7D1C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B7D1C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801B7D20
  c->r[30]=R32(c->r[1]+0x00000038u); // 801B7D24
  c->r[29]=R32(c->r[1]+0x00000034u); // 801B7D28
  c->r[28]=R32(c->r[1]+0x00000030u); // 801B7D2C
  c->lr=c->r[0]; // 801B7D30
  c->r[1]=c->r[1]+0x00000040u; // 801B7D34
  return; // 801B7D38
}

// fn_801B7D40
void f_801B7D40(Ctx* __restrict c) {
  trace_call(0x801B7D40u);
  c->r[5]=R16(c->r[3]+0x0000001Eu); // 801B7D40
  c->r[0]=R16(c->r[4]+0x00000000u); // 801B7D44
  cmpu(c,0,c->r[5],c->r[0]); // 801B7D48
  if (crb(c,2)) { goto L_801B7D58; } // 801B7D4C
  c->r[3]=0u+0x00000001u; // 801B7D50
  return; // 801B7D54
L_801B7D58:;
  c->r[5]=R16(c->r[3]+0x00000020u); // 801B7D58
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B7D5C
  cmpu(c,0,c->r[5],c->r[0]); // 801B7D60
  if (crb(c,2)) { goto L_801B7D70; } // 801B7D64
  c->r[3]=0u+0x00000001u; // 801B7D68
  return; // 801B7D6C
L_801B7D70:;
  c->r[5]=R16(c->r[3]+0x00000022u); // 801B7D70
  c->r[0]=R16(c->r[4]+0x00000004u); // 801B7D74
  cmpu(c,0,c->r[5],c->r[0]); // 801B7D78
  if (crb(c,2)) { goto L_801B7D88; } // 801B7D7C
  c->r[3]=0u+0x00000001u; // 801B7D80
  return; // 801B7D84
L_801B7D88:;
  c->r[5]=R16(c->r[3]+0x00000024u); // 801B7D88
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B7D8C
  cmpu(c,0,c->r[5],c->r[0]); // 801B7D90
  if (crb(c,2)) { goto L_801B7DA0; } // 801B7D94
  c->r[3]=0u+0x00000001u; // 801B7D98
  return; // 801B7D9C
L_801B7DA0:;
  c->r[5]=R16(c->r[3]+0x00000026u); // 801B7DA0
  c->r[0]=R16(c->r[4]+0x00000008u); // 801B7DA4
  cmpu(c,0,c->r[5],c->r[0]); // 801B7DA8
  if (crb(c,2)) { goto L_801B7DB8; } // 801B7DAC
  c->r[3]=0u+0x00000001u; // 801B7DB0
  return; // 801B7DB4
L_801B7DB8:;
  c->r[5]=R16(c->r[3]+0x00000028u); // 801B7DB8
  c->r[0]=R16(c->r[4]+0x0000000Au); // 801B7DBC
  cmpu(c,0,c->r[5],c->r[0]); // 801B7DC0
  if (crb(c,2)) { goto L_801B7DD0; } // 801B7DC4
  c->r[3]=0u+0x00000001u; // 801B7DC8
  return; // 801B7DCC
L_801B7DD0:;
  c->r[5]=R16(c->r[3]+0x0000002Au); // 801B7DD0
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B7DD4
  cmpu(c,0,c->r[5],c->r[0]); // 801B7DD8
  if (crb(c,2)) { goto L_801B7DE8; } // 801B7DDC
  c->r[3]=0u+0x00000001u; // 801B7DE0
  return; // 801B7DE4
L_801B7DE8:;
  c->r[5]=R16(c->r[3]+0x0000002Cu); // 801B7DE8
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801B7DEC
  cmpu(c,0,c->r[5],c->r[0]); // 801B7DF0
  if (crb(c,2)) { goto L_801B7E00; } // 801B7DF4
  c->r[3]=0u+0x00000001u; // 801B7DF8
  return; // 801B7DFC
L_801B7E00:;
  c->r[5]=R16(c->r[3]+0x0000002Eu); // 801B7E00
  c->r[0]=R16(c->r[4]+0x00000010u); // 801B7E04
  cmpu(c,0,c->r[5],c->r[0]); // 801B7E08
  if (crb(c,2)) { goto L_801B7E18; } // 801B7E0C
  c->r[3]=0u+0x00000001u; // 801B7E10
  return; // 801B7E14
L_801B7E18:;
  c->r[5]=R16(c->r[3]+0x00000030u); // 801B7E18
  c->r[0]=R16(c->r[4]+0x00000012u); // 801B7E1C
  cmpu(c,0,c->r[5],c->r[0]); // 801B7E20
  if (crb(c,2)) { goto L_801B7E30; } // 801B7E24
  c->r[3]=0u+0x00000001u; // 801B7E28
  return; // 801B7E2C
L_801B7E30:;
  c->r[5]=R16(c->r[3]+0x00000032u); // 801B7E30
  c->r[0]=R16(c->r[4]+0x00000014u); // 801B7E34
  cmpu(c,0,c->r[5],c->r[0]); // 801B7E38
  if (crb(c,2)) { goto L_801B7E48; } // 801B7E3C
  c->r[3]=0u+0x00000001u; // 801B7E40
  return; // 801B7E44
L_801B7E48:;
  c->r[5]=R16(c->r[3]+0x00000034u); // 801B7E48
  c->r[0]=R16(c->r[4]+0x00000016u); // 801B7E4C
  c->r[3]=c->r[0]-c->r[5]; // 801B7E50
  c->r[0]=c->r[5]-c->r[0]; // 801B7E54
  c->r[0]=c->r[3]|c->r[0]; // 801B7E58
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B7E5C
  return; // 801B7E60
}

// fn_801B7E70
void f_801B7E70(Ctx* __restrict c) {
  trace_call(0x801B7E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7E70
  c->r[0]=c->lr; // 801B7E74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7E78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7E7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7E80
  c->r[30]=c->r[4]|c->r[4]; // 801B7E84
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7E88
  c->r[29]=c->r[3]|c->r[3]; // 801B7E8C
  c->lr=0x801B7E94u; f_801251B0(c); // 801B7E90
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B7E94
  c->r[31]=c->r[3]|c->r[3]; // 801B7E98
  cmps(c,0,(int32_t)c->r[0],0); // 801B7E9C
  if (!crb(c,2)) { goto L_801B7EAC; } // 801B7EA0
  c->lr=0x801B7EA8u; f_801251F0(c); // 801B7EA4
  goto L_801B7F50; // 801B7EA8
L_801B7EAC:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801B7EAC
  cmps(c,0,(int32_t)c->r[0],3); // 801B7EB0
  if (!crb(c,2)) { goto L_801B7EF8; } // 801B7EB4
  cmps(c,0,(int32_t)c->r[30],0); // 801B7EB8
  if (!crb(c,2)) { goto L_801B7EDC; } // 801B7EBC
  c->r[3]=0u+0x803A0000u; // 801B7EC0
  c->r[5]=0u+0x803A0000u; // 801B7EC4
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B7EC8
  c->r[4]=0u+0x0000024Bu; // 801B7ECC
  c->r[5]=c->r[5]+0xFFFFBF98u; // 801B7ED0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B7ED4
  c->lr=0x801B7EDCu; f_80212260(c); // 801B7ED8
L_801B7EDC:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 801B7EDC
  c->r[3]=R16(c->r[30]+0x00000002u); // 801B7EE0
  c->r[0]=R16(c->r[30]+0x00000004u); // 801B7EE4
  W16(c->r[1]+0x00000008u,c->r[4]); // 801B7EE8
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801B7EEC
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B7EF0
  goto L_801B7F08; // 801B7EF4
L_801B7EF8:;
  c->r[0]=0u+0x00000000u; // 801B7EF8
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B7EFC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801B7F00
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B7F04
L_801B7F08:;
  c->lr=0x801B7F0Cu; f_801251B0(c); // 801B7F08
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B7F0C
  c->r[30]=c->r[3]|c->r[3]; // 801B7F10
  cmps(c,0,(int32_t)c->r[4],0); // 801B7F14
  if (!crb(c,2)) { goto L_801B7F24; } // 801B7F18
  c->lr=0x801B7F20u; f_801251F0(c); // 801B7F1C
  goto L_801B7F48; // 801B7F20
L_801B7F24:;
  c->r[3]=c->r[4]+0x000000DCu; // 801B7F24
  c->r[4]=c->r[1]+0x00000008u; // 801B7F28
  c->r[5]=0u+0x00000006u; // 801B7F2C
  c->lr=0x801B7F34u; f_800043C4(c); // 801B7F30
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B7F34
  c->r[3]=c->r[30]|c->r[30]; // 801B7F38
  c->r[0]=c->r[0]|0x00040000u; // 801B7F3C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B7F40
  c->lr=0x801B7F48u; f_801251F0(c); // 801B7F44
L_801B7F48:;
  c->r[3]=c->r[31]|c->r[31]; // 801B7F48
  c->lr=0x801B7F50u; f_801251F0(c); // 801B7F4C
L_801B7F50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7F50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7F54
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7F58
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B7F5C
  c->lr=c->r[0]; // 801B7F60
  c->r[1]=c->r[1]+0x00000020u; // 801B7F64
  return; // 801B7F68
}

// fn_801B7F70
void f_801B7F70(Ctx* __restrict c) {
  trace_call(0x801B7F70u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7F70
  c->r[0]=c->lr; // 801B7F74
  W32(c->r[1]+0x00000084u,c->r[0]); // 801B7F78
  c->r[11]=c->r[1]+0x00000080u; // 801B7F7C
  c->lr=0x801B7F84u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7F80
  c->r[17]=c->r[3]|c->r[3]; // 801B7F84
  c->r[18]=c->r[4]|c->r[4]; // 801B7F88
  c->lr=0x801B7F90u; f_801251B0(c); // 801B7F8C
  c->r[4]=R32(c->r[17]+0x00000000u); // 801B7F90
  c->r[16]=c->r[3]|c->r[3]; // 801B7F94
  cmps(c,1,(int32_t)c->r[4],0); // 801B7F98
  if (!crb(c,6)) { goto L_801B7FAC; } // 801B7F9C
  c->lr=0x801B7FA4u; f_801251F0(c); // 801B7FA0
  c->r[3]=0u+0x00000000u; // 801B7FA4
  goto L_801B8578; // 801B7FA8
L_801B7FAC:;
  c->r[0]=R8(c->r[17]+0x0000001Cu); // 801B7FAC
  cmps(c,0,(int32_t)c->r[0],0); // 801B7FB0
  if (!crb(c,2)) { goto L_801B7FD8; } // 801B7FB4
  c->r[3]=0u+0x00000000u; // 801B7FB8
  if (crb(c,6)) { goto L_801B7FD0; } // 801B7FBC
  c->r[0]=R16(c->r[4]+0x00000038u); // 801B7FC0
  cmpu(c,0,c->r[0],0x00000001u); // 801B7FC4
  if (!crb(c,2)) { goto L_801B7FD0; } // 801B7FC8
  c->r[3]=0u+0x00000001u; // 801B7FCC
L_801B7FD0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B7FD0
  if (!crb(c,2)) { goto L_801B8040; } // 801B7FD4
L_801B7FD8:;
  c->r[20]=R16(c->r[18]+0x00000000u); // 801B7FD8
  c->r[0]=0u+0x00000000u; // 801B7FDC
  c->r[19]=R16(c->r[18]+0x00000002u); // 801B7FE0
  c->r[12]=R16(c->r[18]+0x00000004u); // 801B7FE4
  c->r[11]=R16(c->r[18]+0x00000006u); // 801B7FE8
  c->r[10]=R16(c->r[18]+0x00000008u); // 801B7FEC
  c->r[9]=R16(c->r[18]+0x0000000Au); // 801B7FF0
  c->r[8]=R16(c->r[18]+0x0000000Cu); // 801B7FF4
  c->r[7]=R16(c->r[18]+0x0000000Eu); // 801B7FF8
  c->r[6]=R16(c->r[18]+0x00000010u); // 801B7FFC
  c->r[5]=R16(c->r[18]+0x00000012u); // 801B8000
  c->r[4]=R16(c->r[18]+0x00000014u); // 801B8004
  c->r[3]=R16(c->r[18]+0x00000016u); // 801B8008
  W16(c->r[17]+0x0000001Eu,c->r[20]); // 801B800C
  W16(c->r[17]+0x00000020u,c->r[19]); // 801B8010
  W16(c->r[17]+0x00000022u,c->r[12]); // 801B8014
  W16(c->r[17]+0x00000024u,c->r[11]); // 801B8018
  W16(c->r[17]+0x00000026u,c->r[10]); // 801B801C
  W16(c->r[17]+0x00000028u,c->r[9]); // 801B8020
  W16(c->r[17]+0x0000002Au,c->r[8]); // 801B8024
  W16(c->r[17]+0x0000002Cu,c->r[7]); // 801B8028
  W16(c->r[17]+0x0000002Eu,c->r[6]); // 801B802C
  W16(c->r[17]+0x00000030u,c->r[5]); // 801B8030
  W16(c->r[17]+0x00000032u,c->r[4]); // 801B8034
  W16(c->r[17]+0x00000034u,c->r[3]); // 801B8038
  W8(c->r[17]+0x0000001Cu,c->r[0]); // 801B803C
L_801B8040:;
  c->r[3]=c->r[17]|c->r[17]; // 801B8040
  c->r[4]=c->r[18]|c->r[18]; // 801B8044
  c->lr=0x801B804Cu; f_801B7D40(c); // 801B8048
  c->r[4]=R16(c->r[17]+0x0000001Eu); // 801B804C
  c->r[19]=c->r[3]|c->r[3]; // 801B8050
  W16(c->r[1]+0x00000008u,c->r[4]); // 801B8054
  c->r[5]=R16(c->r[18]+0x00000000u); // 801B8058
  c->r[0]=R16(c->r[17]+0x00000020u); // 801B805C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B8060
  cmpu(c,0,c->r[4],c->r[5]); // 801B8064
  c->r[0]=R16(c->r[17]+0x00000022u); // 801B8068
  W16(c->r[1]+0x00000028u,c->r[0]); // 801B806C
  c->r[0]=R16(c->r[17]+0x00000024u); // 801B8070
  W16(c->r[1]+0x00000010u,c->r[0]); // 801B8074
  c->r[0]=R16(c->r[17]+0x00000026u); // 801B8078
  W16(c->r[1]+0x00000014u,c->r[0]); // 801B807C
  c->r[0]=R16(c->r[17]+0x00000028u); // 801B8080
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801B8084
  c->r[0]=R16(c->r[17]+0x0000002Au); // 801B8088
  W16(c->r[1]+0x00000018u,c->r[0]); // 801B808C
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 801B8090
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801B8094
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 801B8098
  W16(c->r[1]+0x00000030u,c->r[0]); // 801B809C
  c->r[0]=R16(c->r[17]+0x00000030u); // 801B80A0
  W16(c->r[1]+0x00000020u,c->r[0]); // 801B80A4
  c->r[0]=R16(c->r[17]+0x00000032u); // 801B80A8
  W16(c->r[1]+0x00000024u,c->r[0]); // 801B80AC
  c->r[0]=R16(c->r[17]+0x00000034u); // 801B80B0
  W16(c->r[1]+0x00000034u,c->r[0]); // 801B80B4
  if (!crb(c,2)) { goto L_801B80C4; } // 801B80B8
  c->r[31]=0u+0x00000000u; // 801B80BC
  goto L_801B80E0; // 801B80C0
L_801B80C4:;
  c->r[3]=0u+0x2AAB0000u; // 801B80C4
  c->r[0]=c->r[5]-c->r[4]; // 801B80C8
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B80CC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B80D0
  c->r[0]=sraw(c,c->r[0],4); // 801B80D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B80D8
  c->r[31]=c->r[0]+c->r[3]; // 801B80DC
L_801B80E0:;
  c->r[4]=R16(c->r[18]+0x00000002u); // 801B80E0
  c->r[0]=R16(c->r[17]+0x00000020u); // 801B80E4
  cmpu(c,0,c->r[0],c->r[4]); // 801B80E8
  if (!crb(c,2)) { goto L_801B80F8; } // 801B80EC
  c->r[30]=0u+0x00000000u; // 801B80F0
  goto L_801B8114; // 801B80F4
L_801B80F8:;
  c->r[3]=0u+0x2AAB0000u; // 801B80F8
  c->r[0]=c->r[4]-c->r[0]; // 801B80FC
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B8100
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B8104
  c->r[0]=sraw(c,c->r[0],4); // 801B8108
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B810C
  c->r[30]=c->r[0]+c->r[3]; // 801B8110
L_801B8114:;
  c->r[4]=R16(c->r[18]+0x00000004u); // 801B8114
  c->r[0]=R16(c->r[17]+0x00000022u); // 801B8118
  cmpu(c,0,c->r[0],c->r[4]); // 801B811C
  if (!crb(c,2)) { goto L_801B812C; } // 801B8120
  c->r[29]=0u+0x00000000u; // 801B8124
  goto L_801B8148; // 801B8128
L_801B812C:;
  c->r[3]=0u+0x2AAB0000u; // 801B812C
  c->r[0]=c->r[4]-c->r[0]; // 801B8130
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B8134
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B8138
  c->r[0]=sraw(c,c->r[0],4); // 801B813C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B8140
  c->r[29]=c->r[0]+c->r[3]; // 801B8144
L_801B8148:;
  c->r[4]=R16(c->r[18]+0x00000006u); // 801B8148
  c->r[0]=R16(c->r[17]+0x00000024u); // 801B814C
  cmpu(c,0,c->r[0],c->r[4]); // 801B8150
  if (!crb(c,2)) { goto L_801B8160; } // 801B8154
  c->r[28]=0u+0x00000000u; // 801B8158
  goto L_801B817C; // 801B815C
L_801B8160:;
  c->r[3]=0u+0x2AAB0000u; // 801B8160
  c->r[0]=c->r[4]-c->r[0]; // 801B8164
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B8168
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B816C
  c->r[0]=sraw(c,c->r[0],4); // 801B8170
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B8174
  c->r[28]=c->r[0]+c->r[3]; // 801B8178
L_801B817C:;
  c->r[4]=R16(c->r[18]+0x00000008u); // 801B817C
  c->r[0]=R16(c->r[17]+0x00000026u); // 801B8180
  cmpu(c,0,c->r[0],c->r[4]); // 801B8184
  if (!crb(c,2)) { goto L_801B8194; } // 801B8188
  c->r[27]=0u+0x00000000u; // 801B818C
  goto L_801B81B0; // 801B8190
L_801B8194:;
  c->r[3]=0u+0x2AAB0000u; // 801B8194
  c->r[0]=c->r[4]-c->r[0]; // 801B8198
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B819C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B81A0
  c->r[0]=sraw(c,c->r[0],4); // 801B81A4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B81A8
  c->r[27]=c->r[0]+c->r[3]; // 801B81AC
L_801B81B0:;
  c->r[4]=R16(c->r[18]+0x0000000Au); // 801B81B0
  c->r[0]=R16(c->r[17]+0x00000028u); // 801B81B4
  cmpu(c,0,c->r[0],c->r[4]); // 801B81B8
  if (!crb(c,2)) { goto L_801B81C8; } // 801B81BC
  c->r[26]=0u+0x00000000u; // 801B81C0
  goto L_801B81E4; // 801B81C4
L_801B81C8:;
  c->r[3]=0u+0x2AAB0000u; // 801B81C8
  c->r[0]=c->r[4]-c->r[0]; // 801B81CC
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B81D0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B81D4
  c->r[0]=sraw(c,c->r[0],4); // 801B81D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B81DC
  c->r[26]=c->r[0]+c->r[3]; // 801B81E0
L_801B81E4:;
  c->r[4]=R16(c->r[18]+0x0000000Cu); // 801B81E4
  c->r[0]=R16(c->r[17]+0x0000002Au); // 801B81E8
  cmpu(c,0,c->r[0],c->r[4]); // 801B81EC
  if (!crb(c,2)) { goto L_801B81FC; } // 801B81F0
  c->r[25]=0u+0x00000000u; // 801B81F4
  goto L_801B8218; // 801B81F8
L_801B81FC:;
  c->r[3]=0u+0x2AAB0000u; // 801B81FC
  c->r[0]=c->r[4]-c->r[0]; // 801B8200
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B8204
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B8208
  c->r[0]=sraw(c,c->r[0],4); // 801B820C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B8210
  c->r[25]=c->r[0]+c->r[3]; // 801B8214
L_801B8218:;
  c->r[4]=R16(c->r[18]+0x0000000Eu); // 801B8218
  c->r[0]=R16(c->r[17]+0x0000002Cu); // 801B821C
  cmpu(c,0,c->r[0],c->r[4]); // 801B8220
  if (!crb(c,2)) { goto L_801B8230; } // 801B8224
  c->r[24]=0u+0x00000000u; // 801B8228
  goto L_801B824C; // 801B822C
L_801B8230:;
  c->r[3]=0u+0x2AAB0000u; // 801B8230
  c->r[0]=c->r[4]-c->r[0]; // 801B8234
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B8238
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B823C
  c->r[0]=sraw(c,c->r[0],4); // 801B8240
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B8244
  c->r[24]=c->r[0]+c->r[3]; // 801B8248
L_801B824C:;
  c->r[4]=R16(c->r[18]+0x00000010u); // 801B824C
  c->r[0]=R16(c->r[17]+0x0000002Eu); // 801B8250
  cmpu(c,0,c->r[0],c->r[4]); // 801B8254
  if (!crb(c,2)) { goto L_801B8264; } // 801B8258
  c->r[23]=0u+0x00000000u; // 801B825C
  goto L_801B8280; // 801B8260
L_801B8264:;
  c->r[3]=0u+0x2AAB0000u; // 801B8264
  c->r[0]=c->r[4]-c->r[0]; // 801B8268
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B826C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B8270
  c->r[0]=sraw(c,c->r[0],4); // 801B8274
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B8278
  c->r[23]=c->r[0]+c->r[3]; // 801B827C
L_801B8280:;
  c->r[4]=R16(c->r[18]+0x00000012u); // 801B8280
  c->r[0]=R16(c->r[17]+0x00000030u); // 801B8284
  cmpu(c,0,c->r[0],c->r[4]); // 801B8288
  if (!crb(c,2)) { goto L_801B8298; } // 801B828C
  c->r[22]=0u+0x00000000u; // 801B8290
  goto L_801B82B4; // 801B8294
L_801B8298:;
  c->r[3]=0u+0x2AAB0000u; // 801B8298
  c->r[0]=c->r[4]-c->r[0]; // 801B829C
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B82A0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B82A4
  c->r[0]=sraw(c,c->r[0],4); // 801B82A8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B82AC
  c->r[22]=c->r[0]+c->r[3]; // 801B82B0
L_801B82B4:;
  c->r[4]=R16(c->r[18]+0x00000014u); // 801B82B4
  c->r[0]=R16(c->r[17]+0x00000032u); // 801B82B8
  cmpu(c,0,c->r[0],c->r[4]); // 801B82BC
  if (!crb(c,2)) { goto L_801B82CC; } // 801B82C0
  c->r[21]=0u+0x00000000u; // 801B82C4
  goto L_801B82E8; // 801B82C8
L_801B82CC:;
  c->r[3]=0u+0x2AAB0000u; // 801B82CC
  c->r[0]=c->r[4]-c->r[0]; // 801B82D0
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B82D4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B82D8
  c->r[0]=sraw(c,c->r[0],4); // 801B82DC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B82E0
  c->r[21]=c->r[0]+c->r[3]; // 801B82E4
L_801B82E8:;
  c->r[4]=R16(c->r[18]+0x00000016u); // 801B82E8
  c->r[0]=R16(c->r[17]+0x00000034u); // 801B82EC
  cmpu(c,0,c->r[0],c->r[4]); // 801B82F0
  if (!crb(c,2)) { goto L_801B8300; } // 801B82F4
  c->r[20]=0u+0x00000000u; // 801B82F8
  goto L_801B831C; // 801B82FC
L_801B8300:;
  c->r[3]=0u+0x2AAB0000u; // 801B8300
  c->r[0]=c->r[4]-c->r[0]; // 801B8304
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801B8308
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B830C
  c->r[0]=sraw(c,c->r[0],4); // 801B8310
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B8314
  c->r[20]=c->r[0]+c->r[3]; // 801B8318
L_801B831C:;
  W16(c->r[1]+0x0000000Au,c->r[31]); // 801B831C
  c->r[3]=c->r[17]|c->r[17]; // 801B8320
  c->r[4]=c->r[1]+0x00000008u; // 801B8324
  c->r[5]=0u+0x00000000u; // 801B8328
  W16(c->r[1]+0x0000000Eu,c->r[30]); // 801B832C
  W16(c->r[1]+0x0000002Au,c->r[29]); // 801B8330
  W16(c->r[1]+0x00000012u,c->r[28]); // 801B8334
  W16(c->r[1]+0x00000016u,c->r[27]); // 801B8338
  W16(c->r[1]+0x0000002Eu,c->r[26]); // 801B833C
  W16(c->r[1]+0x0000001Au,c->r[25]); // 801B8340
  W16(c->r[1]+0x0000001Eu,c->r[24]); // 801B8344
  W16(c->r[1]+0x00000032u,c->r[23]); // 801B8348
  W16(c->r[1]+0x00000022u,c->r[22]); // 801B834C
  W16(c->r[1]+0x00000026u,c->r[21]); // 801B8350
  W16(c->r[1]+0x00000036u,c->r[20]); // 801B8354
  c->lr=0x801B835Cu; f_801B91D0(c); // 801B8358
  c->r[0]=R16(c->r[18]+0x00000000u); // 801B835C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8360
  if (crb(c,2)) { goto L_801B8370; } // 801B8364
  cmps(c,0,(int32_t)c->r[31],0); // 801B8368
  if (!crb(c,2)) { goto L_801B8378; } // 801B836C
L_801B8370:;
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 801B8370
  goto L_801B8388; // 801B8374
L_801B8378:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)96); // 801B8378
  c->r[3]=R16(c->r[17]+0x0000001Eu); // 801B837C
  c->r[0]=c->r[3]+c->r[0]; // 801B8380
  W16(c->r[17]+0x0000001Eu,c->r[0]); // 801B8384
L_801B8388:;
  c->r[0]=R16(c->r[18]+0x00000002u); // 801B8388
  cmps(c,0,(int32_t)c->r[0],0); // 801B838C
  if (crb(c,2)) { goto L_801B839C; } // 801B8390
  cmps(c,0,(int32_t)c->r[30],0); // 801B8394
  if (!crb(c,2)) { goto L_801B83A4; } // 801B8398
L_801B839C:;
  W16(c->r[17]+0x00000020u,c->r[0]); // 801B839C
  goto L_801B83B4; // 801B83A0
L_801B83A4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 801B83A4
  c->r[3]=R16(c->r[17]+0x00000020u); // 801B83A8
  c->r[0]=c->r[3]+c->r[0]; // 801B83AC
  W16(c->r[17]+0x00000020u,c->r[0]); // 801B83B0
L_801B83B4:;
  c->r[0]=R16(c->r[18]+0x00000004u); // 801B83B4
  cmps(c,0,(int32_t)c->r[0],0); // 801B83B8
  if (crb(c,2)) { goto L_801B83C8; } // 801B83BC
  cmps(c,0,(int32_t)c->r[29],0); // 801B83C0
  if (!crb(c,2)) { goto L_801B83D0; } // 801B83C4
L_801B83C8:;
  W16(c->r[17]+0x00000022u,c->r[0]); // 801B83C8
  goto L_801B83E0; // 801B83CC
L_801B83D0:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)96); // 801B83D0
  c->r[3]=R16(c->r[17]+0x00000022u); // 801B83D4
  c->r[0]=c->r[3]+c->r[0]; // 801B83D8
  W16(c->r[17]+0x00000022u,c->r[0]); // 801B83DC
L_801B83E0:;
  c->r[0]=R16(c->r[18]+0x00000006u); // 801B83E0
  cmps(c,0,(int32_t)c->r[0],0); // 801B83E4
  if (crb(c,2)) { goto L_801B83F4; } // 801B83E8
  cmps(c,0,(int32_t)c->r[28],0); // 801B83EC
  if (!crb(c,2)) { goto L_801B83FC; } // 801B83F0
L_801B83F4:;
  W16(c->r[17]+0x00000024u,c->r[0]); // 801B83F4
  goto L_801B840C; // 801B83F8
L_801B83FC:;
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)96); // 801B83FC
  c->r[3]=R16(c->r[17]+0x00000024u); // 801B8400
  c->r[0]=c->r[3]+c->r[0]; // 801B8404
  W16(c->r[17]+0x00000024u,c->r[0]); // 801B8408
L_801B840C:;
  c->r[0]=R16(c->r[18]+0x00000008u); // 801B840C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8410
  if (crb(c,2)) { goto L_801B8420; } // 801B8414
  cmps(c,0,(int32_t)c->r[27],0); // 801B8418
  if (!crb(c,2)) { goto L_801B8428; } // 801B841C
L_801B8420:;
  W16(c->r[17]+0x00000026u,c->r[0]); // 801B8420
  goto L_801B8438; // 801B8424
L_801B8428:;
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)96); // 801B8428
  c->r[3]=R16(c->r[17]+0x00000026u); // 801B842C
  c->r[0]=c->r[3]+c->r[0]; // 801B8430
  W16(c->r[17]+0x00000026u,c->r[0]); // 801B8434
L_801B8438:;
  c->r[0]=R16(c->r[18]+0x0000000Au); // 801B8438
  cmps(c,0,(int32_t)c->r[0],0); // 801B843C
  if (crb(c,2)) { goto L_801B844C; } // 801B8440
  cmps(c,0,(int32_t)c->r[26],0); // 801B8444
  if (!crb(c,2)) { goto L_801B8454; } // 801B8448
L_801B844C:;
  W16(c->r[17]+0x00000028u,c->r[0]); // 801B844C
  goto L_801B8464; // 801B8450
L_801B8454:;
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)96); // 801B8454
  c->r[3]=R16(c->r[17]+0x00000028u); // 801B8458
  c->r[0]=c->r[3]+c->r[0]; // 801B845C
  W16(c->r[17]+0x00000028u,c->r[0]); // 801B8460
L_801B8464:;
  c->r[0]=R16(c->r[18]+0x0000000Cu); // 801B8464
  cmps(c,0,(int32_t)c->r[0],0); // 801B8468
  if (crb(c,2)) { goto L_801B8478; } // 801B846C
  cmps(c,0,(int32_t)c->r[25],0); // 801B8470
  if (!crb(c,2)) { goto L_801B8480; } // 801B8474
L_801B8478:;
  W16(c->r[17]+0x0000002Au,c->r[0]); // 801B8478
  goto L_801B8490; // 801B847C
L_801B8480:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)96); // 801B8480
  c->r[3]=R16(c->r[17]+0x0000002Au); // 801B8484
  c->r[0]=c->r[3]+c->r[0]; // 801B8488
  W16(c->r[17]+0x0000002Au,c->r[0]); // 801B848C
L_801B8490:;
  c->r[0]=R16(c->r[18]+0x0000000Eu); // 801B8490
  cmps(c,0,(int32_t)c->r[0],0); // 801B8494
  if (crb(c,2)) { goto L_801B84A4; } // 801B8498
  cmps(c,0,(int32_t)c->r[24],0); // 801B849C
  if (!crb(c,2)) { goto L_801B84AC; } // 801B84A0
L_801B84A4:;
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 801B84A4
  goto L_801B84BC; // 801B84A8
L_801B84AC:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)96); // 801B84AC
  c->r[3]=R16(c->r[17]+0x0000002Cu); // 801B84B0
  c->r[0]=c->r[3]+c->r[0]; // 801B84B4
  W16(c->r[17]+0x0000002Cu,c->r[0]); // 801B84B8
L_801B84BC:;
  c->r[0]=R16(c->r[18]+0x00000010u); // 801B84BC
  cmps(c,0,(int32_t)c->r[0],0); // 801B84C0
  if (crb(c,2)) { goto L_801B84D0; } // 801B84C4
  cmps(c,0,(int32_t)c->r[23],0); // 801B84C8
  if (!crb(c,2)) { goto L_801B84D8; } // 801B84CC
L_801B84D0:;
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 801B84D0
  goto L_801B84E8; // 801B84D4
L_801B84D8:;
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)96); // 801B84D8
  c->r[3]=R16(c->r[17]+0x0000002Eu); // 801B84DC
  c->r[0]=c->r[3]+c->r[0]; // 801B84E0
  W16(c->r[17]+0x0000002Eu,c->r[0]); // 801B84E4
L_801B84E8:;
  c->r[0]=R16(c->r[18]+0x00000012u); // 801B84E8
  cmps(c,0,(int32_t)c->r[0],0); // 801B84EC
  if (crb(c,2)) { goto L_801B84FC; } // 801B84F0
  cmps(c,0,(int32_t)c->r[22],0); // 801B84F4
  if (!crb(c,2)) { goto L_801B8504; } // 801B84F8
L_801B84FC:;
  W16(c->r[17]+0x00000030u,c->r[0]); // 801B84FC
  goto L_801B8514; // 801B8500
L_801B8504:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)96); // 801B8504
  c->r[3]=R16(c->r[17]+0x00000030u); // 801B8508
  c->r[0]=c->r[3]+c->r[0]; // 801B850C
  W16(c->r[17]+0x00000030u,c->r[0]); // 801B8510
L_801B8514:;
  c->r[0]=R16(c->r[18]+0x00000014u); // 801B8514
  cmps(c,0,(int32_t)c->r[0],0); // 801B8518
  if (crb(c,2)) { goto L_801B8528; } // 801B851C
  cmps(c,0,(int32_t)c->r[21],0); // 801B8520
  if (!crb(c,2)) { goto L_801B8530; } // 801B8524
L_801B8528:;
  W16(c->r[17]+0x00000032u,c->r[0]); // 801B8528
  goto L_801B8540; // 801B852C
L_801B8530:;
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)96); // 801B8530
  c->r[3]=R16(c->r[17]+0x00000032u); // 801B8534
  c->r[0]=c->r[3]+c->r[0]; // 801B8538
  W16(c->r[17]+0x00000032u,c->r[0]); // 801B853C
L_801B8540:;
  c->r[0]=R16(c->r[18]+0x00000016u); // 801B8540
  cmps(c,0,(int32_t)c->r[0],0); // 801B8544
  if (crb(c,2)) { goto L_801B8554; } // 801B8548
  cmps(c,0,(int32_t)c->r[20],0); // 801B854C
  if (!crb(c,2)) { goto L_801B855C; } // 801B8550
L_801B8554:;
  W16(c->r[17]+0x00000034u,c->r[0]); // 801B8554
  goto L_801B856C; // 801B8558
L_801B855C:;
  c->r[0]=(uint32_t)((int32_t)c->r[20]*(int32_t)96); // 801B855C
  c->r[3]=R16(c->r[17]+0x00000034u); // 801B8560
  c->r[0]=c->r[3]+c->r[0]; // 801B8564
  W16(c->r[17]+0x00000034u,c->r[0]); // 801B8568
L_801B856C:;
  c->r[3]=c->r[16]|c->r[16]; // 801B856C
  c->lr=0x801B8574u; f_801251F0(c); // 801B8570
  c->r[3]=c->r[19]|c->r[19]; // 801B8574
L_801B8578:;
  c->r[11]=c->r[1]+0x00000080u; // 801B8578
  c->lr=0x801B8580u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B857C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801B8580
  c->lr=c->r[0]; // 801B8584
  c->r[1]=c->r[1]+0x00000080u; // 801B8588
  return; // 801B858C
}

// fn_801B8590
void f_801B8590(Ctx* __restrict c) {
  trace_call(0x801B8590u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8590
  c->r[0]=c->lr; // 801B8594
  c->r[12]=R16(c->r[4]+0x00000000u); // 801B8598
  c->r[11]=0u+0x00000000u; // 801B859C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B85A0
  c->r[10]=R16(c->r[4]+0x00000002u); // 801B85A4
  c->r[9]=R16(c->r[4]+0x00000004u); // 801B85A8
  c->r[8]=R16(c->r[4]+0x00000006u); // 801B85AC
  c->r[7]=R16(c->r[4]+0x00000008u); // 801B85B0
  c->r[6]=R16(c->r[4]+0x0000000Au); // 801B85B4
  c->r[5]=R16(c->r[4]+0x0000000Cu); // 801B85B8
  c->r[0]=R16(c->r[4]+0x0000000Eu); // 801B85BC
  c->r[4]=c->r[1]+0x00000008u; // 801B85C0
  W16(c->r[1]+0x00000008u,c->r[12]); // 801B85C4
  W16(c->r[1]+0x0000000Au,c->r[11]); // 801B85C8
  W16(c->r[1]+0x0000000Cu,c->r[10]); // 801B85CC
  W16(c->r[1]+0x0000000Eu,c->r[11]); // 801B85D0
  W16(c->r[1]+0x00000010u,c->r[9]); // 801B85D4
  W16(c->r[1]+0x00000012u,c->r[11]); // 801B85D8
  W16(c->r[1]+0x00000014u,c->r[8]); // 801B85DC
  W16(c->r[1]+0x00000016u,c->r[11]); // 801B85E0
  W16(c->r[1]+0x00000018u,c->r[7]); // 801B85E4
  W16(c->r[1]+0x0000001Au,c->r[11]); // 801B85E8
  W16(c->r[1]+0x0000001Cu,c->r[6]); // 801B85EC
  W16(c->r[1]+0x0000001Eu,c->r[11]); // 801B85F0
  W16(c->r[1]+0x00000020u,c->r[5]); // 801B85F4
  W16(c->r[1]+0x00000022u,c->r[11]); // 801B85F8
  W16(c->r[1]+0x00000024u,c->r[0]); // 801B85FC
  W16(c->r[1]+0x00000026u,c->r[11]); // 801B8600
  c->lr=0x801B8608u; f_801B9530(c); // 801B8604
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B8608
  c->lr=c->r[0]; // 801B860C
  c->r[1]=c->r[1]+0x00000030u; // 801B8610
  return; // 801B8614
}

// SetSrc__Q44nw4r3snd6detail7AxVoiceFfb
void f_801B8620(Ctx* __restrict c) {
  trace_call(0x801B8620u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8620
  c->r[0]=c->lr; // 801B8624
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B8628
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801B862C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801B8630
  c->f[31]=c->f[1]; // 801B8634
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B8638
  c->r[31]=c->r[3]|c->r[3]; // 801B863C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B8640
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B8644
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B8648
  c->r[28]=c->r[4]|c->r[4]; // 801B864C
  c->lr=0x801B8654u; f_801251B0(c); // 801B8650
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B8654
  c->r[30]=c->r[3]|c->r[3]; // 801B8658
  cmps(c,0,(int32_t)c->r[0],0); // 801B865C
  if (!crb(c,2)) { goto L_801B866C; } // 801B8660
  c->lr=0x801B8668u; f_801251F0(c); // 801B8664
  goto L_801B87C4; // 801B8668
L_801B866C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B866C
  if (crb(c,2)) { goto L_801B873C; } // 801B8670
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B8674
  c->r[0]=0u+0x43300000u; // 801B8678
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B867C
  c->r[0]=c->r[3]^0x80000000u; // 801B8680
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[2]=RF64(ea);} // 801B8684
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B8688
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B868C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801B8690
  {uint32_t ea=c->r[2]+0xFFFFA5A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B8694
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801B8698
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801B869C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801B86A0
  fcmp(c,0,c->f[0],c->f[3]); // 801B86A4
  if (!crb(c,1)) { goto L_801B86B0; } // 801B86A8
  goto L_801B86C4; // 801B86AC
L_801B86B0:;
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801B86B0
  fcmp(c,0,c->f[0],c->f[3]); // 801B86B4
  if (!crb(c,0)) { goto L_801B86C0; } // 801B86B8
  goto L_801B86C4; // 801B86BC
L_801B86C0:;
  c->f[3]=c->f[0]; // 801B86C0
L_801B86C4:;
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B86C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[3]); // 801B86C8
  c->lr=0x801B86D0u; f_802E68A4(c); // 801B86CC
  c->r[0]=0u+0x00000000u; // 801B86D0
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 801B86D4
  W16(c->r[1]+0x00000008u,c->r[4]); // 801B86D8
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801B86DC
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B86E0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801B86E4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801B86E8
  W16(c->r[1]+0x00000012u,c->r[0]); // 801B86EC
  W16(c->r[1]+0x00000014u,c->r[0]); // 801B86F0
  c->lr=0x801B86F8u; f_801251B0(c); // 801B86F4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B86F8
  c->r[29]=c->r[3]|c->r[3]; // 801B86FC
  cmps(c,0,(int32_t)c->r[4],0); // 801B8700
  if (!crb(c,2)) { goto L_801B8710; } // 801B8704
  c->lr=0x801B870Cu; f_801251F0(c); // 801B8708
  goto L_801B87BC; // 801B870C
L_801B8710:;
  c->r[3]=c->r[4]+0x000000CEu; // 801B8710
  c->r[4]=c->r[1]+0x00000008u; // 801B8714
  c->r[5]=0u+0x0000000Eu; // 801B8718
  c->lr=0x801B8720u; f_800043C4(c); // 801B871C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8720
  c->r[3]=c->r[29]|c->r[29]; // 801B8724
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 801B8728
  c->r[0]=c->r[0]|0x00010000u; // 801B872C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B8730
  c->lr=0x801B8738u; f_801251F0(c); // 801B8734
  goto L_801B87BC; // 801B8738
L_801B873C:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 801B873C
  c->r[0]=0u+0x43300000u; // 801B8740
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B8744
  c->r[0]=c->r[3]^0x80000000u; // 801B8748
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[2]=RF64(ea);} // 801B874C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B8750
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8754
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801B8758
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801B875C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801B8760
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 801B8764
  c->lr=0x801B876Cu; f_801251B0(c); // 801B8768
  c->r[28]=R32(c->r[31]+0x00000000u); // 801B876C
  c->r[29]=c->r[3]|c->r[3]; // 801B8770
  cmps(c,0,(int32_t)c->r[28],0); // 801B8774
  if (!crb(c,2)) { goto L_801B8784; } // 801B8778
  c->lr=0x801B8780u; f_801251F0(c); // 801B877C
  goto L_801B87BC; // 801B8780
L_801B8784:;
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8784
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801B8788
  c->lr=0x801B8790u; f_802E68A4(c); // 801B878C
  c->r[0]=rotl(c->r[3],16)&0x0000FFFFu; // 801B8790
  W16(c->r[28]+0x000000CEu,c->r[0]); // 801B8794
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8798
  W16(c->r[4]+0x000000D0u,c->r[3]); // 801B879C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801B87A0
  c->r[0]=rotl(c->r[3],0)&0x00010000u; cr0(c,c->r[0]); // 801B87A4
  if (!crb(c,2)) { goto L_801B87B4; } // 801B87A8
  c->r[0]=c->r[3]|0x00020000u; // 801B87AC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B87B0
L_801B87B4:;
  c->r[3]=c->r[29]|c->r[29]; // 801B87B4
  c->lr=0x801B87BCu; f_801251F0(c); // 801B87B8
L_801B87BC:;
  c->r[3]=c->r[30]|c->r[30]; // 801B87BC
  c->lr=0x801B87C4u; f_801251F0(c); // 801B87C0
L_801B87C4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B87C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801B87C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801B87CC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B87D0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B87D4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B87D8
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B87DC
  c->lr=c->r[0]; // 801B87E0
  c->r[1]=c->r[1]+0x00000040u; // 801B87E4
  return; // 801B87E8
}

// SetVe__Q44nw4r3snd6detail7AxVoiceFff
void f_801B87F0(Ctx* __restrict c) {
  trace_call(0x801B87F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B87F0
  c->r[0]=c->lr; // 801B87F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B87F8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801B87FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801B8800
  c->f[31]=c->f[2]; // 801B8804
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801B8808
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801B880C
  c->f[30]=c->f[1]; // 801B8810
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B8814
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B8818
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B881C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B8820
  c->r[28]=c->r[3]|c->r[3]; // 801B8824
  c->lr=0x801B882Cu; f_801251B0(c); // 801B8828
  c->r[0]=R32(c->r[28]+0x00000000u); // 801B882C
  c->r[31]=c->r[3]|c->r[3]; // 801B8830
  cmps(c,0,(int32_t)c->r[0],0); // 801B8834
  if (!crb(c,2)) { goto L_801B8844; } // 801B8838
  c->lr=0x801B8840u; f_801251F0(c); // 801B883C
  goto L_801B88E0; // 801B8840
L_801B8844:;
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801B8844
  c->r[3]=0u+0x00010000u; // 801B8848
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 801B884C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[30]); // 801B8850
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 801B8854
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801B8858
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B885C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801B8860
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801B8864
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801B8868
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[30]); // 801B886C
  c->r[4]=R32(c->r[1]+0x00000014u); // 801B8870
  if (!crb(c,1)) { goto L_801B887C; } // 801B8874
  goto L_801B8884; // 801B8878
L_801B887C:;
  c->r[0]=sraw(c,c->r[3],31); // 801B887C
  c->r[30]=c->r[3]&~c->r[0]; // 801B8880
L_801B8884:;
  c->r[3]=0u+0x00010000u; // 801B8884
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 801B8888
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[29]); // 801B888C
  if (!crb(c,1)) { goto L_801B8898; } // 801B8890
  goto L_801B88A0; // 801B8894
L_801B8898:;
  c->r[0]=sraw(c,c->r[4],31); // 801B8898
  c->r[29]=c->r[4]&~c->r[0]; // 801B889C
L_801B88A0:;
  c->lr=0x801B88A4u; f_801251B0(c); // 801B88A0
  c->r[0]=R32(c->r[28]+0x00000000u); // 801B88A4
  cmps(c,0,(int32_t)c->r[0],0); // 801B88A8
  if (!crb(c,2)) { goto L_801B88B8; } // 801B88AC
  c->lr=0x801B88B4u; f_801251F0(c); // 801B88B0
  goto L_801B88D8; // 801B88B4
L_801B88B8:;
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 801B88B8
  cmps(c,0,(int32_t)c->r[0],0); // 801B88BC
  if (crb(c,2)) { goto L_801B88D0; } // 801B88C0
  c->r[0]=0u+0x00000000u; // 801B88C4
  W16(c->r[28]+0x00000008u,c->r[29]); // 801B88C8
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801B88CC
L_801B88D0:;
  W16(c->r[28]+0x0000000Eu,c->r[30]); // 801B88D0
  c->lr=0x801B88D8u; f_801251F0(c); // 801B88D4
L_801B88D8:;
  c->r[3]=c->r[31]|c->r[31]; // 801B88D8
  c->lr=0x801B88E0u; f_801251F0(c); // 801B88DC
L_801B88E0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B88E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801B88E4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801B88E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801B88EC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801B88F0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B88F4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B88F8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B88FC
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B8900
  c->lr=c->r[0]; // 801B8904
  c->r[1]=c->r[1]+0x00000050u; // 801B8908
  return; // 801B890C
}

// SetLpf__Q44nw4r3snd6detail7AxVoiceFUs
void f_801B8910(Ctx* __restrict c) {
  trace_call(0x801B8910u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8910
  c->r[0]=c->lr; // 801B8914
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B8918
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B891C
  c->r[31]=c->r[3]|c->r[3]; // 801B8920
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B8924
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B8928
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B892C
  c->r[28]=c->r[4]|c->r[4]; // 801B8930
  c->lr=0x801B8938u; f_801251B0(c); // 801B8934
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8938
  c->r[30]=c->r[3]|c->r[3]; // 801B893C
  cmps(c,1,(int32_t)c->r[4],0); // 801B8940
  if (!crb(c,6)) { goto L_801B8950; } // 801B8944
  c->lr=0x801B894Cu; f_801251F0(c); // 801B8948
  goto L_801B8A80; // 801B894C
L_801B8950:;
  cmpu(c,0,c->r[28],0x00003E80u); // 801B8950
  if (crb(c,0)) { goto L_801B89A8; } // 801B8954
  c->r[0]=0u+0x00000000u; // 801B8958
  W16(c->r[1]+0x00000018u,c->r[0]); // 801B895C
  W16(c->r[1]+0x0000001Au,c->r[0]); // 801B8960
  c->lr=0x801B8968u; f_801251B0(c); // 801B8964
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8968
  c->r[29]=c->r[3]|c->r[3]; // 801B896C
  cmps(c,0,(int32_t)c->r[4],0); // 801B8970
  if (!crb(c,2)) { goto L_801B8980; } // 801B8974
  c->lr=0x801B897Cu; f_801251F0(c); // 801B8978
  goto L_801B8A78; // 801B897C
L_801B8980:;
  c->r[3]=c->r[4]+0x000000E2u; // 801B8980
  c->r[4]=c->r[1]+0x00000018u; // 801B8984
  c->r[5]=0u+0x00000008u; // 801B8988
  c->lr=0x801B8990u; f_800043C4(c); // 801B898C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8990
  c->r[3]=c->r[29]|c->r[29]; // 801B8994
  c->r[0]=c->r[0]|0x00080000u; // 801B8998
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B899C
  c->lr=0x801B89A4u; f_801251F0(c); // 801B89A0
  goto L_801B8A78; // 801B89A4
L_801B89A8:;
  c->r[3]=0u+0x00000000u; // 801B89A8
  if (crb(c,6)) { goto L_801B89C0; } // 801B89AC
  c->r[0]=R16(c->r[4]+0x000000E2u); // 801B89B0
  cmpu(c,0,c->r[0],0x00000001u); // 801B89B4
  if (!crb(c,2)) { goto L_801B89C0; } // 801B89B8
  c->r[3]=0u+0x00000001u; // 801B89BC
L_801B89C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B89C0
  if (crb(c,2)) { goto L_801B8A18; } // 801B89C4
  c->r[3]=c->r[28]|c->r[28]; // 801B89C8
  c->r[4]=c->r[1]+0x0000000Au; // 801B89CC
  c->r[5]=c->r[1]+0x00000008u; // 801B89D0
  c->lr=0x801B89D8u; f_80152500(c); // 801B89D4
  c->r[28]=R16(c->r[1]+0x00000008u); // 801B89D8
  c->r[29]=R16(c->r[1]+0x0000000Au); // 801B89DC
  c->lr=0x801B89E4u; f_801251B0(c); // 801B89E0
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B89E4
  cmps(c,0,(int32_t)c->r[4],0); // 801B89E8
  if (!crb(c,2)) { goto L_801B89F8; } // 801B89EC
  c->lr=0x801B89F4u; f_801251F0(c); // 801B89F0
  goto L_801B8A78; // 801B89F4
L_801B89F8:;
  W16(c->r[4]+0x000000E6u,c->r[29]); // 801B89F8
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B89FC
  W16(c->r[4]+0x000000E8u,c->r[28]); // 801B8A00
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8A04
  c->r[0]=c->r[0]|0x00100000u; // 801B8A08
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B8A0C
  c->lr=0x801B8A14u; f_801251F0(c); // 801B8A10
  goto L_801B8A78; // 801B8A14
L_801B8A18:;
  c->r[3]=0u+0x00000001u; // 801B8A18
  c->r[0]=0u+0x00000000u; // 801B8A1C
  W16(c->r[1]+0x00000010u,c->r[3]); // 801B8A20
  c->r[3]=c->r[28]|c->r[28]; // 801B8A24
  c->r[4]=c->r[1]+0x00000014u; // 801B8A28
  c->r[5]=c->r[1]+0x00000016u; // 801B8A2C
  W16(c->r[1]+0x00000012u,c->r[0]); // 801B8A30
  c->lr=0x801B8A38u; f_80152500(c); // 801B8A34
  c->lr=0x801B8A3Cu; f_801251B0(c); // 801B8A38
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8A3C
  c->r[29]=c->r[3]|c->r[3]; // 801B8A40
  cmps(c,0,(int32_t)c->r[4],0); // 801B8A44
  if (!crb(c,2)) { goto L_801B8A54; } // 801B8A48
  c->lr=0x801B8A50u; f_801251F0(c); // 801B8A4C
  goto L_801B8A78; // 801B8A50
L_801B8A54:;
  c->r[3]=c->r[4]+0x000000E2u; // 801B8A54
  c->r[4]=c->r[1]+0x00000010u; // 801B8A58
  c->r[5]=0u+0x00000008u; // 801B8A5C
  c->lr=0x801B8A64u; f_800043C4(c); // 801B8A60
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8A64
  c->r[3]=c->r[29]|c->r[29]; // 801B8A68
  c->r[0]=c->r[0]|0x00080000u; // 801B8A6C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B8A70
  c->lr=0x801B8A78u; f_801251F0(c); // 801B8A74
L_801B8A78:;
  c->r[3]=c->r[30]|c->r[30]; // 801B8A78
  c->lr=0x801B8A80u; f_801251F0(c); // 801B8A7C
L_801B8A80:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B8A80
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B8A84
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B8A88
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B8A8C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B8A90
  c->lr=c->r[0]; // 801B8A94
  c->r[1]=c->r[1]+0x00000030u; // 801B8A98
  return; // 801B8A9C
}

// SetBiquad__Q44nw4r3snd6detail7AxVoiceFUcf
void f_801B8AA0(Ctx* __restrict c) {
  trace_call(0x801B8AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8AA0
  c->r[0]=c->lr; // 801B8AA4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801B8AA8
  c->r[11]=c->r[1]+0x00000068u; // 801B8AAC
  {uint32_t ea=c->r[1]+0x00000068u; WF64(ea,c->f[31]);} // 801B8AB0
  c->lr=0x801B8AB8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8AB4
  c->f[31]=c->f[1]; // 801B8AB8
  c->r[31]=c->r[3]|c->r[3]; // 801B8ABC
  c->r[25]=c->r[4]|c->r[4]; // 801B8AC0
  c->lr=0x801B8AC8u; f_801251B0(c); // 801B8AC4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B8AC8
  c->r[30]=c->r[3]|c->r[3]; // 801B8ACC
  cmps(c,0,(int32_t)c->r[0],0); // 801B8AD0
  if (!crb(c,2)) { goto L_801B8AE0; } // 801B8AD4
  c->lr=0x801B8ADCu; f_801251F0(c); // 801B8AD8
  goto L_801B8CA8; // 801B8ADC
L_801B8AE0:;
  c->lr=0x801B8AE4u; f_801B4F50(c); // 801B8AE0
  c->r[3]=0u+0x805B0000u; // 801B8AE4
  cmps(c,0,(int32_t)c->r[25],0); // 801B8AE8
  c->r[0]=rotl(c->r[25],2)&0x000003FCu; // 801B8AEC
  c->r[4]=0u+0x00000001u; // 801B8AF0
  c->r[3]=c->r[3]+0xFFFFC300u; // 801B8AF4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B8AF8
  if (!crb(c,2)) { goto L_801B8B04; } // 801B8AFC
  c->r[4]=0u+0x00000000u; // 801B8B00
L_801B8B04:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B8B04
  if (!crb(c,2)) { goto L_801B8B10; } // 801B8B08
  c->r[4]=0u+0x00000000u; // 801B8B0C
L_801B8B10:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B8B10
  if (!crb(c,2)) { goto L_801B8B74; } // 801B8B14
  c->r[0]=0u+0x00000000u; // 801B8B18
  W16(c->r[1]+0x00000028u,c->r[0]); // 801B8B1C
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801B8B20
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 801B8B24
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801B8B28
  W16(c->r[1]+0x00000030u,c->r[0]); // 801B8B2C
  c->lr=0x801B8B34u; f_801251B0(c); // 801B8B30
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8B34
  c->r[29]=c->r[3]|c->r[3]; // 801B8B38
  cmps(c,0,(int32_t)c->r[4],0); // 801B8B3C
  if (!crb(c,2)) { goto L_801B8B4C; } // 801B8B40
  c->lr=0x801B8B48u; f_801251F0(c); // 801B8B44
  goto L_801B8CA0; // 801B8B48
L_801B8B4C:;
  c->r[3]=c->r[4]+0x000000EAu; // 801B8B4C
  c->r[4]=c->r[1]+0x00000028u; // 801B8B50
  c->r[5]=0u+0x00000014u; // 801B8B54
  c->lr=0x801B8B5Cu; f_800043C4(c); // 801B8B58
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8B5C
  c->r[3]=c->r[29]|c->r[29]; // 801B8B60
  c->r[0]=c->r[0]|0x00200000u; // 801B8B64
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B8B68
  c->lr=0x801B8B70u; f_801251F0(c); // 801B8B6C
  goto L_801B8CA0; // 801B8B70
L_801B8B74:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801B8B74
  c->f[1]=c->f[31]; // 801B8B78
  c->r[4]=c->r[25]|c->r[25]; // 801B8B7C
  c->r[5]=c->r[1]+0x00000008u; // 801B8B80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801B8B84
  c->ctr=c->r[12]; // 801B8B88
  if (true) { c->lr=0x801B8B90u; dispatch(c,c->ctr); } // 801B8B8C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8B90
  c->r[3]=0u+0x00000000u; // 801B8B94
  cmps(c,0,(int32_t)c->r[4],0); // 801B8B98
  if (crb(c,2)) { goto L_801B8BB0; } // 801B8B9C
  c->r[0]=R16(c->r[4]+0x000000EAu); // 801B8BA0
  cmpu(c,0,c->r[0],0x00000002u); // 801B8BA4
  if (!crb(c,2)) { goto L_801B8BB0; } // 801B8BA8
  c->r[3]=0u+0x00000001u; // 801B8BAC
L_801B8BB0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B8BB0
  if (crb(c,2)) { goto L_801B8C1C; } // 801B8BB4
  c->r[25]=R16(c->r[1]+0x00000010u); // 801B8BB8
  c->r[26]=R16(c->r[1]+0x0000000Eu); // 801B8BBC
  c->r[27]=R16(c->r[1]+0x0000000Cu); // 801B8BC0
  c->r[28]=R16(c->r[1]+0x0000000Au); // 801B8BC4
  c->r[29]=R16(c->r[1]+0x00000008u); // 801B8BC8
  c->lr=0x801B8BD0u; f_801251B0(c); // 801B8BCC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8BD0
  cmps(c,0,(int32_t)c->r[4],0); // 801B8BD4
  if (!crb(c,2)) { goto L_801B8BE4; } // 801B8BD8
  c->lr=0x801B8BE0u; f_801251F0(c); // 801B8BDC
  goto L_801B8CA0; // 801B8BE0
L_801B8BE4:;
  W16(c->r[4]+0x000000F4u,c->r[29]); // 801B8BE4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8BE8
  W16(c->r[4]+0x000000F6u,c->r[28]); // 801B8BEC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8BF0
  W16(c->r[4]+0x000000F8u,c->r[27]); // 801B8BF4
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8BF8
  W16(c->r[4]+0x000000FAu,c->r[26]); // 801B8BFC
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8C00
  W16(c->r[4]+0x000000FCu,c->r[25]); // 801B8C04
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8C08
  c->r[0]=c->r[0]|0x00400000u; // 801B8C0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B8C10
  c->lr=0x801B8C18u; f_801251F0(c); // 801B8C14
  goto L_801B8CA0; // 801B8C18
L_801B8C1C:;
  c->r[6]=R16(c->r[1]+0x00000008u); // 801B8C1C
  c->r[7]=0u+0x00000000u; // 801B8C20
  c->r[5]=R16(c->r[1]+0x0000000Au); // 801B8C24
  c->r[8]=0u+0x00000002u; // 801B8C28
  c->r[4]=R16(c->r[1]+0x0000000Cu); // 801B8C2C
  c->r[3]=R16(c->r[1]+0x0000000Eu); // 801B8C30
  c->r[0]=R16(c->r[1]+0x00000010u); // 801B8C34
  W16(c->r[1]+0x00000014u,c->r[8]); // 801B8C38
  W16(c->r[1]+0x00000016u,c->r[7]); // 801B8C3C
  W16(c->r[1]+0x00000018u,c->r[7]); // 801B8C40
  W16(c->r[1]+0x0000001Au,c->r[7]); // 801B8C44
  W16(c->r[1]+0x0000001Cu,c->r[7]); // 801B8C48
  W16(c->r[1]+0x0000001Eu,c->r[6]); // 801B8C4C
  W16(c->r[1]+0x00000020u,c->r[5]); // 801B8C50
  W16(c->r[1]+0x00000022u,c->r[4]); // 801B8C54
  W16(c->r[1]+0x00000024u,c->r[3]); // 801B8C58
  W16(c->r[1]+0x00000026u,c->r[0]); // 801B8C5C
  c->lr=0x801B8C64u; f_801251B0(c); // 801B8C60
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B8C64
  c->r[29]=c->r[3]|c->r[3]; // 801B8C68
  cmps(c,0,(int32_t)c->r[4],0); // 801B8C6C
  if (!crb(c,2)) { goto L_801B8C7C; } // 801B8C70
  c->lr=0x801B8C78u; f_801251F0(c); // 801B8C74
  goto L_801B8CA0; // 801B8C78
L_801B8C7C:;
  c->r[3]=c->r[4]+0x000000EAu; // 801B8C7C
  c->r[4]=c->r[1]+0x00000014u; // 801B8C80
  c->r[5]=0u+0x00000014u; // 801B8C84
  c->lr=0x801B8C8Cu; f_800043C4(c); // 801B8C88
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B8C8C
  c->r[3]=c->r[29]|c->r[29]; // 801B8C90
  c->r[0]=c->r[0]|0x00200000u; // 801B8C94
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B8C98
  c->lr=0x801B8CA0u; f_801251F0(c); // 801B8C9C
L_801B8CA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B8CA0
  c->lr=0x801B8CA8u; f_801251F0(c); // 801B8CA4
L_801B8CA8:;
  c->r[11]=c->r[1]+0x00000068u; // 801B8CA8
  {uint32_t ea=c->r[1]+0x00000068u; c->f[31]=RF64(ea);} // 801B8CAC
  c->lr=0x801B8CB4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8CB0
  c->r[0]=R32(c->r[1]+0x00000074u); // 801B8CB4
  c->lr=c->r[0]; // 801B8CB8
  c->r[1]=c->r[1]+0x00000070u; // 801B8CBC
  return; // 801B8CC0
}

// SetRemoteFilter__Q44nw4r3snd6detail7AxVoiceFUc
void f_801B8CD0(Ctx* __restrict c) {
  trace_call(0x801B8CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8CD0
  c->r[0]=c->lr; // 801B8CD4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B8CD8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801B8CDC
  W32(c->r[1]+0x00000048u,c->r[30]); // 801B8CE0
  c->r[30]=c->r[4]|c->r[4]; // 801B8CE4
  W32(c->r[1]+0x00000044u,c->r[29]); // 801B8CE8
  c->r[29]=c->r[3]|c->r[3]; // 801B8CEC
  c->lr=0x801B8CF4u; f_801251B0(c); // 801B8CF0
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B8CF4
  c->r[31]=c->r[3]|c->r[3]; // 801B8CF8
  cmps(c,1,(int32_t)c->r[4],0); // 801B8CFC
  if (!crb(c,6)) { goto L_801B8D0C; } // 801B8D00
  c->lr=0x801B8D08u; f_801251F0(c); // 801B8D04
  goto L_801B8E44; // 801B8D08
L_801B8D0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B8D0C
  if (!crb(c,2)) { goto L_801B8D60; } // 801B8D10
  c->r[0]=0u+0x00000000u; // 801B8D14
  W16(c->r[1]+0x00000028u,c->r[0]); // 801B8D18
  c->lr=0x801B8D20u; f_801251B0(c); // 801B8D1C
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B8D20
  c->r[30]=c->r[3]|c->r[3]; // 801B8D24
  cmps(c,0,(int32_t)c->r[4],0); // 801B8D28
  if (!crb(c,2)) { goto L_801B8D38; } // 801B8D2C
  c->lr=0x801B8D34u; f_801251F0(c); // 801B8D30
  goto L_801B8E3C; // 801B8D34
L_801B8D38:;
  c->r[3]=c->r[4]+0x0000013Cu; // 801B8D38
  c->r[4]=c->r[1]+0x00000028u; // 801B8D3C
  c->r[5]=0u+0x00000014u; // 801B8D40
  c->lr=0x801B8D48u; f_800043C4(c); // 801B8D44
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B8D48
  c->r[3]=c->r[30]|c->r[30]; // 801B8D4C
  c->r[0]=c->r[0]|0x10000000u; // 801B8D50
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B8D54
  c->lr=0x801B8D5Cu; f_801251F0(c); // 801B8D58
  goto L_801B8E3C; // 801B8D5C
L_801B8D60:;
  c->r[3]=0u+0x00000000u; // 801B8D60
  if (crb(c,6)) { goto L_801B8D78; } // 801B8D64
  c->r[0]=R16(c->r[4]+0x0000013Cu); // 801B8D68
  cmpu(c,0,c->r[0],0x00000002u); // 801B8D6C
  if (!crb(c,2)) { goto L_801B8D78; } // 801B8D70
  c->r[3]=0u+0x00000001u; // 801B8D74
L_801B8D78:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B8D78
  if (crb(c,2)) { goto L_801B8DC4; } // 801B8D7C
  c->r[3]=c->r[30]|c->r[30]; // 801B8D80
  c->r[4]=c->r[1]+0x00000010u; // 801B8D84
  c->r[5]=c->r[1]+0x0000000Eu; // 801B8D88
  c->r[6]=c->r[1]+0x0000000Cu; // 801B8D8C
  c->r[7]=c->r[1]+0x0000000Au; // 801B8D90
  c->r[8]=c->r[1]+0x00000008u; // 801B8D94
  c->lr=0x801B8D9Cu; f_801E1510(c); // 801B8D98
  c->r[5]=R16(c->r[1]+0x00000010u); // 801B8D9C
  c->r[3]=c->r[29]|c->r[29]; // 801B8DA0
  c->r[6]=R16(c->r[1]+0x0000000Eu); // 801B8DA4
  c->r[4]=0u+0x00000002u; // 801B8DA8
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 801B8DAC
  c->r[8]=R16(c->r[1]+0x0000000Au); // 801B8DB0
  c->r[9]=R16(c->r[1]+0x00000008u); // 801B8DB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B8DB8
  c->lr=0x801B8DC0u; f_801B9720(c); // 801B8DBC
  goto L_801B8E3C; // 801B8DC0
L_801B8DC4:;
  c->r[0]=0u+0x00000000u; // 801B8DC4
  c->r[3]=0u+0x00000002u; // 801B8DC8
  W16(c->r[1]+0x00000014u,c->r[3]); // 801B8DCC
  c->r[3]=c->r[30]|c->r[30]; // 801B8DD0
  c->r[4]=c->r[1]+0x0000001Eu; // 801B8DD4
  c->r[5]=c->r[1]+0x00000020u; // 801B8DD8
  W16(c->r[1]+0x00000016u,c->r[0]); // 801B8DDC
  c->r[6]=c->r[1]+0x00000022u; // 801B8DE0
  c->r[7]=c->r[1]+0x00000024u; // 801B8DE4
  c->r[8]=c->r[1]+0x00000026u; // 801B8DE8
  W16(c->r[1]+0x00000018u,c->r[0]); // 801B8DEC
  W16(c->r[1]+0x0000001Au,c->r[0]); // 801B8DF0
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 801B8DF4
  c->lr=0x801B8DFCu; f_801E1510(c); // 801B8DF8
  c->lr=0x801B8E00u; f_801251B0(c); // 801B8DFC
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B8E00
  c->r[30]=c->r[3]|c->r[3]; // 801B8E04
  cmps(c,0,(int32_t)c->r[4],0); // 801B8E08
  if (!crb(c,2)) { goto L_801B8E18; } // 801B8E0C
  c->lr=0x801B8E14u; f_801251F0(c); // 801B8E10
  goto L_801B8E3C; // 801B8E14
L_801B8E18:;
  c->r[3]=c->r[4]+0x0000013Cu; // 801B8E18
  c->r[4]=c->r[1]+0x00000014u; // 801B8E1C
  c->r[5]=0u+0x00000014u; // 801B8E20
  c->lr=0x801B8E28u; f_800043C4(c); // 801B8E24
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B8E28
  c->r[3]=c->r[30]|c->r[30]; // 801B8E2C
  c->r[0]=c->r[0]|0x10000000u; // 801B8E30
  W32(c->r[29]+0x00000004u,c->r[0]); // 801B8E34
  c->lr=0x801B8E3Cu; f_801251F0(c); // 801B8E38
L_801B8E3C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B8E3C
  c->lr=0x801B8E44u; f_801251F0(c); // 801B8E40
L_801B8E44:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B8E44
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801B8E48
  c->r[30]=R32(c->r[1]+0x00000048u); // 801B8E4C
  c->r[29]=R32(c->r[1]+0x00000044u); // 801B8E50
  c->lr=c->r[0]; // 801B8E54
  c->r[1]=c->r[1]+0x00000050u; // 801B8E58
  return; // 801B8E5C
}

// CalcOffsetAdpcmParam__Q44nw4r3snd6detail7AxVoiceFPUsPUsPUsUlPCvRCQ44nw4r3snd6detail10AdpcmParam
void f_801B8E60(Ctx* __restrict c) {
  trace_call(0x801B8E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8E60
  c->r[0]=c->lr; // 801B8E64
  W32(c->r[1]+0x00000054u,c->r[0]); // 801B8E68
  c->r[11]=c->r[1]+0x00000050u; // 801B8E6C
  c->lr=0x801B8E74u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8E70
  c->r[31]=c->r[8]|c->r[8]; // 801B8E74
  c->r[27]=c->r[3]|c->r[3]; // 801B8E78
  c->r[28]=c->r[4]|c->r[4]; // 801B8E7C
  c->r[29]=c->r[5]|c->r[5]; // 801B8E80
  c->r[30]=c->r[6]|c->r[6]; // 801B8E84
  c->r[26]=c->r[7]|c->r[7]; // 801B8E88
  c->r[4]=c->r[31]|c->r[31]; // 801B8E8C
  c->r[3]=c->r[1]+0x00000008u; // 801B8E90
  c->r[5]=0u+0x00000020u; // 801B8E94
  c->lr=0x801B8E9Cu; f_800043C4(c); // 801B8E98
  c->r[5]=R16(c->r[31]+0x00000020u); // 801B8E9C
  cmps(c,0,(int32_t)c->r[26],0); // 801B8EA0
  c->r[4]=R16(c->r[31]+0x00000022u); // 801B8EA4
  c->r[6]=c->r[26]|c->r[26]; // 801B8EA8
  c->r[3]=R16(c->r[31]+0x00000024u); // 801B8EAC
  c->r[0]=R16(c->r[31]+0x00000026u); // 801B8EB0
  W16(c->r[1]+0x00000028u,c->r[5]); // 801B8EB4
  W16(c->r[1]+0x0000002Au,c->r[4]); // 801B8EB8
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 801B8EBC
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 801B8EC0
  if (crb(c,2)) { goto L_801B8ECC; } // 801B8EC4
  c->r[6]=c->r[26]+0x80000000u; // 801B8EC8
L_801B8ECC:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B8ECC
  c->r[3]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801B8ED0
  c->r[31]=c->r[3]+0x00000002u; // 801B8ED4
  if (crb(c,2)) { goto L_801B8EE0; } // 801B8ED8
  c->r[26]=c->r[26]+0x80000000u; // 801B8EDC
L_801B8EE0:;
  c->r[3]=0u+0x24920000u; // 801B8EE0
  c->r[0]=rotl(c->r[26],1)&0xFFFFFFFEu; // 801B8EE4
  c->r[3]=c->r[3]+0x00004925u; // 801B8EE8
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[30])>>32); // 801B8EEC
  c->r[3]=c->r[30]-c->r[4]; // 801B8EF0
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801B8EF4
  c->r[4]=c->r[3]+c->r[4]; // 801B8EF8
  c->r[3]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801B8EFC
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)14); // 801B8F00
  c->r[3]=rotl(c->r[4],1)&0xFFFFFFF0u; // 801B8F04
  c->r[4]=c->r[30]-c->r[5]; // 801B8F08
  c->r[0]=c->r[4]+c->r[0]; // 801B8F0C
  c->r[30]=c->r[0]+c->r[3]; // 801B8F10
  c->r[30]=c->r[30]+0x00000002u; // 801B8F14
  goto L_801B8F64; // 801B8F18
L_801B8F1C:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; cr0(c,c->r[0]); // 801B8F1C
  if (!crb(c,2)) { goto L_801B8F38; } // 801B8F20
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801B8F24
  c->r[31]=c->r[31]+0x00000002u; // 801B8F28
  c->r[3]=c->r[3]+0x80000000u; // 801B8F2C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B8F30
  W16(c->r[1]+0x0000002Au,c->r[0]); // 801B8F34
L_801B8F38:;
  c->r[3]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801B8F38
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801B8F3C
  c->r[4]=c->r[3]+0x80000000u; // 801B8F40
  c->r[4]=R8(c->r[4]+0x00000000u); // 801B8F44
  c->r[3]=c->r[1]+0x00000008u; // 801B8F48
  c->r[0]=sraw(c,c->r[4],4); // 801B8F4C
  if (crb(c,2)) { goto L_801B8F58; } // 801B8F50
  c->r[0]=rotl(c->r[4],0)&0x0000000Fu; // 801B8F54
L_801B8F58:;
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801B8F58
  c->lr=0x801B8F60u; f_801E3A30(c); // 801B8F5C
  c->r[31]=c->r[31]+0x00000001u; // 801B8F60
L_801B8F64:;
  cmpu(c,0,c->r[31],c->r[30]); // 801B8F64
  if (crb(c,0)) { IRQCHK(c); goto L_801B8F1C; } // 801B8F68
  c->r[0]=R16(c->r[1]+0x0000002Au); // 801B8F6C
  c->r[11]=c->r[1]+0x00000050u; // 801B8F70
  W16(c->r[27]+0x00000000u,c->r[0]); // 801B8F74
  c->r[0]=R16(c->r[1]+0x0000002Cu); // 801B8F78
  W16(c->r[28]+0x00000000u,c->r[0]); // 801B8F7C
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 801B8F80
  W16(c->r[29]+0x00000000u,c->r[0]); // 801B8F84
  c->lr=0x801B8F8Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8F88
  c->r[0]=R32(c->r[1]+0x00000054u); // 801B8F8C
  c->lr=c->r[0]; // 801B8F90
  c->r[1]=c->r[1]+0x00000050u; // 801B8F94
  return; // 801B8F98
}

// Sync__Q44nw4r3snd6detail17AxVoiceParamBlockFv
void f_801B8FA0(Ctx* __restrict c) {
  trace_call(0x801B8FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8FA0
  c->r[0]=c->lr; // 801B8FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B8FA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B8FAC
  c->r[31]=c->r[3]|c->r[3]; // 801B8FB0
  c->lr=0x801B8FB8u; f_801251B0(c); // 801B8FB4
  c->r[5]=R32(c->r[31]+0x00000000u); // 801B8FB8
  cmps(c,0,(int32_t)c->r[5],0); // 801B8FBC
  if (!crb(c,2)) { goto L_801B8FCC; } // 801B8FC0
  c->lr=0x801B8FC8u; f_801251F0(c); // 801B8FC4
  goto L_801B9138; // 801B8FC8
L_801B8FCC:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801B8FCC
  c->r[4]=0u+0x2AAB0000u; // 801B8FD0
  W16(c->r[5]+0x00000092u,c->r[0]); // 801B8FD4
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801B8FD8
  c->r[6]=0u+0xFFFFFFFFu; // 801B8FDC
  c->r[7]=R16(c->r[31]+0x0000000Eu); // 801B8FE0
  c->r[0]=R16(c->r[31]+0x00000008u); // 801B8FE4
  c->r[0]=c->r[7]-c->r[0]; // 801B8FE8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801B8FEC
  c->r[0]=sraw(c,c->r[0],4); // 801B8FF0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801B8FF4
  c->r[0]=c->r[0]+c->r[4]; // 801B8FF8
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801B8FFC
  c->r[0]=0u-c->r[8]; // 801B9000
  c->r[0]=c->r[0]&~c->r[8]; // 801B9004
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801B9008
  c->r[0]=c->r[8]+c->r[0]; cr0(c,c->r[0]); // 801B900C
  if (crb(c,2)) { goto L_801B9018; } // 801B9010
  c->r[6]=0u+0x00000001u; // 801B9014
L_801B9018:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)96); // 801B9018
  c->r[5]=R16(c->r[31]+0x00000008u); // 801B901C
  c->r[4]=R16(c->r[31]+0x00000008u); // 801B9020
  c->r[0]=c->r[4]+c->r[0]; // 801B9024
  c->r[4]=c->r[7]-c->r[0]; cr0(c,c->r[4]); // 801B9028
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)96); // 801B902C
  c->r[0]=c->r[5]+c->r[0]; // 801B9030
  if (!crb(c,0)) { goto L_801B903C; } // 801B9034
  c->r[4]=0u-c->r[4]; // 801B9038
L_801B903C:;
  c->r[0]=c->r[7]-c->r[0]; cr0(c,c->r[0]); // 801B903C
  if (!crb(c,0)) { goto L_801B9048; } // 801B9040
  c->r[0]=0u-c->r[0]; // 801B9044
L_801B9048:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801B9048
  if (!crb(c,0)) { goto L_801B905C; } // 801B904C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B9050
  W16(c->r[4]+0x00000094u,c->r[8]); // 801B9054
  goto L_801B9064; // 801B9058
L_801B905C:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B905C
  W16(c->r[4]+0x00000094u,c->r[6]); // 801B9060
L_801B9064:;
  c->r[6]=R32(c->r[31]+0x00000000u); // 801B9064
  c->r[4]=R16(c->r[31]+0x00000008u); // 801B9068
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000094u); // 801B906C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801B9070
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 801B9074
  if (!crb(c,0)) { goto L_801B90A4; } // 801B9078
  c->r[0]=R16(c->r[31]+0x00000008u); // 801B907C
  c->r[4]=0u+0x2AAB0000u; // 801B9080
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801B9084
  c->r[0]=0u-c->r[0]; // 801B9088
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801B908C
  c->r[0]=sraw(c,c->r[0],4); // 801B9090
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801B9094
  c->r[0]=c->r[0]+c->r[4]; // 801B9098
  W16(c->r[6]+0x00000094u,c->r[0]); // 801B909C
  goto L_801B90D8; // 801B90A0
L_801B90A4:;
  c->r[4]=0u+0x00010000u; // 801B90A4
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801B90A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801B90AC
  if (!crb(c,1)) { goto L_801B90D8; } // 801B90B0
  c->r[0]=R16(c->r[31]+0x00000008u); // 801B90B4
  c->r[4]=0u+0x2AAB0000u; // 801B90B8
  c->r[4]=c->r[4]+0xFFFFAAABu; // 801B90BC
  c->r[0]=c->r[5]-c->r[0]; // 801B90C0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801B90C4
  c->r[0]=sraw(c,c->r[0],4); // 801B90C8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801B90CC
  c->r[0]=c->r[0]+c->r[4]; // 801B90D0
  W16(c->r[6]+0x00000094u,c->r[0]); // 801B90D4
L_801B90D8:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B90D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000094u); // 801B90DC
  cmps(c,0,(int32_t)c->r[0],0); // 801B90E0
  if (!crb(c,2)) { goto L_801B90FC; } // 801B90E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 801B90E8
  cmps(c,0,(int32_t)c->r[0],0); // 801B90EC
  if (!crb(c,2)) { goto L_801B90FC; } // 801B90F0
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 801B90F4
  W16(c->r[4]+0x00000092u,c->r[0]); // 801B90F8
L_801B90FC:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 801B90FC
  c->r[0]=0u+0x00000000u; // 801B9100
  c->r[5]=R32(c->r[31]+0x00000000u); // 801B9104
  c->r[4]=rotl(c->r[4],0)&0xFFFFFDFFu; // 801B9108
  c->r[6]=c->r[4]|0x00000100u; // 801B910C
  W32(c->r[31]+0x00000004u,c->r[6]); // 801B9110
  c->r[4]=R16(c->r[5]+0x00000092u); // 801B9114
  W16(c->r[31]+0x00000008u,c->r[4]); // 801B9118
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000094u); // 801B911C
  W16(c->r[31]+0x0000000Au,c->r[4]); // 801B9120
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801B9124
  c->r[4]=c->r[4]|c->r[6]; // 801B9128
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801B912C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B9130
  c->lr=0x801B9138u; f_801251F0(c); // 801B9134
L_801B9138:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9138
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B913C
  c->lr=c->r[0]; // 801B9140
  c->r[1]=c->r[1]+0x00000010u; // 801B9144
  return; // 801B9148
}

// Set__Q44nw4r3snd6detail17AxVoiceParamBlockFP6_AXVPB
void f_801B9150(Ctx* __restrict c) {
  trace_call(0x801B9150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9150
  c->r[0]=c->lr; // 801B9154
  cmps(c,0,(int32_t)c->r[4],0); // 801B9158
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B915C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9160
  c->r[31]=c->r[4]|c->r[4]; // 801B9164
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B9168
  c->r[30]=c->r[3]|c->r[3]; // 801B916C
  if (!crb(c,2)) { goto L_801B9190; } // 801B9170
  c->r[3]=0u+0x803A0000u; // 801B9174
  c->r[5]=0u+0x803A0000u; // 801B9178
  c->r[3]=c->r[3]+0xFFFFBF50u; // 801B917C
  c->r[4]=0u+0x00000416u; // 801B9180
  c->r[5]=c->r[5]+0xFFFFBFC0u; // 801B9184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9188
  c->lr=0x801B9190u; f_80212260(c); // 801B918C
L_801B9190:;
  c->r[3]=0u+0x00010000u; // 801B9190
  c->r[4]=0u+0x00000000u; // 801B9194
  c->r[0]=c->r[3]+0xFFFF8000u; // 801B9198
  W16(c->r[30]+0x00000008u,c->r[0]); // 801B919C
  c->r[3]=0u+0x00000001u; // 801B91A0
  W32(c->r[30]+0x00000000u,c->r[31]); // 801B91A4
  W32(c->r[30]+0x00000004u,c->r[4]); // 801B91A8
  W8(c->r[30]+0x0000000Cu,c->r[3]); // 801B91AC
  W16(c->r[30]+0x0000000Eu,c->r[0]); // 801B91B0
  W16(c->r[30]+0x0000000Au,c->r[4]); // 801B91B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B91B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B91BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B91C0
  c->lr=c->r[0]; // 801B91C4
  c->r[1]=c->r[1]+0x00000010u; // 801B91C8
  return; // 801B91CC
}

// SetVoiceMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC8_AXPBMIXb
void f_801B91D0(Ctx* __restrict c) {
  trace_call(0x801B91D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B91D0
  c->r[0]=c->lr; // 801B91D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B91D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B91DC
  c->r[31]=c->r[5]|c->r[5]; // 801B91E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B91E4
  c->r[30]=c->r[3]|c->r[3]; // 801B91E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B91EC
  c->r[29]=c->r[4]|c->r[4]; // 801B91F0
  c->lr=0x801B91F8u; f_801251B0(c); // 801B91F4
  c->r[6]=R32(c->r[30]+0x00000000u); // 801B91F8
  cmps(c,0,(int32_t)c->r[6],0); // 801B91FC
  if (!crb(c,2)) { goto L_801B920C; } // 801B9200
  c->lr=0x801B9208u; f_801251F0(c); // 801B9204
  goto L_801B942C; // 801B9208
L_801B920C:;
  c->r[4]=R16(c->r[29]+0x00000000u); // 801B920C
  c->r[5]=c->r[6]+0x0000003Eu; // 801B9210
  W16(c->r[6]+0x0000003Cu,c->r[4]); // 801B9214
  c->r[0]=0u+0x00000000u; // 801B9218
  cmps(c,0,(int32_t)c->r[4],0); // 801B921C
  if (crb(c,2)) { goto L_801B9228; } // 801B9220
  c->r[0]=c->r[0]|0x00000001u; // 801B9224
L_801B9228:;
  c->r[6]=R16(c->r[29]+0x00000002u); // 801B9228
  c->r[4]=c->r[29]+0x00000004u; // 801B922C
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B9230
  cmps(c,0,(int32_t)c->r[6],0); // 801B9234
  if (crb(c,2)) { goto L_801B9240; } // 801B9238
  c->r[0]=c->r[0]|0x00000005u; // 801B923C
L_801B9240:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B9240
  W16(c->r[5]+0x00000002u,c->r[6]); // 801B9244
  cmps(c,0,(int32_t)c->r[6],0); // 801B9248
  if (crb(c,2)) { goto L_801B9254; } // 801B924C
  c->r[0]=c->r[0]|0x00000002u; // 801B9250
L_801B9254:;
  c->r[6]=R16(c->r[4]+0x00000002u); // 801B9254
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B9258
  cmps(c,0,(int32_t)c->r[6],0); // 801B925C
  if (crb(c,2)) { goto L_801B9268; } // 801B9260
  c->r[0]=c->r[0]|0x00000006u; // 801B9264
L_801B9268:;
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B9268
  W16(c->r[5]+0x00000006u,c->r[6]); // 801B926C
  cmps(c,0,(int32_t)c->r[6],0); // 801B9270
  if (crb(c,2)) { goto L_801B927C; } // 801B9274
  c->r[0]=c->r[0]|0x00010000u; // 801B9278
L_801B927C:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 801B927C
  W16(c->r[5]+0x00000008u,c->r[6]); // 801B9280
  cmps(c,0,(int32_t)c->r[6],0); // 801B9284
  if (crb(c,2)) { goto L_801B9290; } // 801B9288
  c->r[0]=c->r[0]|0x00050000u; // 801B928C
L_801B9290:;
  c->r[6]=R16(c->r[4]+0x00000008u); // 801B9290
  W16(c->r[5]+0x0000000Au,c->r[6]); // 801B9294
  cmps(c,0,(int32_t)c->r[6],0); // 801B9298
  if (crb(c,2)) { goto L_801B92A4; } // 801B929C
  c->r[0]=c->r[0]|0x00020000u; // 801B92A0
L_801B92A4:;
  c->r[6]=R16(c->r[4]+0x0000000Au); // 801B92A4
  W16(c->r[5]+0x0000000Cu,c->r[6]); // 801B92A8
  cmps(c,0,(int32_t)c->r[6],0); // 801B92AC
  if (crb(c,2)) { goto L_801B92B8; } // 801B92B0
  c->r[0]=c->r[0]|0x00060000u; // 801B92B4
L_801B92B8:;
  c->r[6]=R16(c->r[4]+0x0000000Cu); // 801B92B8
  W16(c->r[5]+0x0000000Eu,c->r[6]); // 801B92BC
  cmps(c,0,(int32_t)c->r[6],0); // 801B92C0
  if (crb(c,2)) { goto L_801B92CC; } // 801B92C4
  c->r[0]=c->r[0]|0x00200000u; // 801B92C8
L_801B92CC:;
  c->r[6]=R16(c->r[4]+0x0000000Eu); // 801B92CC
  W16(c->r[5]+0x00000010u,c->r[6]); // 801B92D0
  cmps(c,0,(int32_t)c->r[6],0); // 801B92D4
  if (crb(c,2)) { goto L_801B92E0; } // 801B92D8
  c->r[0]=c->r[0]|0x00A00000u; // 801B92DC
L_801B92E0:;
  c->r[6]=R16(c->r[4]+0x00000010u); // 801B92E0
  W16(c->r[5]+0x00000012u,c->r[6]); // 801B92E4
  cmps(c,0,(int32_t)c->r[6],0); // 801B92E8
  if (crb(c,2)) { goto L_801B92F4; } // 801B92EC
  c->r[0]=c->r[0]|0x00400000u; // 801B92F0
L_801B92F4:;
  c->r[6]=R16(c->r[4]+0x00000012u); // 801B92F4
  W16(c->r[5]+0x00000014u,c->r[6]); // 801B92F8
  cmps(c,0,(int32_t)c->r[6],0); // 801B92FC
  if (crb(c,2)) { goto L_801B9308; } // 801B9300
  c->r[0]=c->r[0]|0x00C00000u; // 801B9304
L_801B9308:;
  c->r[6]=R16(c->r[4]+0x00000014u); // 801B9308
  W16(c->r[5]+0x00000016u,c->r[6]); // 801B930C
  cmps(c,0,(int32_t)c->r[6],0); // 801B9310
  if (crb(c,2)) { goto L_801B931C; } // 801B9314
  c->r[0]=c->r[0]|0x04000000u; // 801B9318
L_801B931C:;
  c->r[6]=R16(c->r[4]+0x00000016u); // 801B931C
  W16(c->r[5]+0x00000018u,c->r[6]); // 801B9320
  cmps(c,0,(int32_t)c->r[6],0); // 801B9324
  if (crb(c,2)) { goto L_801B9330; } // 801B9328
  c->r[0]=c->r[0]|0x14000000u; // 801B932C
L_801B9330:;
  c->r[6]=R16(c->r[4]+0x00000018u); // 801B9330
  W16(c->r[5]+0x0000001Au,c->r[6]); // 801B9334
  cmps(c,0,(int32_t)c->r[6],0); // 801B9338
  if (crb(c,2)) { goto L_801B9344; } // 801B933C
  c->r[0]=c->r[0]|0x08000000u; // 801B9340
L_801B9344:;
  c->r[6]=R16(c->r[4]+0x0000001Au); // 801B9344
  W16(c->r[5]+0x0000001Cu,c->r[6]); // 801B9348
  cmps(c,0,(int32_t)c->r[6],0); // 801B934C
  if (crb(c,2)) { goto L_801B9358; } // 801B9350
  c->r[0]=c->r[0]|0x18000000u; // 801B9354
L_801B9358:;
  c->r[6]=R16(c->r[4]+0x0000001Cu); // 801B9358
  W16(c->r[5]+0x0000001Eu,c->r[6]); // 801B935C
  cmps(c,0,(int32_t)c->r[6],0); // 801B9360
  if (crb(c,2)) { goto L_801B936C; } // 801B9364
  c->r[0]=c->r[0]|0x00000008u; // 801B9368
L_801B936C:;
  c->r[6]=R16(c->r[4]+0x0000001Eu); // 801B936C
  W16(c->r[5]+0x00000020u,c->r[6]); // 801B9370
  cmps(c,0,(int32_t)c->r[6],0); // 801B9374
  if (crb(c,2)) { goto L_801B9380; } // 801B9378
  c->r[0]=c->r[0]|0x00000018u; // 801B937C
L_801B9380:;
  c->r[6]=R16(c->r[4]+0x00000020u); // 801B9380
  W16(c->r[5]+0x00000022u,c->r[6]); // 801B9384
  cmps(c,0,(int32_t)c->r[6],0); // 801B9388
  if (crb(c,2)) { goto L_801B9394; } // 801B938C
  c->r[0]=c->r[0]|0x00080000u; // 801B9390
L_801B9394:;
  c->r[6]=R16(c->r[4]+0x00000022u); // 801B9394
  W16(c->r[5]+0x00000024u,c->r[6]); // 801B9398
  cmps(c,0,(int32_t)c->r[6],0); // 801B939C
  if (crb(c,2)) { goto L_801B93A8; } // 801B93A0
  c->r[0]=c->r[0]|0x00180000u; // 801B93A4
L_801B93A8:;
  c->r[6]=R16(c->r[4]+0x00000024u); // 801B93A8
  W16(c->r[5]+0x00000026u,c->r[6]); // 801B93AC
  cmps(c,0,(int32_t)c->r[6],0); // 801B93B0
  if (crb(c,2)) { goto L_801B93BC; } // 801B93B4
  c->r[0]=c->r[0]|0x01000000u; // 801B93B8
L_801B93BC:;
  c->r[6]=R16(c->r[4]+0x00000026u); // 801B93BC
  W16(c->r[5]+0x00000028u,c->r[6]); // 801B93C0
  cmps(c,0,(int32_t)c->r[6],0); // 801B93C4
  if (crb(c,2)) { goto L_801B93D0; } // 801B93C8
  c->r[0]=c->r[0]|0x03000000u; // 801B93CC
L_801B93D0:;
  c->r[6]=R16(c->r[4]+0x00000028u); // 801B93D0
  W16(c->r[5]+0x0000002Au,c->r[6]); // 801B93D4
  cmps(c,0,(int32_t)c->r[6],0); // 801B93D8
  if (crb(c,2)) { goto L_801B93E4; } // 801B93DC
  c->r[0]=c->r[0]|0x20000000u; // 801B93E0
L_801B93E4:;
  c->r[4]=R16(c->r[4]+0x0000002Au); // 801B93E4
  W16(c->r[5]+0x0000002Cu,c->r[4]); // 801B93E8
  cmps(c,0,(int32_t)c->r[4],0); // 801B93EC
  if (crb(c,2)) { goto L_801B93F8; } // 801B93F0
  c->r[0]=c->r[0]|0x60000000u; // 801B93F4
L_801B93F8:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B93F8
  cmps(c,0,(int32_t)c->r[31],0); // 801B93FC
  W32(c->r[4]+0x00000034u,c->r[0]); // 801B9400
  if (crb(c,2)) { goto L_801B941C; } // 801B9404
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B9408
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801B940C
  c->r[0]=c->r[0]|0x00000012u; // 801B9410
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801B9414
  goto L_801B9428; // 801B9418
L_801B941C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B941C
  c->r[0]=c->r[0]|0x00000012u; // 801B9420
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B9424
L_801B9428:;
  c->lr=0x801B942Cu; f_801251F0(c); // 801B9428
L_801B942C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B942C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B9430
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B9434
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B9438
  c->lr=c->r[0]; // 801B943C
  c->r[1]=c->r[1]+0x00000020u; // 801B9440
  return; // 801B9444
}

// SetVoiceSrcType__Q44nw4r3snd6detail17AxVoiceParamBlockFUl
void f_801B9450(Ctx* __restrict c) {
  trace_call(0x801B9450u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9450
  c->r[0]=c->lr; // 801B9454
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B945C
  c->r[31]=c->r[4]|c->r[4]; // 801B9460
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B9464
  c->r[30]=c->r[3]|c->r[3]; // 801B9468
  c->lr=0x801B9470u; f_801251B0(c); // 801B946C
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B9470
  cmps(c,0,(int32_t)c->r[4],0); // 801B9474
  if (!crb(c,2)) { goto L_801B9484; } // 801B9478
  c->lr=0x801B9480u; f_801251F0(c); // 801B947C
  goto L_801B9518; // 801B9480
L_801B9484:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B9484
  if (crb(c,2)) { goto L_801B94B0; } // 801B9488
  cmpu(c,0,c->r[31],0x00000001u); // 801B948C
  if (crb(c,2)) { goto L_801B94BC; } // 801B9490
  cmpu(c,0,c->r[31],0x00000002u); // 801B9494
  if (crb(c,2)) { goto L_801B94C8; } // 801B9498
  cmpu(c,0,c->r[31],0x00000003u); // 801B949C
  if (crb(c,2)) { goto L_801B94DC; } // 801B94A0
  cmpu(c,0,c->r[31],0x00000004u); // 801B94A4
  if (crb(c,2)) { goto L_801B94F4; } // 801B94A8
  goto L_801B9508; // 801B94AC
L_801B94B0:;
  c->r[0]=0u+0x00000002u; // 801B94B0
  W16(c->r[4]+0x00000030u,c->r[0]); // 801B94B4
  goto L_801B9508; // 801B94B8
L_801B94BC:;
  c->r[0]=0u+0x00000001u; // 801B94BC
  W16(c->r[4]+0x00000030u,c->r[0]); // 801B94C0
  goto L_801B9508; // 801B94C4
L_801B94C8:;
  c->r[0]=0u+0x00000000u; // 801B94C8
  W16(c->r[4]+0x00000030u,c->r[0]); // 801B94CC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B94D0
  W16(c->r[4]+0x00000032u,c->r[0]); // 801B94D4
  goto L_801B9508; // 801B94D8
L_801B94DC:;
  c->r[0]=0u+0x00000000u; // 801B94DC
  W16(c->r[4]+0x00000030u,c->r[0]); // 801B94E0
  c->r[0]=0u+0x00000001u; // 801B94E4
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B94E8
  W16(c->r[4]+0x00000032u,c->r[0]); // 801B94EC
  goto L_801B9508; // 801B94F0
L_801B94F4:;
  c->r[0]=0u+0x00000000u; // 801B94F4
  W16(c->r[4]+0x00000030u,c->r[0]); // 801B94F8
  c->r[0]=0u+0x00000002u; // 801B94FC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801B9500
  W16(c->r[4]+0x00000032u,c->r[0]); // 801B9504
L_801B9508:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B9508
  c->r[0]=c->r[0]|0x00000001u; // 801B950C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B9510
  c->lr=0x801B9518u; f_801251F0(c); // 801B9514
L_801B9518:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9518
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B951C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B9520
  c->lr=c->r[0]; // 801B9524
  c->r[1]=c->r[1]+0x00000010u; // 801B9528
  return; // 801B952C
}

// SetVoiceRmtMix__Q44nw4r3snd6detail17AxVoiceParamBlockFRC11_AXPBRMTMIX
void f_801B9530(Ctx* __restrict c) {
  trace_call(0x801B9530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9530
  c->r[0]=c->lr; // 801B9534
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B953C
  c->r[31]=c->r[3]|c->r[3]; // 801B9540
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B9544
  c->r[30]=c->r[4]|c->r[4]; // 801B9548
  c->lr=0x801B9550u; f_801251B0(c); // 801B954C
  c->r[5]=R32(c->r[31]+0x00000000u); // 801B9550
  cmps(c,0,(int32_t)c->r[5],0); // 801B9554
  if (!crb(c,2)) { goto L_801B9564; } // 801B9558
  c->lr=0x801B9560u; f_801251F0(c); // 801B955C
  goto L_801B9704; // 801B9560
L_801B9564:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 801B9564
  c->r[4]=c->r[5]+0x00000104u; // 801B9568
  W16(c->r[5]+0x00000102u,c->r[0]); // 801B956C
  c->r[6]=0u+0x00000000u; // 801B9570
  cmps(c,0,(int32_t)c->r[0],0); // 801B9574
  if (crb(c,2)) { goto L_801B9580; } // 801B9578
  c->r[6]=c->r[6]|0x00000001u; // 801B957C
L_801B9580:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801B9580
  c->r[5]=c->r[30]+0x00000004u; // 801B9584
  W16(c->r[4]+0x00000000u,c->r[0]); // 801B9588
  cmps(c,0,(int32_t)c->r[0],0); // 801B958C
  if (crb(c,2)) { goto L_801B959C; } // 801B9590
  c->r[0]=c->r[6]|0x00000002u; // 801B9594
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9598
L_801B959C:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 801B959C
  W16(c->r[4]+0x00000002u,c->r[0]); // 801B95A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B95A4
  if (crb(c,2)) { goto L_801B95B4; } // 801B95A8
  c->r[0]=c->r[6]|0x00000004u; // 801B95AC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B95B0
L_801B95B4:;
  c->r[0]=R16(c->r[5]+0x00000002u); // 801B95B4
  W16(c->r[4]+0x00000004u,c->r[0]); // 801B95B8
  cmps(c,0,(int32_t)c->r[0],0); // 801B95BC
  if (crb(c,2)) { goto L_801B95CC; } // 801B95C0
  c->r[0]=c->r[6]|0x00000008u; // 801B95C4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B95C8
L_801B95CC:;
  c->r[0]=R16(c->r[5]+0x00000004u); // 801B95CC
  W16(c->r[4]+0x00000006u,c->r[0]); // 801B95D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B95D4
  if (crb(c,2)) { goto L_801B95E4; } // 801B95D8
  c->r[0]=c->r[6]|0x00000010u; // 801B95DC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B95E0
L_801B95E4:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 801B95E4
  W16(c->r[4]+0x00000008u,c->r[0]); // 801B95E8
  cmps(c,0,(int32_t)c->r[0],0); // 801B95EC
  if (crb(c,2)) { goto L_801B95FC; } // 801B95F0
  c->r[0]=c->r[6]|0x00000020u; // 801B95F4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B95F8
L_801B95FC:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801B95FC
  W16(c->r[4]+0x0000000Au,c->r[0]); // 801B9600
  cmps(c,0,(int32_t)c->r[0],0); // 801B9604
  if (crb(c,2)) { goto L_801B9614; } // 801B9608
  c->r[0]=c->r[6]|0x00000040u; // 801B960C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9610
L_801B9614:;
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801B9614
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 801B9618
  cmps(c,0,(int32_t)c->r[0],0); // 801B961C
  if (crb(c,2)) { goto L_801B962C; } // 801B9620
  c->r[0]=c->r[6]|0x00000080u; // 801B9624
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9628
L_801B962C:;
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801B962C
  W16(c->r[4]+0x0000000Eu,c->r[0]); // 801B9630
  cmps(c,0,(int32_t)c->r[0],0); // 801B9634
  if (crb(c,2)) { goto L_801B9644; } // 801B9638
  c->r[0]=c->r[6]|0x00000100u; // 801B963C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9640
L_801B9644:;
  c->r[0]=R16(c->r[5]+0x0000000Eu); // 801B9644
  W16(c->r[4]+0x00000010u,c->r[0]); // 801B9648
  cmps(c,0,(int32_t)c->r[0],0); // 801B964C
  if (crb(c,2)) { goto L_801B965C; } // 801B9650
  c->r[0]=c->r[6]|0x00000200u; // 801B9654
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9658
L_801B965C:;
  c->r[0]=R16(c->r[5]+0x00000010u); // 801B965C
  W16(c->r[4]+0x00000012u,c->r[0]); // 801B9660
  cmps(c,0,(int32_t)c->r[0],0); // 801B9664
  if (crb(c,2)) { goto L_801B9674; } // 801B9668
  c->r[0]=c->r[6]|0x00000400u; // 801B966C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9670
L_801B9674:;
  c->r[0]=R16(c->r[5]+0x00000012u); // 801B9674
  W16(c->r[4]+0x00000014u,c->r[0]); // 801B9678
  cmps(c,0,(int32_t)c->r[0],0); // 801B967C
  if (crb(c,2)) { goto L_801B968C; } // 801B9680
  c->r[0]=c->r[6]|0x00000800u; // 801B9684
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B9688
L_801B968C:;
  c->r[0]=R16(c->r[5]+0x00000014u); // 801B968C
  W16(c->r[4]+0x00000016u,c->r[0]); // 801B9690
  cmps(c,0,(int32_t)c->r[0],0); // 801B9694
  if (crb(c,2)) { goto L_801B96A4; } // 801B9698
  c->r[0]=c->r[6]|0x00001000u; // 801B969C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B96A0
L_801B96A4:;
  c->r[0]=R16(c->r[5]+0x00000016u); // 801B96A4
  W16(c->r[4]+0x00000018u,c->r[0]); // 801B96A8
  cmps(c,0,(int32_t)c->r[0],0); // 801B96AC
  if (crb(c,2)) { goto L_801B96BC; } // 801B96B0
  c->r[0]=c->r[6]|0x00002000u; // 801B96B4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B96B8
L_801B96BC:;
  c->r[0]=R16(c->r[5]+0x00000018u); // 801B96BC
  W16(c->r[4]+0x0000001Au,c->r[0]); // 801B96C0
  cmps(c,0,(int32_t)c->r[0],0); // 801B96C4
  if (crb(c,2)) { goto L_801B96D4; } // 801B96C8
  c->r[0]=c->r[6]|0x00004000u; // 801B96CC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B96D0
L_801B96D4:;
  c->r[0]=R16(c->r[5]+0x0000001Au); // 801B96D4
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 801B96D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B96DC
  if (crb(c,2)) { goto L_801B96EC; } // 801B96E0
  c->r[0]=c->r[6]|0x00008000u; // 801B96E4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801B96E8
L_801B96EC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B96EC
  W16(c->r[4]+0x00000100u,c->r[6]); // 801B96F0
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B96F4
  c->r[0]=c->r[0]|0x03000000u; // 801B96F8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B96FC
  c->lr=0x801B9704u; f_801251F0(c); // 801B9700
L_801B9704:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9704
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9708
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B970C
  c->lr=c->r[0]; // 801B9710
  c->r[1]=c->r[1]+0x00000010u; // 801B9714
  return; // 801B9718
}

// SetVoiceRmtIIRCoefs__Q44nw4r3snd6detail17AxVoiceParamBlockFUse
void f_801B9720(Ctx* __restrict c) {
  trace_call(0x801B9720u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9720
  c->r[0]=c->lr; // 801B9724
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801B9728
  c->r[11]=c->r[1]+0x000000A0u; // 801B972C
  c->lr=0x801B9734u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9730
  c->r[31]=c->r[3]|c->r[3]; // 801B9734
  c->r[26]=c->r[4]|c->r[4]; // 801B9738
  if (!crb(c,6)) { goto L_801B9760; } // 801B973C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801B9740
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801B9744
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801B9748
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801B974C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801B9750
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801B9754
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801B9758
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801B975C
L_801B9760:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801B9760
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801B9764
  W32(c->r[1]+0x00000010u,c->r[5]); // 801B9768
  W32(c->r[1]+0x00000014u,c->r[6]); // 801B976C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801B9770
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801B9774
  W32(c->r[1]+0x00000020u,c->r[9]); // 801B9778
  W32(c->r[1]+0x00000024u,c->r[10]); // 801B977C
  c->lr=0x801B9784u; f_801251B0(c); // 801B9780
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B9784
  c->r[30]=c->r[3]|c->r[3]; // 801B9788
  cmps(c,0,(int32_t)c->r[0],0); // 801B978C
  if (!crb(c,2)) { goto L_801B979C; } // 801B9790
  c->lr=0x801B9798u; f_801251F0(c); // 801B9794
  goto L_801B988C; // 801B9798
L_801B979C:;
  cmpu(c,0,c->r[26],0x00000001u); // 801B979C
  if (!crb(c,2)) { goto L_801B97AC; } // 801B97A0
  c->r[27]=0u+0x00000002u; // 801B97A4
  goto L_801B97C4; // 801B97A8
L_801B97AC:;
  cmpu(c,0,c->r[26],0x00000002u); // 801B97AC
  if (!crb(c,2)) { goto L_801B97BC; } // 801B97B0
  c->r[27]=0u+0x00000005u; // 801B97B4
  goto L_801B97C4; // 801B97B8
L_801B97BC:;
  c->lr=0x801B97C0u; f_801251F0(c); // 801B97BC
  goto L_801B988C; // 801B97C0
L_801B97C4:;
  c->r[3]=c->r[1]+0x000000A8u; // 801B97C4
  c->r[0]=c->r[1]+0x00000008u; // 801B97C8
  c->r[4]=0u+0x02000000u; // 801B97CC
  W32(c->r[1]+0x00000074u,c->r[4]); // 801B97D0
  c->r[29]=c->r[1]+0x00000068u; // 801B97D4
  c->r[28]=0u+0x00000000u; // 801B97D8
  W32(c->r[1]+0x00000078u,c->r[3]); // 801B97DC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801B97E0
  goto L_801B9804; // 801B97E4
L_801B97E8:;
  c->r[3]=c->r[1]+0x00000074u; // 801B97E8
  c->r[4]=0u+0x00000001u; // 801B97EC
  c->lr=0x801B97F4u; f_802E5F9C(c); // 801B97F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B97F4
  c->r[28]=c->r[28]+0x00000001u; // 801B97F8
  W16(c->r[29]+0x00000000u,c->r[0]); // 801B97FC
  c->r[29]=c->r[29]+0x00000002u; // 801B9800
L_801B9804:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801B9804
  if (crb(c,0)) { IRQCHK(c); goto L_801B97E8; } // 801B9808
  cmpu(c,0,c->r[26],0x00000001u); // 801B980C
  if (!crb(c,2)) { goto L_801B983C; } // 801B9810
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B9814
  c->r[0]=R16(c->r[1]+0x00000068u); // 801B9818
  W16(c->r[3]+0x00000140u,c->r[0]); // 801B981C
  c->r[0]=R16(c->r[1]+0x0000006Au); // 801B9820
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B9824
  W16(c->r[3]+0x00000142u,c->r[0]); // 801B9828
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B982C
  c->r[0]=c->r[0]|0x20000000u; // 801B9830
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B9834
  goto L_801B9884; // 801B9838
L_801B983C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B983C
  c->r[0]=R16(c->r[1]+0x00000068u); // 801B9840
  W16(c->r[3]+0x00000146u,c->r[0]); // 801B9844
  c->r[0]=R16(c->r[1]+0x0000006Au); // 801B9848
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B984C
  c->r[5]=R16(c->r[1]+0x0000006Cu); // 801B9850
  W16(c->r[3]+0x00000148u,c->r[0]); // 801B9854
  c->r[4]=R16(c->r[1]+0x0000006Eu); // 801B9858
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B985C
  c->r[0]=R16(c->r[1]+0x00000070u); // 801B9860
  W16(c->r[3]+0x0000014Au,c->r[5]); // 801B9864
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B9868
  W16(c->r[3]+0x0000014Cu,c->r[4]); // 801B986C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B9870
  W16(c->r[3]+0x0000014Eu,c->r[0]); // 801B9874
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B9878
  c->r[0]=c->r[0]|0x40000000u; // 801B987C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B9880
L_801B9884:;
  c->r[3]=c->r[30]|c->r[30]; // 801B9884
  c->lr=0x801B988Cu; f_801251F0(c); // 801B9888
L_801B988C:;
  c->r[11]=c->r[1]+0x000000A0u; // 801B988C
  c->lr=0x801B9894u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9890
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801B9894
  c->lr=c->r[0]; // 801B9898
  c->r[1]=c->r[1]+0x000000A0u; // 801B989C
  return; // 801B98A0
}

// GetInstance__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801B98B0(Ctx* __restrict c) {
  trace_call(0x801B98B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B98B0
  c->r[0]=c->lr; // 801B98B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B98B8
  c->r[0]=R8(c->r[13]+0xFFFFC410u); // 801B98BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B98C0
  if (!crb(c,2)) { goto L_801B9924; } // 801B98C4
  c->r[3]=0u+0x805B0000u; // 801B98C8
  c->r[4]=0u+0x801C0000u; // 801B98CC
  c->r[3]=c->r[3]+0xFFFFC61Cu; // 801B98D0
  c->r[0]=0u+0x00000000u; // 801B98D4
  c->r[8]=c->r[3]+0x00000004u; // 801B98D8
  c->r[5]=0u+0x805B0000u; // 801B98DC
  c->r[7]=c->r[3]+0x00000010u; // 801B98E0
  c->r[6]=c->r[3]+0x0000001Cu; // 801B98E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801B98E8
  c->r[4]=c->r[4]+0xFFFF9940u; // 801B98EC
  c->r[5]=c->r[5]+0xFFFFC610u; // 801B98F0
  W32(c->r[3]+0x00000004u,c->r[8]); // 801B98F4
  W32(c->r[3]+0x00000008u,c->r[8]); // 801B98F8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B98FC
  W32(c->r[3]+0x00000010u,c->r[7]); // 801B9900
  W32(c->r[3]+0x00000014u,c->r[7]); // 801B9904
  W32(c->r[3]+0x00000018u,c->r[0]); // 801B9908
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 801B990C
  W32(c->r[3]+0x00000020u,c->r[6]); // 801B9910
  W8(c->r[3]+0x00000024u,c->r[0]); // 801B9914
  c->lr=0x801B991Cu; f_802E6064(c); // 801B9918
  c->r[0]=0u+0x00000001u; // 801B991C
  W8(c->r[13]+0xFFFFC410u,c->r[0]); // 801B9920
L_801B9924:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9924
  c->r[3]=0u+0x805B0000u; // 801B9928
  c->r[3]=c->r[3]+0xFFFFC61Cu; // 801B992C
  c->lr=c->r[0]; // 801B9930
  c->r[1]=c->r[1]+0x00000010u; // 801B9934
  return; // 801B9938
}

// __dt__Q44nw4r3snd6detail14AxVoiceManagerFv
void f_801B9940(Ctx* __restrict c) {
  trace_call(0x801B9940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9940
  c->r[0]=c->lr; // 801B9944
  cmps(c,0,(int32_t)c->r[3],0); // 801B9948
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B994C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9950
  c->r[31]=c->r[4]|c->r[4]; // 801B9954
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B9958
  c->r[30]=c->r[3]|c->r[3]; // 801B995C
  if (crb(c,2)) { goto L_801B99A8; } // 801B9960
  c->r[3]=addc(c,c->r[3],0x00000018u,0); cr0(c,c->r[3]); // 801B9964
  if (crb(c,2)) { goto L_801B9974; } // 801B9968
  c->r[4]=0u+0x00000000u; // 801B996C
  c->lr=0x801B9974u; f_801E4130(c); // 801B9970
L_801B9974:;
  c->r[3]=addc(c,c->r[30],0x0000000Cu,0); cr0(c,c->r[3]); // 801B9974
  if (crb(c,2)) { goto L_801B9984; } // 801B9978
  c->r[4]=0u+0x00000000u; // 801B997C
  c->lr=0x801B9984u; f_801E4130(c); // 801B9980
L_801B9984:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B9984
  if (crb(c,2)) { goto L_801B9998; } // 801B9988
  c->r[3]=c->r[30]|c->r[30]; // 801B998C
  c->r[4]=0u+0x00000000u; // 801B9990
  c->lr=0x801B9998u; f_801E4130(c); // 801B9994
L_801B9998:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B9998
  if (!crb(c,1)) { goto L_801B99A8; } // 801B999C
  c->r[3]=c->r[30]|c->r[30]; // 801B99A0
  c->lr=0x801B99A8u; f_802E61AC(c); // 801B99A4
L_801B99A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801B99A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B99AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B99B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B99B4
  c->lr=c->r[0]; // 801B99B8
  c->r[1]=c->r[1]+0x00000010u; // 801B99BC
  return; // 801B99C0
}

// GetRequiredMemSize__Q44nw4r3snd6detail14AxVoiceManagerFi
void f_801B99D0(Ctx* __restrict c) {
  trace_call(0x801B99D0u);
  c->r[0]=c->r[4]+0x00000010u; // 801B99D0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 801B99D4
  return; // 801B99D8
}

// fn_801B99E0
void f_801B99E0(Ctx* __restrict c) {
  trace_call(0x801B99E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B99E0
  c->r[0]=c->lr; // 801B99E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B99E8
  c->r[11]=c->r[1]+0x00000040u; // 801B99EC
  c->lr=0x801B99F4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B99F0
  c->r[0]=R8(c->r[3]+0x00000024u); // 801B99F4
  c->r[23]=c->r[3]|c->r[3]; // 801B99F8
  c->r[24]=c->r[4]|c->r[4]; // 801B99FC
  c->r[25]=c->r[5]|c->r[5]; // 801B9A00
  cmps(c,0,(int32_t)c->r[0],0); // 801B9A04
  if (!crb(c,2)) { goto L_801B9AC8; } // 801B9A08
  c->r[4]=0u+0x38E40000u; // 801B9A0C
  c->r[27]=c->r[24]|c->r[24]; // 801B9A10
  c->r[0]=c->r[4]+0xFFFF8E39u; // 801B9A14
  c->r[26]=0u+0x00000000u; // 801B9A18
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801B9A1C
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; cr0(c,c->r[0]); // 801B9A20
  W32(c->r[3]+0x00000028u,c->r[0]); // 801B9A24
  if (crb(c,2)) { goto L_801B9A98; } // 801B9A28
  c->r[31]=c->r[3]+0x00000010u; // 801B9A2C
  c->r[29]=0u+0x803A0000u; // 801B9A30
  c->r[30]=0u+0x803A0000u; // 801B9A34
  goto L_801B9A8C; // 801B9A38
L_801B9A3C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B9A3C
  c->r[28]=c->r[27]|c->r[27]; // 801B9A40
  if (crb(c,2)) { goto L_801B9A54; } // 801B9A44
  c->r[3]=c->r[27]|c->r[27]; // 801B9A48
  c->lr=0x801B9A50u; f_801B6800(c); // 801B9A4C
  c->r[28]=c->r[3]|c->r[3]; // 801B9A50
L_801B9A54:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B9A54
  if (!crb(c,2)) { goto L_801B9A70; } // 801B9A58
  c->r[3]=c->r[29]+0xFFFFC13Cu; // 801B9A5C
  c->r[5]=c->r[30]+0xFFFFC118u; // 801B9A60
  c->r[4]=0u+0x00000233u; // 801B9A64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9A68
  c->lr=0x801B9A70u; f_80212260(c); // 801B9A6C
L_801B9A70:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801B9A70
  c->r[3]=c->r[23]+0x0000000Cu; // 801B9A74
  c->r[4]=c->r[1]+0x00000008u; // 801B9A78
  c->r[5]=c->r[28]+0x00000040u; // 801B9A7C
  c->lr=0x801B9A84u; f_801E44B0(c); // 801B9A80
  c->r[27]=c->r[27]+0x00000048u; // 801B9A84
  c->r[26]=c->r[26]+0x00000001u; // 801B9A88
L_801B9A8C:;
  c->r[0]=R32(c->r[23]+0x00000028u); // 801B9A8C
  cmpu(c,0,c->r[26],c->r[0]); // 801B9A90
  if (crb(c,0)) { IRQCHK(c); goto L_801B9A3C; } // 801B9A94
L_801B9A98:;
  c->r[0]=c->r[24]+c->r[25]; // 801B9A98
  cmpu(c,0,c->r[27],c->r[0]); // 801B9A9C
  if (!crb(c,1)) { goto L_801B9AC0; } // 801B9AA0
  c->r[3]=0u+0x803A0000u; // 801B9AA4
  c->r[5]=0u+0x803A0000u; // 801B9AA8
  c->r[3]=c->r[3]+0xFFFFBFE8u; // 801B9AAC
  c->r[4]=0u+0x00000041u; // 801B9AB0
  c->r[5]=c->r[5]+0xFFFFC000u; // 801B9AB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9AB8
  c->lr=0x801B9AC0u; f_80212260(c); // 801B9ABC
L_801B9AC0:;
  c->r[0]=0u+0x00000001u; // 801B9AC0
  W8(c->r[23]+0x00000024u,c->r[0]); // 801B9AC4
L_801B9AC8:;
  c->r[11]=c->r[1]+0x00000040u; // 801B9AC8
  c->lr=0x801B9AD0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9ACC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B9AD0
  c->lr=c->r[0]; // 801B9AD4
  c->r[1]=c->r[1]+0x00000040u; // 801B9AD8
  return; // 801B9ADC
}

// fn_801B9AE0
void f_801B9AE0(Ctx* __restrict c) {
  trace_call(0x801B9AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9AE0
  c->r[0]=c->lr; // 801B9AE4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801B9AE8
  c->r[11]=c->r[1]+0x00000080u; // 801B9AEC
  c->lr=0x801B9AF4u; f_802E6998(c); // 801B9AF0
  c->r[19]=0u+0x803A0000u; // 801B9AF4
  W32(c->r[1]+0x00000008u,c->r[4]); // 801B9AF8
  c->r[15]=c->r[3]|c->r[3]; // 801B9AFC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801B9B00
  c->r[19]=c->r[19]+0xFFFFBFE8u; // 801B9B04
  W32(c->r[1]+0x00000010u,c->r[6]); // 801B9B08
  c->lr=0x801B9B10u; f_801251B0(c); // 801B9B0C
  W32(c->r[1]+0x00000028u,c->r[3]); // 801B9B10
  c->lr=0x801B9B18u; f_801251B0(c); // 801B9B14
  c->r[0]=R32(c->r[15]+0x00000018u); // 801B9B18
  W32(c->r[1]+0x00000024u,c->r[3]); // 801B9B1C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9B20
  if (crb(c,2)) { goto L_801B9D50; } // 801B9B24
  c->r[18]=0u+0x805B0000u; // 801B9B28
  c->r[27]=0u+0x803A0000u; // 801B9B2C
  c->r[18]=c->r[18]+0xFFFFC61Cu; // 801B9B30
  c->r[28]=0u+0x803A0000u; // 801B9B34
  c->r[20]=0u+0x803A0000u; // 801B9B38
  c->r[21]=0u+0x803A0000u; // 801B9B3C
  c->r[29]=c->r[18]+0x00000010u; // 801B9B40
  c->r[22]=0u+0x803A0000u; // 801B9B44
  c->r[23]=0u+0x803A0000u; // 801B9B48
  c->r[24]=0u+0x803A0000u; // 801B9B4C
  c->r[25]=0u+0x803A0000u; // 801B9B50
  c->r[26]=0u+0x00000000u; // 801B9B54
  c->r[14]=0u+0x801C0000u; // 801B9B58
  goto L_801B9D44; // 801B9B5C
L_801B9B60:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B9B60
  if (!crb(c,2)) { goto L_801B9B7C; } // 801B9B64
  c->r[3]=c->r[20]+0xFFFFC10Cu; // 801B9B68
  c->r[5]=c->r[21]+0xFFFFC0E8u; // 801B9B6C
  c->r[4]=0u+0x000001F1u; // 801B9B70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9B74
  c->lr=0x801B9B7Cu; f_80212260(c); // 801B9B78
L_801B9B7C:;
  c->r[16]=R32(c->r[15]+0x0000001Cu); // 801B9B7C
  cmps(c,0,(int32_t)c->r[16],0); // 801B9B80
  if (!crb(c,2)) { goto L_801B9B9C; } // 801B9B84
  c->r[3]=c->r[22]+0xFFFFC0ACu; // 801B9B88
  c->r[5]=c->r[23]+0xFFFFC088u; // 801B9B8C
  c->r[4]=0u+0x0000023Du; // 801B9B90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9B94
  c->lr=0x801B9B9Cu; f_80212260(c); // 801B9B98
L_801B9B9C:;
  c->r[17]=addc(c,c->r[16],0xFFFFFFC0u,0); cr0(c,c->r[17]); // 801B9B9C
  if (!crb(c,2)) { goto L_801B9BB8; } // 801B9BA0
  c->r[3]=c->r[24]+0xFFFFC0DCu; // 801B9BA4
  c->r[5]=c->r[25]+0xFFFFC0B8u; // 801B9BA8
  c->r[4]=0u+0x00000193u; // 801B9BAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9BB0
  c->lr=0x801B9BB8u; f_80212260(c); // 801B9BB4
L_801B9BB8:;
  c->r[12]=R32(c->r[17]+0x00000038u); // 801B9BB8
  cmps(c,0,(int32_t)c->r[12],0); // 801B9BBC
  if (crb(c,2)) { goto L_801B9BD8; } // 801B9BC0
  c->r[3]=c->r[17]|c->r[17]; // 801B9BC4
  c->r[5]=R32(c->r[17]+0x0000003Cu); // 801B9BC8
  c->r[4]=0u+0x00000001u; // 801B9BCC
  c->ctr=c->r[12]; // 801B9BD0
  if (true) { c->lr=0x801B9BD8u; dispatch(c,c->ctr); } // 801B9BD4
L_801B9BD8:;
  c->r[0]=R8(c->r[13]+0xFFFFC410u); // 801B9BD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801B9BDC
  if (!crb(c,2)) { goto L_801B9C34; } // 801B9BE0
  c->r[0]=c->r[18]+0x00000004u; // 801B9BE4
  c->r[6]=c->r[18]+0x00000010u; // 801B9BE8
  c->r[7]=c->r[18]+0x0000001Cu; // 801B9BEC
  c->r[5]=0u+0x805B0000u; // 801B9BF0
  W32(c->r[18]+0x00000000u,c->r[26]); // 801B9BF4
  c->r[3]=c->r[18]|c->r[18]; // 801B9BF8
  c->r[4]=c->r[14]+0xFFFF9940u; // 801B9BFC
  c->r[5]=c->r[5]+0xFFFFC610u; // 801B9C00
  W32(c->r[18]+0x00000004u,c->r[0]); // 801B9C04
  W32(c->r[18]+0x00000008u,c->r[0]); // 801B9C08
  W32(c->r[18]+0x0000000Cu,c->r[26]); // 801B9C0C
  W32(c->r[18]+0x00000010u,c->r[6]); // 801B9C10
  W32(c->r[18]+0x00000014u,c->r[6]); // 801B9C14
  W32(c->r[18]+0x00000018u,c->r[26]); // 801B9C18
  W32(c->r[18]+0x0000001Cu,c->r[7]); // 801B9C1C
  W32(c->r[18]+0x00000020u,c->r[7]); // 801B9C20
  W8(c->r[18]+0x00000024u,c->r[26]); // 801B9C24
  c->lr=0x801B9C2Cu; f_802E6064(c); // 801B9C28
  c->r[0]=0u+0x00000001u; // 801B9C2C
  W8(c->r[13]+0xFFFFC410u,c->r[0]); // 801B9C30
L_801B9C34:;
  c->lr=0x801B9C38u; f_801251B0(c); // 801B9C34
  cmps(c,0,(int32_t)c->r[17],0); // 801B9C38
  c->r[31]=c->r[3]|c->r[3]; // 801B9C3C
  if (!crb(c,2)) { goto L_801B9C58; } // 801B9C40
  c->r[3]=c->r[19]+0x00000000u; // 801B9C44
  c->r[5]=c->r[19]+0x0000005Cu; // 801B9C48
  c->r[4]=0u+0x000000D4u; // 801B9C4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9C50
  c->lr=0x801B9C58u; f_80212260(c); // 801B9C54
L_801B9C58:;
  c->r[0]=R32(c->r[17]+0x00000000u); // 801B9C58
  cmps(c,0,(int32_t)c->r[0],0); // 801B9C5C
  if (crb(c,2)) { goto L_801B9C6C; } // 801B9C60
  c->r[3]=R32(c->r[17]+0x00000000u); // 801B9C64
  c->lr=0x801B9C6Cu; f_8014F570(c); // 801B9C68
L_801B9C6C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801B9C6C
  if (!crb(c,2)) { goto L_801B9C88; } // 801B9C70
  c->r[3]=c->r[19]+0x00000000u; // 801B9C74
  c->r[5]=c->r[19]+0x00000084u; // 801B9C78
  c->r[4]=0u+0x0000009Au; // 801B9C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9C80
  c->lr=0x801B9C88u; f_80212260(c); // 801B9C84
L_801B9C88:;
  c->r[3]=c->r[17]|c->r[17]; // 801B9C88
  c->r[4]=0u+0xFFFFFFFFu; // 801B9C8C
  c->lr=0x801B9C94u; f_801B6850(c); // 801B9C90
  c->lr=0x801B9C98u; f_801251B0(c); // 801B9C94
  c->r[0]=R8(c->r[17]+0x0000001Du); // 801B9C98
  c->r[30]=c->r[3]|c->r[3]; // 801B9C9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9CA0
  if (crb(c,2)) { goto L_801B9CD8; } // 801B9CA4
  cmps(c,0,(int32_t)c->r[17],0); // 801B9CA8
  if (!crb(c,2)) { goto L_801B9CC4; } // 801B9CAC
  c->r[3]=c->r[27]+0xFFFFC13Cu; // 801B9CB0
  c->r[5]=c->r[28]+0xFFFFC118u; // 801B9CB4
  c->r[4]=0u+0x00000233u; // 801B9CB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9CBC
  c->lr=0x801B9CC4u; f_80212260(c); // 801B9CC0
L_801B9CC4:;
  c->r[16]=c->r[17]+0x00000040u; // 801B9CC4
  c->r[3]=c->r[18]+0x00000018u; // 801B9CC8
  c->r[4]=c->r[16]|c->r[16]; // 801B9CCC
  c->lr=0x801B9CD4u; f_801E45B0(c); // 801B9CD0
  goto L_801B9D04; // 801B9CD4
L_801B9CD8:;
  cmps(c,0,(int32_t)c->r[17],0); // 801B9CD8
  if (!crb(c,2)) { goto L_801B9CF4; } // 801B9CDC
  c->r[3]=c->r[27]+0xFFFFC13Cu; // 801B9CE0
  c->r[5]=c->r[28]+0xFFFFC118u; // 801B9CE4
  c->r[4]=0u+0x00000233u; // 801B9CE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9CEC
  c->lr=0x801B9CF4u; f_80212260(c); // 801B9CF0
L_801B9CF4:;
  c->r[16]=c->r[17]+0x00000040u; // 801B9CF4
  c->r[3]=c->r[18]|c->r[18]; // 801B9CF8
  c->r[4]=c->r[16]|c->r[16]; // 801B9CFC
  c->lr=0x801B9D04u; f_801E45B0(c); // 801B9D00
L_801B9D04:;
  cmps(c,0,(int32_t)c->r[17],0); // 801B9D04
  if (!crb(c,2)) { goto L_801B9D20; } // 801B9D08
  c->r[3]=c->r[27]+0xFFFFC13Cu; // 801B9D0C
  c->r[5]=c->r[28]+0xFFFFC118u; // 801B9D10
  c->r[4]=0u+0x00000233u; // 801B9D14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9D18
  c->lr=0x801B9D20u; f_80212260(c); // 801B9D1C
L_801B9D20:;
  W32(c->r[1]+0x00000018u,c->r[29]); // 801B9D20
  c->r[5]=c->r[16]|c->r[16]; // 801B9D24
  c->r[3]=c->r[18]+0x0000000Cu; // 801B9D28
  c->r[4]=c->r[1]+0x00000018u; // 801B9D2C
  c->lr=0x801B9D34u; f_801E44B0(c); // 801B9D30
  c->r[3]=c->r[30]|c->r[30]; // 801B9D34
  c->lr=0x801B9D3Cu; f_801251F0(c); // 801B9D38
  c->r[3]=c->r[31]|c->r[31]; // 801B9D3C
  c->lr=0x801B9D44u; f_801251F0(c); // 801B9D40
L_801B9D44:;
  c->r[0]=R32(c->r[15]+0x00000018u); // 801B9D44
  cmps(c,0,(int32_t)c->r[0],0); // 801B9D48
  if (!crb(c,2)) { IRQCHK(c); goto L_801B9B60; } // 801B9D4C
L_801B9D50:;
  c->r[0]=R32(c->r[15]+0x0000000Cu); // 801B9D50
  cmps(c,0,(int32_t)c->r[0],0); // 801B9D54
  if (!crb(c,2)) { goto L_801B9D6C; } // 801B9D58
  c->r[3]=R32(c->r[1]+0x00000024u); // 801B9D5C
  c->lr=0x801B9D64u; f_801251F0(c); // 801B9D60
  c->r[17]=0u+0x00000000u; // 801B9D64
  goto L_801B9E48; // 801B9D68
L_801B9D6C:;
  if (!crb(c,2)) { goto L_801B9D8C; } // 801B9D6C
  c->r[3]=0u+0x803A0000u; // 801B9D70
  c->r[5]=0u+0x803A0000u; // 801B9D74
  c->r[3]=c->r[3]+0xFFFFC10Cu; // 801B9D78
  c->r[4]=0u+0x000001F1u; // 801B9D7C
  c->r[5]=c->r[5]+0xFFFFC0E8u; // 801B9D80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9D84
  c->lr=0x801B9D8Cu; f_80212260(c); // 801B9D88
L_801B9D8C:;
  c->r[14]=R32(c->r[15]+0x00000010u); // 801B9D8C
  cmps(c,0,(int32_t)c->r[14],0); // 801B9D90
  if (!crb(c,2)) { goto L_801B9DB4; } // 801B9D94
  c->r[3]=0u+0x803A0000u; // 801B9D98
  c->r[5]=0u+0x803A0000u; // 801B9D9C
  c->r[3]=c->r[3]+0xFFFFC0ACu; // 801B9DA0
  c->r[4]=0u+0x0000023Du; // 801B9DA4
  c->r[5]=c->r[5]+0xFFFFC088u; // 801B9DA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9DAC
  c->lr=0x801B9DB4u; f_80212260(c); // 801B9DB0
L_801B9DB4:;
  c->r[16]=addc(c,c->r[14],0xFFFFFFC0u,0); cr0(c,c->r[16]); // 801B9DB4
  if (!crb(c,2)) { goto L_801B9DD8; } // 801B9DB8
  c->r[3]=0u+0x803A0000u; // 801B9DBC
  c->r[5]=0u+0x803A0000u; // 801B9DC0
  c->r[3]=c->r[3]+0xFFFFC0DCu; // 801B9DC4
  c->r[4]=0u+0x00000193u; // 801B9DC8
  c->r[5]=c->r[5]+0xFFFFC0B8u; // 801B9DCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9DD0
  c->lr=0x801B9DD8u; f_80212260(c); // 801B9DD4
L_801B9DD8:;
  c->r[0]=R32(c->r[15]+0x00000010u); // 801B9DD8
  c->r[3]=c->r[15]+0x0000000Cu; // 801B9DDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B9DE0
  c->r[4]=c->r[1]+0x0000001Cu; // 801B9DE4
  c->lr=0x801B9DECu; f_801E4260(c); // 801B9DE8
  cmps(c,0,(int32_t)c->r[16],0); // 801B9DEC
  c->r[17]=c->r[16]|c->r[16]; // 801B9DF0
  if (crb(c,2)) { goto L_801B9E04; } // 801B9DF4
  c->r[3]=c->r[16]|c->r[16]; // 801B9DF8
  c->lr=0x801B9E00u; f_801B6800(c); // 801B9DFC
  c->r[17]=c->r[3]|c->r[3]; // 801B9E00
L_801B9E04:;
  cmps(c,0,(int32_t)c->r[16],0); // 801B9E04
  c->r[14]=c->r[15]+0x00000004u; // 801B9E08
  if (!crb(c,2)) { goto L_801B9E2C; } // 801B9E0C
  c->r[3]=0u+0x803A0000u; // 801B9E10
  c->r[5]=0u+0x803A0000u; // 801B9E14
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801B9E18
  c->r[4]=0u+0x00000233u; // 801B9E1C
  c->r[5]=c->r[5]+0xFFFFC118u; // 801B9E20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9E24
  c->lr=0x801B9E2Cu; f_80212260(c); // 801B9E28
L_801B9E2C:;
  W32(c->r[1]+0x00000020u,c->r[14]); // 801B9E2C
  c->r[3]=c->r[15]|c->r[15]; // 801B9E30
  c->r[4]=c->r[1]+0x00000020u; // 801B9E34
  c->r[5]=c->r[16]+0x00000040u; // 801B9E38
  c->lr=0x801B9E40u; f_801E44B0(c); // 801B9E3C
  c->r[3]=R32(c->r[1]+0x00000024u); // 801B9E40
  c->lr=0x801B9E48u; f_801251F0(c); // 801B9E44
L_801B9E48:;
  cmps(c,0,(int32_t)c->r[17],0); // 801B9E48
  if (!crb(c,2)) { goto L_801B9E60; } // 801B9E4C
  c->r[3]=R32(c->r[1]+0x00000028u); // 801B9E50
  c->lr=0x801B9E58u; f_801251F0(c); // 801B9E54
  c->r[3]=0u+0x00000000u; // 801B9E58
  goto L_801B9FA0; // 801B9E5C
L_801B9E60:;
  c->r[4]=0u+0x801B0000u; // 801B9E60
  c->r[3]=R32(c->r[1]+0x00000008u); // 801B9E64
  c->r[5]=c->r[17]|c->r[17]; // 801B9E68
  c->r[4]=c->r[4]+0x000072A0u; // 801B9E6C
  c->lr=0x801B9E74u; f_8014F5F0(c); // 801B9E70
  cmps(c,0,(int32_t)c->r[3],0); // 801B9E74
  c->r[4]=c->r[3]|c->r[3]; // 801B9E78
  if (!crb(c,2)) { goto L_801B9F7C; } // 801B9E7C
  cmps(c,0,(int32_t)c->r[17],0); // 801B9E80
  if (!crb(c,2)) { goto L_801B9E9C; } // 801B9E84
  c->r[3]=c->r[19]+0x00000000u; // 801B9E88
  c->r[5]=c->r[19]+0x00000084u; // 801B9E8C
  c->r[4]=0u+0x0000009Au; // 801B9E90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9E94
  c->lr=0x801B9E9Cu; f_80212260(c); // 801B9E98
L_801B9E9C:;
  c->r[3]=c->r[17]|c->r[17]; // 801B9E9C
  c->r[4]=0u+0xFFFFFFFFu; // 801B9EA0
  c->lr=0x801B9EA8u; f_801B6850(c); // 801B9EA4
  c->lr=0x801B9EACu; f_801251B0(c); // 801B9EA8
  c->r[0]=R8(c->r[17]+0x0000001Du); // 801B9EAC
  c->r[14]=c->r[3]|c->r[3]; // 801B9EB0
  cmps(c,0,(int32_t)c->r[0],0); // 801B9EB4
  if (crb(c,2)) { goto L_801B9EF4; } // 801B9EB8
  cmps(c,0,(int32_t)c->r[17],0); // 801B9EBC
  if (!crb(c,2)) { goto L_801B9EE0; } // 801B9EC0
  c->r[3]=0u+0x803A0000u; // 801B9EC4
  c->r[5]=0u+0x803A0000u; // 801B9EC8
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801B9ECC
  c->r[4]=0u+0x00000233u; // 801B9ED0
  c->r[5]=c->r[5]+0xFFFFC118u; // 801B9ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9ED8
  c->lr=0x801B9EE0u; f_80212260(c); // 801B9EDC
L_801B9EE0:;
  c->r[18]=c->r[17]+0x00000040u; // 801B9EE0
  c->r[3]=c->r[15]+0x00000018u; // 801B9EE4
  c->r[4]=c->r[18]|c->r[18]; // 801B9EE8
  c->lr=0x801B9EF0u; f_801E45B0(c); // 801B9EEC
  goto L_801B9F28; // 801B9EF0
L_801B9EF4:;
  cmps(c,0,(int32_t)c->r[17],0); // 801B9EF4
  if (!crb(c,2)) { goto L_801B9F18; } // 801B9EF8
  c->r[3]=0u+0x803A0000u; // 801B9EFC
  c->r[5]=0u+0x803A0000u; // 801B9F00
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801B9F04
  c->r[4]=0u+0x00000233u; // 801B9F08
  c->r[5]=c->r[5]+0xFFFFC118u; // 801B9F0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9F10
  c->lr=0x801B9F18u; f_80212260(c); // 801B9F14
L_801B9F18:;
  c->r[18]=c->r[17]+0x00000040u; // 801B9F18
  c->r[3]=c->r[15]|c->r[15]; // 801B9F1C
  c->r[4]=c->r[18]|c->r[18]; // 801B9F20
  c->lr=0x801B9F28u; f_801E45B0(c); // 801B9F24
L_801B9F28:;
  cmps(c,0,(int32_t)c->r[17],0); // 801B9F28
  c->r[16]=c->r[15]+0x00000010u; // 801B9F2C
  if (!crb(c,2)) { goto L_801B9F50; } // 801B9F30
  c->r[3]=0u+0x803A0000u; // 801B9F34
  c->r[5]=0u+0x803A0000u; // 801B9F38
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801B9F3C
  c->r[4]=0u+0x00000233u; // 801B9F40
  c->r[5]=c->r[5]+0xFFFFC118u; // 801B9F44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801B9F48
  c->lr=0x801B9F50u; f_80212260(c); // 801B9F4C
L_801B9F50:;
  W32(c->r[1]+0x00000014u,c->r[16]); // 801B9F50
  c->r[5]=c->r[18]|c->r[18]; // 801B9F54
  c->r[3]=c->r[15]+0x0000000Cu; // 801B9F58
  c->r[4]=c->r[1]+0x00000014u; // 801B9F5C
  c->lr=0x801B9F64u; f_801E44B0(c); // 801B9F60
  c->r[3]=c->r[14]|c->r[14]; // 801B9F64
  c->lr=0x801B9F6Cu; f_801251F0(c); // 801B9F68
  c->r[3]=R32(c->r[1]+0x00000028u); // 801B9F6C
  c->lr=0x801B9F74u; f_801251F0(c); // 801B9F70
  c->r[3]=0u+0x00000000u; // 801B9F74
  goto L_801B9FA0; // 801B9F78
L_801B9F7C:;
  c->r[3]=c->r[17]|c->r[17]; // 801B9F7C
  c->lr=0x801B9F84u; f_801B9150(c); // 801B9F80
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801B9F84
  W32(c->r[17]+0x00000038u,c->r[0]); // 801B9F88
  c->r[0]=R32(c->r[1]+0x00000010u); // 801B9F8C
  c->r[3]=R32(c->r[1]+0x00000028u); // 801B9F90
  W32(c->r[17]+0x0000003Cu,c->r[0]); // 801B9F94
  c->lr=0x801B9F9Cu; f_801251F0(c); // 801B9F98
  c->r[3]=c->r[17]|c->r[17]; // 801B9F9C
L_801B9FA0:;
  c->r[11]=c->r[1]+0x00000080u; // 801B9FA0
  c->lr=0x801B9FA8u; f_802E69E4(c); // 801B9FA4
  c->r[0]=R32(c->r[1]+0x00000084u); // 801B9FA8
  c->lr=c->r[0]; // 801B9FAC
  c->r[1]=c->r[1]+0x00000080u; // 801B9FB0
  return; // 801B9FB4
}

// fn_801B9FC0
void f_801B9FC0(Ctx* __restrict c) {
  trace_call(0x801B9FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9FC0
  c->r[0]=c->lr; // 801B9FC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9FC8
  c->r[11]=c->r[1]+0x00000030u; // 801B9FCC
  c->lr=0x801B9FD4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9FD0
  c->r[29]=0u+0x803A0000u; // 801B9FD4
  c->r[26]=c->r[3]|c->r[3]; // 801B9FD8
  c->r[27]=c->r[4]|c->r[4]; // 801B9FDC
  c->r[29]=c->r[29]+0xFFFFBFE8u; // 801B9FE0
  c->lr=0x801B9FE8u; f_801251B0(c); // 801B9FE4
  cmps(c,0,(int32_t)c->r[27],0); // 801B9FE8
  c->r[31]=c->r[3]|c->r[3]; // 801B9FEC
  if (!crb(c,2)) { goto L_801BA008; } // 801B9FF0
  c->r[3]=c->r[29]+0x00000000u; // 801B9FF4
  c->r[5]=c->r[29]+0x0000005Cu; // 801B9FF8
  c->r[4]=0u+0x000000D4u; // 801B9FFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA000
  c->lr=0x801BA008u; f_80212260(c); // 801BA004
L_801BA008:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801BA008
  cmps(c,0,(int32_t)c->r[0],0); // 801BA00C
  if (crb(c,2)) { goto L_801BA01C; } // 801BA010
  c->r[3]=R32(c->r[27]+0x00000000u); // 801BA014
  c->lr=0x801BA01Cu; f_8014F570(c); // 801BA018
L_801BA01C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BA01C
  if (!crb(c,2)) { goto L_801BA038; } // 801BA020
  c->r[3]=c->r[29]+0x00000000u; // 801BA024
  c->r[5]=c->r[29]+0x00000084u; // 801BA028
  c->r[4]=0u+0x0000009Au; // 801BA02C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA030
  c->lr=0x801BA038u; f_80212260(c); // 801BA034
L_801BA038:;
  c->r[3]=c->r[27]|c->r[27]; // 801BA038
  c->r[4]=0u+0xFFFFFFFFu; // 801BA03C
  c->lr=0x801BA044u; f_801B6850(c); // 801BA040
  c->lr=0x801BA048u; f_801251B0(c); // 801BA044
  c->r[0]=R8(c->r[27]+0x0000001Du); // 801BA048
  c->r[30]=c->r[3]|c->r[3]; // 801BA04C
  cmps(c,0,(int32_t)c->r[0],0); // 801BA050
  if (crb(c,2)) { goto L_801BA090; } // 801BA054
  cmps(c,0,(int32_t)c->r[27],0); // 801BA058
  if (!crb(c,2)) { goto L_801BA07C; } // 801BA05C
  c->r[3]=0u+0x803A0000u; // 801BA060
  c->r[5]=0u+0x803A0000u; // 801BA064
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801BA068
  c->r[4]=0u+0x00000233u; // 801BA06C
  c->r[5]=c->r[5]+0xFFFFC118u; // 801BA070
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA074
  c->lr=0x801BA07Cu; f_80212260(c); // 801BA078
L_801BA07C:;
  c->r[28]=c->r[27]+0x00000040u; // 801BA07C
  c->r[3]=c->r[26]+0x00000018u; // 801BA080
  c->r[4]=c->r[28]|c->r[28]; // 801BA084
  c->lr=0x801BA08Cu; f_801E45B0(c); // 801BA088
  goto L_801BA0C4; // 801BA08C
L_801BA090:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BA090
  if (!crb(c,2)) { goto L_801BA0B4; } // 801BA094
  c->r[3]=0u+0x803A0000u; // 801BA098
  c->r[5]=0u+0x803A0000u; // 801BA09C
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801BA0A0
  c->r[4]=0u+0x00000233u; // 801BA0A4
  c->r[5]=c->r[5]+0xFFFFC118u; // 801BA0A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA0AC
  c->lr=0x801BA0B4u; f_80212260(c); // 801BA0B0
L_801BA0B4:;
  c->r[28]=c->r[27]+0x00000040u; // 801BA0B4
  c->r[3]=c->r[26]|c->r[26]; // 801BA0B8
  c->r[4]=c->r[28]|c->r[28]; // 801BA0BC
  c->lr=0x801BA0C4u; f_801E45B0(c); // 801BA0C0
L_801BA0C4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BA0C4
  c->r[29]=c->r[26]+0x00000010u; // 801BA0C8
  if (!crb(c,2)) { goto L_801BA0EC; } // 801BA0CC
  c->r[3]=0u+0x803A0000u; // 801BA0D0
  c->r[5]=0u+0x803A0000u; // 801BA0D4
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801BA0D8
  c->r[4]=0u+0x00000233u; // 801BA0DC
  c->r[5]=c->r[5]+0xFFFFC118u; // 801BA0E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA0E4
  c->lr=0x801BA0ECu; f_80212260(c); // 801BA0E8
L_801BA0EC:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801BA0EC
  c->r[5]=c->r[28]|c->r[28]; // 801BA0F0
  c->r[3]=c->r[26]+0x0000000Cu; // 801BA0F4
  c->r[4]=c->r[1]+0x00000008u; // 801BA0F8
  c->lr=0x801BA100u; f_801E44B0(c); // 801BA0FC
  c->r[3]=c->r[30]|c->r[30]; // 801BA100
  c->lr=0x801BA108u; f_801251F0(c); // 801BA104
  c->r[3]=c->r[31]|c->r[31]; // 801BA108
  c->lr=0x801BA110u; f_801251F0(c); // 801BA10C
  c->r[11]=c->r[1]+0x00000030u; // 801BA110
  c->lr=0x801BA118u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA114
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BA118
  c->lr=c->r[0]; // 801BA11C
  c->r[1]=c->r[1]+0x00000030u; // 801BA120
  return; // 801BA124
}

// fn_801BA130
void f_801BA130(Ctx* __restrict c) {
  trace_call(0x801BA130u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA130
  c->r[0]=c->lr; // 801BA134
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BA138
  c->r[11]=c->r[1]+0x00000030u; // 801BA13C
  c->lr=0x801BA144u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA140
  c->r[27]=c->r[3]|c->r[3]; // 801BA144
  c->r[29]=c->r[4]|c->r[4]; // 801BA148
  c->lr=0x801BA150u; f_801251B0(c); // 801BA14C
  cmps(c,0,(int32_t)c->r[29],0); // 801BA150
  c->r[31]=c->r[3]|c->r[3]; // 801BA154
  if (!crb(c,2)) { goto L_801BA178; } // 801BA158
  c->r[3]=0u+0x803A0000u; // 801BA15C
  c->r[5]=0u+0x803A0000u; // 801BA160
  c->r[3]=c->r[3]+0xFFFFBFE8u; // 801BA164
  c->r[4]=0u+0x000000E2u; // 801BA168
  c->r[5]=c->r[5]+0xFFFFC06Cu; // 801BA16C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA170
  c->lr=0x801BA178u; f_80212260(c); // 801BA174
L_801BA178:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BA178
  c->r[0]=0u+0x00000001u; // 801BA17C
  W8(c->r[29]+0x0000001Du,c->r[0]); // 801BA180
  if (!crb(c,2)) { goto L_801BA1A4; } // 801BA184
  c->r[3]=0u+0x803A0000u; // 801BA188
  c->r[5]=0u+0x803A0000u; // 801BA18C
  c->r[3]=c->r[3]+0xFFFFBFE8u; // 801BA190
  c->r[4]=0u+0x000000A9u; // 801BA194
  c->r[5]=c->r[5]+0xFFFFC06Cu; // 801BA198
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA19C
  c->lr=0x801BA1A4u; f_80212260(c); // 801BA1A0
L_801BA1A4:;
  c->lr=0x801BA1A8u; f_801251B0(c); // 801BA1A4
  cmps(c,0,(int32_t)c->r[29],0); // 801BA1A8
  c->r[30]=c->r[3]|c->r[3]; // 801BA1AC
  if (!crb(c,2)) { goto L_801BA1D0; } // 801BA1B0
  c->r[3]=0u+0x803A0000u; // 801BA1B4
  c->r[5]=0u+0x803A0000u; // 801BA1B8
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801BA1BC
  c->r[4]=0u+0x00000233u; // 801BA1C0
  c->r[5]=c->r[5]+0xFFFFC118u; // 801BA1C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA1C8
  c->lr=0x801BA1D0u; f_80212260(c); // 801BA1CC
L_801BA1D0:;
  c->r[28]=c->r[29]+0x00000040u; // 801BA1D0
  c->r[3]=c->r[27]|c->r[27]; // 801BA1D4
  c->r[4]=c->r[28]|c->r[28]; // 801BA1D8
  c->lr=0x801BA1E0u; f_801E45B0(c); // 801BA1DC
  cmps(c,0,(int32_t)c->r[29],0); // 801BA1E0
  c->r[29]=c->r[27]+0x0000001Cu; // 801BA1E4
  if (!crb(c,2)) { goto L_801BA208; } // 801BA1E8
  c->r[3]=0u+0x803A0000u; // 801BA1EC
  c->r[5]=0u+0x803A0000u; // 801BA1F0
  c->r[3]=c->r[3]+0xFFFFC13Cu; // 801BA1F4
  c->r[4]=0u+0x00000233u; // 801BA1F8
  c->r[5]=c->r[5]+0xFFFFC118u; // 801BA1FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA200
  c->lr=0x801BA208u; f_80212260(c); // 801BA204
L_801BA208:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801BA208
  c->r[5]=c->r[28]|c->r[28]; // 801BA20C
  c->r[3]=c->r[27]+0x00000018u; // 801BA210
  c->r[4]=c->r[1]+0x00000008u; // 801BA214
  c->lr=0x801BA21Cu; f_801E44B0(c); // 801BA218
  c->r[3]=c->r[30]|c->r[30]; // 801BA21C
  c->lr=0x801BA224u; f_801251F0(c); // 801BA220
  c->r[3]=c->r[31]|c->r[31]; // 801BA224
  c->lr=0x801BA22Cu; f_801251F0(c); // 801BA228
  c->r[11]=c->r[1]+0x00000030u; // 801BA22C
  c->lr=0x801BA234u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA230
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BA234
  c->lr=c->r[0]; // 801BA238
  c->r[1]=c->r[1]+0x00000030u; // 801BA23C
  return; // 801BA240
}

// fn_801BA250
void f_801BA250(Ctx* __restrict c) {
  trace_call(0x801BA250u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA250
  c->r[0]=c->lr; // 801BA254
  W32(c->r[1]+0x00000064u,c->r[0]); // 801BA258
  c->r[11]=c->r[1]+0x00000060u; // 801BA25C
  c->lr=0x801BA264u; f_802E6998(c); // 801BA260
  c->r[0]=R32(c->r[3]+0x00000018u); // 801BA264
  c->r[19]=0u+0x803A0000u; // 801BA268
  c->r[15]=c->r[3]|c->r[3]; // 801BA26C
  cmps(c,0,(int32_t)c->r[0],0); // 801BA270
  c->r[19]=c->r[19]+0xFFFFBFE8u; // 801BA274
  if (crb(c,2)) { goto L_801BA4A4; } // 801BA278
  c->r[18]=0u+0x805B0000u; // 801BA27C
  c->r[27]=0u+0x803A0000u; // 801BA280
  c->r[18]=c->r[18]+0xFFFFC61Cu; // 801BA284
  c->r[28]=0u+0x803A0000u; // 801BA288
  c->r[20]=0u+0x803A0000u; // 801BA28C
  c->r[21]=0u+0x803A0000u; // 801BA290
  c->r[29]=c->r[18]+0x00000010u; // 801BA294
  c->r[22]=0u+0x803A0000u; // 801BA298
  c->r[23]=0u+0x803A0000u; // 801BA29C
  c->r[24]=0u+0x803A0000u; // 801BA2A0
  c->r[25]=0u+0x803A0000u; // 801BA2A4
  c->r[26]=0u+0x00000000u; // 801BA2A8
  c->r[14]=0u+0x801C0000u; // 801BA2AC
  goto L_801BA498; // 801BA2B0
L_801BA2B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BA2B4
  if (!crb(c,2)) { goto L_801BA2D0; } // 801BA2B8
  c->r[3]=c->r[20]+0xFFFFC10Cu; // 801BA2BC
  c->r[5]=c->r[21]+0xFFFFC0E8u; // 801BA2C0
  c->r[4]=0u+0x000001F1u; // 801BA2C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA2C8
  c->lr=0x801BA2D0u; f_80212260(c); // 801BA2CC
L_801BA2D0:;
  c->r[16]=R32(c->r[15]+0x0000001Cu); // 801BA2D0
  cmps(c,0,(int32_t)c->r[16],0); // 801BA2D4
  if (!crb(c,2)) { goto L_801BA2F0; } // 801BA2D8
  c->r[3]=c->r[22]+0xFFFFC0ACu; // 801BA2DC
  c->r[5]=c->r[23]+0xFFFFC088u; // 801BA2E0
  c->r[4]=0u+0x0000023Du; // 801BA2E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA2E8
  c->lr=0x801BA2F0u; f_80212260(c); // 801BA2EC
L_801BA2F0:;
  c->r[17]=addc(c,c->r[16],0xFFFFFFC0u,0); cr0(c,c->r[17]); // 801BA2F0
  if (!crb(c,2)) { goto L_801BA30C; } // 801BA2F4
  c->r[3]=c->r[24]+0xFFFFC0DCu; // 801BA2F8
  c->r[5]=c->r[25]+0xFFFFC0B8u; // 801BA2FC
  c->r[4]=0u+0x00000193u; // 801BA300
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA304
  c->lr=0x801BA30Cu; f_80212260(c); // 801BA308
L_801BA30C:;
  c->r[12]=R32(c->r[17]+0x00000038u); // 801BA30C
  cmps(c,0,(int32_t)c->r[12],0); // 801BA310
  if (crb(c,2)) { goto L_801BA32C; } // 801BA314
  c->r[3]=c->r[17]|c->r[17]; // 801BA318
  c->r[5]=R32(c->r[17]+0x0000003Cu); // 801BA31C
  c->r[4]=0u+0x00000001u; // 801BA320
  c->ctr=c->r[12]; // 801BA324
  if (true) { c->lr=0x801BA32Cu; dispatch(c,c->ctr); } // 801BA328
L_801BA32C:;
  c->r[0]=R8(c->r[13]+0xFFFFC410u); // 801BA32C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BA330
  if (!crb(c,2)) { goto L_801BA388; } // 801BA334
  c->r[0]=c->r[18]+0x00000004u; // 801BA338
  c->r[6]=c->r[18]+0x00000010u; // 801BA33C
  c->r[7]=c->r[18]+0x0000001Cu; // 801BA340
  c->r[5]=0u+0x805B0000u; // 801BA344
  W32(c->r[18]+0x00000000u,c->r[26]); // 801BA348
  c->r[3]=c->r[18]|c->r[18]; // 801BA34C
  c->r[4]=c->r[14]+0xFFFF9940u; // 801BA350
  c->r[5]=c->r[5]+0xFFFFC610u; // 801BA354
  W32(c->r[18]+0x00000004u,c->r[0]); // 801BA358
  W32(c->r[18]+0x00000008u,c->r[0]); // 801BA35C
  W32(c->r[18]+0x0000000Cu,c->r[26]); // 801BA360
  W32(c->r[18]+0x00000010u,c->r[6]); // 801BA364
  W32(c->r[18]+0x00000014u,c->r[6]); // 801BA368
  W32(c->r[18]+0x00000018u,c->r[26]); // 801BA36C
  W32(c->r[18]+0x0000001Cu,c->r[7]); // 801BA370
  W32(c->r[18]+0x00000020u,c->r[7]); // 801BA374
  W8(c->r[18]+0x00000024u,c->r[26]); // 801BA378
  c->lr=0x801BA380u; f_802E6064(c); // 801BA37C
  c->r[0]=0u+0x00000001u; // 801BA380
  W8(c->r[13]+0xFFFFC410u,c->r[0]); // 801BA384
L_801BA388:;
  c->lr=0x801BA38Cu; f_801251B0(c); // 801BA388
  cmps(c,0,(int32_t)c->r[17],0); // 801BA38C
  c->r[31]=c->r[3]|c->r[3]; // 801BA390
  if (!crb(c,2)) { goto L_801BA3AC; } // 801BA394
  c->r[3]=c->r[19]+0x00000000u; // 801BA398
  c->r[5]=c->r[19]+0x0000005Cu; // 801BA39C
  c->r[4]=0u+0x000000D4u; // 801BA3A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA3A4
  c->lr=0x801BA3ACu; f_80212260(c); // 801BA3A8
L_801BA3AC:;
  c->r[0]=R32(c->r[17]+0x00000000u); // 801BA3AC
  cmps(c,0,(int32_t)c->r[0],0); // 801BA3B0
  if (crb(c,2)) { goto L_801BA3C0; } // 801BA3B4
  c->r[3]=R32(c->r[17]+0x00000000u); // 801BA3B8
  c->lr=0x801BA3C0u; f_8014F570(c); // 801BA3BC
L_801BA3C0:;
  cmps(c,0,(int32_t)c->r[17],0); // 801BA3C0
  if (!crb(c,2)) { goto L_801BA3DC; } // 801BA3C4
  c->r[3]=c->r[19]+0x00000000u; // 801BA3C8
  c->r[5]=c->r[19]+0x00000084u; // 801BA3CC
  c->r[4]=0u+0x0000009Au; // 801BA3D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA3D4
  c->lr=0x801BA3DCu; f_80212260(c); // 801BA3D8
L_801BA3DC:;
  c->r[3]=c->r[17]|c->r[17]; // 801BA3DC
  c->r[4]=0u+0xFFFFFFFFu; // 801BA3E0
  c->lr=0x801BA3E8u; f_801B6850(c); // 801BA3E4
  c->lr=0x801BA3ECu; f_801251B0(c); // 801BA3E8
  c->r[0]=R8(c->r[17]+0x0000001Du); // 801BA3EC
  c->r[30]=c->r[3]|c->r[3]; // 801BA3F0
  cmps(c,0,(int32_t)c->r[0],0); // 801BA3F4
  if (crb(c,2)) { goto L_801BA42C; } // 801BA3F8
  cmps(c,0,(int32_t)c->r[17],0); // 801BA3FC
  if (!crb(c,2)) { goto L_801BA418; } // 801BA400
  c->r[3]=c->r[27]+0xFFFFC13Cu; // 801BA404
  c->r[5]=c->r[28]+0xFFFFC118u; // 801BA408
  c->r[4]=0u+0x00000233u; // 801BA40C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA410
  c->lr=0x801BA418u; f_80212260(c); // 801BA414
L_801BA418:;
  c->r[16]=c->r[17]+0x00000040u; // 801BA418
  c->r[3]=c->r[18]+0x00000018u; // 801BA41C
  c->r[4]=c->r[16]|c->r[16]; // 801BA420
  c->lr=0x801BA428u; f_801E45B0(c); // 801BA424
  goto L_801BA458; // 801BA428
L_801BA42C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801BA42C
  if (!crb(c,2)) { goto L_801BA448; } // 801BA430
  c->r[3]=c->r[27]+0xFFFFC13Cu; // 801BA434
  c->r[5]=c->r[28]+0xFFFFC118u; // 801BA438
  c->r[4]=0u+0x00000233u; // 801BA43C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA440
  c->lr=0x801BA448u; f_80212260(c); // 801BA444
L_801BA448:;
  c->r[16]=c->r[17]+0x00000040u; // 801BA448
  c->r[3]=c->r[18]|c->r[18]; // 801BA44C
  c->r[4]=c->r[16]|c->r[16]; // 801BA450
  c->lr=0x801BA458u; f_801E45B0(c); // 801BA454
L_801BA458:;
  cmps(c,0,(int32_t)c->r[17],0); // 801BA458
  if (!crb(c,2)) { goto L_801BA474; } // 801BA45C
  c->r[3]=c->r[27]+0xFFFFC13Cu; // 801BA460
  c->r[5]=c->r[28]+0xFFFFC118u; // 801BA464
  c->r[4]=0u+0x00000233u; // 801BA468
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA46C
  c->lr=0x801BA474u; f_80212260(c); // 801BA470
L_801BA474:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 801BA474
  c->r[5]=c->r[16]|c->r[16]; // 801BA478
  c->r[3]=c->r[18]+0x0000000Cu; // 801BA47C
  c->r[4]=c->r[1]+0x00000008u; // 801BA480
  c->lr=0x801BA488u; f_801E44B0(c); // 801BA484
  c->r[3]=c->r[30]|c->r[30]; // 801BA488
  c->lr=0x801BA490u; f_801251F0(c); // 801BA48C
  c->r[3]=c->r[31]|c->r[31]; // 801BA490
  c->lr=0x801BA498u; f_801251F0(c); // 801BA494
L_801BA498:;
  c->r[0]=R32(c->r[15]+0x00000018u); // 801BA498
  cmps(c,0,(int32_t)c->r[0],0); // 801BA49C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BA2B4; } // 801BA4A0
L_801BA4A4:;
  c->r[11]=c->r[1]+0x00000060u; // 801BA4A4
  c->lr=0x801BA4ACu; f_802E69E4(c); // 801BA4A8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801BA4AC
  c->lr=c->r[0]; // 801BA4B0
  c->r[1]=c->r[1]+0x00000060u; // 801BA4B4
  return; // 801BA4B8
}

// CreateHeap__Q44nw4r3snd6detail8AxfxImplFPvUl
void f_801BA4C0(Ctx* __restrict c) {
  trace_call(0x801BA4C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA4C0
  c->r[0]=c->lr; // 801BA4C4
  cmps(c,0,(int32_t)c->r[4],0); // 801BA4C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA4CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA4D0
  c->r[31]=c->r[3]|c->r[3]; // 801BA4D4
  if (crb(c,2)) { goto L_801BA4E4; } // 801BA4D8
  cmps(c,0,(int32_t)c->r[5],0); // 801BA4DC
  if (!crb(c,2)) { goto L_801BA4F4; } // 801BA4E0
L_801BA4E4:;
  c->r[0]=0u+0x00000000u; // 801BA4E4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BA4E8
  c->r[3]=0u+0x00000000u; // 801BA4EC
  goto L_801BA514; // 801BA4F0
L_801BA4F4:;
  c->r[3]=c->r[4]|c->r[4]; // 801BA4F4
  c->r[4]=c->r[5]|c->r[5]; // 801BA4F8
  c->r[5]=0u+0x00000000u; // 801BA4FC
  c->lr=0x801BA504u; f_801A8910(c); // 801BA500
  c->r[0]=0u-c->r[3]; // 801BA504
  W32(c->r[31]+0x00000000u,c->r[3]); // 801BA508
  c->r[0]=c->r[0]|c->r[3]; // 801BA50C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801BA510
L_801BA514:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA518
  c->lr=c->r[0]; // 801BA51C
  c->r[1]=c->r[1]+0x00000010u; // 801BA520
  return; // 801BA524
}

// fn_801BA530
void f_801BA530(Ctx* __restrict c) {
  trace_call(0x801BA530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA530
  c->r[0]=c->lr; // 801BA534
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA53C
  c->r[31]=c->r[3]|c->r[3]; // 801BA540
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BA544
  cmps(c,0,(int32_t)c->r[0],0); // 801BA548
  if (crb(c,2)) { goto L_801BA560; } // 801BA54C
  c->r[3]=c->r[0]|c->r[0]; // 801BA550
  c->lr=0x801BA558u; f_801A89A0(c); // 801BA554
  c->r[0]=0u+0x00000000u; // 801BA558
  W32(c->r[31]+0x00000000u,c->r[0]); // 801BA55C
L_801BA560:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA560
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA564
  c->lr=c->r[0]; // 801BA568
  c->r[1]=c->r[1]+0x00000010u; // 801BA56C
  return; // 801BA570
}

// HookAlloc__Q44nw4r3snd6detail8AxfxImplFPPFUl_PvPPFPv_v
void f_801BA580(Ctx* __restrict c) {
  trace_call(0x801BA580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA580
  c->r[0]=c->lr; // 801BA584
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA58C
  c->r[31]=c->r[3]|c->r[3]; // 801BA590
  c->r[3]=c->r[4]|c->r[4]; // 801BA594
  c->r[4]=c->r[5]|c->r[5]; // 801BA598
  c->lr=0x801BA5A0u; f_80158D70(c); // 801BA59C
  c->r[3]=0u+0x801C0000u; // 801BA5A0
  c->r[4]=0u+0x801C0000u; // 801BA5A4
  c->r[3]=c->r[3]+0xFFFFA620u; // 801BA5A8
  c->r[4]=c->r[4]+0xFFFFA700u; // 801BA5AC
  c->lr=0x801BA5B4u; f_80158D60(c); // 801BA5B0
  c->r[0]=0u+0x00000000u; // 801BA5B4
  W32(c->r[13]+0xFFFFC418u,c->r[31]); // 801BA5B8
  W32(c->r[13]+0xFFFFC41Cu,c->r[0]); // 801BA5BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA5C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA5C4
  c->lr=c->r[0]; // 801BA5C8
  c->r[1]=c->r[1]+0x00000010u; // 801BA5CC
  return; // 801BA5D0
}

// fn_801BA5E0
void f_801BA5E0(Ctx* __restrict c) {
  trace_call(0x801BA5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA5E0
  c->r[0]=c->lr; // 801BA5E4
  c->r[3]=c->r[4]|c->r[4]; // 801BA5E8
  c->r[4]=c->r[5]|c->r[5]; // 801BA5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA5F0
  c->lr=0x801BA5F8u; f_80158D60(c); // 801BA5F4
  c->r[0]=0u+0x00000000u; // 801BA5F8
  W32(c->r[13]+0xFFFFC418u,c->r[0]); // 801BA5FC
  c->r[3]=R32(c->r[13]+0xFFFFC41Cu); // 801BA600
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA604
  c->lr=c->r[0]; // 801BA608
  c->r[1]=c->r[1]+0x00000010u; // 801BA60C
  return; // 801BA610
}

// fn_801BA620
void f_801BA620(Ctx* __restrict c) {
  trace_call(0x801BA620u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA620
  c->r[0]=c->lr; // 801BA624
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA628
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA62C
  c->r[31]=0u+0x803A0000u; // 801BA630
  c->r[31]=c->r[31]+0xFFFFC148u; // 801BA634
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA638
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA63C
  c->r[29]=c->r[3]|c->r[3]; // 801BA640
  c->r[0]=R32(c->r[13]+0xFFFFC418u); // 801BA644
  cmps(c,0,(int32_t)c->r[0],0); // 801BA648
  if (!crb(c,2)) { goto L_801BA664; } // 801BA64C
  c->r[3]=c->r[31]+0x00000000u; // 801BA650
  c->r[5]=c->r[31]+0x00000014u; // 801BA654
  c->r[4]=0u+0x00000088u; // 801BA658
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA65C
  c->lr=0x801BA664u; f_80212260(c); // 801BA660
L_801BA664:;
  c->r[3]=R32(c->r[13]+0xFFFFC418u); // 801BA664
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BA668
  cmps(c,0,(int32_t)c->r[0],0); // 801BA66C
  if (!crb(c,2)) { goto L_801BA688; } // 801BA670
  c->r[3]=c->r[31]+0x00000000u; // 801BA674
  c->r[5]=c->r[31]+0x00000040u; // 801BA678
  c->r[4]=0u+0x00000089u; // 801BA67C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA680
  c->lr=0x801BA688u; f_80212260(c); // 801BA684
L_801BA688:;
  c->r[3]=R32(c->r[13]+0xFFFFC418u); // 801BA688
  c->r[4]=c->r[29]|c->r[29]; // 801BA68C
  c->r[5]=0u+0x00000004u; // 801BA690
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BA694
  c->lr=0x801BA69Cu; f_801A89D0(c); // 801BA698
  cmps(c,0,(int32_t)c->r[3],0); // 801BA69C
  c->r[30]=c->r[3]|c->r[3]; // 801BA6A0
  if (!crb(c,2)) { goto L_801BA6BC; } // 801BA6A4
  c->r[3]=c->r[31]+0x00000000u; // 801BA6A8
  c->r[5]=c->r[31]+0x00000088u; // 801BA6AC
  c->r[4]=0u+0x0000008Bu; // 801BA6B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA6B4
  c->lr=0x801BA6BCu; f_80212260(c); // 801BA6B8
L_801BA6BC:;
  c->r[5]=R32(c->r[13]+0xFFFFC418u); // 801BA6BC
  c->r[0]=c->r[29]+0x00000003u; // 801BA6C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801BA6C4
  c->r[3]=c->r[30]|c->r[30]; // 801BA6C8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801BA6CC
  c->r[4]=c->r[4]+0x00000001u; // 801BA6D0
  W32(c->r[5]+0x00000004u,c->r[4]); // 801BA6D4
  c->r[4]=R32(c->r[13]+0xFFFFC41Cu); // 801BA6D8
  c->r[0]=c->r[4]+c->r[0]; // 801BA6DC
  W32(c->r[13]+0xFFFFC41Cu,c->r[0]); // 801BA6E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA6E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA6E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA6EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA6F0
  c->lr=c->r[0]; // 801BA6F4
  c->r[1]=c->r[1]+0x00000020u; // 801BA6F8
  return; // 801BA6FC
}

// fn_801BA700
void f_801BA700(Ctx* __restrict c) {
  trace_call(0x801BA700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA700
  c->r[0]=c->lr; // 801BA704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA708
  c->r[0]=R32(c->r[13]+0xFFFFC418u); // 801BA70C
  cmps(c,0,(int32_t)c->r[0],0); // 801BA710
  if (!crb(c,2)) { goto L_801BA734; } // 801BA714
  c->r[3]=0u+0x803A0000u; // 801BA718
  c->r[5]=0u+0x803A0000u; // 801BA71C
  c->r[3]=c->r[3]+0xFFFFC148u; // 801BA720
  c->r[4]=0u+0x0000009Eu; // 801BA724
  c->r[5]=c->r[5]+0xFFFFC15Cu; // 801BA728
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BA72C
  c->lr=0x801BA734u; f_80212260(c); // 801BA730
L_801BA734:;
  c->r[4]=R32(c->r[13]+0xFFFFC418u); // 801BA734
  c->r[3]=R32(c->r[4]+0x00000004u); // 801BA738
  cmps(c,0,(int32_t)c->r[3],0); // 801BA73C
  if (crb(c,2)) { goto L_801BA74C; } // 801BA740
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801BA744
  W32(c->r[4]+0x00000004u,c->r[0]); // 801BA748
L_801BA74C:;
  c->r[3]=R32(c->r[13]+0xFFFFC418u); // 801BA74C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801BA750
  cmps(c,0,(int32_t)c->r[0],0); // 801BA754
  if (!crb(c,2)) { goto L_801BA768; } // 801BA758
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BA75C
  c->r[4]=0u+0x00000003u; // 801BA760
  c->lr=0x801BA768u; f_801A8AF0(c); // 801BA764
L_801BA768:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA768
  c->lr=c->r[0]; // 801BA76C
  c->r[1]=c->r[1]+0x00000010u; // 801BA770
  return; // 801BA774
}

// fn_801BA780
void f_801BA780(Ctx* __restrict c) {
  trace_call(0x801BA780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA780
  c->r[0]=c->lr; // 801BA784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA78C
  c->r[31]=c->r[3]|c->r[3]; // 801BA790
  c->lr=0x801BA798u; f_801BAA00(c); // 801BA794
  c->r[0]=0u+0x00000000u; // 801BA798
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801BA79C
  c->r[3]=c->r[31]|c->r[31]; // 801BA7A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA7A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA7A8
  c->lr=c->r[0]; // 801BA7AC
  c->r[1]=c->r[1]+0x00000010u; // 801BA7B0
  return; // 801BA7B4
}

// fn_801BA7C0
void f_801BA7C0(Ctx* __restrict c) {
  trace_call(0x801BA7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA7C0
  c->r[0]=c->lr; // 801BA7C4
  cmps(c,0,(int32_t)c->r[3],0); // 801BA7C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA7CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA7D0
  c->r[31]=c->r[3]|c->r[3]; // 801BA7D4
  if (crb(c,2)) { goto L_801BA7E8; } // 801BA7D8
  cmps(c,0,(int32_t)c->r[4],0); // 801BA7DC
  if (!crb(c,1)) { goto L_801BA7E8; } // 801BA7E0
  c->lr=0x801BA7E8u; f_802E61AC(c); // 801BA7E4
L_801BA7E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801BA7E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA7EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA7F0
  c->lr=c->r[0]; // 801BA7F4
  c->r[1]=c->r[1]+0x00000010u; // 801BA7F8
  return; // 801BA7FC
}

// fn_801BA800
void f_801BA800(Ctx* __restrict c) {
  trace_call(0x801BA800u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA800
  c->r[0]=c->lr; // 801BA804
  c->r[5]=R32(c->r[4]+0x00000000u); // 801BA808
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801BA80C
  c->r[0]=0u+0x43300000u; // 801BA810
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801BA814
  c->r[31]=c->r[3]|c->r[3]; // 801BA818
  W32(c->r[1]+0x000000B8u,c->r[30]); // 801BA81C
  c->r[30]=c->r[4]|c->r[4]; // 801BA820
  c->r[6]=R32(c->r[30]+0x00000004u); // 801BA824
  c->r[4]=c->r[1]+0x0000000Cu; // 801BA828
  W32(c->r[1]+0x000000A8u,c->r[0]); // 801BA82C
  c->r[7]=R32(c->r[30]+0x00000008u); // 801BA830
  W32(c->r[1]+0x000000B0u,c->r[0]); // 801BA834
  c->lr=0x801BA83Cu; f_801BAD30(c); // 801BA838
  cmps(c,0,(int32_t)c->r[3],0); // 801BA83C
  if (!crb(c,2)) { goto L_801BA84C; } // 801BA840
  c->r[3]=0u+0x00000000u; // 801BA844
  goto L_801BA9E0; // 801BA848
L_801BA84C:;
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 801BA84C
  c->r[3]=c->r[31]|c->r[31]; // 801BA850
  c->r[4]=c->r[1]+0x00000028u; // 801BA854
  c->r[5]=c->r[1]+0x0000000Cu; // 801BA858
  c->r[7]=c->r[1]+0x00000008u; // 801BA85C
  c->lr=0x801BA864u; f_801BB0B0(c); // 801BA860
  cmps(c,0,(int32_t)c->r[3],0); // 801BA864
  if (!crb(c,2)) { goto L_801BA874; } // 801BA868
  c->r[3]=0u+0x00000000u; // 801BA86C
  goto L_801BA9E0; // 801BA870
L_801BA874:;
  c->r[0]=R32(c->r[1]+0x00000030u); // 801BA874
  c->r[3]=0u+0x00000002u; // 801BA878
  cmps(c,0,(int32_t)c->r[0],2); // 801BA87C
  if (crb(c,1)) { goto L_801BA888; } // 801BA880
  c->r[3]=c->r[0]|c->r[0]; // 801BA884
L_801BA888:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 801BA888
  c->r[5]=R32(c->r[30]+0x00000014u); // 801BA88C
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 801BA890
  c->r[7]=R32(c->r[30]+0x00000020u); // 801BA894
  c->lr=0x801BA89Cu; f_801BEC10(c); // 801BA898
  cmps(c,0,(int32_t)c->r[3],0); // 801BA89C
  c->r[31]=c->r[3]|c->r[3]; // 801BA8A0
  if (!crb(c,2)) { goto L_801BA8B0; } // 801BA8A4
  c->r[3]=0u+0x00000000u; // 801BA8A8
  goto L_801BA9E0; // 801BA8AC
L_801BA8B0:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801BA8B0
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801BA8B4
  c->r[0]=R32(c->r[30]+0x00000008u); // 801BA8B8
  c->r[4]=R8(c->r[1]+0x00000021u); // 801BA8BC
  c->r[0]=c->r[0]^0x80000000u; // 801BA8C0
  W32(c->r[1]+0x000000ACu,c->r[0]); // 801BA8C4
  {uint32_t ea=c->r[2]+0xFFFFA5C0u; c->f[1]=RF64(ea);} // 801BA8C8
  W32(c->r[3]+0x000000ACu,c->r[4]); // 801BA8CC
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801BA8D0
  c->r[0]=R8(c->r[1]+0x00000023u); // 801BA8D4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 801BA8D8
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801BA8DC
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BA8E0
  {uint32_t ea=c->r[2]+0xFFFFA5C8u; c->f[1]=RF64(ea);} // 801BA8E4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 801BA8E8
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 801BA8EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BA8F0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 801BA8F4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801BA8F8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 801BA8FC
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[3]);} // 801BA900
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA904
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 801BA908
  c->r[4]=R8(c->r[1]+0x00000014u); // 801BA90C
  c->lr=0x801BA914u; f_801C0060(c); // 801BA910
  c->r[4]=R8(c->r[1]+0x00000015u); // 801BA914
  c->r[3]=c->r[31]|c->r[31]; // 801BA918
  c->lr=0x801BA920u; f_801C00F0(c); // 801BA91C
  c->r[4]=R8(c->r[1]+0x00000016u); // 801BA920
  c->r[3]=c->r[31]|c->r[31]; // 801BA924
  c->lr=0x801BA92Cu; f_801C0180(c); // 801BA928
  c->r[4]=R8(c->r[1]+0x00000017u); // 801BA92C
  c->r[3]=c->r[31]|c->r[31]; // 801BA930
  c->lr=0x801BA938u; f_801C02D0(c); // 801BA934
  c->r[4]=R8(c->r[1]+0x00000018u); // 801BA938
  c->r[3]=c->r[31]|c->r[31]; // 801BA93C
  c->lr=0x801BA944u; f_801C0350(c); // 801BA940
  c->r[3]=R8(c->r[1]+0x00000022u); // 801BA944
  c->r[0]=R32(c->r[30]+0x00000010u); // 801BA948
  c->r[3]=c->r[3]+0xFFFFFFC0u; // 801BA94C
  {uint32_t ea=c->r[2]+0xFFFFA5C0u; c->f[4]=RF64(ea);} // 801BA950
  c->r[3]=c->r[3]^0x80000000u; // 801BA954
  W32(c->r[1]+0x000000ACu,c->r[3]); // 801BA958
  c->r[0]=c->r[0]^0x80000000u; // 801BA95C
  {uint32_t ea=c->r[2]+0xFFFFA5B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BA960
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801BA964
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=RF64(ea);} // 801BA968
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=RF64(ea);} // 801BA96C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BA970
  {uint32_t ea=c->r[2]+0xFFFFA5B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BA974
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 801BA978
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[2]); // 801BA97C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801BA980
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 801BA984
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[3]);} // 801BA988
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 801BA98C
  c->r[0]=R8(c->r[1]+0x00000020u); // 801BA990
  W32(c->r[31]+0x000000BCu,c->r[0]); // 801BA994
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801BA998
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801BA99C
  c->r[0]=cntlz(c->r[0]); // 801BA9A0
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 801BA9A4
  W8(c->r[31]+0x0000003Au,c->r[0]); // 801BA9A8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801BA9AC
  cmps(c,0,(int32_t)c->r[0],2); // 801BA9B0
  if (!crb(c,2)) { goto L_801BA9C8; } // 801BA9B4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801BA9B8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801BA9BC
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801BA9C0
  W32(c->r[31]+0x000000CCu,c->r[3]); // 801BA9C4
L_801BA9C8:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801BA9C8
  c->r[3]=c->r[31]|c->r[31]; // 801BA9CC
  c->r[4]=c->r[1]+0x00000028u; // 801BA9D0
  c->r[6]=0u+0x00000000u; // 801BA9D4
  c->lr=0x801BA9DCu; f_801BE760(c); // 801BA9D8
  c->r[3]=c->r[31]|c->r[31]; // 801BA9DC
L_801BA9E0:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801BA9E0
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801BA9E4
  c->r[30]=R32(c->r[1]+0x000000B8u); // 801BA9E8
  c->lr=c->r[0]; // 801BA9EC
  c->r[1]=c->r[1]+0x000000C0u; // 801BA9F0
  return; // 801BA9F4
}

// fn_801BAA00
void f_801BAA00(Ctx* __restrict c) {
  trace_call(0x801BAA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAA00
  c->r[0]=c->lr; // 801BAA04
  cmps(c,0,(int32_t)c->r[4],0); // 801BAA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAA0C
  c->r[0]=0u+0x00000000u; // 801BAA10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BAA14
  c->r[31]=0u+0x803A0000u; // 801BAA18
  c->r[31]=c->r[31]+0xFFFFC1F8u; // 801BAA1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BAA20
  c->r[30]=c->r[4]|c->r[4]; // 801BAA24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BAA28
  c->r[29]=c->r[3]|c->r[3]; // 801BAA2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BAA30
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BAA34
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BAA38
  if (!crb(c,2)) { goto L_801BAA54; } // 801BAA3C
  c->r[3]=c->r[31]+0x00000000u; // 801BAA40
  c->r[5]=c->r[31]+0x000000A0u; // 801BAA44
  c->r[4]=0u+0x0000005Du; // 801BAA48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAA4C
  c->lr=0x801BAA54u; f_80212260(c); // 801BAA50
L_801BAA54:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801BAA54
  c->r[0]=c->r[3]+0xADBE0000u; // 801BAA58
  cmpu(c,0,c->r[0],0x00004E4Bu); // 801BAA5C
  if (crb(c,2)) { goto L_801BAA78; } // 801BAA60
  c->r[3]=c->r[31]+0x00000000u; // 801BAA64
  c->r[5]=c->r[31]+0x00000014u; // 801BAA68
  c->r[4]=0u+0x0000003Bu; // 801BAA6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAA70
  c->lr=0x801BAA78u; f_80212260(c); // 801BAA74
L_801BAA78:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801BAA78
  c->r[0]=c->r[3]+0xADBE0000u; // 801BAA7C
  cmpu(c,0,c->r[0],0x00004E4Bu); // 801BAA80
  if (crb(c,2)) { goto L_801BAA90; } // 801BAA84
  c->r[0]=0u+0x00000000u; // 801BAA88
  goto L_801BAAFC; // 801BAA8C
L_801BAA90:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801BAA90
  cmpu(c,0,c->r[0],0x00000100u); // 801BAA94
  if (!crb(c,0)) { goto L_801BAAB0; } // 801BAA98
  c->r[3]=c->r[31]+0x00000000u; // 801BAA9C
  c->r[5]=c->r[31]+0x00000048u; // 801BAAA0
  c->r[4]=0u+0x00000043u; // 801BAAA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAAA8
  c->lr=0x801BAAB0u; f_80212260(c); // 801BAAAC
L_801BAAB0:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801BAAB0
  cmpu(c,0,c->r[0],0x00000100u); // 801BAAB4
  if (!crb(c,0)) { goto L_801BAAC4; } // 801BAAB8
  c->r[0]=0u+0x00000000u; // 801BAABC
  goto L_801BAAFC; // 801BAAC0
L_801BAAC4:;
  cmpu(c,0,c->r[0],0x00000102u); // 801BAAC4
  if (!crb(c,1)) { goto L_801BAAE0; } // 801BAAC8
  c->r[3]=c->r[31]+0x00000000u; // 801BAACC
  c->r[5]=c->r[31]+0x00000048u; // 801BAAD0
  c->r[4]=0u+0x00000049u; // 801BAAD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAAD8
  c->lr=0x801BAAE0u; f_80212260(c); // 801BAADC
L_801BAAE0:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 801BAAE0
  c->r[3]=0u+0x00000102u; // 801BAAE4
  c->r[0]=addc(c,~c->r[4],0x00000102u,1); // 801BAAE8
  c->r[3]=c->r[3]|~c->r[4]; // 801BAAEC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801BAAF0
  c->r[0]=c->r[3]-c->r[0]; // 801BAAF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801BAAF8
L_801BAAFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BAAFC
  if (!crb(c,2)) { goto L_801BAB0C; } // 801BAB00
  c->r[3]=c->r[29]|c->r[29]; // 801BAB04
  goto L_801BAB88; // 801BAB08
L_801BAB0C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801BAB0C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801BAB10
  cmps(c,0,(int32_t)c->r[0],0); // 801BAB14
  if (crb(c,2)) { goto L_801BAB48; } // 801BAB18
  c->r[3]=c->r[0]+c->r[30]; // 801BAB1C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801BAB20
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BAB24
  c->r[0]=c->r[3]+0xBBBF0000u; // 801BAB28
  cmpu(c,0,c->r[0],0x00005441u); // 801BAB2C
  if (crb(c,2)) { goto L_801BAB48; } // 801BAB30
  c->r[3]=c->r[31]+0x00000000u; // 801BAB34
  c->r[5]=c->r[31]+0x000000CCu; // 801BAB38
  c->r[4]=0u+0x00000069u; // 801BAB3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAB40
  c->lr=0x801BAB48u; f_80212260(c); // 801BAB44
L_801BAB48:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801BAB48
  c->r[0]=R32(c->r[3]+0x00000018u); // 801BAB4C
  cmps(c,0,(int32_t)c->r[0],0); // 801BAB50
  if (crb(c,2)) { goto L_801BAB84; } // 801BAB54
  c->r[3]=c->r[0]+c->r[3]; // 801BAB58
  W32(c->r[29]+0x00000008u,c->r[3]); // 801BAB5C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801BAB60
  c->r[0]=c->r[3]+0xA8BF0000u; // 801BAB64
  cmpu(c,0,c->r[0],0x00005645u); // 801BAB68
  if (crb(c,2)) { goto L_801BAB84; } // 801BAB6C
  c->r[3]=c->r[31]+0x00000000u; // 801BAB70
  c->r[5]=c->r[31]+0x00000124u; // 801BAB74
  c->r[4]=0u+0x00000071u; // 801BAB78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAB7C
  c->lr=0x801BAB84u; f_80212260(c); // 801BAB80
L_801BAB84:;
  c->r[3]=c->r[29]|c->r[29]; // 801BAB84
L_801BAB88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAB88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BAB8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BAB90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BAB94
  c->lr=c->r[0]; // 801BAB98
  c->r[1]=c->r[1]+0x00000020u; // 801BAB9C
  return; // 801BABA0
}

// fn_801BABB0
void f_801BABB0(Ctx* __restrict c) {
  trace_call(0x801BABB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BABB0
  c->r[0]=c->lr; // 801BABB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BABB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BABBC
  c->r[31]=c->r[6]|c->r[6]; // 801BABC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BABC4
  c->r[30]=c->r[4]|c->r[4]; // 801BABC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BABCC
  c->r[29]=c->r[5]|c->r[5]; // 801BABD0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BABD4
  c->r[28]=c->r[3]|c->r[3]; // 801BABD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BABDC
  cmps(c,0,(int32_t)c->r[0],0); // 801BABE0
  if (!crb(c,2)) { goto L_801BAC04; } // 801BABE4
  c->r[3]=0u+0x803A0000u; // 801BABE8
  c->r[5]=0u+0x803A0000u; // 801BABEC
  c->r[3]=c->r[3]+0xFFFFC1F8u; // 801BABF0
  c->r[4]=0u+0x00000087u; // 801BABF4
  c->r[5]=c->r[5]+0xFFFFC378u; // 801BABF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BABFC
  c->lr=0x801BAC04u; f_80212260(c); // 801BAC00
L_801BAC04:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801BAC04
  cmps(c,0,(int32_t)c->r[0],0); // 801BAC08
  if (!crb(c,2)) { goto L_801BAC18; } // 801BAC0C
  c->r[3]=0u+0x00000000u; // 801BAC10
  goto L_801BAD0C; // 801BAC14
L_801BAC18:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BAC18
  if (crb(c,0)) { goto L_801BAC30; } // 801BAC1C
  c->r[3]=R32(c->r[28]+0x00000004u); // 801BAC20
  c->r[0]=R32(c->r[3]+0x00000008u); // 801BAC24
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BAC28
  if (crb(c,0)) { goto L_801BAC38; } // 801BAC2C
L_801BAC30:;
  c->r[3]=0u+0x00000000u; // 801BAC30
  goto L_801BAD0C; // 801BAC34
L_801BAC38:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801BAC38
  c->r[3]=c->r[3]+c->r[0]; // 801BAC3C
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801BAC40
  c->r[30]=c->r[3]+0x0000000Cu; // 801BAC44
  cmpu(c,0,c->r[0],0x00000004u); // 801BAC48
  if (!crb(c,2)) { goto L_801BAC58; } // 801BAC4C
  c->r[3]=0u+0x00000000u; // 801BAC50
  goto L_801BAD0C; // 801BAC54
L_801BAC58:;
  cmpu(c,0,c->r[0],0x00000001u); // 801BAC58
  if (crb(c,2)) { goto L_801BAC84; } // 801BAC5C
  c->r[3]=c->r[28]|c->r[28]; // 801BAC60
  c->r[4]=c->r[30]|c->r[30]; // 801BAC64
  c->r[5]=c->r[29]|c->r[29]; // 801BAC68
  c->lr=0x801BAC70u; f_801BAF30(c); // 801BAC6C
  cmps(c,0,(int32_t)c->r[3],0); // 801BAC70
  c->r[30]=c->r[3]|c->r[3]; // 801BAC74
  if (!crb(c,2)) { goto L_801BAC84; } // 801BAC78
  c->r[3]=0u+0x00000000u; // 801BAC7C
  goto L_801BAD0C; // 801BAC80
L_801BAC84:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801BAC84
  cmpu(c,0,c->r[0],0x00000004u); // 801BAC88
  if (!crb(c,2)) { goto L_801BAC98; } // 801BAC8C
  c->r[3]=0u+0x00000000u; // 801BAC90
  goto L_801BAD0C; // 801BAC94
L_801BAC98:;
  cmpu(c,0,c->r[0],0x00000001u); // 801BAC98
  if (crb(c,2)) { goto L_801BACC4; } // 801BAC9C
  c->r[3]=c->r[28]|c->r[28]; // 801BACA0
  c->r[4]=c->r[30]|c->r[30]; // 801BACA4
  c->r[5]=c->r[31]|c->r[31]; // 801BACA8
  c->lr=0x801BACB0u; f_801BAF30(c); // 801BACAC
  cmps(c,0,(int32_t)c->r[3],0); // 801BACB0
  c->r[30]=c->r[3]|c->r[3]; // 801BACB4
  if (!crb(c,2)) { goto L_801BACC4; } // 801BACB8
  c->r[3]=0u+0x00000000u; // 801BACBC
  goto L_801BAD0C; // 801BACC0
L_801BACC4:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801BACC4
  cmpu(c,0,c->r[0],0x00000001u); // 801BACC8
  if (crb(c,2)) { goto L_801BACD8; } // 801BACCC
  c->r[3]=0u+0x00000000u; // 801BACD0
  goto L_801BAD0C; // 801BACD4
L_801BACD8:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801BACD8
  c->r[31]=c->r[3]+0x00000008u; // 801BACDC
  if (crb(c,2)) { goto L_801BACFC; } // 801BACE0
  c->r[5]=0u+0x803A0000u; // 801BACE4
  c->r[3]=c->r[13]+0xFFFFAD30u; // 801BACE8
  c->r[5]=c->r[5]+0xFFFFC4D0u; // 801BACEC
  c->r[4]=0u+0x0000008Eu; // 801BACF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BACF4
  c->lr=0x801BACFCu; f_80212260(c); // 801BACF8
L_801BACFC:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801BACFC
  c->r[5]=c->r[31]|c->r[31]; // 801BAD00
  c->r[4]=R32(c->r[30]+0x00000004u); // 801BAD04
  c->lr=0x801BAD0Cu; f_801E15A0(c); // 801BAD08
L_801BAD0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAD0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BAD10
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BAD14
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BAD18
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BAD1C
  c->lr=c->r[0]; // 801BAD20
  c->r[1]=c->r[1]+0x00000020u; // 801BAD24
  return; // 801BAD28
}

// fn_801BAD30
void f_801BAD30(Ctx* __restrict c) {
  trace_call(0x801BAD30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAD30
  c->r[0]=c->lr; // 801BAD34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAD38
  c->r[11]=c->r[1]+0x00000020u; // 801BAD3C
  c->lr=0x801BAD44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BAD40
  cmps(c,0,(int32_t)c->r[4],0); // 801BAD44
  c->r[31]=0u+0x803A0000u; // 801BAD48
  c->r[29]=c->r[3]|c->r[3]; // 801BAD4C
  c->r[30]=c->r[4]|c->r[4]; // 801BAD50
  c->r[26]=c->r[5]|c->r[5]; // 801BAD54
  c->r[27]=c->r[6]|c->r[6]; // 801BAD58
  c->r[28]=c->r[7]|c->r[7]; // 801BAD5C
  c->r[31]=c->r[31]+0xFFFFC1F8u; // 801BAD60
  if (!crb(c,2)) { goto L_801BAD7C; } // 801BAD64
  c->r[3]=c->r[31]+0x00000000u; // 801BAD68
  c->r[5]=c->r[31]+0x000001A8u; // 801BAD6C
  c->r[4]=0u+0x000000BCu; // 801BAD70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAD74
  c->lr=0x801BAD7Cu; f_80212260(c); // 801BAD78
L_801BAD7C:;
  c->r[3]=c->r[29]|c->r[29]; // 801BAD7C
  c->r[4]=c->r[26]|c->r[26]; // 801BAD80
  c->r[5]=c->r[27]|c->r[27]; // 801BAD84
  c->r[6]=c->r[28]|c->r[28]; // 801BAD88
  c->lr=0x801BAD90u; f_801BABB0(c); // 801BAD8C
  cmps(c,0,(int32_t)c->r[3],0); // 801BAD90
  if (!crb(c,2)) { goto L_801BADA0; } // 801BAD94
  c->r[3]=0u+0x00000000u; // 801BAD98
  goto L_801BAF14; // 801BAD9C
L_801BADA0:;
  c->r[6]=R8(c->r[3]+0x00000009u); // 801BADA0
  cmps(c,0,(int32_t)c->r[6],0); // 801BADA4
  if (!crb(c,2)) { goto L_801BADD4; } // 801BADA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BADAC
  cmps(c,0,(int32_t)c->r[0],0); // 801BADB0
  if (!crb(c,0)) { goto L_801BADC0; } // 801BADB4
  c->r[3]=0u+0x00000000u; // 801BADB8
  goto L_801BAF14; // 801BADBC
L_801BADC0:;
  c->r[0]=0u+0x00000000u; // 801BADC0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801BADC4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BADC8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801BADCC
  goto L_801BAE50; // 801BADD0
L_801BADD4:;
  cmpu(c,0,c->r[6],0x00000001u); // 801BADD4
  if (!crb(c,2)) { goto L_801BAE04; } // 801BADD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BADDC
  cmps(c,0,(int32_t)c->r[0],0); // 801BADE0
  if (!crb(c,2)) { goto L_801BADF0; } // 801BADE4
  c->r[3]=0u+0x00000000u; // 801BADE8
  goto L_801BAF14; // 801BADEC
L_801BADF0:;
  c->r[0]=0u+0x00000001u; // 801BADF0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801BADF4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BADF8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801BADFC
  goto L_801BAE50; // 801BAE00
L_801BAE04:;
  cmpu(c,0,c->r[6],0x00000002u); // 801BAE04
  if (!crb(c,2)) { goto L_801BAE34; } // 801BAE08
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BAE0C
  cmps(c,0,(int32_t)c->r[0],0); // 801BAE10
  if (!crb(c,2)) { goto L_801BAE20; } // 801BAE14
  c->r[3]=0u+0x00000000u; // 801BAE18
  goto L_801BAF14; // 801BAE1C
L_801BAE20:;
  c->r[0]=0u+0x00000002u; // 801BAE20
  W32(c->r[30]+0x00000000u,c->r[0]); // 801BAE24
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BAE28
  W32(c->r[30]+0x00000004u,c->r[0]); // 801BAE2C
  goto L_801BAE50; // 801BAE30
L_801BAE34:;
  c->r[3]=c->r[31]+0x00000000u; // 801BAE34
  c->r[5]=c->r[31]+0x000001D8u; // 801BAE38
  c->r[4]=0u+0x000000D2u; // 801BAE3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAE40
  c->lr=0x801BAE48u; f_80212260(c); // 801BAE44
  c->r[3]=0u+0x00000000u; // 801BAE48
  goto L_801BAF14; // 801BAE4C
L_801BAE50:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BAE50
  W8(c->r[30]+0x00000008u,c->r[0]); // 801BAE54
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BAE58
  W8(c->r[30]+0x00000009u,c->r[0]); // 801BAE5C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BAE60
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801BAE64
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BAE68
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801BAE6C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BAE70
  W8(c->r[30]+0x0000000Cu,c->r[0]); // 801BAE74
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801BAE78
  W8(c->r[30]+0x00000015u,c->r[0]); // 801BAE7C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801BAE80
  W8(c->r[30]+0x00000016u,c->r[0]); // 801BAE84
  c->r[4]=R32(c->r[29]+0x00000000u); // 801BAE88
  c->r[0]=R16(c->r[4]+0x00000006u); // 801BAE8C
  cmpu(c,0,c->r[0],0x00000101u); // 801BAE90
  if (crb(c,0)) { goto L_801BAEAC; } // 801BAE94
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801BAE98
  W8(c->r[30]+0x00000017u,c->r[0]); // 801BAE9C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BAEA0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801BAEA4
  goto L_801BAEBC; // 801BAEA8
L_801BAEAC:;
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BAEAC
  c->r[0]=0u+0x0000007Fu; // 801BAEB0
  W8(c->r[30]+0x00000017u,c->r[0]); // 801BAEB4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 801BAEB8
L_801BAEBC:;
  c->r[6]=R8(c->r[3]+0x0000000Au); // 801BAEBC
  cmps(c,0,(int32_t)c->r[6],0); // 801BAEC0
  if (crb(c,2)) { goto L_801BAED4; } // 801BAEC4
  cmps(c,0,(int32_t)c->r[6],1); // 801BAEC8
  if (crb(c,2)) { goto L_801BAEE0; } // 801BAECC
  goto L_801BAEEC; // 801BAED0
L_801BAED4:;
  c->r[0]=0u+0x00000000u; // 801BAED4
  W32(c->r[30]+0x00000010u,c->r[0]); // 801BAED8
  goto L_801BAF08; // 801BAEDC
L_801BAEE0:;
  c->r[0]=0u+0x00000001u; // 801BAEE0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801BAEE4
  goto L_801BAF08; // 801BAEE8
L_801BAEEC:;
  c->r[3]=c->r[31]+0x00000000u; // 801BAEEC
  c->r[5]=c->r[31]+0x000001F8u; // 801BAEF0
  c->r[4]=0u+0x000000F0u; // 801BAEF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAEF8
  c->lr=0x801BAF00u; f_80212260(c); // 801BAEFC
  c->r[3]=0u+0x00000000u; // 801BAF00
  goto L_801BAF14; // 801BAF04
L_801BAF08:;
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801BAF08
  c->r[3]=0u+0x00000001u; // 801BAF0C
  W8(c->r[30]+0x00000014u,c->r[0]); // 801BAF10
L_801BAF14:;
  c->r[11]=c->r[1]+0x00000020u; // 801BAF14
  c->lr=0x801BAF1Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BAF18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAF1C
  c->lr=c->r[0]; // 801BAF20
  c->r[1]=c->r[1]+0x00000020u; // 801BAF24
  return; // 801BAF28
}

// fn_801BAF30
void f_801BAF30(Ctx* __restrict c) {
  trace_call(0x801BAF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAF30
  c->r[0]=c->lr; // 801BAF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAF38
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BAF3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BAF40
  cmps(c,0,(int32_t)c->r[0],1); // 801BAF44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BAF48
  c->r[30]=c->r[5]|c->r[5]; // 801BAF4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BAF50
  c->r[29]=c->r[4]|c->r[4]; // 801BAF54
  c->r[4]=0u+0x00000000u; // 801BAF58
  if (crb(c,2)) { goto L_801BAF74; } // 801BAF5C
  cmps(c,0,(int32_t)c->r[0],2); // 801BAF60
  if (crb(c,2)) { goto L_801BAF7C; } // 801BAF64
  cmps(c,0,(int32_t)c->r[0],3); // 801BAF68
  if (crb(c,2)) { goto L_801BB014; } // 801BAF6C
  goto L_801BB08C; // 801BAF70
L_801BAF74:;
  c->r[4]=c->r[29]|c->r[29]; // 801BAF74
  goto L_801BB08C; // 801BAF78
L_801BAF7C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BAF7C
  cmpu(c,0,c->r[0],0x00000002u); // 801BAF80
  c->r[31]=c->r[3]+0x00000008u; // 801BAF84
  if (crb(c,2)) { goto L_801BAFA4; } // 801BAF88
  c->r[5]=0u+0x803A0000u; // 801BAF8C
  c->r[3]=c->r[13]+0xFFFFAD20u; // 801BAF90
  c->r[5]=c->r[5]+0xFFFFC480u; // 801BAF94
  c->r[4]=0u+0x0000008Fu; // 801BAF98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BAF9C
  c->lr=0x801BAFA4u; f_80212260(c); // 801BAFA0
L_801BAFA4:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801BAFA4
  c->r[5]=c->r[31]|c->r[31]; // 801BAFA8
  c->r[4]=R32(c->r[29]+0x00000004u); // 801BAFAC
  c->lr=0x801BAFB4u; f_801E15A0(c); // 801BAFB0
  cmps(c,0,(int32_t)c->r[3],0); // 801BAFB4
  if (!crb(c,2)) { goto L_801BAFC4; } // 801BAFB8
  c->r[3]=0u+0x00000000u; // 801BAFBC
  goto L_801BB090; // 801BAFC0
L_801BAFC4:;
  c->r[5]=0u+0x00000000u; // 801BAFC4
  goto L_801BAFE8; // 801BAFC8
  c->r[0]=c->r[0]|0x00000000u; // 801BAFCC
L_801BAFD0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BAFD0
  c->r[5]=c->r[5]+0x00000001u; // 801BAFD4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801BAFD8
  if (crb(c,0)) { goto L_801BAFE8; } // 801BAFDC
  c->r[3]=0u+0x00000000u; // 801BAFE0
  goto L_801BB090; // 801BAFE4
L_801BAFE8:;
  c->r[4]=c->r[3]+c->r[5]; // 801BAFE8
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BAFEC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BAFF0
  if (crb(c,1)) { IRQCHK(c); goto L_801BAFD0; } // 801BAFF4
  c->r[4]=R8(c->r[3]+0x00000000u); // 801BAFF8
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801BAFFC
  c->r[0]=c->r[3]+c->r[0]; // 801BB000
  c->r[3]=c->r[4]+0x00000004u; // 801BB004
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFCu; // 801BB008
  c->r[4]=c->r[3]+c->r[0]; // 801BB00C
  goto L_801BB08C; // 801BB010
L_801BB014:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801BB014
  cmpu(c,0,c->r[0],0x00000003u); // 801BB018
  c->r[31]=c->r[3]+0x00000008u; // 801BB01C
  if (crb(c,2)) { goto L_801BB03C; } // 801BB020
  c->r[5]=0u+0x803A0000u; // 801BB024
  c->r[3]=c->r[13]+0xFFFFAD28u; // 801BB028
  c->r[5]=c->r[5]+0xFFFFC4A8u; // 801BB02C
  c->r[4]=0u+0x00000090u; // 801BB030
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB034
  c->lr=0x801BB03Cu; f_80212260(c); // 801BB038
L_801BB03C:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801BB03C
  c->r[5]=c->r[31]|c->r[31]; // 801BB040
  c->r[4]=R32(c->r[29]+0x00000004u); // 801BB044
  c->lr=0x801BB04Cu; f_801E15A0(c); // 801BB048
  cmps(c,0,(int32_t)c->r[3],0); // 801BB04C
  if (!crb(c,2)) { goto L_801BB05C; } // 801BB050
  c->r[3]=0u+0x00000000u; // 801BB054
  goto L_801BB090; // 801BB058
L_801BB05C:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 801BB05C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[4]); // 801BB060
  if (crb(c,0)) { goto L_801BB074; } // 801BB064
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BB068
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BB06C
  if (!crb(c,1)) { goto L_801BB07C; } // 801BB070
L_801BB074:;
  c->r[3]=0u+0x00000000u; // 801BB074
  goto L_801BB090; // 801BB078
L_801BB07C:;
  c->r[0]=c->r[30]-c->r[4]; // 801BB07C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801BB080
  c->r[3]=c->r[3]+c->r[0]; // 801BB084
  c->r[4]=c->r[3]+0x00000004u; // 801BB088
L_801BB08C:;
  c->r[3]=c->r[4]|c->r[4]; // 801BB08C
L_801BB090:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB090
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BB094
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BB098
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BB09C
  c->lr=c->r[0]; // 801BB0A0
  c->r[1]=c->r[1]+0x00000020u; // 801BB0A4
  return; // 801BB0A8
}

// fn_801BB0B0
void f_801BB0B0(Ctx* __restrict c) {
  trace_call(0x801BB0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB0B0
  c->r[0]=c->lr; // 801BB0B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BB0B8
  c->r[11]=c->r[1]+0x00000030u; // 801BB0BC
  c->lr=0x801BB0C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BB0C0
  cmps(c,0,(int32_t)c->r[4],0); // 801BB0C4
  c->r[30]=0u+0x803A0000u; // 801BB0C8
  c->r[26]=c->r[3]|c->r[3]; // 801BB0CC
  c->r[31]=c->r[4]|c->r[4]; // 801BB0D0
  c->r[27]=c->r[5]|c->r[5]; // 801BB0D4
  c->r[28]=c->r[6]|c->r[6]; // 801BB0D8
  c->r[29]=c->r[7]|c->r[7]; // 801BB0DC
  c->r[30]=c->r[30]+0xFFFFC1F8u; // 801BB0E0
  if (!crb(c,2)) { goto L_801BB0FC; } // 801BB0E4
  c->r[3]=c->r[30]+0x00000000u; // 801BB0E8
  c->r[5]=c->r[30]+0x00000210u; // 801BB0EC
  c->r[4]=0u+0x0000014Bu; // 801BB0F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB0F4
  c->lr=0x801BB0FCu; f_80212260(c); // 801BB0F8
L_801BB0FC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BB0FC
  if (crb(c,2)) { goto L_801BB10C; } // 801BB100
  c->r[0]=0u+0x00000000u; // 801BB104
  W32(c->r[29]+0x00000000u,c->r[0]); // 801BB108
L_801BB10C:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801BB10C
  cmps(c,0,(int32_t)c->r[0],0); // 801BB110
  if (!crb(c,2)) { goto L_801BB120; } // 801BB114
  c->r[3]=0u+0x00000000u; // 801BB118
  goto L_801BB354; // 801BB11C
L_801BB120:;
  c->r[6]=R32(c->r[27]+0x00000000u); // 801BB120
  cmps(c,0,(int32_t)c->r[6],0); // 801BB124
  if (!crb(c,2)) { goto L_801BB208; } // 801BB128
  c->r[3]=R32(c->r[26]+0x00000008u); // 801BB12C
  c->r[30]=R32(c->r[27]+0x00000004u); // 801BB130
  cmps(c,0,(int32_t)c->r[3],0); // 801BB134
  if (!crb(c,2)) { goto L_801BB184; } // 801BB138
  c->r[4]=c->r[28]|c->r[28]; // 801BB13C
  c->r[3]=c->r[1]+0x00000010u; // 801BB140
  c->lr=0x801BB148u; f_801E1600(c); // 801BB144
  c->r[4]=c->r[30]|c->r[30]; // 801BB148
  c->r[3]=c->r[1]+0x00000010u; // 801BB14C
  c->lr=0x801BB154u; f_801E1790(c); // 801BB150
  cmps(c,0,(int32_t)c->r[3],0); // 801BB154
  if (!crb(c,2)) { goto L_801BB164; } // 801BB158
  c->r[3]=0u+0x00000000u; // 801BB15C
  goto L_801BB354; // 801BB160
L_801BB164:;
  c->r[4]=c->r[3]|c->r[3]; // 801BB164
  c->r[3]=c->r[1]+0x0000000Cu; // 801BB168
  c->lr=0x801BB170u; f_801E1850(c); // 801BB16C
  c->r[4]=c->r[31]|c->r[31]; // 801BB170
  c->r[3]=c->r[1]+0x0000000Cu; // 801BB174
  c->r[5]=0u+0x00000000u; // 801BB178
  c->lr=0x801BB180u; f_801E1920(c); // 801BB17C
  goto L_801BB354; // 801BB180
L_801BB184:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801BB184
  c->r[29]=c->r[3]+0x00000008u; // 801BB188
  cmpu(c,0,c->r[30],c->r[0]); // 801BB18C
  if (crb(c,0)) { goto L_801BB19C; } // 801BB190
  c->r[3]=0u+0x00000000u; // 801BB194
  goto L_801BB354; // 801BB198
L_801BB19C:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801BB19C
  c->r[30]=c->r[3]+c->r[0]; // 801BB1A0
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801BB1A4
  cmps(c,0,(int32_t)c->r[0],0); // 801BB1A8
  if (crb(c,2)) { goto L_801BB1C8; } // 801BB1AC
  c->r[5]=0u+0x803A0000u; // 801BB1B0
  c->r[3]=c->r[13]+0xFFFFAD18u; // 801BB1B4
  c->r[5]=c->r[5]+0xFFFFC458u; // 801BB1B8
  c->r[4]=0u+0x0000008Du; // 801BB1BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB1C0
  c->lr=0x801BB1C8u; f_80212260(c); // 801BB1C4
L_801BB1C8:;
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 801BB1C8
  c->r[5]=c->r[29]|c->r[29]; // 801BB1CC
  c->r[4]=R32(c->r[30]+0x00000010u); // 801BB1D0
  c->lr=0x801BB1D8u; f_801E15A0(c); // 801BB1D4
  cmps(c,0,(int32_t)c->r[3],0); // 801BB1D8
  if (!crb(c,2)) { goto L_801BB1E8; } // 801BB1DC
  c->r[3]=0u+0x00000000u; // 801BB1E0
  goto L_801BB354; // 801BB1E4
L_801BB1E8:;
  c->r[4]=c->r[3]|c->r[3]; // 801BB1E8
  c->r[3]=c->r[1]+0x00000008u; // 801BB1EC
  c->lr=0x801BB1F4u; f_801E1910(c); // 801BB1F0
  c->r[4]=c->r[31]|c->r[31]; // 801BB1F4
  c->r[5]=c->r[28]|c->r[28]; // 801BB1F8
  c->r[3]=c->r[1]+0x00000008u; // 801BB1FC
  c->lr=0x801BB204u; f_801E1920(c); // 801BB200
  goto L_801BB354; // 801BB204
L_801BB208:;
  cmps(c,0,(int32_t)c->r[6],1); // 801BB208
  if (!crb(c,2)) { goto L_801BB294; } // 801BB20C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801BB210
  cmps(c,0,(int32_t)c->r[0],0); // 801BB214
  if (!crb(c,2)) { goto L_801BB224; } // 801BB218
  c->r[3]=0u+0x00000000u; // 801BB21C
  goto L_801BB354; // 801BB220
L_801BB224:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BB224
  if (crb(c,2)) { goto L_801BB230; } // 801BB228
  W32(c->r[29]+0x00000000u,c->r[0]); // 801BB22C
L_801BB230:;
  c->r[6]=R32(c->r[27]+0x00000004u); // 801BB230
  c->r[0]=0u+0x0000000Du; // 801BB234
  c->r[5]=c->r[31]+0x00000014u; // 801BB238
  c->r[3]=R32(c->r[6]+0x00000000u); // 801BB23C
  c->r[4]=c->r[6]+0x00000014u; // 801BB240
  W32(c->r[31]+0x00000000u,c->r[3]); // 801BB244
  c->r[3]=R8(c->r[6]+0x00000004u); // 801BB248
  W8(c->r[31]+0x00000004u,c->r[3]); // 801BB24C
  c->r[3]=R32(c->r[6]+0x00000008u); // 801BB250
  W32(c->r[31]+0x00000008u,c->r[3]); // 801BB254
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 801BB258
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801BB25C
  c->r[3]=R32(c->r[6]+0x00000010u); // 801BB260
  W32(c->r[31]+0x00000010u,c->r[3]); // 801BB264
  c->r[3]=R32(c->r[6]+0x00000014u); // 801BB268
  W32(c->r[31]+0x00000014u,c->r[3]); // 801BB26C
  c->ctr=c->r[0]; // 801BB270
  c->r[0]=c->r[0]|0x00000000u; // 801BB274
L_801BB278:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801BB278
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801BB27C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801BB280
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801BB284
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB278; } // 801BB288
  c->r[3]=0u+0x00000001u; // 801BB28C
  goto L_801BB354; // 801BB290
L_801BB294:;
  cmps(c,0,(int32_t)c->r[6],2); // 801BB294
  if (!crb(c,2)) { goto L_801BB33C; } // 801BB298
  c->r[3]=R32(c->r[27]+0x00000004u); // 801BB29C
  cmps(c,0,(int32_t)c->r[3],0); // 801BB2A0
  if (!crb(c,2)) { goto L_801BB2B0; } // 801BB2A4
  c->r[3]=0u+0x00000000u; // 801BB2A8
  goto L_801BB354; // 801BB2AC
L_801BB2B0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BB2B0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801BB2B4
  c->ctr=c->r[12]; // 801BB2B8
  if (true) { c->lr=0x801BB2C0u; dispatch(c,c->ctr); } // 801BB2BC
  cmps(c,0,(int32_t)c->r[3],0); // 801BB2C0
  if (!crb(c,2)) { goto L_801BB2D0; } // 801BB2C4
  c->r[3]=0u+0x00000000u; // 801BB2C8
  goto L_801BB354; // 801BB2CC
L_801BB2D0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801BB2D0
  if (crb(c,2)) { goto L_801BB2DC; } // 801BB2D4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801BB2D8
L_801BB2DC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801BB2DC
  c->r[0]=0u+0x0000000Du; // 801BB2E0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801BB2E4
  c->r[4]=c->r[3]+0x00000014u; // 801BB2E8
  c->r[5]=c->r[31]+0x00000014u; // 801BB2EC
  c->r[6]=R8(c->r[3]+0x00000004u); // 801BB2F0
  W8(c->r[31]+0x00000004u,c->r[6]); // 801BB2F4
  c->r[6]=R32(c->r[3]+0x00000008u); // 801BB2F8
  W32(c->r[31]+0x00000008u,c->r[6]); // 801BB2FC
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 801BB300
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 801BB304
  c->r[6]=R32(c->r[3]+0x00000010u); // 801BB308
  W32(c->r[31]+0x00000010u,c->r[6]); // 801BB30C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801BB310
  W32(c->r[31]+0x00000014u,c->r[3]); // 801BB314
  c->ctr=c->r[0]; // 801BB318
  c->r[0]=c->r[0]|0x00000000u; // 801BB31C
L_801BB320:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801BB320
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 801BB324
  W32(c->r[5]+0x00000004u,c->r[3]); // 801BB328
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 801BB32C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB320; } // 801BB330
  c->r[3]=0u+0x00000001u; // 801BB334
  goto L_801BB354; // 801BB338
L_801BB33C:;
  c->r[3]=c->r[30]+0x00000000u; // 801BB33C
  c->r[5]=c->r[30]+0x0000023Cu; // 801BB340
  c->r[4]=0u+0x00000185u; // 801BB344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB348
  c->lr=0x801BB350u; f_80212260(c); // 801BB34C
  c->r[3]=0u+0x00000000u; // 801BB350
L_801BB354:;
  c->r[11]=c->r[1]+0x00000030u; // 801BB354
  c->lr=0x801BB35Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BB358
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB35C
  c->lr=c->r[0]; // 801BB360
  c->r[1]=c->r[1]+0x00000030u; // 801BB364
  return; // 801BB368
}

// fn_801BB370
void f_801BB370(Ctx* __restrict c) {
  trace_call(0x801BB370u);
  {uint32_t ea=c->r[2]+0xFFFFA5DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB370
  c->r[4]=0u+0x00000000u; // 801BB374
  {uint32_t ea=c->r[2]+0xFFFFA5D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB378
  c->r[0]=0u+0x00000001u; // 801BB37C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801BB380
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801BB384
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 801BB388
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BB38C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801BB390
  W8(c->r[3]+0x00000018u,c->r[4]); // 801BB394
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801BB398
  W8(c->r[3]+0x00000019u,c->r[4]); // 801BB39C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801BB3A0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801BB3A4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801BB3A8
  W32(c->r[3]+0x00000028u,c->r[4]); // 801BB3AC
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801BB3B0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801BB3B4
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 801BB3B8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801BB3BC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801BB3C0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801BB3C4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 801BB3C8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801BB3CC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 801BB3D0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801BB3D4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801BB3D8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801BB3DC
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801BB3E0
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801BB3E4
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 801BB3E8
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 801BB3EC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801BB3F0
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[0]);} // 801BB3F4
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801BB3F8
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801BB3FC
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 801BB400
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 801BB404
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 801BB408
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[0]);} // 801BB40C
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[0]);} // 801BB410
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 801BB414
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 801BB418
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[1]);} // 801BB41C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 801BB420
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 801BB424
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801BB428
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 801BB42C
  return; // 801BB430
}

// fn_801BB440
void f_801BB440(Ctx* __restrict c) {
  trace_call(0x801BB440u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB440
  c->r[0]=c->lr; // 801BB444
  c->r[4]=0u+0x803A0000u; // 801BB448
  c->r[5]=c->r[3]+0x00000068u; // 801BB44C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB450
  c->r[6]=c->r[3]+0x000000B0u; // 801BB454
  {uint32_t ea=c->r[2]+0xFFFFA5DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB458
  cmpu(c,0,c->r[5],c->r[6]); // 801BB45C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB460
  c->r[4]=c->r[4]+0xFFFFC644u; // 801BB464
  {uint32_t ea=c->r[2]+0xFFFFA5D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB468
  c->r[31]=c->r[3]|c->r[3]; // 801BB46C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801BB470
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801BB474
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 801BB478
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801BB47C
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801BB480
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801BB484
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801BB488
  if (!crb(c,0)) { goto L_801BB4C8; } // 801BB48C
  c->r[4]=c->r[6]+0x00000017u; // 801BB490
  c->r[0]=0u+0x00000018u; // 801BB494
  c->r[4]=c->r[4]-c->r[5]; // 801BB498
  c->r[4]=divwu(c->r[4],c->r[0]); // 801BB49C
  c->ctr=c->r[4]; // 801BB4A0
  if (!crb(c,0)) { goto L_801BB4C8; } // 801BB4A4
L_801BB4A8:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 801BB4A8
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[1]);} // 801BB4AC
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 801BB4B0
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BB4B4
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[0]);} // 801BB4B8
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[0]);} // 801BB4BC
  c->r[5]=c->r[5]+0x00000018u; // 801BB4C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BB4A8; } // 801BB4C4
L_801BB4C8:;
  c->r[3]=c->r[3]+0x00000004u; // 801BB4C8
  c->lr=0x801BB4D0u; f_801BB370(c); // 801BB4CC
  c->r[0]=0u+0xFFFFFFFFu; // 801BB4D0
  W32(c->r[31]+0x000000B0u,c->r[0]); // 801BB4D4
  c->r[3]=c->r[31]+0x00000004u; // 801BB4D8
  c->lr=0x801BB4E0u; f_801BB370(c); // 801BB4DC
  c->r[3]=c->r[31]|c->r[31]; // 801BB4E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB4E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB4E8
  c->lr=c->r[0]; // 801BB4EC
  c->r[1]=c->r[1]+0x00000010u; // 801BB4F0
  return; // 801BB4F4
}

// fn_801BB500
void f_801BB500(Ctx* __restrict c) {
  trace_call(0x801BB500u);
  c->r[3]=c->r[3]+0x00000004u; // 801BB500
  f_801BB370(c); return; // 801BB504
}

// fn_801BB510
void f_801BB510(Ctx* __restrict c) {
  trace_call(0x801BB510u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB510
  c->r[0]=c->lr; // 801BB514
  cmpu(c,0,c->r[4],0x00000002u); // 801BB518
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB51C
  c->r[0]=0u+0x00000000u; // 801BB520
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801BB524
  c->f[31]=c->f[1]; // 801BB528
  W32(c->r[1]+0x00000014u,c->r[31]); // 801BB52C
  c->r[31]=c->r[4]|c->r[4]; // 801BB530
  W32(c->r[1]+0x00000010u,c->r[30]); // 801BB534
  c->r[30]=c->r[3]|c->r[3]; // 801BB538
  if (crb(c,1)) { goto L_801BB544; } // 801BB53C
  c->r[0]=0u+0x00000001u; // 801BB540
L_801BB544:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BB544
  if (!crb(c,2)) { goto L_801BB574; } // 801BB548
  c->r[3]=0u+0x803A0000u; // 801BB54C
  c->r[5]=0u+0x803A0000u; // 801BB550
  c->r[6]=c->r[31]|c->r[31]; // 801BB554
  c->r[4]=0u+0x0000004Fu; // 801BB558
  c->r[3]=c->r[3]+0xFFFFC4F8u; // 801BB55C
  c->r[5]=c->r[5]+0xFFFFC50Cu; // 801BB560
  c->r[7]=0u+0x00000000u; // 801BB564
  c->r[8]=0u+0x00000003u; // 801BB568
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB56C
  c->lr=0x801BB574u; f_80212260(c); // 801BB570
L_801BB574:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BB574
  c->r[3]=c->r[30]+c->r[0]; // 801BB578
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[31]);} // 801BB57C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801BB580
  c->r[31]=R32(c->r[1]+0x00000014u); // 801BB584
  c->r[30]=R32(c->r[1]+0x00000010u); // 801BB588
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB58C
  c->lr=c->r[0]; // 801BB590
  c->r[1]=c->r[1]+0x00000020u; // 801BB594
  return; // 801BB598
}

// fn_801BB5A0
void f_801BB5A0(Ctx* __restrict c) {
  trace_call(0x801BB5A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB5A0
  c->r[0]=c->lr; // 801BB5A4
  cmpu(c,0,c->r[4],0x00000002u); // 801BB5A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB5AC
  c->r[0]=0u+0x00000000u; // 801BB5B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB5B4
  c->r[31]=c->r[4]|c->r[4]; // 801BB5B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BB5BC
  c->r[30]=c->r[3]|c->r[3]; // 801BB5C0
  if (crb(c,1)) { goto L_801BB5CC; } // 801BB5C4
  c->r[0]=0u+0x00000001u; // 801BB5C8
L_801BB5CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BB5CC
  if (!crb(c,2)) { goto L_801BB5FC; } // 801BB5D0
  c->r[3]=0u+0x803A0000u; // 801BB5D4
  c->r[5]=0u+0x803A0000u; // 801BB5D8
  c->r[6]=c->r[31]|c->r[31]; // 801BB5DC
  c->r[4]=0u+0x00000055u; // 801BB5E0
  c->r[3]=c->r[3]+0xFFFFC4F8u; // 801BB5E4
  c->r[5]=c->r[5]+0xFFFFC50Cu; // 801BB5E8
  c->r[7]=0u+0x00000000u; // 801BB5EC
  c->r[8]=0u+0x00000003u; // 801BB5F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB5F4
  c->lr=0x801BB5FCu; f_80212260(c); // 801BB5F8
L_801BB5FC:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BB5FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB600
  c->r[3]=c->r[30]+c->r[0]; // 801BB604
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB608
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB60C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB610
  c->lr=c->r[0]; // 801BB614
  c->r[1]=c->r[1]+0x00000010u; // 801BB618
  return; // 801BB61C
}

// fn_801BB620
void f_801BB620(Ctx* __restrict c) {
  trace_call(0x801BB620u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB620
  c->r[0]=c->lr; // 801BB624
  cmpu(c,0,c->r[4],0x0000007Fu); // 801BB628
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BB62C
  c->r[0]=0u+0x00000000u; // 801BB630
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801BB634
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801BB638
  c->f[31]=c->f[1]; // 801BB63C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BB640
  c->r[31]=0u+0x803A0000u; // 801BB644
  c->r[31]=c->r[31]+0xFFFFC4F8u; // 801BB648
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BB64C
  c->r[30]=c->r[4]|c->r[4]; // 801BB650
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BB654
  c->r[29]=c->r[3]|c->r[3]; // 801BB658
  if (crb(c,1)) { goto L_801BB664; } // 801BB65C
  c->r[0]=0u+0x00000001u; // 801BB660
L_801BB664:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BB664
  if (!crb(c,2)) { goto L_801BB68C; } // 801BB668
  c->r[6]=c->r[30]|c->r[30]; // 801BB66C
  c->r[3]=c->r[31]+0x00000000u; // 801BB670
  c->r[5]=c->r[31]+0x0000004Cu; // 801BB674
  c->r[4]=0u+0x0000005Bu; // 801BB678
  c->r[7]=0u+0x00000000u; // 801BB67C
  c->r[8]=0u+0x0000007Fu; // 801BB680
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB684
  c->lr=0x801BB68Cu; f_80212260(c); // 801BB688
L_801BB68C:;
  {uint32_t ea=c->r[2]+0xFFFFA5DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB68C
  c->r[0]=0u+0x00000000u; // 801BB690
  fcmp(c,0,c->f[31],c->f[0]); // 801BB694
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BB698
  if (!crb(c,2)) { goto L_801BB6B4; } // 801BB69C
  {uint32_t ea=c->r[2]+0xFFFFA5D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB6A0
  fcmp(c,0,c->f[31],c->f[0]); // 801BB6A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801BB6A8
  if (!crb(c,2)) { goto L_801BB6B4; } // 801BB6AC
  c->r[0]=0u+0x00000001u; // 801BB6B0
L_801BB6B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BB6B4
  if (!crb(c,2)) { goto L_801BB6E4; } // 801BB6B8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 801BB6BC
  c->r[3]=c->r[31]+0x00000000u; // 801BB6C0
  c->r[5]=c->r[31]+0x00000088u; // 801BB6C4
  c->r[4]=0u+0x0000005Cu; // 801BB6C8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801BB6CC
  c->r[7]=0u+0x00000000u; // 801BB6D0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801BB6D4
  c->r[8]=0u+0x00000001u; // 801BB6D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB6DC
  c->lr=0x801BB6E4u; f_80212260(c); // 801BB6E0
L_801BB6E4:;
  W8(c->r[29]+0x0000001Cu,c->r[30]); // 801BB6E4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[31]);} // 801BB6E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801BB6EC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801BB6F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BB6F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BB6F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BB6FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB700
  c->lr=c->r[0]; // 801BB704
  c->r[1]=c->r[1]+0x00000030u; // 801BB708
  return; // 801BB70C
}

// fn_801BB710
void f_801BB710(Ctx* __restrict c) {
  trace_call(0x801BB710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB710
  c->r[0]=c->lr; // 801BB714
  cmpu(c,0,c->r[4],0x0000007Fu); // 801BB718
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB71C
  c->r[0]=0u+0x00000000u; // 801BB720
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB724
  c->r[31]=c->r[4]|c->r[4]; // 801BB728
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BB72C
  c->r[30]=c->r[3]|c->r[3]; // 801BB730
  if (crb(c,1)) { goto L_801BB73C; } // 801BB734
  c->r[0]=0u+0x00000001u; // 801BB738
L_801BB73C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BB73C
  if (!crb(c,2)) { goto L_801BB76C; } // 801BB740
  c->r[3]=0u+0x803A0000u; // 801BB744
  c->r[5]=0u+0x803A0000u; // 801BB748
  c->r[6]=c->r[31]|c->r[31]; // 801BB74C
  c->r[4]=0u+0x00000064u; // 801BB750
  c->r[3]=c->r[3]+0xFFFFC4F8u; // 801BB754
  c->r[5]=c->r[5]+0xFFFFC5BCu; // 801BB758
  c->r[7]=0u+0x00000000u; // 801BB75C
  c->r[8]=0u+0x0000007Fu; // 801BB760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB764
  c->lr=0x801BB76Cu; f_80212260(c); // 801BB768
L_801BB76C:;
  W8(c->r[30]+0x0000001Du,c->r[31]); // 801BB76C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB770
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB774
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB778
  c->lr=c->r[0]; // 801BB77C
  c->r[1]=c->r[1]+0x00000010u; // 801BB780
  return; // 801BB784
}

// fn_801BB790
void f_801BB790(Ctx* __restrict c) {
  trace_call(0x801BB790u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB790
  c->r[0]=c->lr; // 801BB794
  cmpu(c,0,c->r[4],0x00000003u); // 801BB798
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB79C
  c->r[0]=0u+0x00000000u; // 801BB7A0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801BB7A4
  c->f[31]=c->f[1]; // 801BB7A8
  W32(c->r[1]+0x00000014u,c->r[31]); // 801BB7AC
  c->r[31]=c->r[4]|c->r[4]; // 801BB7B0
  W32(c->r[1]+0x00000010u,c->r[30]); // 801BB7B4
  c->r[30]=c->r[3]|c->r[3]; // 801BB7B8
  if (crb(c,1)) { goto L_801BB7C4; } // 801BB7BC
  c->r[0]=0u+0x00000001u; // 801BB7C0
L_801BB7C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BB7C4
  if (!crb(c,2)) { goto L_801BB7F4; } // 801BB7C8
  c->r[3]=0u+0x803A0000u; // 801BB7CC
  c->r[5]=0u+0x803A0000u; // 801BB7D0
  c->r[6]=c->r[31]|c->r[31]; // 801BB7D4
  c->r[4]=0u+0x0000006Bu; // 801BB7D8
  c->r[3]=c->r[3]+0xFFFFC4F8u; // 801BB7DC
  c->r[5]=c->r[5]+0xFFFFC5FCu; // 801BB7E0
  c->r[7]=0u+0x00000000u; // 801BB7E4
  c->r[8]=0u+0x00000004u; // 801BB7E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB7EC
  c->lr=0x801BB7F4u; f_80212260(c); // 801BB7F0
L_801BB7F4:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BB7F4
  c->r[3]=c->r[30]+c->r[0]; // 801BB7F8
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[31]);} // 801BB7FC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801BB800
  c->r[31]=R32(c->r[1]+0x00000014u); // 801BB804
  c->r[30]=R32(c->r[1]+0x00000010u); // 801BB808
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB80C
  c->lr=c->r[0]; // 801BB810
  c->r[1]=c->r[1]+0x00000020u; // 801BB814
  return; // 801BB818
}

// fn_801BB820
void f_801BB820(Ctx* __restrict c) {
  trace_call(0x801BB820u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB820
  c->r[0]=c->lr; // 801BB824
  cmpu(c,0,c->r[4],0x00000003u); // 801BB828
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB82C
  c->r[0]=0u+0x00000000u; // 801BB830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB834
  c->r[31]=c->r[4]|c->r[4]; // 801BB838
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BB83C
  c->r[30]=c->r[3]|c->r[3]; // 801BB840
  if (crb(c,1)) { goto L_801BB84C; } // 801BB844
  c->r[0]=0u+0x00000001u; // 801BB848
L_801BB84C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BB84C
  if (!crb(c,2)) { goto L_801BB87C; } // 801BB850
  c->r[3]=0u+0x803A0000u; // 801BB854
  c->r[5]=0u+0x803A0000u; // 801BB858
  c->r[6]=c->r[31]|c->r[31]; // 801BB85C
  c->r[4]=0u+0x00000071u; // 801BB860
  c->r[3]=c->r[3]+0xFFFFC4F8u; // 801BB864
  c->r[5]=c->r[5]+0xFFFFC5FCu; // 801BB868
  c->r[7]=0u+0x00000000u; // 801BB86C
  c->r[8]=0u+0x00000004u; // 801BB870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB874
  c->lr=0x801BB87Cu; f_80212260(c); // 801BB878
L_801BB87C:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BB87C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB880
  c->r[3]=c->r[30]+c->r[0]; // 801BB884
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB888
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB88C
  {uint32_t ea=c->r[3]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB890
  c->lr=c->r[0]; // 801BB894
  c->r[1]=c->r[1]+0x00000010u; // 801BB898
  return; // 801BB89C
}

// fn_801BB8A0
void f_801BB8A0(Ctx* __restrict c) {
  trace_call(0x801BB8A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB8A0
  c->r[0]=c->lr; // 801BB8A4
  cmps(c,0,(int32_t)c->r[3],0); // 801BB8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB8B0
  c->r[31]=c->r[3]|c->r[3]; // 801BB8B4
  if (crb(c,2)) { goto L_801BB8C8; } // 801BB8B8
  cmps(c,0,(int32_t)c->r[4],0); // 801BB8BC
  if (!crb(c,1)) { goto L_801BB8C8; } // 801BB8C0
  c->lr=0x801BB8C8u; f_802E61AC(c); // 801BB8C4
L_801BB8C8:;
  c->r[3]=c->r[31]|c->r[31]; // 801BB8C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB8CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB8D0
  c->lr=c->r[0]; // 801BB8D4
  c->r[1]=c->r[1]+0x00000010u; // 801BB8D8
  return; // 801BB8DC
}

// fn_801BB8E0
void f_801BB8E0(Ctx* __restrict c) {
  trace_call(0x801BB8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB8E0
  c->r[0]=c->lr; // 801BB8E4
  c->r[7]=0u+0x803A0000u; // 801BB8E8
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BB8EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB8F0
  cmpu(c,0,c->r[4],0x0000007Fu); // 801BB8F4
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BB8F8
  c->r[6]=0u+0x00000000u; // 801BB8FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BB900
  c->r[7]=c->r[7]+0xFFFFCA20u; // 801BB904
  c->r[0]=0u+0xFFFFFFFFu; // 801BB908
  c->r[31]=c->r[5]|c->r[5]; // 801BB90C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BB910
  c->r[30]=c->r[4]|c->r[4]; // 801BB914
  c->r[4]=0u+0x00000000u; // 801BB918
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BB91C
  c->r[29]=c->r[3]|c->r[3]; // 801BB920
  W32(c->r[3]+0x00000000u,c->r[7]); // 801BB924
  W32(c->r[3]+0x00000004u,c->r[6]); // 801BB928
  W32(c->r[3]+0x00000008u,c->r[6]); // 801BB92C
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 801BB930
  W32(c->r[3]+0x00000010u,c->r[6]); // 801BB934
  W32(c->r[3]+0x00000014u,c->r[6]); // 801BB938
  W32(c->r[3]+0x00000018u,c->r[6]); // 801BB93C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801BB940
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801BB944
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801BB948
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BB94C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801BB950
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801BB954
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801BB958
  W32(c->r[3]+0x0000004Cu,c->r[6]); // 801BB95C
  W32(c->r[3]+0x00000050u,c->r[6]); // 801BB960
  W32(c->r[3]+0x00000054u,c->r[6]); // 801BB964
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 801BB968
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 801BB96C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801BB970
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801BB974
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801BB978
  W32(c->r[3]+0x0000006Cu,c->r[6]); // 801BB97C
  W32(c->r[3]+0x00000070u,c->r[6]); // 801BB980
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801BB984
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801BB988
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 801BB98C
  W32(c->r[3]+0x00000080u,c->r[6]); // 801BB990
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 801BB994
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 801BB998
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 801BB99C
  W32(c->r[3]+0x000000A8u,c->r[6]); // 801BB9A0
  W32(c->r[3]+0x000000ACu,c->r[6]); // 801BB9A4
  W32(c->r[3]+0x000000F0u,c->r[6]); // 801BB9A8
  W32(c->r[3]+0x000000F4u,c->r[6]); // 801BB9AC
  W32(c->r[3]+0x000000F8u,c->r[6]); // 801BB9B0
  W32(c->r[3]+0x000000FCu,c->r[6]); // 801BB9B4
  W32(c->r[3]+0x00000100u,c->r[6]); // 801BB9B8
  W32(c->r[3]+0x00000104u,c->r[6]); // 801BB9BC
  W32(c->r[3]+0x00000108u,c->r[6]); // 801BB9C0
  W32(c->r[3]+0x0000010Cu,c->r[6]); // 801BB9C4
  if (crb(c,1)) { goto L_801BB9D0; } // 801BB9C8
  c->r[4]=0u+0x00000001u; // 801BB9CC
L_801BB9D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BB9D0
  if (!crb(c,2)) { goto L_801BBA00; } // 801BB9D4
  c->r[3]=0u+0x803A0000u; // 801BB9D8
  c->r[5]=0u+0x803A0000u; // 801BB9DC
  c->r[6]=c->r[30]|c->r[30]; // 801BB9E0
  c->r[4]=0u+0x00000033u; // 801BB9E4
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BB9E8
  c->r[5]=c->r[5]+0xFFFFC67Cu; // 801BB9EC
  c->r[7]=0u+0x00000000u; // 801BB9F0
  c->r[8]=0u+0x0000007Fu; // 801BB9F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BB9F8
  c->lr=0x801BBA00u; f_80212260(c); // 801BB9FC
L_801BBA00:;
  c->r[4]=0u+0x00000000u; // 801BBA00
  c->r[0]=0u+0x00000001u; // 801BBA04
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801BBA08
  c->r[3]=c->r[29]|c->r[29]; // 801BBA0C
  W32(c->r[29]+0x00000020u,c->r[4]); // 801BBA10
  W32(c->r[29]+0x00000024u,c->r[4]); // 801BBA14
  W32(c->r[29]+0x00000028u,c->r[4]); // 801BBA18
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 801BBA1C
  W8(c->r[29]+0x00000099u,c->r[0]); // 801BBA20
  W8(c->r[29]+0x00000098u,c->r[30]); // 801BBA24
  W32(c->r[29]+0x00000050u,c->r[31]); // 801BBA28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BBA2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BBA30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BBA34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBA38
  c->lr=c->r[0]; // 801BBA3C
  c->r[1]=c->r[1]+0x00000020u; // 801BBA40
  return; // 801BBA44
}

// fn_801BBA50
void f_801BBA50(Ctx* __restrict c) {
  trace_call(0x801BBA50u);
  c->r[0]=0u+0x00000000u; // 801BBA50
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBA54
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BBA58
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[0]); // 801BBA5C
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBA60
  W32(c->r[3]+0x00000088u,c->r[0]); // 801BBA64
  W8(c->r[3]+0x0000008Cu,c->r[0]); // 801BBA68
  W8(c->r[3]+0x00000084u,c->r[0]); // 801BBA6C
  W8(c->r[3]+0x00000085u,c->r[0]); // 801BBA70
  W8(c->r[3]+0x00000086u,c->r[0]); // 801BBA74
  W8(c->r[3]+0x00000087u,c->r[0]); // 801BBA78
  W32(c->r[3]+0x00000090u,c->r[0]); // 801BBA7C
  W32(c->r[3]+0x00000094u,c->r[0]); // 801BBA80
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[4]);} // 801BBA84
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[4]);} // 801BBA88
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801BBA8C
  W32(c->r[3]+0x00000070u,c->r[0]); // 801BBA90
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 801BBA94
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801BBA98
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 801BBA9C
  W32(c->r[3]+0x00000080u,c->r[0]); // 801BBAA0
  if (crb(c,0)) { goto L_801BBAAC; } // 801BBAA4
  goto L_801BBAE8; // 801BBAA8
L_801BBAAC:;
  c->r[4]=c->r[0]^0x80000000u; // 801BBAAC
  c->r[0]=0u+0x43300000u; // 801BBAB0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801BBAB4
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[4]); // 801BBAB8
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[3]=RF64(ea);} // 801BBABC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BBAC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBAC4
  W32(c->r[1]+0x00000014u,c->r[4]); // 801BBAC8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801BBACC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801BBAD0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BBAD4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801BBAD8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801BBADC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BBAE0
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 801BBAE4
L_801BBAE8:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 801BBAE8
  c->r[0]=0u+0x00000000u; // 801BBAEC
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBAF0
  c->r[4]=0u+0x00000001u; // 801BBAF4
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBAF8
  cmps(c,0,(int32_t)c->r[5],0); // 801BBAFC
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[4]);} // 801BBB00
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 801BBB04
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 801BBB08
  W32(c->r[3]+0x00000070u,c->r[0]); // 801BBB0C
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[1]);} // 801BBB10
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 801BBB14
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 801BBB18
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 801BBB1C
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 801BBB20
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[1]);} // 801BBB24
  W32(c->r[3]+0x000000A8u,c->r[0]); // 801BBB28
  W32(c->r[3]+0x000000ACu,c->r[0]); // 801BBB2C
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 801BBB30
  W8(c->r[3]+0x0000009Au,c->r[0]); // 801BBB34
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 801BBB38
  if (crb(c,2)) { goto L_801BBB44; } // 801BBB3C
  c->r[4]=R32(c->r[5]+0x00000034u); // 801BBB40
L_801BBB44:;
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBB44
  c->r[0]=0u+0x00000000u; // 801BBB48
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBB4C
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801BBB50
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 801BBB54
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 801BBB58
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 801BBB5C
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 801BBB60
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 801BBB64
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[1]);} // 801BBB68
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 801BBB6C
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 801BBB70
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[1]);} // 801BBB74
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801BBB78
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801BBB7C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801BBB80
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BBB84
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801BBB88
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801BBB8C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801BBB90
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801BBB94
  W32(c->r[3]+0x00000050u,c->r[0]); // 801BBB98
  c->r[1]=c->r[1]+0x00000020u; // 801BBB9C
  return; // 801BBBA0
}

// fn_801BBBB0
void f_801BBBB0(Ctx* __restrict c) {
  trace_call(0x801BBBB0u);
  c->r[0]=R8(c->r[3]+0x00000085u); // 801BBBB0
  cmps(c,0,(int32_t)c->r[0],0); // 801BBBB4
  if (!crb(c,2)) return; // 801BBBB8
  c->r[0]=0u+0x00000001u; // 801BBBBC
  W8(c->r[3]+0x00000084u,c->r[0]); // 801BBBC0
  return; // 801BBBC4
}

// fn_801BBBD0
void f_801BBBD0(Ctx* __restrict c) {
  trace_call(0x801BBBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBBD0
  c->r[0]=c->lr; // 801BBBD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BBBD8
  c->r[0]=0u+0x43300000u; // 801BBBDC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BBBE0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BBBE4
  c->r[30]=c->r[4]|c->r[4]; // 801BBBE8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801BBBEC
  c->r[29]=c->r[3]|c->r[3]; // 801BBBF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BBBF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BBBF8
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BBBFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801BBC00
  c->ctr=c->r[12]; // 801BBC04
  if (true) { c->lr=0x801BBC0Cu; dispatch(c,c->ctr); } // 801BBC08
  cmps(c,0,(int32_t)c->r[30],0); // 801BBC0C
  c->r[31]=c->r[3]|c->r[3]; // 801BBC10
  if (crb(c,2)) { goto L_801BBC68; } // 801BBC14
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BBC18
  c->r[12]=R32(c->r[12]+0x00000018u); // 801BBC1C
  c->ctr=c->r[12]; // 801BBC20
  if (true) { c->lr=0x801BBC28u; dispatch(c,c->ctr); } // 801BBC24
  cmps(c,0,(int32_t)c->r[3],0); // 801BBC28
  if (crb(c,2)) { goto L_801BBC68; } // 801BBC2C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BBC30
  c->r[3]=c->r[31]|c->r[31]; // 801BBC34
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801BBC38
  c->ctr=c->r[12]; // 801BBC3C
  if (true) { c->lr=0x801BBC44u; dispatch(c,c->ctr); } // 801BBC40
  cmps(c,0,(int32_t)c->r[3],0); // 801BBC44
  if (crb(c,2)) { goto L_801BBC68; } // 801BBC48
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BBC4C
  c->r[3]=c->r[31]|c->r[31]; // 801BBC50
  c->r[12]=R32(c->r[12]+0x00000020u); // 801BBC54
  c->ctr=c->r[12]; // 801BBC58
  if (true) { c->lr=0x801BBC60u; dispatch(c,c->ctr); } // 801BBC5C
  cmps(c,0,(int32_t)c->r[3],0); // 801BBC60
  if (crb(c,2)) { goto L_801BBC80; } // 801BBC64
L_801BBC68:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BBC68
  c->r[3]=c->r[29]|c->r[29]; // 801BBC6C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BBC70
  c->ctr=c->r[12]; // 801BBC74
  if (true) { c->lr=0x801BBC7Cu; dispatch(c,c->ctr); } // 801BBC78
  goto L_801BBD9C; // 801BBC7C
L_801BBC80:;
  c->r[4]=R32(c->r[29]+0x0000006Cu); // 801BBC80
  c->r[3]=R32(c->r[29]+0x00000070u); // 801BBC84
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801BBC88
  if (crb(c,0)) { goto L_801BBC98; } // 801BBC8C
  {uint32_t ea=c->r[29]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBC90
  goto L_801BBCD4; // 801BBC94
L_801BBC98:;
  c->r[0]=c->r[3]^0x80000000u; // 801BBC98
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBC9C
  c->r[0]=c->r[4]^0x80000000u; // 801BBCA0
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BBCA4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBCA8
  {uint32_t ea=c->r[29]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBCAC
  {uint32_t ea=c->r[29]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBCB0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BBCB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBCB8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BBCBC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BBCC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BBCC4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BBCC8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BBCCC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801BBCD0
L_801BBCD4:;
  c->r[0]=c->r[30]^0x80000000u; // 801BBCD4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBCD8
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BBCDC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801BBCE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBCE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BBCE8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BBCEC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BBCF0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801BBCF4
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801BBCF8
  if (crb(c,0)) { goto L_801BBD08; } // 801BBCFC
  {uint32_t ea=c->r[29]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBD00
  goto L_801BBD40; // 801BBD04
L_801BBD08:;
  c->r[0]=c->r[3]^0x80000000u; // 801BBD08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBD0C
  c->r[0]=c->r[4]^0x80000000u; // 801BBD10
  {uint32_t ea=c->r[29]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBD14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801BBD18
  {uint32_t ea=c->r[29]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBD1C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801BBD20
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBD24
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801BBD28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBD2C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BBD30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BBD34
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BBD38
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801BBD3C
L_801BBD40:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801BBD40
  c->r[0]=0u+0x00000000u; // 801BBD44
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBD48
  cmps(c,0,(int32_t)c->r[3],0); // 801BBD4C
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 801BBD50
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 801BBD54
  W32(c->r[29]+0x0000006Cu,c->r[5]); // 801BBD58
  W32(c->r[29]+0x00000070u,c->r[0]); // 801BBD5C
  W8(c->r[29]+0x00000098u,c->r[0]); // 801BBD60
  if (crb(c,2)) { goto L_801BBD70; } // 801BBD64
  c->r[4]=c->r[29]|c->r[29]; // 801BBD68
  c->lr=0x801BBD70u; f_801D63B0(c); // 801BBD6C
L_801BBD70:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BBD70
  c->r[3]=c->r[29]|c->r[29]; // 801BBD74
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801BBD78
  c->ctr=c->r[12]; // 801BBD7C
  if (true) { c->lr=0x801BBD84u; dispatch(c,c->ctr); } // 801BBD80
  c->r[3]=0u+0x00000000u; // 801BBD84
  c->r[0]=0u+0x00000001u; // 801BBD88
  W8(c->r[29]+0x00000086u,c->r[3]); // 801BBD8C
  W32(c->r[29]+0x00000088u,c->r[3]); // 801BBD90
  W8(c->r[29]+0x0000008Cu,c->r[3]); // 801BBD94
  W8(c->r[29]+0x00000087u,c->r[0]); // 801BBD98
L_801BBD9C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BBD9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BBDA0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BBDA4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801BBDA8
  c->lr=c->r[0]; // 801BBDAC
  c->r[1]=c->r[1]+0x00000030u; // 801BBDB0
  return; // 801BBDB4
}

// fn_801BBDC0
void f_801BBDC0(Ctx* __restrict c) {
  trace_call(0x801BBDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBDC0
  c->r[0]=c->lr; // 801BBDC4
  cmps(c,0,(int32_t)c->r[4],0); // 801BBDC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BBDCC
  c->r[0]=0u+0x43300000u; // 801BBDD0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BBDD4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801BBDD8
  if (crb(c,2)) { goto L_801BBF1C; } // 801BBDDC
  c->r[6]=R32(c->r[3]+0x00000088u); // 801BBDE0
  cmpu(c,0,c->r[6],0x00000001u); // 801BBDE4
  if (!crb(c,1)) { goto L_801BBE00; } // 801BBDE8
  cmps(c,0,(int32_t)c->r[6],3); // 801BBDEC
  if (crb(c,2)) { goto L_801BBE00; } // 801BBDF0
  cmps(c,0,(int32_t)c->r[6],2); // 801BBDF4
  if (crb(c,2)) { goto L_801BC058; } // 801BBDF8
  goto L_801BBEFC; // 801BBDFC
L_801BBE00:;
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 801BBE00
  c->r[4]=R32(c->r[3]+0x00000080u); // 801BBE04
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801BBE08
  if (crb(c,0)) { goto L_801BBE18; } // 801BBE0C
  {uint32_t ea=c->r[3]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBE10
  goto L_801BBE54; // 801BBE14
L_801BBE18:;
  c->r[0]=c->r[4]^0x80000000u; // 801BBE18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBE1C
  c->r[0]=c->r[6]^0x80000000u; // 801BBE20
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BBE24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBE28
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBE2C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBE30
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BBE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBE38
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BBE3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BBE40
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BBE44
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BBE48
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BBE4C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801BBE50
L_801BBE54:;
  c->r[0]=c->r[5]^0x80000000u; // 801BBE54
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBE58
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[1]=RF64(ea);} // 801BBE5C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBE60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BBE64
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801BBE68
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BBE6C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801BBE70
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 801BBE74
  cmps(c,0,(int32_t)c->r[5],0); // 801BBE78
  if (crb(c,1)) { goto L_801BBE84; } // 801BBE7C
  c->r[5]=0u+0x00000001u; // 801BBE80
L_801BBE84:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801BBE84
  if (crb(c,0)) { goto L_801BBE94; } // 801BBE88
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBE8C
  goto L_801BBED0; // 801BBE90
L_801BBE94:;
  c->r[0]=c->r[4]^0x80000000u; // 801BBE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBE98
  c->r[0]=c->r[6]^0x80000000u; // 801BBE9C
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BBEA0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BBEA4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBEA8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBEAC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BBEB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBEB4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BBEB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBEBC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BBEC0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BBEC4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BBEC8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801BBECC
L_801BBED0:;
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBED0
  c->r[4]=0u+0x00000000u; // 801BBED4
  c->r[0]=0u+0x00000001u; // 801BBED8
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 801BBEDC
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801BBEE0
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 801BBEE4
  W32(c->r[3]+0x00000080u,c->r[4]); // 801BBEE8
  W32(c->r[3]+0x00000088u,c->r[0]); // 801BBEEC
  W8(c->r[3]+0x0000008Cu,c->r[4]); // 801BBEF0
  goto L_801BC058; // 801BBEF4
  goto L_801BC058; // 801BBEF8
L_801BBEFC:;
  c->r[3]=0u+0x803A0000u; // 801BBEFC
  c->r[5]=0u+0x803A0000u; // 801BBF00
  c->r[4]=0u+0x000000C9u; // 801BBF04
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BBF08
  c->r[5]=c->r[5]+0xFFFFC6C0u; // 801BBF0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BBF10
  c->lr=0x801BBF18u; f_80212260(c); // 801BBF14
  goto L_801BC058; // 801BBF18
L_801BBF1C:;
  c->r[6]=R32(c->r[3]+0x00000088u); // 801BBF1C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801BBF20
  cmpu(c,0,c->r[0],0x00000002u); // 801BBF24
  if (!crb(c,1)) { goto L_801BBF38; } // 801BBF28
  cmps(c,0,(int32_t)c->r[6],0); // 801BBF2C
  if (!crb(c,2)) { goto L_801BC03C; } // 801BBF30
  goto L_801BC058; // 801BBF34
L_801BBF38:;
  c->r[6]=R32(c->r[3]+0x0000007Cu); // 801BBF38
  c->r[4]=R32(c->r[3]+0x00000080u); // 801BBF3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801BBF40
  if (crb(c,0)) { goto L_801BBF50; } // 801BBF44
  {uint32_t ea=c->r[3]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BBF48
  goto L_801BBF8C; // 801BBF4C
L_801BBF50:;
  c->r[0]=c->r[4]^0x80000000u; // 801BBF50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBF54
  c->r[0]=c->r[6]^0x80000000u; // 801BBF58
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BBF5C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BBF60
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBF64
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBF68
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BBF6C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBF70
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BBF74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBF78
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BBF7C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BBF80
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BBF84
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[0]); // 801BBF88
L_801BBF8C:;
  c->r[0]=c->r[5]^0x80000000u; // 801BBF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBF90
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BBF94
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[2]=RF64(ea);} // 801BBF98
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801BBF9C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 801BBFA0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BBFA4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BBFA8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BBFAC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801BBFB0
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 801BBFB4
  cmps(c,0,(int32_t)c->r[7],0); // 801BBFB8
  if (crb(c,1)) { goto L_801BBFC4; } // 801BBFBC
  c->r[7]=0u+0x00000001u; // 801BBFC0
L_801BBFC4:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801BBFC4
  if (crb(c,0)) { goto L_801BBFD4; } // 801BBFC8
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBFCC
  goto L_801BC010; // 801BBFD0
L_801BBFD4:;
  c->r[0]=c->r[4]^0x80000000u; // 801BBFD4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBFD8
  c->r[0]=c->r[6]^0x80000000u; // 801BBFDC
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BBFE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BBFE4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BBFE8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BBFEC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BBFF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBFF4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BBFF8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BBFFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BC000
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BC004
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BC008
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801BC00C
L_801BC010:;
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC010
  c->r[5]=0u+0x00000000u; // 801BC014
  c->r[4]=0u+0x00000003u; // 801BC018
  c->r[0]=0u+0x00000001u; // 801BC01C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 801BC020
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801BC024
  W32(c->r[3]+0x0000007Cu,c->r[7]); // 801BC028
  W32(c->r[3]+0x00000080u,c->r[5]); // 801BC02C
  W32(c->r[3]+0x00000088u,c->r[4]); // 801BC030
  W8(c->r[3]+0x0000008Cu,c->r[0]); // 801BC034
  goto L_801BC058; // 801BC038
L_801BC03C:;
  c->r[3]=0u+0x803A0000u; // 801BC03C
  c->r[5]=0u+0x803A0000u; // 801BC040
  c->r[4]=0u+0x000000DDu; // 801BC044
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BC048
  c->r[5]=c->r[5]+0xFFFFC6C0u; // 801BC04C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BC050
  c->lr=0x801BC058u; f_80212260(c); // 801BC054
L_801BC058:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC058
  c->lr=c->r[0]; // 801BC05C
  c->r[1]=c->r[1]+0x00000020u; // 801BC060
  return; // 801BC064
}

// fn_801BC070
void f_801BC070(Ctx* __restrict c) {
  trace_call(0x801BC070u);
  c->r[0]=0u-c->r[4]; // 801BC070
  W32(c->r[3]+0x00000090u,c->r[4]); // 801BC074
  c->r[0]=c->r[0]&~c->r[4]; // 801BC078
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801BC07C
  W8(c->r[3]+0x00000086u,c->r[0]); // 801BC080
  return; // 801BC084
}

// fn_801BC090
void f_801BC090(Ctx* __restrict c) {
  trace_call(0x801BC090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC090
  c->r[5]=0u+0x43300000u; // 801BC094
  c->r[0]=R8(c->r[3]+0x00000087u); // 801BC098
  W32(c->r[1]+0x00000008u,c->r[5]); // 801BC09C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC0A0
  W32(c->r[1]+0x00000010u,c->r[5]); // 801BC0A4
  if (!crb(c,2)) { goto L_801BC18C; } // 801BC0A8
  c->r[6]=R32(c->r[3]+0x0000006Cu); // 801BC0AC
  c->r[5]=R32(c->r[3]+0x00000070u); // 801BC0B0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801BC0B4
  if (crb(c,0)) { goto L_801BC0C4; } // 801BC0B8
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC0BC
  goto L_801BC100; // 801BC0C0
L_801BC0C4:;
  c->r[0]=c->r[5]^0x80000000u; // 801BC0C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BC0C8
  c->r[0]=c->r[6]^0x80000000u; // 801BC0CC
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BC0D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BC0D4
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC0D8
  {uint32_t ea=c->r[3]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC0DC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BC0E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC0E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BC0E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BC0EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BC0F0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BC0F4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BC0F8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801BC0FC
L_801BC100:;
  c->r[0]=c->r[4]^0x80000000u; // 801BC100
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BC104
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC108
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801BC10C
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BC110
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801BC114
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BC118
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 801BC11C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BC120
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BC124
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801BC128
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801BC12C
  if (crb(c,0)) { goto L_801BC13C; } // 801BC130
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC134
  goto L_801BC174; // 801BC138
L_801BC13C:;
  c->r[0]=c->r[5]^0x80000000u; // 801BC13C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC140
  c->r[0]=c->r[6]^0x80000000u; // 801BC144
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC148
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801BC14C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC150
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801BC154
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BC158
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801BC15C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BC160
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BC164
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BC168
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BC16C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 801BC170
L_801BC174:;
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC174
  c->r[0]=0u+0x00000000u; // 801BC178
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 801BC17C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801BC180
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 801BC184
  W32(c->r[3]+0x00000070u,c->r[0]); // 801BC188
L_801BC18C:;
  c->r[1]=c->r[1]+0x00000020u; // 801BC18C
  return; // 801BC190
}

// fn_801BC1A0
void f_801BC1A0(Ctx* __restrict c) {
  trace_call(0x801BC1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC1A0
  c->r[0]=c->lr; // 801BC1A4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801BC1A8
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801BC1AC
  W32(c->r[1]+0x00000098u,c->r[30]); // 801BC1B0
  W32(c->r[1]+0x00000094u,c->r[29]); // 801BC1B4
  c->r[29]=c->r[3]|c->r[3]; // 801BC1B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BC1BC
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BC1C0
  c->ctr=c->r[12]; // 801BC1C4
  if (true) { c->lr=0x801BC1CCu; dispatch(c,c->ctr); } // 801BC1C8
  c->r[0]=R8(c->r[29]+0x00000086u); // 801BC1CC
  c->r[31]=c->r[3]|c->r[3]; // 801BC1D0
  cmps(c,0,(int32_t)c->r[0],0); // 801BC1D4
  if (crb(c,2)) { goto L_801BC248; } // 801BC1D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BC1DC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801BC1E0
  c->ctr=c->r[12]; // 801BC1E4
  if (true) { c->lr=0x801BC1ECu; dispatch(c,c->ctr); } // 801BC1E8
  cmps(c,0,(int32_t)c->r[3],0); // 801BC1EC
  if (crb(c,2)) { goto L_801BC248; } // 801BC1F0
  c->r[3]=R32(c->r[29]+0x00000090u); // 801BC1F4
  cmps(c,0,(int32_t)c->r[3],0); // 801BC1F8
  if (!crb(c,2)) { goto L_801BC240; } // 801BC1FC
  c->r[0]=R32(c->r[29]+0x00000088u); // 801BC200
  cmps(c,0,(int32_t)c->r[0],0); // 801BC204
  if (crb(c,2)) { goto L_801BC214; } // 801BC208
  cmps(c,0,(int32_t)c->r[0],3); // 801BC20C
  if (!crb(c,2)) { goto L_801BC248; } // 801BC210
L_801BC214:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC214
  c->r[3]=c->r[29]|c->r[29]; // 801BC218
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BC21C
  c->ctr=c->r[12]; // 801BC220
  if (true) { c->lr=0x801BC228u; dispatch(c,c->ctr); } // 801BC224
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC228
  c->r[3]=c->r[29]|c->r[29]; // 801BC22C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BC230
  c->ctr=c->r[12]; // 801BC234
  if (true) { c->lr=0x801BC23Cu; dispatch(c,c->ctr); } // 801BC238
  goto L_801BC708; // 801BC23C
L_801BC240:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801BC240
  W32(c->r[29]+0x00000090u,c->r[0]); // 801BC244
L_801BC248:;
  c->r[0]=R8(c->r[29]+0x00000085u); // 801BC248
  c->r[30]=0u+0x00000000u; // 801BC24C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC250
  if (!crb(c,2)) { goto L_801BC284; } // 801BC254
  c->r[0]=R8(c->r[29]+0x00000084u); // 801BC258
  cmps(c,0,(int32_t)c->r[0],0); // 801BC25C
  if (crb(c,2)) { goto L_801BC708; } // 801BC260
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC264
  c->r[3]=c->r[29]|c->r[29]; // 801BC268
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BC26C
  c->ctr=c->r[12]; // 801BC270
  if (true) { c->lr=0x801BC278u; dispatch(c,c->ctr); } // 801BC274
  cmps(c,0,(int32_t)c->r[3],0); // 801BC278
  if (crb(c,2)) { goto L_801BC708; } // 801BC27C
  c->r[30]=0u+0x00000001u; // 801BC280
L_801BC284:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BC284
  c->r[3]=c->r[31]|c->r[31]; // 801BC288
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801BC28C
  c->ctr=c->r[12]; // 801BC290
  if (true) { c->lr=0x801BC298u; dispatch(c,c->ctr); } // 801BC294
  cmps(c,0,(int32_t)c->r[3],0); // 801BC298
  if (crb(c,2)) { goto L_801BC2B8; } // 801BC29C
  c->r[3]=R32(c->r[29]+0x00000094u); // 801BC2A0
  c->r[0]=0u+0xFFFFFFFFu; // 801BC2A4
  cmpu(c,0,c->r[3],c->r[0]); // 801BC2A8
  if (!crb(c,0)) { goto L_801BC2B8; } // 801BC2AC
  c->r[0]=c->r[3]+0x00000001u; // 801BC2B0
  W32(c->r[29]+0x00000094u,c->r[0]); // 801BC2B4
L_801BC2B8:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BC2B8
  c->r[3]=c->r[31]|c->r[31]; // 801BC2BC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801BC2C0
  c->ctr=c->r[12]; // 801BC2C4
  if (true) { c->lr=0x801BC2CCu; dispatch(c,c->ctr); } // 801BC2C8
  cmps(c,0,(int32_t)c->r[3],0); // 801BC2CC
  if (!crb(c,2)) { goto L_801BC2EC; } // 801BC2D0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC2D4
  c->r[3]=c->r[29]|c->r[29]; // 801BC2D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BC2DC
  c->ctr=c->r[12]; // 801BC2E0
  if (true) { c->lr=0x801BC2E8u; dispatch(c,c->ctr); } // 801BC2E4
  goto L_801BC708; // 801BC2E8
L_801BC2EC:;
  c->r[0]=R32(c->r[29]+0x00000088u); // 801BC2EC
  cmps(c,0,(int32_t)c->r[0],1); // 801BC2F0
  if (crb(c,2)) { goto L_801BC30C; } // 801BC2F4
  cmps(c,0,(int32_t)c->r[0],3); // 801BC2F8
  if (crb(c,2)) { goto L_801BC328; } // 801BC2FC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC300
  if (crb(c,2)) { goto L_801BC358; } // 801BC304
  goto L_801BC36C; // 801BC308
L_801BC30C:;
  c->r[3]=R32(c->r[29]+0x00000080u); // 801BC30C
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801BC310
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BC314
  if (!crb(c,0)) { goto L_801BC36C; } // 801BC318
  c->r[0]=c->r[3]+0x00000001u; // 801BC31C
  W32(c->r[29]+0x00000080u,c->r[0]); // 801BC320
  goto L_801BC36C; // 801BC324
L_801BC328:;
  c->r[3]=R32(c->r[29]+0x00000080u); // 801BC328
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801BC32C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BC330
  if (!crb(c,0)) { goto L_801BC340; } // 801BC334
  c->r[0]=c->r[3]+0x00000001u; // 801BC338
  W32(c->r[29]+0x00000080u,c->r[0]); // 801BC33C
L_801BC340:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC340
  c->r[3]=c->r[29]|c->r[29]; // 801BC344
  c->r[12]=R32(c->r[12]+0x00000030u); // 801BC348
  c->ctr=c->r[12]; // 801BC34C
  if (true) { c->lr=0x801BC354u; dispatch(c,c->ctr); } // 801BC350
  goto L_801BC36C; // 801BC354
L_801BC358:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC358
  c->r[3]=c->r[29]|c->r[29]; // 801BC35C
  c->r[12]=R32(c->r[12]+0x00000030u); // 801BC360
  c->ctr=c->r[12]; // 801BC364
  if (true) { c->lr=0x801BC36Cu; dispatch(c,c->ctr); } // 801BC368
L_801BC36C:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 801BC36C
  cmps(c,0,(int32_t)c->r[3],0); // 801BC370
  if (crb(c,2)) { goto L_801BC390; } // 801BC374
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BC378
  c->r[5]=c->r[29]|c->r[29]; // 801BC37C
  c->r[4]=R32(c->r[29]+0x00000028u); // 801BC380
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BC384
  c->ctr=c->r[12]; // 801BC388
  if (true) { c->lr=0x801BC390u; dispatch(c,c->ctr); } // 801BC38C
L_801BC390:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801BC390
  cmps(c,0,(int32_t)c->r[0],0); // 801BC394
  if (crb(c,2)) { goto L_801BC5B8; } // 801BC398
  c->r[4]=c->r[1]+0x00000048u; // 801BC39C
  c->r[3]=c->r[1]+0x00000090u; // 801BC3A0
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC3A4
  cmpu(c,0,c->r[4],c->r[3]); // 801BC3A8
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC3AC
  c->r[0]=0u+0x00000000u; // 801BC3B0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801BC3B4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801BC3B8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801BC3BC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801BC3C0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801BC3C4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801BC3C8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801BC3CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC3D0
  W32(c->r[1]+0x00000028u,c->r[0]); // 801BC3D4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC3D8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801BC3DC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801BC3E0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801BC3E4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BC3E8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801BC3EC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801BC3F0
  if (!crb(c,0)) { goto L_801BC430; } // 801BC3F4
  c->r[3]=c->r[3]+0x00000017u; // 801BC3F8
  c->r[0]=0u+0x00000018u; // 801BC3FC
  c->r[3]=c->r[3]-c->r[4]; // 801BC400
  c->r[3]=divwu(c->r[3],c->r[0]); // 801BC404
  c->ctr=c->r[3]; // 801BC408
  if (!crb(c,0)) { goto L_801BC430; } // 801BC40C
L_801BC410:;
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 801BC410
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 801BC414
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801BC418
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BC41C
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 801BC420
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 801BC424
  c->r[4]=c->r[4]+0x00000018u; // 801BC428
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC410; } // 801BC42C
L_801BC430:;
  c->r[0]=R32(c->r[29]+0x00000094u); // 801BC430
  cmps(c,0,(int32_t)c->r[0],0); // 801BC434
  if (crb(c,2)) { goto L_801BC490; } // 801BC438
  {uint32_t ea=c->r[29]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC43C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801BC440
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC444
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801BC448
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC44C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801BC450
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC454
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801BC458
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC45C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801BC460
  {uint32_t ea=c->r[29]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC464
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801BC468
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC46C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801BC470
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 801BC474
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC478
  c->r[0]=R32(c->r[29]+0x00000050u); // 801BC47C
  W32(c->r[1]+0x00000028u,c->r[0]); // 801BC480
  c->r[0]=R32(c->r[29]+0x00000054u); // 801BC484
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC488
  goto L_801BC498; // 801BC48C
L_801BC490:;
  c->r[0]=0u+0x00000000u; // 801BC490
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC494
L_801BC498:;
  c->r[3]=c->r[31]+0x00000050u; // 801BC498
  c->r[4]=c->r[1]+0x00000008u; // 801BC49C
  c->r[5]=0u+0x00000000u; // 801BC4A0
  goto L_801BC4E4; // 801BC4A4
L_801BC4A8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC4A8
  c->r[5]=c->r[5]+0x00000001u; // 801BC4AC
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[0]);} // 801BC4B0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC4B4
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[0]);} // 801BC4B8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC4BC
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[0]);} // 801BC4C0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC4C4
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 801BC4C8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC4CC
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 801BC4D0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC4D4
  c->r[3]=c->r[3]+0x00000018u; // 801BC4D8
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BC4DC
  c->r[4]=c->r[4]+0x00000018u; // 801BC4E0
L_801BC4E4:;
  c->r[6]=R8(c->r[29]+0x00000099u); // 801BC4E4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801BC4E8
  if (crb(c,0)) { IRQCHK(c); goto L_801BC4A8; } // 801BC4EC
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801BC4F0
  c->r[7]=c->r[1]+0x00000008u; // 801BC4F4
  c->r[4]=R32(c->r[29]+0x00000028u); // 801BC4F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BC4FC
  c->r[5]=R32(c->r[29]+0x0000009Cu); // 801BC500
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BC504
  c->ctr=c->r[12]; // 801BC508
  if (true) { c->lr=0x801BC510u; dispatch(c,c->ctr); } // 801BC50C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC510
  c->r[4]=c->r[31]|c->r[31]; // 801BC514
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 801BC518
  c->r[3]=c->r[1]+0x00000008u; // 801BC51C
  c->r[5]=0u+0x00000000u; // 801BC520
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC524
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 801BC528
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC52C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 801BC530
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC534
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 801BC538
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC53C
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 801BC540
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC544
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 801BC548
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC54C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 801BC550
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC554
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 801BC558
  c->r[0]=R32(c->r[1]+0x00000028u); // 801BC55C
  W32(c->r[29]+0x00000050u,c->r[0]); // 801BC560
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801BC564
  W32(c->r[29]+0x00000054u,c->r[0]); // 801BC568
  goto L_801BC5AC; // 801BC56C
L_801BC570:;
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC570
  c->r[5]=c->r[5]+0x00000001u; // 801BC574
  {uint32_t ea=c->r[4]+0x00000050u; WF32(ea,c->f[0]);} // 801BC578
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC57C
  {uint32_t ea=c->r[4]+0x00000054u; WF32(ea,c->f[0]);} // 801BC580
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC584
  {uint32_t ea=c->r[4]+0x00000058u; WF32(ea,c->f[0]);} // 801BC588
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC58C
  {uint32_t ea=c->r[4]+0x0000005Cu; WF32(ea,c->f[0]);} // 801BC590
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC594
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[0]);} // 801BC598
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC59C
  c->r[3]=c->r[3]+0x00000018u; // 801BC5A0
  {uint32_t ea=c->r[4]+0x00000064u; WF32(ea,c->f[0]);} // 801BC5A4
  c->r[4]=c->r[4]+0x00000018u; // 801BC5A8
L_801BC5AC:;
  c->r[0]=R8(c->r[29]+0x00000099u); // 801BC5AC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801BC5B0
  if (crb(c,0)) { IRQCHK(c); goto L_801BC570; } // 801BC5B4
L_801BC5B8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801BC5B8
  cmps(c,0,(int32_t)c->r[3],0); // 801BC5BC
  if (crb(c,2)) { goto L_801BC5DC; } // 801BC5C0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC5C4
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 801BC5C8
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC5CC
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 801BC5D0
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC5D4
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[0]);} // 801BC5D8
L_801BC5DC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC5DC
  c->r[3]=c->r[29]|c->r[29]; // 801BC5E0
  c->r[12]=R32(c->r[12]+0x00000034u); // 801BC5E4
  c->ctr=c->r[12]; // 801BC5E8
  if (true) { c->lr=0x801BC5F0u; dispatch(c,c->ctr); } // 801BC5EC
  c->r[0]=R8(c->r[29]+0x00000087u); // 801BC5F0
  cmps(c,0,(int32_t)c->r[0],0); // 801BC5F4
  if (crb(c,2)) { goto L_801BC62C; } // 801BC5F8
  c->r[3]=R32(c->r[29]+0x00000070u); // 801BC5FC
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 801BC600
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BC604
  if (crb(c,0)) { goto L_801BC62C; } // 801BC608
  c->r[0]=0u+0x00000000u; // 801BC60C
  W8(c->r[29]+0x00000087u,c->r[0]); // 801BC610
  c->r[3]=c->r[29]|c->r[29]; // 801BC614
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC618
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BC61C
  c->ctr=c->r[12]; // 801BC620
  if (true) { c->lr=0x801BC628u; dispatch(c,c->ctr); } // 801BC624
  goto L_801BC708; // 801BC628
L_801BC62C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BC62C
  if (crb(c,2)) { goto L_801BC67C; } // 801BC630
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BC634
  c->r[3]=c->r[31]|c->r[31]; // 801BC638
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BC63C
  c->ctr=c->r[12]; // 801BC640
  if (true) { c->lr=0x801BC648u; dispatch(c,c->ctr); } // 801BC644
  cmps(c,0,(int32_t)c->r[3],0); // 801BC648
  if (crb(c,2)) { goto L_801BC664; } // 801BC64C
  c->r[3]=0u+0x00000001u; // 801BC650
  c->r[0]=0u+0x00000000u; // 801BC654
  W8(c->r[29]+0x00000085u,c->r[3]); // 801BC658
  W8(c->r[29]+0x00000084u,c->r[0]); // 801BC65C
  goto L_801BC67C; // 801BC660
L_801BC664:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801BC664
  c->r[3]=c->r[29]|c->r[29]; // 801BC668
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BC66C
  c->ctr=c->r[12]; // 801BC670
  if (true) { c->lr=0x801BC678u; dispatch(c,c->ctr); } // 801BC674
  goto L_801BC708; // 801BC678
L_801BC67C:;
  c->r[0]=R32(c->r[29]+0x00000088u); // 801BC67C
  cmps(c,0,(int32_t)c->r[0],1); // 801BC680
  if (!crb(c,2)) { goto L_801BC6BC; } // 801BC684
  c->r[3]=R32(c->r[29]+0x00000080u); // 801BC688
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801BC68C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BC690
  if (crb(c,0)) { goto L_801BC6DC; } // 801BC694
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BC698
  c->r[3]=c->r[31]|c->r[31]; // 801BC69C
  c->r[4]=0u+0x00000001u; // 801BC6A0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BC6A4
  c->ctr=c->r[12]; // 801BC6A8
  if (true) { c->lr=0x801BC6B0u; dispatch(c,c->ctr); } // 801BC6AC
  c->r[0]=0u+0x00000002u; // 801BC6B0
  W32(c->r[29]+0x00000088u,c->r[0]); // 801BC6B4
  goto L_801BC6DC; // 801BC6B8
L_801BC6BC:;
  cmps(c,0,(int32_t)c->r[0],3); // 801BC6BC
  if (!crb(c,2)) { goto L_801BC6DC; } // 801BC6C0
  c->r[3]=R32(c->r[29]+0x00000080u); // 801BC6C4
  c->r[0]=R32(c->r[29]+0x0000007Cu); // 801BC6C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801BC6CC
  if (crb(c,0)) { goto L_801BC6DC; } // 801BC6D0
  c->r[0]=0u+0x00000000u; // 801BC6D4
  W32(c->r[29]+0x00000088u,c->r[0]); // 801BC6D8
L_801BC6DC:;
  c->r[0]=R8(c->r[29]+0x0000008Cu); // 801BC6DC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC6E0
  if (crb(c,2)) { goto L_801BC708; } // 801BC6E4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BC6E8
  c->r[3]=c->r[31]|c->r[31]; // 801BC6EC
  c->r[4]=0u+0x00000000u; // 801BC6F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BC6F4
  c->ctr=c->r[12]; // 801BC6F8
  if (true) { c->lr=0x801BC700u; dispatch(c,c->ctr); } // 801BC6FC
  c->r[0]=0u+0x00000000u; // 801BC700
  W8(c->r[29]+0x0000008Cu,c->r[0]); // 801BC704
L_801BC708:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801BC708
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801BC70C
  c->r[30]=R32(c->r[1]+0x00000098u); // 801BC710
  c->r[29]=R32(c->r[1]+0x00000094u); // 801BC714
  c->lr=c->r[0]; // 801BC718
  c->r[1]=c->r[1]+0x000000A0u; // 801BC71C
  return; // 801BC720
}

// fn_801BC730
void f_801BC730(Ctx* __restrict c) {
  trace_call(0x801BC730u);
  c->r[4]=R32(c->r[3]+0x00000070u); // 801BC730
  c->r[0]=R32(c->r[3]+0x0000006Cu); // 801BC734
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BC738
  if (!crb(c,0)) { goto L_801BC748; } // 801BC73C
  c->r[0]=c->r[4]+0x00000001u; // 801BC740
  W32(c->r[3]+0x00000070u,c->r[0]); // 801BC744
L_801BC748:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 801BC748
  c->r[0]=R32(c->r[3]+0x000000A8u); // 801BC74C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BC750
  if (!crb(c,0)) return; // 801BC754
  c->r[0]=c->r[4]+0x00000001u; // 801BC758
  W32(c->r[3]+0x000000ACu,c->r[0]); // 801BC75C
  return; // 801BC760
}

