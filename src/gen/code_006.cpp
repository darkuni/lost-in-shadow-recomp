#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8007AD50
void f_8007AD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007AD50
  c->r[0]=c->lr; // 8007AD54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007AD58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007AD5C
  c->r[31]=c->r[4]|c->r[4]; // 8007AD60
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007AD64
  c->r[30]=c->r[3]|c->r[3]; // 8007AD68
  c->lr=0x8007AD70u; f_80077120(c); // 8007AD6C
  c->r[3]=R32(c->r[3]+0x00000034u); // 8007AD70
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)72); // 8007AD74
  c->r[3]=R32(c->r[3]+0x00000010u); // 8007AD78
  c->r[3]=c->r[3]+c->r[0]; // 8007AD7C
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 8007AD80
  cmps(c,0,(int32_t)c->r[31],-1); // 8007AD84
  if (!crb(c,2)) { goto L_8007AD94; } // 8007AD88
  c->r[3]=0u+0x00000000u; // 8007AD8C
  goto L_8007ADCC; // 8007AD90
L_8007AD94:;
  c->r[3]=c->r[30]|c->r[30]; // 8007AD94
  c->lr=0x8007AD9Cu; f_80077120(c); // 8007AD98
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007AD9C
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8007ADA0
  c->r[3]=c->r[3]+c->r[0]; // 8007ADA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 8007ADA8
  cmps(c,0,(int32_t)c->r[0],-1); // 8007ADAC
  if (!crb(c,2)) { goto L_8007ADBC; } // 8007ADB0
  c->r[3]=0u+0x00000000u; // 8007ADB4
  goto L_8007ADC8; // 8007ADB8
L_8007ADBC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8007ADBC
  c->r[3]=R32(c->r[3]+0x00000008u); // 8007ADC0
  c->r[3]=c->r[3]+c->r[0]; // 8007ADC4
L_8007ADC8:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007ADC8
L_8007ADCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007ADCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007ADD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007ADD4
  c->lr=c->r[0]; // 8007ADD8
  c->r[1]=c->r[1]+0x00000010u; // 8007ADDC
  return; // 8007ADE0
}

// fn_8007ADF0
void f_8007ADF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007ADF0
  c->r[0]=c->lr; // 8007ADF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007ADF8
  c->r[11]=c->r[1]+0x00000020u; // 8007ADFC
  c->lr=0x8007AE04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007AE00
  c->r[27]=c->r[3]|c->r[3]; // 8007AE04
  c->r[29]=c->r[4]|c->r[4]; // 8007AE08
  c->r[28]=c->r[5]|c->r[5]; // 8007AE0C
  c->lr=0x8007AE14u; f_80077120(c); // 8007AE10
  c->r[3]=R32(c->r[3]+0x00000034u); // 8007AE14
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)72); // 8007AE18
  c->r[31]=0u+0x00000000u; // 8007AE1C
  c->r[3]=R32(c->r[3]+0x00000010u); // 8007AE20
  c->r[30]=c->r[3]+c->r[0]; // 8007AE24
  goto L_8007AE70; // 8007AE28
L_8007AE2C:;
  cmps(c,0,(int32_t)c->r[29],-1); // 8007AE2C
  if (crb(c,2)) { goto L_8007AE6C; } // 8007AE30
  c->r[3]=c->r[27]|c->r[27]; // 8007AE34
  c->lr=0x8007AE3Cu; f_80077120(c); // 8007AE38
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007AE3C
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 8007AE40
  c->r[3]=c->r[3]+c->r[0]; // 8007AE44
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 8007AE48
  cmps(c,0,(int32_t)c->r[0],-1); // 8007AE4C
  if (!crb(c,2)) { goto L_8007AE5C; } // 8007AE50
  c->r[3]=0u+0x00000000u; // 8007AE54
  goto L_8007AE68; // 8007AE58
L_8007AE5C:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8007AE5C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8007AE60
  c->r[3]=c->r[3]+c->r[0]; // 8007AE64
L_8007AE68:;
  W32(c->r[3]+0x00000004u,c->r[28]); // 8007AE68
L_8007AE6C:;
  c->r[31]=c->r[31]+0x00000002u; // 8007AE6C
L_8007AE70:;
  c->r[3]=c->r[30]+c->r[31]; // 8007AE70
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 8007AE74
  cmps(c,0,(int32_t)c->r[29],-1); // 8007AE78
  if (!crb(c,2)) { IRQCHK(c); goto L_8007AE2C; } // 8007AE7C
  c->r[11]=c->r[1]+0x00000020u; // 8007AE80
  c->lr=0x8007AE88u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007AE84
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007AE88
  c->lr=c->r[0]; // 8007AE8C
  c->r[1]=c->r[1]+0x00000020u; // 8007AE90
  return; // 8007AE94
}

// fn_8007AEA0
void f_8007AEA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007AEA0
  c->r[0]=c->lr; // 8007AEA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007AEA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007AEAC
  c->r[31]=c->r[4]|c->r[4]; // 8007AEB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007AEB4
  c->r[30]=c->r[3]|c->r[3]; // 8007AEB8
  c->lr=0x8007AEC0u; f_80077120(c); // 8007AEBC
  c->r[3]=R32(c->r[3]+0x00000034u); // 8007AEC0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)72); // 8007AEC4
  c->r[3]=R32(c->r[3]+0x00000010u); // 8007AEC8
  c->r[3]=c->r[3]+c->r[0]; // 8007AECC
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 8007AED0
  cmps(c,0,(int32_t)c->r[31],-1); // 8007AED4
  if (!crb(c,2)) { goto L_8007AEE4; } // 8007AED8
  {uint32_t ea=c->r[2]+0xFFFF8BC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007AEDC
  goto L_8007AF1C; // 8007AEE0
L_8007AEE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8007AEE4
  c->lr=0x8007AEECu; f_80077120(c); // 8007AEE8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007AEEC
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8007AEF0
  c->r[3]=c->r[3]+c->r[0]; // 8007AEF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 8007AEF8
  cmps(c,0,(int32_t)c->r[0],-1); // 8007AEFC
  if (!crb(c,2)) { goto L_8007AF0C; } // 8007AF00
  c->r[3]=0u+0x00000000u; // 8007AF04
  goto L_8007AF18; // 8007AF08
L_8007AF0C:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8007AF0C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8007AF10
  c->r[3]=c->r[3]+c->r[0]; // 8007AF14
L_8007AF18:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007AF18
L_8007AF1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007AF1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007AF20
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007AF24
  c->lr=c->r[0]; // 8007AF28
  c->r[1]=c->r[1]+0x00000010u; // 8007AF2C
  return; // 8007AF30
}

// fn_8007AF40
void f_8007AF40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007AF40
  c->r[0]=c->lr; // 8007AF44
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007AF48
  c->r[11]=c->r[1]+0x00000020u; // 8007AF4C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8007AF50
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8007AF54
  c->lr=0x8007AF5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007AF58
  c->f[31]=c->f[1]; // 8007AF5C
  c->r[27]=c->r[3]|c->r[3]; // 8007AF60
  c->r[28]=c->r[4]|c->r[4]; // 8007AF64
  c->lr=0x8007AF6Cu; f_80077120(c); // 8007AF68
  c->r[3]=R32(c->r[3]+0x00000034u); // 8007AF6C
  c->r[30]=0u+0x803F0000u; // 8007AF70
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)72); // 8007AF74
  c->r[31]=0u+0x00000000u; // 8007AF78
  c->r[3]=R32(c->r[3]+0x00000010u); // 8007AF7C
  c->r[30]=c->r[30]+0xFFFFB218u; // 8007AF80
  c->r[29]=c->r[3]+c->r[0]; // 8007AF84
  goto L_8007AFD8; // 8007AF88
L_8007AF8C:;
  cmps(c,0,(int32_t)c->r[28],-1); // 8007AF8C
  if (crb(c,2)) { goto L_8007AFD4; } // 8007AF90
  c->r[3]=c->r[27]|c->r[27]; // 8007AF94
  c->lr=0x8007AF9Cu; f_80077120(c); // 8007AF98
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007AF9C
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 8007AFA0
  c->r[3]=c->r[3]+c->r[0]; // 8007AFA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 8007AFA8
  cmps(c,0,(int32_t)c->r[0],-1); // 8007AFAC
  if (!crb(c,2)) { goto L_8007AFBC; } // 8007AFB0
  c->r[3]=0u+0x00000000u; // 8007AFB4
  goto L_8007AFC8; // 8007AFB8
L_8007AFBC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8007AFBC
  c->r[3]=R32(c->r[3]+0x00000008u); // 8007AFC0
  c->r[3]=c->r[3]+c->r[0]; // 8007AFC4
L_8007AFC8:;
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007AFC8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8007AFCC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007AFD0
L_8007AFD4:;
  c->r[31]=c->r[31]+0x00000002u; // 8007AFD4
L_8007AFD8:;
  c->r[3]=c->r[29]+c->r[31]; // 8007AFD8
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 8007AFDC
  cmps(c,0,(int32_t)c->r[28],-1); // 8007AFE0
  if (!crb(c,2)) { IRQCHK(c); goto L_8007AF8C; } // 8007AFE4
  c->r[11]=c->r[1]+0x00000020u; // 8007AFE8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8007AFEC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8007AFF0
  c->lr=0x8007AFF8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007AFF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007AFF8
  c->lr=c->r[0]; // 8007AFFC
  c->r[1]=c->r[1]+0x00000030u; // 8007B000
  return; // 8007B004
}

// fn_8007B010
void f_8007B010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B010
  c->r[0]=c->lr; // 8007B014
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007B018
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007B01C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007B020
  c->r[30]=c->r[4]|c->r[4]; // 8007B024
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007B028
  c->r[29]=c->r[3]|c->r[3]; // 8007B02C
  c->lr=0x8007B034u; f_80077120(c); // 8007B030
  c->r[3]=R32(c->r[3]+0x00000034u); // 8007B034
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)72); // 8007B038
  c->r[3]=R32(c->r[3]+0x00000010u); // 8007B03C
  c->r[3]=c->r[3]+c->r[0]; // 8007B040
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000004u); // 8007B044
  cmps(c,0,(int32_t)c->r[31],-1); // 8007B048
  if (!crb(c,2)) { goto L_8007B058; } // 8007B04C
  c->r[3]=0u+0x00000000u; // 8007B050
  goto L_8007B164; // 8007B054
L_8007B058:;
  c->r[3]=c->r[29]|c->r[29]; // 8007B058
  c->lr=0x8007B060u; f_80077120(c); // 8007B05C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B060
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8007B064
  c->r[3]=c->r[3]+c->r[0]; // 8007B068
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 8007B06C
  cmps(c,0,(int32_t)c->r[0],-1); // 8007B070
  if (!crb(c,2)) { goto L_8007B080; } // 8007B074
  c->r[30]=0u+0x00000000u; // 8007B078
  goto L_8007B08C; // 8007B07C
L_8007B080:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8007B080
  c->r[3]=R32(c->r[3]+0x00000008u); // 8007B084
  c->r[30]=c->r[3]+c->r[0]; // 8007B088
L_8007B08C:;
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007B08C
  {uint32_t ea=c->r[2]+0xFFFF8BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B090
  fcmp(c,0,c->f[1],c->f[0]); // 8007B094
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8007B098
  if (!crb(c,2)) { goto L_8007B0B8; } // 8007B09C
  c->r[3]=R32(c->r[30]+0x00000014u); // 8007B0A0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B0A4
  fcmp(c,0,c->f[1],c->f[0]); // 8007B0A8
  c->r[3]=c->cr; // 8007B0AC
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 8007B0B0
  goto L_8007B164; // 8007B0B4
L_8007B0B8:;
  cmps(c,0,(int32_t)c->r[31],-1); // 8007B0B8
  if (!crb(c,2)) { goto L_8007B0C8; } // 8007B0BC
  c->r[0]=0u+0x00000000u; // 8007B0C0
  goto L_8007B100; // 8007B0C4
L_8007B0C8:;
  c->r[3]=c->r[29]|c->r[29]; // 8007B0C8
  c->lr=0x8007B0D0u; f_80077120(c); // 8007B0CC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B0D0
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8007B0D4
  c->r[3]=c->r[3]+c->r[0]; // 8007B0D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 8007B0DC
  cmps(c,0,(int32_t)c->r[0],-1); // 8007B0E0
  if (!crb(c,2)) { goto L_8007B0F0; } // 8007B0E4
  c->r[3]=0u+0x00000000u; // 8007B0E8
  goto L_8007B0FC; // 8007B0EC
L_8007B0F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8007B0F0
  c->r[3]=R32(c->r[3]+0x00000008u); // 8007B0F4
  c->r[3]=c->r[3]+c->r[0]; // 8007B0F8
L_8007B0FC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007B0FC
L_8007B100:;
  cmps(c,0,(int32_t)c->r[0],0); // 8007B100
  if (crb(c,2)) { goto L_8007B128; } // 8007B104
  c->r[3]=R32(c->r[30]+0x00000014u); // 8007B108
  {uint32_t ea=c->r[2]+0xFFFF8BC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B10C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007B110
  fcmp(c,0,c->f[1],c->f[0]); // 8007B114
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8007B118
  c->r[3]=c->cr; // 8007B11C
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 8007B120
  goto L_8007B164; // 8007B124
L_8007B128:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8007B128
  c->lr=0x8007B130u; f_802A42F0(c); // 8007B12C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 8007B130
  c->r[0]=0u+0x43300000u; // 8007B134
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8007B138
  {uint32_t ea=c->r[2]+0xFFFF8BD8u; c->f[1]=RF64(ea);} // 8007B13C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007B140
  c->r[3]=R32(c->r[30]+0x00000014u); // 8007B144
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8007B148
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007B14C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8007B150
  fcmp(c,0,c->f[2],c->f[0]); // 8007B154
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8007B158
  c->r[3]=c->cr; // 8007B15C
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 8007B160
L_8007B164:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007B164
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007B168
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007B16C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007B170
  c->lr=c->r[0]; // 8007B174
  c->r[1]=c->r[1]+0x00000020u; // 8007B178
  return; // 8007B17C
}

// fn_8007B180
void f_8007B180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B180
  c->r[0]=c->lr; // 8007B184
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007B188
  c->r[11]=c->r[1]+0x00000020u; // 8007B18C
  c->lr=0x8007B194u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007B190
  c->r[27]=c->r[4]|c->r[4]; // 8007B194
  c->r[28]=c->r[5]|c->r[5]; // 8007B198
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007B19C
  c->lr=0x8007B1A4u; f_80077120(c); // 8007B1A0
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8007B1A4
  c->r[3]=rotl(c->r[27],4)&0xFFFFFFF0u; // 8007B1A8
  c->r[0]=0u-c->r[28]; // 8007B1AC
  c->r[27]=0u+0x80360000u; // 8007B1B0
  c->r[3]=R32(c->r[4]+c->r[3]); // 8007B1B4
  c->r[29]=c->r[0]|c->r[28]; // 8007B1B8
  c->r[28]=0u+0x80360000u; // 8007B1BC
  c->r[31]=R32(c->r[3]+0x00000010u); // 8007B1C0
  c->r[30]=c->r[3]+0x00000010u; // 8007B1C4
  goto L_8007B200; // 8007B1C8
L_8007B1CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007B1CC
  if (!crb(c,2)) { goto L_8007B1E8; } // 8007B1D0
  c->r[3]=c->r[27]+0xFFFFF350u; // 8007B1D4
  c->r[5]=c->r[28]+0xFFFFF32Cu; // 8007B1D8
  c->r[4]=0u+0x0000023Du; // 8007B1DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B1E0
  c->lr=0x8007B1E8u; f_80212260(c); // 8007B1E4
L_8007B1E8:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8007B1E8
  c->r[0]=R8(c->r[3]+0x000000BBu); // 8007B1EC
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8007B1F0
  c->r[0]=(rotl(c->r[29],1)&0x00000001u)|(c->r[0]&~0x00000001u); // 8007B1F4
  W8(c->r[3]+0x000000BBu,c->r[0]); // 8007B1F8
  c->r[31]=R32(c->r[31]+0x00000000u); // 8007B1FC
L_8007B200:;
  c->r[0]=c->r[30]-c->r[31]; // 8007B200
  c->r[0]=cntlz(c->r[0]); // 8007B204
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007B208
  c->r[0]=cntlz(c->r[0]); // 8007B20C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8007B210
  if (!crb(c,2)) { IRQCHK(c); goto L_8007B1CC; } // 8007B214
  c->r[11]=c->r[1]+0x00000020u; // 8007B218
  c->lr=0x8007B220u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007B21C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007B220
  c->lr=c->r[0]; // 8007B224
  c->r[1]=c->r[1]+0x00000020u; // 8007B228
  return; // 8007B22C
}

// fn_8007B230
void f_8007B230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B230
  c->r[0]=c->lr; // 8007B234
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007B238
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007B23C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007B240
  c->r[31]=c->r[4]|c->r[4]; // 8007B244
  c->lr=0x8007B24Cu; f_80077120(c); // 8007B248
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B24C
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8007B250
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B254
  c->r[31]=R32(c->r[3]+0x00000010u); // 8007B258
  goto L_8007B294; // 8007B25C
L_8007B260:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007B260
  if (!crb(c,2)) { goto L_8007B284; } // 8007B264
  c->r[3]=0u+0x80360000u; // 8007B268
  c->r[5]=0u+0x80360000u; // 8007B26C
  c->r[3]=c->r[3]+0xFFFFF350u; // 8007B270
  c->r[4]=0u+0x0000023Du; // 8007B274
  c->r[5]=c->r[5]+0xFFFFF32Cu; // 8007B278
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B27C
  c->lr=0x8007B284u; f_80212260(c); // 8007B280
L_8007B284:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8007B284
  c->r[0]=R8(c->r[3]+0x000000BBu); // 8007B288
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8007B28C
  goto L_8007B2B4; // 8007B290
L_8007B294:;
  c->r[0]=c->r[3]+0x00000010u; // 8007B294
  c->r[0]=c->r[0]-c->r[31]; // 8007B298
  c->r[0]=cntlz(c->r[0]); // 8007B29C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007B2A0
  c->r[0]=cntlz(c->r[0]); // 8007B2A4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8007B2A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8007B260; } // 8007B2AC
  c->r[3]=0u+0x00000000u; // 8007B2B0
L_8007B2B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007B2B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007B2B8
  c->lr=c->r[0]; // 8007B2BC
  c->r[1]=c->r[1]+0x00000010u; // 8007B2C0
  return; // 8007B2C4
}

// fn_8007B2D0
void f_8007B2D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B2D0
  c->r[0]=c->lr; // 8007B2D4
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007B2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007B2DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007B2E0
  c->r[31]=c->r[4]|c->r[4]; // 8007B2E4
  c->lr=0x8007B2ECu; f_80077120(c); // 8007B2E8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B2EC
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8007B2F0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B2F4
  c->r[31]=R32(c->r[3]+0x00000010u); // 8007B2F8
  goto L_8007B330; // 8007B2FC
L_8007B300:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007B300
  if (!crb(c,2)) { goto L_8007B324; } // 8007B304
  c->r[3]=0u+0x80360000u; // 8007B308
  c->r[5]=0u+0x80360000u; // 8007B30C
  c->r[3]=c->r[3]+0xFFFFF350u; // 8007B310
  c->r[4]=0u+0x0000023Du; // 8007B314
  c->r[5]=c->r[5]+0xFFFFF32Cu; // 8007B318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B31C
  c->lr=0x8007B324u; f_80212260(c); // 8007B320
L_8007B324:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8007B324
  c->r[3]=R8(c->r[3]+0x000000B8u); // 8007B328
  goto L_8007B350; // 8007B32C
L_8007B330:;
  c->r[0]=c->r[3]+0x00000010u; // 8007B330
  c->r[0]=c->r[0]-c->r[31]; // 8007B334
  c->r[0]=cntlz(c->r[0]); // 8007B338
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007B33C
  c->r[0]=cntlz(c->r[0]); // 8007B340
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8007B344
  if (!crb(c,2)) { IRQCHK(c); goto L_8007B300; } // 8007B348
  c->r[3]=0u+0x000000FFu; // 8007B34C
L_8007B350:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007B350
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007B354
  c->lr=c->r[0]; // 8007B358
  c->r[1]=c->r[1]+0x00000010u; // 8007B35C
  return; // 8007B360
}

// fn_8007B370
void f_8007B370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B370
  c->r[0]=c->lr; // 8007B374
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007B378
  c->r[11]=c->r[1]+0x00000020u; // 8007B37C
  c->lr=0x8007B384u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007B380
  c->r[28]=c->r[4]|c->r[4]; // 8007B384
  c->r[27]=c->r[5]|c->r[5]; // 8007B388
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007B38C
  c->lr=0x8007B394u; f_80077120(c); // 8007B390
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B394
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 8007B398
  c->r[28]=0u+0x80360000u; // 8007B39C
  c->r[29]=0u+0x80360000u; // 8007B3A0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B3A4
  c->r[31]=R32(c->r[3]+0x00000010u); // 8007B3A8
  c->r[30]=c->r[3]+0x00000010u; // 8007B3AC
  goto L_8007B3DC; // 8007B3B0
L_8007B3B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007B3B4
  if (!crb(c,2)) { goto L_8007B3D0; } // 8007B3B8
  c->r[3]=c->r[28]+0xFFFFF350u; // 8007B3BC
  c->r[5]=c->r[29]+0xFFFFF32Cu; // 8007B3C0
  c->r[4]=0u+0x0000023Du; // 8007B3C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B3C8
  c->lr=0x8007B3D0u; f_80212260(c); // 8007B3CC
L_8007B3D0:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8007B3D0
  W8(c->r[3]+0x000000B8u,c->r[27]); // 8007B3D4
  c->r[31]=R32(c->r[31]+0x00000000u); // 8007B3D8
L_8007B3DC:;
  c->r[0]=c->r[30]-c->r[31]; // 8007B3DC
  c->r[0]=cntlz(c->r[0]); // 8007B3E0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007B3E4
  c->r[0]=cntlz(c->r[0]); // 8007B3E8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8007B3EC
  if (!crb(c,2)) { IRQCHK(c); goto L_8007B3B4; } // 8007B3F0
  c->r[11]=c->r[1]+0x00000020u; // 8007B3F4
  c->lr=0x8007B3FCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007B3F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007B3FC
  c->lr=c->r[0]; // 8007B400
  c->r[1]=c->r[1]+0x00000020u; // 8007B404
  return; // 8007B408
}

// fn_8007B410
void f_8007B410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B410
  c->r[0]=c->lr; // 8007B414
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B418
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007B41C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007B420
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8007B424
  c->r[31]=c->r[4]|c->r[4]; // 8007B428
  W32(c->r[1]+0x00000028u,c->r[30]); // 8007B42C
  c->r[30]=c->r[5]|c->r[5]; // 8007B430
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8007B434
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8007B438
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8007B43C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8007B440
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007B444
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8007B448
  c->lr=0x8007B450u; f_80077120(c); // 8007B44C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B450
  c->r[0]=rotl(c->r[31],4)&0xFFFFFFF0u; // 8007B454
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B458
  c->r[31]=R32(c->r[3]+0x00000010u); // 8007B45C
  cmps(c,0,(int32_t)c->r[31],0); // 8007B460
  if (!crb(c,2)) { goto L_8007B484; } // 8007B464
  c->r[3]=0u+0x80360000u; // 8007B468
  c->r[5]=0u+0x80360000u; // 8007B46C
  c->r[3]=c->r[3]+0xFFFFF350u; // 8007B470
  c->r[4]=0u+0x0000023Du; // 8007B474
  c->r[5]=c->r[5]+0xFFFFF32Cu; // 8007B478
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B47C
  c->lr=0x8007B484u; f_80212260(c); // 8007B480
L_8007B484:;
  c->r[5]=R32(c->r[31]+0x00000008u); // 8007B484
  c->r[4]=c->r[1]+0x00000014u; // 8007B488
  c->r[3]=c->r[1]+0x00000008u; // 8007B48C
L_8007B490:;
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8007B490
  {uint32_t ea=c->r[5]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007B494
  {uint32_t ea=c->r[5]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B498
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8007B49C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8007B4A0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8007B4A4
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8007B4A8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 8007B4AC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8007B4B0
  cmps(c,0,(int32_t)c->r[5],0); // 8007B4B4
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8007B4B8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,1,0);} // 8007B4BC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 8007B4C0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 8007B4C4
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8007B4C8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 8007B4CC
  if (crb(c,2)) { goto L_8007B4D8; } // 8007B4D0
  IRQCHK(c); goto L_8007B490; // 8007B4D4
L_8007B4D8:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B4D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007B4DC
  c->f[0]=-c->f[0]; // 8007B4E0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 8007B4E4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 8007B4E8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8007B4EC
  c->r[30]=R32(c->r[1]+0x00000028u); // 8007B4F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007B4F4
  c->lr=c->r[0]; // 8007B4F8
  c->r[1]=c->r[1]+0x00000030u; // 8007B4FC
  return; // 8007B500
}

// fn_8007B510
void f_8007B510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B510
  c->r[0]=c->lr; // 8007B514
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007B518
  c->r[11]=c->r[1]+0x00000040u; // 8007B51C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8007B520
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8007B524
  c->lr=0x8007B52Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007B528
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B52C
  c->r[26]=c->r[4]|c->r[4]; // 8007B530
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8007B534
  c->r[25]=c->r[5]|c->r[5]; // 8007B538
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007B53C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007B540
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 8007B544
  c->lr=0x8007B54Cu; f_80077120(c); // 8007B548
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B54C
  c->r[0]=rotl(c->r[26],4)&0xFFFFFFF0u; // 8007B550
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8007B554
  c->r[26]=c->r[1]+0x00000014u; // 8007B558
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B55C
  c->r[27]=c->r[1]+0x00000008u; // 8007B560
  c->r[28]=0u+0x80360000u; // 8007B564
  c->r[29]=0u+0x80360000u; // 8007B568
  c->r[31]=R32(c->r[3]+0x00000010u); // 8007B56C
  c->r[30]=c->r[3]+0x00000010u; // 8007B570
  goto L_8007B634; // 8007B574
L_8007B578:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B578
  cmps(c,0,(int32_t)c->r[31],0); // 8007B57C
  {uint32_t ea=c->r[25]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007B580
  c->f[0]=-c->f[0]; // 8007B584
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8007B588
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007B58C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8007B590
  if (!crb(c,2)) { goto L_8007B5AC; } // 8007B594
  c->r[3]=c->r[28]+0xFFFFF350u; // 8007B598
  c->r[5]=c->r[29]+0xFFFFF32Cu; // 8007B59C
  c->r[4]=0u+0x0000023Du; // 8007B5A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B5A4
  c->lr=0x8007B5ACu; f_80212260(c); // 8007B5A8
L_8007B5AC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8007B5AC
L_8007B5B0:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8007B5B0
  cmps(c,0,(int32_t)c->r[3],0); // 8007B5B4
  if (crb(c,2)) { goto L_8007B5F8; } // 8007B5B8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8007B5BC
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007B5C0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8007B5C4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B5C8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8007B5CC
  {uint32_t ea=c->r[27]+0x00000000u; psq_load(c,2,ea,0,0);} // 8007B5D0
  {uint32_t ea=c->r[26]+0x00000000u; psq_load(c,1,ea,0,0);} // 8007B5D4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8007B5D8
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8007B5DC
  {uint32_t ea=c->r[27]+0x00000008u; psq_load(c,2,ea,1,0);} // 8007B5E0
  {uint32_t ea=c->r[26]+0x00000008u; psq_load(c,1,ea,1,0);} // 8007B5E4
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,0,ea,0,0);} // 8007B5E8
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8007B5EC
  {uint32_t ea=c->r[27]+0x00000008u; psq_store(c,0,ea,1,0);} // 8007B5F0
  IRQCHK(c); goto L_8007B5B0; // 8007B5F4
L_8007B5F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007B5F8
  if (!crb(c,2)) { goto L_8007B614; } // 8007B5FC
  c->r[3]=c->r[28]+0xFFFFF350u; // 8007B600
  c->r[5]=c->r[29]+0xFFFFF32Cu; // 8007B604
  c->r[4]=0u+0x0000023Du; // 8007B608
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B60C
  c->lr=0x8007B614u; f_80212260(c); // 8007B610
L_8007B614:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8007B614
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B618
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8007B61C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B620
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8007B624
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B628
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 8007B62C
  c->r[31]=R32(c->r[31]+0x00000000u); // 8007B630
L_8007B634:;
  c->r[0]=c->r[30]-c->r[31]; // 8007B634
  c->r[0]=cntlz(c->r[0]); // 8007B638
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007B63C
  c->r[0]=cntlz(c->r[0]); // 8007B640
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8007B644
  if (!crb(c,2)) { IRQCHK(c); goto L_8007B578; } // 8007B648
  c->r[11]=c->r[1]+0x00000040u; // 8007B64C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8007B650
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8007B654
  c->lr=0x8007B65Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007B658
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007B65C
  c->lr=c->r[0]; // 8007B660
  c->r[1]=c->r[1]+0x00000050u; // 8007B664
  return; // 8007B668
}

// fn_8007B670
void f_8007B670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B670
  c->r[0]=c->lr; // 8007B674
  W32(c->r[1]+0x00000074u,c->r[0]); // 8007B678
  c->r[11]=c->r[1]+0x00000070u; // 8007B67C
  c->lr=0x8007B684u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007B680
  {uint32_t ea=c->r[2]+0xFFFF8BE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007B684
  c->r[27]=c->r[3]|c->r[3]; // 8007B688
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8007B68C
  c->r[29]=c->r[4]|c->r[4]; // 8007B690
  c->r[28]=c->r[5]|c->r[5]; // 8007B694
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8007B698
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8007B69C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8007B6A0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007B6A4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8007B6A8
  c->lr=0x8007B6B0u; f_80077120(c); // 8007B6AC
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B6B0
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 8007B6B4
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B6B8
  c->r[30]=R32(c->r[3]+0x00000010u); // 8007B6BC
  cmps(c,0,(int32_t)c->r[30],0); // 8007B6C0
  if (!crb(c,2)) { goto L_8007B6E4; } // 8007B6C4
  c->r[3]=0u+0x80360000u; // 8007B6C8
  c->r[5]=0u+0x80360000u; // 8007B6CC
  c->r[3]=c->r[3]+0xFFFFF350u; // 8007B6D0
  c->r[4]=0u+0x0000023Du; // 8007B6D4
  c->r[5]=c->r[5]+0xFFFFF32Cu; // 8007B6D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B6DC
  c->lr=0x8007B6E4u; f_80212260(c); // 8007B6E0
L_8007B6E4:;
  c->r[29]=R32(c->r[30]+0x00000008u); // 8007B6E4
  c->r[3]=c->r[27]|c->r[27]; // 8007B6E8
  c->lr=0x8007B6F0u; f_80077120(c); // 8007B6EC
  c->r[31]=c->r[3]|c->r[3]; // 8007B6F0
  c->r[30]=0u+0x00000000u; // 8007B6F4
  goto L_8007B71C; // 8007B6F8
L_8007B6FC:;
  c->r[3]=c->r[27]|c->r[27]; // 8007B6FC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007B700
  c->lr=0x8007B708u; f_80078A80(c); // 8007B704
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007B708
  cmpu(c,0,c->r[0],c->r[29]); // 8007B70C
  if (!crb(c,2)) { goto L_8007B718; } // 8007B710
  goto L_8007B730; // 8007B714
L_8007B718:;
  c->r[30]=c->r[30]+0x00000001u; // 8007B718
L_8007B71C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000028u); // 8007B71C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007B720
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007B724
  if (crb(c,0)) { IRQCHK(c); goto L_8007B6FC; } // 8007B728
  c->r[30]=0u+0xFFFFFFFFu; // 8007B72C
L_8007B730:;
  c->r[3]=c->r[27]|c->r[27]; // 8007B730
  c->r[5]=c->r[28]|c->r[28]; // 8007B734
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007B738
  c->lr=0x8007B740u; f_80078CE0(c); // 8007B73C
  c->r[11]=c->r[1]+0x00000070u; // 8007B740
  c->lr=0x8007B748u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007B744
  c->r[0]=R32(c->r[1]+0x00000074u); // 8007B748
  c->lr=c->r[0]; // 8007B74C
  c->r[1]=c->r[1]+0x00000070u; // 8007B750
  return; // 8007B754
}

// fn_8007B760
void f_8007B760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B760
  c->r[0]=c->lr; // 8007B764
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007B768
  c->r[11]=c->r[1]+0x00000030u; // 8007B76C
  c->lr=0x8007B774u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007B770
  c->r[30]=c->r[3]|c->r[3]; // 8007B774
  c->r[23]=c->r[4]|c->r[4]; // 8007B778
  c->r[31]=c->r[5]|c->r[5]; // 8007B77C
  c->lr=0x8007B784u; f_80077120(c); // 8007B780
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B784
  c->r[0]=rotl(c->r[23],4)&0xFFFFFFF0u; // 8007B788
  c->r[25]=0u+0x80360000u; // 8007B78C
  c->r[26]=0u+0x80360000u; // 8007B790
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B794
  c->r[29]=R32(c->r[3]+0x00000010u); // 8007B798
  c->r[28]=c->r[3]+0x00000010u; // 8007B79C
  goto L_8007B820; // 8007B7A0
L_8007B7A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 8007B7A4
  if (!crb(c,2)) { goto L_8007B7C0; } // 8007B7A8
  c->r[3]=c->r[25]+0xFFFFF350u; // 8007B7AC
  c->r[5]=c->r[26]+0xFFFFF32Cu; // 8007B7B0
  c->r[4]=0u+0x0000023Du; // 8007B7B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B7B8
  c->lr=0x8007B7C0u; f_80212260(c); // 8007B7BC
L_8007B7C0:;
  c->r[23]=R32(c->r[29]+0x00000008u); // 8007B7C0
  c->r[3]=c->r[30]|c->r[30]; // 8007B7C4
  c->lr=0x8007B7CCu; f_80077120(c); // 8007B7C8
  c->r[27]=c->r[3]|c->r[3]; // 8007B7CC
  c->r[24]=0u+0x00000000u; // 8007B7D0
  goto L_8007B7F8; // 8007B7D4
L_8007B7D8:;
  c->r[3]=c->r[30]|c->r[30]; // 8007B7D8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[24]; // 8007B7DC
  c->lr=0x8007B7E4u; f_80078A80(c); // 8007B7E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007B7E4
  cmpu(c,0,c->r[0],c->r[23]); // 8007B7E8
  if (!crb(c,2)) { goto L_8007B7F4; } // 8007B7EC
  goto L_8007B80C; // 8007B7F0
L_8007B7F4:;
  c->r[24]=c->r[24]+0x00000001u; // 8007B7F4
L_8007B7F8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000028u); // 8007B7F8
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[24]; // 8007B7FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007B800
  if (crb(c,0)) { IRQCHK(c); goto L_8007B7D8; } // 8007B804
  c->r[24]=0u+0xFFFFFFFFu; // 8007B808
L_8007B80C:;
  c->r[3]=c->r[30]|c->r[30]; // 8007B80C
  c->r[5]=c->r[31]|c->r[31]; // 8007B810
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[24]; // 8007B814
  c->lr=0x8007B81Cu; f_80078DA0(c); // 8007B818
  c->r[29]=R32(c->r[29]+0x00000000u); // 8007B81C
L_8007B820:;
  c->r[0]=c->r[28]-c->r[29]; // 8007B820
  c->r[0]=cntlz(c->r[0]); // 8007B824
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007B828
  c->r[0]=cntlz(c->r[0]); // 8007B82C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8007B830
  if (!crb(c,2)) { IRQCHK(c); goto L_8007B7A4; } // 8007B834
  c->r[11]=c->r[1]+0x00000030u; // 8007B838
  c->lr=0x8007B840u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007B83C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007B840
  c->lr=c->r[0]; // 8007B844
  c->r[1]=c->r[1]+0x00000030u; // 8007B848
  return; // 8007B84C
}

// fn_8007B850
void f_8007B850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B850
  c->r[0]=c->lr; // 8007B854
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007B858
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007B85C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8007B860
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8007B864
  c->f[31]=c->f[1]; // 8007B868
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8007B86C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8007B870
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 8007B874
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 8007B878
  c->f[29]=c->f[2]; // 8007B87C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007B880
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007B884
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007B888
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007B88C
  c->r[28]=c->r[4]|c->r[4]; // 8007B890
  c->lr=0x8007B898u; f_80077120(c); // 8007B894
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007B898
  c->r[0]=rotl(c->r[28],4)&0xFFFFFFF0u; // 8007B89C
  c->f[30]=c->ps1[30]=S(c->f[31]); // 8007B8A0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 8007B8A4
  c->r[3]=R32(c->r[3]+c->r[0]); // 8007B8A8
  c->f[31]=c->ps1[31]=S(c->f[29]); // 8007B8AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[29]);} // 8007B8B0
  c->r[28]=0u+0x80360000u; // 8007B8B4
  c->r[31]=R32(c->r[3]+0x00000010u); // 8007B8B8
  c->r[30]=c->r[3]+0x00000010u; // 8007B8BC
  c->r[29]=0u+0x80360000u; // 8007B8C0
  goto L_8007B8F4; // 8007B8C4
L_8007B8C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007B8C8
  if (!crb(c,2)) { goto L_8007B8E4; } // 8007B8CC
  c->r[3]=c->r[28]+0xFFFFF350u; // 8007B8D0
  c->r[5]=c->r[29]+0xFFFFF32Cu; // 8007B8D4
  c->r[4]=0u+0x0000023Du; // 8007B8D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007B8DC
  c->lr=0x8007B8E4u; f_80212260(c); // 8007B8E0
L_8007B8E4:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8007B8E4
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[30]);} // 8007B8E8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[31]);} // 8007B8EC
  c->r[31]=R32(c->r[31]+0x00000000u); // 8007B8F0
L_8007B8F4:;
  c->r[0]=c->r[30]-c->r[31]; // 8007B8F4
  c->r[0]=cntlz(c->r[0]); // 8007B8F8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007B8FC
  c->r[0]=cntlz(c->r[0]); // 8007B900
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 8007B904
  if (!crb(c,2)) { IRQCHK(c); goto L_8007B8C8; } // 8007B908
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007B90C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8007B910
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8007B914
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8007B918
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8007B91C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 8007B920
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 8007B924
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007B928
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007B92C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007B930
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007B934
  c->lr=c->r[0]; // 8007B938
  c->r[1]=c->r[1]+0x00000050u; // 8007B93C
  return; // 8007B940
}

// fn_8007B950
void f_8007B950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B950
  c->r[0]=c->lr; // 8007B954
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007B958
  c->r[11]=c->r[1]+0x00000020u; // 8007B95C
  c->lr=0x8007B964u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007B960
  c->r[27]=c->r[3]|c->r[3]; // 8007B964
  c->r[28]=c->r[4]|c->r[4]; // 8007B968
  c->r[29]=c->r[5]|c->r[5]; // 8007B96C
  c->lr=0x8007B974u; f_80077120(c); // 8007B970
  c->r[31]=c->r[3]|c->r[3]; // 8007B974
  c->r[30]=0u+0x00000000u; // 8007B978
  goto L_8007B9AC; // 8007B97C
L_8007B980:;
  c->r[3]=c->r[27]|c->r[27]; // 8007B980
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007B984
  c->lr=0x8007B98Cu; f_80078A80(c); // 8007B988
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 8007B98C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 8007B990
  if (!crb(c,2)) { goto L_8007B9A8; } // 8007B994
  c->r[3]=c->r[27]|c->r[27]; // 8007B998
  c->r[5]=c->r[29]|c->r[29]; // 8007B99C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007B9A0
  c->lr=0x8007B9A8u; f_800791C0(c); // 8007B9A4
L_8007B9A8:;
  c->r[30]=c->r[30]+0x00000001u; // 8007B9A8
L_8007B9AC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000028u); // 8007B9AC
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007B9B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007B9B4
  if (crb(c,0)) { IRQCHK(c); goto L_8007B980; } // 8007B9B8
  c->r[11]=c->r[1]+0x00000020u; // 8007B9BC
  c->lr=0x8007B9C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007B9C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007B9C4
  c->lr=c->r[0]; // 8007B9C8
  c->r[1]=c->r[1]+0x00000020u; // 8007B9CC
  return; // 8007B9D0
}

// fn_8007B9E0
void f_8007B9E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007B9E0
  c->r[0]=c->lr; // 8007B9E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007B9E8
  c->r[11]=c->r[1]+0x00000030u; // 8007B9EC
  c->lr=0x8007B9F4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007B9F0
  c->r[3]=0u+0x80410000u; // 8007B9F4
  c->r[30]=0u+0x00000000u; // 8007B9F8
  c->r[3]=c->r[3]+0xFFFFEDE0u; // 8007B9FC
  c->r[29]=0u+0x00000000u; // 8007BA00
  c->r[0]=R8(c->r[3]+0x00000001u); // 8007BA04
  cmpu(c,0,c->r[0],0x00000001u); // 8007BA08
  if (!crb(c,2)) { goto L_8007BA24; } // 8007BA0C
  c->r[0]=R8(c->r[3]+0x00000002u); // 8007BA10
  c->r[4]=0u+0x00000000u; // 8007BA14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007BA18
  c->r[3]=c->r[3]+c->r[0]; // 8007BA1C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8007BA20
L_8007BA24:;
  c->r[24]=0u+0x80410000u; // 8007BA24
  c->r[26]=0u+0xFFFFFFFFu; // 8007BA28
  c->r[31]=0u+0x80360000u; // 8007BA2C
  c->r[27]=0u+0x00000000u; // 8007BA30
  c->r[25]=c->r[24]+0xFFFFEDE0u; // 8007BA34
  goto L_8007BC28; // 8007BA38
L_8007BA3C:;
  c->lr=0x8007BA40u; f_8000FF80(c); // 8007BA3C
  cmps(c,0,(int32_t)c->r[30],0); // 8007BA40
  if (crb(c,2)) { goto L_8007BA64; } // 8007BA44
  cmps(c,0,(int32_t)c->r[30],1); // 8007BA48
  if (crb(c,2)) { goto L_8007BB08; } // 8007BA4C
  cmps(c,0,(int32_t)c->r[30],3); // 8007BA50
  if (crb(c,2)) { goto L_8007BB90; } // 8007BA54
  cmps(c,0,(int32_t)c->r[30],4); // 8007BA58
  if (crb(c,2)) { goto L_8007BBAC; } // 8007BA5C
  goto L_8007BC28; // 8007BA60
L_8007BA64:;
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 8007BA64
  c->r[0]=addc(c,~c->r[29],0x00000020u,1); // 8007BA68
  c->r[4]=R32(c->r[25]+0x00000034u); // 8007BA6C
  c->r[3]=c->r[25]+c->r[3]; // 8007BA70
  c->r[3]=c->r[3]+0x00000038u; // 8007BA74
  c->ctr=c->r[0]; // 8007BA78
  cmps(c,0,(int32_t)c->r[29],32); // 8007BA7C
  if (!crb(c,0)) { goto L_8007BAA4; } // 8007BA80
  c->r[0]=c->r[0]|0x00000000u; // 8007BA84
L_8007BA88:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8007BA88
  c->r[28]=c->r[3]|c->r[3]; // 8007BA8C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8007BA90
  if (crb(c,2)) { goto L_8007BAA4; } // 8007BA94
  c->r[3]=c->r[3]+0x0000000Cu; // 8007BA98
  c->r[29]=c->r[29]+0x00000001u; // 8007BA9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007BA88; } // 8007BAA0
L_8007BAA4:;
  cmps(c,0,(int32_t)c->r[29],32); // 8007BAA4
  if (crb(c,0)) { goto L_8007BAB4; } // 8007BAA8
  c->r[30]=0u+0x00000004u; // 8007BAAC
  goto L_8007BC28; // 8007BAB0
L_8007BAB4:;
  c->r[0]=R8(c->r[25]+0x00000001u); // 8007BAB4
  cmps(c,0,(int32_t)c->r[0],0); // 8007BAB8
  if (!crb(c,2)) { goto L_8007BAD0; } // 8007BABC
  c->r[3]=R32(c->r[28]+0x00000004u); // 8007BAC0
  c->lr=0x8007BAC8u; f_8000A300(c); // 8007BAC4
  W32(c->r[28]+0x00000008u,c->r[3]); // 8007BAC8
  goto L_8007BADC; // 8007BACC
L_8007BAD0:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8007BAD0
  c->lr=0x8007BAD8u; f_8000C400(c); // 8007BAD4
  W32(c->r[28]+0x00000008u,c->r[3]); // 8007BAD8
L_8007BADC:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8007BADC
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BAE0
  if (!crb(c,2)) { goto L_8007BAFC; } // 8007BAE4
  c->r[3]=c->r[31]+0xFFFFF66Cu; // 8007BAE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007BAEC
  c->lr=0x8007BAF4u; f_80121B20(c); // 8007BAF0
  W32(c->r[28]+0x00000000u,c->r[26]); // 8007BAF4
  goto L_8007BB00; // 8007BAF8
L_8007BAFC:;
  c->r[30]=0u+0x00000001u; // 8007BAFC
L_8007BB00:;
  c->r[29]=c->r[29]+0x00000001u; // 8007BB00
  goto L_8007BC28; // 8007BB04
L_8007BB08:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8007BB08
  c->lr=0x8007BB10u; f_8000A7A0(c); // 8007BB0C
  cmps(c,0,(int32_t)c->r[3],1); // 8007BB10
  if (!crb(c,2)) { goto L_8007BB70; } // 8007BB14
  c->r[0]=R8(c->r[25]+0x00000001u); // 8007BB18
  cmpu(c,0,c->r[0],0x00000001u); // 8007BB1C
  if (!crb(c,2)) { goto L_8007BB68; } // 8007BB20
  c->r[3]=R32(c->r[28]+0x00000004u); // 8007BB24
  c->lr=0x8007BB2Cu; f_8000C7B0(c); // 8007BB28
  c->r[0]=R8(c->r[25]+0x00000002u); // 8007BB2C
  c->r[30]=c->r[3]|c->r[3]; // 8007BB30
  c->r[4]=c->r[30]|c->r[30]; // 8007BB34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007BB38
  c->r[3]=c->r[25]+c->r[0]; // 8007BB3C
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007BB40
  c->lr=0x8007BB48u; f_80120C40(c); // 8007BB44
  c->r[3]=R8(c->r[25]+0x00000002u); // 8007BB48
  c->r[0]=c->r[30]+0x0000001Fu; // 8007BB4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8007BB50
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8007BB54
  c->r[4]=c->r[25]+c->r[3]; // 8007BB58
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8007BB5C
  c->r[0]=c->r[3]+c->r[0]; // 8007BB60
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8007BB64
L_8007BB68:;
  c->r[30]=0u+0x00000000u; // 8007BB68
  goto L_8007BC28; // 8007BB6C
L_8007BB70:;
  c->r[0]=R8(c->r[24]+0xFFFFEDE0u); // 8007BB70
  cmpu(c,0,c->r[0],0x00000002u); // 8007BB74
  if (!crb(c,2)) { goto L_8007BC28; } // 8007BB78
  c->r[0]=R32(c->r[28]+0x00000008u); // 8007BB7C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8007BB80
  c->lr=0x8007BB88u; f_8000A290(c); // 8007BB84
  c->r[30]=0u+0x00000003u; // 8007BB88
  goto L_8007BC28; // 8007BB8C
L_8007BB90:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8007BB90
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8007BB94
  c->lr=0x8007BB9Cu; f_8000A2B0(c); // 8007BB98
  cmps(c,0,(int32_t)c->r[3],0); // 8007BB9C
  if (crb(c,2)) { goto L_8007BC28; } // 8007BBA0
  c->r[30]=0u+0x00000004u; // 8007BBA4
  goto L_8007BC28; // 8007BBA8
L_8007BBAC:;
  c->r[0]=R8(c->r[24]+0xFFFFEDE0u); // 8007BBAC
  cmpu(c,0,c->r[0],0x00000002u); // 8007BBB0
  if (!crb(c,2)) { goto L_8007BC0C; } // 8007BBB4
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 8007BBB8
  c->r[0]=addc(c,~c->r[29],0x00000020u,1); // 8007BBBC
  c->r[3]=c->r[25]+c->r[3]; // 8007BBC0
  c->r[4]=c->r[3]+0x00000038u; // 8007BBC4
  c->ctr=c->r[0]; // 8007BBC8
  cmps(c,0,(int32_t)c->r[29],32); // 8007BBCC
  if (!crb(c,0)) { goto L_8007BC04; } // 8007BBD0
  c->r[0]=c->r[0]|0x00000000u; // 8007BBD4
L_8007BBD8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 8007BBD8
  c->r[28]=c->r[4]|c->r[4]; // 8007BBDC
  c->r[0]=R32(c->r[25]+0x00000034u); // 8007BBE0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007BBE4
  if (!crb(c,2)) { goto L_8007BBF8; } // 8007BBE8
  W32(c->r[4]+0x00000000u,c->r[26]); // 8007BBEC
  W32(c->r[4]+0x00000004u,c->r[26]); // 8007BBF0
  W32(c->r[4]+0x00000008u,c->r[26]); // 8007BBF4
L_8007BBF8:;
  c->r[4]=c->r[4]+0x0000000Cu; // 8007BBF8
  c->r[29]=c->r[29]+0x00000001u; // 8007BBFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007BBD8; } // 8007BC00
L_8007BC04:;
  c->r[3]=R32(c->r[25]+0x00000034u); // 8007BC04
  c->lr=0x8007BC0Cu; f_8007BF90(c); // 8007BC08
L_8007BC0C:;
  c->r[3]=R32(c->r[25]+0x00000034u); // 8007BC0C
  c->r[0]=c->r[3]+0x00000001u; // 8007BC10
  W32(c->r[25]+0x00000034u,c->r[0]); // 8007BC14
  cmps(c,0,(int32_t)c->r[0],1024); // 8007BC18
  if (!crb(c,1)) { goto L_8007BC24; } // 8007BC1C
  W32(c->r[25]+0x00000034u,c->r[27]); // 8007BC20
L_8007BC24:;
  W8(c->r[24]+0xFFFFEDE0u,c->r[27]); // 8007BC24
L_8007BC28:;
  c->r[0]=R8(c->r[24]+0xFFFFEDE0u); // 8007BC28
  cmps(c,0,(int32_t)c->r[0],0); // 8007BC2C
  if (!crb(c,2)) { IRQCHK(c); goto L_8007BA3C; } // 8007BC30
  c->lr=0x8007BC38u; f_8000FE40(c); // 8007BC34
L_8007BC38:;
  c->lr=0x8007BC3Cu; f_8000FF80(c); // 8007BC38
  IRQCHK(c); goto L_8007BC38; // 8007BC3C
}

// fn_8007BC40
void f_8007BC40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BC40
  c->r[0]=c->lr; // 8007BC44
  c->r[4]=0u+0x00000000u; // 8007BC48
  c->r[5]=0u+0x000001B8u; // 8007BC4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007BC50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007BC54
  c->r[31]=0u+0x80410000u; // 8007BC58
  c->r[3]=c->r[31]+0xFFFFEDE0u; // 8007BC5C
  c->lr=0x8007BC64u; f_80004714(c); // 8007BC60
  c->r[0]=0u+0x00000002u; // 8007BC64
  c->r[4]=c->r[31]+0xFFFFEDE0u; // 8007BC68
  c->r[3]=0u+0xFFFFFFFFu; // 8007BC6C
  c->ctr=c->r[0]; // 8007BC70
L_8007BC74:;
  W32(c->r[4]+0x00000038u,c->r[3]); // 8007BC74
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 8007BC78
  W32(c->r[4]+0x00000040u,c->r[3]); // 8007BC7C
  W32(c->r[4]+0x00000044u,c->r[3]); // 8007BC80
  W32(c->r[4]+0x00000048u,c->r[3]); // 8007BC84
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 8007BC88
  W32(c->r[4]+0x00000050u,c->r[3]); // 8007BC8C
  W32(c->r[4]+0x00000054u,c->r[3]); // 8007BC90
  W32(c->r[4]+0x00000058u,c->r[3]); // 8007BC94
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 8007BC98
  W32(c->r[4]+0x00000060u,c->r[3]); // 8007BC9C
  W32(c->r[4]+0x00000064u,c->r[3]); // 8007BCA0
  W32(c->r[4]+0x00000068u,c->r[3]); // 8007BCA4
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 8007BCA8
  W32(c->r[4]+0x00000070u,c->r[3]); // 8007BCAC
  W32(c->r[4]+0x00000074u,c->r[3]); // 8007BCB0
  W32(c->r[4]+0x00000078u,c->r[3]); // 8007BCB4
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 8007BCB8
  W32(c->r[4]+0x00000080u,c->r[3]); // 8007BCBC
  W32(c->r[4]+0x00000084u,c->r[3]); // 8007BCC0
  W32(c->r[4]+0x00000088u,c->r[3]); // 8007BCC4
  W32(c->r[4]+0x0000008Cu,c->r[3]); // 8007BCC8
  W32(c->r[4]+0x00000090u,c->r[3]); // 8007BCCC
  W32(c->r[4]+0x00000094u,c->r[3]); // 8007BCD0
  W32(c->r[4]+0x00000098u,c->r[3]); // 8007BCD4
  W32(c->r[4]+0x0000009Cu,c->r[3]); // 8007BCD8
  W32(c->r[4]+0x000000A0u,c->r[3]); // 8007BCDC
  W32(c->r[4]+0x000000A4u,c->r[3]); // 8007BCE0
  W32(c->r[4]+0x000000A8u,c->r[3]); // 8007BCE4
  W32(c->r[4]+0x000000ACu,c->r[3]); // 8007BCE8
  W32(c->r[4]+0x000000B0u,c->r[3]); // 8007BCEC
  W32(c->r[4]+0x000000B4u,c->r[3]); // 8007BCF0
  W32(c->r[4]+0x000000B8u,c->r[3]); // 8007BCF4
  W32(c->r[4]+0x000000BCu,c->r[3]); // 8007BCF8
  W32(c->r[4]+0x000000C0u,c->r[3]); // 8007BCFC
  W32(c->r[4]+0x000000C4u,c->r[3]); // 8007BD00
  W32(c->r[4]+0x000000C8u,c->r[3]); // 8007BD04
  W32(c->r[4]+0x000000CCu,c->r[3]); // 8007BD08
  W32(c->r[4]+0x000000D0u,c->r[3]); // 8007BD0C
  W32(c->r[4]+0x000000D4u,c->r[3]); // 8007BD10
  W32(c->r[4]+0x000000D8u,c->r[3]); // 8007BD14
  W32(c->r[4]+0x000000DCu,c->r[3]); // 8007BD18
  W32(c->r[4]+0x000000E0u,c->r[3]); // 8007BD1C
  W32(c->r[4]+0x000000E4u,c->r[3]); // 8007BD20
  W32(c->r[4]+0x000000E8u,c->r[3]); // 8007BD24
  W32(c->r[4]+0x000000ECu,c->r[3]); // 8007BD28
  W32(c->r[4]+0x000000F0u,c->r[3]); // 8007BD2C
  W32(c->r[4]+0x000000F4u,c->r[3]); // 8007BD30
  c->r[4]=c->r[4]+0x000000C0u; // 8007BD34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007BC74; } // 8007BD38
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007BD3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007BD40
  c->lr=c->r[0]; // 8007BD44
  c->r[1]=c->r[1]+0x00000010u; // 8007BD48
  return; // 8007BD4C
}

// fn_8007BD50
void f_8007BD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BD50
  c->r[0]=c->lr; // 8007BD54
  c->r[4]=0u+0x80410000u; // 8007BD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007BD5C
  c->r[4]=c->r[4]+0xFFFFEDE0u; // 8007BD60
  c->r[0]=0u+0x00000004u; // 8007BD64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007BD68
  c->r[31]=c->r[3]|c->r[3]; // 8007BD6C
  c->r[4]=c->r[4]+0x00000038u; // 8007BD70
  c->r[3]=0u+0x00000000u; // 8007BD74
  c->ctr=c->r[0]; // 8007BD78
  c->r[0]=c->r[0]|0x00000000u; // 8007BD7C
L_8007BD80:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8007BD80
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BD84
  if (!crb(c,2)) { goto L_8007BD90; } // 8007BD88
  goto L_8007BE20; // 8007BD8C
L_8007BD90:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8007BD90
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BD94
  if (!crb(c,2)) { goto L_8007BDA0; } // 8007BD98
  goto L_8007BE20; // 8007BD9C
L_8007BDA0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8007BDA0
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BDA4
  if (!crb(c,2)) { goto L_8007BDB0; } // 8007BDA8
  goto L_8007BE20; // 8007BDAC
L_8007BDB0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8007BDB0
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BDB4
  if (!crb(c,2)) { goto L_8007BDC0; } // 8007BDB8
  goto L_8007BE20; // 8007BDBC
L_8007BDC0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8007BDC0
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BDC4
  if (!crb(c,2)) { goto L_8007BDD0; } // 8007BDC8
  goto L_8007BE20; // 8007BDCC
L_8007BDD0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8007BDD0
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BDD4
  if (!crb(c,2)) { goto L_8007BDE0; } // 8007BDD8
  goto L_8007BE20; // 8007BDDC
L_8007BDE0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8007BDE0
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BDE4
  if (!crb(c,2)) { goto L_8007BDF0; } // 8007BDE8
  goto L_8007BE20; // 8007BDEC
L_8007BDF0:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8007BDF0
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BDF4
  if (!crb(c,2)) { goto L_8007BE00; } // 8007BDF8
  goto L_8007BE20; // 8007BDFC
L_8007BE00:;
  c->r[4]=c->r[4]+0x0000000Cu; // 8007BE00
  c->r[3]=c->r[3]+0x00000007u; // 8007BE04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007BD80; } // 8007BE08
  c->r[3]=0u+0x80360000u; // 8007BE0C
  c->r[3]=c->r[3]+0xFFFFF650u; // 8007BE10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007BE14
  c->lr=0x8007BE1Cu; f_80121B20(c); // 8007BE18
  c->r[4]=0u+0x00000000u; // 8007BE1C
L_8007BE20:;
  c->r[3]=0u+0x80410000u; // 8007BE20
  c->r[0]=R8(c->r[3]+0xFFFFEDE0u); // 8007BE24
  cmps(c,0,(int32_t)c->r[0],0); // 8007BE28
  if (!crb(c,2)) { goto L_8007BE40; } // 8007BE2C
  W32(c->r[4]+0x00000004u,c->r[31]); // 8007BE30
  c->r[3]=c->r[3]+0xFFFFEDE0u; // 8007BE34
  c->r[0]=R32(c->r[3]+0x00000034u); // 8007BE38
  W32(c->r[4]+0x00000000u,c->r[0]); // 8007BE3C
L_8007BE40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007BE40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007BE44
  c->lr=c->r[0]; // 8007BE48
  c->r[1]=c->r[1]+0x00000010u; // 8007BE4C
  return; // 8007BE50
}

// fn_8007BE60
void f_8007BE60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BE60
  c->r[0]=c->lr; // 8007BE64
  c->r[3]=0u+0x80410000u; // 8007BE68
  c->r[4]=0u+0x00000001u; // 8007BE6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007BE70
  c->r[0]=0u+0x00000000u; // 8007BE74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007BE78
  c->r[31]=c->r[3]+0xFFFFEDE0u; // 8007BE7C
  W8(c->r[3]+0xFFFFEDE0u,c->r[4]); // 8007BE80
  W8(c->r[31]+0x00000001u,c->r[0]); // 8007BE84
  c->lr=0x8007BE8Cu; f_8000FAD0(c); // 8007BE88
  c->r[4]=0u+0x80080000u; // 8007BE8C
  c->r[7]=c->r[3]|c->r[3]; // 8007BE90
  c->r[3]=c->r[4]+0xFFFFB9E0u; // 8007BE94
  c->r[5]=0u+0x00003000u; // 8007BE98
  c->r[4]=0u+0x00000064u; // 8007BE9C
  c->r[6]=0u+0x00000000u; // 8007BEA0
  c->lr=0x8007BEA8u; f_8000F9D0(c); // 8007BEA4
  c->r[3]=R32(c->r[31]+0x00000034u); // 8007BEA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007BEAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007BEB0
  c->lr=c->r[0]; // 8007BEB4
  c->r[1]=c->r[1]+0x00000010u; // 8007BEB8
  return; // 8007BEBC
}

// fn_8007BEC0
void f_8007BEC0(Ctx* __restrict c) {
  c->r[6]=0u+0x80410000u; // 8007BEC0
  c->r[6]=c->r[6]+0xFFFFEDE0u; // 8007BEC4
  c->r[0]=R8(c->r[6]+0x00000002u); // 8007BEC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007BECC
  c->r[3]=c->r[6]+c->r[0]; // 8007BED0
  W32(c->r[3]+0x00000004u,c->r[4]); // 8007BED4
  c->r[0]=R8(c->r[6]+0x00000002u); // 8007BED8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007BEDC
  c->r[3]=c->r[6]+c->r[0]; // 8007BEE0
  W32(c->r[3]+0x00000008u,c->r[5]); // 8007BEE4
  return; // 8007BEE8
}

// fn_8007BEF0
void f_8007BEF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BEF0
  c->r[0]=c->lr; // 8007BEF4
  c->r[4]=0u+0x80410000u; // 8007BEF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007BEFC
  c->r[0]=0u+0x00000001u; // 8007BF00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007BF04
  c->r[31]=c->r[4]+0xFFFFEDE0u; // 8007BF08
  W8(c->r[4]+0xFFFFEDE0u,c->r[0]); // 8007BF0C
  W8(c->r[31]+0x00000001u,c->r[0]); // 8007BF10
  W8(c->r[31]+0x00000002u,c->r[3]); // 8007BF14
  c->lr=0x8007BF1Cu; f_8000FAD0(c); // 8007BF18
  c->r[4]=0u+0x80080000u; // 8007BF1C
  c->r[7]=c->r[3]|c->r[3]; // 8007BF20
  c->r[3]=c->r[4]+0xFFFFB9E0u; // 8007BF24
  c->r[5]=0u+0x00003000u; // 8007BF28
  c->r[4]=0u+0x00000064u; // 8007BF2C
  c->r[6]=0u+0x00000000u; // 8007BF30
  c->lr=0x8007BF38u; f_8000F9D0(c); // 8007BF34
  c->r[3]=R32(c->r[31]+0x00000034u); // 8007BF38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007BF3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007BF40
  c->lr=c->r[0]; // 8007BF44
  c->r[1]=c->r[1]+0x00000010u; // 8007BF48
  return; // 8007BF4C
}

// fn_8007BF50
void f_8007BF50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BF50
  c->r[0]=c->lr; // 8007BF54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007BF58
  c->lr=0x8007BF60u; f_800840F0(c); // 8007BF5C
  cmps(c,0,(int32_t)c->r[3],0); // 8007BF60
  if (crb(c,2)) { goto L_8007BF70; } // 8007BF64
  c->r[3]=0u+0x00000000u; // 8007BF68
  goto L_8007BF80; // 8007BF6C
L_8007BF70:;
  c->r[3]=0u+0x80410000u; // 8007BF70
  c->r[0]=R8(c->r[3]+0xFFFFEDE0u); // 8007BF74
  c->r[0]=cntlz(c->r[0]); // 8007BF78
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007BF7C
L_8007BF80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007BF80
  c->lr=c->r[0]; // 8007BF84
  c->r[1]=c->r[1]+0x00000010u; // 8007BF88
  return; // 8007BF8C
}

// fn_8007BF90
void f_8007BF90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007BF90
  c->r[0]=c->lr; // 8007BF94
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007BF98
  c->r[11]=c->r[1]+0x00000020u; // 8007BF9C
  c->lr=0x8007BFA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007BFA0
  c->r[27]=c->r[3]|c->r[3]; // 8007BFA4
  c->lr=0x8007BFACu; f_800840F0(c); // 8007BFA8
  cmps(c,0,(int32_t)c->r[3],0); // 8007BFAC
  if (crb(c,2)) { goto L_8007BFBC; } // 8007BFB0
  c->r[0]=0u+0x00000000u; // 8007BFB4
  goto L_8007BFCC; // 8007BFB8
L_8007BFBC:;
  c->r[3]=0u+0x80410000u; // 8007BFBC
  c->r[0]=R8(c->r[3]+0xFFFFEDE0u); // 8007BFC0
  c->r[0]=cntlz(c->r[0]); // 8007BFC4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007BFC8
L_8007BFCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8007BFCC
  if (crb(c,2)) { goto L_8007C080; } // 8007BFD0
  c->r[30]=0u+0x80410000u; // 8007BFD4
  c->r[28]=0u+0x00000000u; // 8007BFD8
  c->r[30]=c->r[30]+0xFFFFEDE0u; // 8007BFDC
  c->r[31]=0u+0xFFFFFFFFu; // 8007BFE0
  c->r[29]=c->r[30]+0x00000038u; // 8007BFE4
L_8007BFE8:;
  cmps(c,0,(int32_t)c->r[27],-1); // 8007BFE8
  if (!crb(c,2)) { goto L_8007C02C; } // 8007BFEC
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007BFF0
  cmps(c,0,(int32_t)c->r[0],-1); // 8007BFF4
  if (crb(c,2)) { goto L_8007C070; } // 8007BFF8
  c->r[0]=R8(c->r[30]+0x00000001u); // 8007BFFC
  cmps(c,0,(int32_t)c->r[0],0); // 8007C000
  if (!crb(c,2)) { goto L_8007C014; } // 8007C004
  c->r[3]=R32(c->r[29]+0x00000004u); // 8007C008
  c->lr=0x8007C010u; f_8000B950(c); // 8007C00C
  goto L_8007C01C; // 8007C010
L_8007C014:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8007C014
  c->lr=0x8007C01Cu; f_8000C650(c); // 8007C018
L_8007C01C:;
  W32(c->r[29]+0x00000000u,c->r[31]); // 8007C01C
  W32(c->r[29]+0x00000004u,c->r[31]); // 8007C020
  W32(c->r[29]+0x00000008u,c->r[31]); // 8007C024
  goto L_8007C070; // 8007C028
L_8007C02C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007C02C
  cmps(c,0,(int32_t)c->r[0],-1); // 8007C030
  if (crb(c,2)) { goto L_8007C070; } // 8007C034
  c->r[0]=R32(c->r[29]+0x00000000u); // 8007C038
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[27]); // 8007C03C
  if (!crb(c,2)) { goto L_8007C070; } // 8007C040
  c->r[0]=R8(c->r[30]+0x00000001u); // 8007C044
  cmps(c,0,(int32_t)c->r[0],0); // 8007C048
  if (!crb(c,2)) { goto L_8007C05C; } // 8007C04C
  c->r[3]=R32(c->r[29]+0x00000004u); // 8007C050
  c->lr=0x8007C058u; f_8000B950(c); // 8007C054
  goto L_8007C064; // 8007C058
L_8007C05C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8007C05C
  c->lr=0x8007C064u; f_8000C650(c); // 8007C060
L_8007C064:;
  W32(c->r[29]+0x00000000u,c->r[31]); // 8007C064
  W32(c->r[29]+0x00000004u,c->r[31]); // 8007C068
  W32(c->r[29]+0x00000008u,c->r[31]); // 8007C06C
L_8007C070:;
  c->r[28]=c->r[28]+0x00000001u; // 8007C070
  c->r[29]=c->r[29]+0x0000000Cu; // 8007C074
  cmps(c,0,(int32_t)c->r[28],32); // 8007C078
  if (crb(c,0)) { IRQCHK(c); goto L_8007BFE8; } // 8007C07C
L_8007C080:;
  c->r[11]=c->r[1]+0x00000020u; // 8007C080
  c->lr=0x8007C088u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007C084
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C088
  c->lr=c->r[0]; // 8007C08C
  c->r[1]=c->r[1]+0x00000020u; // 8007C090
  return; // 8007C094
}

// fn_8007C0A0
void f_8007C0A0(Ctx* __restrict c) {
  c->r[3]=0u+0xFFFFFFFFu; // 8007C0A0
  f_8007BF90(c); return; // 8007C0A4
}

// fn_8007C0B0
void f_8007C0B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C0B0
  c->r[0]=c->lr; // 8007C0B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C0B8
  c->lr=0x8007C0C0u; f_800840F0(c); // 8007C0BC
  cmps(c,0,(int32_t)c->r[3],0); // 8007C0C0
  if (crb(c,2)) { goto L_8007C0D0; } // 8007C0C4
  c->r[0]=0u+0x00000000u; // 8007C0C8
  goto L_8007C0E0; // 8007C0CC
L_8007C0D0:;
  c->r[3]=0u+0x80410000u; // 8007C0D0
  c->r[0]=R8(c->r[3]+0xFFFFEDE0u); // 8007C0D4
  c->r[0]=cntlz(c->r[0]); // 8007C0D8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8007C0DC
L_8007C0E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8007C0E0
  if (!crb(c,2)) { goto L_8007C0F4; } // 8007C0E4
  c->r[3]=0u+0x80410000u; // 8007C0E8
  c->r[0]=0u+0x00000002u; // 8007C0EC
  W8(c->r[3]+0xFFFFEDE0u,c->r[0]); // 8007C0F0
L_8007C0F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C0F4
  c->lr=c->r[0]; // 8007C0F8
  c->r[1]=c->r[1]+0x00000010u; // 8007C0FC
  return; // 8007C100
}

// fn_8007C110
void f_8007C110(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 8007C110
  c->r[3]=c->r[3]+0xFFFFEDE0u; // 8007C114
  c->r[0]=R8(c->r[3]+0x00000002u); // 8007C118
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007C11C
  c->r[4]=c->r[3]+c->r[0]; // 8007C120
  c->r[3]=R32(c->r[4]+0x00000004u); // 8007C124
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8007C128
  c->r[3]=c->r[3]+c->r[0]; // 8007C12C
  return; // 8007C130
}

// fn_8007C140
void f_8007C140(Ctx* __restrict c) {
L_8007C140:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 8007C140
  cmpu(c,0,c->r[0],0x0000000Du); // 8007C144
  if (!crb(c,2)) { goto L_8007C1AC; } // 8007C148
  c->r[0]=R16(c->r[3]+0x00000002u); // 8007C14C
  cmpu(c,0,c->r[0],0x0000000Au); // 8007C150
  if (!crb(c,2)) { goto L_8007C1AC; } // 8007C154
  c->r[0]=R16(c->r[3]+0x00000004u); // 8007C158
  cmps(c,0,(int32_t)c->r[0],45); // 8007C15C
  if (!crb(c,2)) { goto L_8007C1AC; } // 8007C160
  c->r[0]=R16(c->r[3]+0x00000006u); // 8007C164
  cmps(c,0,(int32_t)c->r[0],45); // 8007C168
  if (!crb(c,2)) { goto L_8007C1AC; } // 8007C16C
  c->r[0]=R16(c->r[3]+0x00000008u); // 8007C170
  cmpu(c,0,c->r[0],0x0000000Du); // 8007C174
  if (!crb(c,2)) { goto L_8007C1AC; } // 8007C178
  c->r[0]=R16(c->r[3]+0x0000000Au); // 8007C17C
  cmpu(c,0,c->r[0],0x0000000Au); // 8007C180
  if (!crb(c,2)) { goto L_8007C1AC; } // 8007C184
  c->r[0]=0u+0x00000000u; // 8007C188
  W16(c->r[3]+0x00000000u,c->r[0]); // 8007C18C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8007C190
  W16(c->r[3]+0x00000004u,c->r[0]); // 8007C194
  W16(c->r[3]+0x00000006u,c->r[0]); // 8007C198
  W16(c->r[3]+0x00000008u,c->r[0]); // 8007C19C
  W16(c->r[3]+0x0000000Au,c->r[0]); // 8007C1A0
  c->r[3]=c->r[3]+0x0000000Cu; // 8007C1A4
  return; // 8007C1A8
L_8007C1AC:;
  c->r[3]=c->r[3]+0x00000002u; // 8007C1AC
  IRQCHK(c); goto L_8007C140; // 8007C1B0
}

// fn_8007C1B4
void f_8007C1B4(Ctx* __restrict c) {
  return; // 8007C1B4
}

// fn_8007C1C0
void f_8007C1C0(Ctx* __restrict c) {
  c->r[9]=0u+0x00000002u; // 8007C1C0
  c->r[0]=0u+0x00000001u; // 8007C1C4
  c->r[5]=0u+0x00000005u; // 8007C1C8
  c->r[6]=0u+0x00000004u; // 8007C1CC
  c->r[7]=0u+0x00000006u; // 8007C1D0
  c->r[8]=0u+0x00000003u; // 8007C1D4
  goto L_8007C274; // 8007C1D8
  c->r[0]=c->r[0]|0x00000000u; // 8007C1DC
L_8007C1E0:;
  cmpu(c,0,c->r[4],0x0000005Bu); // 8007C1E0
  if (!crb(c,2)) { goto L_8007C270; } // 8007C1E4
  c->r[4]=R16(c->r[3]+0x00000002u); // 8007C1E8
  cmps(c,0,(int32_t)c->r[4],99); // 8007C1EC
  if (crb(c,2)) { goto L_8007C220; } // 8007C1F0
  cmps(c,0,(int32_t)c->r[4],114); // 8007C1F4
  if (crb(c,2)) { goto L_8007C228; } // 8007C1F8
  cmps(c,0,(int32_t)c->r[4],115); // 8007C1FC
  if (crb(c,2)) { goto L_8007C248; } // 8007C200
  cmps(c,0,(int32_t)c->r[4],112); // 8007C204
  if (crb(c,2)) { goto L_8007C250; } // 8007C208
  cmps(c,0,(int32_t)c->r[4],102); // 8007C20C
  if (crb(c,2)) { goto L_8007C258; } // 8007C210
  cmps(c,0,(int32_t)c->r[4],47); // 8007C214
  if (crb(c,2)) { goto L_8007C260; } // 8007C218
  goto L_8007C270; // 8007C21C
L_8007C220:;
  W16(c->r[3]+0x00000000u,c->r[0]); // 8007C220
  goto L_8007C270; // 8007C224
L_8007C228:;
  W16(c->r[3]+0x00000000u,c->r[9]); // 8007C228
  goto L_8007C234; // 8007C22C
L_8007C230:;
  c->r[3]=c->r[3]+0x00000002u; // 8007C230
L_8007C234:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 8007C234
  cmps(c,0,(int32_t)c->r[4],47); // 8007C238
  if (!crb(c,2)) { IRQCHK(c); goto L_8007C230; } // 8007C23C
  W16(c->r[3]+0x00000000u,c->r[8]); // 8007C240
  goto L_8007C270; // 8007C244
L_8007C248:;
  W16(c->r[3]+0x00000000u,c->r[7]); // 8007C248
  goto L_8007C270; // 8007C24C
L_8007C250:;
  W16(c->r[3]+0x00000000u,c->r[6]); // 8007C250
  goto L_8007C270; // 8007C254
L_8007C258:;
  W16(c->r[3]+0x00000000u,c->r[5]); // 8007C258
  goto L_8007C270; // 8007C25C
L_8007C260:;
  c->r[4]=R16(c->r[3]+0x00000004u); // 8007C260
  cmps(c,0,(int32_t)c->r[4],99); // 8007C264
  if (!crb(c,2)) { goto L_8007C270; } // 8007C268
  W16(c->r[3]+0x00000000u,c->r[0]); // 8007C26C
L_8007C270:;
  c->r[3]=c->r[3]+0x00000002u; // 8007C270
L_8007C274:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 8007C274
  cmps(c,0,(int32_t)c->r[4],0); // 8007C278
  if (!crb(c,2)) { IRQCHK(c); goto L_8007C1E0; } // 8007C27C
  return; // 8007C280
}

// fn_8007C290
void f_8007C290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C290
  c->r[0]=c->lr; // 8007C294
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007C298
  c->r[11]=c->r[1]+0x00000050u; // 8007C29C
  c->lr=0x8007C2A4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007C2A0
  c->r[5]=0u+0x80410000u; // 8007C2A4
  c->r[0]=0u+0x00000004u; // 8007C2A8
  c->r[30]=c->r[4]|c->r[4]; // 8007C2AC
  c->r[24]=c->r[3]|c->r[3]; // 8007C2B0
  c->r[5]=c->r[5]+0xFFFFEF98u; // 8007C2B4
  c->r[4]=0u+0x00000000u; // 8007C2B8
  c->ctr=c->r[0]; // 8007C2BC
L_8007C2C0:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 8007C2C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C2C4
  if (!crb(c,2)) { goto L_8007C2D0; } // 8007C2C8
  goto L_8007C36C; // 8007C2CC
L_8007C2D0:;
  c->r[0]=R32(c->r[5]+0x00000014u); // 8007C2D0
  c->r[4]=c->r[4]+0x00000001u; // 8007C2D4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C2D8
  if (!crb(c,2)) { goto L_8007C2E4; } // 8007C2DC
  goto L_8007C36C; // 8007C2E0
L_8007C2E4:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 8007C2E4
  c->r[4]=c->r[4]+0x00000001u; // 8007C2E8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C2EC
  if (!crb(c,2)) { goto L_8007C2F8; } // 8007C2F0
  goto L_8007C36C; // 8007C2F4
L_8007C2F8:;
  c->r[0]=R32(c->r[5]+0x00000034u); // 8007C2F8
  c->r[4]=c->r[4]+0x00000001u; // 8007C2FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C300
  if (!crb(c,2)) { goto L_8007C30C; } // 8007C304
  goto L_8007C36C; // 8007C308
L_8007C30C:;
  c->r[0]=R32(c->r[5]+0x00000044u); // 8007C30C
  c->r[4]=c->r[4]+0x00000001u; // 8007C310
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C314
  if (!crb(c,2)) { goto L_8007C320; } // 8007C318
  goto L_8007C36C; // 8007C31C
L_8007C320:;
  c->r[0]=R32(c->r[5]+0x00000054u); // 8007C320
  c->r[4]=c->r[4]+0x00000001u; // 8007C324
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C328
  if (!crb(c,2)) { goto L_8007C334; } // 8007C32C
  goto L_8007C36C; // 8007C330
L_8007C334:;
  c->r[0]=R32(c->r[5]+0x00000064u); // 8007C334
  c->r[4]=c->r[4]+0x00000001u; // 8007C338
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C33C
  if (!crb(c,2)) { goto L_8007C348; } // 8007C340
  goto L_8007C36C; // 8007C344
L_8007C348:;
  c->r[0]=R32(c->r[5]+0x00000074u); // 8007C348
  c->r[4]=c->r[4]+0x00000001u; // 8007C34C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8007C350
  if (!crb(c,2)) { goto L_8007C35C; } // 8007C354
  goto L_8007C36C; // 8007C358
L_8007C35C:;
  c->r[4]=c->r[4]+0x00000001u; // 8007C35C
  c->r[5]=c->r[5]+0x00000080u; // 8007C360
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007C2C0; } // 8007C364
  c->r[4]=0u+0xFFFFFFFFu; // 8007C368
L_8007C36C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; cr0(c,c->r[0]); // 8007C36C
  if (crb(c,0)) { goto L_8007C37C; } // 8007C370
  c->r[3]=c->r[4]|c->r[4]; // 8007C374
  goto L_8007C5C0; // 8007C378
L_8007C37C:;
  c->r[3]=0u+0x80410000u; // 8007C37C
  c->r[0]=0u+0x00000004u; // 8007C380
  c->r[3]=c->r[3]+0xFFFFEF98u; // 8007C384
  c->r[27]=0u+0x00000000u; // 8007C388
  c->ctr=c->r[0]; // 8007C38C
L_8007C390:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8007C390
  cmps(c,0,(int32_t)c->r[0],0); // 8007C394
  if (!crb(c,2)) { goto L_8007C3A0; } // 8007C398
  goto L_8007C44C; // 8007C39C
L_8007C3A0:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 8007C3A0
  c->r[27]=c->r[27]+0x00000001u; // 8007C3A4
  cmps(c,0,(int32_t)c->r[0],0); // 8007C3A8
  if (!crb(c,2)) { goto L_8007C3B4; } // 8007C3AC
  goto L_8007C44C; // 8007C3B0
L_8007C3B4:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 8007C3B4
  c->r[27]=c->r[27]+0x00000001u; // 8007C3B8
  cmps(c,0,(int32_t)c->r[0],0); // 8007C3BC
  if (!crb(c,2)) { goto L_8007C3C8; } // 8007C3C0
  goto L_8007C44C; // 8007C3C4
L_8007C3C8:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 8007C3C8
  c->r[27]=c->r[27]+0x00000001u; // 8007C3CC
  cmps(c,0,(int32_t)c->r[0],0); // 8007C3D0
  if (!crb(c,2)) { goto L_8007C3DC; } // 8007C3D4
  goto L_8007C44C; // 8007C3D8
L_8007C3DC:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 8007C3DC
  c->r[27]=c->r[27]+0x00000001u; // 8007C3E0
  cmps(c,0,(int32_t)c->r[0],0); // 8007C3E4
  if (!crb(c,2)) { goto L_8007C3F0; } // 8007C3E8
  goto L_8007C44C; // 8007C3EC
L_8007C3F0:;
  c->r[0]=R32(c->r[3]+0x00000058u); // 8007C3F0
  c->r[27]=c->r[27]+0x00000001u; // 8007C3F4
  cmps(c,0,(int32_t)c->r[0],0); // 8007C3F8
  if (!crb(c,2)) { goto L_8007C404; } // 8007C3FC
  goto L_8007C44C; // 8007C400
L_8007C404:;
  c->r[0]=R32(c->r[3]+0x00000068u); // 8007C404
  c->r[27]=c->r[27]+0x00000001u; // 8007C408
  cmps(c,0,(int32_t)c->r[0],0); // 8007C40C
  if (!crb(c,2)) { goto L_8007C418; } // 8007C410
  goto L_8007C44C; // 8007C414
L_8007C418:;
  c->r[0]=R32(c->r[3]+0x00000078u); // 8007C418
  c->r[27]=c->r[27]+0x00000001u; // 8007C41C
  cmps(c,0,(int32_t)c->r[0],0); // 8007C420
  if (!crb(c,2)) { goto L_8007C42C; } // 8007C424
  goto L_8007C44C; // 8007C428
L_8007C42C:;
  c->r[27]=c->r[27]+0x00000001u; // 8007C42C
  c->r[3]=c->r[3]+0x00000080u; // 8007C430
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007C390; } // 8007C434
  c->r[3]=0u+0x80360000u; // 8007C438
  c->r[3]=c->r[3]+0x000002DCu; // 8007C43C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8007C440
  c->lr=0x8007C448u; f_80121B20(c); // 8007C444
  c->r[27]=0u+0xFFFFFFFFu; // 8007C448
L_8007C44C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8007C44C
  if (crb(c,2)) { goto L_8007C46C; } // 8007C450
  c->r[3]=c->r[24]|c->r[24]; // 8007C454
  c->r[4]=0u+0xFFFFFF00u; // 8007C458
  c->r[5]=0u+0x00000004u; // 8007C45C
  c->lr=0x8007C464u; f_8000AD60(c); // 8007C460
  c->r[29]=c->r[3]|c->r[3]; // 8007C464
  goto L_8007C480; // 8007C468
L_8007C46C:;
  c->r[3]=c->r[24]|c->r[24]; // 8007C46C
  c->r[4]=0u+0x10000000u; // 8007C470
  c->r[5]=0u+0x00000004u; // 8007C474
  c->lr=0x8007C47Cu; f_8000AD60(c); // 8007C478
  c->r[29]=c->r[3]|c->r[3]; // 8007C47C
L_8007C480:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 8007C480
  cmpu(c,0,c->r[0],0x0000FEFFu); // 8007C484
  if (crb(c,2)) { goto L_8007C494; } // 8007C488
  c->r[3]=0u+0xFFFFFFFFu; // 8007C48C
  goto L_8007C5C0; // 8007C490
L_8007C494:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007C494
  c->r[28]=0u+0x80410000u; // 8007C498
  c->r[26]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8007C49C
  c->r[3]=c->r[29]+0x00000002u; // 8007C4A0
  c->r[28]=c->r[28]+0xFFFFEF98u; // 8007C4A4
  W32(c->r[28]+c->r[26],c->r[30]); // 8007C4A8
  c->r[4]=c->r[28]+c->r[26]; // 8007C4AC
  W32(c->r[4]+0x00000004u,c->r[24]); // 8007C4B0
  c->lr=0x8007C4B8u; f_8007C140(c); // 8007C4B4
  c->r[31]=c->r[3]|c->r[3]; // 8007C4B8
  c->r[3]=c->r[1]+0x00000008u; // 8007C4BC
  c->r[5]=c->r[29]+0x00000002u; // 8007C4C0
  c->r[4]=0u+0x00000020u; // 8007C4C4
  c->r[6]=0u+0x00000000u; // 8007C4C8
  c->lr=0x8007C4D0u; f_80069360(c); // 8007C4CC
  c->r[29]=c->r[28]+c->r[26]; // 8007C4D0
  c->r[3]=c->r[1]+0x00000008u; // 8007C4D4
  c->lr=0x8007C4DCu; f_802F047C(c); // 8007C4D8
  cmps(c,0,(int32_t)c->r[30],0); // 8007C4DC
  W32(c->r[29]+0x00000008u,c->r[3]); // 8007C4E0
  if (crb(c,2)) { goto L_8007C510; } // 8007C4E4
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007C4E8
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007C4EC
  c->r[26]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8007C4F0
  c->r[3]=0u+0x00000004u; // 8007C4F4
  c->r[4]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8007C4F8
  c->lr=0x8007C500u; f_8000DE90(c); // 8007C4FC
  c->r[4]=c->r[28]+c->r[26]; // 8007C500
  c->r[30]=c->r[3]|c->r[3]; // 8007C504
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8007C508
  goto L_8007C538; // 8007C50C
L_8007C510:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007C510
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007C514
  c->r[26]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8007C518
  c->r[5]=0u+0x10000000u; // 8007C51C
  c->r[3]=0u+0x00000001u; // 8007C520
  c->r[4]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8007C524
  c->lr=0x8007C52Cu; f_8000DEB0(c); // 8007C528
  c->r[4]=c->r[28]+c->r[26]; // 8007C52C
  c->r[30]=c->r[3]|c->r[3]; // 8007C530
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 8007C534
L_8007C538:;
  c->r[25]=0u+0x00000000u; // 8007C538
  goto L_8007C5B0; // 8007C53C
L_8007C540:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 8007C540
  c->r[3]=c->r[31]|c->r[31]; // 8007C544
  c->lr=0x8007C54Cu; f_8007C140(c); // 8007C548
  c->r[26]=c->r[3]|c->r[3]; // 8007C54C
  c->r[5]=c->r[31]|c->r[31]; // 8007C550
  c->r[3]=c->r[1]+0x00000008u; // 8007C554
  c->r[4]=0u+0x00000020u; // 8007C558
  c->r[6]=0u+0x00000000u; // 8007C55C
  c->lr=0x8007C564u; f_80069360(c); // 8007C560
  c->r[3]=c->r[31]|c->r[31]; // 8007C564
  c->r[4]=c->r[1]+0x00000008u; // 8007C568
  c->lr=0x8007C570u; f_802EE808(c); // 8007C56C
  c->r[31]=c->r[26]|c->r[26]; // 8007C570
  c->r[28]=c->r[30]|c->r[30]; // 8007C574
  c->r[24]=0u+0x00000000u; // 8007C578
L_8007C57C:;
  W32(c->r[28]+0x00000004u,c->r[31]); // 8007C57C
  c->r[3]=c->r[31]|c->r[31]; // 8007C580
  c->lr=0x8007C588u; f_8007C140(c); // 8007C584
  c->r[26]=c->r[3]|c->r[3]; // 8007C588
  c->r[3]=c->r[31]|c->r[31]; // 8007C58C
  c->lr=0x8007C594u; f_8007C1C0(c); // 8007C590
  c->r[24]=c->r[24]+0x00000001u; // 8007C594
  c->r[31]=c->r[26]|c->r[26]; // 8007C598
  cmps(c,0,(int32_t)c->r[24],7); // 8007C59C
  c->r[28]=c->r[28]+0x00000004u; // 8007C5A0
  if (crb(c,0)) { IRQCHK(c); goto L_8007C57C; } // 8007C5A4
  c->r[30]=c->r[30]+0x00000020u; // 8007C5A8
  c->r[25]=c->r[25]+0x00000001u; // 8007C5AC
L_8007C5B0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8007C5B0
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 8007C5B4
  if (crb(c,0)) { IRQCHK(c); goto L_8007C540; } // 8007C5B8
  c->r[3]=c->r[27]|c->r[27]; // 8007C5BC
L_8007C5C0:;
  c->r[11]=c->r[1]+0x00000050u; // 8007C5C0
  c->lr=0x8007C5C8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007C5C4
  c->r[0]=R32(c->r[1]+0x00000054u); // 8007C5C8
  c->lr=c->r[0]; // 8007C5CC
  c->r[1]=c->r[1]+0x00000050u; // 8007C5D0
  return; // 8007C5D4
}

// fn_8007C5E0
void f_8007C5E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C5E0
  c->r[0]=c->lr; // 8007C5E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C5E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C5EC
  c->r[31]=0u+0x80410000u; // 8007C5F0
  c->r[31]=c->r[31]+0xFFFFEF98u; // 8007C5F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007C5F8
  c->r[30]=0u+0x00000000u; // 8007C5FC
L_8007C600:;
  c->r[3]=c->r[31]|c->r[31]; // 8007C600
  c->r[4]=0u+0x00000000u; // 8007C604
  c->r[5]=0u+0x00000010u; // 8007C608
  c->lr=0x8007C610u; f_80004714(c); // 8007C60C
  c->r[30]=c->r[30]+0x00000001u; // 8007C610
  c->r[31]=c->r[31]+0x00000010u; // 8007C614
  cmps(c,0,(int32_t)c->r[30],32); // 8007C618
  if (crb(c,0)) { IRQCHK(c); goto L_8007C600; } // 8007C61C
  c->r[3]=0u+0x01860000u; // 8007C620
  c->r[4]=0u+0x00000001u; // 8007C624
  c->lr=0x8007C62Cu; f_8007C290(c); // 8007C628
  c->r[3]=0u+0x01800000u; // 8007C62C
  c->r[4]=0u+0x00000001u; // 8007C630
  c->lr=0x8007C638u; f_8007C290(c); // 8007C634
  c->r[3]=0u+0x01830000u; // 8007C638
  c->r[4]=0u+0x00000001u; // 8007C63C
  c->lr=0x8007C644u; f_8007C290(c); // 8007C640
  c->r[3]=0u+0x01810000u; // 8007C644
  c->r[4]=0u+0x00000001u; // 8007C648
  c->lr=0x8007C650u; f_8007C290(c); // 8007C64C
  c->r[3]=0u+0x01820000u; // 8007C650
  c->r[4]=0u+0x00000001u; // 8007C654
  c->lr=0x8007C65Cu; f_8007C290(c); // 8007C658
  c->r[3]=0u+0x01850000u; // 8007C65C
  c->r[4]=0u+0x00000001u; // 8007C660
  c->lr=0x8007C668u; f_8007C290(c); // 8007C664
  c->r[3]=0u+0x01840000u; // 8007C668
  c->r[4]=0u+0x00000001u; // 8007C66C
  c->lr=0x8007C674u; f_8007C290(c); // 8007C670
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C674
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C678
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007C67C
  c->lr=c->r[0]; // 8007C680
  c->r[1]=c->r[1]+0x00000010u; // 8007C684
  return; // 8007C688
}

// fn_8007C690
void f_8007C690(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 8007C690
  f_8007C290(c); return; // 8007C694
}

// fn_8007C6A0
void f_8007C6A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C6A0
  c->r[0]=c->lr; // 8007C6A4
  cmps(c,0,(int32_t)c->r[3],-1); // 8007C6A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C6AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007C6B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007C6B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007C6B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007C6BC
  c->r[28]=c->r[4]|c->r[4]; // 8007C6C0
  if (!crb(c,2)) { goto L_8007C6D4; } // 8007C6C4
  c->r[3]=c->r[28]|c->r[28]; // 8007C6C8
  c->lr=0x8007C6D0u; f_8007C770(c); // 8007C6CC
  goto L_8007C748; // 8007C6D0
L_8007C6D4:;
  c->r[4]=0u+0x80410000u; // 8007C6D4
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8007C6D8
  c->r[4]=c->r[4]+0xFFFFEF98u; // 8007C6DC
  c->r[31]=0u+0x00000000u; // 8007C6E0
  c->r[3]=c->r[4]+c->r[0]; // 8007C6E4
  c->r[30]=R32(c->r[3]+0x00000008u); // 8007C6E8
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 8007C6EC
  goto L_8007C724; // 8007C6F0
L_8007C6F4:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8007C6F4
  c->r[4]=c->r[28]|c->r[28]; // 8007C6F8
  c->lr=0x8007C700u; f_802EE984(c); // 8007C6FC
  cmps(c,0,(int32_t)c->r[3],0); // 8007C700
  if (!crb(c,2)) { goto L_8007C71C; } // 8007C704
  c->lr=0x8007C70Cu; f_800656D0(c); // 8007C708
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8007C70C
  c->r[3]=c->r[29]+c->r[0]; // 8007C710
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007C714
  goto L_8007C748; // 8007C718
L_8007C71C:;
  c->r[29]=c->r[29]+0x00000020u; // 8007C71C
  c->r[31]=c->r[31]+0x00000001u; // 8007C720
L_8007C724:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 8007C724
  if (crb(c,0)) { IRQCHK(c); goto L_8007C6F4; } // 8007C728
  c->r[31]=0u+0x80410000u; // 8007C72C
  c->r[5]=c->r[28]|c->r[28]; // 8007C730
  c->r[3]=c->r[31]+0xFFFFF698u; // 8007C734
  c->r[4]=0u+0x00000010u; // 8007C738
  c->r[6]=0u+0x00000000u; // 8007C73C
  c->lr=0x8007C744u; f_800692B0(c); // 8007C740
  c->r[3]=c->r[31]+0xFFFFF698u; // 8007C744
L_8007C748:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C748
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007C74C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007C750
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007C754
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007C758
  c->lr=c->r[0]; // 8007C75C
  c->r[1]=c->r[1]+0x00000020u; // 8007C760
  return; // 8007C764
}

// fn_8007C770
void f_8007C770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C770
  c->r[0]=c->lr; // 8007C774
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007C778
  c->r[11]=c->r[1]+0x00000020u; // 8007C77C
  c->lr=0x8007C784u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007C780
  c->r[31]=0u+0x80410000u; // 8007C784
  c->r[26]=c->r[3]|c->r[3]; // 8007C788
  c->r[31]=c->r[31]+0xFFFFEF98u; // 8007C78C
  c->r[27]=0u+0x00000000u; // 8007C790
L_8007C794:;
  c->r[29]=R32(c->r[31]+0x00000008u); // 8007C794
  c->r[30]=0u+0x00000000u; // 8007C798
  c->r[28]=R32(c->r[31]+0x0000000Cu); // 8007C79C
  goto L_8007C7D4; // 8007C7A0
L_8007C7A4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8007C7A4
  c->r[4]=c->r[26]|c->r[26]; // 8007C7A8
  c->lr=0x8007C7B0u; f_802EE984(c); // 8007C7AC
  cmps(c,0,(int32_t)c->r[3],0); // 8007C7B0
  if (!crb(c,2)) { goto L_8007C7CC; } // 8007C7B4
  c->lr=0x8007C7BCu; f_800656D0(c); // 8007C7B8
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8007C7BC
  c->r[3]=c->r[28]+c->r[0]; // 8007C7C0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007C7C4
  goto L_8007C808; // 8007C7C8
L_8007C7CC:;
  c->r[28]=c->r[28]+0x00000020u; // 8007C7CC
  c->r[30]=c->r[30]+0x00000001u; // 8007C7D0
L_8007C7D4:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[29]); // 8007C7D4
  if (crb(c,0)) { IRQCHK(c); goto L_8007C7A4; } // 8007C7D8
  c->r[27]=c->r[27]+0x00000001u; // 8007C7DC
  c->r[31]=c->r[31]+0x00000010u; // 8007C7E0
  cmps(c,0,(int32_t)c->r[27],32); // 8007C7E4
  if (crb(c,0)) { IRQCHK(c); goto L_8007C794; } // 8007C7E8
  c->r[31]=0u+0x80410000u; // 8007C7EC
  c->r[5]=c->r[26]|c->r[26]; // 8007C7F0
  c->r[3]=c->r[31]+0xFFFFF698u; // 8007C7F4
  c->r[4]=0u+0x00000010u; // 8007C7F8
  c->r[6]=0u+0x00000000u; // 8007C7FC
  c->lr=0x8007C804u; f_800692B0(c); // 8007C800
  c->r[3]=c->r[31]+0xFFFFF698u; // 8007C804
L_8007C808:;
  c->r[11]=c->r[1]+0x00000020u; // 8007C808
  c->lr=0x8007C810u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007C80C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007C810
  c->lr=c->r[0]; // 8007C814
  c->r[1]=c->r[1]+0x00000020u; // 8007C818
  return; // 8007C81C
}

// fn_8007C820
void f_8007C820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C820
  c->r[0]=c->lr; // 8007C824
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007C828
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007C82C
  c->r[31]=0u+0x80410000u; // 8007C830
  c->r[31]=c->r[31]+0xFFFFEF98u; // 8007C834
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007C838
  c->r[30]=0u+0x00000000u; // 8007C83C
L_8007C840:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 8007C840
  cmps(c,0,(int32_t)c->r[0],0); // 8007C844
  if (!crb(c,2)) { goto L_8007C85C; } // 8007C848
  c->r[3]=c->r[31]|c->r[31]; // 8007C84C
  c->r[4]=0u+0x00000000u; // 8007C850
  c->r[5]=0u+0x00000010u; // 8007C854
  c->lr=0x8007C85Cu; f_80004714(c); // 8007C858
L_8007C85C:;
  c->r[30]=c->r[30]+0x00000001u; // 8007C85C
  c->r[31]=c->r[31]+0x00000010u; // 8007C860
  cmps(c,0,(int32_t)c->r[30],32); // 8007C864
  if (crb(c,0)) { IRQCHK(c); goto L_8007C840; } // 8007C868
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007C86C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007C870
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007C874
  c->lr=c->r[0]; // 8007C878
  c->r[1]=c->r[1]+0x00000010u; // 8007C87C
  return; // 8007C880
}

// fn_8007C890
void f_8007C890(Ctx* __restrict c) {
  c->r[4]=0u+0x80410000u; // 8007C890
  c->r[0]=rotl(c->r[3],7)&0xFFFFFF80u; // 8007C894
  c->r[4]=c->r[4]+0xFFFFF198u; // 8007C898
  c->r[3]=c->r[4]+c->r[0]; // 8007C89C
  return; // 8007C8A0
}

// fn_8007C8B0
void f_8007C8B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C8B0
  c->r[0]=c->lr; // 8007C8B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8007C8B8
  c->r[11]=c->r[1]+0x00000030u; // 8007C8BC
  c->lr=0x8007C8C4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007C8C0
  c->r[31]=0u+0x80410000u; // 8007C8C4
  c->r[24]=c->r[3]|c->r[3]; // 8007C8C8
  c->r[31]=c->r[31]+0xFFFFEF98u; // 8007C8CC
  c->r[25]=c->r[4]|c->r[4]; // 8007C8D0
  c->r[26]=c->r[31]+0x00000000u; // 8007C8D4
  c->r[30]=0u+0x00000000u; // 8007C8D8
L_8007C8DC:;
  c->r[28]=R32(c->r[26]+0x00000008u); // 8007C8DC
  c->r[27]=0u+0x00000000u; // 8007C8E0
  c->r[29]=R32(c->r[26]+0x0000000Cu); // 8007C8E4
  goto L_8007C91C; // 8007C8E8
L_8007C8EC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8007C8EC
  c->r[4]=c->r[24]|c->r[24]; // 8007C8F0
  c->lr=0x8007C8F8u; f_802EE984(c); // 8007C8F4
  cmps(c,0,(int32_t)c->r[3],0); // 8007C8F8
  if (!crb(c,2)) { goto L_8007C914; } // 8007C8FC
  c->lr=0x8007C904u; f_800656D0(c); // 8007C900
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8007C904
  c->r[3]=c->r[29]+c->r[0]; // 8007C908
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007C90C
  goto L_8007C94C; // 8007C910
L_8007C914:;
  c->r[29]=c->r[29]+0x00000020u; // 8007C914
  c->r[27]=c->r[27]+0x00000001u; // 8007C918
L_8007C91C:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 8007C91C
  if (crb(c,0)) { IRQCHK(c); goto L_8007C8EC; } // 8007C920
  c->r[30]=c->r[30]+0x00000001u; // 8007C924
  c->r[26]=c->r[26]+0x00000010u; // 8007C928
  cmps(c,0,(int32_t)c->r[30],32); // 8007C92C
  if (crb(c,0)) { IRQCHK(c); goto L_8007C8DC; } // 8007C930
  c->r[5]=c->r[24]|c->r[24]; // 8007C934
  c->r[3]=c->r[31]+0x00000700u; // 8007C938
  c->r[4]=0u+0x00000010u; // 8007C93C
  c->r[6]=0u+0x00000000u; // 8007C940
  c->lr=0x8007C948u; f_800692B0(c); // 8007C944
  c->r[4]=c->r[31]+0x00000700u; // 8007C948
L_8007C94C:;
  c->r[3]=rotl(c->r[25],7)&0xFFFFFF80u; // 8007C94C
  c->r[0]=c->r[31]+0x00000200u; // 8007C950
  c->r[3]=c->r[0]+c->r[3]; // 8007C954
  c->lr=0x8007C95Cu; f_80069420(c); // 8007C958
  c->r[11]=c->r[1]+0x00000030u; // 8007C95C
  c->lr=0x8007C964u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007C960
  c->r[0]=R32(c->r[1]+0x00000034u); // 8007C964
  c->lr=c->r[0]; // 8007C968
  c->r[1]=c->r[1]+0x00000030u; // 8007C96C
  return; // 8007C970
}

// fn_8007C980
void f_8007C980(Ctx* __restrict c) {
  c->r[6]=0u+0x80410000u; // 8007C980
  c->r[0]=rotl(c->r[4],7)&0xFFFFFF80u; // 8007C984
  c->r[6]=c->r[6]+0xFFFFF198u; // 8007C988
  c->r[5]=c->r[3]|c->r[3]; // 8007C98C
  c->r[3]=c->r[6]+c->r[0]; // 8007C990
  c->r[4]=0u+0x00000040u; // 8007C994
  c->r[6]=0u+0x00000000u; // 8007C998
  f_800692B0(c); return; // 8007C99C
}

// fn_8007C9A0
void f_8007C9A0(Ctx* __restrict c) {
  c->r[5]=0u+0x80410000u; // 8007C9A0
  c->r[0]=rotl(c->r[4],7)&0xFFFFFF80u; // 8007C9A4
  c->r[5]=c->r[5]+0xFFFFF198u; // 8007C9A8
  c->r[4]=c->r[3]|c->r[3]; // 8007C9AC
  c->r[3]=c->r[5]+c->r[0]; // 8007C9B0
  f_80069420(c); return; // 8007C9B4
}

// fn_8007C9C0
void f_8007C9C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007C9C0
  c->r[0]=c->lr; // 8007C9C4
  W32(c->r[1]+0x00000084u,c->r[0]); // 8007C9C8
  c->r[11]=c->r[1]+0x00000080u; // 8007C9CC
  c->lr=0x8007C9D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007C9D0
  c->r[5]=0u+0x80300000u; // 8007C9D4
  c->r[0]=0u+0x0000000Cu; // 8007C9D8
  c->r[5]=c->r[5]+0xFFFFE400u; // 8007C9DC
  c->r[27]=c->r[4]|c->r[4]; // 8007C9E0
  c->r[30]=c->r[3]|c->r[3]; // 8007C9E4
  c->r[6]=c->r[1]+0x00000004u; // 8007C9E8
  c->r[4]=c->r[5]+0xFFFFFFFCu; // 8007C9EC
  c->ctr=c->r[0]; // 8007C9F0
  c->r[0]=c->r[0]|0x00000000u; // 8007C9F4
L_8007C9F8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8007C9F8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8007C9FC
  W32(c->r[6]+0x00000004u,c->r[3]); // 8007CA00
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8007CA04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007C9F8; } // 8007CA08
  c->r[29]=c->r[1]+0x00000008u; // 8007CA0C
  c->r[31]=0u+0x00000000u; // 8007CA10
  c->r[28]=0u+0x00000000u; // 8007CA14
  goto L_8007CA5C; // 8007CA18
L_8007CA1C:;
  c->r[4]=c->r[27]|c->r[27]; // 8007CA1C
  c->r[5]=0u+0x00000008u; // 8007CA20
  c->lr=0x8007CA28u; f_802EEAA0(c); // 8007CA24
  cmps(c,0,(int32_t)c->r[3],0); // 8007CA28
  if (!crb(c,2)) { goto L_8007CA54; } // 8007CA2C
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8007CA30
  c->r[3]=c->r[1]+0x00000014u; // 8007CA34
  c->r[0]=R32(c->r[3]+c->r[0]); // 8007CA38
  cmps(c,0,(int32_t)c->r[0],0); // 8007CA3C
  if (crb(c,2)) { goto L_8007CA4C; } // 8007CA40
  c->r[31]=0u+0x00000002u; // 8007CA44
  goto L_8007CA6C; // 8007CA48
L_8007CA4C:;
  c->r[31]=0u+0x00000001u; // 8007CA4C
  goto L_8007CA6C; // 8007CA50
L_8007CA54:;
  c->r[29]=c->r[29]+0x00000018u; // 8007CA54
  c->r[28]=c->r[28]+0x00000001u; // 8007CA58
L_8007CA5C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8007CA5C
  c->r[0]=R8(c->r[3]+0x00000000u); // 8007CA60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8007CA64
  if (!crb(c,2)) { IRQCHK(c); goto L_8007CA1C; } // 8007CA68
L_8007CA6C:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CA6C
  c->r[6]=c->r[27]|c->r[27]; // 8007CA70
  c->r[4]=0u+0x0000000Au; // 8007CA74
  c->r[5]=0u+0xFFFFFFFFu; // 8007CA78
  c->lr=0x8007CA80u; f_80079580(c); // 8007CA7C
  cmps(c,0,(int32_t)c->r[31],0); // 8007CA80
  if (crb(c,2)) { goto L_8007CA9C; } // 8007CA84
  cmps(c,0,(int32_t)c->r[31],1); // 8007CA88
  if (crb(c,2)) { goto L_8007CAEC; } // 8007CA8C
  cmps(c,0,(int32_t)c->r[31],2); // 8007CA90
  if (crb(c,2)) { goto L_8007CBC0; } // 8007CA94
  goto L_8007CCD0; // 8007CA98
L_8007CA9C:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CA9C
  c->r[4]=0u+0x00000000u; // 8007CAA0
  c->r[5]=0u+0x00000000u; // 8007CAA4
  c->lr=0x8007CAACu; f_8007B180(c); // 8007CAA8
  c->r[3]=c->r[30]|c->r[30]; // 8007CAAC
  c->r[4]=0u+0x00000001u; // 8007CAB0
  c->r[5]=0u+0x00000000u; // 8007CAB4
  c->lr=0x8007CABCu; f_8007B180(c); // 8007CAB8
  c->r[3]=c->r[30]|c->r[30]; // 8007CABC
  c->r[4]=0u+0x00000002u; // 8007CAC0
  c->r[5]=0u+0x00000000u; // 8007CAC4
  c->lr=0x8007CACCu; f_8007B180(c); // 8007CAC8
  c->r[3]=c->r[30]|c->r[30]; // 8007CACC
  c->r[4]=0u+0x00000003u; // 8007CAD0
  c->r[5]=0u+0x00000000u; // 8007CAD4
  c->lr=0x8007CADCu; f_8007B180(c); // 8007CAD8
  c->r[3]=c->r[30]|c->r[30]; // 8007CADC
  c->r[4]=0u+0x00000000u; // 8007CAE0
  c->lr=0x8007CAE8u; f_80078360(c); // 8007CAE4
  goto L_8007CCD0; // 8007CAE8
L_8007CAEC:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CAEC
  c->r[4]=0u+0x00000000u; // 8007CAF0
  c->r[5]=0u+0x00000000u; // 8007CAF4
  c->lr=0x8007CAFCu; f_8007B180(c); // 8007CAF8
  c->r[3]=c->r[30]|c->r[30]; // 8007CAFC
  c->r[4]=0u+0x00000001u; // 8007CB00
  c->r[5]=0u+0x00000000u; // 8007CB04
  c->lr=0x8007CB0Cu; f_8007B180(c); // 8007CB08
  c->r[3]=c->r[30]|c->r[30]; // 8007CB0C
  c->r[4]=0u+0x00000002u; // 8007CB10
  c->r[5]=0u+0x00000000u; // 8007CB14
  c->lr=0x8007CB1Cu; f_8007B180(c); // 8007CB18
  c->r[3]=c->r[30]|c->r[30]; // 8007CB1C
  c->r[4]=0u+0x00000003u; // 8007CB20
  c->r[5]=0u+0x00000001u; // 8007CB24
  c->lr=0x8007CB2Cu; f_8007B180(c); // 8007CB28
  c->r[3]=c->r[30]|c->r[30]; // 8007CB2C
  c->r[4]=0u+0x00000001u; // 8007CB30
  c->lr=0x8007CB38u; f_80078360(c); // 8007CB34
  c->lr=0x8007CB3Cu; f_800656B0(c); // 8007CB38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8007CB3C
  cmpu(c,0,c->r[0],0x00000001u); // 8007CB40
  if (!crb(c,2)) { goto L_8007CB7C; } // 8007CB44
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8007CB48
  c->r[29]=c->r[1]+0x00000018u; // 8007CB4C
  c->r[3]=c->r[30]|c->r[30]; // 8007CB50
  c->r[4]=0u+0x0000000Eu; // 8007CB54
  c->r[6]=R32(c->r[29]+c->r[28]); // 8007CB58
  c->r[5]=0u+0xFFFFFFFFu; // 8007CB5C
  c->lr=0x8007CB64u; f_80079580(c); // 8007CB60
  c->r[6]=R32(c->r[29]+c->r[28]); // 8007CB64
  c->r[3]=c->r[30]|c->r[30]; // 8007CB68
  c->r[4]=0u+0x0000000Fu; // 8007CB6C
  c->r[5]=0u+0xFFFFFFFFu; // 8007CB70
  c->lr=0x8007CB78u; f_80079580(c); // 8007CB74
  goto L_8007CBAC; // 8007CB78
L_8007CB7C:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8007CB7C
  c->r[29]=c->r[1]+0x00000010u; // 8007CB80
  c->r[3]=c->r[30]|c->r[30]; // 8007CB84
  c->r[4]=0u+0x0000000Eu; // 8007CB88
  c->r[6]=R32(c->r[29]+c->r[28]); // 8007CB8C
  c->r[5]=0u+0xFFFFFFFFu; // 8007CB90
  c->lr=0x8007CB98u; f_80079580(c); // 8007CB94
  c->r[6]=R32(c->r[29]+c->r[28]); // 8007CB98
  c->r[3]=c->r[30]|c->r[30]; // 8007CB9C
  c->r[4]=0u+0x0000000Fu; // 8007CBA0
  c->r[5]=0u+0xFFFFFFFFu; // 8007CBA4
  c->lr=0x8007CBACu; f_80079580(c); // 8007CBA8
L_8007CBAC:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CBAC
  c->r[4]=0u+0x0000000Cu; // 8007CBB0
  c->r[5]=0u+0x00000001u; // 8007CBB4
  c->lr=0x8007CBBCu; f_80078400(c); // 8007CBB8
  goto L_8007CCD0; // 8007CBBC
L_8007CBC0:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CBC0
  c->r[4]=0u+0x00000000u; // 8007CBC4
  c->r[5]=0u+0x00000001u; // 8007CBC8
  c->lr=0x8007CBD0u; f_8007B180(c); // 8007CBCC
  c->r[3]=c->r[30]|c->r[30]; // 8007CBD0
  c->r[4]=0u+0x00000001u; // 8007CBD4
  c->r[5]=0u+0x00000001u; // 8007CBD8
  c->lr=0x8007CBE0u; f_8007B180(c); // 8007CBDC
  c->r[3]=c->r[30]|c->r[30]; // 8007CBE0
  c->r[4]=0u+0x00000002u; // 8007CBE4
  c->r[5]=0u+0x00000001u; // 8007CBE8
  c->lr=0x8007CBF0u; f_8007B180(c); // 8007CBEC
  c->r[3]=c->r[30]|c->r[30]; // 8007CBF0
  c->r[4]=0u+0x00000003u; // 8007CBF4
  c->r[5]=0u+0x00000000u; // 8007CBF8
  c->lr=0x8007CC00u; f_8007B180(c); // 8007CBFC
  c->r[3]=c->r[30]|c->r[30]; // 8007CC00
  c->r[4]=0u+0x00000001u; // 8007CC04
  c->lr=0x8007CC0Cu; f_80078360(c); // 8007CC08
  c->r[3]=c->r[30]|c->r[30]; // 8007CC0C
  c->r[4]=0u+0x00000002u; // 8007CC10
  c->r[5]=0u+0x00000002u; // 8007CC14
  c->lr=0x8007CC1Cu; f_80078400(c); // 8007CC18
  c->r[3]=c->r[30]|c->r[30]; // 8007CC1C
  c->r[4]=0u+0x00000002u; // 8007CC20
  c->r[5]=0u+0x00000005u; // 8007CC24
  c->r[6]=0u+0x00000005u; // 8007CC28
  c->r[7]=0u+0xFFFFFFFFu; // 8007CC2C
  c->r[8]=0u+0xFFFFFFFFu; // 8007CC30
  c->lr=0x8007CC38u; f_80079D60(c); // 8007CC34
  c->r[3]=c->r[30]|c->r[30]; // 8007CC38
  c->r[4]=0u+0x00000005u; // 8007CC3C
  c->r[5]=0u+0x00000002u; // 8007CC40
  c->r[6]=0u+0x00000002u; // 8007CC44
  c->r[7]=0u+0xFFFFFFFFu; // 8007CC48
  c->r[8]=0u+0xFFFFFFFFu; // 8007CC4C
  c->lr=0x8007CC54u; f_80079D60(c); // 8007CC50
  c->lr=0x8007CC58u; f_800656B0(c); // 8007CC54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8007CC58
  cmpu(c,0,c->r[0],0x00000001u); // 8007CC5C
  if (!crb(c,2)) { goto L_8007CC9C; } // 8007CC60
  c->r[29]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8007CC64
  c->r[5]=c->r[1]+0x00000018u; // 8007CC68
  c->r[3]=c->r[30]|c->r[30]; // 8007CC6C
  c->r[4]=0u+0x00000001u; // 8007CC70
  c->r[6]=R32(c->r[5]+c->r[29]); // 8007CC74
  c->r[5]=0u+0xFFFFFFFFu; // 8007CC78
  c->lr=0x8007CC80u; f_80079580(c); // 8007CC7C
  c->r[4]=c->r[1]+0x0000001Cu; // 8007CC80
  c->r[3]=c->r[30]|c->r[30]; // 8007CC84
  c->r[6]=R32(c->r[4]+c->r[29]); // 8007CC88
  c->r[4]=0u+0x00000004u; // 8007CC8C
  c->r[5]=0u+0xFFFFFFFFu; // 8007CC90
  c->lr=0x8007CC98u; f_80079580(c); // 8007CC94
  goto L_8007CCD0; // 8007CC98
L_8007CC9C:;
  c->r[29]=(uint32_t)((int32_t)c->r[28]*(int32_t)24); // 8007CC9C
  c->r[5]=c->r[1]+0x00000010u; // 8007CCA0
  c->r[3]=c->r[30]|c->r[30]; // 8007CCA4
  c->r[4]=0u+0x00000001u; // 8007CCA8
  c->r[6]=R32(c->r[5]+c->r[29]); // 8007CCAC
  c->r[5]=0u+0xFFFFFFFFu; // 8007CCB0
  c->lr=0x8007CCB8u; f_80079580(c); // 8007CCB4
  c->r[4]=c->r[1]+0x00000014u; // 8007CCB8
  c->r[3]=c->r[30]|c->r[30]; // 8007CCBC
  c->r[6]=R32(c->r[4]+c->r[29]); // 8007CCC0
  c->r[4]=0u+0x00000004u; // 8007CCC4
  c->r[5]=0u+0xFFFFFFFFu; // 8007CCC8
  c->lr=0x8007CCD0u; f_80079580(c); // 8007CCCC
L_8007CCD0:;
  c->r[3]=c->r[30]|c->r[30]; // 8007CCD0
  c->lr=0x8007CCD8u; f_80077B20(c); // 8007CCD4
  c->r[11]=c->r[1]+0x00000080u; // 8007CCD8
  c->r[3]=c->r[31]|c->r[31]; // 8007CCDC
  c->lr=0x8007CCE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007CCE0
  c->r[0]=R32(c->r[1]+0x00000084u); // 8007CCE4
  c->lr=c->r[0]; // 8007CCE8
  c->r[1]=c->r[1]+0x00000080u; // 8007CCEC
  return; // 8007CCF0
}

// fn_8007CD00
void f_8007CD00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CD00
  c->r[0]=c->lr; // 8007CD04
  W32(c->r[1]+0x00000054u,c->r[0]); // 8007CD08
  c->r[11]=c->r[1]+0x00000050u; // 8007CD0C
  c->lr=0x8007CD14u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007CD10
  c->r[27]=0u+0x00000000u; // 8007CD14
  W32(c->r[13]+0xFFFFB858u,c->r[27]); // 8007CD18
  c->r[28]=0u+0x00000001u; // 8007CD1C
  c->r[26]=0u+0x00000000u; // 8007CD20
  W32(c->r[13]+0xFFFFB85Cu,c->r[27]); // 8007CD24
  c->r[25]=0u+0x00000000u; // 8007CD28
  c->r[22]=0u+0x00000000u; // 8007CD2C
  c->r[21]=0u+0x00000000u; // 8007CD30
  W32(c->r[13]+0xFFFFB860u,c->r[27]); // 8007CD34
  c->lr=0x8007CD3Cu; f_800D06D0(c); // 8007CD38
  cmps(c,0,(int32_t)c->r[3],0); // 8007CD3C
  if (!crb(c,2)) { goto L_8007CD4C; } // 8007CD40
  c->r[21]=0u+0x00000001u; // 8007CD44
  c->lr=0x8007CD4Cu; f_800D0690(c); // 8007CD48
L_8007CD4C:;
  c->lr=0x8007CD50u; f_8000FAD0(c); // 8007CD4C
  c->r[24]=R32(c->r[3]+0x00000130u); // 8007CD50
  c->r[20]=c->r[1]+0x00000008u; // 8007CD54
  c->r[29]=0u+0x00000000u; // 8007CD58
L_8007CD5C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 8007CD5C
  c->lr=0x8007CD64u; f_800777E0(c); // 8007CD60
  cmps(c,0,(int32_t)c->r[3],0); // 8007CD64
  if (crb(c,2)) { goto L_8007CD84; } // 8007CD68
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 8007CD6C
  c->lr=0x8007CD74u; f_80077800(c); // 8007CD70
  W8(c->r[20]+0x00000000u,c->r[3]); // 8007CD74
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 8007CD78
  c->r[4]=0u+0x00000001u; // 8007CD7C
  c->lr=0x8007CD84u; f_80077830(c); // 8007CD80
L_8007CD84:;
  c->r[29]=c->r[29]+0x00000001u; // 8007CD84
  c->r[20]=c->r[20]+0x00000001u; // 8007CD88
  cmps(c,0,(int32_t)c->r[29],16); // 8007CD8C
  if (crb(c,0)) { IRQCHK(c); goto L_8007CD5C; } // 8007CD90
  c->r[5]=0u+0x80360000u; // 8007CD94
  c->r[3]=0u+0x01640000u; // 8007CD98
  c->r[5]=c->r[5]+0x00000040u; // 8007CD9C
  c->r[4]=0u+0x000000C8u; // 8007CDA0
  c->lr=0x8007CDA8u; f_800776C0(c); // 8007CDA4
  W16(c->r[13]+0xFFFF86B6u,c->r[3]); // 8007CDA8
  c->r[31]=c->r[3]|c->r[3]; // 8007CDAC
  c->r[3]=0u+0x00000001u; // 8007CDB0
  c->lr=0x8007CDB8u; f_80077920(c); // 8007CDB4
  c->r[29]=c->r[3]|c->r[3]; // 8007CDB8
  c->r[3]=0u+0x00000000u; // 8007CDBC
  c->lr=0x8007CDC4u; f_800785B0(c); // 8007CDC0
  c->r[30]=c->r[3]|c->r[3]; // 8007CDC4
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CDC8
  c->r[4]=0u+0x00000000u; // 8007CDCC
  c->lr=0x8007CDD4u; f_80077980(c); // 8007CDD0
  goto L_8007CF38; // 8007CDD4
L_8007CDD8:;
  c->lr=0x8007CDDCu; f_8000FF80(c); // 8007CDD8
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CDDC
  c->lr=0x8007CDE4u; f_80077C60(c); // 8007CDE0
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 8007CDE4
  c->r[20]=c->r[3]|c->r[3]; // 8007CDE8
  if (crb(c,2)) { goto L_8007CDFC; } // 8007CDEC
  cmps(c,0,(int32_t)c->r[0],1); // 8007CDF0
  if (crb(c,2)) { goto L_8007CE70; } // 8007CDF4
  goto L_8007CF38; // 8007CDF8
L_8007CDFC:;
  c->r[4]=c->r[24]|c->r[24]; // 8007CDFC
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CE00
  c->lr=0x8007CE08u; f_8007C9C0(c); // 8007CE04
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8007CE08
  c->r[23]=c->r[3]|c->r[3]; // 8007CE0C
  cmpu(c,0,c->r[0],0x00000001u); // 8007CE10
  if (!crb(c,1)) { goto L_8007CE24; } // 8007CE14
  cmps(c,0,(int32_t)c->r[0],2); // 8007CE18
  if (crb(c,2)) { goto L_8007CE40; } // 8007CE1C
  goto L_8007CE4C; // 8007CE20
L_8007CE24:;
  c->r[3]=0u+0x00000000u; // 8007CE24
  c->r[4]=0u+0x00000000u; // 8007CE28
  c->lr=0x8007CE30u; f_800785F0(c); // 8007CE2C
  c->r[3]=0u+0x00000001u; // 8007CE30
  c->r[4]=0u+0x00000001u; // 8007CE34
  c->lr=0x8007CE3Cu; f_80077980(c); // 8007CE38
  goto L_8007CE4C; // 8007CE3C
L_8007CE40:;
  c->r[3]=0u+0x00000000u; // 8007CE40
  c->r[4]=0u+0x00000001u; // 8007CE44
  c->lr=0x8007CE4Cu; f_800785F0(c); // 8007CE48
L_8007CE4C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CE4C
  c->r[4]=0u+0x00000001u; // 8007CE50
  c->lr=0x8007CE58u; f_80077830(c); // 8007CE54
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CE58
  c->r[4]=0u+0x00000001u; // 8007CE5C
  c->lr=0x8007CE64u; f_80077980(c); // 8007CE60
  c->r[25]=0u+0x00000000u; // 8007CE64
  c->r[26]=0u+0x00000000u; // 8007CE68
  c->r[27]=c->r[27]+0x00000001u; // 8007CE6C
L_8007CE70:;
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; cr0(c,c->r[0]); // 8007CE70
  if (crb(c,2)) { goto L_8007CE8C; } // 8007CE74
  cmps(c,0,(int32_t)c->r[0],1); // 8007CE78
  if (crb(c,2)) { goto L_8007CEC0; } // 8007CE7C
  cmps(c,0,(int32_t)c->r[0],2); // 8007CE80
  if (crb(c,2)) { goto L_8007CF00; } // 8007CE84
  goto L_8007CF38; // 8007CE88
L_8007CE8C:;
  c->r[0]=R32(c->r[13]+0xFFFFB85Cu); // 8007CE8C
  cmps(c,0,(int32_t)c->r[0],0); // 8007CE90
  if (crb(c,2)) { goto L_8007CEA4; } // 8007CE94
  c->r[28]=0u+0x00000000u; // 8007CE98
  c->r[22]=0u+0x00000003u; // 8007CE9C
  goto L_8007CF38; // 8007CEA0
L_8007CEA4:;
  c->r[0]=R32(c->r[13]+0xFFFFB860u); // 8007CEA4
  cmps(c,0,(int32_t)c->r[0],0); // 8007CEA8
  if (crb(c,2)) { goto L_8007CF38; } // 8007CEAC
  c->r[27]=0u+0x00000000u; // 8007CEB0
  W32(c->r[13]+0xFFFFB860u,c->r[27]); // 8007CEB4
  c->r[24]=c->r[0]|c->r[0]; // 8007CEB8
  goto L_8007CF38; // 8007CEBC
L_8007CEC0:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; cr0(c,c->r[0]); // 8007CEC0
  if (crb(c,2)) { goto L_8007CED4; } // 8007CEC4
  cmps(c,0,(int32_t)c->r[0],1); // 8007CEC8
  if (crb(c,2)) { goto L_8007CEE8; } // 8007CECC
  goto L_8007CF38; // 8007CED0
L_8007CED4:;
  cmps(c,0,(int32_t)c->r[25],60); // 8007CED4
  c->r[25]=c->r[25]+0x00000001u; // 8007CED8
  if (crb(c,0)) { goto L_8007CF38; } // 8007CEDC
  c->r[26]=c->r[26]+0x00000001u; // 8007CEE0
  goto L_8007CF38; // 8007CEE4
L_8007CEE8:;
  c->r[0]=R16(c->r[13]+0xFFFFB3B0u); // 8007CEE8
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8007CEEC
  if (crb(c,2)) { goto L_8007CF38; } // 8007CEF0
  c->r[22]=0u+0x00000003u; // 8007CEF4
  c->r[28]=0u+0x00000000u; // 8007CEF8
  goto L_8007CF38; // 8007CEFC
L_8007CF00:;
  c->r[0]=R16(c->r[13]+0xFFFFB3B0u); // 8007CF00
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8007CF04
  if (crb(c,2)) { goto L_8007CF30; } // 8007CF08
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[20]; // 8007CF0C
  cmps(c,0,(int32_t)c->r[0],2); // 8007CF10
  if (crb(c,2)) { goto L_8007CF24; } // 8007CF14
  cmps(c,0,(int32_t)c->r[0],5); // 8007CF18
  if (crb(c,2)) { goto L_8007CF2C; } // 8007CF1C
  goto L_8007CF30; // 8007CF20
L_8007CF24:;
  c->r[22]=0u+0x00000001u; // 8007CF24
  goto L_8007CF30; // 8007CF28
L_8007CF2C:;
  c->r[22]=0u+0x00000002u; // 8007CF2C
L_8007CF30:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CF30
  c->lr=0x8007CF38u; f_80078060(c); // 8007CF34
L_8007CF38:;
  cmps(c,0,(int32_t)c->r[28],0); // 8007CF38
  if (!crb(c,2)) { IRQCHK(c); goto L_8007CDD8; } // 8007CF3C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CF40
  c->r[4]=0u+0x00000001u; // 8007CF44
  c->lr=0x8007CF4Cu; f_80077830(c); // 8007CF48
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8007CF4C
  c->lr=0x8007CF54u; f_80077520(c); // 8007CF50
  c->r[0]=0u+0xFFFFFFFFu; // 8007CF54
  W16(c->r[13]+0xFFFF86B6u,c->r[0]); // 8007CF58
  c->r[20]=c->r[1]+0x00000008u; // 8007CF5C
  c->r[24]=0u+0x00000000u; // 8007CF60
L_8007CF64:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[24]; // 8007CF64
  c->lr=0x8007CF6Cu; f_800777E0(c); // 8007CF68
  cmps(c,0,(int32_t)c->r[3],0); // 8007CF6C
  if (crb(c,2)) { goto L_8007CF80; } // 8007CF70
  c->r[4]=R8(c->r[20]+0x00000000u); // 8007CF74
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[24]; // 8007CF78
  c->lr=0x8007CF80u; f_80077830(c); // 8007CF7C
L_8007CF80:;
  c->r[24]=c->r[24]+0x00000001u; // 8007CF80
  c->r[20]=c->r[20]+0x00000001u; // 8007CF84
  cmps(c,0,(int32_t)c->r[24],16); // 8007CF88
  if (crb(c,0)) { IRQCHK(c); goto L_8007CF64; } // 8007CF8C
  c->r[0]=rotl(c->r[23],0)&0x000000FFu; // 8007CF90
  W32(c->r[13]+0xFFFFB858u,c->r[22]); // 8007CF94
  cmps(c,0,(int32_t)c->r[0],1); // 8007CF98
  if (!crb(c,2)) { goto L_8007CFAC; } // 8007CF9C
  c->r[4]=c->r[29]|c->r[29]; // 8007CFA0
  c->r[3]=0u+0x00000001u; // 8007CFA4
  c->lr=0x8007CFACu; f_80077980(c); // 8007CFA8
L_8007CFAC:;
  c->r[4]=c->r[30]|c->r[30]; // 8007CFAC
  c->r[3]=0u+0x00000000u; // 8007CFB0
  c->lr=0x8007CFB8u; f_800785F0(c); // 8007CFB4
  cmps(c,0,(int32_t)c->r[21],0); // 8007CFB8
  if (crb(c,2)) { goto L_8007CFC4; } // 8007CFBC
  c->lr=0x8007CFC4u; f_800D06B0(c); // 8007CFC0
L_8007CFC4:;
  c->lr=0x8007CFC8u; f_8000FE40(c); // 8007CFC4
L_8007CFC8:;
  c->lr=0x8007CFCCu; f_8000FF80(c); // 8007CFC8
  IRQCHK(c); goto L_8007CFC8; // 8007CFCC
}

// fn_8007CFD0
void f_8007CFD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007CFD0
  c->r[0]=c->lr; // 8007CFD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007CFD8
  c->r[0]=R32(c->r[13]+0xFFFFB864u); // 8007CFDC
  cmps(c,0,(int32_t)c->r[0],0); // 8007CFE0
  if (!crb(c,2)) { goto L_8007D034; } // 8007CFE4
  c->r[0]=0u+0x00000001u; // 8007CFE8
  W32(c->r[13]+0xFFFFB864u,c->r[0]); // 8007CFEC
  c->r[3]=0u+0x00000000u; // 8007CFF0
  c->lr=0x8007CFF8u; f_800087B0(c); // 8007CFF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8007CFF8
  cmpu(c,0,c->r[0],0x00000001u); // 8007CFFC
  if (!crb(c,2)) { goto L_8007D034; } // 8007D000
  c->r[3]=0u+0x80360000u; // 8007D004
  c->r[3]=c->r[3]+0x00000344u; // 8007D008
  c->lr=0x8007D010u; f_8007D050(c); // 8007D00C
  c->r[3]=0u+0x0000001Eu; // 8007D010
  c->lr=0x8007D018u; f_8000FF20(c); // 8007D014
L_8007D018:;
  c->r[0]=R16(c->r[13]+0xFFFFB3B0u); // 8007D018
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8007D01C
  if (crb(c,2)) { goto L_8007D02C; } // 8007D020
  c->lr=0x8007D028u; f_8007D170(c); // 8007D024
  goto L_8007D034; // 8007D028
L_8007D02C:;
  c->lr=0x8007D030u; f_8000FF80(c); // 8007D02C
  IRQCHK(c); goto L_8007D018; // 8007D030
L_8007D034:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D034
  c->lr=c->r[0]; // 8007D038
  c->r[1]=c->r[1]+0x00000010u; // 8007D03C
  return; // 8007D040
}

// fn_8007D050
void f_8007D050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D050
  c->r[0]=c->lr; // 8007D054
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D05C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D060
  c->r[30]=c->r[3]|c->r[3]; // 8007D064
  c->lr=0x8007D06Cu; f_800656B0(c); // 8007D068
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8007D06C
  cmpu(c,0,c->r[0],0x00000001u); // 8007D070
  if (!crb(c,2)) { goto L_8007D0DC; } // 8007D074
  c->r[3]=c->r[30]|c->r[30]; // 8007D078
  c->r[4]=c->r[13]+0xFFFF86BCu; // 8007D07C
  c->r[5]=0u+0x00000006u; // 8007D080
  c->lr=0x8007D088u; f_802EEAA0(c); // 8007D084
  cmps(c,0,(int32_t)c->r[3],0); // 8007D088
  if (crb(c,2)) { goto L_8007D0A8; } // 8007D08C
  c->r[3]=c->r[30]|c->r[30]; // 8007D090
  c->r[4]=c->r[13]+0xFFFF86C4u; // 8007D094
  c->r[5]=0u+0x00000006u; // 8007D098
  c->lr=0x8007D0A0u; f_802EEAA0(c); // 8007D09C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D0A0
  if (!crb(c,2)) { goto L_8007D0C8; } // 8007D0A4
L_8007D0A8:;
  c->r[31]=0u+0x80410000u; // 8007D0A8
  c->r[4]=c->r[30]|c->r[30]; // 8007D0AC
  c->r[3]=c->r[31]+0xFFFFF6B8u; // 8007D0B0
  c->lr=0x8007D0B8u; f_802EE808(c); // 8007D0B4
  c->r[3]=c->r[31]+0xFFFFF6B8u; // 8007D0B8
  c->r[4]=c->r[13]+0xFFFF86CCu; // 8007D0BC
  c->lr=0x8007D0C4u; f_802EE90C(c); // 8007D0C0
  goto L_8007D0EC; // 8007D0C4
L_8007D0C8:;
  c->r[3]=0u+0x80410000u; // 8007D0C8
  c->r[4]=c->r[30]|c->r[30]; // 8007D0CC
  c->r[3]=c->r[3]+0xFFFFF6B8u; // 8007D0D0
  c->lr=0x8007D0D8u; f_802EE808(c); // 8007D0D4
  goto L_8007D0EC; // 8007D0D8
L_8007D0DC:;
  c->r[3]=0u+0x80410000u; // 8007D0DC
  c->r[4]=c->r[30]|c->r[30]; // 8007D0E0
  c->r[3]=c->r[3]+0xFFFFF6B8u; // 8007D0E4
  c->lr=0x8007D0ECu; f_802EE808(c); // 8007D0E8
L_8007D0EC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF86B6u); // 8007D0EC
  cmps(c,0,(int32_t)c->r[0],-1); // 8007D0F0
  if (crb(c,2)) { goto L_8007D108; } // 8007D0F4
  c->r[3]=0u+0x80410000u; // 8007D0F8
  c->r[3]=c->r[3]+0xFFFFF6B8u; // 8007D0FC
  W32(c->r[13]+0xFFFFB860u,c->r[3]); // 8007D100
  goto L_8007D13C; // 8007D104
L_8007D108:;
  c->r[0]=0u+0x00000000u; // 8007D108
  W32(c->r[13]+0xFFFFB858u,c->r[0]); // 8007D10C
  c->lr=0x8007D114u; f_8000FAD0(c); // 8007D110
  c->r[4]=0u+0x80080000u; // 8007D114
  c->r[7]=c->r[3]|c->r[3]; // 8007D118
  c->r[3]=c->r[4]+0xFFFFCD00u; // 8007D11C
  c->r[5]=0u+0x00003000u; // 8007D120
  c->r[4]=0u+0x00000064u; // 8007D124
  c->r[6]=0u+0x00000000u; // 8007D128
  c->lr=0x8007D130u; f_8000F9D0(c); // 8007D12C
  c->r[4]=0u+0x80410000u; // 8007D130
  c->r[4]=c->r[4]+0xFFFFF6B8u; // 8007D134
  W32(c->r[3]+0x00000130u,c->r[4]); // 8007D138
L_8007D13C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D13C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D140
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D144
  c->lr=c->r[0]; // 8007D148
  c->r[1]=c->r[1]+0x00000010u; // 8007D14C
  return; // 8007D150
}

// fn_8007D160
void f_8007D160(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB858u); // 8007D160
  return; // 8007D164
}

// fn_8007D170
void f_8007D170(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 8007D170
  W32(c->r[13]+0xFFFFB85Cu,c->r[0]); // 8007D174
  return; // 8007D178
}

// fn_8007D180
void f_8007D180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D180
  c->r[0]=c->lr; // 8007D184
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007D188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007D18C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007D190
  c->r[30]=c->r[3]|c->r[3]; // 8007D194
  c->lr=0x8007D19Cu; f_800656B0(c); // 8007D198
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8007D19C
  cmpu(c,0,c->r[0],0x00000001u); // 8007D1A0
  if (!crb(c,2)) { goto L_8007D20C; } // 8007D1A4
  c->r[3]=c->r[30]|c->r[30]; // 8007D1A8
  c->r[4]=c->r[13]+0xFFFF86BCu; // 8007D1AC
  c->r[5]=0u+0x00000006u; // 8007D1B0
  c->lr=0x8007D1B8u; f_802EEAA0(c); // 8007D1B4
  cmps(c,0,(int32_t)c->r[3],0); // 8007D1B8
  if (crb(c,2)) { goto L_8007D1D8; } // 8007D1BC
  c->r[3]=c->r[30]|c->r[30]; // 8007D1C0
  c->r[4]=c->r[13]+0xFFFF86C4u; // 8007D1C4
  c->r[5]=0u+0x00000006u; // 8007D1C8
  c->lr=0x8007D1D0u; f_802EEAA0(c); // 8007D1CC
  cmps(c,0,(int32_t)c->r[3],0); // 8007D1D0
  if (!crb(c,2)) { goto L_8007D1F8; } // 8007D1D4
L_8007D1D8:;
  c->r[31]=0u+0x80410000u; // 8007D1D8
  c->r[4]=c->r[30]|c->r[30]; // 8007D1DC
  c->r[3]=c->r[31]+0xFFFFF6C8u; // 8007D1E0
  c->lr=0x8007D1E8u; f_802EE808(c); // 8007D1E4
  c->r[3]=c->r[31]+0xFFFFF6C8u; // 8007D1E8
  c->r[4]=c->r[13]+0xFFFF86CCu; // 8007D1EC
  c->lr=0x8007D1F4u; f_802EE90C(c); // 8007D1F0
  goto L_8007D21C; // 8007D1F4
L_8007D1F8:;
  c->r[3]=0u+0x80410000u; // 8007D1F8
  c->r[4]=c->r[30]|c->r[30]; // 8007D1FC
  c->r[3]=c->r[3]+0xFFFFF6C8u; // 8007D200
  c->lr=0x8007D208u; f_802EE808(c); // 8007D204
  goto L_8007D21C; // 8007D208
L_8007D20C:;
  c->r[3]=0u+0x80410000u; // 8007D20C
  c->r[4]=c->r[30]|c->r[30]; // 8007D210
  c->r[3]=c->r[3]+0xFFFFF6C8u; // 8007D214
  c->lr=0x8007D21Cu; f_802EE808(c); // 8007D218
L_8007D21C:;
  c->r[3]=0u+0x80410000u; // 8007D21C
  c->r[3]=c->r[3]+0xFFFFF6C8u; // 8007D220
  W32(c->r[13]+0xFFFFB860u,c->r[3]); // 8007D224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007D228
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007D22C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007D230
  c->lr=c->r[0]; // 8007D234
  c->r[1]=c->r[1]+0x00000010u; // 8007D238
  return; // 8007D23C
}

// fn_8007D240
void f_8007D240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D240
  c->r[0]=c->lr; // 8007D244
  W32(c->r[1]+0x00000064u,c->r[0]); // 8007D248
  c->r[11]=c->r[1]+0x00000060u; // 8007D24C
  c->lr=0x8007D254u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007D250
  c->r[29]=0u+0x00000001u; // 8007D254
  c->r[28]=0u+0x00000000u; // 8007D258
  c->lr=0x8007D260u; f_8000FAD0(c); // 8007D25C
  c->r[0]=R32(c->r[3]+0x00000134u); // 8007D260
  c->r[16]=c->r[1]+0x00000008u; // 8007D264
  c->r[25]=R32(c->r[3]+0x00000130u); // 8007D268
  c->r[17]=0u+0x00000000u; // 8007D26C
  c->r[26]=R32(c->r[3]+0x00000138u); // 8007D270
  c->r[24]=rotl(c->r[0],0)&0x000000FFu; // 8007D274
L_8007D278:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[17]; // 8007D278
  c->lr=0x8007D280u; f_800777E0(c); // 8007D27C
  cmps(c,0,(int32_t)c->r[3],0); // 8007D280
  if (crb(c,2)) { goto L_8007D2A0; } // 8007D284
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[17]; // 8007D288
  c->lr=0x8007D290u; f_80077800(c); // 8007D28C
  W8(c->r[16]+0x00000000u,c->r[3]); // 8007D290
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[17]; // 8007D294
  c->r[4]=0u+0x00000001u; // 8007D298
  c->lr=0x8007D2A0u; f_80077830(c); // 8007D29C
L_8007D2A0:;
  c->r[17]=c->r[17]+0x00000001u; // 8007D2A0
  c->r[16]=c->r[16]+0x00000001u; // 8007D2A4
  cmps(c,0,(int32_t)c->r[17],16); // 8007D2A8
  if (crb(c,0)) { IRQCHK(c); goto L_8007D278; } // 8007D2AC
  c->r[5]=0u+0x80360000u; // 8007D2B0
  c->r[3]=0u+0x01630000u; // 8007D2B4
  c->r[5]=c->r[5]+0xFFFFFD98u; // 8007D2B8
  c->r[4]=0u+0x0000012Cu; // 8007D2BC
  c->lr=0x8007D2C4u; f_800776C0(c); // 8007D2C0
  c->r[30]=c->r[3]|c->r[3]; // 8007D2C4
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007D2C8
  c->r[4]=0u+0x00000020u; // 8007D2CC
  c->lr=0x8007D2D4u; f_80077AE0(c); // 8007D2D0
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D2D4
  c->r[4]=0u+0x00000000u; // 8007D2D8
  c->lr=0x8007D2E0u; f_80077980(c); // 8007D2DC
  c->r[31]=0u+0x80410000u; // 8007D2E0
  c->r[20]=0u+0x80410000u; // 8007D2E4
  c->r[22]=0u+0x00000000u; // 8007D2E8
  c->r[21]=0u+0x00000001u; // 8007D2EC
  goto L_8007D5D8; // 8007D2F0
L_8007D2F4:;
  c->lr=0x8007D2F8u; f_8000FF80(c); // 8007D2F4
  c->lr=0x8007D2FCu; f_80032D50(c); // 8007D2F8
  cmps(c,0,(int32_t)c->r[3],0); // 8007D2FC
  if (!crb(c,2)) { goto L_8007D5D8; } // 8007D300
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D304
  c->lr=0x8007D30Cu; f_80077C60(c); // 8007D308
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; cr0(c,c->r[0]); // 8007D30C
  if (crb(c,2)) { goto L_8007D330; } // 8007D310
  cmps(c,0,(int32_t)c->r[0],1); // 8007D314
  if (crb(c,2)) { goto L_8007D4D4; } // 8007D318
  cmps(c,0,(int32_t)c->r[0],2); // 8007D31C
  if (crb(c,2)) { goto L_8007D534; } // 8007D320
  cmps(c,0,(int32_t)c->r[0],3); // 8007D324
  if (crb(c,2)) { goto L_8007D5C0; } // 8007D328
  goto L_8007D5D8; // 8007D32C
L_8007D330:;
  c->r[16]=c->r[31]+0xFFFFEF98u; // 8007D330
  c->r[27]=0u+0x00000000u; // 8007D334
L_8007D338:;
  c->r[18]=R32(c->r[16]+0x00000008u); // 8007D338
  c->r[17]=0u+0x00000000u; // 8007D33C
  c->r[19]=R32(c->r[16]+0x0000000Cu); // 8007D340
  goto L_8007D378; // 8007D344
L_8007D348:;
  c->r[3]=R32(c->r[19]+0x00000000u); // 8007D348
  c->r[4]=c->r[25]|c->r[25]; // 8007D34C
  c->lr=0x8007D354u; f_802EE984(c); // 8007D350
  cmps(c,0,(int32_t)c->r[3],0); // 8007D354
  if (!crb(c,2)) { goto L_8007D370; } // 8007D358
  c->lr=0x8007D360u; f_800656D0(c); // 8007D35C
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8007D360
  c->r[3]=c->r[19]+c->r[0]; // 8007D364
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007D368
  goto L_8007D3A8; // 8007D36C
L_8007D370:;
  c->r[19]=c->r[19]+0x00000020u; // 8007D370
  c->r[17]=c->r[17]+0x00000001u; // 8007D374
L_8007D378:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[18]); // 8007D378
  if (crb(c,0)) { IRQCHK(c); goto L_8007D348; } // 8007D37C
  c->r[27]=c->r[27]+0x00000001u; // 8007D380
  c->r[16]=c->r[16]+0x00000010u; // 8007D384
  cmps(c,0,(int32_t)c->r[27],32); // 8007D388
  if (crb(c,0)) { IRQCHK(c); goto L_8007D338; } // 8007D38C
  c->r[5]=c->r[25]|c->r[25]; // 8007D390
  c->r[3]=c->r[20]+0xFFFFF698u; // 8007D394
  c->r[4]=0u+0x00000010u; // 8007D398
  c->r[6]=0u+0x00000000u; // 8007D39C
  c->lr=0x8007D3A4u; f_800692B0(c); // 8007D3A0
  c->r[3]=c->r[20]+0xFFFFF698u; // 8007D3A4
L_8007D3A8:;
  c->r[4]=0u+0x00000000u; // 8007D3A8
  c->r[0]=c->r[0]|0x00000000u; // 8007D3AC
L_8007D3B0:;
  c->r[5]=R16(c->r[3]+0x00000000u); // 8007D3B0
  cmps(c,0,(int32_t)c->r[5],0); // 8007D3B4
  if (!crb(c,2)) { goto L_8007D3C8; } // 8007D3B8
  c->r[0]=R16(c->r[3]+0x00000002u); // 8007D3BC
  cmps(c,0,(int32_t)c->r[0],0); // 8007D3C0
  if (crb(c,2)) { goto L_8007D3DC; } // 8007D3C4
L_8007D3C8:;
  cmpu(c,0,c->r[5],0x0000000Au); // 8007D3C8
  if (!crb(c,2)) { goto L_8007D3D4; } // 8007D3CC
  c->r[4]=c->r[4]+0x00000001u; // 8007D3D0
L_8007D3D4:;
  c->r[3]=c->r[3]+0x00000002u; // 8007D3D4
  IRQCHK(c); goto L_8007D3B0; // 8007D3D8
L_8007D3DC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8007D3DC
  if (crb(c,2)) { goto L_8007D3F0; } // 8007D3E0
  cmps(c,0,(int32_t)c->r[4],1); // 8007D3E4
  if (crb(c,2)) { goto L_8007D418; } // 8007D3E8
  goto L_8007D43C; // 8007D3EC
L_8007D3F0:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D3F0
  c->r[23]=0u+0x00000002u; // 8007D3F4
  c->r[4]=0u+0x00000004u; // 8007D3F8
  c->r[5]=0u+0x00000000u; // 8007D3FC
  c->lr=0x8007D404u; f_8007B180(c); // 8007D400
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D404
  c->r[4]=0u+0x00000005u; // 8007D408
  c->r[5]=0u+0x00000000u; // 8007D40C
  c->lr=0x8007D414u; f_8007B180(c); // 8007D410
  goto L_8007D43C; // 8007D414
L_8007D418:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D418
  c->r[23]=0u+0x00000012u; // 8007D41C
  c->r[4]=0u+0x00000002u; // 8007D420
  c->r[5]=0u+0x00000000u; // 8007D424
  c->lr=0x8007D42Cu; f_8007B180(c); // 8007D428
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D42C
  c->r[4]=0u+0x00000003u; // 8007D430
  c->r[5]=0u+0x00000000u; // 8007D434
  c->lr=0x8007D43Cu; f_8007B180(c); // 8007D438
L_8007D43C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D43C
  c->r[4]=0u+0x00000001u; // 8007D440
  c->lr=0x8007D448u; f_80077830(c); // 8007D444
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D448
  c->r[4]=0u+0x00000003u; // 8007D44C
  c->r[5]=0u+0xFFFFFFFFu; // 8007D450
  c->r[6]=0u+0xFFFFFFFFu; // 8007D454
  c->r[7]=0u+0xFFFFFFFFu; // 8007D458
  c->r[8]=0u+0x00000004u; // 8007D45C
  c->lr=0x8007D464u; f_80079D60(c); // 8007D460
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D464
  c->r[4]=0u+0x00000004u; // 8007D468
  c->r[5]=0u+0xFFFFFFFFu; // 8007D46C
  c->r[6]=0u+0xFFFFFFFFu; // 8007D470
  c->r[7]=0u+0x00000003u; // 8007D474
  c->r[8]=0u+0xFFFFFFFFu; // 8007D478
  c->lr=0x8007D480u; f_80079D60(c); // 8007D47C
  c->r[4]=c->r[23]|c->r[23]; // 8007D480
  c->r[6]=c->r[25]|c->r[25]; // 8007D484
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D488
  c->r[5]=0u+0xFFFFFFFFu; // 8007D48C
  c->lr=0x8007D494u; f_80079580(c); // 8007D490
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D494
  c->r[4]=0u+0x00000000u; // 8007D498
  c->lr=0x8007D4A0u; f_8007A8E0(c); // 8007D49C
  c->r[3]=0u+0x00000000u; // 8007D4A0
  c->lr=0x8007D4A8u; f_800785B0(c); // 8007D4A4
  c->r[27]=c->r[3]|c->r[3]; // 8007D4A8
  c->r[3]=0u+0x00000000u; // 8007D4AC
  c->r[4]=0u+0x00000001u; // 8007D4B0
  c->lr=0x8007D4B8u; f_800785F0(c); // 8007D4B4
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D4B8
  c->r[4]=0u+0x00000001u; // 8007D4BC
  c->lr=0x8007D4C4u; f_80077980(c); // 8007D4C0
  c->r[3]=0u+0x00000005u; // 8007D4C4
  c->lr=0x8007D4CCu; f_80083E90(c); // 8007D4C8
  c->r[28]=c->r[28]+0x00000001u; // 8007D4CC
  goto L_8007D5D8; // 8007D4D0
L_8007D4D4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D4D4
  c->r[4]=0u+0x00000000u; // 8007D4D8
  c->lr=0x8007D4E0u; f_8007B010(c); // 8007D4DC
  cmps(c,0,(int32_t)c->r[3],0); // 8007D4E0
  if (crb(c,2)) { goto L_8007D5D8; } // 8007D4E4
  cmps(c,0,(int32_t)c->r[24],0); // 8007D4E8
  if (!crb(c,2)) { goto L_8007D504; } // 8007D4EC
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D4F0
  c->r[4]=0u+0x00000003u; // 8007D4F4
  c->r[5]=0u+0x00000002u; // 8007D4F8
  c->lr=0x8007D500u; f_80078400(c); // 8007D4FC
  goto L_8007D514; // 8007D500
L_8007D504:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D504
  c->r[4]=0u+0x00000004u; // 8007D508
  c->r[5]=0u+0x00000002u; // 8007D50C
  c->lr=0x8007D514u; f_80078400(c); // 8007D510
L_8007D514:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D514
  c->r[4]=0u+0x00000001u; // 8007D518
  c->lr=0x8007D520u; f_80078360(c); // 8007D51C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D520
  c->r[4]=0u+0x00000000u; // 8007D524
  c->lr=0x8007D52Cu; f_80077830(c); // 8007D528
  c->r[28]=c->r[28]+0x00000001u; // 8007D52C
  goto L_8007D5D8; // 8007D530
L_8007D534:;
  c->r[0]=R16(c->r[13]+0xFFFFB3B0u); // 8007D534
  c->r[0]=rotl(c->r[0],0)&0x00000800u; cr0(c,c->r[0]); // 8007D538
  if (crb(c,2)) { goto L_8007D5B4; } // 8007D53C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007D540
  cmps(c,0,(int32_t)c->r[0],3); // 8007D544
  if (crb(c,2)) { goto L_8007D558; } // 8007D548
  cmps(c,0,(int32_t)c->r[0],4); // 8007D54C
  if (crb(c,2)) { goto L_8007D588; } // 8007D550
  goto L_8007D594; // 8007D554
L_8007D558:;
  c->r[3]=c->r[25]|c->r[25]; // 8007D558
  c->r[4]=c->r[13]+0xFFFF86D0u; // 8007D55C
  c->lr=0x8007D564u; f_802EE984(c); // 8007D560
  cmps(c,0,(int32_t)c->r[3],0); // 8007D564
  if (!crb(c,2)) { goto L_8007D578; } // 8007D568
  c->r[3]=0u+0x00000001u; // 8007D56C
  c->lr=0x8007D574u; f_80083E90(c); // 8007D570
  goto L_8007D580; // 8007D574
L_8007D578:;
  c->r[3]=0u+0x00000002u; // 8007D578
  c->lr=0x8007D580u; f_80083E90(c); // 8007D57C
L_8007D580:;
  W32(c->r[13]+0xFFFFB868u,c->r[21]); // 8007D580
  goto L_8007D594; // 8007D584
L_8007D588:;
  c->r[3]=0u+0x00000003u; // 8007D588
  c->lr=0x8007D590u; f_80083E90(c); // 8007D58C
  W32(c->r[13]+0xFFFFB868u,c->r[22]); // 8007D590
L_8007D594:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D594
  c->r[4]=0u+0x00000001u; // 8007D598
  c->lr=0x8007D5A0u; f_80077830(c); // 8007D59C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D5A0
  c->r[4]=0u+0x00000001u; // 8007D5A4
  c->lr=0x8007D5ACu; f_8007A8E0(c); // 8007D5A8
  c->r[28]=c->r[28]+0x00000001u; // 8007D5AC
  goto L_8007D5D8; // 8007D5B0
L_8007D5B4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D5B4
  c->lr=0x8007D5BCu; f_80078060(c); // 8007D5B8
  goto L_8007D5D8; // 8007D5BC
L_8007D5C0:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D5C0
  c->r[4]=0u+0x00000001u; // 8007D5C4
  c->lr=0x8007D5CCu; f_8007B010(c); // 8007D5C8
  cmps(c,0,(int32_t)c->r[3],0); // 8007D5CC
  if (crb(c,2)) { goto L_8007D5D8; } // 8007D5D0
  c->r[29]=0u+0x00000000u; // 8007D5D4
L_8007D5D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 8007D5D8
  if (!crb(c,2)) { IRQCHK(c); goto L_8007D2F4; } // 8007D5DC
  c->r[4]=c->r[27]|c->r[27]; // 8007D5E0
  c->r[3]=0u+0x00000000u; // 8007D5E4
  c->lr=0x8007D5ECu; f_800785F0(c); // 8007D5E8
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8007D5EC
  c->lr=0x8007D5F4u; f_80077520(c); // 8007D5F0
  c->r[17]=c->r[1]+0x00000008u; // 8007D5F4
  c->r[16]=0u+0x00000000u; // 8007D5F8
L_8007D5FC:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[16]; // 8007D5FC
  c->lr=0x8007D604u; f_800777E0(c); // 8007D600
  cmps(c,0,(int32_t)c->r[3],0); // 8007D604
  if (crb(c,2)) { goto L_8007D618; } // 8007D608
  c->r[4]=R8(c->r[17]+0x00000000u); // 8007D60C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[16]; // 8007D610
  c->lr=0x8007D618u; f_80077830(c); // 8007D614
L_8007D618:;
  c->r[16]=c->r[16]+0x00000001u; // 8007D618
  c->r[17]=c->r[17]+0x00000001u; // 8007D61C
  cmps(c,0,(int32_t)c->r[16],16); // 8007D620
  if (crb(c,0)) { IRQCHK(c); goto L_8007D5FC; } // 8007D624
  cmps(c,0,(int32_t)c->r[26],0); // 8007D628
  if (!crb(c,2)) { goto L_8007D65C; } // 8007D62C
  c->r[3]=0u+0x00000000u; // 8007D630
  c->lr=0x8007D638u; f_80032CA0(c); // 8007D634
  c->r[3]=0u+0x00000000u; // 8007D638
  c->r[4]=0u+0x00000000u; // 8007D63C
  c->lr=0x8007D644u; f_80039A00(c); // 8007D640
  c->r[3]=0u+0x0000000Fu; // 8007D644
  c->lr=0x8007D64Cu; f_80036D90(c); // 8007D648
  c->r[3]=0u+0x00000000u; // 8007D64C
  c->lr=0x8007D654u; f_8001AE60(c); // 8007D650
  c->r[3]=0u+0x00000000u; // 8007D654
  c->lr=0x8007D65Cu; f_80062D60(c); // 8007D658
L_8007D65C:;
  c->r[3]=0u+0x00000000u; // 8007D65C
  c->lr=0x8007D664u; f_800CEB30(c); // 8007D660
  c->lr=0x8007D668u; f_8000FAD0(c); // 8007D664
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8007D668
  c->lr=0x8007D670u; f_8000FFC0(c); // 8007D66C
  c->lr=0x8007D674u; f_8000FE40(c); // 8007D670
L_8007D674:;
  c->lr=0x8007D678u; f_8000FF80(c); // 8007D674
  IRQCHK(c); goto L_8007D674; // 8007D678
}

// fn_8007D680
void f_8007D680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D680
  c->r[0]=c->lr; // 8007D684
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007D688
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007D68C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007D690
  c->r[30]=c->r[4]|c->r[4]; // 8007D694
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007D698
  c->r[29]=c->r[3]|c->r[3]; // 8007D69C
  c->r[5]=R8(c->r[13]+0xFFFFB5DCu); // 8007D6A0
  c->r[0]=0u-c->r[5]; // 8007D6A4
  c->r[0]=c->r[0]|c->r[5]; // 8007D6A8
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 8007D6AC
  c->lr=0x8007D6B4u; f_80032D40(c); // 8007D6B0
  cmps(c,0,(int32_t)c->r[3],2); // 8007D6B4
  if (crb(c,2)) { goto L_8007D6C0; } // 8007D6B8
  c->r[31]=0u+0x00000001u; // 8007D6BC
L_8007D6C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007D6C0
  if (!crb(c,2)) { goto L_8007D704; } // 8007D6C4
  c->r[3]=0u+0x00000001u; // 8007D6C8
  c->lr=0x8007D6D0u; f_8001AE60(c); // 8007D6CC
  c->r[3]=0u+0x00000001u; // 8007D6D0
  c->lr=0x8007D6D8u; f_80062D60(c); // 8007D6D4
  {uint32_t ea=c->r[2]+0xFFFF8BE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007D6D8
  c->r[3]=0u+0x0000000Fu; // 8007D6DC
  c->lr=0x8007D6E4u; f_80036D70(c); // 8007D6E0
  c->r[5]=0u+0x80410000u; // 8007D6E4
  c->r[3]=0u+0x00000001u; // 8007D6E8
  c->r[5]=c->r[5]+0x00003168u; // 8007D6EC
  c->r[4]=0u+0x00000000u; // 8007D6F0
  c->r[5]=R32(c->r[5]+0x00000008u); // 8007D6F4
  c->lr=0x8007D6FCu; f_8003D880(c); // 8007D6F8
  c->r[3]=0u+0x00000001u; // 8007D6FC
  c->lr=0x8007D704u; f_80032CA0(c); // 8007D700
L_8007D704:;
  c->r[3]=0u+0x00000001u; // 8007D704
  c->lr=0x8007D70Cu; f_800CEB30(c); // 8007D708
  c->lr=0x8007D710u; f_8000FAD0(c); // 8007D70C
  c->r[4]=0u+0x80080000u; // 8007D710
  c->r[7]=c->r[3]|c->r[3]; // 8007D714
  c->r[3]=c->r[4]+0xFFFFD240u; // 8007D718
  c->r[5]=0u+0x00005000u; // 8007D71C
  c->r[4]=0u+0x00000064u; // 8007D720
  c->r[6]=0u+0x00000000u; // 8007D724
  c->lr=0x8007D72Cu; f_8000F9D0(c); // 8007D728
  W32(c->r[3]+0x00000130u,c->r[29]); // 8007D72C
  W32(c->r[3]+0x00000134u,c->r[30]); // 8007D730
  W32(c->r[3]+0x00000138u,c->r[31]); // 8007D734
  c->r[3]=0u+0xFFFFFFFFu; // 8007D738
  c->lr=0x8007D740u; f_8000FF20(c); // 8007D73C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007D740
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007D744
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007D748
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007D74C
  c->r[3]=R32(c->r[13]+0xFFFFB868u); // 8007D750
  c->lr=c->r[0]; // 8007D754
  c->r[1]=c->r[1]+0x00000020u; // 8007D758
  return; // 8007D75C
}

// fn_8007D760
void f_8007D760(Ctx* __restrict c) {
  c->r[5]=0u+0x80410000u; // 8007D760
  c->r[8]=0u+0x00000000u; // 8007D764
  c->r[5]=c->r[5]+0xFFFFF198u; // 8007D768
  c->r[0]=c->r[0]|0x00000000u; // 8007D76C
L_8007D770:;
  c->r[6]=R16(c->r[3]+0x00000000u); // 8007D770
  cmps(c,0,(int32_t)c->r[6],0); // 8007D774
  if (crb(c,2)) { goto L_8007D7E8; } // 8007D778
  cmpu(c,0,c->r[6],0x00000006u); // 8007D77C
  if (!crb(c,2)) { goto L_8007D7D0; } // 8007D780
  c->r[6]=R16(c->r[3]+0x00000004u); // 8007D784
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 8007D788
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007D78C
  c->r[6]=c->r[6]+0xFFFFFFD0u; // 8007D790
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[6]; // 8007D794
  c->r[7]=c->r[4]+c->r[0]; // 8007D798
  c->r[0]=rotl(c->r[6],7)&0xFFFFFF80u; // 8007D79C
  c->r[6]=c->r[5]+c->r[0]; // 8007D7A0
  c->r[0]=c->r[0]|0x00000000u; // 8007D7A4
L_8007D7A8:;
  c->r[0]=R16(c->r[6]+0x00000000u); // 8007D7A8
  cmps(c,0,(int32_t)c->r[0],0); // 8007D7AC
  if (crb(c,2)) { goto L_8007D7C8; } // 8007D7B0
  W16(c->r[7]+0x00000000u,c->r[0]); // 8007D7B4
  c->r[7]=c->r[7]+0x00000002u; // 8007D7B8
  c->r[8]=c->r[8]+0x00000001u; // 8007D7BC
  c->r[6]=c->r[6]+0x00000002u; // 8007D7C0
  IRQCHK(c); goto L_8007D7A8; // 8007D7C4
L_8007D7C8:;
  c->r[3]=c->r[3]+0x00000008u; // 8007D7C8
  IRQCHK(c); goto L_8007D770; // 8007D7CC
L_8007D7D0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 8007D7D0
  c->r[8]=c->r[8]+0x00000001u; // 8007D7D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007D7D8
  c->r[3]=c->r[3]+0x00000002u; // 8007D7DC
  W16(c->r[4]+c->r[0],c->r[6]); // 8007D7E0
  IRQCHK(c); goto L_8007D770; // 8007D7E4
L_8007D7E8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 8007D7E8
  c->r[0]=0u+0x00000000u; // 8007D7EC
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8007D7F0
  W16(c->r[4]+c->r[3],c->r[0]); // 8007D7F4
  c->r[3]=c->r[4]+c->r[3]; // 8007D7F8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8007D7FC
  return; // 8007D800
}

// fn_8007D810
void f_8007D810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFF790u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007D810
  c->r[0]=c->lr; // 8007D814
  W32(c->r[1]+0x00000874u,c->r[0]); // 8007D818
  c->r[11]=c->r[1]+0x00000870u; // 8007D81C
  c->lr=0x8007D824u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007D820
  c->r[28]=0u+0x00000001u; // 8007D824
  c->r[27]=0u+0x00000000u; // 8007D828
  c->lr=0x8007D830u; f_8000FAD0(c); // 8007D82C
  c->r[22]=R32(c->r[3]+0x00000130u); // 8007D830
  c->r[0]=0u+0x00000000u; // 8007D834
  c->r[29]=0u+0x80360000u; // 8007D838
  c->r[30]=0u+0x80410000u; // 8007D83C
  W16(c->r[1]+0x00000008u,c->r[0]); // 8007D840
  c->r[31]=0u+0x80410000u; // 8007D844
  goto L_8007DBA4; // 8007D848
L_8007D84C:;
  c->lr=0x8007D850u; f_8000FF80(c); // 8007D84C
  c->lr=0x8007D854u; f_80032D50(c); // 8007D850
  cmps(c,0,(int32_t)c->r[3],0); // 8007D854
  if (!crb(c,2)) { goto L_8007DBA4; } // 8007D858
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 8007D85C
  if (crb(c,2)) { goto L_8007D890; } // 8007D860
  cmps(c,0,(int32_t)c->r[0],1); // 8007D864
  if (crb(c,2)) { goto L_8007D948; } // 8007D868
  cmps(c,0,(int32_t)c->r[0],2); // 8007D86C
  if (crb(c,2)) { goto L_8007D974; } // 8007D870
  cmps(c,0,(int32_t)c->r[0],3); // 8007D874
  if (crb(c,2)) { goto L_8007DB2C; } // 8007D878
  cmps(c,0,(int32_t)c->r[0],4); // 8007D87C
  if (crb(c,2)) { goto L_8007DB68; } // 8007D880
  cmps(c,0,(int32_t)c->r[0],5); // 8007D884
  if (crb(c,2)) { goto L_8007DB8C; } // 8007D888
  goto L_8007DBA4; // 8007D88C
L_8007D890:;
  c->r[15]=c->r[1]+0x00000010u; // 8007D890
  c->r[26]=0u+0x00000000u; // 8007D894
L_8007D898:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007D898
  c->lr=0x8007D8A0u; f_80077800(c); // 8007D89C
  W8(c->r[15]+0x00000000u,c->r[3]); // 8007D8A0
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007D8A4
  c->r[4]=0u+0x00000001u; // 8007D8A8
  c->lr=0x8007D8B0u; f_80077830(c); // 8007D8AC
  c->r[26]=c->r[26]+0x00000001u; // 8007D8B0
  c->r[15]=c->r[15]+0x00000001u; // 8007D8B4
  cmps(c,0,(int32_t)c->r[26],16); // 8007D8B8
  if (crb(c,0)) { IRQCHK(c); goto L_8007D898; } // 8007D8BC
  c->r[5]=c->r[29]+0xFFFFF980u; // 8007D8C0
  c->r[21]=0u+0x00000000u; // 8007D8C4
  c->r[20]=0u+0x00000000u; // 8007D8C8
  c->r[19]=0u+0x00000001u; // 8007D8CC
  c->r[23]=0u+0x00000001u; // 8007D8D0
  c->r[3]=0u+0x017E0000u; // 8007D8D4
  c->r[4]=0u+0x000001F4u; // 8007D8D8
  c->lr=0x8007D8E0u; f_800776C0(c); // 8007D8DC
  c->r[26]=c->r[3]|c->r[3]; // 8007D8E0
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007D8E4
  c->lr=0x8007D8ECu; f_80077A30(c); // 8007D8E8
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007D8EC
  c->r[5]=c->r[1]+0x00000008u; // 8007D8F0
  c->r[4]=0u+0x00000001u; // 8007D8F4
  c->r[6]=0u+0x00000001u; // 8007D8F8
  c->lr=0x8007D900u; f_80079760(c); // 8007D8FC
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007D900
  c->r[4]=0u+0x00000001u; // 8007D904
  c->r[5]=0u+0x00000000u; // 8007D908
  c->lr=0x8007D910u; f_8007B180(c); // 8007D90C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007D910
  c->r[4]=0u+0x00000000u; // 8007D914
  c->r[5]=0u+0x00000000u; // 8007D918
  c->lr=0x8007D920u; f_8007A0B0(c); // 8007D91C
  c->r[3]=0u+0x00000022u; // 8007D920
  c->lr=0x8007D928u; f_80083E90(c); // 8007D924
  c->r[3]=0u+0x00000000u; // 8007D928
  c->lr=0x8007D930u; f_800785B0(c); // 8007D92C
  c->r[25]=c->r[3]|c->r[3]; // 8007D930
  c->r[3]=0u+0x00000000u; // 8007D934
  c->r[4]=0u+0x00000000u; // 8007D938
  c->lr=0x8007D940u; f_800785F0(c); // 8007D93C
  c->r[27]=c->r[27]+0x00000001u; // 8007D940
  goto L_8007DBA4; // 8007D944
L_8007D948:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007D948
  c->r[4]=0u+0x00000000u; // 8007D94C
  c->lr=0x8007D954u; f_8007A780(c); // 8007D950
  cmps(c,0,(int32_t)c->r[3],0); // 8007D954
  if (crb(c,2)) { goto L_8007DBA4; } // 8007D958
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007D95C
  c->r[4]=0u+0x00000000u; // 8007D960
  c->r[5]=0u+0x00000001u; // 8007D964
  c->lr=0x8007D96Cu; f_8007A0B0(c); // 8007D968
  c->r[27]=c->r[27]+0x00000001u; // 8007D96C
  goto L_8007DBA4; // 8007D970
L_8007D974:;
  c->r[15]=c->r[30]+0xFFFFEF98u; // 8007D974
  c->r[24]=0u+0x00000000u; // 8007D978
L_8007D97C:;
  c->r[17]=R32(c->r[15]+0x00000008u); // 8007D97C
  c->r[16]=0u+0x00000000u; // 8007D980
  c->r[18]=R32(c->r[15]+0x0000000Cu); // 8007D984
  goto L_8007D9BC; // 8007D988
L_8007D98C:;
  c->r[3]=R32(c->r[18]+0x00000000u); // 8007D98C
  c->r[4]=c->r[22]|c->r[22]; // 8007D990
  c->lr=0x8007D998u; f_802EE984(c); // 8007D994
  cmps(c,0,(int32_t)c->r[3],0); // 8007D998
  if (!crb(c,2)) { goto L_8007D9B4; } // 8007D99C
  c->lr=0x8007D9A4u; f_800656D0(c); // 8007D9A0
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8007D9A4
  c->r[3]=c->r[18]+c->r[0]; // 8007D9A8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007D9AC
  goto L_8007D9EC; // 8007D9B0
L_8007D9B4:;
  c->r[18]=c->r[18]+0x00000020u; // 8007D9B4
  c->r[16]=c->r[16]+0x00000001u; // 8007D9B8
L_8007D9BC:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[17]); // 8007D9BC
  if (crb(c,0)) { IRQCHK(c); goto L_8007D98C; } // 8007D9C0
  c->r[24]=c->r[24]+0x00000001u; // 8007D9C4
  c->r[15]=c->r[15]+0x00000010u; // 8007D9C8
  cmps(c,0,(int32_t)c->r[24],32); // 8007D9CC
  if (crb(c,0)) { IRQCHK(c); goto L_8007D97C; } // 8007D9D0
  c->r[5]=c->r[22]|c->r[22]; // 8007D9D4
  c->r[3]=c->r[31]+0xFFFFF698u; // 8007D9D8
  c->r[4]=0u+0x00000010u; // 8007D9DC
  c->r[6]=0u+0x00000000u; // 8007D9E0
  c->lr=0x8007D9E8u; f_800692B0(c); // 8007D9E4
  c->r[3]=c->r[31]+0xFFFFF698u; // 8007D9E8
L_8007D9EC:;
  c->r[4]=c->r[1]+0x00000020u; // 8007D9EC
  c->lr=0x8007D9F4u; f_8007D760(c); // 8007D9F0
  c->r[0]=R16(c->r[13]+0xFFFFB3B0u); // 8007D9F4
  c->r[24]=c->r[1]+0x00000020u; // 8007D9F8
  c->r[3]=rotl(c->r[21],1)&0x0001FFFEu; // 8007D9FC
  c->r[0]=c->r[0]&0x00002800u; cr0(c,c->r[0]); // 8007DA00
  c->r[24]=c->r[24]+c->r[3]; // 8007DA04
  if (crb(c,2)) { goto L_8007DA38; } // 8007DA08
  c->r[0]=c->r[0]|0x00000000u; // 8007DA0C
L_8007DA10:;
  c->r[0]=rotl(c->r[20],1)&0x0001FFFEu; // 8007DA10
  c->r[0]=R16(c->r[24]+c->r[0]); // 8007DA14
  cmps(c,0,(int32_t)c->r[0],0); // 8007DA18
  if (crb(c,2)) { goto L_8007DA28; } // 8007DA1C
  cmpu(c,0,c->r[0],0x00000004u); // 8007DA20
  if (!crb(c,2)) { goto L_8007DA30; } // 8007DA24
L_8007DA28:;
  c->r[19]=0u+0x00000000u; // 8007DA28
  goto L_8007DA38; // 8007DA2C
L_8007DA30:;
  c->r[20]=c->r[20]+0x00000001u; // 8007DA30
  IRQCHK(c); goto L_8007DA10; // 8007DA34
L_8007DA38:;
  c->lr=0x8007DA3Cu; f_800656B0(c); // 8007DA38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8007DA3C
  if (!crb(c,2)) { goto L_8007DA58; } // 8007DA40
  c->r[0]=rotl(c->r[23],0)&0x0000FFFFu; // 8007DA44
  cmpu(c,0,c->r[0],c->r[19]); // 8007DA48
  if (!crb(c,0)) { goto L_8007DA58; } // 8007DA4C
  c->r[23]=c->r[23]+0x00000001u; // 8007DA50
  goto L_8007DBA4; // 8007DA54
L_8007DA58:;
  c->r[0]=rotl(c->r[20],1)&0x0001FFFEu; // 8007DA58
  c->r[23]=0u+0x00000000u; // 8007DA5C
  c->r[0]=R16(c->r[24]+c->r[0]); // 8007DA60
  cmps(c,0,(int32_t)c->r[0],1); // 8007DA64
  if (crb(c,2)) { goto L_8007DA90; } // 8007DA68
  cmps(c,0,(int32_t)c->r[0],2); // 8007DA6C
  if (crb(c,2)) { goto L_8007DAAC; } // 8007DA70
  cmps(c,0,(int32_t)c->r[0],3); // 8007DA74
  if (crb(c,2)) { goto L_8007DAB8; } // 8007DA78
  cmps(c,0,(int32_t)c->r[0],4); // 8007DA7C
  if (crb(c,2)) { goto L_8007DAD4; } // 8007DA80
  cmps(c,0,(int32_t)c->r[0],0); // 8007DA84
  if (crb(c,2)) { goto L_8007DB08; } // 8007DA88
  goto L_8007DB10; // 8007DA8C
L_8007DA90:;
  c->r[20]=c->r[20]+0x00000001u; // 8007DA90
  c->r[0]=rotl(c->r[20],1)&0x0001FFFEu; // 8007DA94
  c->r[0]=R16(c->r[24]+c->r[0]); // 8007DA98
  cmpu(c,0,c->r[0],0x0000005Du); // 8007DA9C
  if (!crb(c,2)) { IRQCHK(c); goto L_8007DA90; } // 8007DAA0
  c->r[20]=c->r[20]+0x00000001u; // 8007DAA4
  goto L_8007DB14; // 8007DAA8
L_8007DAAC:;
  c->r[20]=c->r[20]+0x00000002u; // 8007DAAC
  goto L_8007DB14; // 8007DAB0
  c->r[0]=c->r[0]|0x00000000u; // 8007DAB4
L_8007DAB8:;
  c->r[20]=c->r[20]+0x00000001u; // 8007DAB8
  c->r[0]=rotl(c->r[20],1)&0x0001FFFEu; // 8007DABC
  c->r[0]=R16(c->r[24]+c->r[0]); // 8007DAC0
  cmpu(c,0,c->r[0],0x0000005Du); // 8007DAC4
  if (!crb(c,2)) { IRQCHK(c); goto L_8007DAB8; } // 8007DAC8
  c->r[20]=c->r[20]+0x00000002u; // 8007DACC
  goto L_8007DB14; // 8007DAD0
L_8007DAD4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007DAD4
  c->r[4]=0u+0x00000001u; // 8007DAD8
  c->r[5]=0u+0x00000001u; // 8007DADC
  c->lr=0x8007DAE4u; f_8007B180(c); // 8007DAE0
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007DAE4
  c->r[4]=0u+0x00000001u; // 8007DAE8
  c->r[5]=0u+0x00000001u; // 8007DAEC
  c->lr=0x8007DAF4u; f_8007A0B0(c); // 8007DAF0
  c->r[19]=0u+0x00000001u; // 8007DAF4
  c->r[23]=0u+0x00000001u; // 8007DAF8
  c->r[27]=c->r[27]+0x00000001u; // 8007DAFC
  c->r[20]=c->r[20]+0x00000003u; // 8007DB00
  goto L_8007DB14; // 8007DB04
L_8007DB08:;
  c->r[27]=0u+0x00000004u; // 8007DB08
  goto L_8007DB14; // 8007DB0C
L_8007DB10:;
  c->r[20]=c->r[20]+0x00000001u; // 8007DB10
L_8007DB14:;
  c->r[5]=c->r[24]|c->r[24]; // 8007DB14
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007DB18
  c->r[6]=rotl(c->r[20],0)&0x0000FFFFu; // 8007DB1C
  c->r[4]=0u+0x00000001u; // 8007DB20
  c->lr=0x8007DB28u; f_80079760(c); // 8007DB24
  goto L_8007DBA4; // 8007DB28
L_8007DB2C:;
  c->r[0]=R16(c->r[13]+0xFFFFB3B0u); // 8007DB2C
  c->r[0]=c->r[0]&0x00002800u; cr0(c,c->r[0]); // 8007DB30
  if (crb(c,2)) { goto L_8007DBA4; } // 8007DB34
  c->r[0]=c->r[20]+0x00000001u; // 8007DB38
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007DB3C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8007DB40
  c->r[20]=0u+0x00000000u; // 8007DB44
  c->r[21]=c->r[21]+c->r[0]; // 8007DB48
  c->r[4]=0u+0x00000001u; // 8007DB4C
  c->r[5]=0u+0x00000000u; // 8007DB50
  c->lr=0x8007DB58u; f_8007B180(c); // 8007DB54
  c->r[3]=0u+0x00000006u; // 8007DB58
  c->lr=0x8007DB60u; f_80083E90(c); // 8007DB5C
  c->r[27]=0u+0x00000002u; // 8007DB60
  goto L_8007DBA4; // 8007DB64
L_8007DB68:;
  c->r[0]=R16(c->r[13]+0xFFFFB3B0u); // 8007DB68
  c->r[0]=c->r[0]&0x00002800u; cr0(c,c->r[0]); // 8007DB6C
  if (crb(c,2)) { goto L_8007DBA4; } // 8007DB70
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007DB74
  c->r[4]=0u+0x00000000u; // 8007DB78
  c->r[5]=0u+0x00000002u; // 8007DB7C
  c->lr=0x8007DB84u; f_8007A0B0(c); // 8007DB80
  c->r[27]=c->r[27]+0x00000001u; // 8007DB84
  goto L_8007DBA4; // 8007DB88
L_8007DB8C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007DB8C
  c->r[4]=0u+0x00000000u; // 8007DB90
  c->lr=0x8007DB98u; f_8007A780(c); // 8007DB94
  cmps(c,0,(int32_t)c->r[3],0); // 8007DB98
  if (crb(c,2)) { goto L_8007DBA4; } // 8007DB9C
  c->r[28]=0u+0x00000000u; // 8007DBA0
L_8007DBA4:;
  cmps(c,0,(int32_t)c->r[28],0); // 8007DBA4
  if (!crb(c,2)) { IRQCHK(c); goto L_8007D84C; } // 8007DBA8
  c->r[4]=c->r[25]|c->r[25]; // 8007DBAC
  c->r[3]=0u+0x00000000u; // 8007DBB0
  c->lr=0x8007DBB8u; f_800785F0(c); // 8007DBB4
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8007DBB8
  c->lr=0x8007DBC0u; f_80077520(c); // 8007DBBC
  c->r[16]=c->r[1]+0x00000010u; // 8007DBC0
  c->r[15]=0u+0x00000000u; // 8007DBC4
L_8007DBC8:;
  c->r[4]=R8(c->r[16]+0x00000000u); // 8007DBC8
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[15]; // 8007DBCC
  c->lr=0x8007DBD4u; f_80077830(c); // 8007DBD0
  c->r[15]=c->r[15]+0x00000001u; // 8007DBD4
  c->r[16]=c->r[16]+0x00000001u; // 8007DBD8
  cmps(c,0,(int32_t)c->r[15],16); // 8007DBDC
  if (crb(c,0)) { IRQCHK(c); goto L_8007DBC8; } // 8007DBE0
  c->r[3]=0u+0x00000000u; // 8007DBE4
  c->lr=0x8007DBECu; f_80032CA0(c); // 8007DBE8
  c->r[3]=0u+0x00000000u; // 8007DBEC
  c->r[4]=0u+0x00000000u; // 8007DBF0
  c->lr=0x8007DBF8u; f_80039A00(c); // 8007DBF4
  c->r[3]=0u+0x0000000Fu; // 8007DBF8
  c->lr=0x8007DC00u; f_80036D90(c); // 8007DBFC
  c->r[3]=0u+0x00000000u; // 8007DC00
  c->lr=0x8007DC08u; f_8001AE60(c); // 8007DC04
  c->r[3]=0u+0x00000000u; // 8007DC08
  c->lr=0x8007DC10u; f_80062D60(c); // 8007DC0C
  c->r[3]=0u+0x00000000u; // 8007DC10
  c->lr=0x8007DC18u; f_800CEB30(c); // 8007DC14
  c->lr=0x8007DC1Cu; f_8000FAD0(c); // 8007DC18
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8007DC1C
  c->lr=0x8007DC24u; f_8000FFC0(c); // 8007DC20
  c->lr=0x8007DC28u; f_8000FE40(c); // 8007DC24
L_8007DC28:;
  c->lr=0x8007DC2Cu; f_8000FF80(c); // 8007DC28
  IRQCHK(c); goto L_8007DC28; // 8007DC2C
}

// fn_8007DC30
void f_8007DC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DC30
  c->r[0]=c->lr; // 8007DC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007DC38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007DC3C
  c->r[31]=c->r[3]|c->r[3]; // 8007DC40
  c->r[3]=0u+0x00000001u; // 8007DC44
  c->lr=0x8007DC4Cu; f_800CEB30(c); // 8007DC48
  c->r[3]=0u+0x00000001u; // 8007DC4C
  c->lr=0x8007DC54u; f_8001AE60(c); // 8007DC50
  c->r[3]=0u+0x00000001u; // 8007DC54
  c->lr=0x8007DC5Cu; f_80062D60(c); // 8007DC58
  {uint32_t ea=c->r[2]+0xFFFF8BE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007DC5C
  c->r[3]=0u+0x0000000Fu; // 8007DC60
  c->lr=0x8007DC68u; f_80036D70(c); // 8007DC64
  c->r[5]=0u+0x80410000u; // 8007DC68
  c->r[3]=0u+0x00000001u; // 8007DC6C
  c->r[5]=c->r[5]+0x00003168u; // 8007DC70
  c->r[4]=0u+0x00000000u; // 8007DC74
  c->r[5]=R32(c->r[5]+0x00000008u); // 8007DC78
  c->lr=0x8007DC80u; f_8003D880(c); // 8007DC7C
  c->r[3]=0u+0x00000001u; // 8007DC80
  c->lr=0x8007DC88u; f_80032CA0(c); // 8007DC84
  c->lr=0x8007DC8Cu; f_8000FAD0(c); // 8007DC88
  c->r[4]=0u+0x80080000u; // 8007DC8C
  c->r[7]=c->r[3]|c->r[3]; // 8007DC90
  c->r[3]=c->r[4]+0xFFFFD810u; // 8007DC94
  c->r[5]=0u+0x00003000u; // 8007DC98
  c->r[4]=0u+0x00000064u; // 8007DC9C
  c->r[6]=0u+0x00000000u; // 8007DCA0
  c->lr=0x8007DCA8u; f_8000F9D0(c); // 8007DCA4
  W32(c->r[3]+0x00000130u,c->r[31]); // 8007DCA8
  c->r[3]=0u+0xFFFFFFFFu; // 8007DCAC
  c->lr=0x8007DCB4u; f_8000FF20(c); // 8007DCB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007DCB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007DCB8
  c->lr=c->r[0]; // 8007DCBC
  c->r[1]=c->r[1]+0x00000010u; // 8007DCC0
  return; // 8007DCC4
}

// fn_8007DCD0
void f_8007DCD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007DCD0
  c->r[0]=c->lr; // 8007DCD4
  W32(c->r[1]+0x00000074u,c->r[0]); // 8007DCD8
  c->r[11]=c->r[1]+0x00000070u; // 8007DCDC
  c->lr=0x8007DCE4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007DCE0
  c->r[27]=0u+0x80410000u; // 8007DCE4
  c->r[31]=0u+0x00000001u; // 8007DCE8
  c->r[27]=c->r[27]+0xFFFFEF98u; // 8007DCEC
  c->r[30]=0u+0x00000000u; // 8007DCF0
  c->lr=0x8007DCF8u; f_8000FAD0(c); // 8007DCF4
  c->r[0]=R32(c->r[3]+0x00000134u); // 8007DCF8
  c->r[22]=c->r[1]+0x00000010u; // 8007DCFC
  c->r[29]=R32(c->r[3]+0x00000130u); // 8007DD00
  c->r[23]=0u+0x00000000u; // 8007DD04
  c->r[24]=rotl(c->r[0],0)&0x000000FFu; // 8007DD08
L_8007DD0C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 8007DD0C
  c->lr=0x8007DD14u; f_800777E0(c); // 8007DD10
  cmps(c,0,(int32_t)c->r[3],0); // 8007DD14
  if (crb(c,2)) { goto L_8007DD34; } // 8007DD18
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 8007DD1C
  c->lr=0x8007DD24u; f_80077800(c); // 8007DD20
  W8(c->r[22]+0x00000000u,c->r[3]); // 8007DD24
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[23]; // 8007DD28
  c->r[4]=0u+0x00000001u; // 8007DD2C
  c->lr=0x8007DD34u; f_80077830(c); // 8007DD30
L_8007DD34:;
  c->r[23]=c->r[23]+0x00000001u; // 8007DD34
  c->r[22]=c->r[22]+0x00000001u; // 8007DD38
  cmps(c,0,(int32_t)c->r[23],16); // 8007DD3C
  if (crb(c,0)) { IRQCHK(c); goto L_8007DD0C; } // 8007DD40
  c->r[5]=0u+0x80360000u; // 8007DD44
  c->r[3]=0u+0x014B0000u; // 8007DD48
  c->r[5]=c->r[5]+0x000002C8u; // 8007DD4C
  c->r[4]=0u+0x000001F4u; // 8007DD50
  c->lr=0x8007DD58u; f_800776C0(c); // 8007DD54
  c->r[28]=c->r[3]|c->r[3]; // 8007DD58
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007DD5C
  c->r[4]=0u+0x00000020u; // 8007DD60
  c->lr=0x8007DD68u; f_80077AE0(c); // 8007DD64
  cmpu(c,0,c->r[24],0x00000001u); // 8007DD68
  if (!crb(c,2)) { goto L_8007E050; } // 8007DD6C
  {uint32_t ea=c->r[2]+0xFFFF8BECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007DD70
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8007DD74
  c->lr=0x8007DD7Cu; f_801AA840(c); // 8007DD78
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8007DD7C
  cmpu(c,0,c->r[0],0x00000001u); // 8007DD80
  if (!crb(c,2)) { goto L_8007DD94; } // 8007DD84
  {uint32_t ea=c->r[2]+0xFFFF8BF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007DD88
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007DD8C
  goto L_8007DD9C; // 8007DD90
L_8007DD94:;
  {uint32_t ea=c->r[2]+0xFFFF8BF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007DD94
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007DD98
L_8007DD9C:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DD9C
  c->r[4]=c->r[1]+0x00000008u; // 8007DDA0
  c->lr=0x8007DDA8u; f_80077B40(c); // 8007DDA4
  goto L_8007E050; // 8007DDA8
L_8007DDAC:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[0]); // 8007DDAC
  if (crb(c,2)) { goto L_8007DDD0; } // 8007DDB0
  cmps(c,0,(int32_t)c->r[0],1); // 8007DDB4
  if (crb(c,2)) { goto L_8007DFD4; } // 8007DDB8
  cmps(c,0,(int32_t)c->r[0],2); // 8007DDBC
  if (crb(c,2)) { goto L_8007DFFC; } // 8007DDC0
  cmps(c,0,(int32_t)c->r[0],3); // 8007DDC4
  if (crb(c,2)) { goto L_8007E034; } // 8007DDC8
  goto L_8007E04C; // 8007DDCC
L_8007DDD0:;
  c->r[22]=c->r[27]+0x00000000u; // 8007DDD0
  c->r[26]=0u+0x00000000u; // 8007DDD4
L_8007DDD8:;
  c->r[24]=R32(c->r[22]+0x00000008u); // 8007DDD8
  c->r[23]=0u+0x00000000u; // 8007DDDC
  c->r[25]=R32(c->r[22]+0x0000000Cu); // 8007DDE0
  goto L_8007DE18; // 8007DDE4
L_8007DDE8:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8007DDE8
  c->r[4]=c->r[29]|c->r[29]; // 8007DDEC
  c->lr=0x8007DDF4u; f_802EE984(c); // 8007DDF0
  cmps(c,0,(int32_t)c->r[3],0); // 8007DDF4
  if (!crb(c,2)) { goto L_8007DE10; } // 8007DDF8
  c->lr=0x8007DE00u; f_800656D0(c); // 8007DDFC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8007DE00
  c->r[3]=c->r[25]+c->r[0]; // 8007DE04
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007DE08
  goto L_8007DE48; // 8007DE0C
L_8007DE10:;
  c->r[25]=c->r[25]+0x00000020u; // 8007DE10
  c->r[23]=c->r[23]+0x00000001u; // 8007DE14
L_8007DE18:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[24]); // 8007DE18
  if (crb(c,0)) { IRQCHK(c); goto L_8007DDE8; } // 8007DE1C
  c->r[26]=c->r[26]+0x00000001u; // 8007DE20
  c->r[22]=c->r[22]+0x00000010u; // 8007DE24
  cmps(c,0,(int32_t)c->r[26],32); // 8007DE28
  if (crb(c,0)) { IRQCHK(c); goto L_8007DDD8; } // 8007DE2C
  c->r[5]=c->r[29]|c->r[29]; // 8007DE30
  c->r[3]=c->r[27]+0x00000700u; // 8007DE34
  c->r[4]=0u+0x00000010u; // 8007DE38
  c->r[6]=0u+0x00000000u; // 8007DE3C
  c->lr=0x8007DE44u; f_800692B0(c); // 8007DE40
  c->r[3]=c->r[27]+0x00000700u; // 8007DE44
L_8007DE48:;
  c->r[4]=0u+0x00000000u; // 8007DE48
  c->r[0]=c->r[0]|0x00000000u; // 8007DE4C
L_8007DE50:;
  c->r[5]=R16(c->r[3]+0x00000000u); // 8007DE50
  cmps(c,0,(int32_t)c->r[5],0); // 8007DE54
  if (!crb(c,2)) { goto L_8007DE68; } // 8007DE58
  c->r[0]=R16(c->r[3]+0x00000002u); // 8007DE5C
  cmps(c,0,(int32_t)c->r[0],0); // 8007DE60
  if (crb(c,2)) { goto L_8007DE7C; } // 8007DE64
L_8007DE68:;
  cmpu(c,0,c->r[5],0x0000000Au); // 8007DE68
  if (!crb(c,2)) { goto L_8007DE74; } // 8007DE6C
  c->r[4]=c->r[4]+0x00000001u; // 8007DE70
L_8007DE74:;
  c->r[3]=c->r[3]+0x00000002u; // 8007DE74
  IRQCHK(c); goto L_8007DE50; // 8007DE78
L_8007DE7C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8007DE7C
  if (crb(c,2)) { goto L_8007DE90; } // 8007DE80
  cmps(c,0,(int32_t)c->r[4],1); // 8007DE84
  if (crb(c,2)) { goto L_8007DEA4; } // 8007DE88
  goto L_8007DEB4; // 8007DE8C
L_8007DE90:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DE90
  c->r[4]=0u+0x00000001u; // 8007DE94
  c->r[5]=0u+0x00000000u; // 8007DE98
  c->lr=0x8007DEA0u; f_8007B180(c); // 8007DE9C
  goto L_8007DEB4; // 8007DEA0
L_8007DEA4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DEA4
  c->r[4]=0u+0x00000002u; // 8007DEA8
  c->r[5]=0u+0x00000000u; // 8007DEAC
  c->lr=0x8007DEB4u; f_8007B180(c); // 8007DEB0
L_8007DEB4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DEB4
  c->r[4]=0u+0x00000001u; // 8007DEB8
  c->lr=0x8007DEC0u; f_80077830(c); // 8007DEBC
  c->r[22]=c->r[27]+0x00000000u; // 8007DEC0
  c->r[23]=0u+0x00000000u; // 8007DEC4
L_8007DEC8:;
  c->r[25]=R32(c->r[22]+0x00000008u); // 8007DEC8
  c->r[26]=0u+0x00000000u; // 8007DECC
  c->r[24]=R32(c->r[22]+0x0000000Cu); // 8007DED0
  goto L_8007DF08; // 8007DED4
L_8007DED8:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8007DED8
  c->r[4]=c->r[1]+0x00000020u; // 8007DEDC
  c->lr=0x8007DEE4u; f_802EE984(c); // 8007DEE0
  cmps(c,0,(int32_t)c->r[3],0); // 8007DEE4
  if (!crb(c,2)) { goto L_8007DF00; } // 8007DEE8
  c->lr=0x8007DEF0u; f_800656D0(c); // 8007DEEC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8007DEF0
  c->r[3]=c->r[24]+c->r[0]; // 8007DEF4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8007DEF8
  goto L_8007DF38; // 8007DEFC
L_8007DF00:;
  c->r[24]=c->r[24]+0x00000020u; // 8007DF00
  c->r[26]=c->r[26]+0x00000001u; // 8007DF04
L_8007DF08:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 8007DF08
  if (crb(c,0)) { IRQCHK(c); goto L_8007DED8; } // 8007DF0C
  c->r[23]=c->r[23]+0x00000001u; // 8007DF10
  c->r[22]=c->r[22]+0x00000010u; // 8007DF14
  cmps(c,0,(int32_t)c->r[23],32); // 8007DF18
  if (crb(c,0)) { IRQCHK(c); goto L_8007DEC8; } // 8007DF1C
  c->r[3]=c->r[27]+0x00000700u; // 8007DF20
  c->r[5]=c->r[1]+0x00000020u; // 8007DF24
  c->r[4]=0u+0x00000010u; // 8007DF28
  c->r[6]=0u+0x00000000u; // 8007DF2C
  c->lr=0x8007DF34u; f_800692B0(c); // 8007DF30
  c->r[4]=c->r[27]+0x00000700u; // 8007DF34
L_8007DF38:;
  c->r[3]=c->r[27]+0x00000200u; // 8007DF38
  c->lr=0x8007DF40u; f_80069420(c); // 8007DF3C
  c->r[6]=c->r[29]|c->r[29]; // 8007DF40
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DF44
  c->r[4]=0u+0x00000013u; // 8007DF48
  c->r[5]=0u+0xFFFFFFFFu; // 8007DF4C
  c->lr=0x8007DF54u; f_80079580(c); // 8007DF50
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DF54
  c->r[4]=0u+0x00000000u; // 8007DF58
  c->lr=0x8007DF60u; f_8007A8E0(c); // 8007DF5C
  c->r[3]=c->r[29]|c->r[29]; // 8007DF60
  c->r[4]=c->r[13]+0xFFFF86D8u; // 8007DF64
  c->lr=0x8007DF6Cu; f_802EE984(c); // 8007DF68
  cmps(c,0,(int32_t)c->r[3],0); // 8007DF6C
  if (!crb(c,2)) { goto L_8007DF8C; } // 8007DF70
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DF74
  c->r[4]=0u+0x00000000u; // 8007DF78
  c->lr=0x8007DF80u; f_8007AC90(c); // 8007DF7C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DF80
  c->r[4]=0u+0x00000000u; // 8007DF84
  c->lr=0x8007DF8Cu; f_8007AB10(c); // 8007DF88
L_8007DF8C:;
  c->r[3]=c->r[29]|c->r[29]; // 8007DF8C
  c->r[4]=c->r[13]+0xFFFF86D8u; // 8007DF90
  c->lr=0x8007DF98u; f_802EE984(c); // 8007DF94
  cmps(c,0,(int32_t)c->r[3],0); // 8007DF98
  if (crb(c,2)) { goto L_8007DFA8; } // 8007DF9C
  c->r[3]=0u+0x00000005u; // 8007DFA0
  c->lr=0x8007DFA8u; f_80083E90(c); // 8007DFA4
L_8007DFA8:;
  c->r[3]=0u+0x00000000u; // 8007DFA8
  c->lr=0x8007DFB0u; f_800785B0(c); // 8007DFAC
  c->r[24]=c->r[3]|c->r[3]; // 8007DFB0
  c->r[3]=0u+0x00000000u; // 8007DFB4
  c->r[4]=0u+0x00000001u; // 8007DFB8
  c->lr=0x8007DFC0u; f_800785F0(c); // 8007DFBC
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DFC0
  c->r[4]=0u+0x00000000u; // 8007DFC4
  c->lr=0x8007DFCCu; f_80078360(c); // 8007DFC8
  c->r[30]=c->r[30]+0x00000001u; // 8007DFCC
  goto L_8007E04C; // 8007DFD0
L_8007DFD4:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DFD4
  c->r[4]=0u+0x00000000u; // 8007DFD8
  c->lr=0x8007DFE0u; f_8007B010(c); // 8007DFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8007DFE0
  if (crb(c,2)) { goto L_8007E04C; } // 8007DFE4
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007DFE8
  c->r[4]=0u+0x00000000u; // 8007DFEC
  c->lr=0x8007DFF4u; f_80077830(c); // 8007DFF0
  c->r[30]=c->r[30]+0x00000001u; // 8007DFF4
  goto L_8007E04C; // 8007DFF8
L_8007DFFC:;
  c->r[0]=R32(c->r[13]+0xFFFFB86Cu); // 8007DFFC
  cmps(c,0,(int32_t)c->r[0],0); // 8007E000
  if (crb(c,2)) { goto L_8007E028; } // 8007E004
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007E008
  c->r[4]=0u+0x00000001u; // 8007E00C
  c->lr=0x8007E014u; f_80077830(c); // 8007E010
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007E014
  c->r[4]=0u+0x00000001u; // 8007E018
  c->lr=0x8007E020u; f_8007A8E0(c); // 8007E01C
  c->r[30]=c->r[30]+0x00000001u; // 8007E020
  goto L_8007E04C; // 8007E024
L_8007E028:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007E028
  c->lr=0x8007E030u; f_80078060(c); // 8007E02C
  goto L_8007E04C; // 8007E030
L_8007E034:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007E034
  c->r[4]=0u+0x00000001u; // 8007E038
  c->lr=0x8007E040u; f_8007B010(c); // 8007E03C
  cmps(c,0,(int32_t)c->r[3],0); // 8007E040
  if (crb(c,2)) { goto L_8007E04C; } // 8007E044
  c->r[31]=0u+0x00000000u; // 8007E048
L_8007E04C:;
  c->lr=0x8007E050u; f_8000FF80(c); // 8007E04C
L_8007E050:;
  cmps(c,0,(int32_t)c->r[31],0); // 8007E050
  if (!crb(c,2)) { IRQCHK(c); goto L_8007DDAC; } // 8007E054
  c->r[4]=c->r[24]|c->r[24]; // 8007E058
  c->r[3]=0u+0x00000000u; // 8007E05C
  c->lr=0x8007E064u; f_800785F0(c); // 8007E060
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 8007E064
  c->lr=0x8007E06Cu; f_80077520(c); // 8007E068
  c->r[23]=c->r[1]+0x00000010u; // 8007E06C
  c->r[22]=0u+0x00000000u; // 8007E070
L_8007E074:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[22]; // 8007E074
  c->lr=0x8007E07Cu; f_800777E0(c); // 8007E078
  cmps(c,0,(int32_t)c->r[3],0); // 8007E07C
  if (crb(c,2)) { goto L_8007E090; } // 8007E080
  c->r[4]=R8(c->r[23]+0x00000000u); // 8007E084
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[22]; // 8007E088
  c->lr=0x8007E090u; f_80077830(c); // 8007E08C
L_8007E090:;
  c->r[22]=c->r[22]+0x00000001u; // 8007E090
  c->r[23]=c->r[23]+0x00000001u; // 8007E094
  cmps(c,0,(int32_t)c->r[22],16); // 8007E098
  if (crb(c,0)) { IRQCHK(c); goto L_8007E074; } // 8007E09C
  c->lr=0x8007E0A4u; f_8000FE40(c); // 8007E0A0
L_8007E0A4:;
  c->lr=0x8007E0A8u; f_8000FF80(c); // 8007E0A4
  IRQCHK(c); goto L_8007E0A4; // 8007E0A8
}

// fn_8007E0B0
void f_8007E0B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E0B0
  c->r[0]=c->lr; // 8007E0B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E0B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E0BC
  c->r[31]=0u+0x00000000u; // 8007E0C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007E0C4
  c->r[30]=c->r[3]|c->r[3]; // 8007E0C8
  W32(c->r[13]+0xFFFFB86Cu,c->r[31]); // 8007E0CC
  c->lr=0x8007E0D4u; f_8000FAD0(c); // 8007E0D0
  c->r[4]=0u+0x80080000u; // 8007E0D4
  c->r[7]=c->r[3]|c->r[3]; // 8007E0D8
  c->r[3]=c->r[4]+0xFFFFDCD0u; // 8007E0DC
  c->r[5]=0u+0x00003000u; // 8007E0E0
  c->r[4]=0u+0x00000064u; // 8007E0E4
  c->r[6]=0u+0x00000000u; // 8007E0E8
  c->lr=0x8007E0F0u; f_8000F9D0(c); // 8007E0EC
  W32(c->r[3]+0x00000130u,c->r[30]); // 8007E0F0
  W32(c->r[3]+0x00000134u,c->r[31]); // 8007E0F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E0F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007E0FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E100
  c->lr=c->r[0]; // 8007E104
  c->r[1]=c->r[1]+0x00000010u; // 8007E108
  return; // 8007E10C
}

// fn_8007E110
void f_8007E110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E110
  c->r[0]=c->lr; // 8007E114
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E118
  c->r[0]=0u+0x00000000u; // 8007E11C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E120
  c->r[31]=c->r[3]|c->r[3]; // 8007E124
  W32(c->r[13]+0xFFFFB86Cu,c->r[0]); // 8007E128
  c->lr=0x8007E130u; f_8000FAD0(c); // 8007E12C
  c->r[4]=0u+0x80080000u; // 8007E130
  c->r[7]=c->r[3]|c->r[3]; // 8007E134
  c->r[3]=c->r[4]+0xFFFFDCD0u; // 8007E138
  c->r[5]=0u+0x00003000u; // 8007E13C
  c->r[4]=0u+0x00000064u; // 8007E140
  c->r[6]=0u+0x00000000u; // 8007E144
  c->lr=0x8007E14Cu; f_8000F9D0(c); // 8007E148
  W32(c->r[3]+0x00000130u,c->r[31]); // 8007E14C
  c->r[0]=0u+0x00000001u; // 8007E150
  W32(c->r[3]+0x00000134u,c->r[0]); // 8007E154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E158
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E15C
  c->lr=c->r[0]; // 8007E160
  c->r[1]=c->r[1]+0x00000010u; // 8007E164
  return; // 8007E168
}

// fn_8007E170
void f_8007E170(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 8007E170
  W32(c->r[13]+0xFFFFB86Cu,c->r[0]); // 8007E174
  return; // 8007E178
}

// fn_8007E180
void f_8007E180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E180
  c->r[0]=c->lr; // 8007E184
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)348); // 8007E188
  c->r[5]=0u+0x10000000u; // 8007E18C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007E190
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007E194
  c->r[4]=c->r[4]+0x00000028u; // 8007E198
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007E19C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007E1A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007E1A4
  c->r[28]=c->r[3]|c->r[3]; // 8007E1A8
  c->r[3]=0u+0x00000000u; // 8007E1AC
  c->lr=0x8007E1B4u; f_8000DEB0(c); // 8007E1B0
  cmps(c,0,(int32_t)c->r[3],0); // 8007E1B4
  c->r[30]=c->r[3]|c->r[3]; // 8007E1B8
  if (!crb(c,2)) { goto L_8007E1C8; } // 8007E1BC
  c->r[3]=0u+0x00000000u; // 8007E1C0
  goto L_8007E224; // 8007E1C4
L_8007E1C8:;
  c->r[0]=0u+0x00000000u; // 8007E1C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8007E1CC
  c->r[31]=c->r[30]|c->r[30]; // 8007E1D0
  c->r[30]=c->r[3]+0x00000028u; // 8007E1D4
  W32(c->r[3]+0x00000008u,c->r[0]); // 8007E1D8
  c->r[29]=0u+0x00000000u; // 8007E1DC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8007E1E0
  W32(c->r[3]+0x00000010u,c->r[0]); // 8007E1E4
  W32(c->r[3]+0x00000014u,c->r[0]); // 8007E1E8
  W32(c->r[3]+0x00000018u,c->r[0]); // 8007E1EC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8007E1F0
  W32(c->r[3]+0x00000020u,c->r[0]); // 8007E1F4
  W32(c->r[3]+0x00000024u,c->r[0]); // 8007E1F8
  goto L_8007E218; // 8007E1FC
L_8007E200:;
  W32(c->r[30]+0x00000008u,c->r[30]); // 8007E200
  c->r[3]=c->r[31]|c->r[31]; // 8007E204
  c->r[4]=c->r[30]|c->r[30]; // 8007E208
  c->lr=0x8007E210u; f_80067A90(c); // 8007E20C
  c->r[29]=c->r[29]+0x00000001u; // 8007E210
  c->r[30]=c->r[30]+0x0000015Cu; // 8007E214
L_8007E218:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 8007E218
  if (crb(c,0)) { IRQCHK(c); goto L_8007E200; } // 8007E21C
  c->r[3]=c->r[31]|c->r[31]; // 8007E220
L_8007E224:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007E224
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007E228
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007E22C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007E230
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007E234
  c->lr=c->r[0]; // 8007E238
  c->r[1]=c->r[1]+0x00000020u; // 8007E23C
  return; // 8007E240
}

// fn_8007E250
void f_8007E250(Ctx* __restrict c) {
  f_8000DEF0(c); return; // 8007E250
}

// fn_8007E260
void f_8007E260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E260
  c->r[0]=c->lr; // 8007E264
  W32(c->r[1]+0x00000044u,c->r[0]); // 8007E268
  c->r[11]=c->r[1]+0x00000040u; // 8007E26C
  c->lr=0x8007E274u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007E270
  c->r[27]=c->r[5]|c->r[5]; // 8007E274
  c->r[31]=c->r[3]|c->r[3]; // 8007E278
  c->r[26]=c->r[4]|c->r[4]; // 8007E27C
  c->r[28]=c->r[6]|c->r[6]; // 8007E280
  c->r[29]=c->r[7]|c->r[7]; // 8007E284
  c->r[3]=c->r[27]|c->r[27]; // 8007E288
  c->lr=0x8007E290u; f_80068E50(c); // 8007E28C
  c->r[30]=c->r[3]|c->r[3]; // 8007E290
  c->r[3]=c->r[31]|c->r[31]; // 8007E294
  c->lr=0x8007E29Cu; f_80067BC0(c); // 8007E298
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007E29C
  c->r[3]=c->r[30]|c->r[30]; // 8007E2A0
  c->r[4]=c->r[28]|c->r[28]; // 8007E2A4
  W16(c->r[31]+0x0000000Cu,c->r[26]); // 8007E2A8
  c->lr=0x8007E2B0u; f_801056B0(c); // 8007E2AC
  W16(c->r[31]+0x0000000Eu,c->r[3]); // 8007E2B0
  cmps(c,0,(int32_t)c->r[29],0); // 8007E2B4
  W32(c->r[31]+0x0000003Cu,c->r[27]); // 8007E2B8
  W32(c->r[31]+0x00000040u,c->r[28]); // 8007E2BC
  if (crb(c,2)) { goto L_8007E2DC; } // 8007E2C0
  c->r[3]=c->r[27]+0x00000001u; // 8007E2C4
  c->lr=0x8007E2CCu; f_80068E50(c); // 8007E2C8
  c->r[4]=c->r[28]|c->r[28]; // 8007E2CC
  c->lr=0x8007E2D4u; f_801056B0(c); // 8007E2D0
  W16(c->r[31]+0x00000010u,c->r[3]); // 8007E2D4
  goto L_8007E2E4; // 8007E2D8
L_8007E2DC:;
  c->r[0]=0u+0xFFFFFFFFu; // 8007E2DC
  W16(c->r[31]+0x00000010u,c->r[0]); // 8007E2E0
L_8007E2E4:;
  c->r[9]=0u+0xFFFFFFFFu; // 8007E2E4
  W16(c->r[31]+0x00000012u,c->r[9]); // 8007E2E8
  c->r[8]=0u+0x00000000u; // 8007E2EC
  c->r[7]=0u+0x80300000u; // 8007E2F0
  W32(c->r[31]+0x00000018u,c->r[8]); // 8007E2F4
  c->r[3]=c->r[26]|c->r[26]; // 8007E2F8
  {uint32_t ea=c->r[7]+0xFFFFE2DCu; c->r[6]=R32(ea); c->r[7]=ea;} // 8007E2FC
  c->r[4]=c->r[28]|c->r[28]; // 8007E300
  W32(c->r[31]+0x0000001Cu,c->r[8]); // 8007E304
  c->r[5]=R32(c->r[7]+0x00000004u); // 8007E308
  W32(c->r[31]+0x00000020u,c->r[6]); // 8007E30C
  c->r[0]=R32(c->r[7]+0x00000008u); // 8007E310
  W32(c->r[31]+0x00000024u,c->r[5]); // 8007E314
  {uint32_t ea=c->r[2]+0xFFFF8BF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007E318
  W32(c->r[31]+0x00000028u,c->r[0]); // 8007E31C
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 8007E320
  W32(c->r[31]+0x00000030u,c->r[5]); // 8007E324
  W32(c->r[31]+0x00000034u,c->r[0]); // 8007E328
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 8007E32C
  W32(c->r[31]+0x00000044u,c->r[9]); // 8007E330
  W32(c->r[31]+0x00000048u,c->r[9]); // 8007E334
  W32(c->r[31]+0x0000006Cu,c->r[8]); // 8007E338
  W8(c->r[31]+0x00000145u,c->r[8]); // 8007E33C
  W32(c->r[31]+0x0000014Cu,c->r[9]); // 8007E340
  W32(c->r[1]+0x00000014u,c->r[6]); // 8007E344
  W32(c->r[1]+0x00000018u,c->r[5]); // 8007E348
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8007E34C
  W32(c->r[1]+0x00000008u,c->r[6]); // 8007E350
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8007E354
  W32(c->r[1]+0x00000010u,c->r[0]); // 8007E358
  W32(c->r[31]+0x00000148u,c->r[9]); // 8007E35C
  c->lr=0x8007E364u; f_8007EDC0(c); // 8007E360
  W16(c->r[31]+0x00000070u,c->r[3]); // 8007E364
  c->r[11]=c->r[1]+0x00000040u; // 8007E368
  c->r[3]=c->r[31]|c->r[31]; // 8007E36C
  c->lr=0x8007E374u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007E370
  c->r[0]=R32(c->r[1]+0x00000044u); // 8007E374
  c->lr=c->r[0]; // 8007E378
  c->r[1]=c->r[1]+0x00000040u; // 8007E37C
  return; // 8007E380
}

// fn_8007E390
void f_8007E390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E390
  c->r[0]=c->lr; // 8007E394
  W32(c->r[1]+0x00000044u,c->r[0]); // 8007E398
  c->r[11]=c->r[1]+0x00000040u; // 8007E39C
  c->lr=0x8007E3A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007E3A0
  c->r[27]=c->r[5]|c->r[5]; // 8007E3A4
  c->r[31]=c->r[3]|c->r[3]; // 8007E3A8
  c->r[26]=c->r[4]|c->r[4]; // 8007E3AC
  c->r[28]=c->r[6]|c->r[6]; // 8007E3B0
  c->r[29]=c->r[7]|c->r[7]; // 8007E3B4
  c->r[3]=c->r[27]|c->r[27]; // 8007E3B8
  c->lr=0x8007E3C0u; f_80068E50(c); // 8007E3BC
  c->r[30]=c->r[3]|c->r[3]; // 8007E3C0
  c->r[3]=c->r[31]|c->r[31]; // 8007E3C4
  c->lr=0x8007E3CCu; f_80067BC0(c); // 8007E3C8
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007E3CC
  c->r[3]=c->r[30]|c->r[30]; // 8007E3D0
  c->r[4]=c->r[28]|c->r[28]; // 8007E3D4
  c->r[5]=c->r[1]+0x00000008u; // 8007E3D8
  W16(c->r[31]+0x0000000Cu,c->r[26]); // 8007E3DC
  c->lr=0x8007E3E4u; f_80106650(c); // 8007E3E0
  W16(c->r[31]+0x0000000Eu,c->r[3]); // 8007E3E4
  cmps(c,0,(int32_t)c->r[29],0); // 8007E3E8
  W32(c->r[31]+0x0000003Cu,c->r[27]); // 8007E3EC
  c->r[0]=R32(c->r[1]+0x00000008u); // 8007E3F0
  W32(c->r[31]+0x00000040u,c->r[0]); // 8007E3F4
  if (crb(c,2)) { goto L_8007E418; } // 8007E3F8
  c->r[3]=c->r[27]+0x00000001u; // 8007E3FC
  c->lr=0x8007E404u; f_80068E50(c); // 8007E400
  c->r[4]=c->r[28]|c->r[28]; // 8007E404
  c->r[5]=c->r[1]+0x00000008u; // 8007E408
  c->lr=0x8007E410u; f_80106650(c); // 8007E40C
  W16(c->r[31]+0x00000010u,c->r[3]); // 8007E410
  goto L_8007E420; // 8007E414
L_8007E418:;
  c->r[0]=0u+0xFFFFFFFFu; // 8007E418
  W16(c->r[31]+0x00000010u,c->r[0]); // 8007E41C
L_8007E420:;
  c->r[8]=0u+0xFFFFFFFFu; // 8007E420
  W16(c->r[31]+0x00000012u,c->r[8]); // 8007E424
  c->r[7]=0u+0x00000000u; // 8007E428
  c->r[4]=0u+0x80300000u; // 8007E42C
  W32(c->r[31]+0x00000018u,c->r[7]); // 8007E430
  c->r[3]=c->r[26]|c->r[26]; // 8007E434
  {uint32_t ea=c->r[4]+0xFFFFE2DCu; c->r[6]=R32(ea); c->r[4]=ea;} // 8007E438
  W32(c->r[31]+0x0000001Cu,c->r[7]); // 8007E43C
  c->r[5]=R32(c->r[4]+0x00000004u); // 8007E440
  W32(c->r[31]+0x00000020u,c->r[6]); // 8007E444
  c->r[0]=R32(c->r[4]+0x00000008u); // 8007E448
  W32(c->r[31]+0x00000024u,c->r[5]); // 8007E44C
  {uint32_t ea=c->r[2]+0xFFFF8BF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007E450
  W32(c->r[31]+0x00000028u,c->r[0]); // 8007E454
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 8007E458
  W32(c->r[31]+0x00000030u,c->r[5]); // 8007E45C
  W32(c->r[31]+0x00000034u,c->r[0]); // 8007E460
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 8007E464
  W32(c->r[31]+0x00000044u,c->r[8]); // 8007E468
  W32(c->r[31]+0x00000048u,c->r[8]); // 8007E46C
  W32(c->r[31]+0x0000006Cu,c->r[7]); // 8007E470
  W8(c->r[31]+0x00000145u,c->r[7]); // 8007E474
  W32(c->r[31]+0x0000014Cu,c->r[8]); // 8007E478
  W32(c->r[31]+0x00000148u,c->r[8]); // 8007E47C
  W32(c->r[1]+0x00000018u,c->r[6]); // 8007E480
  c->r[4]=R32(c->r[1]+0x00000008u); // 8007E484
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8007E488
  W32(c->r[1]+0x00000020u,c->r[0]); // 8007E48C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8007E490
  W32(c->r[1]+0x00000010u,c->r[5]); // 8007E494
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E498
  c->lr=0x8007E4A0u; f_8007EDC0(c); // 8007E49C
  W16(c->r[31]+0x00000070u,c->r[3]); // 8007E4A0
  c->r[11]=c->r[1]+0x00000040u; // 8007E4A4
  c->r[3]=c->r[31]|c->r[31]; // 8007E4A8
  c->lr=0x8007E4B0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007E4AC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8007E4B0
  c->lr=c->r[0]; // 8007E4B4
  c->r[1]=c->r[1]+0x00000040u; // 8007E4B8
  return; // 8007E4BC
}

// fn_8007E4C0
void f_8007E4C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E4C0
  c->r[0]=c->lr; // 8007E4C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8007E4C8
  c->r[11]=c->r[1]+0x00000040u; // 8007E4CC
  c->lr=0x8007E4D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007E4D0
  c->r[27]=c->r[5]|c->r[5]; // 8007E4D4
  c->r[31]=c->r[3]|c->r[3]; // 8007E4D8
  c->r[26]=c->r[4]|c->r[4]; // 8007E4DC
  c->r[28]=c->r[6]|c->r[6]; // 8007E4E0
  c->r[29]=c->r[7]|c->r[7]; // 8007E4E4
  c->r[3]=c->r[27]|c->r[27]; // 8007E4E8
  c->lr=0x8007E4F0u; f_80068E50(c); // 8007E4EC
  c->r[30]=c->r[3]|c->r[3]; // 8007E4F0
  c->r[3]=c->r[31]|c->r[31]; // 8007E4F4
  c->lr=0x8007E4FCu; f_80067BC0(c); // 8007E4F8
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007E4FC
  c->r[3]=c->r[30]|c->r[30]; // 8007E500
  c->r[4]=c->r[28]|c->r[28]; // 8007E504
  c->r[5]=c->r[1]+0x00000008u; // 8007E508
  W16(c->r[31]+0x0000000Cu,c->r[26]); // 8007E50C
  c->lr=0x8007E514u; f_80106650(c); // 8007E510
  W16(c->r[31]+0x0000000Eu,c->r[3]); // 8007E514
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8007E518
  c->r[4]=0u+0x00000002u; // 8007E51C
  c->lr=0x8007E524u; f_80106E70(c); // 8007E520
  W32(c->r[31]+0x0000003Cu,c->r[27]); // 8007E524
  cmps(c,0,(int32_t)c->r[29],0); // 8007E528
  c->r[0]=R32(c->r[1]+0x00000008u); // 8007E52C
  W32(c->r[31]+0x00000040u,c->r[0]); // 8007E530
  if (crb(c,2)) { goto L_8007E554; } // 8007E534
  c->r[3]=c->r[27]+0x00000001u; // 8007E538
  c->lr=0x8007E540u; f_80068E50(c); // 8007E53C
  c->r[4]=c->r[28]|c->r[28]; // 8007E540
  c->r[5]=c->r[1]+0x00000008u; // 8007E544
  c->lr=0x8007E54Cu; f_80106650(c); // 8007E548
  W16(c->r[31]+0x00000010u,c->r[3]); // 8007E54C
  goto L_8007E55C; // 8007E550
L_8007E554:;
  c->r[0]=0u+0xFFFFFFFFu; // 8007E554
  W16(c->r[31]+0x00000010u,c->r[0]); // 8007E558
L_8007E55C:;
  c->r[8]=0u+0xFFFFFFFFu; // 8007E55C
  W16(c->r[31]+0x00000012u,c->r[8]); // 8007E560
  c->r[7]=0u+0x00000000u; // 8007E564
  c->r[4]=0u+0x80300000u; // 8007E568
  W32(c->r[31]+0x00000018u,c->r[7]); // 8007E56C
  c->r[0]=0u+0x00000002u; // 8007E570
  {uint32_t ea=c->r[4]+0xFFFFE2DCu; c->r[6]=R32(ea); c->r[4]=ea;} // 8007E574
  c->r[11]=c->r[1]+0x00000040u; // 8007E578
  W32(c->r[31]+0x0000001Cu,c->r[7]); // 8007E57C
  c->r[3]=c->r[31]|c->r[31]; // 8007E580
  c->r[5]=R32(c->r[4]+0x00000004u); // 8007E584
  W32(c->r[31]+0x00000020u,c->r[6]); // 8007E588
  c->r[4]=R32(c->r[4]+0x00000008u); // 8007E58C
  W32(c->r[31]+0x00000024u,c->r[5]); // 8007E590
  {uint32_t ea=c->r[2]+0xFFFF8BF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007E594
  W32(c->r[31]+0x00000028u,c->r[4]); // 8007E598
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 8007E59C
  W32(c->r[31]+0x00000030u,c->r[5]); // 8007E5A0
  W32(c->r[31]+0x00000034u,c->r[4]); // 8007E5A4
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 8007E5A8
  W32(c->r[31]+0x00000044u,c->r[8]); // 8007E5AC
  W32(c->r[31]+0x00000048u,c->r[8]); // 8007E5B0
  W32(c->r[31]+0x0000006Cu,c->r[7]); // 8007E5B4
  W8(c->r[31]+0x00000145u,c->r[7]); // 8007E5B8
  W32(c->r[31]+0x0000014Cu,c->r[8]); // 8007E5BC
  W32(c->r[31]+0x00000148u,c->r[8]); // 8007E5C0
  W16(c->r[31]+0x00000070u,c->r[0]); // 8007E5C4
  W32(c->r[1]+0x00000018u,c->r[6]); // 8007E5C8
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8007E5CC
  W32(c->r[1]+0x00000020u,c->r[4]); // 8007E5D0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 8007E5D4
  W32(c->r[1]+0x00000010u,c->r[5]); // 8007E5D8
  W32(c->r[1]+0x00000014u,c->r[4]); // 8007E5DC
  c->lr=0x8007E5E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007E5E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8007E5E4
  c->lr=c->r[0]; // 8007E5E8
  c->r[1]=c->r[1]+0x00000040u; // 8007E5EC
  return; // 8007E5F0
}

// fn_8007E600
void f_8007E600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E600
  c->r[0]=c->lr; // 8007E604
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007E608
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007E60C
  c->r[31]=c->r[3]|c->r[3]; // 8007E610
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007E614
  c->r[30]=c->r[4]|c->r[4]; // 8007E618
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007E61C
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 8007E620
  c->lr=0x8007E628u; f_80068E50(c); // 8007E624
  c->r[29]=c->r[3]|c->r[3]; // 8007E628
  c->r[3]=c->r[31]|c->r[31]; // 8007E62C
  c->lr=0x8007E634u; f_80067BC0(c); // 8007E630
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007E634
  c->r[3]=c->r[29]|c->r[29]; // 8007E638
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000000Cu); // 8007E63C
  W16(c->r[31]+0x0000000Cu,c->r[0]); // 8007E640
  c->r[4]=R32(c->r[30]+0x00000040u); // 8007E644
  c->lr=0x8007E64Cu; f_801056B0(c); // 8007E648
  W16(c->r[31]+0x0000000Eu,c->r[3]); // 8007E64C
  c->r[0]=0u+0xFFFFFFFFu; // 8007E650
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 8007E654
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 8007E658
  c->r[3]=R32(c->r[30]+0x00000040u); // 8007E65C
  W32(c->r[31]+0x00000040u,c->r[3]); // 8007E660
  W16(c->r[31]+0x00000010u,c->r[0]); // 8007E664
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000010u); // 8007E668
  cmps(c,0,(int32_t)c->r[0],0); // 8007E66C
  if (crb(c,0)) { goto L_8007E68C; } // 8007E670
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 8007E674
  c->r[3]=c->r[3]+0x00000001u; // 8007E678
  c->lr=0x8007E680u; f_80068E50(c); // 8007E67C
  c->r[4]=R32(c->r[30]+0x00000040u); // 8007E680
  c->lr=0x8007E688u; f_801056B0(c); // 8007E684
  W16(c->r[31]+0x00000010u,c->r[3]); // 8007E688
L_8007E68C:;
  c->r[0]=0u+0xFFFFFFFFu; // 8007E68C
  W16(c->r[31]+0x00000012u,c->r[0]); // 8007E690
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000012u); // 8007E694
  cmps(c,0,(int32_t)c->r[0],0); // 8007E698
  if (crb(c,0)) { goto L_8007E6B4; } // 8007E69C
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 8007E6A0
  c->lr=0x8007E6A8u; f_80068E50(c); // 8007E6A4
  c->r[4]=R32(c->r[30]+0x00000040u); // 8007E6A8
  c->lr=0x8007E6B0u; f_801056B0(c); // 8007E6AC
  W16(c->r[31]+0x00000012u,c->r[3]); // 8007E6B0
L_8007E6B4:;
  c->r[4]=0u+0x00000000u; // 8007E6B4
  W32(c->r[31]+0x00000018u,c->r[4]); // 8007E6B8
  c->r[0]=0u+0xFFFFFFFFu; // 8007E6BC
  c->r[3]=c->r[31]+0x00000070u; // 8007E6C0
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 8007E6C4
  c->r[4]=c->r[30]+0x00000070u; // 8007E6C8
  c->r[5]=0u+0x00000098u; // 8007E6CC
  c->r[6]=R32(c->r[30]+0x00000024u); // 8007E6D0
  c->r[7]=R32(c->r[30]+0x00000020u); // 8007E6D4
  W32(c->r[31]+0x00000020u,c->r[7]); // 8007E6D8
  W32(c->r[31]+0x00000024u,c->r[6]); // 8007E6DC
  c->r[6]=R32(c->r[30]+0x00000028u); // 8007E6E0
  W32(c->r[31]+0x00000028u,c->r[6]); // 8007E6E4
  c->r[6]=R32(c->r[30]+0x00000024u); // 8007E6E8
  c->r[7]=R32(c->r[30]+0x00000020u); // 8007E6EC
  W32(c->r[31]+0x0000002Cu,c->r[7]); // 8007E6F0
  W32(c->r[31]+0x00000030u,c->r[6]); // 8007E6F4
  c->r[6]=R32(c->r[30]+0x00000028u); // 8007E6F8
  W32(c->r[31]+0x00000034u,c->r[6]); // 8007E6FC
  W32(c->r[31]+0x00000044u,c->r[0]); // 8007E700
  W32(c->r[31]+0x00000048u,c->r[0]); // 8007E704
  c->r[0]=R32(c->r[30]+0x0000006Cu); // 8007E708
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 8007E70C
  c->r[0]=R8(c->r[30]+0x00000145u); // 8007E710
  W8(c->r[31]+0x00000145u,c->r[0]); // 8007E714
  c->lr=0x8007E71Cu; f_800043C4(c); // 8007E718
  c->r[3]=c->r[31]|c->r[31]; // 8007E71C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007E720
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007E724
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007E728
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007E72C
  c->lr=c->r[0]; // 8007E730
  c->r[1]=c->r[1]+0x00000020u; // 8007E734
  return; // 8007E738
}

// fn_8007E740
void f_8007E740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E740
  c->r[0]=c->lr; // 8007E744
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E74C
  c->r[31]=c->r[4]|c->r[4]; // 8007E750
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007E754
  c->r[30]=c->r[3]|c->r[3]; // 8007E758
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8007E75C
  cmps(c,0,(int32_t)c->r[0],0); // 8007E760
  if (crb(c,2)) { goto L_8007E77C; } // 8007E764
  c->r[3]=R32(c->r[3]+0x00000004u); // 8007E768
  c->r[4]=c->r[0]|c->r[0]; // 8007E76C
  c->lr=0x8007E774u; f_8006E6C0(c); // 8007E770
  c->r[0]=0u+0x00000000u; // 8007E774
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8007E778
L_8007E77C:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 8007E77C
  cmps(c,0,(int32_t)c->r[4],0); // 8007E780
  if (crb(c,2)) { goto L_8007E798; } // 8007E784
  c->r[3]=R32(c->r[30]+0x00000004u); // 8007E788
  c->lr=0x8007E790u; f_8006E6C0(c); // 8007E78C
  c->r[0]=0u+0x00000000u; // 8007E790
  W32(c->r[31]+0x00000018u,c->r[0]); // 8007E794
L_8007E798:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000012u); // 8007E798
  cmps(c,0,(int32_t)c->r[3],0); // 8007E79C
  if (crb(c,0)) { goto L_8007E7B8; } // 8007E7A0
  c->lr=0x8007E7A8u; f_801067D0(c); // 8007E7A4
  c->r[0]=0u+0xFFFFFFFFu; // 8007E7A8
  W16(c->r[31]+0x00000012u,c->r[0]); // 8007E7AC
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8007E7B0
  c->lr=0x8007E7B8u; f_80068E60(c); // 8007E7B4
L_8007E7B8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000010u); // 8007E7B8
  cmps(c,0,(int32_t)c->r[3],0); // 8007E7BC
  if (crb(c,0)) { goto L_8007E7DC; } // 8007E7C0
  c->lr=0x8007E7C8u; f_801067D0(c); // 8007E7C4
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8007E7C8
  c->r[0]=0u+0xFFFFFFFFu; // 8007E7CC
  W16(c->r[31]+0x00000010u,c->r[0]); // 8007E7D0
  c->r[3]=c->r[3]+0x00000001u; // 8007E7D4
  c->lr=0x8007E7DCu; f_80068E60(c); // 8007E7D8
L_8007E7DC:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007E7DC
  cmps(c,0,(int32_t)c->r[3],0); // 8007E7E0
  if (crb(c,0)) { goto L_8007E7FC; } // 8007E7E4
  c->lr=0x8007E7ECu; f_801067D0(c); // 8007E7E8
  c->r[0]=0u+0xFFFFFFFFu; // 8007E7EC
  W16(c->r[31]+0x0000000Eu,c->r[0]); // 8007E7F0
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8007E7F4
  c->lr=0x8007E7FCu; f_80068E60(c); // 8007E7F8
L_8007E7FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8007E7FC
  c->r[4]=c->r[31]|c->r[31]; // 8007E800
  c->lr=0x8007E808u; f_80067A90(c); // 8007E804
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E808
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E80C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007E810
  c->lr=c->r[0]; // 8007E814
  c->r[1]=c->r[1]+0x00000010u; // 8007E818
  return; // 8007E81C
}

// fn_8007E820
void f_8007E820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E820
  c->r[0]=c->lr; // 8007E824
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E828
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E82C
  c->r[31]=c->r[3]|c->r[3]; // 8007E830
  c->r[3]=c->r[3]+0x00000018u; // 8007E834
  c->lr=0x8007E83Cu; f_80067A90(c); // 8007E838
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8007E83C
  c->r[0]=c->r[3]+0x00000001u; // 8007E840
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8007E844
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E848
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E84C
  c->lr=c->r[0]; // 8007E850
  c->r[1]=c->r[1]+0x00000010u; // 8007E854
  return; // 8007E858
}

// fn_8007E860
void f_8007E860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E860
  c->r[0]=c->lr; // 8007E864
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E86C
  c->r[31]=c->r[3]|c->r[3]; // 8007E870
  c->r[3]=c->r[3]+0x00000018u; // 8007E874
  c->lr=0x8007E87Cu; f_80067B50(c); // 8007E878
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8007E87C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007E880
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8007E884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E888
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E88C
  c->lr=c->r[0]; // 8007E890
  c->r[1]=c->r[1]+0x00000010u; // 8007E894
  return; // 8007E898
}

// fn_8007E8A0
void f_8007E8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E8A0
  c->r[0]=c->lr; // 8007E8A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E8A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E8AC
  c->r[31]=c->r[4]|c->r[4]; // 8007E8B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007E8B4
  c->r[30]=c->r[3]|c->r[3]; // 8007E8B8
  c->r[3]=c->r[3]+0x00000018u; // 8007E8BC
  c->lr=0x8007E8C4u; f_80067B50(c); // 8007E8C0
  c->r[3]=c->r[30]|c->r[30]; // 8007E8C4
  c->r[4]=c->r[31]|c->r[31]; // 8007E8C8
  c->lr=0x8007E8D0u; f_8007E740(c); // 8007E8CC
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8007E8D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007E8D4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8007E8D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E8DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007E8E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E8E4
  c->lr=c->r[0]; // 8007E8E8
  c->r[1]=c->r[1]+0x00000010u; // 8007E8EC
  return; // 8007E8F0
}

// fn_8007E900
void f_8007E900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E900
  c->r[0]=c->lr; // 8007E904
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E90C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007E910
  c->r[30]=c->r[3]|c->r[3]; // 8007E914
  goto L_8007E944; // 8007E918
L_8007E91C:;
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007E91C
  c->r[3]=c->r[30]+0x00000018u; // 8007E920
  c->r[4]=c->r[31]|c->r[31]; // 8007E924
  c->lr=0x8007E92Cu; f_80067B50(c); // 8007E928
  c->r[3]=c->r[30]|c->r[30]; // 8007E92C
  c->r[4]=c->r[31]|c->r[31]; // 8007E930
  c->lr=0x8007E938u; f_8007E740(c); // 8007E934
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8007E938
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007E93C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8007E940
L_8007E944:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 8007E944
  cmps(c,0,(int32_t)c->r[3],0); // 8007E948
  if (!crb(c,2)) { IRQCHK(c); goto L_8007E91C; } // 8007E94C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E954
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007E958
  c->lr=c->r[0]; // 8007E95C
  c->r[1]=c->r[1]+0x00000010u; // 8007E960
  return; // 8007E964
}

// fn_8007E970
void f_8007E970(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000018u); // 8007E970
  goto L_8007E998; // 8007E974
L_8007E978:;
  c->r[3]=R32(c->r[6]+0x00000008u); // 8007E978
  c->r[0]=R32(c->r[3]+0x00000044u); // 8007E97C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8007E980
  if (!crb(c,2)) { goto L_8007E994; } // 8007E984
  c->r[0]=R32(c->r[3]+0x00000048u); // 8007E988
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8007E98C
  if (crb(c,2)) return; // 8007E990
L_8007E994:;
  c->r[6]=R32(c->r[6]+0x00000004u); // 8007E994
L_8007E998:;
  cmps(c,0,(int32_t)c->r[6],0); // 8007E998
  if (!crb(c,2)) { IRQCHK(c); goto L_8007E978; } // 8007E99C
  c->r[3]=0u+0x00000000u; // 8007E9A0
  return; // 8007E9A4
}

// fn_8007E9B0
void f_8007E9B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E9B0
  c->r[0]=c->lr; // 8007E9B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E9B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E9BC
  c->r[31]=c->r[3]|c->r[3]; // 8007E9C0
  c->r[3]=c->r[3]+0x00000020u; // 8007E9C4
  c->lr=0x8007E9CCu; f_80067A90(c); // 8007E9C8
  c->r[3]=R32(c->r[31]+0x00000024u); // 8007E9CC
  c->r[0]=c->r[3]+0x00000001u; // 8007E9D0
  W32(c->r[31]+0x00000024u,c->r[0]); // 8007E9D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007E9D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007E9DC
  c->lr=c->r[0]; // 8007E9E0
  c->r[1]=c->r[1]+0x00000010u; // 8007E9E4
  return; // 8007E9E8
}

// fn_8007E9F0
void f_8007E9F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007E9F0
  c->r[0]=c->lr; // 8007E9F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007E9F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007E9FC
  c->r[31]=c->r[3]|c->r[3]; // 8007EA00
  c->r[3]=c->r[3]+0x00000020u; // 8007EA04
  c->lr=0x8007EA0Cu; f_80067B50(c); // 8007EA08
  c->r[3]=R32(c->r[31]+0x00000024u); // 8007EA0C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007EA10
  W32(c->r[31]+0x00000024u,c->r[0]); // 8007EA14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EA1C
  c->lr=c->r[0]; // 8007EA20
  c->r[1]=c->r[1]+0x00000010u; // 8007EA24
  return; // 8007EA28
}

// fn_8007EA30
void f_8007EA30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EA30
  c->r[0]=c->lr; // 8007EA34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007EA38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007EA3C
  c->r[31]=c->r[4]|c->r[4]; // 8007EA40
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007EA44
  c->r[30]=c->r[3]|c->r[3]; // 8007EA48
  c->r[3]=c->r[3]+0x00000020u; // 8007EA4C
  c->lr=0x8007EA54u; f_80067B50(c); // 8007EA50
  c->r[3]=c->r[30]|c->r[30]; // 8007EA54
  c->r[4]=c->r[31]|c->r[31]; // 8007EA58
  c->lr=0x8007EA60u; f_8007E740(c); // 8007EA5C
  c->r[3]=R32(c->r[30]+0x00000024u); // 8007EA60
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007EA64
  W32(c->r[30]+0x00000024u,c->r[0]); // 8007EA68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EA6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007EA70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EA74
  c->lr=c->r[0]; // 8007EA78
  c->r[1]=c->r[1]+0x00000010u; // 8007EA7C
  return; // 8007EA80
}

// fn_8007EA90
void f_8007EA90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EA90
  c->r[0]=c->lr; // 8007EA94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007EA98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007EA9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007EAA0
  c->r[30]=c->r[3]|c->r[3]; // 8007EAA4
  goto L_8007EAD4; // 8007EAA8
L_8007EAAC:;
  c->r[31]=R32(c->r[3]+0x00000008u); // 8007EAAC
  c->r[3]=c->r[30]+0x00000020u; // 8007EAB0
  c->r[4]=c->r[31]|c->r[31]; // 8007EAB4
  c->lr=0x8007EABCu; f_80067B50(c); // 8007EAB8
  c->r[3]=c->r[30]|c->r[30]; // 8007EABC
  c->r[4]=c->r[31]|c->r[31]; // 8007EAC0
  c->lr=0x8007EAC8u; f_8007E740(c); // 8007EAC4
  c->r[3]=R32(c->r[30]+0x00000024u); // 8007EAC8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007EACC
  W32(c->r[30]+0x00000024u,c->r[0]); // 8007EAD0
L_8007EAD4:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8007EAD4
  cmps(c,0,(int32_t)c->r[3],0); // 8007EAD8
  if (!crb(c,2)) { IRQCHK(c); goto L_8007EAAC; } // 8007EADC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EAE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EAE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007EAE8
  c->lr=c->r[0]; // 8007EAEC
  c->r[1]=c->r[1]+0x00000010u; // 8007EAF0
  return; // 8007EAF4
}

// fn_8007EB00
void f_8007EB00(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000020u); // 8007EB00
  goto L_8007EB1C; // 8007EB04
L_8007EB08:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 8007EB08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 8007EB0C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8007EB10
  if (crb(c,2)) return; // 8007EB14
  c->r[5]=R32(c->r[5]+0x00000004u); // 8007EB18
L_8007EB1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8007EB1C
  if (!crb(c,2)) { IRQCHK(c); goto L_8007EB08; } // 8007EB20
  c->r[3]=0u+0x00000000u; // 8007EB24
  return; // 8007EB28
}

// fn_8007EB30
void f_8007EB30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EB30
  c->r[0]=c->lr; // 8007EB34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007EB38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007EB3C
  c->r[31]=c->r[3]|c->r[3]; // 8007EB40
  c->r[5]=R32(c->r[4]+0x00000000u); // 8007EB44
  c->r[0]=R32(c->r[4]+0x00000004u); // 8007EB48
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000012u); // 8007EB4C
  W32(c->r[3]+0x00000020u,c->r[5]); // 8007EB50
  cmps(c,0,(int32_t)c->r[6],0); // 8007EB54
  W32(c->r[3]+0x00000024u,c->r[0]); // 8007EB58
  c->r[0]=R32(c->r[4]+0x00000008u); // 8007EB5C
  W32(c->r[3]+0x00000028u,c->r[0]); // 8007EB60
  if (crb(c,0)) { goto L_8007EB74; } // 8007EB64
  c->r[3]=c->r[6]|c->r[6]; // 8007EB68
  c->r[4]=c->r[31]+0x00000020u; // 8007EB6C
  c->lr=0x8007EB74u; f_801069F0(c); // 8007EB70
L_8007EB74:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000010u); // 8007EB74
  cmps(c,0,(int32_t)c->r[3],0); // 8007EB78
  if (crb(c,0)) { goto L_8007EB88; } // 8007EB7C
  c->r[4]=c->r[31]+0x00000020u; // 8007EB80
  c->lr=0x8007EB88u; f_801069F0(c); // 8007EB84
L_8007EB88:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EB88
  cmps(c,0,(int32_t)c->r[3],0); // 8007EB8C
  if (crb(c,0)) { goto L_8007EB9C; } // 8007EB90
  c->r[4]=c->r[31]+0x00000020u; // 8007EB94
  c->lr=0x8007EB9Cu; f_801069F0(c); // 8007EB98
L_8007EB9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EB9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EBA0
  c->lr=c->r[0]; // 8007EBA4
  c->r[1]=c->r[1]+0x00000010u; // 8007EBA8
  return; // 8007EBAC
}

// fn_8007EBB0
void f_8007EBB0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000020u); // 8007EBB0
  c->r[0]=R32(c->r[3]+0x00000024u); // 8007EBB4
  W32(c->r[4]+0x00000004u,c->r[0]); // 8007EBB8
  W32(c->r[4]+0x00000000u,c->r[5]); // 8007EBBC
  c->r[0]=R32(c->r[3]+0x00000028u); // 8007EBC0
  W32(c->r[4]+0x00000008u,c->r[0]); // 8007EBC4
  return; // 8007EBC8
}

// fn_8007EBD0
void f_8007EBD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EBD0
  c->r[0]=c->lr; // 8007EBD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007EBD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007EBDC
  c->r[31]=c->r[3]|c->r[3]; // 8007EBE0
  c->r[5]=R32(c->r[4]+0x00000000u); // 8007EBE4
  c->r[0]=R32(c->r[4]+0x00000004u); // 8007EBE8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000012u); // 8007EBEC
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 8007EBF0
  cmps(c,0,(int32_t)c->r[6],0); // 8007EBF4
  W32(c->r[3]+0x00000030u,c->r[0]); // 8007EBF8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8007EBFC
  W32(c->r[3]+0x00000034u,c->r[0]); // 8007EC00
  if (crb(c,0)) { goto L_8007EC14; } // 8007EC04
  c->r[3]=c->r[6]|c->r[6]; // 8007EC08
  c->r[4]=c->r[31]+0x0000002Cu; // 8007EC0C
  c->lr=0x8007EC14u; f_80106BA0(c); // 8007EC10
L_8007EC14:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000010u); // 8007EC14
  cmps(c,0,(int32_t)c->r[3],0); // 8007EC18
  if (crb(c,0)) { goto L_8007EC28; } // 8007EC1C
  c->r[4]=c->r[31]+0x0000002Cu; // 8007EC20
  c->lr=0x8007EC28u; f_80106BA0(c); // 8007EC24
L_8007EC28:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EC28
  cmps(c,0,(int32_t)c->r[3],0); // 8007EC2C
  if (crb(c,0)) { goto L_8007EC3C; } // 8007EC30
  c->r[4]=c->r[31]+0x0000002Cu; // 8007EC34
  c->lr=0x8007EC3Cu; f_80106BA0(c); // 8007EC38
L_8007EC3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EC3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EC40
  c->lr=c->r[0]; // 8007EC44
  c->r[1]=c->r[1]+0x00000010u; // 8007EC48
  return; // 8007EC4C
}

// fn_8007EC50
void f_8007EC50(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 8007EC50
  c->r[0]=R32(c->r[3]+0x00000030u); // 8007EC54
  W32(c->r[4]+0x00000004u,c->r[0]); // 8007EC58
  W32(c->r[4]+0x00000000u,c->r[5]); // 8007EC5C
  c->r[0]=R32(c->r[3]+0x00000034u); // 8007EC60
  W32(c->r[4]+0x00000008u,c->r[0]); // 8007EC64
  return; // 8007EC68
}

// fn_8007EC70
void f_8007EC70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EC70
  c->r[0]=c->lr; // 8007EC74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007EC78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8007EC7C
  c->f[31]=c->f[1]; // 8007EC80
  W32(c->r[1]+0x00000014u,c->r[31]); // 8007EC84
  c->r[31]=c->r[3]|c->r[3]; // 8007EC88
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000010u); // 8007EC8C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 8007EC90
  cmps(c,0,(int32_t)c->r[0],0); // 8007EC94
  if (crb(c,0)) { goto L_8007ECAC; } // 8007EC98
  c->f[2]=c->f[31]; // 8007EC9C
  c->r[3]=c->r[0]|c->r[0]; // 8007ECA0
  c->f[3]=c->f[31]; // 8007ECA4
  c->lr=0x8007ECACu; f_80106CC0(c); // 8007ECA8
L_8007ECAC:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007ECAC
  cmps(c,0,(int32_t)c->r[3],0); // 8007ECB0
  if (crb(c,0)) { goto L_8007ECC8; } // 8007ECB4
  c->f[1]=c->f[31]; // 8007ECB8
  c->f[2]=c->f[31]; // 8007ECBC
  c->f[3]=c->f[31]; // 8007ECC0
  c->lr=0x8007ECC8u; f_80106CC0(c); // 8007ECC4
L_8007ECC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007ECC8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8007ECCC
  c->r[31]=R32(c->r[1]+0x00000014u); // 8007ECD0
  c->lr=c->r[0]; // 8007ECD4
  c->r[1]=c->r[1]+0x00000020u; // 8007ECD8
  return; // 8007ECDC
}

// fn_8007ECE0
void f_8007ECE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007ECE0
  return; // 8007ECE4
}

// fn_8007ECF0
void f_8007ECF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007ECF0
  c->r[0]=c->lr; // 8007ECF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007ECF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007ECFC
  c->r[31]=c->r[5]|c->r[5]; // 8007ED00
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007ED04
  c->r[30]=c->r[4]|c->r[4]; // 8007ED08
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007ED0C
  c->r[29]=c->r[3]|c->r[3]; // 8007ED10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Eu); // 8007ED14
  cmps(c,0,(int32_t)c->r[0],0); // 8007ED18
  if (crb(c,0)) { goto L_8007ED28; } // 8007ED1C
  c->r[3]=c->r[0]|c->r[0]; // 8007ED20
  c->lr=0x8007ED28u; f_80107040(c); // 8007ED24
L_8007ED28:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000010u); // 8007ED28
  cmps(c,0,(int32_t)c->r[3],0); // 8007ED2C
  if (crb(c,0)) { goto L_8007ED40; } // 8007ED30
  c->r[4]=c->r[30]|c->r[30]; // 8007ED34
  c->r[5]=c->r[31]+0x00000001u; // 8007ED38
  c->lr=0x8007ED40u; f_80107040(c); // 8007ED3C
L_8007ED40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007ED40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007ED44
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007ED48
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007ED4C
  c->lr=c->r[0]; // 8007ED50
  c->r[1]=c->r[1]+0x00000020u; // 8007ED54
  return; // 8007ED58
}

// fn_8007ED60
void f_8007ED60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007ED60
  c->r[0]=c->lr; // 8007ED64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007ED68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007ED6C
  c->r[31]=c->r[4]|c->r[4]; // 8007ED70
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007ED74
  c->r[30]=c->r[3]|c->r[3]; // 8007ED78
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Eu); // 8007ED7C
  cmps(c,0,(int32_t)c->r[0],0); // 8007ED80
  if (crb(c,0)) { goto L_8007ED90; } // 8007ED84
  c->r[3]=c->r[0]|c->r[0]; // 8007ED88
  c->lr=0x8007ED90u; f_80106E70(c); // 8007ED8C
L_8007ED90:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000010u); // 8007ED90
  cmps(c,0,(int32_t)c->r[3],0); // 8007ED94
  if (crb(c,0)) { goto L_8007EDA4; } // 8007ED98
  c->r[4]=c->r[31]|c->r[31]; // 8007ED9C
  c->lr=0x8007EDA4u; f_80106E70(c); // 8007EDA0
L_8007EDA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EDA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EDA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007EDAC
  c->lr=c->r[0]; // 8007EDB0
  c->r[1]=c->r[1]+0x00000010u; // 8007EDB4
  return; // 8007EDB8
}

// fn_8007EDC0
void f_8007EDC0(Ctx* __restrict c) {
  c->r[5]=0u+0x80360000u; // 8007EDC0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8007EDC4
  c->r[5]=c->r[5]+0x00000350u; // 8007EDC8
  c->r[3]=R32(c->r[5]+c->r[0]); // 8007EDCC
  goto L_8007EDDC; // 8007EDD0
  c->r[0]=c->r[0]|0x00000000u; // 8007EDD4
L_8007EDD8:;
  c->r[3]=c->r[3]+0x00000008u; // 8007EDD8
L_8007EDDC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8007EDDC
  cmps(c,0,(int32_t)c->r[0],-1); // 8007EDE0
  if (crb(c,2)) { goto L_8007EDF0; } // 8007EDE4
  cmpu(c,0,c->r[0],c->r[4]); // 8007EDE8
  if (!crb(c,2)) { IRQCHK(c); goto L_8007EDD8; } // 8007EDEC
L_8007EDF0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 8007EDF0
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8007EDF4
  return; // 8007EDF8
}

// fn_8007EE00
void f_8007EE00(Ctx* __restrict c) {
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 8007EE00
  c->r[4]=0u+0x80360000u; // 8007EE04
  c->r[4]=c->r[4]+0x00000350u; // 8007EE08
  c->r[5]=R32(c->r[3]+0x00000040u); // 8007EE0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007EE10
  c->r[4]=R32(c->r[4]+c->r[0]); // 8007EE14
  goto L_8007EE24; // 8007EE18
  c->r[0]=c->r[0]|0x00000000u; // 8007EE1C
L_8007EE20:;
  c->r[4]=c->r[4]+0x00000008u; // 8007EE20
L_8007EE24:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8007EE24
  cmps(c,0,(int32_t)c->r[0],-1); // 8007EE28
  if (crb(c,2)) { goto L_8007EE38; } // 8007EE2C
  cmpu(c,0,c->r[0],c->r[5]); // 8007EE30
  if (!crb(c,2)) { IRQCHK(c); goto L_8007EE20; } // 8007EE34
L_8007EE38:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8007EE38
  W16(c->r[3]+0x00000070u,c->r[0]); // 8007EE3C
  return; // 8007EE40
}

// fn_8007EE50
void f_8007EE50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EE50
  c->r[0]=c->lr; // 8007EE54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007EE58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007EE5C
  c->r[31]=c->r[3]|c->r[3]; // 8007EE60
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8007EE64
  c->lr=0x8007EE6Cu; f_80073AF0(c); // 8007EE68
  c->r[3]=rotl(c->r[3],0)&0x00060000u; // 8007EE6C
  c->r[0]=c->r[3]+0xFFFE0000u; // 8007EE70
  cmpu(c,0,c->r[0],0x00000000u); // 8007EE74
  if (crb(c,2)) { goto L_8007EE98; } // 8007EE78
  c->r[0]=c->r[3]+0xFFFC0000u; // 8007EE7C
  cmpu(c,0,c->r[0],0x00000000u); // 8007EE80
  if (crb(c,2)) { goto L_8007EEA0; } // 8007EE84
  c->r[0]=c->r[3]+0xFFFA0000u; // 8007EE88
  cmpu(c,0,c->r[0],0x00000000u); // 8007EE8C
  if (crb(c,2)) { goto L_8007EEA8; } // 8007EE90
  goto L_8007EEB0; // 8007EE94
L_8007EE98:;
  c->r[0]=0u+0x00000001u; // 8007EE98
  goto L_8007EEB8; // 8007EE9C
L_8007EEA0:;
  c->r[0]=0u+0x00000002u; // 8007EEA0
  goto L_8007EEB8; // 8007EEA4
L_8007EEA8:;
  c->r[0]=0u+0x00000003u; // 8007EEA8
  goto L_8007EEB8; // 8007EEAC
L_8007EEB0:;
  c->r[0]=R8(c->r[31]+0x00000145u); // 8007EEB0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8007EEB4
L_8007EEB8:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8007EEB8
  cmps(c,0,(int32_t)c->r[0],1); // 8007EEBC
  if (crb(c,2)) { goto L_8007EED8; } // 8007EEC0
  cmps(c,0,(int32_t)c->r[0],2); // 8007EEC4
  if (crb(c,2)) { goto L_8007EEE8; } // 8007EEC8
  cmps(c,0,(int32_t)c->r[0],3); // 8007EECC
  if (crb(c,2)) { goto L_8007EF04; } // 8007EED0
  goto L_8007EF20; // 8007EED4
L_8007EED8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EED8
  c->r[4]=0u+0x00000000u; // 8007EEDC
  c->lr=0x8007EEE4u; f_80107190(c); // 8007EEE0
  goto L_8007EF2C; // 8007EEE4
L_8007EEE8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EEE8
  c->r[4]=0u+0x00000001u; // 8007EEEC
  c->lr=0x8007EEF4u; f_80107190(c); // 8007EEF0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EEF4
  c->r[4]=0u+0x00000001u; // 8007EEF8
  c->lr=0x8007EF00u; f_80107490(c); // 8007EEFC
  goto L_8007EF2C; // 8007EF00
L_8007EF04:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EF04
  c->r[4]=0u+0x00000001u; // 8007EF08
  c->lr=0x8007EF10u; f_80107590(c); // 8007EF0C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EF10
  c->r[4]=0u+0x00000001u; // 8007EF14
  c->lr=0x8007EF1Cu; f_801076A0(c); // 8007EF18
  goto L_8007EF2C; // 8007EF1C
L_8007EF20:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Eu); // 8007EF20
  c->r[4]=0u+0x00000001u; // 8007EF24
  c->lr=0x8007EF2Cu; f_80107190(c); // 8007EF28
L_8007EF2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8007EF2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8007EF30
  c->lr=c->r[0]; // 8007EF34
  c->r[1]=c->r[1]+0x00000010u; // 8007EF38
  return; // 8007EF3C
}

// fn_8007EF40
void f_8007EF40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EF40
  c->r[0]=c->lr; // 8007EF44
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007EF48
  c->r[11]=c->r[1]+0x00000020u; // 8007EF4C
  c->lr=0x8007EF54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007EF50
  c->r[28]=0u+0x80410000u; // 8007EF54
  c->r[27]=0u+0x00000000u; // 8007EF58
  c->r[28]=c->r[28]+0xFFFFF6D8u; // 8007EF5C
  c->r[29]=0u+0x00000000u; // 8007EF60
  c->r[31]=0u+0x00000001u; // 8007EF64
  c->r[30]=c->r[28]|c->r[28]; // 8007EF68
L_8007EF6C:;
  W16(c->r[28]+0x00000566u,c->r[29]); // 8007EF6C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007EF70
  c->lr=0x8007EF78u; f_8007F3D0(c); // 8007EF74
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007EF78
  c->lr=0x8007EF80u; f_8007F5F0(c); // 8007EF7C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007EF80
  c->lr=0x8007EF88u; f_8007F800(c); // 8007EF84
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007EF88
  c->lr=0x8007EF90u; f_800087A0(c); // 8007EF8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 8007EF90
  if (!crb(c,2)) { goto L_8007EFAC; } // 8007EF94
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8007EF98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1392); // 8007EF9C
  c->r[3]=c->r[30]+c->r[0]; // 8007EFA0
  W16(c->r[3]+0x00000564u,c->r[27]); // 8007EFA4
  W16(c->r[3]+0x00000566u,c->r[31]); // 8007EFA8
L_8007EFAC:;
  c->r[27]=c->r[27]+0x00000001u; // 8007EFAC
  W16(c->r[28]+0x0000056Au,c->r[29]); // 8007EFB0
  cmps(c,0,(int32_t)c->r[27],4); // 8007EFB4
  c->r[28]=c->r[28]+0x00000570u; // 8007EFB8
  if (crb(c,0)) { IRQCHK(c); goto L_8007EF6C; } // 8007EFBC
  c->r[0]=0u+0x00000012u; // 8007EFC0
  W32(c->r[13]+0xFFFF86E0u,c->r[0]); // 8007EFC4
  c->r[11]=c->r[1]+0x00000020u; // 8007EFC8
  W32(c->r[13]+0xFFFF86E4u,c->r[0]); // 8007EFCC
  c->lr=0x8007EFD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007EFD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007EFD4
  c->lr=c->r[0]; // 8007EFD8
  c->r[1]=c->r[1]+0x00000020u; // 8007EFDC
  return; // 8007EFE0
}

// fn_8007EFF0
void f_8007EFF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007EFF0
  c->r[0]=c->lr; // 8007EFF4
  W32(c->r[1]+0x00000094u,c->r[0]); // 8007EFF8
  c->r[11]=c->r[1]+0x00000050u; // 8007EFFC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8007F000
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8007F004
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8007F008
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8007F00C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8007F010
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8007F014
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 8007F018
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 8007F01C
  c->lr=0x8007F024u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8007F020
  c->r[31]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F024
  c->r[27]=0u+0x80410000u; // 8007F028
  c->r[29]=c->r[3]|c->r[3]; // 8007F02C
  c->r[27]=c->r[27]+0xFFFFF6D8u; // 8007F030
  c->r[30]=c->r[27]+c->r[31]; // 8007F034
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000566u); // 8007F038
  cmps(c,0,(int32_t)c->r[0],0); // 8007F03C
  if (crb(c,2)) { goto L_8007F050; } // 8007F040
  cmps(c,0,(int32_t)c->r[0],1); // 8007F044
  if (crb(c,2)) { goto L_8007F0A8; } // 8007F048
  goto L_8007F128; // 8007F04C
L_8007F050:;
  c->lr=0x8007F054u; f_800087A0(c); // 8007F050
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 8007F054
  if (!crb(c,2)) { goto L_8007F068; } // 8007F058
  W16(c->r[30]+0x00000564u,c->r[29]); // 8007F05C
  c->r[0]=0u+0x00000001u; // 8007F060
  W16(c->r[30]+0x00000566u,c->r[0]); // 8007F064
L_8007F068:;
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[4]=c->ps1[4]=RF32(ea);} // 8007F068
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[3]=c->ps1[3]=RF32(ea);} // 8007F06C
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007F070
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F074
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F078
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[4]);} // 8007F07C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 8007F080
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[4]);} // 8007F084
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 8007F088
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[3]);} // 8007F08C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 8007F090
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 8007F094
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 8007F098
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8007F09C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 8007F0A0
  goto L_8007F128; // 8007F0A4
L_8007F0A8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000564u); // 8007F0A8
  c->r[4]=c->r[1]+0x00000024u; // 8007F0AC
  c->r[5]=0u+0x00000000u; // 8007F0B0
  c->r[6]=0u+0x00000000u; // 8007F0B4
  c->lr=0x8007F0BCu; f_80008810(c); // 8007F0B8
  cmps(c,0,(int32_t)c->r[3],0); // 8007F0BC
  if (!crb(c,2)) { goto L_8007F0D8; } // 8007F0C0
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F0C4
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F0C8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 8007F0CC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8007F0D0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 8007F0D4
L_8007F0D8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000564u); // 8007F0D8
  c->r[4]=c->r[1]+0x00000018u; // 8007F0DC
  c->r[5]=0u+0x00000000u; // 8007F0E0
  c->r[6]=0u+0x00000000u; // 8007F0E4
  c->lr=0x8007F0ECu; f_800088F0(c); // 8007F0E8
  cmps(c,0,(int32_t)c->r[3],0); // 8007F0EC
  if (!crb(c,2)) { goto L_8007F108; } // 8007F0F0
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F0F4
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F0F8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 8007F0FC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8007F100
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[1]);} // 8007F104
L_8007F108:;
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[3]=c->ps1[3]=RF32(ea);} // 8007F108
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8007F10C
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F110
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F114
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 8007F118
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 8007F11C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8007F120
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8007F124
L_8007F128:;
  c->r[0]=R32(c->r[30]+0x00000240u); // 8007F128
  c->r[3]=c->r[1]+0x00000024u; // 8007F12C
  c->r[5]=R32(c->r[1]+0x00000024u); // 8007F130
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007F134
  c->r[4]=R32(c->r[1]+0x00000028u); // 8007F138
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8007F13C
  {uint32_t ea=c->r[2]+0xFFFF8C34u; c->f[28]=c->ps1[28]=RF32(ea);} // 8007F140
  c->r[6]=c->r[30]+c->r[6]; // 8007F144
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[29]=c->ps1[29]=RF32(ea);} // 8007F148
  W32(c->r[6]+0x000000D8u,c->r[5]); // 8007F14C
  c->r[27]=R32(c->r[1]+0x00000010u); // 8007F150
  W32(c->r[6]+0x000000DCu,c->r[4]); // 8007F154
  c->r[28]=R32(c->r[1]+0x00000014u); // 8007F158
  W32(c->r[6]+0x000000E0u,c->r[0]); // 8007F15C
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[30]=RF64(ea);} // 8007F160
  {uint32_t ea=c->r[2]+0xFFFF8C38u; c->f[31]=RF64(ea);} // 8007F164
  c->lr=0x8007F16Cu; f_8012EBA0(c); // 8007F168
  c->r[0]=R32(c->r[30]+0x00000240u); // 8007F16C
  c->r[3]=c->r[1]+0x00000024u; // 8007F170
  c->r[6]=R32(c->r[13]+0xFFFF86E0u); // 8007F174
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F178
  c->r[4]=c->r[30]+c->r[0]; // 8007F17C
  {uint32_t ea=c->r[4]+0x000001B0u; WF32(ea,c->f[1]);} // 8007F180
  c->r[0]=R32(c->r[30]+0x00000240u); // 8007F184
  c->r[4]=c->r[0]+c->r[6]; // 8007F188
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F18C
  c->r[0]=divwu(c->r[4],c->r[6]); // 8007F190
  c->r[5]=c->r[30]+c->r[5]; // 8007F194
  {uint32_t ea=c->r[5]+0x000001B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F198
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8007F19C
  c->r[0]=c->r[4]-c->r[0]; // 8007F1A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F1A4
  c->r[4]=c->r[30]+c->r[0]; // 8007F1A8
  {uint32_t ea=c->r[4]+0x000001B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F1AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8007F1B0
  {uint32_t ea=c->r[5]+0x000001F8u; WF32(ea,c->f[0]);} // 8007F1B4
  c->lr=0x8007F1BCu; f_8012EBA0(c); // 8007F1B8
  fcmp(c,0,c->f[1],c->f[28]); // 8007F1BC
  if (!crb(c,0)) { goto L_8007F1CC; } // 8007F1C0
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F1C4
  goto L_8007F1D0; // 8007F1C8
L_8007F1CC:;
  c->f[1]=c->ps1[1]=S(c->f[29]/c->f[1]); // 8007F1CC
L_8007F1D0:;
  c->r[0]=R32(c->r[30]+0x00000240u); // 8007F1D0
  c->r[3]=c->r[1]+0x00000024u; // 8007F1D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007F1D8
  c->r[4]=c->r[30]+c->r[0]; // 8007F1DC
  c->lr=0x8007F1E4u; f_8012EB10(c); // 8007F1E0
  c->r[4]=R32(c->r[30]+0x00000240u); // 8007F1E4
  c->r[3]=c->r[1]+0x00000018u; // 8007F1E8
  c->r[7]=R32(c->r[13]+0xFFFF86E0u); // 8007F1EC
  c->r[8]=c->r[4]+0x00000001u; // 8007F1F0
  W32(c->r[30]+0x00000240u,c->r[8]); // 8007F1F4
  c->r[6]=divwu(c->r[8],c->r[7]); // 8007F1F8
  c->r[5]=R32(c->r[1]+0x00000018u); // 8007F1FC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8007F200
  c->r[0]=R32(c->r[1]+0x00000020u); // 8007F204
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8007F208
  c->r[6]=c->r[8]-c->r[6]; // 8007F20C
  W32(c->r[30]+0x00000240u,c->r[6]); // 8007F210
  c->r[6]=R32(c->r[30]+0x00000484u); // 8007F214
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 8007F218
  c->r[6]=c->r[30]+c->r[6]; // 8007F21C
  W32(c->r[6]+0x0000031Cu,c->r[5]); // 8007F220
  W32(c->r[6]+0x00000320u,c->r[4]); // 8007F224
  W32(c->r[6]+0x00000324u,c->r[0]); // 8007F228
  c->lr=0x8007F230u; f_8012EBA0(c); // 8007F22C
  c->r[0]=R32(c->r[30]+0x00000484u); // 8007F230
  c->r[3]=c->r[1]+0x00000018u; // 8007F234
  c->r[6]=R32(c->r[13]+0xFFFF86E0u); // 8007F238
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F23C
  c->r[4]=c->r[30]+c->r[0]; // 8007F240
  {uint32_t ea=c->r[4]+0x000003F4u; WF32(ea,c->f[1]);} // 8007F244
  c->r[0]=R32(c->r[30]+0x00000484u); // 8007F248
  c->r[4]=c->r[0]+c->r[6]; // 8007F24C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F250
  c->r[0]=divwu(c->r[4],c->r[6]); // 8007F254
  c->r[5]=c->r[30]+c->r[5]; // 8007F258
  {uint32_t ea=c->r[5]+0x000003F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F25C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8007F260
  c->r[0]=c->r[4]-c->r[0]; // 8007F264
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F268
  c->r[4]=c->r[30]+c->r[0]; // 8007F26C
  {uint32_t ea=c->r[4]+0x000003F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F270
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8007F274
  {uint32_t ea=c->r[5]+0x0000043Cu; WF32(ea,c->f[0]);} // 8007F278
  c->lr=0x8007F280u; f_8012EBA0(c); // 8007F27C
  fcmp(c,0,c->f[1],c->f[28]); // 8007F280
  if (!crb(c,0)) { goto L_8007F290; } // 8007F284
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F288
  goto L_8007F294; // 8007F28C
L_8007F290:;
  c->f[1]=c->ps1[1]=S(c->f[29]/c->f[1]); // 8007F290
L_8007F294:;
  c->r[0]=R32(c->r[30]+0x00000484u); // 8007F294
  c->r[3]=c->r[1]+0x00000018u; // 8007F298
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8007F29C
  c->r[4]=c->r[30]+c->r[0]; // 8007F2A0
  c->r[4]=c->r[4]+0x00000244u; // 8007F2A4
  c->lr=0x8007F2ACu; f_8012EB10(c); // 8007F2A8
  c->r[4]=R32(c->r[30]+0x00000484u); // 8007F2AC
  c->r[3]=R32(c->r[13]+0xFFFF86E0u); // 8007F2B0
  c->r[4]=c->r[4]+0x00000001u; // 8007F2B4
  W32(c->r[30]+0x00000484u,c->r[4]); // 8007F2B8
  c->r[0]=divwu(c->r[4],c->r[3]); // 8007F2BC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F2C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007F2C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 8007F2C8
  c->r[0]=c->r[4]-c->r[0]; // 8007F2CC
  W32(c->r[30]+0x00000484u,c->r[0]); // 8007F2D0
  c->r[0]=R32(c->r[30]+0x00000560u); // 8007F2D4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 8007F2D8
  c->r[3]=c->r[30]+c->r[0]; // 8007F2DC
  W32(c->r[3]+0x00000488u,c->r[27]); // 8007F2E0
  W32(c->r[3]+0x0000048Cu,c->r[28]); // 8007F2E4
  c->lr=0x8007F2ECu; f_802F6C18(c); // 8007F2E8
  c->f[0]=c->f[1]/c->f[30]; // 8007F2EC
  c->r[0]=R32(c->r[30]+0x00000560u); // 8007F2F0
  c->r[3]=0u+0x80410000u; // 8007F2F4
  c->r[4]=R32(c->r[13]+0xFFFF86E4u); // 8007F2F8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8007F2FC
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007F300
  c->f[0]=c->f[31]*c->f[0]; // 8007F304
  c->r[5]=c->r[30]+c->r[0]; // 8007F308
  c->r[28]=c->r[3]+c->r[31]; // 8007F30C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8007F310
  {uint32_t ea=c->r[5]+0x00000518u; WF32(ea,c->f[0]);} // 8007F314
  c->r[5]=R32(c->r[30]+0x00000560u); // 8007F318
  c->r[5]=c->r[5]+0x00000001u; // 8007F31C
  c->r[0]=divwu(c->r[5],c->r[4]); // 8007F320
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8007F324
  c->r[0]=c->r[5]-c->r[0]; // 8007F328
  W32(c->r[30]+0x00000560u,c->r[0]); // 8007F32C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000056Au); // 8007F330
  cmps(c,0,(int32_t)c->r[0],0); // 8007F334
  if (!crb(c,1)) { goto L_8007F364; } // 8007F338
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)1392); // 8007F33C
  c->r[4]=c->r[3]+c->r[0]; // 8007F340
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000056Au); // 8007F344
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007F348
  W16(c->r[4]+0x0000056Au,c->r[0]); // 8007F34C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[0]); // 8007F350
  if (!crb(c,2)) { goto L_8007F364; } // 8007F354
  c->r[3]=c->r[29]|c->r[29]; // 8007F358
  c->r[4]=0u+0x00000000u; // 8007F35C
  c->lr=0x8007F364u; f_8015D7B0(c); // 8007F360
L_8007F364:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000056Au); // 8007F364
  cmps(c,0,(int32_t)c->r[0],0); // 8007F368
  if (!crb(c,2)) { goto L_8007F390; } // 8007F36C
  c->r[3]=0u+0x80410000u; // 8007F370
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007F374
  c->r[4]=c->r[3]+c->r[31]; // 8007F378
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000056Cu); // 8007F37C
  cmps(c,0,(int32_t)c->r[3],0); // 8007F380
  if (!crb(c,1)) { goto L_8007F390; } // 8007F384
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8007F388
  W16(c->r[4]+0x0000056Cu,c->r[0]); // 8007F38C
L_8007F390:;
  c->r[11]=c->r[1]+0x00000050u; // 8007F390
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8007F394
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8007F398
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8007F39C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8007F3A0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8007F3A4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8007F3A8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 8007F3AC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 8007F3B0
  c->lr=0x8007F3B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8007F3B4
  c->r[0]=R32(c->r[1]+0x00000094u); // 8007F3B8
  c->lr=c->r[0]; // 8007F3BC
  c->r[1]=c->r[1]+0x00000090u; // 8007F3C0
  return; // 8007F3C4
}

// fn_8007F3D0
void f_8007F3D0(Ctx* __restrict c) {
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F3D0
  c->r[3]=0u+0x80410000u; // 8007F3D4
  c->r[0]=0u+0x00000003u; // 8007F3D8
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007F3DC
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007F3E0
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F3E4
  c->r[6]=c->r[3]+c->r[4]; // 8007F3E8
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F3EC
  c->r[4]=c->r[6]|c->r[6]; // 8007F3F0
  c->r[5]=c->r[6]|c->r[6]; // 8007F3F4
  c->ctr=c->r[0]; // 8007F3F8
L_8007F3FC:;
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 8007F3FC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 8007F400
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[2]);} // 8007F404
  c->r[0]=R32(c->r[4]+0x00000004u); // 8007F408
  c->r[3]=R32(c->r[4]+0x00000000u); // 8007F40C
  W32(c->r[4]+0x000000D8u,c->r[3]); // 8007F410
  W32(c->r[4]+0x000000DCu,c->r[0]); // 8007F414
  c->r[0]=R32(c->r[4]+0x00000008u); // 8007F418
  W32(c->r[4]+0x000000E0u,c->r[0]); // 8007F41C
  {uint32_t ea=c->r[5]+0x000001B0u; WF32(ea,c->f[0]);} // 8007F420
  {uint32_t ea=c->r[5]+0x000001F8u; WF32(ea,c->f[2]);} // 8007F424
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[2]);} // 8007F428
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[1]);} // 8007F42C
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[2]);} // 8007F430
  c->r[0]=R32(c->r[4]+0x00000010u); // 8007F434
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8007F438
  W32(c->r[4]+0x000000E4u,c->r[3]); // 8007F43C
  W32(c->r[4]+0x000000E8u,c->r[0]); // 8007F440
  c->r[0]=R32(c->r[4]+0x00000014u); // 8007F444
  W32(c->r[4]+0x000000ECu,c->r[0]); // 8007F448
  {uint32_t ea=c->r[5]+0x000001B4u; WF32(ea,c->f[0]);} // 8007F44C
  {uint32_t ea=c->r[5]+0x000001FCu; WF32(ea,c->f[2]);} // 8007F450
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[2]);} // 8007F454
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[1]);} // 8007F458
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[2]);} // 8007F45C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8007F460
  c->r[3]=R32(c->r[4]+0x00000018u); // 8007F464
  W32(c->r[4]+0x000000F0u,c->r[3]); // 8007F468
  W32(c->r[4]+0x000000F4u,c->r[0]); // 8007F46C
  c->r[0]=R32(c->r[4]+0x00000020u); // 8007F470
  W32(c->r[4]+0x000000F8u,c->r[0]); // 8007F474
  {uint32_t ea=c->r[5]+0x000001B8u; WF32(ea,c->f[0]);} // 8007F478
  {uint32_t ea=c->r[5]+0x00000200u; WF32(ea,c->f[2]);} // 8007F47C
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[2]);} // 8007F480
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[1]);} // 8007F484
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[2]);} // 8007F488
  c->r[0]=R32(c->r[4]+0x00000028u); // 8007F48C
  c->r[3]=R32(c->r[4]+0x00000024u); // 8007F490
  W32(c->r[4]+0x000000FCu,c->r[3]); // 8007F494
  W32(c->r[4]+0x00000100u,c->r[0]); // 8007F498
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 8007F49C
  W32(c->r[4]+0x00000104u,c->r[0]); // 8007F4A0
  {uint32_t ea=c->r[5]+0x000001BCu; WF32(ea,c->f[0]);} // 8007F4A4
  {uint32_t ea=c->r[5]+0x00000204u; WF32(ea,c->f[2]);} // 8007F4A8
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[2]);} // 8007F4AC
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[1]);} // 8007F4B0
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[2]);} // 8007F4B4
  c->r[0]=R32(c->r[4]+0x00000034u); // 8007F4B8
  c->r[3]=R32(c->r[4]+0x00000030u); // 8007F4BC
  W32(c->r[4]+0x00000108u,c->r[3]); // 8007F4C0
  W32(c->r[4]+0x0000010Cu,c->r[0]); // 8007F4C4
  c->r[0]=R32(c->r[4]+0x00000038u); // 8007F4C8
  W32(c->r[4]+0x00000110u,c->r[0]); // 8007F4CC
  {uint32_t ea=c->r[5]+0x000001C0u; WF32(ea,c->f[0]);} // 8007F4D0
  {uint32_t ea=c->r[5]+0x00000208u; WF32(ea,c->f[2]);} // 8007F4D4
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[2]);} // 8007F4D8
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[1]);} // 8007F4DC
  {uint32_t ea=c->r[4]+0x00000044u; WF32(ea,c->f[2]);} // 8007F4E0
  c->r[0]=R32(c->r[4]+0x00000040u); // 8007F4E4
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 8007F4E8
  W32(c->r[4]+0x00000114u,c->r[3]); // 8007F4EC
  W32(c->r[4]+0x00000118u,c->r[0]); // 8007F4F0
  c->r[0]=R32(c->r[4]+0x00000044u); // 8007F4F4
  W32(c->r[4]+0x0000011Cu,c->r[0]); // 8007F4F8
  c->r[4]=c->r[4]+0x00000048u; // 8007F4FC
  {uint32_t ea=c->r[5]+0x000001C4u; WF32(ea,c->f[0]);} // 8007F500
  {uint32_t ea=c->r[5]+0x0000020Cu; WF32(ea,c->f[2]);} // 8007F504
  c->r[5]=c->r[5]+0x00000018u; // 8007F508
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007F3FC; } // 8007F50C
  c->r[0]=0u+0x00000000u; // 8007F510
  W32(c->r[6]+0x00000240u,c->r[0]); // 8007F514
  return; // 8007F518
}

// fn_8007F520
void f_8007F520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F520
  c->r[0]=c->lr; // 8007F524
  c->r[6]=0u+0x80300000u; // 8007F528
  c->r[7]=0u+0x80410000u; // 8007F52C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007F530
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F534
  {uint32_t ea=c->r[6]+0xFFFFE2DCu; c->r[5]=R32(ea); c->r[6]=ea;} // 8007F538
  c->r[7]=c->r[7]+0xFFFFF6D8u; // 8007F53C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007F540
  c->r[3]=R32(c->r[6]+0x00000004u); // 8007F544
  c->r[31]=c->r[7]+c->r[8]; // 8007F548
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007F54C
  c->r[30]=0u+0x00000000u; // 8007F550
  c->r[0]=R32(c->r[6]+0x00000008u); // 8007F554
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007F558
  c->r[29]=c->r[4]|c->r[4]; // 8007F55C
  W32(c->r[4]+0x00000000u,c->r[5]); // 8007F560
  W32(c->r[4]+0x00000004u,c->r[3]); // 8007F564
  W32(c->r[4]+0x00000008u,c->r[0]); // 8007F568
  goto L_8007F588; // 8007F56C
L_8007F570:;
  c->r[3]=c->r[29]|c->r[29]; // 8007F570
  c->r[4]=c->r[31]|c->r[31]; // 8007F574
  c->r[5]=c->r[29]|c->r[29]; // 8007F578
  c->lr=0x8007F580u; f_8012EAB0(c); // 8007F57C
  c->r[31]=c->r[31]+0x0000000Cu; // 8007F580
  c->r[30]=c->r[30]+0x00000001u; // 8007F584
L_8007F588:;
  c->r[0]=R32(c->r[13]+0xFFFF86E0u); // 8007F588
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8007F58C
  if (crb(c,0)) { IRQCHK(c); goto L_8007F570; } // 8007F590
  c->r[3]=c->r[29]|c->r[29]; // 8007F594
  c->lr=0x8007F59Cu; f_8012EB80(c); // 8007F598
  {uint32_t ea=c->r[2]+0xFFFF8C34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F59C
  fcmp(c,0,c->f[1],c->f[0]); // 8007F5A0
  if (!crb(c,0)) { goto L_8007F5BC; } // 8007F5A4
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F5A8
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F5AC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 8007F5B0
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 8007F5B4
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 8007F5B8
L_8007F5BC:;
  c->r[3]=c->r[29]|c->r[29]; // 8007F5BC
  c->r[4]=c->r[29]|c->r[29]; // 8007F5C0
  c->lr=0x8007F5C8u; f_8012EB30(c); // 8007F5C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007F5C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007F5CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007F5D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007F5D4
  c->lr=c->r[0]; // 8007F5D8
  c->r[1]=c->r[1]+0x00000020u; // 8007F5DC
  return; // 8007F5E0
}

// fn_8007F5F0
void f_8007F5F0(Ctx* __restrict c) {
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F5F0
  c->r[3]=0u+0x80410000u; // 8007F5F4
  c->r[0]=0u+0x00000003u; // 8007F5F8
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007F5FC
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007F600
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F604
  c->r[6]=c->r[3]+c->r[4]; // 8007F608
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F60C
  c->r[4]=c->r[6]|c->r[6]; // 8007F610
  c->r[5]=c->r[6]|c->r[6]; // 8007F614
  c->ctr=c->r[0]; // 8007F618
L_8007F61C:;
  {uint32_t ea=c->r[4]+0x00000244u; WF32(ea,c->f[2]);} // 8007F61C
  {uint32_t ea=c->r[4]+0x00000248u; WF32(ea,c->f[1]);} // 8007F620
  {uint32_t ea=c->r[4]+0x0000024Cu; WF32(ea,c->f[2]);} // 8007F624
  c->r[0]=R32(c->r[4]+0x00000248u); // 8007F628
  c->r[3]=R32(c->r[4]+0x00000244u); // 8007F62C
  W32(c->r[4]+0x0000031Cu,c->r[3]); // 8007F630
  W32(c->r[4]+0x00000320u,c->r[0]); // 8007F634
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 8007F638
  W32(c->r[4]+0x00000324u,c->r[0]); // 8007F63C
  {uint32_t ea=c->r[5]+0x000003F4u; WF32(ea,c->f[0]);} // 8007F640
  {uint32_t ea=c->r[5]+0x0000043Cu; WF32(ea,c->f[2]);} // 8007F644
  {uint32_t ea=c->r[4]+0x00000250u; WF32(ea,c->f[2]);} // 8007F648
  {uint32_t ea=c->r[4]+0x00000254u; WF32(ea,c->f[1]);} // 8007F64C
  {uint32_t ea=c->r[4]+0x00000258u; WF32(ea,c->f[2]);} // 8007F650
  c->r[0]=R32(c->r[4]+0x00000254u); // 8007F654
  c->r[3]=R32(c->r[4]+0x00000250u); // 8007F658
  W32(c->r[4]+0x00000328u,c->r[3]); // 8007F65C
  W32(c->r[4]+0x0000032Cu,c->r[0]); // 8007F660
  c->r[0]=R32(c->r[4]+0x00000258u); // 8007F664
  W32(c->r[4]+0x00000330u,c->r[0]); // 8007F668
  {uint32_t ea=c->r[5]+0x000003F8u; WF32(ea,c->f[0]);} // 8007F66C
  {uint32_t ea=c->r[5]+0x00000440u; WF32(ea,c->f[2]);} // 8007F670
  {uint32_t ea=c->r[4]+0x0000025Cu; WF32(ea,c->f[2]);} // 8007F674
  {uint32_t ea=c->r[4]+0x00000260u; WF32(ea,c->f[1]);} // 8007F678
  {uint32_t ea=c->r[4]+0x00000264u; WF32(ea,c->f[2]);} // 8007F67C
  c->r[0]=R32(c->r[4]+0x00000260u); // 8007F680
  c->r[3]=R32(c->r[4]+0x0000025Cu); // 8007F684
  W32(c->r[4]+0x00000334u,c->r[3]); // 8007F688
  W32(c->r[4]+0x00000338u,c->r[0]); // 8007F68C
  c->r[0]=R32(c->r[4]+0x00000264u); // 8007F690
  W32(c->r[4]+0x0000033Cu,c->r[0]); // 8007F694
  {uint32_t ea=c->r[5]+0x000003FCu; WF32(ea,c->f[0]);} // 8007F698
  {uint32_t ea=c->r[5]+0x00000444u; WF32(ea,c->f[2]);} // 8007F69C
  {uint32_t ea=c->r[4]+0x00000268u; WF32(ea,c->f[2]);} // 8007F6A0
  {uint32_t ea=c->r[4]+0x0000026Cu; WF32(ea,c->f[1]);} // 8007F6A4
  {uint32_t ea=c->r[4]+0x00000270u; WF32(ea,c->f[2]);} // 8007F6A8
  c->r[0]=R32(c->r[4]+0x0000026Cu); // 8007F6AC
  c->r[3]=R32(c->r[4]+0x00000268u); // 8007F6B0
  W32(c->r[4]+0x00000340u,c->r[3]); // 8007F6B4
  W32(c->r[4]+0x00000344u,c->r[0]); // 8007F6B8
  c->r[0]=R32(c->r[4]+0x00000270u); // 8007F6BC
  W32(c->r[4]+0x00000348u,c->r[0]); // 8007F6C0
  {uint32_t ea=c->r[5]+0x00000400u; WF32(ea,c->f[0]);} // 8007F6C4
  {uint32_t ea=c->r[5]+0x00000448u; WF32(ea,c->f[2]);} // 8007F6C8
  {uint32_t ea=c->r[4]+0x00000274u; WF32(ea,c->f[2]);} // 8007F6CC
  {uint32_t ea=c->r[4]+0x00000278u; WF32(ea,c->f[1]);} // 8007F6D0
  {uint32_t ea=c->r[4]+0x0000027Cu; WF32(ea,c->f[2]);} // 8007F6D4
  c->r[0]=R32(c->r[4]+0x00000278u); // 8007F6D8
  c->r[3]=R32(c->r[4]+0x00000274u); // 8007F6DC
  W32(c->r[4]+0x0000034Cu,c->r[3]); // 8007F6E0
  W32(c->r[4]+0x00000350u,c->r[0]); // 8007F6E4
  c->r[0]=R32(c->r[4]+0x0000027Cu); // 8007F6E8
  W32(c->r[4]+0x00000354u,c->r[0]); // 8007F6EC
  {uint32_t ea=c->r[5]+0x00000404u; WF32(ea,c->f[0]);} // 8007F6F0
  {uint32_t ea=c->r[5]+0x0000044Cu; WF32(ea,c->f[2]);} // 8007F6F4
  {uint32_t ea=c->r[4]+0x00000280u; WF32(ea,c->f[2]);} // 8007F6F8
  {uint32_t ea=c->r[4]+0x00000284u; WF32(ea,c->f[1]);} // 8007F6FC
  {uint32_t ea=c->r[4]+0x00000288u; WF32(ea,c->f[2]);} // 8007F700
  c->r[0]=R32(c->r[4]+0x00000284u); // 8007F704
  c->r[3]=R32(c->r[4]+0x00000280u); // 8007F708
  W32(c->r[4]+0x00000358u,c->r[3]); // 8007F70C
  W32(c->r[4]+0x0000035Cu,c->r[0]); // 8007F710
  c->r[0]=R32(c->r[4]+0x00000288u); // 8007F714
  W32(c->r[4]+0x00000360u,c->r[0]); // 8007F718
  c->r[4]=c->r[4]+0x00000048u; // 8007F71C
  {uint32_t ea=c->r[5]+0x00000408u; WF32(ea,c->f[0]);} // 8007F720
  {uint32_t ea=c->r[5]+0x00000450u; WF32(ea,c->f[2]);} // 8007F724
  c->r[5]=c->r[5]+0x00000018u; // 8007F728
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8007F61C; } // 8007F72C
  c->r[0]=0u+0x00000000u; // 8007F730
  W32(c->r[6]+0x00000484u,c->r[0]); // 8007F734
  return; // 8007F738
}

// fn_8007F740
void f_8007F740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F740
  c->r[0]=c->lr; // 8007F744
  c->r[6]=0u+0x80300000u; // 8007F748
  c->r[7]=0u+0x80410000u; // 8007F74C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007F750
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F754
  {uint32_t ea=c->r[6]+0xFFFFE2DCu; c->r[5]=R32(ea); c->r[6]=ea;} // 8007F758
  c->r[7]=c->r[7]+0xFFFFF6D8u; // 8007F75C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007F760
  c->r[3]=R32(c->r[6]+0x00000004u); // 8007F764
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007F768
  c->r[30]=0u+0x00000000u; // 8007F76C
  c->r[0]=R32(c->r[6]+0x00000008u); // 8007F770
  c->r[6]=c->r[7]+c->r[8]; // 8007F774
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007F778
  c->r[29]=c->r[4]|c->r[4]; // 8007F77C
  c->r[31]=c->r[6]+0x00000244u; // 8007F780
  W32(c->r[4]+0x00000000u,c->r[5]); // 8007F784
  W32(c->r[4]+0x00000004u,c->r[3]); // 8007F788
  W32(c->r[4]+0x00000008u,c->r[0]); // 8007F78C
L_8007F790:;
  c->r[3]=c->r[29]|c->r[29]; // 8007F790
  c->r[4]=c->r[31]|c->r[31]; // 8007F794
  c->r[5]=c->r[29]|c->r[29]; // 8007F798
  c->lr=0x8007F7A0u; f_8012EAB0(c); // 8007F79C
  c->r[30]=c->r[30]+0x00000001u; // 8007F7A0
  c->r[31]=c->r[31]+0x0000000Cu; // 8007F7A4
  cmps(c,0,(int32_t)c->r[30],18); // 8007F7A8
  if (crb(c,0)) { IRQCHK(c); goto L_8007F790; } // 8007F7AC
  c->r[3]=c->r[29]|c->r[29]; // 8007F7B0
  c->lr=0x8007F7B8u; f_8012EB80(c); // 8007F7B4
  {uint32_t ea=c->r[2]+0xFFFF8C34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F7B8
  fcmp(c,0,c->f[1],c->f[0]); // 8007F7BC
  if (!crb(c,0)) { goto L_8007F7D8; } // 8007F7C0
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F7C4
  {uint32_t ea=c->r[2]+0xFFFF8C24u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F7C8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 8007F7CC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 8007F7D0
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 8007F7D4
L_8007F7D8:;
  c->r[3]=c->r[29]|c->r[29]; // 8007F7D8
  c->r[4]=c->r[29]|c->r[29]; // 8007F7DC
  c->lr=0x8007F7E4u; f_8012EB30(c); // 8007F7E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007F7E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007F7E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007F7EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007F7F0
  c->lr=c->r[0]; // 8007F7F4
  c->r[1]=c->r[1]+0x00000020u; // 8007F7F8
  return; // 8007F7FC
}

// fn_8007F800
void f_8007F800(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F800
  c->r[3]=0u+0x80410000u; // 8007F804
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007F808
  c->r[4]=0u+0x00000000u; // 8007F80C
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007F810
  {uint32_t ea=c->r[2]+0xFFFF8C2Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F814
  c->r[3]=c->r[3]+c->r[0]; // 8007F818
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F81C
  {uint32_t ea=c->r[3]+0x00000488u; WF32(ea,c->f[2]);} // 8007F820
  {uint32_t ea=c->r[3]+0x0000048Cu; WF32(ea,c->f[1]);} // 8007F824
  {uint32_t ea=c->r[3]+0x00000518u; WF32(ea,c->f[0]);} // 8007F828
  {uint32_t ea=c->r[3]+0x00000490u; WF32(ea,c->f[2]);} // 8007F82C
  {uint32_t ea=c->r[3]+0x00000494u; WF32(ea,c->f[1]);} // 8007F830
  {uint32_t ea=c->r[3]+0x0000051Cu; WF32(ea,c->f[0]);} // 8007F834
  {uint32_t ea=c->r[3]+0x00000498u; WF32(ea,c->f[2]);} // 8007F838
  {uint32_t ea=c->r[3]+0x0000049Cu; WF32(ea,c->f[1]);} // 8007F83C
  {uint32_t ea=c->r[3]+0x00000520u; WF32(ea,c->f[0]);} // 8007F840
  {uint32_t ea=c->r[3]+0x000004A0u; WF32(ea,c->f[2]);} // 8007F844
  {uint32_t ea=c->r[3]+0x000004A4u; WF32(ea,c->f[1]);} // 8007F848
  {uint32_t ea=c->r[3]+0x00000524u; WF32(ea,c->f[0]);} // 8007F84C
  {uint32_t ea=c->r[3]+0x000004A8u; WF32(ea,c->f[2]);} // 8007F850
  {uint32_t ea=c->r[3]+0x000004ACu; WF32(ea,c->f[1]);} // 8007F854
  {uint32_t ea=c->r[3]+0x00000528u; WF32(ea,c->f[0]);} // 8007F858
  {uint32_t ea=c->r[3]+0x000004B0u; WF32(ea,c->f[2]);} // 8007F85C
  {uint32_t ea=c->r[3]+0x000004B4u; WF32(ea,c->f[1]);} // 8007F860
  {uint32_t ea=c->r[3]+0x0000052Cu; WF32(ea,c->f[0]);} // 8007F864
  {uint32_t ea=c->r[3]+0x000004B8u; WF32(ea,c->f[2]);} // 8007F868
  {uint32_t ea=c->r[3]+0x000004BCu; WF32(ea,c->f[1]);} // 8007F86C
  {uint32_t ea=c->r[3]+0x00000530u; WF32(ea,c->f[0]);} // 8007F870
  {uint32_t ea=c->r[3]+0x000004C0u; WF32(ea,c->f[2]);} // 8007F874
  {uint32_t ea=c->r[3]+0x000004C4u; WF32(ea,c->f[1]);} // 8007F878
  {uint32_t ea=c->r[3]+0x00000534u; WF32(ea,c->f[0]);} // 8007F87C
  {uint32_t ea=c->r[3]+0x000004C8u; WF32(ea,c->f[2]);} // 8007F880
  {uint32_t ea=c->r[3]+0x000004CCu; WF32(ea,c->f[1]);} // 8007F884
  {uint32_t ea=c->r[3]+0x00000538u; WF32(ea,c->f[0]);} // 8007F888
  {uint32_t ea=c->r[3]+0x000004D0u; WF32(ea,c->f[2]);} // 8007F88C
  {uint32_t ea=c->r[3]+0x000004D4u; WF32(ea,c->f[1]);} // 8007F890
  {uint32_t ea=c->r[3]+0x0000053Cu; WF32(ea,c->f[0]);} // 8007F894
  {uint32_t ea=c->r[3]+0x000004D8u; WF32(ea,c->f[2]);} // 8007F898
  {uint32_t ea=c->r[3]+0x000004DCu; WF32(ea,c->f[1]);} // 8007F89C
  {uint32_t ea=c->r[3]+0x00000540u; WF32(ea,c->f[0]);} // 8007F8A0
  {uint32_t ea=c->r[3]+0x000004E0u; WF32(ea,c->f[2]);} // 8007F8A4
  {uint32_t ea=c->r[3]+0x000004E4u; WF32(ea,c->f[1]);} // 8007F8A8
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[0]);} // 8007F8AC
  {uint32_t ea=c->r[3]+0x000004E8u; WF32(ea,c->f[2]);} // 8007F8B0
  {uint32_t ea=c->r[3]+0x000004ECu; WF32(ea,c->f[1]);} // 8007F8B4
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[0]);} // 8007F8B8
  {uint32_t ea=c->r[3]+0x000004F0u; WF32(ea,c->f[2]);} // 8007F8BC
  {uint32_t ea=c->r[3]+0x000004F4u; WF32(ea,c->f[1]);} // 8007F8C0
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[0]);} // 8007F8C4
  {uint32_t ea=c->r[3]+0x000004F8u; WF32(ea,c->f[2]);} // 8007F8C8
  {uint32_t ea=c->r[3]+0x000004FCu; WF32(ea,c->f[1]);} // 8007F8CC
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[0]);} // 8007F8D0
  {uint32_t ea=c->r[3]+0x00000500u; WF32(ea,c->f[2]);} // 8007F8D4
  {uint32_t ea=c->r[3]+0x00000504u; WF32(ea,c->f[1]);} // 8007F8D8
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[0]);} // 8007F8DC
  {uint32_t ea=c->r[3]+0x00000508u; WF32(ea,c->f[2]);} // 8007F8E0
  {uint32_t ea=c->r[3]+0x0000050Cu; WF32(ea,c->f[1]);} // 8007F8E4
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[0]);} // 8007F8E8
  {uint32_t ea=c->r[3]+0x00000510u; WF32(ea,c->f[2]);} // 8007F8EC
  {uint32_t ea=c->r[3]+0x00000514u; WF32(ea,c->f[1]);} // 8007F8F0
  {uint32_t ea=c->r[3]+0x0000055Cu; WF32(ea,c->f[0]);} // 8007F8F4
  W32(c->r[3]+0x00000560u,c->r[4]); // 8007F8F8
  return; // 8007F8FC
}

// fn_8007F900
void f_8007F900(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F900
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F904
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F908
  c->r[3]=0u+0x80410000u; // 8007F90C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8007F910
  c->r[6]=0u+0x00000000u; // 8007F914
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007F918
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8007F91C
  c->r[3]=c->r[3]+c->r[0]; // 8007F920
  goto L_8007F950; // 8007F924
L_8007F928:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8007F928
  c->r[6]=c->r[6]+0x00000001u; // 8007F92C
  {uint32_t ea=c->r[3]+0x00000488u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F930
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F934
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8007F938
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8007F93C
  {uint32_t ea=c->r[3]+0x0000048Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F940
  c->r[3]=c->r[3]+0x00000008u; // 8007F944
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8007F948
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8007F94C
L_8007F950:;
  c->r[5]=R32(c->r[13]+0xFFFF86E4u); // 8007F950
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 8007F954
  if (crb(c,0)) { IRQCHK(c); goto L_8007F928; } // 8007F958
  c->r[0]=0u+0x43300000u; // 8007F95C
  c->r[3]=c->r[5]^0x80000000u; // 8007F960
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8007F964
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[3]=RF64(ea);} // 8007F968
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007F96C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F970
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8007F974
  W32(c->r[1]+0x00000010u,c->r[0]); // 8007F978
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8007F97C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F980
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 8007F984
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 8007F988
  c->r[0]=R32(c->r[13]+0xFFFF86E4u); // 8007F98C
  c->r[0]=c->r[0]^0x80000000u; // 8007F990
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007F994
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8007F998
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8007F99C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8007F9A0
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8007F9A4
  c->r[1]=c->r[1]+0x00000020u; // 8007F9A8
  return; // 8007F9AC
}

// fn_8007F9B0
void f_8007F9B0(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007F9B0
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007F9B4
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F9B8
  c->r[3]=0u+0x80410000u; // 8007F9BC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8007F9C0
  c->r[5]=0u+0x00000000u; // 8007F9C4
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007F9C8
  c->r[3]=c->r[3]+c->r[0]; // 8007F9CC
  goto L_8007F9F0; // 8007F9D0
  c->r[0]=c->r[0]|0x00000000u; // 8007F9D4
L_8007F9D8:;
  {uint32_t ea=c->r[3]+0x00000518u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007F9D8
  c->r[3]=c->r[3]+0x00000004u; // 8007F9DC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8007F9E0
  c->r[5]=c->r[5]+0x00000001u; // 8007F9E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8007F9E8
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8007F9EC
L_8007F9F0:;
  c->r[0]=R32(c->r[13]+0xFFFF86E4u); // 8007F9F0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8007F9F4
  if (crb(c,0)) { IRQCHK(c); goto L_8007F9D8; } // 8007F9F8
  c->r[3]=c->r[0]^0x80000000u; // 8007F9FC
  c->r[0]=0u+0x43300000u; // 8007FA00
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8007FA04
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[2]=RF64(ea);} // 8007FA08
  W32(c->r[1]+0x00000008u,c->r[0]); // 8007FA0C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8007FA10
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8007FA14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8007FA18
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 8007FA1C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8007FA20
  c->r[1]=c->r[1]+0x00000010u; // 8007FA24
  return; // 8007FA28
}

// fn_8007FA30
void f_8007FA30(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007FA30
  c->r[4]=0u+0x80410000u; // 8007FA34
  c->r[3]=c->r[13]+0xFFFFB3B0u; // 8007FA38
  c->r[4]=c->r[4]+0xFFFFF6D8u; // 8007FA3C
  c->r[4]=c->r[4]+c->r[0]; // 8007FA40
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000564u); // 8007FA44
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007FA48
  c->r[3]=R16(c->r[3]+c->r[0]); // 8007FA4C
  return; // 8007FA50
}

// fn_8007FA60
void f_8007FA60(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007FA60
  c->r[4]=0u+0x80410000u; // 8007FA64
  c->r[3]=c->r[13]+0xFFFFB3A0u; // 8007FA68
  c->r[4]=c->r[4]+0xFFFFF6D8u; // 8007FA6C
  c->r[4]=c->r[4]+c->r[0]; // 8007FA70
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000564u); // 8007FA74
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007FA78
  c->r[3]=R16(c->r[3]+c->r[0]); // 8007FA7C
  return; // 8007FA80
}

// fn_8007FA90
void f_8007FA90(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007FA90
  c->r[4]=0u+0x80410000u; // 8007FA94
  c->r[3]=c->r[13]+0xFFFFB3B8u; // 8007FA98
  c->r[4]=c->r[4]+0xFFFFF6D8u; // 8007FA9C
  c->r[4]=c->r[4]+c->r[0]; // 8007FAA0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000564u); // 8007FAA4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007FAA8
  c->r[3]=R16(c->r[3]+c->r[0]); // 8007FAAC
  return; // 8007FAB0
}

// fn_8007FAC0
void f_8007FAC0(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007FAC0
  c->r[4]=0u+0x80410000u; // 8007FAC4
  c->r[3]=c->r[13]+0xFFFFB3B8u; // 8007FAC8
  c->r[4]=c->r[4]+0xFFFFF6D8u; // 8007FACC
  c->r[4]=c->r[4]+c->r[0]; // 8007FAD0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000564u); // 8007FAD4
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007FAD8
  c->r[0]=R16(c->r[3]+c->r[4]); // 8007FADC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 8007FAE0
  if (crb(c,2)) { goto L_8007FAF8; } // 8007FAE4
  c->r[3]=c->r[13]+0xFFFFB390u; // 8007FAE8
  c->r[0]=R16(c->r[3]+c->r[4]); // 8007FAEC
  c->r[3]=rotl(c->r[0],0)&0x0000FFF0u; // 8007FAF0
  return; // 8007FAF4
L_8007FAF8:;
  c->r[3]=c->r[13]+0xFFFFB390u; // 8007FAF8
  c->r[3]=R16(c->r[3]+c->r[4]); // 8007FAFC
  return; // 8007FB00
}

// fn_8007FB10
void f_8007FB10(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007FB10
  c->r[4]=0u+0x80410000u; // 8007FB14
  c->r[3]=c->r[13]+0xFFFFB3B8u; // 8007FB18
  c->r[4]=c->r[4]+0xFFFFF6D8u; // 8007FB1C
  c->r[4]=c->r[4]+c->r[0]; // 8007FB20
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000564u); // 8007FB24
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007FB28
  c->r[0]=R16(c->r[3]+c->r[4]); // 8007FB2C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 8007FB30
  if (crb(c,2)) { goto L_8007FB48; } // 8007FB34
  c->r[3]=c->r[13]+0xFFFFB380u; // 8007FB38
  c->r[0]=R16(c->r[3]+c->r[4]); // 8007FB3C
  c->r[3]=rotl(c->r[0],0)&0x0000FFF0u; // 8007FB40
  return; // 8007FB44
L_8007FB48:;
  c->r[3]=c->r[13]+0xFFFFB380u; // 8007FB48
  c->r[3]=R16(c->r[3]+c->r[4]); // 8007FB4C
  return; // 8007FB50
}

// fn_8007FB60
void f_8007FB60(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1392); // 8007FB60
  c->r[4]=0u+0x80410000u; // 8007FB64
  c->r[3]=c->r[13]+0xFFFFB3B8u; // 8007FB68
  c->r[4]=c->r[4]+0xFFFFF6D8u; // 8007FB6C
  c->r[4]=c->r[4]+c->r[0]; // 8007FB70
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000564u); // 8007FB74
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8007FB78
  c->r[0]=R16(c->r[3]+c->r[4]); // 8007FB7C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 8007FB80
  if (crb(c,2)) { goto L_8007FB98; } // 8007FB84
  c->r[3]=c->r[13]+0xFFFFB398u; // 8007FB88
  c->r[0]=R16(c->r[3]+c->r[4]); // 8007FB8C
  c->r[3]=rotl(c->r[0],0)&0x0000FFF0u; // 8007FB90
  return; // 8007FB94
L_8007FB98:;
  c->r[3]=c->r[13]+0xFFFFB398u; // 8007FB98
  c->r[3]=R16(c->r[3]+c->r[4]); // 8007FB9C
  return; // 8007FBA0
}

// fn_8007FBB0
void f_8007FBB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FBB0
  c->r[0]=c->lr; // 8007FBB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007FBB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007FBBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007FBC0
  c->r[30]=c->r[4]|c->r[4]; // 8007FBC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007FBC8
  c->r[29]=c->r[3]|c->r[3]; // 8007FBCC
  c->lr=0x8007FBD4u; f_8004B930(c); // 8007FBD0
  cmps(c,0,(int32_t)c->r[3],0); // 8007FBD4
  if (!crb(c,2)) { goto L_8007FC80; } // 8007FBD8
  c->lr=0x8007FBE0u; f_8015D8C0(c); // 8007FBDC
  cmps(c,0,(int32_t)c->r[3],0); // 8007FBE0
  if (crb(c,2)) { goto L_8007FC80; } // 8007FBE4
  cmps(c,0,(int32_t)c->r[30],0); // 8007FBE8
  if (crb(c,1)) { goto L_8007FC38; } // 8007FBEC
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)1392); // 8007FBF0
  c->r[3]=0u+0x80410000u; // 8007FBF4
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007FBF8
  c->r[31]=c->r[3]+c->r[0]; // 8007FBFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000056Au); // 8007FC00
  cmps(c,0,(int32_t)c->r[0],0); // 8007FC04
  if (!crb(c,1)) { goto L_8007FC18; } // 8007FC08
  c->r[3]=c->r[29]|c->r[29]; // 8007FC0C
  c->r[4]=0u+0x00000000u; // 8007FC10
  c->lr=0x8007FC18u; f_8015D7B0(c); // 8007FC14
L_8007FC18:;
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)1392); // 8007FC18
  c->r[3]=0u+0x80410000u; // 8007FC1C
  W16(c->r[31]+0x0000056Au,c->r[30]); // 8007FC20
  c->r[0]=0u+0x00000000u; // 8007FC24
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007FC28
  c->r[3]=c->r[3]+c->r[4]; // 8007FC2C
  W16(c->r[3]+0x0000056Cu,c->r[0]); // 8007FC30
  goto L_8007FC80; // 8007FC34
L_8007FC38:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)1392); // 8007FC38
  c->r[3]=0u+0x80410000u; // 8007FC3C
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007FC40
  c->r[31]=c->r[3]+c->r[0]; // 8007FC44
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000056Au); // 8007FC48
  cmps(c,0,(int32_t)c->r[0],-1); // 8007FC4C
  if (crb(c,2)) { goto L_8007FC80; } // 8007FC50
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000056Cu); // 8007FC54
  cmps(c,0,(int32_t)c->r[0],0); // 8007FC58
  if (crb(c,1)) { goto L_8007FC80; } // 8007FC5C
  c->r[3]=c->r[29]|c->r[29]; // 8007FC60
  c->r[4]=0u+0x00000001u; // 8007FC64
  c->lr=0x8007FC6Cu; f_8015D7B0(c); // 8007FC68
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 8007FC6C
  cmpu(c,0,c->r[0],0x00000001u); // 8007FC70
  if (!crb(c,0)) { goto L_8007FC7C; } // 8007FC74
  c->r[0]=0u+0x00000001u; // 8007FC78
L_8007FC7C:;
  W16(c->r[31]+0x0000056Au,c->r[0]); // 8007FC7C
L_8007FC80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007FC80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007FC84
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007FC88
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007FC8C
  c->lr=c->r[0]; // 8007FC90
  c->r[1]=c->r[1]+0x00000020u; // 8007FC94
  return; // 8007FC98
}

// fn_8007FCA0
void f_8007FCA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FCA0
  c->r[0]=c->lr; // 8007FCA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8007FCA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8007FCAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8007FCB0
  c->r[30]=c->r[5]|c->r[5]; // 8007FCB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007FCB8
  c->r[29]=c->r[4]|c->r[4]; // 8007FCBC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8007FCC0
  c->r[28]=c->r[3]|c->r[3]; // 8007FCC4
  c->lr=0x8007FCCCu; f_8004B930(c); // 8007FCC8
  cmps(c,0,(int32_t)c->r[3],0); // 8007FCCC
  if (!crb(c,2)) { goto L_8007FD3C; } // 8007FCD0
  c->lr=0x8007FCD8u; f_8015D8C0(c); // 8007FCD4
  cmps(c,0,(int32_t)c->r[3],0); // 8007FCD8
  if (crb(c,2)) { goto L_8007FD3C; } // 8007FCDC
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)1392); // 8007FCE0
  c->r[3]=0u+0x80410000u; // 8007FCE4
  c->r[3]=c->r[3]+0xFFFFF6D8u; // 8007FCE8
  c->r[31]=c->r[3]+c->r[0]; // 8007FCEC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000056Au); // 8007FCF0
  cmps(c,0,(int32_t)c->r[3],0); // 8007FCF4
  if (crb(c,1)) { goto L_8007FD3C; } // 8007FCF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000056Cu); // 8007FCFC
  cmps(c,0,(int32_t)c->r[0],0); // 8007FD00
  if (crb(c,1)) { goto L_8007FD3C; } // 8007FD04
  cmps(c,0,(int32_t)c->r[3],-1); // 8007FD08
  if (crb(c,2)) { goto L_8007FD3C; } // 8007FD0C
  c->r[3]=c->r[28]|c->r[28]; // 8007FD10
  c->r[4]=0u+0x00000001u; // 8007FD14
  c->lr=0x8007FD1Cu; f_8015D7B0(c); // 8007FD18
  cmpu(c,0,c->r[29],0x00000001u); // 8007FD1C
  if (!crb(c,0)) { goto L_8007FD28; } // 8007FD20
  c->r[29]=0u+0x00000001u; // 8007FD24
L_8007FD28:;
  cmpu(c,0,c->r[30],0x00000001u); // 8007FD28
  if (!crb(c,0)) { goto L_8007FD34; } // 8007FD2C
  c->r[30]=0u+0x00000001u; // 8007FD30
L_8007FD34:;
  W16(c->r[31]+0x0000056Au,c->r[29]); // 8007FD34
  W16(c->r[31]+0x0000056Cu,c->r[30]); // 8007FD38
L_8007FD3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8007FD3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8007FD40
  c->r[30]=R32(c->r[1]+0x00000018u); // 8007FD44
  c->r[29]=R32(c->r[1]+0x00000014u); // 8007FD48
  c->r[28]=R32(c->r[1]+0x00000010u); // 8007FD4C
  c->lr=c->r[0]; // 8007FD50
  c->r[1]=c->r[1]+0x00000020u; // 8007FD54
  return; // 8007FD58
}

// fn_8007FD60
void f_8007FD60(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 8007FD60
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8007FD64
  if (crb(c,2)) { goto L_8007FD78; } // 8007FD68
  c->r[0]=0u+0x000003E6u; // 8007FD6C
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FD70
  goto L_8007FDFC; // 8007FD74
L_8007FD78:;
  cmps(c,0,(int32_t)c->r[3],0); // 8007FD78
  if (crb(c,2)) { goto L_8007FDA4; } // 8007FD7C
  cmps(c,0,(int32_t)c->r[3],1); // 8007FD80
  if (crb(c,2)) { goto L_8007FDB4; } // 8007FD84
  cmps(c,0,(int32_t)c->r[3],2); // 8007FD88
  if (crb(c,2)) { goto L_8007FDC4; } // 8007FD8C
  cmps(c,0,(int32_t)c->r[3],3); // 8007FD90
  if (crb(c,2)) { goto L_8007FDE8; } // 8007FD94
  cmps(c,0,(int32_t)c->r[3],4); // 8007FD98
  if (crb(c,2)) { goto L_8007FDF4; } // 8007FD9C
  goto L_8007FDFC; // 8007FDA0
L_8007FDA4:;
  c->r[3]=R8(c->r[13]+0xFFFFB879u); // 8007FDA4
  c->r[0]=c->r[3]+0x00000060u; // 8007FDA8
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FDAC
  goto L_8007FDFC; // 8007FDB0
L_8007FDB4:;
  c->r[3]=R8(c->r[13]+0xFFFFB879u); // 8007FDB4
  c->r[0]=c->r[3]+0x000000C4u; // 8007FDB8
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FDBC
  goto L_8007FDFC; // 8007FDC0
L_8007FDC4:;
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 8007FDC4
  cmpu(c,0,c->r[0],0x00000002u); // 8007FDC8
  if (crb(c,1)) { goto L_8007FDDC; } // 8007FDCC
  c->r[0]=0u+0x0000012Bu; // 8007FDD0
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FDD4
  goto L_8007FDFC; // 8007FDD8
L_8007FDDC:;
  c->r[0]=0u+0x0000012Cu; // 8007FDDC
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FDE0
  goto L_8007FDFC; // 8007FDE4
L_8007FDE8:;
  c->r[0]=0u+0x00000190u; // 8007FDE8
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FDEC
  goto L_8007FDFC; // 8007FDF0
L_8007FDF4:;
  c->r[0]=0u+0x000001F4u; // 8007FDF4
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FDF8
L_8007FDFC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 8007FDFC
  W16(c->r[13]+0xFFFFB888u,c->r[0]); // 8007FE00
  return; // 8007FE04
}

// fn_8007FE10
void f_8007FE10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007FE10
  c->r[0]=c->lr; // 8007FE14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007FE18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007FE1C
  c->r[31]=0u+0x00000000u; // 8007FE20
  W32(c->r[1]+0x00000008u,c->r[30]); // 8007FE24
  c->r[30]=0u+0x80360000u; // 8007FE28
  c->r[30]=c->r[30]+0x00000368u; // 8007FE2C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 8007FE30
  cmps(c,0,(int32_t)c->r[0],299); // 8007FE34
  if (crb(c,2)) { goto L_800800BC; } // 8007FE38
  if (!crb(c,0)) { goto L_8007FEB8; } // 8007FE3C
  cmps(c,0,(int32_t)c->r[0],102); // 8007FE40
  if (crb(c,2)) { goto L_8007FFAC; } // 8007FE44
  if (!crb(c,0)) { goto L_8007FE84; } // 8007FE48
  cmps(c,0,(int32_t)c->r[0],97); // 8007FE4C
  if (crb(c,2)) { goto L_8007FF48; } // 8007FE50
  if (!crb(c,0)) { goto L_8007FE70; } // 8007FE54
  cmps(c,0,(int32_t)c->r[0],0); // 8007FE58
  if (crb(c,2)) { goto L_8007FF20; } // 8007FE5C
  if (crb(c,0)) { goto L_80080268; } // 8007FE60
  cmps(c,0,(int32_t)c->r[0],96); // 8007FE64
  if (!crb(c,0)) { goto L_8007FF28; } // 8007FE68
  goto L_80080268; // 8007FE6C
L_8007FE70:;
  cmps(c,0,(int32_t)c->r[0],101); // 8007FE70
  if (!crb(c,0)) { goto L_8007FF90; } // 8007FE74
  cmps(c,0,(int32_t)c->r[0],99); // 8007FE78
  if (!crb(c,0)) { goto L_80080268; } // 8007FE7C
  goto L_8007FF70; // 8007FE80
L_8007FE84:;
  cmps(c,0,(int32_t)c->r[0],198); // 8007FE84
  if (crb(c,2)) { goto L_80080028; } // 8007FE88
  if (!crb(c,0)) { goto L_8007FEA0; } // 8007FE8C
  cmps(c,0,(int32_t)c->r[0],196); // 8007FE90
  if (crb(c,2)) { goto L_8007FFD8; } // 8007FE94
  if (!crb(c,0)) { goto L_8007FFFC; } // 8007FE98
  goto L_80080268; // 8007FE9C
L_8007FEA0:;
  cmps(c,0,(int32_t)c->r[0],202); // 8007FEA0
  if (crb(c,2)) { goto L_80080068; } // 8007FEA4
  if (!crb(c,0)) { goto L_80080268; } // 8007FEA8
  cmps(c,0,(int32_t)c->r[0],201); // 8007FEAC
  if (!crb(c,0)) { goto L_8008004C; } // 8007FEB0
  goto L_80080268; // 8007FEB4
L_8007FEB8:;
  cmps(c,0,(int32_t)c->r[0],500); // 8007FEB8
  if (crb(c,2)) { goto L_800801B0; } // 8007FEBC
  if (!crb(c,0)) { goto L_8007FEF8; } // 8007FEC0
  cmps(c,0,(int32_t)c->r[0],400); // 8007FEC4
  if (crb(c,2)) { goto L_80080118; } // 8007FEC8
  if (!crb(c,0)) { goto L_8007FEE8; } // 8007FECC
  cmps(c,0,(int32_t)c->r[0],302); // 8007FED0
  if (crb(c,2)) { goto L_800800EC; } // 8007FED4
  if (!crb(c,0)) { goto L_80080268; } // 8007FED8
  cmps(c,0,(int32_t)c->r[0],301); // 8007FEDC
  if (!crb(c,0)) { goto L_800800D0; } // 8007FEE0
  goto L_80080268; // 8007FEE4
L_8007FEE8:;
  cmps(c,0,(int32_t)c->r[0],402); // 8007FEE8
  if (crb(c,2)) { goto L_8008015C; } // 8007FEEC
  if (!crb(c,0)) { goto L_80080268; } // 8007FEF0
  goto L_8008013C; // 8007FEF4
L_8007FEF8:;
  cmps(c,0,(int32_t)c->r[0],998); // 8007FEF8
  if (crb(c,2)) { goto L_8008025C; } // 8007FEFC
  if (!crb(c,0)) { goto L_8007FF14; } // 8007FF00
  cmps(c,0,(int32_t)c->r[0],502); // 8007FF04
  if (crb(c,2)) { goto L_800801E4; } // 8007FF08
  if (!crb(c,0)) { goto L_80080268; } // 8007FF0C
  goto L_800801C8; // 8007FF10
L_8007FF14:;
  cmps(c,0,(int32_t)c->r[0],1000); // 8007FF14
  if (!crb(c,0)) { goto L_80080268; } // 8007FF18
  goto L_80080210; // 8007FF1C
L_8007FF20:;
  c->r[31]=0u+0x00000001u; // 8007FF20
  goto L_80080268; // 8007FF24
L_8007FF28:;
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 8007FF28
  c->r[3]=c->r[30]+0x00000000u; // 8007FF2C
  c->r[5]=0u+0x00000020u; // 8007FF30
  c->r[6]=0u+0x00000000u; // 8007FF34
  c->lr=0x8007FF3Cu; f_80081E30(c); // 8007FF38
  c->r[0]=0u+0x00000065u; // 8007FF3C
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FF40
  goto L_80080268; // 8007FF44
L_8007FF48:;
  c->r[0]=R8(c->r[13]+0xFFFFB878u); // 8007FF48
  c->r[3]=c->r[30]+0x00000000u; // 8007FF4C
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 8007FF50
  c->r[5]=0u+0x000006E8u; // 8007FF54
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 8007FF58
  c->r[6]=c->r[6]+0x00000020u; // 8007FF5C
  c->lr=0x8007FF64u; f_80081E30(c); // 8007FF60
  c->r[0]=0u+0x00000065u; // 8007FF64
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FF68
  goto L_80080268; // 8007FF6C
L_8007FF70:;
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 8007FF70
  c->r[3]=c->r[30]+0x00000000u; // 8007FF74
  c->r[5]=R32(c->r[13]+0xFFFF86E8u); // 8007FF78
  c->r[6]=0u+0x00000000u; // 8007FF7C
  c->lr=0x8007FF84u; f_80081E30(c); // 8007FF80
  c->r[0]=0u+0x00000065u; // 8007FF84
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FF88
  goto L_80080268; // 8007FF8C
L_8007FF90:;
  c->lr=0x8007FF94u; f_800820D0(c); // 8007FF90
  cmps(c,0,(int32_t)c->r[3],0); // 8007FF94
  if (crb(c,2)) { goto L_80080268; } // 8007FF98
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 8007FF9C
  c->r[0]=c->r[3]+0x00000001u; // 8007FFA0
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FFA4
  goto L_80080268; // 8007FFA8
L_8007FFAC:;
  c->lr=0x8007FFB0u; f_800820F0(c); // 8007FFAC
  c->lr=0x8007FFB4u; f_80080C80(c); // 8007FFB0
  cmps(c,0,(int32_t)c->r[3],0); // 8007FFB4
  if (crb(c,2)) { goto L_8007FFCC; } // 8007FFB8
  c->r[0]=0u+0x00000000u; // 8007FFBC
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FFC0
  c->r[3]=0u+0x00000001u; // 8007FFC4
  goto L_8008026C; // 8007FFC8
L_8007FFCC:;
  c->r[0]=0u+0x000003E7u; // 8007FFCC
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FFD0
  goto L_80080268; // 8007FFD4
L_8007FFD8:;
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 8007FFD8
  c->r[3]=c->r[30]+0x00000000u; // 8007FFDC
  c->r[5]=0u+0x00000020u; // 8007FFE0
  c->r[6]=0u+0x0000003Fu; // 8007FFE4
  c->r[7]=0u+0x00000000u; // 8007FFE8
  c->lr=0x8007FFF0u; f_80081BF0(c); // 8007FFEC
  c->r[0]=0u+0x000000C9u; // 8007FFF0
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8007FFF4
  goto L_80080268; // 8007FFF8
L_8007FFFC:;
  c->r[0]=R8(c->r[13]+0xFFFFB878u); // 8007FFFC
  c->r[3]=c->r[30]+0x00000000u; // 80080000
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 80080004
  c->r[5]=0u+0x000006E8u; // 80080008
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 8008000C
  c->r[6]=0u+0x0000003Fu; // 80080010
  c->r[7]=c->r[7]+0x00000020u; // 80080014
  c->lr=0x8008001Cu; f_80081BF0(c); // 80080018
  c->r[0]=0u+0x000000C9u; // 8008001C
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080020
  goto L_80080268; // 80080024
L_80080028:;
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 80080028
  c->r[3]=c->r[30]+0x00000000u; // 8008002C
  c->r[5]=R32(c->r[13]+0xFFFF86E8u); // 80080030
  c->r[6]=0u+0x0000003Fu; // 80080034
  c->r[7]=0u+0x00000000u; // 80080038
  c->lr=0x80080040u; f_80081BF0(c); // 8008003C
  c->r[0]=0u+0x000000C9u; // 80080040
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080044
  goto L_80080268; // 80080048
L_8008004C:;
  c->lr=0x80080050u; f_800820D0(c); // 8008004C
  cmps(c,0,(int32_t)c->r[3],0); // 80080050
  if (crb(c,2)) { goto L_80080268; } // 80080054
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80080058
  c->r[0]=c->r[3]+0x00000001u; // 8008005C
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080060
  goto L_80080268; // 80080064
L_80080068:;
  c->lr=0x8008006Cu; f_800820F0(c); // 80080068
  cmps(c,0,(int32_t)c->r[3],-15); // 8008006C
  if (crb(c,2)) { goto L_8008007C; } // 80080070
  cmps(c,0,(int32_t)c->r[3],-5); // 80080074
  if (!crb(c,2)) { goto L_80080094; } // 80080078
L_8008007C:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 8008007C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80080080
  if (crb(c,2)) { goto L_80080094; } // 80080084
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB888u); // 80080088
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 8008008C
  goto L_80080268; // 80080090
L_80080094:;
  c->lr=0x80080098u; f_80080C80(c); // 80080094
  cmps(c,0,(int32_t)c->r[3],0); // 80080098
  if (crb(c,2)) { goto L_800800B0; } // 8008009C
  c->r[0]=0u+0x00000000u; // 800800A0
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800800A4
  c->r[3]=0u+0x00000001u; // 800800A8
  goto L_8008026C; // 800800AC
L_800800B0:;
  c->r[0]=0u+0x000003E7u; // 800800B0
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800800B4
  goto L_80080268; // 800800B8
L_800800BC:;
  c->r[3]=c->r[30]+0x00000000u; // 800800BC
  c->lr=0x800800C4u; f_80081F90(c); // 800800C0
  c->r[0]=0u+0x0000012Du; // 800800C4
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800800C8
  goto L_80080268; // 800800CC
L_800800D0:;
  c->lr=0x800800D4u; f_800820D0(c); // 800800D0
  cmps(c,0,(int32_t)c->r[3],0); // 800800D4
  if (crb(c,2)) { goto L_80080268; } // 800800D8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 800800DC
  c->r[0]=c->r[3]+0x00000001u; // 800800E0
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800800E4
  goto L_80080268; // 800800E8
L_800800EC:;
  c->lr=0x800800F0u; f_800820F0(c); // 800800EC
  c->lr=0x800800F4u; f_80080C80(c); // 800800F0
  cmps(c,0,(int32_t)c->r[3],0); // 800800F4
  if (crb(c,2)) { goto L_8008010C; } // 800800F8
  c->r[0]=0u+0x00000000u; // 800800FC
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080100
  c->r[3]=0u+0x00000001u; // 80080104
  goto L_8008026C; // 80080108
L_8008010C:;
  c->r[0]=0u+0x000003E7u; // 8008010C
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080110
  goto L_80080268; // 80080114
L_80080118:;
  c->lr=0x8008011Cu; f_800804A0(c); // 80080118
  cmps(c,0,(int32_t)c->r[3],0); // 8008011C
  if (crb(c,2)) { goto L_8008012C; } // 80080120
  c->r[3]=c->r[30]+0x00000378u; // 80080124
  c->lr=0x8008012Cu; f_800805B0(c); // 80080128
L_8008012C:;
  c->lr=0x80080130u; f_80080790(c); // 8008012C
  c->r[0]=0u+0x00000192u; // 80080130
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080134
  goto L_80080268; // 80080138
L_8008013C:;
  c->lr=0x80080140u; f_800820D0(c); // 8008013C
  cmps(c,0,(int32_t)c->r[3],0); // 80080140
  if (crb(c,2)) { goto L_80080268; } // 80080144
  c->lr=0x8008014Cu; f_80080790(c); // 80080148
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 8008014C
  c->r[0]=c->r[3]+0x00000001u; // 80080150
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080154
  goto L_80080268; // 80080158
L_8008015C:;
  c->r[3]=R32(c->r[13]+0xFFFFB87Cu); // 8008015C
  cmps(c,0,(int32_t)c->r[3],-15); // 80080160
  if (crb(c,2)) { goto L_80080170; } // 80080164
  cmps(c,0,(int32_t)c->r[3],-5); // 80080168
  if (!crb(c,2)) { goto L_80080188; } // 8008016C
L_80080170:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80080170
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80080174
  if (crb(c,2)) { goto L_80080188; } // 80080178
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB888u); // 8008017C
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080180
  goto L_80080268; // 80080184
L_80080188:;
  c->lr=0x8008018Cu; f_80080C80(c); // 80080188
  cmps(c,0,(int32_t)c->r[3],0); // 8008018C
  if (crb(c,2)) { goto L_800801A4; } // 80080190
  c->r[0]=0u+0x00000000u; // 80080194
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080198
  c->r[3]=0u+0x00000001u; // 8008019C
  goto L_8008026C; // 800801A0
L_800801A4:;
  c->r[0]=0u+0x000003E7u; // 800801A4
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800801A8
  goto L_80080268; // 800801AC
L_800801B0:;
  c->r[3]=c->r[30]+0x00000368u; // 800801B0
  c->lr=0x800801B8u; f_80081F90(c); // 800801B4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 800801B8
  c->r[0]=c->r[3]+0x00000001u; // 800801BC
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800801C0
  goto L_80080268; // 800801C4
L_800801C8:;
  c->lr=0x800801CCu; f_800820D0(c); // 800801C8
  cmps(c,0,(int32_t)c->r[3],0); // 800801CC
  if (crb(c,2)) { goto L_80080268; } // 800801D0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 800801D4
  c->r[0]=c->r[3]+0x00000001u; // 800801D8
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800801DC
  goto L_80080268; // 800801E0
L_800801E4:;
  c->lr=0x800801E8u; f_800820F0(c); // 800801E4
  c->lr=0x800801ECu; f_80080C80(c); // 800801E8
  cmps(c,0,(int32_t)c->r[3],0); // 800801EC
  if (crb(c,2)) { goto L_80080204; } // 800801F0
  c->r[0]=0u+0x00000000u; // 800801F4
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800801F8
  c->r[3]=0u+0x00000001u; // 800801FC
  goto L_8008026C; // 80080200
L_80080204:;
  c->r[0]=0u+0x000003E7u; // 80080204
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080208
  goto L_80080268; // 8008020C
L_80080210:;
  c->lr=0x80080214u; f_80080D70(c); // 80080210
  c->r[3]=R32(c->r[13]+0xFFFFB890u); // 80080214
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80080218
  if (crb(c,2)) { goto L_80080228; } // 8008021C
  c->r[31]=0u+0xFFFFFFFEu; // 80080220
  goto L_8008023C; // 80080224
L_80080228:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 80080228
  if (crb(c,2)) { goto L_8008023C; } // 8008022C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFDFu; // 80080230
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80080234
  c->r[31]=0u+0xFFFFFFFFu; // 80080238
L_8008023C:;
  c->r[3]=R32(c->r[13]+0xFFFFB890u); // 8008023C
  c->r[0]=rotl(c->r[3],0)&0x00020000u; cr0(c,c->r[0]); // 80080240
  if (crb(c,2)) { goto L_80080250; } // 80080244
  c->r[0]=rotl(c->r[3],0)&0xFFFDFFFFu; // 80080248
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 8008024C
L_80080250:;
  c->r[0]=0u+0x00000000u; // 80080250
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080254
  goto L_80080268; // 80080258
L_8008025C:;
  c->r[0]=0u+0x00000000u; // 8008025C
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 80080260
  c->r[31]=0u+0xFFFFFFFEu; // 80080264
L_80080268:;
  c->r[3]=c->r[31]|c->r[31]; // 80080268
L_8008026C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008026C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80080270
  c->r[30]=R32(c->r[1]+0x00000008u); // 80080274
  c->lr=c->r[0]; // 80080278
  c->r[1]=c->r[1]+0x00000010u; // 8008027C
  return; // 80080280
}

// fn_80080290
void f_80080290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080290
  c->r[0]=c->lr; // 80080294
  W32(c->r[1]+0x00000024u,c->r[0]); // 80080298
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008029C
  c->r[31]=0u+0x00000000u; // 800802A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800802A4
  c->r[30]=0u+0x00000004u; // 800802A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800802AC
  c->r[29]=0u+0x00000002u; // 800802B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800802B4
  c->r[28]=c->r[3]|c->r[3]; // 800802B8
  c->r[3]=0u+0x80360000u; // 800802BC
  c->r[4]=c->r[28]|c->r[28]; // 800802C0
  c->r[3]=c->r[3]+0x000006F0u; // 800802C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800802C8
  c->lr=0x800802D0u; f_80121B20(c); // 800802CC
  c->r[3]=0u+0x80360000u; // 800802D0
  c->r[4]=0u+0x00000004u; // 800802D4
  c->r[3]=c->r[3]+0x00000700u; // 800802D8
  c->r[5]=0u+0x00000002u; // 800802DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800802E0
  c->lr=0x800802E8u; f_80121B20(c); // 800802E4
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 800802E8
  if (crb(c,2)) { goto L_800802F8; } // 800802EC
  c->r[30]=0u+0x00000001u; // 800802F0
  c->r[29]=0u+0x00000001u; // 800802F4
L_800802F8:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 800802F8
  if (crb(c,2)) { goto L_80080308; } // 800802FC
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80080300
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 80080304
L_80080308:;
  c->r[3]=c->r[30]|c->r[30]; // 80080308
  c->r[4]=c->r[29]|c->r[29]; // 8008030C
  c->r[5]=c->r[1]+0x00000008u; // 80080310
  c->lr=0x80080318u; f_8005F200(c); // 80080314
  goto L_80080320; // 80080318
L_8008031C:;
  c->lr=0x80080320u; f_8000FF80(c); // 8008031C
L_80080320:;
  c->lr=0x80080324u; f_8005F2C0(c); // 80080320
  cmps(c,0,(int32_t)c->r[3],0); // 80080324
  if (crb(c,2)) { IRQCHK(c); goto L_8008031C; } // 80080328
  c->lr=0x80080330u; f_8005F2E0(c); // 8008032C
  cmps(c,0,(int32_t)c->r[3],0); // 80080330
  if (crb(c,2)) { goto L_80080340; } // 80080334
  c->r[0]=rotl(c->r[30],29)&0x1FFFFFFFu; // 80080338
  c->r[31]=c->r[0]|0x00000100u; // 8008033C
L_80080340:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80080340
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80080344
  if (!crb(c,2)) { goto L_80080354; } // 80080348
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8008034C
  if (crb(c,2)) { goto L_80080360; } // 80080350
L_80080354:;
  c->r[0]=rotl(c->r[30],29)&0x1FFFFFFFu; // 80080354
  c->r[31]=c->r[0]|0x00000100u; // 80080358
  goto L_80080374; // 8008035C
L_80080360:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80080360
  if (!crb(c,2)) { goto L_80080370; } // 80080364
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80080368
  if (crb(c,2)) { goto L_80080374; } // 8008036C
L_80080370:;
  c->r[31]=c->r[29]|0x00000200u; // 80080370
L_80080374:;
  c->r[3]=c->r[31]|c->r[31]; // 80080374
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80080378
  c->r[30]=R32(c->r[1]+0x00000018u); // 8008037C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80080380
  c->r[28]=R32(c->r[1]+0x00000010u); // 80080384
  c->r[0]=R32(c->r[1]+0x00000024u); // 80080388
  c->lr=c->r[0]; // 8008038C
  c->r[1]=c->r[1]+0x00000020u; // 80080390
  return; // 80080394
}

// fn_800803A0
void f_800803A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800803A0
  c->r[0]=c->lr; // 800803A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800803A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800803AC
  c->r[31]=0u+0x80360000u; // 800803B0
  c->r[31]=c->r[31]+0x00000368u; // 800803B4
  c->lr=0x800803BCu; f_800656B0(c); // 800803B8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800803BC
  if (crb(c,2)) { goto L_800803D8; } // 800803C0
  cmps(c,0,(int32_t)c->r[0],1); // 800803C4
  if (crb(c,2)) { goto L_800803EC; } // 800803C8
  cmps(c,0,(int32_t)c->r[0],2); // 800803CC
  if (crb(c,2)) { goto L_80080400; } // 800803D0
  goto L_80080488; // 800803D4
L_800803D8:;
  c->r[3]=c->r[31]+0x000001E0u; // 800803D8
  c->r[4]=c->r[13]+0xFFFFB880u; // 800803DC
  c->lr=0x800803E4u; f_8005F810(c); // 800803E0
  W32(c->r[13]+0xFFFFB884u,c->r[3]); // 800803E4
  goto L_80080488; // 800803E8
L_800803EC:;
  c->r[3]=c->r[31]+0x00000218u; // 800803EC
  c->r[4]=c->r[13]+0xFFFFB880u; // 800803F0
  c->lr=0x800803F8u; f_8005F810(c); // 800803F4
  W32(c->r[13]+0xFFFFB884u,c->r[3]); // 800803F8
  goto L_80080488; // 800803FC
L_80080400:;
  c->lr=0x80080404u; f_800656D0(c); // 80080400
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80080404
  cmps(c,0,(int32_t)c->r[0],2); // 80080408
  if (crb(c,2)) { goto L_8008043C; } // 8008040C
  cmps(c,0,(int32_t)c->r[0],3); // 80080410
  if (crb(c,2)) { goto L_80080450; } // 80080414
  cmps(c,0,(int32_t)c->r[0],4); // 80080418
  if (crb(c,2)) { goto L_80080464; } // 8008041C
  cmps(c,0,(int32_t)c->r[0],5); // 80080420
  if (crb(c,2)) { goto L_80080478; } // 80080424
  c->r[3]=c->r[31]+0x00000250u; // 80080428
  c->r[4]=c->r[13]+0xFFFFB880u; // 8008042C
  c->lr=0x80080434u; f_8005F810(c); // 80080430
  W32(c->r[13]+0xFFFFB884u,c->r[3]); // 80080434
  goto L_80080488; // 80080438
L_8008043C:;
  c->r[3]=c->r[31]+0x00000288u; // 8008043C
  c->r[4]=c->r[13]+0xFFFFB880u; // 80080440
  c->lr=0x80080448u; f_8005F810(c); // 80080444
  W32(c->r[13]+0xFFFFB884u,c->r[3]); // 80080448
  goto L_80080488; // 8008044C
L_80080450:;
  c->r[3]=c->r[31]+0x000002C0u; // 80080450
  c->r[4]=c->r[13]+0xFFFFB880u; // 80080454
  c->lr=0x8008045Cu; f_8005F810(c); // 80080458
  W32(c->r[13]+0xFFFFB884u,c->r[3]); // 8008045C
  goto L_80080488; // 80080460
L_80080464:;
  c->r[3]=c->r[31]+0x000002F8u; // 80080464
  c->r[4]=c->r[13]+0xFFFFB880u; // 80080468
  c->lr=0x80080470u; f_8005F810(c); // 8008046C
  W32(c->r[13]+0xFFFFB884u,c->r[3]); // 80080470
  goto L_80080488; // 80080474
L_80080478:;
  c->r[3]=c->r[31]+0x00000330u; // 80080478
  c->r[4]=c->r[13]+0xFFFFB880u; // 8008047C
  c->lr=0x80080484u; f_8005F810(c); // 80080480
  W32(c->r[13]+0xFFFFB884u,c->r[3]); // 80080484
L_80080488:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080488
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008048C
  c->lr=c->r[0]; // 80080490
  c->r[1]=c->r[1]+0x00000010u; // 80080494
  return; // 80080498
}

// fn_800804A0
void f_800804A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800804A0
  c->r[0]=c->lr; // 800804A4
  c->r[4]=0u+0x0000003Fu; // 800804A8
  c->r[5]=0u+0x00000000u; // 800804AC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800804B0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 800804B4
  c->r[31]=0u+0x80360000u; // 800804B8
  c->r[31]=c->r[31]+0x00000368u; // 800804BC
  c->r[3]=c->r[31]+0x00000378u; // 800804C0
  c->lr=0x800804C8u; f_801AB0C0(c); // 800804C4
  cmps(c,0,(int32_t)c->r[3],0); // 800804C8
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 800804CC
  if (crb(c,2)) { goto L_800804E8; } // 800804D0
  c->r[3]=c->r[31]+0x000003B8u; // 800804D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800804D8
  c->lr=0x800804E0u; f_80121B20(c); // 800804DC
  c->r[3]=0u+0x00000000u; // 800804E0
  goto L_80080594; // 800804E4
L_800804E8:;
  c->r[3]=c->r[31]+0x00000378u; // 800804E8
  c->r[4]=c->r[1]+0x00000008u; // 800804EC
  c->r[5]=0u+0x00000002u; // 800804F0
  c->lr=0x800804F8u; f_801AC640(c); // 800804F4
  cmps(c,0,(int32_t)c->r[3],0); // 800804F8
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 800804FC
  if (crb(c,2)) { goto L_8008051C; } // 80080500
  c->r[4]=c->r[3]|c->r[3]; // 80080504
  c->r[3]=c->r[31]+0x000003D0u; // 80080508
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8008050C
  c->lr=0x80080514u; f_80121B20(c); // 80080510
  c->r[3]=0u+0x00000000u; // 80080514
  goto L_80080594; // 80080518
L_8008051C:;
  c->r[5]=0u+0x00010000u; // 8008051C
  c->r[4]=R32(c->r[13]+0xFFFFB884u); // 80080520
  c->r[3]=c->r[1]+0x00000008u; // 80080524
  c->r[5]=c->r[5]+0xFFFFBAA0u; // 80080528
  c->lr=0x80080530u; f_801AB6A0(c); // 8008052C
  cmpu(c,0,c->r[3],0x0000BAA0u); // 80080530
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 80080534
  if (crb(c,2)) { goto L_80080564; } // 80080538
  c->r[4]=c->r[3]|c->r[3]; // 8008053C
  c->r[3]=c->r[31]+0x000003F8u; // 80080540
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080544
  c->lr=0x8008054Cu; f_80121B20(c); // 80080548
  c->r[0]=0u+0x00000002u; // 8008054C
  W32(c->r[13]+0xFFFFB87Cu,c->r[0]); // 80080550
  c->r[3]=c->r[1]+0x00000008u; // 80080554
  c->lr=0x8008055Cu; f_801AC8E0(c); // 80080558
  c->r[3]=0u+0x00000000u; // 8008055C
  goto L_80080594; // 80080560
L_80080564:;
  c->r[3]=c->r[1]+0x00000008u; // 80080564
  c->lr=0x8008056Cu; f_801AC8E0(c); // 80080568
  cmps(c,0,(int32_t)c->r[3],0); // 8008056C
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 80080570
  if (crb(c,2)) { goto L_80080590; } // 80080574
  c->r[4]=c->r[3]|c->r[3]; // 80080578
  c->r[3]=c->r[31]+0x00000420u; // 8008057C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080580
  c->lr=0x80080588u; f_80121B20(c); // 80080584
  c->r[3]=0u+0x00000000u; // 80080588
  goto L_80080594; // 8008058C
L_80080590:;
  c->r[3]=0u+0x00000001u; // 80080590
L_80080594:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80080594
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80080598
  c->lr=c->r[0]; // 8008059C
  c->r[1]=c->r[1]+0x000000A0u; // 800805A0
  return; // 800805A4
}

// fn_800805B0
void f_800805B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800805B0
  c->r[0]=c->lr; // 800805B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800805B8
  c->r[0]=0u+0x00000000u; // 800805BC
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800805C0
  c->r[31]=c->r[3]|c->r[3]; // 800805C4
  c->r[3]=c->r[1]+0x00000008u; // 800805C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800805CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800805D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800805D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800805D8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800805DC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800805E0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800805E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800805E8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800805EC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800805F0
  W32(c->r[1]+0x00000030u,c->r[0]); // 800805F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800805F8
  W32(c->r[1]+0x00000038u,c->r[0]); // 800805FC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 80080600
  W32(c->r[1]+0x00000040u,c->r[0]); // 80080604
  W32(c->r[1]+0x00000044u,c->r[0]); // 80080608
  c->lr=0x80080610u; f_801AE0A0(c); // 8008060C
  c->r[3]=c->r[31]|c->r[31]; // 80080610
  c->r[4]=c->r[1]+0x00000008u; // 80080614
  c->lr=0x8008061Cu; f_801ABC90(c); // 80080618
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 8008061C
  c->r[0]=cntlz(c->r[3]); // 80080620
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80080624
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80080628
  c->r[0]=R32(c->r[1]+0x00000054u); // 8008062C
  c->lr=c->r[0]; // 80080630
  c->r[1]=c->r[1]+0x00000050u; // 80080634
  return; // 80080638
}

// fn_80080640
void f_80080640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080640
  c->r[0]=c->lr; // 80080644
  c->r[3]=0u+0x80360000u; // 80080648
  c->r[5]=0u+0x00000001u; // 8008064C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80080650
  c->r[0]=0u+0x00000000u; // 80080654
  c->r[3]=c->r[3]+0x000007B0u; // 80080658
  c->r[4]=c->r[1]+0x00000048u; // 8008065C
  W32(c->r[1]+0x000000ECu,c->r[31]); // 80080660
  W32(c->r[1]+0x000000E8u,c->r[30]); // 80080664
  c->r[30]=0u+0x00000000u; // 80080668
  W32(c->r[1]+0x000000E4u,c->r[29]); // 8008066C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80080670
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80080674
  W32(c->r[1]+0x00000010u,c->r[0]); // 80080678
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008067C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80080680
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80080684
  W32(c->r[1]+0x00000020u,c->r[0]); // 80080688
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008068C
  W32(c->r[1]+0x00000028u,c->r[0]); // 80080690
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80080694
  W32(c->r[1]+0x00000030u,c->r[0]); // 80080698
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008069C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800806A0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800806A4
  W32(c->r[1]+0x00000040u,c->r[0]); // 800806A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800806AC
  c->lr=0x800806B4u; f_801AC640(c); // 800806B0
  cmps(c,0,(int32_t)c->r[3],0); // 800806B4
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 800806B8
  if (crb(c,2)) { goto L_800806C8; } // 800806BC
  c->r[3]=0u+0x00000000u; // 800806C0
  goto L_8008076C; // 800806C4
L_800806C8:;
  c->r[31]=0u+0x00010000u; // 800806C8
  c->r[3]=0u+0x00000000u; // 800806CC
  c->r[4]=c->r[31]+0xFFFFBAA0u; // 800806D0
  c->lr=0x800806D8u; f_8000DE90(c); // 800806D4
  c->r[29]=c->r[3]|c->r[3]; // 800806D8
  c->r[3]=c->r[1]+0x00000048u; // 800806DC
  c->r[4]=c->r[29]|c->r[29]; // 800806E0
  c->r[5]=c->r[31]+0xFFFFBAA0u; // 800806E4
  c->lr=0x800806ECu; f_801AB5B0(c); // 800806E8
  cmpu(c,0,c->r[3],0x0000BAA0u); // 800806EC
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 800806F0
  if (crb(c,2)) { goto L_80080718; } // 800806F4
  c->r[0]=0u+0x00000002u; // 800806F8
  W32(c->r[13]+0xFFFFB87Cu,c->r[0]); // 800806FC
  c->r[3]=c->r[29]|c->r[29]; // 80080700
  c->lr=0x80080708u; f_8000DEF0(c); // 80080704
  c->r[3]=c->r[1]+0x00000048u; // 80080708
  c->lr=0x80080710u; f_801AC8E0(c); // 8008070C
  c->r[3]=0u+0x00000000u; // 80080710
  goto L_8008076C; // 80080714
L_80080718:;
  c->r[3]=R32(c->r[13]+0xFFFFB884u); // 80080718
  c->r[4]=c->r[29]|c->r[29]; // 8008071C
  c->r[5]=c->r[31]+0xFFFFBAA0u; // 80080720
  c->lr=0x80080728u; f_802EBD2C(c); // 80080724
  cmps(c,0,(int32_t)c->r[3],0); // 80080728
  if (!crb(c,2)) { goto L_80080744; } // 8008072C
  c->r[3]=0u+0x80360000u; // 80080730
  c->r[3]=c->r[3]+0x000007C0u; // 80080734
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080738
  c->lr=0x80080740u; f_80121B20(c); // 8008073C
  c->r[30]=0u+0x00000001u; // 80080740
L_80080744:;
  c->r[3]=c->r[1]+0x00000048u; // 80080744
  c->lr=0x8008074Cu; f_801AC8E0(c); // 80080748
  cmps(c,0,(int32_t)c->r[3],0); // 8008074C
  W32(c->r[13]+0xFFFFB87Cu,c->r[3]); // 80080750
  if (crb(c,2)) { goto L_8008075C; } // 80080754
  c->r[30]=0u+0x00000000u; // 80080758
L_8008075C:;
  c->r[3]=c->r[29]|c->r[29]; // 8008075C
  c->lr=0x80080764u; f_8000DEF0(c); // 80080760
  c->lr=0x80080768u; f_80080790(c); // 80080764
  c->r[3]=c->r[30]|c->r[30]; // 80080768
L_8008076C:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 8008076C
  c->r[31]=R32(c->r[1]+0x000000ECu); // 80080770
  c->r[30]=R32(c->r[1]+0x000000E8u); // 80080774
  c->r[29]=R32(c->r[1]+0x000000E4u); // 80080778
  c->lr=c->r[0]; // 8008077C
  c->r[1]=c->r[1]+0x000000F0u; // 80080780
  return; // 80080784
}

// fn_80080790
void f_80080790(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB884u); // 80080790
  f_8005FB00(c); return; // 80080794
}

// fn_800807A0
void f_800807A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800807A0
  c->r[0]=c->lr; // 800807A4
  cmps(c,0,(int32_t)c->r[3],0); // 800807A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800807AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800807B0
  c->r[31]=0u+0x80360000u; // 800807B4
  c->r[31]=c->r[31]+0x00000368u; // 800807B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800807BC
  c->r[30]=c->r[3]|c->r[3]; // 800807C0
  if (crb(c,2)) { goto L_800809A8; } // 800807C4
  cmps(c,0,(int32_t)c->r[3],1); // 800807C8
  if (crb(c,2)) { goto L_800809A8; } // 800807CC
  c->r[3]=c->r[31]+0x000004A8u; // 800807D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800807D4
  c->lr=0x800807DCu; f_80121B20(c); // 800807D8
  cmps(c,0,(int32_t)c->r[30],-9); // 800807DC
  if (crb(c,2)) { goto L_800808FC; } // 800807E0
  if (!crb(c,0)) { goto L_80080830; } // 800807E4
  cmps(c,0,(int32_t)c->r[30],-15); // 800807E8
  if (crb(c,2)) { goto L_8008089C; } // 800807EC
  if (!crb(c,0)) { goto L_8008080C; } // 800807F0
  cmps(c,0,(int32_t)c->r[30],-64); // 800807F4
  if (crb(c,2)) { goto L_8008095C; } // 800807F8
  if (!crb(c,0)) { goto L_8008098C; } // 800807FC
  cmps(c,0,(int32_t)c->r[30],-128); // 80080800
  if (crb(c,2)) { goto L_8008096C; } // 80080804
  goto L_8008098C; // 80080808
L_8008080C:;
  cmps(c,0,(int32_t)c->r[30],-12); // 8008080C
  if (crb(c,2)) { goto L_8008092C; } // 80080810
  if (!crb(c,0)) { goto L_80080824; } // 80080814
  cmps(c,0,(int32_t)c->r[30],-13); // 80080818
  if (!crb(c,0)) { goto L_8008093C; } // 8008081C
  goto L_8008094C; // 80080820
L_80080824:;
  cmps(c,0,(int32_t)c->r[30],-10); // 80080824
  if (!crb(c,0)) { goto L_8008090C; } // 80080828
  goto L_8008091C; // 8008082C
L_80080830:;
  cmps(c,0,(int32_t)c->r[30],-3); // 80080830
  if (crb(c,2)) { goto L_800808AC; } // 80080834
  if (!crb(c,0)) { goto L_80080860; } // 80080838
  cmps(c,0,(int32_t)c->r[30],-6); // 8008083C
  if (crb(c,2)) { goto L_800808DC; } // 80080840
  if (!crb(c,0)) { goto L_80080854; } // 80080844
  cmps(c,0,(int32_t)c->r[30],-7); // 80080848
  if (!crb(c,0)) { goto L_8008098C; } // 8008084C
  goto L_800808EC; // 80080850
L_80080854:;
  cmps(c,0,(int32_t)c->r[30],-4); // 80080854
  if (!crb(c,0)) { goto L_800808BC; } // 80080858
  goto L_800808CC; // 8008085C
L_80080860:;
  cmps(c,0,(int32_t)c->r[30],2); // 80080860
  if (crb(c,2)) { goto L_8008097C; } // 80080864
  if (!crb(c,0)) { goto L_8008098C; } // 80080868
  cmps(c,0,(int32_t)c->r[30],-1); // 8008086C
  if (crb(c,2)) { goto L_8008087C; } // 80080870
  if (!crb(c,0)) { goto L_8008098C; } // 80080874
  goto L_8008088C; // 80080878
L_8008087C:;
  c->r[3]=c->r[31]+0x000004CCu; // 8008087C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080880
  c->lr=0x80080888u; f_80121B20(c); // 80080884
  goto L_8008099C; // 80080888
L_8008088C:;
  c->r[3]=c->r[31]+0x000004E0u; // 8008088C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080890
  c->lr=0x80080898u; f_80121B20(c); // 80080894
  goto L_8008099C; // 80080898
L_8008089C:;
  c->r[3]=c->r[31]+0x000004FCu; // 8008089C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800808A0
  c->lr=0x800808A8u; f_80121B20(c); // 800808A4
  goto L_8008099C; // 800808A8
L_800808AC:;
  c->r[3]=c->r[31]+0x00000518u; // 800808AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800808B0
  c->lr=0x800808B8u; f_80121B20(c); // 800808B4
  goto L_8008099C; // 800808B8
L_800808BC:;
  c->r[3]=c->r[31]+0x0000052Cu; // 800808BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800808C0
  c->lr=0x800808C8u; f_80121B20(c); // 800808C4
  goto L_8008099C; // 800808C8
L_800808CC:;
  c->r[3]=c->r[31]+0x00000544u; // 800808CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800808D0
  c->lr=0x800808D8u; f_80121B20(c); // 800808D4
  goto L_8008099C; // 800808D8
L_800808DC:;
  c->r[3]=c->r[31]+0x0000055Cu; // 800808DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800808E0
  c->lr=0x800808E8u; f_80121B20(c); // 800808E4
  goto L_8008099C; // 800808E8
L_800808EC:;
  c->r[3]=c->r[31]+0x00000570u; // 800808EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800808F0
  c->lr=0x800808F8u; f_80121B20(c); // 800808F4
  goto L_8008099C; // 800808F8
L_800808FC:;
  c->r[3]=c->r[31]+0x00000588u; // 800808FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080900
  c->lr=0x80080908u; f_80121B20(c); // 80080904
  goto L_8008099C; // 80080908
L_8008090C:;
  c->r[3]=c->r[31]+0x000005A0u; // 8008090C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080910
  c->lr=0x80080918u; f_80121B20(c); // 80080914
  goto L_8008099C; // 80080918
L_8008091C:;
  c->r[3]=c->r[31]+0x000005B4u; // 8008091C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080920
  c->lr=0x80080928u; f_80121B20(c); // 80080924
  goto L_8008099C; // 80080928
L_8008092C:;
  c->r[3]=c->r[31]+0x000005CCu; // 8008092C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080930
  c->lr=0x80080938u; f_80121B20(c); // 80080934
  goto L_8008099C; // 80080938
L_8008093C:;
  c->r[3]=c->r[31]+0x000005E4u; // 8008093C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080940
  c->lr=0x80080948u; f_80121B20(c); // 80080944
  goto L_8008099C; // 80080948
L_8008094C:;
  c->r[3]=c->r[31]+0x000005FCu; // 8008094C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080950
  c->lr=0x80080958u; f_80121B20(c); // 80080954
  goto L_8008099C; // 80080958
L_8008095C:;
  c->r[3]=c->r[31]+0x00000610u; // 8008095C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080960
  c->lr=0x80080968u; f_80121B20(c); // 80080964
  goto L_8008099C; // 80080968
L_8008096C:;
  c->r[3]=c->r[31]+0x00000628u; // 8008096C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080970
  c->lr=0x80080978u; f_80121B20(c); // 80080974
  goto L_8008099C; // 80080978
L_8008097C:;
  c->r[3]=c->r[31]+0x00000644u; // 8008097C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080980
  c->lr=0x80080988u; f_80121B20(c); // 80080984
  goto L_8008099C; // 80080988
L_8008098C:;
  c->r[4]=c->r[30]|c->r[30]; // 8008098C
  c->r[3]=c->r[31]+0x00000660u; // 80080990
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80080994
  c->lr=0x8008099Cu; f_80121B20(c); // 80080998
L_8008099C:;
  c->r[3]=c->r[31]+0x0000066Cu; // 8008099C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800809A0
  c->lr=0x800809A8u; f_80121B20(c); // 800809A4
L_800809A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800809A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800809AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800809B0
  c->lr=c->r[0]; // 800809B4
  c->r[1]=c->r[1]+0x00000010u; // 800809B8
  return; // 800809BC
}

// fn_800809C0
void f_800809C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800809C0
  c->r[0]=c->lr; // 800809C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800809C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 800809CC
  cmps(c,0,(int32_t)c->r[0],0); // 800809D0
  if (!crb(c,2)) { goto L_80080A98; } // 800809D4
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 800809D8
  cmps(c,0,(int32_t)c->r[0],0); // 800809DC
  if (!crb(c,2)) { goto L_80080A1C; } // 800809E0
  c->r[0]=R32(c->r[13]+0xFFFFB874u); // 800809E4
  c->r[3]=0u+0x00000000u; // 800809E8
  W8(c->r[13]+0xFFFFB878u,c->r[3]); // 800809EC
  cmps(c,0,(int32_t)c->r[0],0); // 800809F0
  if (!crb(c,2)) { goto L_80080A08; } // 800809F4
  c->r[3]=0u+0x00000001u; // 800809F8
  c->r[4]=0u+0x00000020u; // 800809FC
  c->lr=0x80080A04u; f_8000DE90(c); // 80080A00
  W32(c->r[13]+0xFFFFB874u,c->r[3]); // 80080A04
L_80080A08:;
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80080A08
  c->r[4]=0u+0x00000000u; // 80080A0C
  c->r[5]=0u+0x00000020u; // 80080A10
  c->lr=0x80080A18u; f_80004714(c); // 80080A14
  goto L_80080A98; // 80080A18
L_80080A1C:;
  cmpu(c,0,c->r[0],0x00000002u); // 80080A1C
  if (!crb(c,2)) { goto L_80080A5C; } // 80080A20
  c->r[0]=R32(c->r[13]+0xFFFFB874u); // 80080A24
  c->r[3]=0u+0x00000000u; // 80080A28
  W8(c->r[13]+0xFFFFB878u,c->r[3]); // 80080A2C
  cmps(c,0,(int32_t)c->r[0],0); // 80080A30
  if (!crb(c,2)) { goto L_80080A48; } // 80080A34
  c->r[3]=0u+0x00000001u; // 80080A38
  c->r[4]=0u+0x00004000u; // 80080A3C
  c->lr=0x80080A44u; f_8000DE90(c); // 80080A40
  W32(c->r[13]+0xFFFFB874u,c->r[3]); // 80080A44
L_80080A48:;
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80080A48
  c->r[4]=0u+0x00000000u; // 80080A4C
  c->r[5]=0u+0x00004000u; // 80080A50
  c->lr=0x80080A58u; f_80004714(c); // 80080A54
  goto L_80080A98; // 80080A58
L_80080A5C:;
  cmpu(c,0,c->r[0],0x00000001u); // 80080A5C
  if (!crb(c,2)) { goto L_80080A98; } // 80080A60
  c->r[0]=R32(c->r[13]+0xFFFFB874u); // 80080A64
  c->r[3]=0u+0x00000000u; // 80080A68
  W8(c->r[13]+0xFFFFB878u,c->r[3]); // 80080A6C
  cmps(c,0,(int32_t)c->r[0],0); // 80080A70
  if (!crb(c,2)) { goto L_80080A88; } // 80080A74
  c->r[3]=0u+0x00000001u; // 80080A78
  c->r[4]=0u+0x000006E8u; // 80080A7C
  c->lr=0x80080A84u; f_8000DE90(c); // 80080A80
  W32(c->r[13]+0xFFFFB874u,c->r[3]); // 80080A84
L_80080A88:;
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80080A88
  c->r[4]=0u+0x00000000u; // 80080A8C
  c->r[5]=0u+0x000006E8u; // 80080A90
  c->lr=0x80080A98u; f_80004714(c); // 80080A94
L_80080A98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080A98
  c->lr=c->r[0]; // 80080A9C
  c->r[1]=c->r[1]+0x00000010u; // 80080AA0
  return; // 80080AA4
}

// fn_80080AB0
void f_80080AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080AB0
  c->r[0]=c->lr; // 80080AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80080ABC
  c->r[31]=c->r[4]|c->r[4]; // 80080AC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80080AC4
  c->r[30]=c->r[3]|c->r[3]; // 80080AC8
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80080ACC
  cmps(c,0,(int32_t)c->r[0],0); // 80080AD0
  if (crb(c,2)) { goto L_80080AEC; } // 80080AD4
  cmpu(c,0,c->r[0],0x00000002u); // 80080AD8
  if (crb(c,2)) { goto L_80080B04; } // 80080ADC
  cmpu(c,0,c->r[0],0x00000001u); // 80080AE0
  if (crb(c,2)) { goto L_80080B64; } // 80080AE4
  goto L_80080BA0; // 80080AE8
L_80080AEC:;
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80080AEC
  c->r[4]=0u+0x00000000u; // 80080AF0
  c->r[5]=0u+0x00000020u; // 80080AF4
  c->lr=0x80080AFCu; f_80004714(c); // 80080AF8
  c->r[7]=R32(c->r[13]+0xFFFFB874u); // 80080AFC
  goto L_80080BA0; // 80080B00
L_80080B04:;
  c->r[3]=R8(c->r[13]+0xFFFFB878u); // 80080B04
  c->r[0]=0u+0x000000DDu; // 80080B08
  c->r[5]=R32(c->r[13]+0xFFFFB874u); // 80080B0C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)1768); // 80080B10
  c->r[3]=0u+0x00000000u; // 80080B14
  c->r[4]=c->r[4]+c->r[5]; // 80080B18
  c->r[4]=c->r[4]+0x00000020u; // 80080B1C
  c->ctr=c->r[0]; // 80080B20
L_80080B24:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 80080B24
  W8(c->r[4]+0x00000001u,c->r[3]); // 80080B28
  W8(c->r[4]+0x00000002u,c->r[3]); // 80080B2C
  W8(c->r[4]+0x00000003u,c->r[3]); // 80080B30
  W8(c->r[4]+0x00000004u,c->r[3]); // 80080B34
  W8(c->r[4]+0x00000005u,c->r[3]); // 80080B38
  W8(c->r[4]+0x00000006u,c->r[3]); // 80080B3C
  W8(c->r[4]+0x00000007u,c->r[3]); // 80080B40
  c->r[4]=c->r[4]+0x00000008u; // 80080B44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80080B24; } // 80080B48
  c->r[0]=R8(c->r[13]+0xFFFFB878u); // 80080B4C
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80080B50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80080B54
  c->r[3]=c->r[0]+c->r[3]; // 80080B58
  c->r[7]=c->r[3]+0x00000020u; // 80080B5C
  goto L_80080BA0; // 80080B60
L_80080B64:;
  c->r[0]=0u+0x000000DDu; // 80080B64
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 80080B68
  c->r[3]=0u+0x00000000u; // 80080B6C
  c->ctr=c->r[0]; // 80080B70
L_80080B74:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 80080B74
  W8(c->r[4]+0x00000001u,c->r[3]); // 80080B78
  W8(c->r[4]+0x00000002u,c->r[3]); // 80080B7C
  W8(c->r[4]+0x00000003u,c->r[3]); // 80080B80
  W8(c->r[4]+0x00000004u,c->r[3]); // 80080B84
  W8(c->r[4]+0x00000005u,c->r[3]); // 80080B88
  W8(c->r[4]+0x00000006u,c->r[3]); // 80080B8C
  W8(c->r[4]+0x00000007u,c->r[3]); // 80080B90
  c->r[4]=c->r[4]+0x00000008u; // 80080B94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80080B74; } // 80080B98
  c->r[7]=R32(c->r[13]+0xFFFFB874u); // 80080B9C
L_80080BA0:;
  cmps(c,1,(int32_t)c->r[31],0); // 80080BA0
  c->r[6]=0u+0x00000000u; // 80080BA4
  if (!crb(c,5)) { goto L_80080C64; } // 80080BA8
  cmps(c,0,(int32_t)c->r[31],8); // 80080BAC
  c->r[4]=c->r[31]+0xFFFFFFF8u; // 80080BB0
  if (!crb(c,1)) { goto L_80080C40; } // 80080BB4
  c->r[5]=0u+0x00000000u; // 80080BB8
  if (crb(c,4)) { goto L_80080BD4; } // 80080BBC
  c->r[3]=0u+0x80000000u; // 80080BC0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80080BC4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80080BC8
  if (crb(c,1)) { goto L_80080BD4; } // 80080BCC
  c->r[5]=0u+0x00000001u; // 80080BD0
L_80080BD4:;
  cmps(c,0,(int32_t)c->r[5],0); // 80080BD4
  if (crb(c,2)) { goto L_80080C40; } // 80080BD8
  c->r[0]=c->r[4]+0x00000007u; // 80080BDC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80080BE0
  c->ctr=c->r[0]; // 80080BE4
  cmps(c,0,(int32_t)c->r[4],0); // 80080BE8
  if (!crb(c,1)) { goto L_80080C40; } // 80080BEC
L_80080BF0:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80080BF0
  c->r[6]=c->r[6]+0x00000008u; // 80080BF4
  W8(c->r[7]+0x00000000u,c->r[0]); // 80080BF8
  c->r[0]=R8(c->r[30]+0x00000001u); // 80080BFC
  W8(c->r[7]+0x00000001u,c->r[0]); // 80080C00
  c->r[0]=R8(c->r[30]+0x00000002u); // 80080C04
  W8(c->r[7]+0x00000002u,c->r[0]); // 80080C08
  c->r[0]=R8(c->r[30]+0x00000003u); // 80080C0C
  W8(c->r[7]+0x00000003u,c->r[0]); // 80080C10
  c->r[0]=R8(c->r[30]+0x00000004u); // 80080C14
  W8(c->r[7]+0x00000004u,c->r[0]); // 80080C18
  c->r[0]=R8(c->r[30]+0x00000005u); // 80080C1C
  W8(c->r[7]+0x00000005u,c->r[0]); // 80080C20
  c->r[0]=R8(c->r[30]+0x00000006u); // 80080C24
  W8(c->r[7]+0x00000006u,c->r[0]); // 80080C28
  c->r[0]=R8(c->r[30]+0x00000007u); // 80080C2C
  c->r[30]=c->r[30]+0x00000008u; // 80080C30
  W8(c->r[7]+0x00000007u,c->r[0]); // 80080C34
  c->r[7]=c->r[7]+0x00000008u; // 80080C38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80080BF0; } // 80080C3C
L_80080C40:;
  c->r[0]=c->r[31]-c->r[6]; // 80080C40
  c->ctr=c->r[0]; // 80080C44
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[31]); // 80080C48
  if (!crb(c,0)) { goto L_80080C64; } // 80080C4C
L_80080C50:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80080C50
  c->r[30]=c->r[30]+0x00000001u; // 80080C54
  W8(c->r[7]+0x00000000u,c->r[0]); // 80080C58
  c->r[7]=c->r[7]+0x00000001u; // 80080C5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80080C50; } // 80080C60
L_80080C64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80080C68
  c->r[30]=R32(c->r[1]+0x00000008u); // 80080C6C
  c->lr=c->r[0]; // 80080C70
  c->r[1]=c->r[1]+0x00000010u; // 80080C74
  return; // 80080C78
}

// fn_80080C80
void f_80080C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080C80
  c->r[0]=c->lr; // 80080C84
  cmps(c,0,(int32_t)c->r[3],-4); // 80080C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80080C8C
  if (crb(c,2)) { goto L_80080CFC; } // 80080C90
  if (!crb(c,0)) { goto L_80080CBC; } // 80080C94
  cmps(c,0,(int32_t)c->r[3],-15); // 80080C98
  if (crb(c,2)) { goto L_80080CEC; } // 80080C9C
  if (!crb(c,0)) { goto L_80080CB0; } // 80080CA0
  cmps(c,0,(int32_t)c->r[3],-64); // 80080CA4
  if (crb(c,2)) { goto L_80080D3C; } // 80080CA8
  goto L_80080D58; // 80080CAC
L_80080CB0:;
  cmps(c,0,(int32_t)c->r[3],-5); // 80080CB0
  if (!crb(c,0)) { goto L_80080CEC; } // 80080CB4
  goto L_80080D58; // 80080CB8
L_80080CBC:;
  cmps(c,0,(int32_t)c->r[3],1); // 80080CBC
  if (crb(c,2)) { goto L_80080D58; } // 80080CC0
  if (!crb(c,0)) { goto L_80080CD8; } // 80080CC4
  cmps(c,0,(int32_t)c->r[3],-1); // 80080CC8
  if (crb(c,2)) { goto L_80080D58; } // 80080CCC
  if (!crb(c,0)) { goto L_80080CE4; } // 80080CD0
  goto L_80080D1C; // 80080CD4
L_80080CD8:;
  cmps(c,0,(int32_t)c->r[3],3); // 80080CD8
  if (!crb(c,0)) { goto L_80080D58; } // 80080CDC
  goto L_80080CEC; // 80080CE0
L_80080CE4:;
  c->r[3]=0u+0x00000001u; // 80080CE4
  goto L_80080D5C; // 80080CE8
L_80080CEC:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80080CEC
  c->r[0]=c->r[0]|0x00020000u; // 80080CF0
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80080CF4
  goto L_80080D58; // 80080CF8
L_80080CFC:;
  c->r[3]=0u+0x00010000u; // 80080CFC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80080D00
  c->r[4]=c->r[3]|c->r[3]; // 80080D04
  c->lr=0x80080D0Cu; f_800091B0(c); // 80080D08
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80080D0C
  c->r[0]=c->r[0]|0x00010000u; // 80080D10
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80080D14
  goto L_80080D58; // 80080D18
L_80080D1C:;
  c->r[3]=0u+0x00010000u; // 80080D1C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80080D20
  c->r[4]=c->r[3]|c->r[3]; // 80080D24
  c->lr=0x80080D2Cu; f_800091B0(c); // 80080D28
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80080D2C
  c->r[0]=c->r[0]|0x00100000u; // 80080D30
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80080D34
  goto L_80080D58; // 80080D38
L_80080D3C:;
  c->r[3]=0u+0x00010000u; // 80080D3C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80080D40
  c->r[4]=c->r[3]|c->r[3]; // 80080D44
  c->lr=0x80080D4Cu; f_800091B0(c); // 80080D48
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80080D4C
  c->r[0]=c->r[0]|0x00200000u; // 80080D50
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80080D54
L_80080D58:;
  c->r[3]=0u+0x00000000u; // 80080D58
L_80080D5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80080D5C
  c->lr=c->r[0]; // 80080D60
  c->r[1]=c->r[1]+0x00000010u; // 80080D64
  return; // 80080D68
}

// fn_80080D70
void f_80080D70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80080D70
  c->r[0]=c->lr; // 80080D74
  W32(c->r[1]+0x00000044u,c->r[0]); // 80080D78
  c->r[11]=c->r[1]+0x00000040u; // 80080D7C
  c->lr=0x80080D84u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80080D80
  c->r[27]=0u+0x80360000u; // 80080D84
  c->r[26]=0u+0x00000000u; // 80080D88
  c->r[27]=c->r[27]+0x00000368u; // 80080D8C
  c->r[22]=0u+0x00000000u; // 80080D90
  c->r[30]=0u+0x00000000u; // 80080D94
  c->r[31]=0u+0x00000002u; // 80080D98
  c->r[29]=0u+0x00000001u; // 80080D9C
  c->r[28]=0u+0x80360000u; // 80080DA0
L_80080DA4:;
  cmpu(c,0,c->r[26],0x00000011u); // 80080DA4
  if (crb(c,1)) { goto L_800810CC; } // 80080DA8
  c->r[3]=c->r[28]+0x00000A40u; // 80080DAC
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 80080DB0
  c->r[3]=R32(c->r[3]+c->r[0]); // 80080DB4
  c->ctr=c->r[3]; // 80080DB8
  if (true) { switch (c->ctr) { case 0x80080DC0u: goto L_80080DC0; case 0x80080E2Cu: goto L_80080E2C; case 0x80080E44u: goto L_80080E44; case 0x80080E4Cu: goto L_80080E4C; case 0x80080E78u: goto L_80080E78; case 0x80080E94u: goto L_80080E94; case 0x80080EA0u: goto L_80080EA0; case 0x80080EB8u: goto L_80080EB8; case 0x80080FF0u: goto L_80080FF0; case 0x8008101Cu: goto L_8008101C; case 0x8008108Cu: goto L_8008108C; case 0x80081094u: goto L_80081094; case 0x800810C4u: goto L_800810C4; case 0x800810CCu: goto L_800810CC; default: break; } dispatch(c,c->ctr); return; } // 80080DBC
L_80080DC0:;
  c->r[3]=R32(c->r[13]+0xFFFFB890u); // 80080DC0
  c->r[0]=rotl(c->r[3],0)&0x00010000u; cr0(c,c->r[0]); // 80080DC4
  if (crb(c,2)) { goto L_80080DDC; } // 80080DC8
  c->r[3]=c->r[27]+0x00000690u; // 80080DCC
  c->lr=0x80080DD4u; f_8007D050(c); // 80080DD0
  c->r[26]=0u+0x00000001u; // 80080DD4
  goto L_800810CC; // 80080DD8
L_80080DDC:;
  c->r[0]=rotl(c->r[3],0)&0x00100000u; cr0(c,c->r[0]); // 80080DDC
  if (crb(c,2)) { goto L_80080DF4; } // 80080DE0
  c->r[3]=c->r[27]+0x0000069Cu; // 80080DE4
  c->lr=0x80080DECu; f_8007D050(c); // 80080DE8
  c->r[26]=0u+0x00000001u; // 80080DEC
  goto L_800810CC; // 80080DF0
L_80080DF4:;
  c->r[0]=rotl(c->r[3],0)&0x00200000u; cr0(c,c->r[0]); // 80080DF4
  if (!crb(c,2)) { goto L_80080E04; } // 80080DF8
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 80080DFC
  if (crb(c,2)) { goto L_80080E14; } // 80080E00
L_80080E04:;
  c->r[3]=c->r[27]+0x000006A8u; // 80080E04
  c->lr=0x80080E0Cu; f_8007D050(c); // 80080E08
  c->r[26]=0u+0x00000001u; // 80080E0C
  goto L_800810CC; // 80080E10
L_80080E14:;
  c->r[0]=rotl(c->r[3],0)&0x00020000u; cr0(c,c->r[0]); // 80080E14
  if (crb(c,2)) { goto L_800810CC; } // 80080E18
  c->r[3]=c->r[27]+0x000006B4u; // 80080E1C
  c->lr=0x80080E24u; f_8007D050(c); // 80080E20
  c->r[26]=0u+0x00000003u; // 80080E24
  goto L_800810CC; // 80080E28
L_80080E2C:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80080E2C
  c->r[26]=0u+0x00000002u; // 80080E30
  W32(c->r[13]+0xFFFFB2C4u,c->r[29]); // 80080E34
  c->r[0]=c->r[0]|0x00000004u; // 80080E38
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80080E3C
  goto L_800810CC; // 80080E40
L_80080E44:;
  c->r[26]=0u+0x00000004u; // 80080E44
  goto L_800810CC; // 80080E48
L_80080E4C:;
  c->lr=0x80080E50u; f_8007D160(c); // 80080E4C
  cmps(c,0,(int32_t)c->r[3],0); // 80080E50
  if (crb(c,2)) { goto L_800810CC; } // 80080E54
  c->lr=0x80080E5Cu; f_8007D170(c); // 80080E58
  c->r[3]=c->r[13]+0xFFFF86F0u; // 80080E5C
  c->lr=0x80080E64u; f_8007D050(c); // 80080E60
  c->r[3]=0u+0x00000002u; // 80080E64
  c->lr=0x80080E6Cu; f_8007FD60(c); // 80080E68
  c->r[26]=0u+0x00000007u; // 80080E6C
  c->r[25]=0u+0x00000000u; // 80080E70
  goto L_800810CC; // 80080E74
L_80080E78:;
  c->r[25]=c->r[25]+0x00000001u; // 80080E78
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[25]; // 80080E7C
  cmps(c,0,(int32_t)c->r[0],30); // 80080E80
  if (crb(c,0)) { goto L_800810CC; } // 80080E84
  c->r[25]=0u+0x00000000u; // 80080E88
  c->r[26]=0u+0x00000008u; // 80080E8C
  goto L_800810CC; // 80080E90
L_80080E94:;
  c->r[25]=0u+0x00000000u; // 80080E94
  c->r[26]=0u+0x00000009u; // 80080E98
  goto L_800810CC; // 80080E9C
L_80080EA0:;
  c->lr=0x80080EA4u; f_8007FE10(c); // 80080EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80080EA4
  if (crb(c,2)) { goto L_800810CC; } // 80080EA8
  c->r[26]=0u+0x0000000Bu; // 80080EAC
  c->lr=0x80080EB4u; f_8007D170(c); // 80080EB0
  goto L_800810CC; // 80080EB4
L_80080EB8:;
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80080EB8
  cmpu(c,0,c->r[0],0x00000002u); // 80080EBC
  if (crb(c,1)) { goto L_80080F30; } // 80080EC0
  c->r[24]=R8(c->r[13]+0xFFFFB878u); // 80080EC4
  c->r[23]=c->r[0]|c->r[0]; // 80080EC8
  c->r[21]=0u+0x00000001u; // 80080ECC
  if (crb(c,1)) { goto L_80080EE0; } // 80080ED0
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80080ED4
  c->lr=0x80080EDCu; f_8000DEF0(c); // 80080ED8
  W32(c->r[13]+0xFFFFB874u,c->r[30]); // 80080EDC
L_80080EE0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80080EE0
  cmps(c,0,(int32_t)c->r[0],0); // 80080EE4
  if (!crb(c,2)) { goto L_80080EF0; } // 80080EE8
  W8(c->r[13]+0xFFFFB879u,c->r[31]); // 80080EEC
L_80080EF0:;
  c->lr=0x80080EF4u; f_800809C0(c); // 80080EF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80080EF4
  c->r[4]=c->r[24]|c->r[24]; // 80080EF8
  cmps(c,0,(int32_t)c->r[0],0); // 80080EFC
  if (!crb(c,2)) { goto L_80080F30; } // 80080F00
  c->r[3]=R8(c->r[13]+0xFFFFB879u); // 80080F04
  c->r[0]=c->r[3]+0x000000FFu; // 80080F08
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80080F0C
  cmpu(c,0,c->r[0],0x00000001u); // 80080F10
  if (crb(c,1)) { goto L_80080F2C; } // 80080F14
  cmpu(c,0,c->r[24],0x00000004u); // 80080F18
  if (crb(c,0)) { goto L_80080F24; } // 80080F1C
  c->r[4]=0u+0x00000000u; // 80080F20
L_80080F24:;
  W8(c->r[13]+0xFFFFB878u,c->r[4]); // 80080F24
  goto L_80080F30; // 80080F28
L_80080F2C:;
  W8(c->r[13]+0xFFFFB878u,c->r[30]); // 80080F2C
L_80080F30:;
  c->r[5]=c->r[1]+0x00000008u; // 80080F30
  c->r[3]=0u+0x00000001u; // 80080F34
  c->r[4]=0u+0x00000001u; // 80080F38
  c->lr=0x80080F40u; f_8005F200(c); // 80080F3C
  goto L_80080F48; // 80080F40
L_80080F44:;
  c->lr=0x80080F48u; f_8000FF80(c); // 80080F44
L_80080F48:;
  c->lr=0x80080F4Cu; f_8005F2C0(c); // 80080F48
  cmps(c,0,(int32_t)c->r[3],0); // 80080F4C
  if (crb(c,2)) { IRQCHK(c); goto L_80080F44; } // 80080F50
  c->lr=0x80080F58u; f_8005F2E0(c); // 80080F54
  cmps(c,0,(int32_t)c->r[3],0); // 80080F58
  c->r[4]=0u+0x00000000u; // 80080F5C
  if (crb(c,2)) { goto L_80080F68; } // 80080F60
  c->r[4]=c->r[30]|0x00000100u; // 80080F64
L_80080F68:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80080F68
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80080F6C
  if (!crb(c,2)) { goto L_80080F7C; } // 80080F70
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80080F74
  if (crb(c,2)) { goto L_80080F84; } // 80080F78
L_80080F7C:;
  c->r[4]=c->r[30]|0x00000100u; // 80080F7C
  goto L_80080F98; // 80080F80
L_80080F84:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80080F84
  if (!crb(c,2)) { goto L_80080F94; } // 80080F88
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80080F8C
  if (crb(c,2)) { goto L_80080F98; } // 80080F90
L_80080F94:;
  c->r[4]=c->r[21]|0x00000200u; // 80080F94
L_80080F98:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 80080F98
  if (crb(c,2)) { goto L_80080FB0; } // 80080F9C
  c->r[3]=c->r[27]+0x000006C0u; // 80080FA0
  c->lr=0x80080FA8u; f_8007D050(c); // 80080FA4
  c->r[26]=0u+0x0000000Eu; // 80080FA8
  goto L_800810CC; // 80080FAC
L_80080FB0:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 80080FB0
  if (crb(c,2)) { goto L_80080FC8; } // 80080FB4
  c->r[3]=c->r[27]+0x000006CCu; // 80080FB8
  c->lr=0x80080FC0u; f_8007D050(c); // 80080FBC
  c->r[26]=0u+0x0000000Fu; // 80080FC0
  goto L_800810CC; // 80080FC4
L_80080FC8:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80080FC8
  c->r[25]=0u+0x00000000u; // 80080FCC
  c->r[3]=c->r[13]+0xFFFF86F8u; // 80080FD0
  c->r[0]=c->r[0]|0x00000020u; // 80080FD4
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80080FD8
  c->lr=0x80080FE0u; f_8007D050(c); // 80080FDC
  c->r[26]=0u+0x0000000Cu; // 80080FE0
  c->r[3]=0u+0x00000001u; // 80080FE4
  c->lr=0x80080FECu; f_8007FD60(c); // 80080FE8
  goto L_800810CC; // 80080FEC
L_80080FF0:;
  c->lr=0x80080FF4u; f_8007FE10(c); // 80080FF0
  cmps(c,0,(int32_t)c->r[3],0); // 80080FF4
  if (crb(c,2)) { goto L_800810CC; } // 80080FF8
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80080FFC
  cmpu(c,0,c->r[0],0x00000002u); // 80081000
  if (crb(c,1)) { goto L_80081014; } // 80081004
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081008
  c->lr=0x80081010u; f_8000DEF0(c); // 8008100C
  W32(c->r[13]+0xFFFFB874u,c->r[30]); // 80081010
L_80081014:;
  c->r[26]=0u+0x0000000Du; // 80081014
  goto L_800810CC; // 80081018
L_8008101C:;
  c->r[25]=c->r[25]+0x00000001u; // 8008101C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[25]; // 80081020
  cmps(c,0,(int32_t)c->r[0],30); // 80081024
  if (crb(c,0)) { goto L_800810CC; } // 80081028
  c->lr=0x80081030u; f_8007D170(c); // 8008102C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081030
  cmps(c,0,(int32_t)c->r[0],0); // 80081034
  if (!crb(c,2)) { goto L_80081040; } // 80081038
  W8(c->r[13]+0xFFFFB879u,c->r[23]); // 8008103C
L_80081040:;
  c->lr=0x80081044u; f_800809C0(c); // 80081040
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081044
  c->r[4]=c->r[24]|c->r[24]; // 80081048
  cmps(c,0,(int32_t)c->r[0],0); // 8008104C
  if (!crb(c,2)) { goto L_80081080; } // 80081050
  c->r[3]=R8(c->r[13]+0xFFFFB879u); // 80081054
  c->r[0]=c->r[3]+0x000000FFu; // 80081058
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8008105C
  cmpu(c,0,c->r[0],0x00000001u); // 80081060
  if (crb(c,1)) { goto L_8008107C; } // 80081064
  cmpu(c,0,c->r[24],0x00000004u); // 80081068
  if (crb(c,0)) { goto L_80081074; } // 8008106C
  c->r[4]=0u+0x00000000u; // 80081070
L_80081074:;
  W8(c->r[13]+0xFFFFB878u,c->r[4]); // 80081074
  goto L_80081080; // 80081078
L_8008107C:;
  W8(c->r[13]+0xFFFFB878u,c->r[30]); // 8008107C
L_80081080:;
  c->r[25]=0u+0x00000000u; // 80081080
  c->r[22]=0u+0x00000001u; // 80081084
  goto L_800810CC; // 80081088
L_8008108C:;
  c->r[26]=0u+0x00000010u; // 8008108C
  goto L_800810CC; // 80081090
L_80081094:;
  c->lr=0x80081098u; f_8007D160(c); // 80081094
  cmps(c,0,(int32_t)c->r[3],0); // 80081098
  if (crb(c,2)) { goto L_800810CC; } // 8008109C
  c->lr=0x800810A4u; f_8007D170(c); // 800810A0
  c->r[26]=0u+0x00000011u; // 800810A4
  c->r[3]=0u+0x00000001u; // 800810A8
  c->lr=0x800810B0u; f_8013A740(c); // 800810AC
  c->lr=0x800810B4u; f_8013A5A0(c); // 800810B0
  c->lr=0x800810B8u; f_801395E0(c); // 800810B4
  c->lr=0x800810BCu; f_800362C0(c); // 800810B8
  c->lr=0x800810C0u; f_80007910(c); // 800810BC
  goto L_800810CC; // 800810C0
L_800810C4:;
  c->r[26]=0u+0x00000012u; // 800810C4
  c->lr=0x800810CCu; f_80127A80(c); // 800810C8
L_800810CC:;
  cmps(c,0,(int32_t)c->r[22],0); // 800810CC
  if (!crb(c,2)) { goto L_800810DC; } // 800810D0
  c->lr=0x800810D8u; f_8000FF80(c); // 800810D4
  IRQCHK(c); goto L_80080DA4; // 800810D8
L_800810DC:;
  c->r[11]=c->r[1]+0x00000040u; // 800810DC
  c->lr=0x800810E4u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800810E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800810E4
  c->lr=c->r[0]; // 800810E8
  c->r[1]=c->r[1]+0x00000040u; // 800810EC
  return; // 800810F0
}

// fn_80081100
void f_80081100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081100
  c->r[0]=c->lr; // 80081104
  W32(c->r[1]+0x00000054u,c->r[0]); // 80081108
  c->r[11]=c->r[1]+0x00000050u; // 8008110C
  c->lr=0x80081114u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80081110
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081114
  c->r[24]=0u+0x80360000u; // 80081118
  c->r[24]=c->r[24]+0x00000368u; // 8008111C
  c->r[19]=0u+0x00000000u; // 80081120
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80081124
  c->r[18]=0u+0x00000000u; // 80081128
  c->r[16]=0u+0x00000000u; // 8008112C
  if (!crb(c,2)) { goto L_800817CC; } // 80081130
  c->lr=0x80081138u; f_800803A0(c); // 80081134
  c->r[31]=0u+0x80410000u; // 80081138
  c->r[30]=0u+0x00000000u; // 8008113C
  c->r[31]=c->r[31]+0x00000EE0u; // 80081140
  c->r[28]=0u+0x00000001u; // 80081144
  c->r[27]=0u+0x00010000u; // 80081148
  c->r[26]=0u+0x00000002u; // 8008114C
  c->r[29]=0u+0x80410000u; // 80081150
  c->r[25]=0u+0x80360000u; // 80081154
L_80081158:;
  cmpu(c,0,c->r[19],0x00000011u); // 80081158
  if (crb(c,1)) { goto L_800817A0; } // 8008115C
  c->r[3]=c->r[25]+0x00000A9Cu; // 80081160
  c->r[0]=rotl(c->r[19],2)&0xFFFFFFFCu; // 80081164
  c->r[3]=R32(c->r[3]+c->r[0]); // 80081168
  c->ctr=c->r[3]; // 8008116C
  if (true) { switch (c->ctr) { case 0x80081174u: goto L_80081174; case 0x80081184u: goto L_80081184; case 0x80081518u: goto L_80081518; case 0x80081558u: goto L_80081558; case 0x80081588u: goto L_80081588; case 0x800815ACu: goto L_800815AC; case 0x800815DCu: goto L_800815DC; case 0x80081674u: goto L_80081674; case 0x8008172Cu: goto L_8008172C; case 0x80081774u: goto L_80081774; case 0x800817A0u: goto L_800817A0; default: break; } dispatch(c,c->ctr); return; } // 80081170
L_80081174:;
  c->r[3]=c->r[13]+0xFFFF8700u; // 80081174
  c->lr=0x8008117Cu; f_8007D050(c); // 80081178
  c->r[3]=0u+0x00000001u; // 8008117C
  c->lr=0x80081184u; f_8005CF10(c); // 80081180
L_80081184:;
  c->r[3]=c->r[24]+0x00000368u; // 80081184
  c->r[17]=0u+0x00000000u; // 80081188
  c->lr=0x80081190u; f_80082070(c); // 8008118C
  cmps(c,0,(int32_t)c->r[3],0); // 80081190
  if (!crb(c,2)) { goto L_800811A0; } // 80081194
  c->r[23]=0u+0x00000001u; // 80081198
  goto L_80081270; // 8008119C
L_800811A0:;
  cmps(c,0,(int32_t)c->r[3],-12); // 800811A0
  if (!crb(c,2)) { goto L_800811B0; } // 800811A4
  c->r[23]=0u+0x00000000u; // 800811A8
  goto L_80081270; // 800811AC
L_800811B0:;
  cmps(c,0,(int32_t)c->r[3],-4); // 800811B0
  if (crb(c,2)) { goto L_8008121C; } // 800811B4
  if (!crb(c,0)) { goto L_800811E0; } // 800811B8
  cmps(c,0,(int32_t)c->r[3],-15); // 800811BC
  if (crb(c,2)) { goto L_8008120C; } // 800811C0
  if (!crb(c,0)) { goto L_800811D4; } // 800811C4
  cmps(c,0,(int32_t)c->r[3],-64); // 800811C8
  if (crb(c,2)) { goto L_80081254; } // 800811CC
  goto L_8008126C; // 800811D0
L_800811D4:;
  cmps(c,0,(int32_t)c->r[3],-5); // 800811D4
  if (!crb(c,0)) { goto L_8008120C; } // 800811D8
  goto L_8008126C; // 800811DC
L_800811E0:;
  cmps(c,0,(int32_t)c->r[3],1); // 800811E0
  if (crb(c,2)) { goto L_8008126C; } // 800811E4
  if (!crb(c,0)) { goto L_800811FC; } // 800811E8
  cmps(c,0,(int32_t)c->r[3],-1); // 800811EC
  if (crb(c,2)) { goto L_8008126C; } // 800811F0
  if (!crb(c,0)) { goto L_8008126C; } // 800811F4
  goto L_80081238; // 800811F8
L_800811FC:;
  cmps(c,0,(int32_t)c->r[3],3); // 800811FC
  if (!crb(c,0)) { goto L_8008126C; } // 80081200
  goto L_8008120C; // 80081204
  goto L_8008126C; // 80081208
L_8008120C:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 8008120C
  c->r[0]=c->r[0]|0x00020000u; // 80081210
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081214
  goto L_8008126C; // 80081218
L_8008121C:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 8008121C
  c->r[4]=c->r[3]|c->r[3]; // 80081220
  c->lr=0x80081228u; f_800091B0(c); // 80081224
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081228
  c->r[0]=c->r[0]|0x00010000u; // 8008122C
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081230
  goto L_8008126C; // 80081234
L_80081238:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 80081238
  c->r[4]=c->r[3]|c->r[3]; // 8008123C
  c->lr=0x80081244u; f_800091B0(c); // 80081240
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081244
  c->r[0]=c->r[0]|0x00100000u; // 80081248
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 8008124C
  goto L_8008126C; // 80081250
L_80081254:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 80081254
  c->r[4]=c->r[3]|c->r[3]; // 80081258
  c->lr=0x80081260u; f_800091B0(c); // 8008125C
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081260
  c->r[0]=c->r[0]|0x00200000u; // 80081264
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081268
L_8008126C:;
  c->lr=0x80081270u; f_80080D70(c); // 8008126C
L_80081270:;
  cmps(c,0,(int32_t)c->r[23],0); // 80081270
  if (crb(c,2)) { goto L_80081374; } // 80081274
  c->lr=0x8008127Cu; f_80080640(c); // 80081278
  cmps(c,0,(int32_t)c->r[3],0); // 8008127C
  if (crb(c,2)) { goto L_8008128C; } // 80081280
  c->r[17]=c->r[17]|0x00000001u; // 80081284
  goto L_80081374; // 80081288
L_8008128C:;
  c->r[0]=R32(c->r[13]+0xFFFFB87Cu); // 8008128C
  cmps(c,0,(int32_t)c->r[0],0); // 80081290
  if (crb(c,2)) { goto L_800812B0; } // 80081294
  cmps(c,6,(int32_t)c->r[0],-15); // 80081298
  if (crb(c,26)) { goto L_800812B0; } // 8008129C
  cmps(c,1,(int32_t)c->r[0],-5); // 800812A0
  if (crb(c,6)) { goto L_800812B0; } // 800812A4
  cmps(c,0,(int32_t)c->r[0],2); // 800812A8
  if (!crb(c,2)) { goto L_800812BC; } // 800812AC
L_800812B0:;
  c->r[17]=c->r[17]|0x00000001u; // 800812B0
  c->r[16]=0u+0x00000001u; // 800812B4
  goto L_80081374; // 800812B8
L_800812BC:;
  cmps(c,0,(int32_t)c->r[0],-4); // 800812BC
  if (crb(c,2)) { goto L_80081320; } // 800812C0
  if (!crb(c,0)) { goto L_800812E4; } // 800812C4
  if (crb(c,26)) { goto L_80081310; } // 800812C8
  if (!crb(c,24)) { goto L_800812DC; } // 800812CC
  cmps(c,0,(int32_t)c->r[0],-64); // 800812D0
  if (crb(c,2)) { goto L_80081358; } // 800812D4
  goto L_80081370; // 800812D8
L_800812DC:;
  if (!crb(c,4)) { goto L_80081310; } // 800812DC
  goto L_80081370; // 800812E0
L_800812E4:;
  cmps(c,0,(int32_t)c->r[0],1); // 800812E4
  if (crb(c,2)) { goto L_80081370; } // 800812E8
  if (!crb(c,0)) { goto L_80081300; } // 800812EC
  cmps(c,0,(int32_t)c->r[0],-1); // 800812F0
  if (crb(c,2)) { goto L_80081370; } // 800812F4
  if (!crb(c,0)) { goto L_80081370; } // 800812F8
  goto L_8008133C; // 800812FC
L_80081300:;
  cmps(c,0,(int32_t)c->r[0],3); // 80081300
  if (!crb(c,0)) { goto L_80081370; } // 80081304
  goto L_80081310; // 80081308
  goto L_80081370; // 8008130C
L_80081310:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081310
  c->r[0]=c->r[0]|0x00020000u; // 80081314
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081318
  goto L_80081370; // 8008131C
L_80081320:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 80081320
  c->r[4]=c->r[3]|c->r[3]; // 80081324
  c->lr=0x8008132Cu; f_800091B0(c); // 80081328
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 8008132C
  c->r[0]=c->r[0]|0x00010000u; // 80081330
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081334
  goto L_80081370; // 80081338
L_8008133C:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 8008133C
  c->r[4]=c->r[3]|c->r[3]; // 80081340
  c->lr=0x80081348u; f_800091B0(c); // 80081344
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081348
  c->r[0]=c->r[0]|0x00100000u; // 8008134C
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081350
  goto L_80081370; // 80081354
L_80081358:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 80081358
  c->r[4]=c->r[3]|c->r[3]; // 8008135C
  c->lr=0x80081364u; f_800091B0(c); // 80081360
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081364
  c->r[0]=c->r[0]|0x00200000u; // 80081368
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 8008136C
L_80081370:;
  c->lr=0x80081374u; f_80080D70(c); // 80081370
L_80081374:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081374
  cmps(c,0,(int32_t)c->r[0],0); // 80081378
  if (!crb(c,2)) { goto L_80081384; } // 8008137C
  W8(c->r[13]+0xFFFFB879u,c->r[26]); // 80081380
L_80081384:;
  c->r[3]=c->r[24]+0x00000000u; // 80081384
  c->lr=0x8008138Cu; f_80082070(c); // 80081388
  cmps(c,0,(int32_t)c->r[3],0); // 8008138C
  if (!crb(c,2)) { goto L_8008139C; } // 80081390
  c->r[22]=0u+0x00000001u; // 80081394
  goto L_8008146C; // 80081398
L_8008139C:;
  cmps(c,0,(int32_t)c->r[3],-12); // 8008139C
  if (!crb(c,2)) { goto L_800813AC; } // 800813A0
  c->r[22]=0u+0x00000000u; // 800813A4
  goto L_8008146C; // 800813A8
L_800813AC:;
  cmps(c,0,(int32_t)c->r[3],-4); // 800813AC
  if (crb(c,2)) { goto L_80081418; } // 800813B0
  if (!crb(c,0)) { goto L_800813DC; } // 800813B4
  cmps(c,0,(int32_t)c->r[3],-15); // 800813B8
  if (crb(c,2)) { goto L_80081408; } // 800813BC
  if (!crb(c,0)) { goto L_800813D0; } // 800813C0
  cmps(c,0,(int32_t)c->r[3],-64); // 800813C4
  if (crb(c,2)) { goto L_80081450; } // 800813C8
  goto L_80081468; // 800813CC
L_800813D0:;
  cmps(c,0,(int32_t)c->r[3],-5); // 800813D0
  if (!crb(c,0)) { goto L_80081408; } // 800813D4
  goto L_80081468; // 800813D8
L_800813DC:;
  cmps(c,0,(int32_t)c->r[3],1); // 800813DC
  if (crb(c,2)) { goto L_80081468; } // 800813E0
  if (!crb(c,0)) { goto L_800813F8; } // 800813E4
  cmps(c,0,(int32_t)c->r[3],-1); // 800813E8
  if (crb(c,2)) { goto L_80081468; } // 800813EC
  if (!crb(c,0)) { goto L_80081468; } // 800813F0
  goto L_80081434; // 800813F4
L_800813F8:;
  cmps(c,0,(int32_t)c->r[3],3); // 800813F8
  if (!crb(c,0)) { goto L_80081468; } // 800813FC
  goto L_80081408; // 80081400
  goto L_80081468; // 80081404
L_80081408:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081408
  c->r[0]=c->r[0]|0x00020000u; // 8008140C
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081410
  goto L_80081468; // 80081414
L_80081418:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 80081418
  c->r[4]=c->r[3]|c->r[3]; // 8008141C
  c->lr=0x80081424u; f_800091B0(c); // 80081420
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081424
  c->r[0]=c->r[0]|0x00010000u; // 80081428
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 8008142C
  goto L_80081468; // 80081430
L_80081434:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 80081434
  c->r[4]=c->r[3]|c->r[3]; // 80081438
  c->lr=0x80081440u; f_800091B0(c); // 8008143C
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081440
  c->r[0]=c->r[0]|0x00100000u; // 80081444
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081448
  goto L_80081468; // 8008144C
L_80081450:;
  c->r[3]=c->r[27]+0xFFFFFFFFu; // 80081450
  c->r[4]=c->r[3]|c->r[3]; // 80081454
  c->lr=0x8008145Cu; f_800091B0(c); // 80081458
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 8008145C
  c->r[0]=c->r[0]|0x00200000u; // 80081460
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081464
L_80081468:;
  c->lr=0x8008146Cu; f_80080D70(c); // 80081468
L_8008146C:;
  cmps(c,0,(int32_t)c->r[22],0); // 8008146C
  if (crb(c,2)) { goto L_8008147C; } // 80081470
  c->r[0]=c->r[17]|0x00000002u; // 80081474
  c->r[17]=rotl(c->r[0],0)&0x000000FFu; // 80081478
L_8008147C:;
  c->r[0]=rotl(c->r[17],0)&0x000000FFu; // 8008147C
  cmpu(c,0,c->r[0],0x00000003u); // 80081480
  if (crb(c,2)) { goto L_800814F8; } // 80081484
  c->r[0]=rotl(c->r[17],0)&0x00000001u; cr0(c,c->r[0]); // 80081488
  W32(c->r[13]+0xFFFFB890u,c->r[28]); // 8008148C
  if (!crb(c,2)) { goto L_80081498; } // 80081490
  c->r[17]=c->r[17]&0x000000FDu; cr0(c,c->r[17]); // 80081494
L_80081498:;
  c->r[3]=rotl(c->r[17],0)&0x000000FFu; // 80081498
  c->lr=0x800814A0u; f_80080290(c); // 8008149C
  c->r[19]=c->r[3]|c->r[3]; // 800814A0
  c->r[3]=c->r[24]+0x00000720u; // 800814A4
  c->r[4]=c->r[19]|c->r[19]; // 800814A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800814AC
  c->lr=0x800814B4u; f_80121B20(c); // 800814B0
  c->r[0]=rotl(c->r[19],0)&0x00000100u; cr0(c,c->r[0]); // 800814B4
  if (crb(c,2)) { goto L_800814CC; } // 800814B8
  c->r[3]=c->r[24]+0x000006C0u; // 800814BC
  c->lr=0x800814C4u; f_8007D050(c); // 800814C0
  c->r[19]=0u+0x0000000Cu; // 800814C4
  goto L_800817A0; // 800814C8
L_800814CC:;
  c->r[0]=rotl(c->r[19],0)&0x00000200u; cr0(c,c->r[0]); // 800814CC
  if (crb(c,2)) { goto L_800814E4; } // 800814D0
  c->r[3]=c->r[24]+0x000006CCu; // 800814D4
  c->lr=0x800814DCu; f_8007D050(c); // 800814D8
  c->r[19]=0u+0x0000000Du; // 800814DC
  goto L_800817A0; // 800814E0
L_800814E4:;
  c->r[3]=c->r[13]+0xFFFF86F8u; // 800814E4
  c->lr=0x800814ECu; f_8007D050(c); // 800814E8
  W32(c->r[13]+0xFFFFB2C4u,c->r[28]); // 800814EC
  c->r[19]=0u+0x00000006u; // 800814F0
  goto L_800817A0; // 800814F4
L_800814F8:;
  cmps(c,0,(int32_t)c->r[16],0); // 800814F8
  if (crb(c,2)) { goto L_80081510; } // 800814FC
  c->r[3]=0u+0x00000003u; // 80081500
  c->lr=0x80081508u; f_8007FD60(c); // 80081504
  c->r[19]=0u+0x00000008u; // 80081508
  goto L_800817A0; // 8008150C
L_80081510:;
  c->r[19]=0u+0x00000009u; // 80081510
  goto L_800817A0; // 80081514
L_80081518:;
  c->r[0]=rotl(c->r[17],0)&0x000000FFu; // 80081518
  cmpu(c,0,c->r[0],0x00000002u); // 8008151C
  if (!crb(c,2)) { goto L_80081534; } // 80081520
  c->r[3]=0u+0x00000003u; // 80081524
  c->lr=0x8008152Cu; f_8007FD60(c); // 80081528
  c->r[19]=0u+0x00000008u; // 8008152C
  goto L_800817A0; // 80081530
L_80081534:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081534
  cmps(c,0,(int32_t)c->r[0],0); // 80081538
  if (!crb(c,2)) { goto L_80081544; } // 8008153C
  W8(c->r[13]+0xFFFFB879u,c->r[26]); // 80081540
L_80081544:;
  c->lr=0x80081548u; f_800809C0(c); // 80081544
  c->r[3]=0u+0x00000001u; // 80081548
  c->lr=0x80081550u; f_8007FD60(c); // 8008154C
  c->r[19]=0u+0x00000007u; // 80081550
  goto L_800817A0; // 80081554
L_80081558:;
  c->lr=0x8008155Cu; f_8007FE10(c); // 80081558
  cmps(c,0,(int32_t)c->r[3],0); // 8008155C
  if (crb(c,2)) { goto L_800817A0; } // 80081560
  c->r[0]=rotl(c->r[17],0)&0x000000FFu; // 80081564
  cmpu(c,0,c->r[0],0x00000001u); // 80081568
  if (!crb(c,2)) { goto L_80081578; } // 8008156C
  c->r[19]=0u+0x00000011u; // 80081570
  goto L_800817A0; // 80081574
L_80081578:;
  c->r[3]=0u+0x00000003u; // 80081578
  c->lr=0x80081580u; f_8007FD60(c); // 8008157C
  c->r[19]=0u+0x00000008u; // 80081580
  goto L_800817A0; // 80081584
L_80081588:;
  c->lr=0x8008158Cu; f_8007FE10(c); // 80081588
  cmps(c,0,(int32_t)c->r[3],0); // 8008158C
  if (crb(c,2)) { goto L_800817A0; } // 80081590
  c->r[0]=rotl(c->r[17],0)&0x000000FFu; cr0(c,c->r[0]); // 80081594
  if (!crb(c,2)) { goto L_800815A4; } // 80081598
  c->r[19]=0u+0x00000011u; // 8008159C
  goto L_800817A0; // 800815A0
L_800815A4:;
  c->r[19]=0u+0x00000009u; // 800815A4
  goto L_800817A0; // 800815A8
L_800815AC:;
  c->r[3]=c->r[13]+0xFFFF8700u; // 800815AC
  c->lr=0x800815B4u; f_8007D050(c); // 800815B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 800815B4
  W32(c->r[13]+0xFFFFB2C4u,c->r[30]); // 800815B8
  cmps(c,0,(int32_t)c->r[0],0); // 800815BC
  if (!crb(c,2)) { goto L_800815C8; } // 800815C0
  W8(c->r[13]+0xFFFFB879u,c->r[30]); // 800815C4
L_800815C8:;
  c->lr=0x800815CCu; f_800809C0(c); // 800815C8
  c->r[3]=0u+0x00000000u; // 800815CC
  c->lr=0x800815D4u; f_8007FD60(c); // 800815D0
  c->r[19]=0u+0x0000000Au; // 800815D4
  goto L_800817A0; // 800815D8
L_800815DC:;
  c->lr=0x800815E0u; f_8007FE10(c); // 800815DC
  cmps(c,0,(int32_t)c->r[3],0); // 800815E0
  if (crb(c,2)) { goto L_800817A0; } // 800815E4
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 800815E8
  cmps(c,0,(int32_t)c->r[0],0); // 800815EC
  if (!crb(c,2)) { goto L_800815FC; } // 800815F0
  c->r[21]=R32(c->r[13]+0xFFFFB874u); // 800815F4
  goto L_80081628; // 800815F8
L_800815FC:;
  cmpu(c,0,c->r[0],0x00000002u); // 800815FC
  if (!crb(c,2)) { goto L_8008161C; } // 80081600
  c->r[0]=R8(c->r[13]+0xFFFFB878u); // 80081604
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081608
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 8008160C
  c->r[3]=c->r[0]+c->r[3]; // 80081610
  c->r[21]=c->r[3]+0x00000020u; // 80081614
  goto L_80081628; // 80081618
L_8008161C:;
  cmpu(c,0,c->r[0],0x00000001u); // 8008161C
  if (!crb(c,2)) { goto L_80081628; } // 80081620
  c->r[21]=R32(c->r[13]+0xFFFFB874u); // 80081624
L_80081628:;
  c->r[4]=c->r[21]|c->r[21]; // 80081628
  c->r[3]=c->r[29]+0x00000E58u; // 8008162C
  c->r[5]=0u+0x00000020u; // 80081630
  c->lr=0x80081638u; f_800043C4(c); // 80081634
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80081638
  cmpu(c,0,c->r[0],0x00000002u); // 8008163C
  if (crb(c,1)) { goto L_80081650; } // 80081640
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081644
  c->lr=0x8008164Cu; f_8000DEF0(c); // 80081648
  W32(c->r[13]+0xFFFFB874u,c->r[30]); // 8008164C
L_80081650:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081650
  cmps(c,0,(int32_t)c->r[0],0); // 80081654
  if (!crb(c,2)) { goto L_80081660; } // 80081658
  W8(c->r[13]+0xFFFFB879u,c->r[26]); // 8008165C
L_80081660:;
  c->lr=0x80081664u; f_800809C0(c); // 80081660
  c->r[3]=0u+0x00000000u; // 80081664
  c->lr=0x8008166Cu; f_8007FD60(c); // 80081668
  c->r[19]=0u+0x0000000Bu; // 8008166C
  goto L_800817A0; // 80081670
L_80081674:;
  c->lr=0x80081678u; f_8007FE10(c); // 80081674
  cmps(c,0,(int32_t)c->r[3],0); // 80081678
  if (crb(c,2)) { goto L_800817A0; } // 8008167C
  c->r[19]=0u+0x00000000u; // 80081680
L_80081684:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081684
  c->r[4]=rotl(c->r[19],0)&0x000000FFu; // 80081688
  cmps(c,0,(int32_t)c->r[0],0); // 8008168C
  if (!crb(c,2)) { goto L_800816C0; } // 80081690
  c->r[3]=R8(c->r[13]+0xFFFFB879u); // 80081694
  c->r[0]=c->r[3]+0x000000FFu; // 80081698
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8008169C
  cmpu(c,0,c->r[0],0x00000001u); // 800816A0
  if (crb(c,1)) { goto L_800816BC; } // 800816A4
  cmpu(c,0,c->r[4],0x00000004u); // 800816A8
  if (crb(c,0)) { goto L_800816B4; } // 800816AC
  c->r[4]=0u+0x00000000u; // 800816B0
L_800816B4:;
  W8(c->r[13]+0xFFFFB878u,c->r[4]); // 800816B4
  goto L_800816C0; // 800816B8
L_800816BC:;
  W8(c->r[13]+0xFFFFB878u,c->r[30]); // 800816BC
L_800816C0:;
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 800816C0
  cmps(c,0,(int32_t)c->r[0],0); // 800816C4
  if (!crb(c,2)) { goto L_800816D4; } // 800816C8
  c->r[20]=R32(c->r[13]+0xFFFFB874u); // 800816CC
  goto L_80081700; // 800816D0
L_800816D4:;
  cmpu(c,0,c->r[0],0x00000002u); // 800816D4
  if (!crb(c,2)) { goto L_800816F4; } // 800816D8
  c->r[0]=R8(c->r[13]+0xFFFFB878u); // 800816DC
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 800816E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 800816E4
  c->r[3]=c->r[0]+c->r[3]; // 800816E8
  c->r[20]=c->r[3]+0x00000020u; // 800816EC
  goto L_80081700; // 800816F0
L_800816F4:;
  cmpu(c,0,c->r[0],0x00000001u); // 800816F4
  if (!crb(c,2)) { goto L_80081700; } // 800816F8
  c->r[20]=R32(c->r[13]+0xFFFFB874u); // 800816FC
L_80081700:;
  c->r[0]=rotl(c->r[19],0)&0x0000FFFFu; // 80081700
  c->r[4]=c->r[20]|c->r[20]; // 80081704
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80081708
  c->r[5]=0u+0x000006E8u; // 8008170C
  c->r[3]=c->r[31]+c->r[0]; // 80081710
  c->lr=0x80081718u; f_800043C4(c); // 80081714
  c->r[19]=c->r[19]+0x00000001u; // 80081718
  cmpu(c,0,c->r[19],0x00000004u); // 8008171C
  if (crb(c,0)) { IRQCHK(c); goto L_80081684; } // 80081720
  c->r[19]=0u+0x00000011u; // 80081724
  goto L_800817A0; // 80081728
L_8008172C:;
  c->lr=0x80081730u; f_8007D160(c); // 8008172C
  cmps(c,0,(int32_t)c->r[3],0); // 80081730
  if (crb(c,2)) { goto L_800817A0; } // 80081734
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80081738
  cmpu(c,0,c->r[0],0x00000002u); // 8008173C
  if (crb(c,1)) { goto L_80081754; } // 80081740
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081744
  c->lr=0x8008174Cu; f_8000DEF0(c); // 80081748
  c->r[0]=0u+0x00000000u; // 8008174C
  W32(c->r[13]+0xFFFFB874u,c->r[0]); // 80081750
L_80081754:;
  c->r[3]=0u+0x00000001u; // 80081754
  c->lr=0x8008175Cu; f_8013A740(c); // 80081758
  c->lr=0x80081760u; f_8013A5A0(c); // 8008175C
  c->lr=0x80081764u; f_801395E0(c); // 80081760
  c->lr=0x80081768u; f_800362C0(c); // 80081764
  c->lr=0x8008176Cu; f_80007910(c); // 80081768
  c->lr=0x80081770u; f_80127A80(c); // 8008176C
  goto L_800817CC; // 80081770
L_80081774:;
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80081774
  c->r[3]=R32(c->r[13]+0xFFFFB890u); // 80081778
  cmpu(c,0,c->r[0],0x00000002u); // 8008177C
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFEu; // 80081780
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081784
  if (crb(c,1)) { goto L_80081798; } // 80081788
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 8008178C
  c->lr=0x80081794u; f_8000DEF0(c); // 80081790
  W32(c->r[13]+0xFFFFB874u,c->r[30]); // 80081794
L_80081798:;
  c->lr=0x8008179Cu; f_8007D170(c); // 80081798
  c->r[18]=0u+0x00000001u; // 8008179C
L_800817A0:;
  cmps(c,0,(int32_t)c->r[18],0); // 800817A0
  if (!crb(c,2)) { goto L_800817B0; } // 800817A4
  c->lr=0x800817ACu; f_8000FF80(c); // 800817A8
  IRQCHK(c); goto L_80081158; // 800817AC
L_800817B0:;
  c->r[0]=0u+0x00000000u; // 800817B0
  W32(c->r[13]+0xFFFFB2C4u,c->r[0]); // 800817B4
  c->r[3]=0u+0x00000000u; // 800817B8
  c->lr=0x800817C0u; f_8005CF10(c); // 800817BC
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 800817C0
  c->r[0]=c->r[0]|0x00000002u; // 800817C4
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 800817C8
L_800817CC:;
  c->r[11]=c->r[1]+0x00000050u; // 800817CC
  c->lr=0x800817D4u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800817D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800817D4
  c->lr=c->r[0]; // 800817D8
  c->r[1]=c->r[1]+0x00000050u; // 800817DC
  return; // 800817E0
}

// fn_800817F0
void f_800817F0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800817F0
  W16(c->r[13]+0xFFFFB88Au,c->r[0]); // 800817F4
  W16(c->r[13]+0xFFFFB870u,c->r[0]); // 800817F8
  return; // 800817FC
}

// fn_80081800
void f_80081800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081800
  c->r[0]=c->lr; // 80081804
  c->r[6]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 80081808
  c->r[5]=c->r[4]+0x00000001u; // 8008180C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80081810
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80081814
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80081818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008181C
  cmpu(c,0,c->r[0],0x00000001u); // 80081820
  c->r[0]=c->r[6]|c->r[5]; // 80081824
  c->r[31]=c->r[4]|c->r[4]; // 80081828
  W32(c->r[1]+0x00000008u,c->r[30]); // 8008182C
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 80081830
  if (crb(c,1)) { goto L_80081938; } // 80081834
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB870u); // 80081838
  cmps(c,0,(int32_t)c->r[0],0); // 8008183C
  if (crb(c,2)) { goto L_80081850; } // 80081840
  cmps(c,0,(int32_t)c->r[0],1); // 80081844
  if (crb(c,2)) { goto L_800818F8; } // 80081848
  goto L_80081930; // 8008184C
L_80081850:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081850
  cmps(c,0,(int32_t)c->r[0],0); // 80081854
  if (!crb(c,2)) { goto L_80081860; } // 80081858
  W8(c->r[13]+0xFFFFB879u,c->r[30]); // 8008185C
L_80081860:;
  c->lr=0x80081864u; f_800809C0(c); // 80081860
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081864
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 80081868
  cmps(c,0,(int32_t)c->r[0],0); // 8008186C
  if (!crb(c,2)) { goto L_800818A4; } // 80081870
  c->r[3]=R8(c->r[13]+0xFFFFB879u); // 80081874
  c->r[0]=c->r[3]+0x000000FFu; // 80081878
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8008187C
  cmpu(c,0,c->r[0],0x00000001u); // 80081880
  if (crb(c,1)) { goto L_8008189C; } // 80081884
  cmpu(c,0,c->r[4],0x00000004u); // 80081888
  if (crb(c,0)) { goto L_80081894; } // 8008188C
  c->r[4]=0u+0x00000000u; // 80081890
L_80081894:;
  W8(c->r[13]+0xFFFFB878u,c->r[4]); // 80081894
  goto L_800818A4; // 80081898
L_8008189C:;
  c->r[0]=0u+0x00000000u; // 8008189C
  W8(c->r[13]+0xFFFFB878u,c->r[0]); // 800818A0
L_800818A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800818A4
  if (!crb(c,2)) { goto L_800818C0; } // 800818A8
  c->r[3]=0u+0x80410000u; // 800818AC
  c->r[4]=0u+0x00000020u; // 800818B0
  c->r[3]=c->r[3]+0x00000E58u; // 800818B4
  c->lr=0x800818BCu; f_80080AB0(c); // 800818B8
  goto L_800818E0; // 800818BC
L_800818C0:;
  cmpu(c,0,c->r[30],0x00000001u); // 800818C0
  if (!crb(c,2)) { goto L_800818E0; } // 800818C4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)1768); // 800818C8
  c->r[3]=0u+0x80410000u; // 800818CC
  c->r[4]=0u+0x000006E8u; // 800818D0
  c->r[3]=c->r[3]+0x00000EE0u; // 800818D4
  c->r[3]=c->r[3]+c->r[0]; // 800818D8
  c->lr=0x800818E0u; f_80080AB0(c); // 800818DC
L_800818E0:;
  c->r[3]=0u+0x00000001u; // 800818E0
  c->lr=0x800818E8u; f_8007FD60(c); // 800818E4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB870u); // 800818E8
  c->r[0]=c->r[3]+0x00000001u; // 800818EC
  W16(c->r[13]+0xFFFFB870u,c->r[0]); // 800818F0
  goto L_80081930; // 800818F4
L_800818F8:;
  c->lr=0x800818FCu; f_8007FE10(c); // 800818F8
  cmps(c,0,(int32_t)c->r[3],0); // 800818FC
  if (crb(c,2)) { goto L_80081930; } // 80081900
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80081904
  cmpu(c,0,c->r[0],0x00000002u); // 80081908
  if (crb(c,1)) { goto L_80081920; } // 8008190C
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081910
  c->lr=0x80081918u; f_8000DEF0(c); // 80081914
  c->r[0]=0u+0x00000000u; // 80081918
  W32(c->r[13]+0xFFFFB874u,c->r[0]); // 8008191C
L_80081920:;
  c->r[0]=0u+0x00000000u; // 80081920
  W16(c->r[13]+0xFFFFB870u,c->r[0]); // 80081924
  c->r[3]=0u+0x00000001u; // 80081928
  goto L_80081BD8; // 8008192C
L_80081930:;
  c->r[3]=0u+0x00000000u; // 80081930
  goto L_80081BD8; // 80081934
L_80081938:;
  cmps(c,0,(int32_t)c->r[3],0); // 80081938
  if (!crb(c,2)) { goto L_80081BD8; } // 8008193C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB870u); // 80081940
  cmps(c,0,(int32_t)c->r[0],0); // 80081944
  if (crb(c,2)) { goto L_80081960; } // 80081948
  cmps(c,0,(int32_t)c->r[0],1); // 8008194C
  if (crb(c,2)) { goto L_80081AD4; } // 80081950
  cmps(c,0,(int32_t)c->r[0],99); // 80081954
  if (crb(c,2)) { goto L_80081BA8; } // 80081958
  goto L_80081BD4; // 8008195C
L_80081960:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081960
  cmps(c,0,(int32_t)c->r[0],0); // 80081964
  if (!crb(c,2)) { goto L_80081970; } // 80081968
  W8(c->r[13]+0xFFFFB879u,c->r[30]); // 8008196C
L_80081970:;
  c->lr=0x80081974u; f_800809C0(c); // 80081970
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFB88Au); // 80081974
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 80081978
  cmps(c,0,(int32_t)c->r[0],0); // 8008197C
  if (!crb(c,2)) { goto L_800819B4; } // 80081980
  c->r[3]=R8(c->r[13]+0xFFFFB879u); // 80081984
  c->r[0]=c->r[3]+0x000000FFu; // 80081988
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8008198C
  cmpu(c,0,c->r[0],0x00000001u); // 80081990
  if (crb(c,1)) { goto L_800819AC; } // 80081994
  cmpu(c,0,c->r[4],0x00000004u); // 80081998
  if (crb(c,0)) { goto L_800819A4; } // 8008199C
  c->r[4]=0u+0x00000000u; // 800819A0
L_800819A4:;
  W8(c->r[13]+0xFFFFB878u,c->r[4]); // 800819A4
  goto L_800819B4; // 800819A8
L_800819AC:;
  c->r[0]=0u+0x00000000u; // 800819AC
  W8(c->r[13]+0xFFFFB878u,c->r[0]); // 800819B0
L_800819B4:;
  c->r[3]=0u+0x80360000u; // 800819B4
  c->r[3]=c->r[3]+0x00000368u; // 800819B8
  c->lr=0x800819C0u; f_80082070(c); // 800819BC
  cmps(c,0,(int32_t)c->r[3],0); // 800819C0
  if (!crb(c,2)) { goto L_800819D0; } // 800819C4
  c->r[31]=0u+0x00000001u; // 800819C8
  goto L_80081AAC; // 800819CC
L_800819D0:;
  cmps(c,0,(int32_t)c->r[3],-12); // 800819D0
  if (!crb(c,2)) { goto L_800819E0; } // 800819D4
  c->r[31]=0u+0x00000000u; // 800819D8
  goto L_80081AAC; // 800819DC
L_800819E0:;
  cmps(c,0,(int32_t)c->r[3],-4); // 800819E0
  if (crb(c,2)) { goto L_80081A4C; } // 800819E4
  if (!crb(c,0)) { goto L_80081A10; } // 800819E8
  cmps(c,0,(int32_t)c->r[3],-15); // 800819EC
  if (crb(c,2)) { goto L_80081A3C; } // 800819F0
  if (!crb(c,0)) { goto L_80081A04; } // 800819F4
  cmps(c,0,(int32_t)c->r[3],-64); // 800819F8
  if (crb(c,2)) { goto L_80081A8C; } // 800819FC
  goto L_80081AA8; // 80081A00
L_80081A04:;
  cmps(c,0,(int32_t)c->r[3],-5); // 80081A04
  if (!crb(c,0)) { goto L_80081A3C; } // 80081A08
  goto L_80081AA8; // 80081A0C
L_80081A10:;
  cmps(c,0,(int32_t)c->r[3],1); // 80081A10
  if (crb(c,2)) { goto L_80081AA8; } // 80081A14
  if (!crb(c,0)) { goto L_80081A2C; } // 80081A18
  cmps(c,0,(int32_t)c->r[3],-1); // 80081A1C
  if (crb(c,2)) { goto L_80081AA8; } // 80081A20
  if (!crb(c,0)) { goto L_80081AA8; } // 80081A24
  goto L_80081A6C; // 80081A28
L_80081A2C:;
  cmps(c,0,(int32_t)c->r[3],3); // 80081A2C
  if (!crb(c,0)) { goto L_80081AA8; } // 80081A30
  goto L_80081A3C; // 80081A34
  goto L_80081AA8; // 80081A38
L_80081A3C:;
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081A3C
  c->r[0]=c->r[0]|0x00020000u; // 80081A40
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081A44
  goto L_80081AA8; // 80081A48
L_80081A4C:;
  c->r[3]=0u+0x00010000u; // 80081A4C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80081A50
  c->r[4]=c->r[3]|c->r[3]; // 80081A54
  c->lr=0x80081A5Cu; f_800091B0(c); // 80081A58
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081A5C
  c->r[0]=c->r[0]|0x00010000u; // 80081A60
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081A64
  goto L_80081AA8; // 80081A68
L_80081A6C:;
  c->r[3]=0u+0x00010000u; // 80081A6C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80081A70
  c->r[4]=c->r[3]|c->r[3]; // 80081A74
  c->lr=0x80081A7Cu; f_800091B0(c); // 80081A78
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081A7C
  c->r[0]=c->r[0]|0x00100000u; // 80081A80
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081A84
  goto L_80081AA8; // 80081A88
L_80081A8C:;
  c->r[3]=0u+0x00010000u; // 80081A8C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80081A90
  c->r[4]=c->r[3]|c->r[3]; // 80081A94
  c->lr=0x80081A9Cu; f_800091B0(c); // 80081A98
  c->r[0]=R32(c->r[13]+0xFFFFB890u); // 80081A9C
  c->r[0]=c->r[0]|0x00200000u; // 80081AA0
  W32(c->r[13]+0xFFFFB890u,c->r[0]); // 80081AA4
L_80081AA8:;
  c->lr=0x80081AACu; f_80080D70(c); // 80081AA8
L_80081AAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 80081AAC
  if (crb(c,2)) { goto L_80081AC8; } // 80081AB0
  c->r[3]=0u+0x00000000u; // 80081AB4
  c->lr=0x80081ABCu; f_8007FD60(c); // 80081AB8
  c->r[0]=0u+0x00000001u; // 80081ABC
  W16(c->r[13]+0xFFFFB870u,c->r[0]); // 80081AC0
  goto L_80081BD4; // 80081AC4
L_80081AC8:;
  c->r[0]=0u+0x00000063u; // 80081AC8
  W16(c->r[13]+0xFFFFB870u,c->r[0]); // 80081ACC
  goto L_80081BD4; // 80081AD0
L_80081AD4:;
  c->lr=0x80081AD8u; f_8007FE10(c); // 80081AD4
  cmps(c,0,(int32_t)c->r[3],0); // 80081AD8
  if (crb(c,2)) { goto L_80081BD4; } // 80081ADC
  cmps(c,0,(int32_t)c->r[30],0); // 80081AE0
  if (!crb(c,2)) { goto L_80081B3C; } // 80081AE4
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80081AE8
  cmps(c,0,(int32_t)c->r[0],0); // 80081AEC
  if (!crb(c,2)) { goto L_80081AFC; } // 80081AF0
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 80081AF4
  goto L_80081B28; // 80081AF8
L_80081AFC:;
  cmpu(c,0,c->r[0],0x00000002u); // 80081AFC
  if (!crb(c,2)) { goto L_80081B1C; } // 80081B00
  c->r[0]=R8(c->r[13]+0xFFFFB878u); // 80081B04
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081B08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80081B0C
  c->r[3]=c->r[0]+c->r[3]; // 80081B10
  c->r[4]=c->r[3]+0x00000020u; // 80081B14
  goto L_80081B28; // 80081B18
L_80081B1C:;
  cmpu(c,0,c->r[0],0x00000001u); // 80081B1C
  if (!crb(c,2)) { goto L_80081B28; } // 80081B20
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 80081B24
L_80081B28:;
  c->r[3]=0u+0x80410000u; // 80081B28
  c->r[5]=0u+0x00000020u; // 80081B2C
  c->r[3]=c->r[3]+0x00000E58u; // 80081B30
  c->lr=0x80081B38u; f_800043C4(c); // 80081B34
  goto L_80081B9C; // 80081B38
L_80081B3C:;
  cmpu(c,0,c->r[30],0x00000001u); // 80081B3C
  if (!crb(c,2)) { goto L_80081B9C; } // 80081B40
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80081B44
  cmps(c,0,(int32_t)c->r[0],0); // 80081B48
  if (!crb(c,2)) { goto L_80081B58; } // 80081B4C
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 80081B50
  goto L_80081B84; // 80081B54
L_80081B58:;
  cmpu(c,0,c->r[0],0x00000002u); // 80081B58
  if (!crb(c,2)) { goto L_80081B78; } // 80081B5C
  c->r[0]=R8(c->r[13]+0xFFFFB878u); // 80081B60
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081B64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80081B68
  c->r[3]=c->r[0]+c->r[3]; // 80081B6C
  c->r[4]=c->r[3]+0x00000020u; // 80081B70
  goto L_80081B84; // 80081B74
L_80081B78:;
  cmpu(c,0,c->r[0],0x00000001u); // 80081B78
  if (!crb(c,2)) { goto L_80081B84; } // 80081B7C
  c->r[4]=R32(c->r[13]+0xFFFFB874u); // 80081B80
L_80081B84:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)1768); // 80081B84
  c->r[3]=0u+0x80410000u; // 80081B88
  c->r[5]=0u+0x000006E8u; // 80081B8C
  c->r[3]=c->r[3]+0x00000EE0u; // 80081B90
  c->r[3]=c->r[3]+c->r[0]; // 80081B94
  c->lr=0x80081B9Cu; f_800043C4(c); // 80081B98
L_80081B9C:;
  c->r[0]=0u+0x00000063u; // 80081B9C
  W16(c->r[13]+0xFFFFB870u,c->r[0]); // 80081BA0
  goto L_80081BD4; // 80081BA4
L_80081BA8:;
  c->r[0]=R8(c->r[13]+0xFFFFB879u); // 80081BA8
  cmpu(c,0,c->r[0],0x00000002u); // 80081BAC
  if (crb(c,1)) { goto L_80081BC4; } // 80081BB0
  c->r[3]=R32(c->r[13]+0xFFFFB874u); // 80081BB4
  c->lr=0x80081BBCu; f_8000DEF0(c); // 80081BB8
  c->r[0]=0u+0x00000000u; // 80081BBC
  W32(c->r[13]+0xFFFFB874u,c->r[0]); // 80081BC0
L_80081BC4:;
  c->r[0]=0u+0x00000000u; // 80081BC4
  W16(c->r[13]+0xFFFFB870u,c->r[0]); // 80081BC8
  c->r[3]=0u+0x00000001u; // 80081BCC
  goto L_80081BD8; // 80081BD0
L_80081BD4:;
  c->r[3]=0u+0x00000000u; // 80081BD4
L_80081BD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80081BD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80081BDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80081BE0
  c->lr=c->r[0]; // 80081BE4
  c->r[1]=c->r[1]+0x00000010u; // 80081BE8
  return; // 80081BEC
}

// fn_80081BF0
void f_80081BF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081BF0
  c->r[0]=c->lr; // 80081BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081BF8
  c->r[11]=c->r[1]+0x00000020u; // 80081BFC
  c->lr=0x80081C04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80081C00
  c->r[31]=0u+0x80410000u; // 80081C04
  c->r[27]=c->r[4]|c->r[4]; // 80081C08
  c->r[4]=c->r[3]|c->r[3]; // 80081C0C
  c->r[28]=c->r[5]|c->r[5]; // 80081C10
  c->r[29]=c->r[6]|c->r[6]; // 80081C14
  c->r[30]=c->r[7]|c->r[7]; // 80081C18
  c->r[3]=c->r[31]+0x00000E78u; // 80081C1C
  c->lr=0x80081C24u; f_802EE808(c); // 80081C20
  c->r[7]=c->r[31]+0x00000E78u; // 80081C24
  c->r[0]=0u+0x00000001u; // 80081C28
  c->r[3]=0u+0x80080000u; // 80081C2C
  W32(c->r[7]+0x00000044u,c->r[27]); // 80081C30
  c->r[3]=c->r[3]+0x00001C80u; // 80081C34
  c->r[4]=0u+0x00000064u; // 80081C38
  W32(c->r[7]+0x00000048u,c->r[28]); // 80081C3C
  c->r[5]=0u+0x00002000u; // 80081C40
  c->r[6]=0u+0x00000000u; // 80081C44
  W8(c->r[7]+0x0000004Cu,c->r[29]); // 80081C48
  W32(c->r[7]+0x0000005Cu,c->r[0]); // 80081C4C
  W32(c->r[7]+0x00000060u,c->r[30]); // 80081C50
  c->lr=0x80081C58u; f_8000F7D0(c); // 80081C54
  c->r[4]=0u+0x0000000Cu; // 80081C58
  c->lr=0x80081C60u; f_80010190(c); // 80081C5C
  c->r[11]=c->r[1]+0x00000020u; // 80081C60
  c->lr=0x80081C68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80081C64
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081C68
  c->lr=c->r[0]; // 80081C6C
  c->r[1]=c->r[1]+0x00000020u; // 80081C70
  return; // 80081C74
}

// fn_80081C80
void f_80081C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081C80
  c->r[0]=c->lr; // 80081C84
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80081C88
  c->r[11]=c->r[1]+0x000000B0u; // 80081C8C
  c->lr=0x80081C94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80081C90
  c->r[27]=R32(c->r[13]+0xFFFFB2C4u); // 80081C94
  c->r[0]=0u+0x00000001u; // 80081C98
  W32(c->r[13]+0xFFFFB2C4u,c->r[0]); // 80081C9C
  c->lr=0x80081CA4u; f_8005CF20(c); // 80081CA0
  cmps(c,0,(int32_t)c->r[3],1); // 80081CA4
  c->r[29]=c->r[3]|c->r[3]; // 80081CA8
  if (crb(c,2)) { goto L_80081CB8; } // 80081CAC
  c->r[3]=0u+0x00000001u; // 80081CB0
  c->lr=0x80081CB8u; f_8005CF10(c); // 80081CB4
L_80081CB8:;
  c->r[3]=0u+0x00000001u; // 80081CB8
  c->r[4]=0u+0x00004000u; // 80081CBC
  c->lr=0x80081CC4u; f_8000DE90(c); // 80081CC0
  c->r[30]=0u+0x80410000u; // 80081CC4
  W32(c->r[13]+0xFFFFB898u,c->r[3]); // 80081CC8
  c->r[31]=c->r[30]+0x00000E78u; // 80081CCC
L_80081CD0:;
  c->r[3]=c->r[30]+0x00000E78u; // 80081CD0
  c->r[4]=c->r[1]+0x00000008u; // 80081CD4
  c->r[5]=0u+0x00000002u; // 80081CD8
  c->lr=0x80081CE0u; f_800821B0(c); // 80081CDC
  cmps(c,0,(int32_t)c->r[3],-12); // 80081CE0
  c->r[28]=c->r[3]|c->r[3]; // 80081CE4
  if (!crb(c,2)) { goto L_80081D18; } // 80081CE8
  c->r[3]=c->r[30]+0x00000E78u; // 80081CEC
  c->r[4]=R8(c->r[3]+0x0000004Cu); // 80081CF0
  c->lr=0x80081CF8u; f_80082270(c); // 80081CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80081CF8
  c->r[28]=c->r[3]|c->r[3]; // 80081CFC
  if (!crb(c,2)) { goto L_80081DEC; } // 80081D00
  c->r[3]=c->r[30]+0x00000E78u; // 80081D04
  c->r[4]=c->r[1]+0x00000008u; // 80081D08
  c->r[5]=0u+0x00000002u; // 80081D0C
  c->lr=0x80081D14u; f_800821B0(c); // 80081D10
  c->r[28]=c->r[3]|c->r[3]; // 80081D14
L_80081D18:;
  cmps(c,0,(int32_t)c->r[28],-15); // 80081D18
  if (crb(c,2)) { goto L_80081D28; } // 80081D1C
  cmps(c,0,(int32_t)c->r[28],-5); // 80081D20
  if (!crb(c,2)) { goto L_80081D48; } // 80081D24
L_80081D28:;
  c->r[3]=c->r[1]+0x00000008u; // 80081D28
  c->lr=0x80081D30u; f_80082210(c); // 80081D2C
  cmps(c,0,(int32_t)c->r[3],0); // 80081D30
  if (!crb(c,2)) { goto L_80081D40; } // 80081D34
  W32(c->r[13]+0xFFFFB2C4u,c->r[27]); // 80081D38
  goto L_80081DEC; // 80081D3C
L_80081D40:;
  c->r[28]=c->r[3]|c->r[3]; // 80081D40
  goto L_80081DEC; // 80081D44
L_80081D48:;
  cmps(c,0,(int32_t)c->r[28],0); // 80081D48
  if (!crb(c,2)) { goto L_80081DEC; } // 80081D4C
  c->r[4]=R32(c->r[31]+0x00000060u); // 80081D50
  cmps(c,0,(int32_t)c->r[4],0); // 80081D54
  if (crb(c,2)) { goto L_80081D70; } // 80081D58
  c->r[3]=c->r[1]+0x00000008u; // 80081D5C
  c->lr=0x80081D64u; f_80082510(c); // 80081D60
  cmps(c,0,(int32_t)c->r[3],0); // 80081D64
  c->r[28]=c->r[3]|c->r[3]; // 80081D68
  if (!crb(c,2)) { goto L_80081DEC; } // 80081D6C
L_80081D70:;
  c->r[4]=R32(c->r[31]+0x00000044u); // 80081D70
  c->r[3]=c->r[1]+0x00000008u; // 80081D74
  c->r[5]=R32(c->r[31]+0x00000048u); // 80081D78
  c->lr=0x80081D80u; f_80082390(c); // 80081D7C
  cmps(c,0,(int32_t)c->r[3],-15); // 80081D80
  c->r[28]=c->r[3]|c->r[3]; // 80081D84
  if (crb(c,2)) { goto L_80081D94; } // 80081D88
  cmps(c,0,(int32_t)c->r[3],-5); // 80081D8C
  if (!crb(c,2)) { goto L_80081DAC; } // 80081D90
L_80081D94:;
  c->r[3]=c->r[1]+0x00000008u; // 80081D94
  c->lr=0x80081D9Cu; f_80082210(c); // 80081D98
  cmps(c,0,(int32_t)c->r[3],0); // 80081D9C
  if (crb(c,2)) { IRQCHK(c); goto L_80081CD0; } // 80081DA0
  c->r[28]=c->r[3]|c->r[3]; // 80081DA4
  goto L_80081DEC; // 80081DA8
L_80081DAC:;
  cmps(c,0,(int32_t)c->r[3],2); // 80081DAC
  if (!crb(c,2)) { goto L_80081DD4; } // 80081DB0
  c->r[3]=c->r[1]+0x00000008u; // 80081DB4
  c->lr=0x80081DBCu; f_80082210(c); // 80081DB8
  cmps(c,0,(int32_t)c->r[3],0); // 80081DBC
  if (!crb(c,2)) { goto L_80081DCC; } // 80081DC0
  W32(c->r[13]+0xFFFFB2C4u,c->r[27]); // 80081DC4
  goto L_80081DEC; // 80081DC8
L_80081DCC:;
  c->r[28]=c->r[3]|c->r[3]; // 80081DCC
  goto L_80081DEC; // 80081DD0
L_80081DD4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80081DD4
  if (!crb(c,2)) { goto L_80081DEC; } // 80081DD8
  c->r[3]=c->r[1]+0x00000008u; // 80081DDC
  c->lr=0x80081DE4u; f_80082330(c); // 80081DE0
  c->r[28]=c->r[3]|c->r[3]; // 80081DE4
  W32(c->r[13]+0xFFFFB2C4u,c->r[27]); // 80081DE8
L_80081DEC:;
  cmps(c,0,(int32_t)c->r[29],1); // 80081DEC
  if (crb(c,2)) { goto L_80081DFC; } // 80081DF0
  c->r[3]=0u+0x00000000u; // 80081DF4
  c->lr=0x80081DFCu; f_8005CF10(c); // 80081DF8
L_80081DFC:;
  c->r[3]=R32(c->r[13]+0xFFFFB898u); // 80081DFC
  c->lr=0x80081E04u; f_8000DEF0(c); // 80081E00
  c->r[3]=0u+0x80410000u; // 80081E04
  c->r[0]=0u+0x00000000u; // 80081E08
  c->r[3]=c->r[3]+0x00000E78u; // 80081E0C
  W32(c->r[13]+0xFFFFB898u,c->r[0]); // 80081E10
  W32(c->r[3]+0x0000005Cu,c->r[28]); // 80081E14
  c->lr=0x80081E1Cu; f_8000FE40(c); // 80081E18
L_80081E1C:;
  c->lr=0x80081E20u; f_8000FF80(c); // 80081E1C
  IRQCHK(c); goto L_80081E1C; // 80081E20
}

// fn_80081E30
void f_80081E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081E30
  c->r[0]=c->lr; // 80081E34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80081E38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80081E3C
  c->r[31]=0u+0x80410000u; // 80081E40
  W32(c->r[1]+0x00000018u,c->r[30]); // 80081E44
  c->r[30]=c->r[6]|c->r[6]; // 80081E48
  W32(c->r[1]+0x00000014u,c->r[29]); // 80081E4C
  c->r[29]=c->r[5]|c->r[5]; // 80081E50
  W32(c->r[1]+0x00000010u,c->r[28]); // 80081E54
  c->r[28]=c->r[4]|c->r[4]; // 80081E58
  c->r[4]=c->r[3]|c->r[3]; // 80081E5C
  c->r[3]=c->r[31]+0x00000E78u; // 80081E60
  c->lr=0x80081E68u; f_802EE808(c); // 80081E64
  c->r[7]=c->r[31]+0x00000E78u; // 80081E68
  c->r[0]=0u+0x00000001u; // 80081E6C
  c->r[3]=0u+0x80080000u; // 80081E70
  W32(c->r[7]+0x00000044u,c->r[28]); // 80081E74
  c->r[3]=c->r[3]+0x00001EC0u; // 80081E78
  c->r[4]=0u+0x00000064u; // 80081E7C
  W32(c->r[7]+0x00000048u,c->r[29]); // 80081E80
  c->r[5]=0u+0x00002000u; // 80081E84
  c->r[6]=0u+0x00000000u; // 80081E88
  W32(c->r[7]+0x0000005Cu,c->r[0]); // 80081E8C
  W32(c->r[7]+0x00000060u,c->r[30]); // 80081E90
  c->lr=0x80081E98u; f_8000F7D0(c); // 80081E94
  c->r[4]=0u+0x0000000Cu; // 80081E98
  c->lr=0x80081EA0u; f_80010190(c); // 80081E9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80081EA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80081EA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80081EA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80081EAC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80081EB0
  c->lr=c->r[0]; // 80081EB4
  c->r[1]=c->r[1]+0x00000020u; // 80081EB8
  return; // 80081EBC
}

// fn_80081EC0
void f_80081EC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081EC0
  c->r[0]=c->lr; // 80081EC4
  c->r[5]=0u+0x00000001u; // 80081EC8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80081ECC
  c->r[4]=c->r[1]+0x0000000Cu; // 80081ED0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80081ED4
  c->r[31]=0u+0x80410000u; // 80081ED8
  c->r[3]=c->r[31]+0x00000E78u; // 80081EDC
  W32(c->r[1]+0x00000098u,c->r[30]); // 80081EE0
  c->lr=0x80081EE8u; f_80082150(c); // 80081EE4
  cmps(c,0,(int32_t)c->r[3],0); // 80081EE8
  c->r[30]=c->r[3]|c->r[3]; // 80081EEC
  if (!crb(c,2)) { goto L_80081F74; } // 80081EF0
  c->r[3]=c->r[1]+0x0000000Cu; // 80081EF4
  c->r[4]=c->r[1]+0x00000008u; // 80081EF8
  c->lr=0x80081F00u; f_801ABD90(c); // 80081EFC
  cmps(c,0,(int32_t)c->r[3],0); // 80081F00
  c->r[30]=c->r[3]|c->r[3]; // 80081F04
  if (crb(c,2)) { goto L_80081F18; } // 80081F08
  c->r[3]=c->r[1]+0x0000000Cu; // 80081F0C
  c->lr=0x80081F14u; f_800822D0(c); // 80081F10
  goto L_80081F74; // 80081F14
L_80081F18:;
  c->r[3]=c->r[31]+0x00000E78u; // 80081F18
  c->r[4]=R32(c->r[3]+0x00000060u); // 80081F1C
  cmps(c,0,(int32_t)c->r[4],0); // 80081F20
  if (crb(c,2)) { goto L_80081F48; } // 80081F24
  c->r[3]=c->r[1]+0x0000000Cu; // 80081F28
  c->lr=0x80081F30u; f_80082510(c); // 80081F2C
  cmps(c,0,(int32_t)c->r[3],0); // 80081F30
  c->r[30]=c->r[3]|c->r[3]; // 80081F34
  if (crb(c,2)) { goto L_80081F48; } // 80081F38
  c->r[3]=c->r[1]+0x0000000Cu; // 80081F3C
  c->lr=0x80081F44u; f_800822D0(c); // 80081F40
  goto L_80081F74; // 80081F44
L_80081F48:;
  cmps(c,0,(int32_t)c->r[30],0); // 80081F48
  if (!crb(c,2)) { goto L_80081F74; } // 80081F4C
  c->r[5]=0u+0x80410000u; // 80081F50
  c->r[3]=c->r[1]+0x0000000Cu; // 80081F54
  c->r[5]=c->r[5]+0x00000E78u; // 80081F58
  c->r[4]=R32(c->r[5]+0x00000044u); // 80081F5C
  c->r[5]=R32(c->r[5]+0x00000048u); // 80081F60
  c->lr=0x80081F68u; f_80082420(c); // 80081F64
  c->r[30]=c->r[3]|c->r[3]; // 80081F68
  c->r[3]=c->r[1]+0x0000000Cu; // 80081F6C
  c->lr=0x80081F74u; f_800822D0(c); // 80081F70
L_80081F74:;
  c->r[3]=0u+0x80410000u; // 80081F74
  c->r[3]=c->r[3]+0x00000E78u; // 80081F78
  W32(c->r[3]+0x0000005Cu,c->r[30]); // 80081F7C
  c->lr=0x80081F84u; f_8000FE40(c); // 80081F80
L_80081F84:;
  c->lr=0x80081F88u; f_8000FF80(c); // 80081F84
  IRQCHK(c); goto L_80081F84; // 80081F88
}

// fn_80081F90
void f_80081F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081F90
  c->r[0]=c->lr; // 80081F94
  c->r[4]=c->r[3]|c->r[3]; // 80081F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80081F9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80081FA0
  c->r[31]=0u+0x80410000u; // 80081FA4
  c->r[3]=c->r[31]+0x00000E78u; // 80081FA8
  c->lr=0x80081FB0u; f_802EE808(c); // 80081FAC
  c->r[4]=c->r[31]+0x00000E78u; // 80081FB0
  c->r[0]=0u+0x00000001u; // 80081FB4
  c->r[3]=0u+0x80080000u; // 80081FB8
  W32(c->r[4]+0x0000005Cu,c->r[0]); // 80081FBC
  c->r[3]=c->r[3]+0x00001FF0u; // 80081FC0
  c->r[4]=0u+0x00000064u; // 80081FC4
  c->r[5]=0u+0x00002000u; // 80081FC8
  c->r[6]=0u+0x00000000u; // 80081FCC
  c->lr=0x80081FD4u; f_8000F7D0(c); // 80081FD0
  c->r[4]=0u+0x0000000Cu; // 80081FD4
  c->lr=0x80081FDCu; f_80010190(c); // 80081FD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80081FDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80081FE0
  c->lr=c->r[0]; // 80081FE4
  c->r[1]=c->r[1]+0x00000010u; // 80081FE8
  return; // 80081FEC
}

// fn_80081FF0
void f_80081FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80081FF0
  c->r[0]=c->lr; // 80081FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80081FF8
  c->r[0]=0u+0x00000001u; // 80081FFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082000
  W32(c->r[1]+0x00000008u,c->r[30]); // 80082004
  c->r[30]=R32(c->r[13]+0xFFFFB2C4u); // 80082008
  W32(c->r[13]+0xFFFFB2C4u,c->r[0]); // 8008200C
  c->lr=0x80082014u; f_8005CF20(c); // 80082010
  cmps(c,0,(int32_t)c->r[3],1); // 80082014
  c->r[31]=c->r[3]|c->r[3]; // 80082018
  if (crb(c,2)) { goto L_80082028; } // 8008201C
  c->r[3]=0u+0x00000001u; // 80082020
  c->lr=0x80082028u; f_8005CF10(c); // 80082024
L_80082028:;
  c->r[3]=0u+0x80410000u; // 80082028
  c->r[3]=c->r[3]+0x00000E78u; // 8008202C
  c->lr=0x80082034u; f_800824B0(c); // 80082030
  cmps(c,0,(int32_t)c->r[31],1); // 80082034
  W32(c->r[13]+0xFFFFB2C4u,c->r[30]); // 80082038
  c->r[31]=c->r[3]|c->r[3]; // 8008203C
  if (crb(c,2)) { goto L_8008204C; } // 80082040
  c->r[3]=0u+0x00000000u; // 80082044
  c->lr=0x8008204Cu; f_8005CF10(c); // 80082048
L_8008204C:;
  c->r[3]=0u+0x80410000u; // 8008204C
  c->r[3]=c->r[3]+0x00000E78u; // 80082050
  W32(c->r[3]+0x0000005Cu,c->r[31]); // 80082054
  c->lr=0x8008205Cu; f_8000FE40(c); // 80082058
L_8008205C:;
  c->lr=0x80082060u; f_8000FF80(c); // 8008205C
  IRQCHK(c); goto L_8008205C; // 80082060
}

// fn_80082070
void f_80082070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082070
  c->r[0]=c->lr; // 80082074
  c->r[5]=0u+0x00000001u; // 80082078
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8008207C
  c->r[4]=c->r[1]+0x00000008u; // 80082080
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80082084
  c->lr=0x8008208Cu; f_80082150(c); // 80082088
  c->r[31]=c->r[3]|c->r[3]; // 8008208C
  c->lr=0x80082094u; f_800807A0(c); // 80082090
  cmps(c,0,(int32_t)c->r[31],0); // 80082094
  if (crb(c,2)) { goto L_800820A4; } // 80082098
  c->r[3]=c->r[31]|c->r[31]; // 8008209C
  goto L_800820B8; // 800820A0
L_800820A4:;
  c->r[3]=c->r[1]+0x00000008u; // 800820A4
  c->lr=0x800820ACu; f_800822D0(c); // 800820A8
  c->r[31]=c->r[3]|c->r[3]; // 800820AC
  c->lr=0x800820B4u; f_800807A0(c); // 800820B0
  c->r[3]=c->r[31]|c->r[31]; // 800820B4
L_800820B8:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800820B8
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 800820BC
  c->lr=c->r[0]; // 800820C0
  c->r[1]=c->r[1]+0x000000A0u; // 800820C4
  return; // 800820C8
}

// fn_800820D0
void f_800820D0(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 800820D0
  c->r[3]=c->r[3]+0x00000E78u; // 800820D4
  c->r[4]=R32(c->r[3]+0x0000005Cu); // 800820D8
  c->r[3]=addc(c,~c->r[4],0x00000001u,1); // 800820DC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800820E0
  c->r[0]=c->r[3]|c->r[0]; // 800820E4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800820E8
  return; // 800820EC
}

// fn_800820F0
void f_800820F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800820F0
  c->r[0]=c->lr; // 800820F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800820F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800820FC
  c->r[31]=0u+0x80410000u; // 80082100
  c->r[31]=c->r[31]+0x00000E78u; // 80082104
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 80082108
  c->lr=0x80082110u; f_800807A0(c); // 8008210C
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 80082110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80082114
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082118
  c->lr=c->r[0]; // 8008211C
  c->r[1]=c->r[1]+0x00000010u; // 80082120
  return; // 80082124
}

// fn_80082130
void f_80082130(Ctx* __restrict c) {
  c->r[4]=R32(c->r[13]+0xFFFFB8A0u); // 80082130
  W32(c->r[13]+0xFFFFB89Cu,c->r[3]); // 80082134
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80082138
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 8008213C
  return; // 80082140
}

// fn_80082150
void f_80082150(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082150
  c->r[0]=c->lr; // 80082154
  c->r[6]=0u+0x80080000u; // 80082158
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8008215C
  c->r[0]=0u+0x00000000u; // 80082160
  c->r[6]=c->r[6]+0x00002130u; // 80082164
  c->r[7]=c->r[1]+0x00000008u; // 80082168
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 8008216C
  c->lr=0x80082174u; f_801AC760(c); // 80082170
  cmps(c,0,(int32_t)c->r[3],0); // 80082174
  if (crb(c,2)) { goto L_80082188; } // 80082178
  goto L_80082198; // 8008217C
  goto L_80082188; // 80082180
L_80082184:;
  c->lr=0x80082188u; f_8000FF80(c); // 80082184
L_80082188:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 80082188
  cmps(c,0,(int32_t)c->r[0],0); // 8008218C
  if (!crb(c,0)) { IRQCHK(c); goto L_80082184; } // 80082190
  c->r[3]=R32(c->r[13]+0xFFFFB89Cu); // 80082194
L_80082198:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082198
  c->lr=c->r[0]; // 8008219C
  c->r[1]=c->r[1]+0x000000D0u; // 800821A0
  return; // 800821A4
}

// fn_800821B0
void f_800821B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800821B0
  c->r[0]=c->lr; // 800821B4
  c->r[8]=0u+0x80080000u; // 800821B8
  c->r[7]=0u+0x00004000u; // 800821BC
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800821C0
  c->r[0]=0u+0x00000000u; // 800821C4
  c->r[8]=c->r[8]+0x00002130u; // 800821C8
  c->r[9]=c->r[1]+0x00000008u; // 800821CC
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 800821D0
  c->r[6]=R32(c->r[13]+0xFFFFB898u); // 800821D4
  c->lr=0x800821DCu; f_801AC9E0(c); // 800821D8
  cmps(c,0,(int32_t)c->r[3],0); // 800821DC
  if (crb(c,2)) { goto L_800821F0; } // 800821E0
  goto L_80082200; // 800821E4
  goto L_800821F0; // 800821E8
L_800821EC:;
  c->lr=0x800821F0u; f_8000FF80(c); // 800821EC
L_800821F0:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 800821F0
  cmps(c,0,(int32_t)c->r[0],0); // 800821F4
  if (!crb(c,0)) { IRQCHK(c); goto L_800821EC; } // 800821F8
  c->r[3]=R32(c->r[13]+0xFFFFB89Cu); // 800821FC
L_80082200:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082200
  c->lr=c->r[0]; // 80082204
  c->r[1]=c->r[1]+0x000000D0u; // 80082208
  return; // 8008220C
}

// fn_80082210
void f_80082210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082210
  c->r[0]=c->lr; // 80082214
  c->r[4]=0u+0x80080000u; // 80082218
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8008221C
  c->r[0]=0u+0x00000000u; // 80082220
  c->r[4]=c->r[4]+0x00002130u; // 80082224
  c->r[5]=c->r[1]+0x00000008u; // 80082228
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 8008222C
  c->lr=0x80082234u; f_801AD390(c); // 80082230
  cmps(c,0,(int32_t)c->r[3],0); // 80082234
  if (crb(c,2)) { goto L_80082248; } // 80082238
  goto L_80082258; // 8008223C
  goto L_80082248; // 80082240
L_80082244:;
  c->lr=0x80082248u; f_8000FF80(c); // 80082244
L_80082248:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 80082248
  cmps(c,0,(int32_t)c->r[0],0); // 8008224C
  if (!crb(c,0)) { IRQCHK(c); goto L_80082244; } // 80082250
  c->r[3]=R32(c->r[13]+0xFFFFB89Cu); // 80082254
L_80082258:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082258
  c->lr=c->r[0]; // 8008225C
  c->r[1]=c->r[1]+0x000000D0u; // 80082260
  return; // 80082264
}

// fn_80082270
void f_80082270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082270
  c->r[0]=c->lr; // 80082274
  c->r[6]=0u+0x80080000u; // 80082278
  c->r[5]=0u+0x00000000u; // 8008227C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80082280
  c->r[0]=0u+0x00000000u; // 80082284
  c->r[6]=c->r[6]+0x00002130u; // 80082288
  c->r[7]=c->r[1]+0x00000008u; // 8008228C
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 80082290
  c->lr=0x80082298u; f_801AB1C0(c); // 80082294
  cmps(c,0,(int32_t)c->r[3],0); // 80082298
  if (crb(c,2)) { goto L_800822AC; } // 8008229C
  goto L_800822BC; // 800822A0
  goto L_800822AC; // 800822A4
L_800822A8:;
  c->lr=0x800822ACu; f_8000FF80(c); // 800822A8
L_800822AC:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 800822AC
  cmps(c,0,(int32_t)c->r[0],0); // 800822B0
  if (!crb(c,0)) { IRQCHK(c); goto L_800822A8; } // 800822B4
  c->r[3]=R32(c->r[13]+0xFFFFB89Cu); // 800822B8
L_800822BC:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800822BC
  c->lr=c->r[0]; // 800822C0
  c->r[1]=c->r[1]+0x000000D0u; // 800822C4
  return; // 800822C8
}

// fn_800822D0
void f_800822D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800822D0
  c->r[0]=c->lr; // 800822D4
  c->r[4]=0u+0x80080000u; // 800822D8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800822DC
  c->r[0]=0u+0x00000000u; // 800822E0
  c->r[4]=c->r[4]+0x00002130u; // 800822E4
  c->r[5]=c->r[1]+0x00000008u; // 800822E8
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 800822EC
  c->lr=0x800822F4u; f_801AC950(c); // 800822F0
  cmps(c,0,(int32_t)c->r[3],0); // 800822F4
  if (crb(c,2)) { goto L_80082308; } // 800822F8
  goto L_80082318; // 800822FC
  goto L_80082308; // 80082300
L_80082304:;
  c->lr=0x80082308u; f_8000FF80(c); // 80082304
L_80082308:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 80082308
  cmps(c,0,(int32_t)c->r[0],0); // 8008230C
  if (!crb(c,0)) { IRQCHK(c); goto L_80082304; } // 80082310
  c->r[3]=R32(c->r[13]+0xFFFFB89Cu); // 80082314
L_80082318:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082318
  c->lr=c->r[0]; // 8008231C
  c->r[1]=c->r[1]+0x000000D0u; // 80082320
  return; // 80082324
}

// fn_80082330
void f_80082330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082330
  c->r[0]=c->lr; // 80082334
  c->r[4]=0u+0x80080000u; // 80082338
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8008233C
  c->r[0]=0u+0x00000000u; // 80082340
  c->r[4]=c->r[4]+0x00002130u; // 80082344
  c->r[5]=c->r[1]+0x00000008u; // 80082348
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 8008234C
  c->lr=0x80082354u; f_801ACFF0(c); // 80082350
  cmps(c,0,(int32_t)c->r[3],0); // 80082354
  if (crb(c,2)) { goto L_80082368; } // 80082358
  goto L_80082378; // 8008235C
  goto L_80082368; // 80082360
L_80082364:;
  c->lr=0x80082368u; f_8000FF80(c); // 80082364
L_80082368:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 80082368
  cmps(c,0,(int32_t)c->r[0],0); // 8008236C
  if (!crb(c,0)) { IRQCHK(c); goto L_80082364; } // 80082370
  c->r[3]=R32(c->r[13]+0xFFFFB89Cu); // 80082374
L_80082378:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082378
  c->lr=c->r[0]; // 8008237C
  c->r[1]=c->r[1]+0x000000D0u; // 80082380
  return; // 80082384
}

// fn_80082390
void f_80082390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082390
  c->r[0]=c->lr; // 80082394
  c->r[6]=0u+0x80080000u; // 80082398
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8008239C
  c->r[0]=0u+0x00000000u; // 800823A0
  c->r[6]=c->r[6]+0x00002130u; // 800823A4
  c->r[7]=c->r[1]+0x00000008u; // 800823A8
  W32(c->r[1]+0x000000CCu,c->r[31]); // 800823AC
  c->r[31]=c->r[5]|c->r[5]; // 800823B0
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 800823B4
  c->lr=0x800823BCu; f_801AB710(c); // 800823B8
  cmps(c,0,(int32_t)c->r[3],0); // 800823BC
  if (crb(c,2)) { goto L_800823D0; } // 800823C0
  goto L_80082400; // 800823C4
  goto L_800823D0; // 800823C8
L_800823CC:;
  c->lr=0x800823D0u; f_8000FF80(c); // 800823CC
L_800823D0:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 800823D0
  cmps(c,0,(int32_t)c->r[0],0); // 800823D4
  if (!crb(c,0)) { IRQCHK(c); goto L_800823CC; } // 800823D8
  c->r[0]=R32(c->r[13]+0xFFFFB89Cu); // 800823DC
  cmpu(c,0,c->r[31],c->r[0]); // 800823E0
  if (!crb(c,2)) { goto L_800823F0; } // 800823E4
  c->r[3]=0u+0x00000000u; // 800823E8
  goto L_80082400; // 800823EC
L_800823F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800823F0
  c->r[3]=0u+0x00000002u; // 800823F4
  if (crb(c,1)) { goto L_80082400; } // 800823F8
  c->r[3]=c->r[0]|c->r[0]; // 800823FC
L_80082400:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082400
  c->r[31]=R32(c->r[1]+0x000000CCu); // 80082404
  c->lr=c->r[0]; // 80082408
  c->r[1]=c->r[1]+0x000000D0u; // 8008240C
  return; // 80082410
}

// fn_80082420
void f_80082420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082420
  c->r[0]=c->lr; // 80082424
  c->r[6]=0u+0x80080000u; // 80082428
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8008242C
  c->r[0]=0u+0x00000000u; // 80082430
  c->r[6]=c->r[6]+0x00002130u; // 80082434
  c->r[7]=c->r[1]+0x00000008u; // 80082438
  W32(c->r[1]+0x000000CCu,c->r[31]); // 8008243C
  c->r[31]=c->r[5]|c->r[5]; // 80082440
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 80082444
  c->lr=0x8008244Cu; f_801AB620(c); // 80082448
  cmps(c,0,(int32_t)c->r[3],0); // 8008244C
  if (crb(c,2)) { goto L_80082460; } // 80082450
  goto L_80082490; // 80082454
  goto L_80082460; // 80082458
L_8008245C:;
  c->lr=0x80082460u; f_8000FF80(c); // 8008245C
L_80082460:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 80082460
  cmps(c,0,(int32_t)c->r[0],0); // 80082464
  if (!crb(c,0)) { IRQCHK(c); goto L_8008245C; } // 80082468
  c->r[0]=R32(c->r[13]+0xFFFFB89Cu); // 8008246C
  cmpu(c,0,c->r[31],c->r[0]); // 80082470
  if (!crb(c,2)) { goto L_80082480; } // 80082474
  c->r[3]=0u+0x00000000u; // 80082478
  goto L_80082490; // 8008247C
L_80082480:;
  cmps(c,0,(int32_t)c->r[0],0); // 80082480
  c->r[3]=0u+0x00000002u; // 80082484
  if (crb(c,1)) { goto L_80082490; } // 80082488
  c->r[3]=c->r[0]|c->r[0]; // 8008248C
L_80082490:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082490
  c->r[31]=R32(c->r[1]+0x000000CCu); // 80082494
  c->lr=c->r[0]; // 80082498
  c->r[1]=c->r[1]+0x000000D0u; // 8008249C
  return; // 800824A0
}

// fn_800824B0
void f_800824B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800824B0
  c->r[0]=c->lr; // 800824B4
  c->r[4]=0u+0x80080000u; // 800824B8
  W32(c->r[1]+0x000000D4u,c->r[0]); // 800824BC
  c->r[0]=0u+0x00000000u; // 800824C0
  c->r[4]=c->r[4]+0x00002130u; // 800824C4
  c->r[5]=c->r[1]+0x00000008u; // 800824C8
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 800824CC
  c->lr=0x800824D4u; f_801AB410(c); // 800824D0
  cmps(c,0,(int32_t)c->r[3],0); // 800824D4
  if (crb(c,2)) { goto L_800824E8; } // 800824D8
  goto L_800824F8; // 800824DC
  goto L_800824E8; // 800824E0
L_800824E4:;
  c->lr=0x800824E8u; f_8000FF80(c); // 800824E4
L_800824E8:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 800824E8
  cmps(c,0,(int32_t)c->r[0],0); // 800824EC
  if (!crb(c,0)) { IRQCHK(c); goto L_800824E4; } // 800824F0
  c->r[3]=R32(c->r[13]+0xFFFFB89Cu); // 800824F4
L_800824F8:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 800824F8
  c->lr=c->r[0]; // 800824FC
  c->r[1]=c->r[1]+0x000000D0u; // 80082500
  return; // 80082504
}

// fn_80082510
void f_80082510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082510
  c->r[0]=c->lr; // 80082514
  c->r[6]=0u+0x80080000u; // 80082518
  c->r[5]=0u+0x00000000u; // 8008251C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 80082520
  c->r[0]=0u+0x00000000u; // 80082524
  c->r[6]=c->r[6]+0x00002130u; // 80082528
  c->r[7]=c->r[1]+0x00000008u; // 8008252C
  W32(c->r[1]+0x000000CCu,c->r[31]); // 80082530
  c->r[31]=c->r[4]|c->r[4]; // 80082534
  W32(c->r[13]+0xFFFFB8A0u,c->r[0]); // 80082538
  c->lr=0x80082540u; f_801AB790(c); // 8008253C
  cmps(c,0,(int32_t)c->r[3],0); // 80082540
  if (crb(c,2)) { goto L_80082554; } // 80082544
  goto L_80082584; // 80082548
  goto L_80082554; // 8008254C
L_80082550:;
  c->lr=0x80082554u; f_8000FF80(c); // 80082550
L_80082554:;
  c->r[0]=R32(c->r[13]+0xFFFFB8A0u); // 80082554
  cmps(c,0,(int32_t)c->r[0],0); // 80082558
  if (!crb(c,0)) { IRQCHK(c); goto L_80082550; } // 8008255C
  c->r[0]=R32(c->r[13]+0xFFFFB89Cu); // 80082560
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80082564
  if (!crb(c,2)) { goto L_80082574; } // 80082568
  c->r[3]=0u+0x00000000u; // 8008256C
  goto L_80082584; // 80082570
L_80082574:;
  cmps(c,0,(int32_t)c->r[0],0); // 80082574
  c->r[3]=0u+0x00000002u; // 80082578
  if (crb(c,1)) { goto L_80082584; } // 8008257C
  c->r[3]=c->r[0]|c->r[0]; // 80082580
L_80082584:;
  c->r[0]=R32(c->r[1]+0x000000D4u); // 80082584
  c->r[31]=R32(c->r[1]+0x000000CCu); // 80082588
  c->lr=c->r[0]; // 8008258C
  c->r[1]=c->r[1]+0x000000D0u; // 80082590
  return; // 80082594
}

// fn_800825A0
void f_800825A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800825A0
  c->r[0]=c->lr; // 800825A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800825A8
  c->r[11]=c->r[1]+0x00000030u; // 800825AC
  c->lr=0x800825B4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800825B0
  c->lr=0x800825B8u; f_800656F0(c); // 800825B4
  c->r[25]=0u+0x80410000u; // 800825B8
  c->r[26]=0u+0x80410000u; // 800825BC
  c->r[30]=0u+0x80410000u; // 800825C0
  c->r[24]=0u+0x00000000u; // 800825C4
  c->r[25]=c->r[25]+0x00000EE0u; // 800825C8
  c->r[26]=c->r[26]+0xFFFFB2B4u; // 800825CC
  c->r[30]=c->r[30]+0x00002A80u; // 800825D0
  c->r[27]=0u+0x0000002Du; // 800825D4
  c->r[28]=0u+0x00000001u; // 800825D8
  c->r[29]=0u+0xFFFFFFFFu; // 800825DC
  c->r[31]=0u+0x000000DDu; // 800825E0
L_800825E4:;
  c->r[3]=c->r[25]|c->r[25]; // 800825E4
  c->r[4]=0u+0x00000000u; // 800825E8
  c->r[5]=0u+0x000006E8u; // 800825EC
  c->lr=0x800825F4u; f_80004714(c); // 800825F0
  c->r[6]=c->r[25]+0x00000038u; // 800825F4
  c->r[4]=c->r[26]+0xFFFFFFFCu; // 800825F8
  c->ctr=c->r[27]; // 800825FC
L_80082600:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082600
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082604
  W32(c->r[6]+0x00000004u,c->r[3]); // 80082608
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8008260C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082600; } // 80082610
  c->r[0]=R32(c->r[4]+0x00000004u); // 80082614
  c->r[5]=c->r[30]+0xFFFFFFFCu; // 80082618
  W32(c->r[6]+0x00000004u,c->r[0]); // 8008261C
  c->r[4]=c->r[25]+0xFFFFFFFCu; // 80082620
  W8(c->r[25]+0x00000001u,c->r[28]); // 80082624
  W32(c->r[25]+0x0000000Cu,c->r[29]); // 80082628
  c->ctr=c->r[31]; // 8008262C
L_80082630:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082630
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082634
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082638
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8008263C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082630; } // 80082640
  c->r[24]=c->r[24]+0x00000001u; // 80082644
  c->r[25]=c->r[25]+0x000006E8u; // 80082648
  cmps(c,0,(int32_t)c->r[24],4); // 8008264C
  if (crb(c,0)) { IRQCHK(c); goto L_800825E4; } // 80082650
  c->r[0]=0u+0x00000000u; // 80082654
  W32(c->r[13]+0xFFFFB8ACu,c->r[0]); // 80082658
  c->r[11]=c->r[1]+0x00000030u; // 8008265C
  c->lr=0x80082664u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80082660
  c->r[0]=R32(c->r[1]+0x00000034u); // 80082664
  c->lr=c->r[0]; // 80082668
  c->r[1]=c->r[1]+0x00000030u; // 8008266C
  return; // 80082670
}

// fn_80082680
void f_80082680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082680
  c->r[0]=c->lr; // 80082684
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082688
  c->r[11]=c->r[1]+0x00000020u; // 8008268C
  c->lr=0x80082694u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082690
  c->r[28]=(uint32_t)((int32_t)c->r[3]*(int32_t)1768); // 80082694
  c->r[29]=0u+0x80410000u; // 80082698
  c->r[31]=c->r[3]|c->r[3]; // 8008269C
  c->r[29]=c->r[29]+0x00000EE0u; // 800826A0
  c->r[30]=c->r[29]+c->r[28]; // 800826A4
  c->r[4]=0u+0x00000000u; // 800826A8
  c->r[27]=R8(c->r[30]+0x00000001u); // 800826AC
  c->r[3]=c->r[30]|c->r[30]; // 800826B0
  c->r[5]=0u+0x000006E8u; // 800826B4
  c->lr=0x800826BCu; f_80004714(c); // 800826B8
  c->r[0]=0u+0x00000001u; // 800826BC
  W8(c->r[30]+0x00000000u,c->r[0]); // 800826C0
  c->lr=0x800826C8u; f_8012AB70(c); // 800826C4
  W32(c->r[30]+0x0000002Cu,c->r[4]); // 800826C8
  c->r[5]=0u+0x00000000u; // 800826CC
  c->r[0]=0u+0xFFFFFFFFu; // 800826D0
  W32(c->r[30]+0x00000028u,c->r[3]); // 800826D4
  W32(c->r[30]+0x00000024u,c->r[4]); // 800826D8
  W32(c->r[30]+0x00000020u,c->r[3]); // 800826DC
  W16(c->r[30]+0x00000004u,c->r[5]); // 800826E0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800826E4
  W8(c->r[30]+0x00000001u,c->r[27]); // 800826E8
  c->lr=0x800826F0u; f_800656F0(c); // 800826EC
  c->r[3]=0u+0x80410000u; // 800826F0
  c->r[4]=c->r[30]|c->r[30]; // 800826F4
  c->r[3]=c->r[3]+0xFFFFB2B4u; // 800826F8
  c->r[0]=0u+0x0000002Du; // 800826FC
  c->r[5]=c->r[4]+0x00000038u; // 80082700
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 80082704
  c->ctr=c->r[0]; // 80082708
  c->r[0]=c->r[0]|0x00000000u; // 8008270C
L_80082710:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082710
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082714
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082718
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8008271C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082710; } // 80082720
  c->r[0]=R32(c->r[4]+0x00000004u); // 80082724
  W32(c->r[5]+0x00000004u,c->r[0]); // 80082728
  c->lr=0x80082730u; f_80089D70(c); // 8008272C
  c->r[0]=R32(c->r[13]+0xFFFFB8A8u); // 80082730
  cmps(c,0,(int32_t)c->r[0],0); // 80082734
  if (crb(c,2)) { goto L_80082758; } // 80082738
  c->lr=0x80082740u; f_800817F0(c); // 8008273C
L_80082740:;
  c->lr=0x80082744u; f_8000FF80(c); // 80082740
  c->r[4]=c->r[31]|c->r[31]; // 80082744
  c->r[3]=0u+0x00000001u; // 80082748
  c->lr=0x80082750u; f_80081800(c); // 8008274C
  cmps(c,0,(int32_t)c->r[3],0); // 80082750
  if (crb(c,2)) { IRQCHK(c); goto L_80082740; } // 80082754
L_80082758:;
  c->r[3]=0u+0x80410000u; // 80082758
  c->r[0]=0u+0x000000DDu; // 8008275C
  c->r[3]=c->r[3]+0x00002A80u; // 80082760
  c->r[4]=c->r[30]+0xFFFFFFFCu; // 80082764
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 80082768
  c->ctr=c->r[0]; // 8008276C
L_80082770:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082770
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082774
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082778
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8008277C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082770; } // 80082780
  c->r[11]=c->r[1]+0x00000020u; // 80082784
  c->lr=0x8008278Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80082788
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008278C
  c->lr=c->r[0]; // 80082790
  c->r[1]=c->r[1]+0x00000020u; // 80082794
  return; // 80082798
}

// fn_800827A0
void f_800827A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800827A0
  c->r[0]=c->lr; // 800827A4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800827A8
  c->r[11]=c->r[1]+0x00000030u; // 800827AC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800827B0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800827B4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800827B8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800827BC
  c->lr=0x800827C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800827C0
  cmps(c,0,(int32_t)c->r[4],0); // 800827C4
  c->r[28]=c->r[3]|c->r[3]; // 800827C8
  c->r[29]=c->r[4]|c->r[4]; // 800827CC
  if (crb(c,0)) { goto L_80082858; } // 800827D0
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)1768); // 800827D4
  c->r[5]=0u+0x803F0000u; // 800827D8
  c->r[3]=0u+0x80410000u; // 800827DC
  c->r[5]=c->r[5]+0xFFFFB218u; // 800827E0
  c->r[3]=c->r[3]+0x00000EE0u; // 800827E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 800827E8
  c->r[9]=c->r[3]+c->r[30]; // 800827EC
  c->r[8]=0u+0x80440000u; // 800827F0
  W16(c->r[9]+0x00000004u,c->r[0]); // 800827F4
  c->r[8]=c->r[8]+0xFFFF88D0u; // 800827F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 800827FC
  c->r[3]=0u+0x80410000u; // 80082800
  W16(c->r[9]+0x00000006u,c->r[0]); // 80082804
  c->r[3]=c->r[3]+0xFFFFB2B4u; // 80082808
  c->r[7]=R32(c->r[8]+0x00000AD4u); // 8008280C
  c->r[0]=0u+0x0000002Du; // 80082810
  W32(c->r[9]+0x0000000Cu,c->r[4]); // 80082814
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 80082818
  c->r[6]=R32(c->r[8]+0x00000AD8u); // 8008281C
  c->r[5]=c->r[9]+0x00000038u; // 80082820
  W32(c->r[9]+0x00000010u,c->r[7]); // 80082824
  c->r[3]=R32(c->r[8]+0x00000ADCu); // 80082828
  W32(c->r[9]+0x00000014u,c->r[6]); // 8008282C
  W32(c->r[9]+0x00000018u,c->r[3]); // 80082830
  c->ctr=c->r[0]; // 80082834
L_80082838:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082838
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8008283C
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082840
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80082844
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082838; } // 80082848
  c->r[0]=R32(c->r[4]+0x00000004u); // 8008284C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80082850
  goto L_80082888; // 80082854
L_80082858:;
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)1768); // 80082858
  c->r[5]=0u+0x80410000u; // 8008285C
  c->r[3]=0u+0x80410000u; // 80082860
  c->r[5]=c->r[5]+0xFFFFB2B4u; // 80082864
  c->r[3]=c->r[3]+0x00000EE0u; // 80082868
  c->r[0]=R32(c->r[5]+0x00000014u); // 8008286C
  c->r[4]=c->r[3]+c->r[30]; // 80082870
  c->r[3]=R32(c->r[5]+0x00000010u); // 80082874
  W32(c->r[4]+0x00000050u,c->r[0]); // 80082878
  c->r[0]=R32(c->r[5]+0x00000018u); // 8008287C
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 80082880
  W32(c->r[4]+0x00000054u,c->r[0]); // 80082884
L_80082888:;
  c->r[27]=0u+0x80410000u; // 80082888
  c->r[27]=c->r[27]+0x00000EE0u; // 8008288C
  c->r[31]=c->r[27]+c->r[30]; // 80082890
  c->lr=0x80082898u; f_8012AB70(c); // 80082894
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 80082898
  c->r[7]=R32(c->r[31]+0x00000028u); // 8008289C
  c->r[6]=addc(c,~c->r[0],c->r[4],1); // 800828A0
  c->r[4]=R32(c->r[31]+0x00000030u); // 800828A4
  c->r[0]=R32(c->r[31]+0x00000034u); // 800828A8
  c->r[3]=addc(c,~c->r[7],c->r[3],c->xer_ca); // 800828AC
  c->r[0]=addc(c,c->r[0],c->r[6],0); // 800828B0
  W32(c->r[31]+0x00000034u,c->r[0]); // 800828B4
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 800828B8
  W32(c->r[31]+0x00000030u,c->r[0]); // 800828BC
  c->lr=0x800828C4u; f_8012AB70(c); // 800828C0
  W32(c->r[31]+0x00000024u,c->r[4]); // 800828C4
  W32(c->r[31]+0x00000020u,c->r[3]); // 800828C8
  c->lr=0x800828D0u; f_80066880(c); // 800828CC
  c->r[27]=c->r[27]+c->r[30]; // 800828D0
  c->r[3]=c->r[1]+0x00000008u; // 800828D4
  {uint32_t ea=c->r[27]+0x00000038u; WF32(ea,c->f[1]);} // 800828D8
  c->lr=0x800828E0u; f_80089EF0(c); // 800828DC
  c->r[4]=c->r[3]|c->r[3]; // 800828E0
  c->r[3]=c->r[27]+0x000004E5u; // 800828E4
  c->r[5]=0u+0x00000200u; // 800828E8
  c->lr=0x800828F0u; f_800043C4(c); // 800828EC
  c->r[0]=R32(c->r[13]+0xFFFFB8A8u); // 800828F0
  cmps(c,0,(int32_t)c->r[0],0); // 800828F4
  if (crb(c,2)) { goto L_80082984; } // 800828F8
  c->r[3]=0u+0x00000001u; // 800828FC
  c->lr=0x80082904u; f_8005CF10(c); // 80082900
  cmps(c,0,(int32_t)c->r[29],0); // 80082904
  if (crb(c,0)) { goto L_80082914; } // 80082908
  c->r[3]=c->r[13]+0xFFFF870Cu; // 8008290C
  c->lr=0x80082914u; f_8007E110(c); // 80082910
L_80082914:;
  c->lr=0x80082918u; f_800817F0(c); // 80082914
  c->r[30]=0u+0x803F0000u; // 80082918
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[30]=c->ps1[30]=RF32(ea);} // 8008291C
  c->r[30]=c->r[30]+0xFFFFB218u; // 80082920
L_80082924:;
  c->lr=0x80082928u; f_8000FF80(c); // 80082924
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 80082928
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 8008292C
  c->r[3]=0u+0x00000001u; // 80082930
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 80082934
  c->lr=0x8008293Cu; f_80081800(c); // 80082938
  cmps(c,0,(int32_t)c->r[3],0); // 8008293C
  if (crb(c,2)) { IRQCHK(c); goto L_80082924; } // 80082940
  cmps(c,0,(int32_t)c->r[29],0); // 80082944
  if (crb(c,0)) { goto L_8008297C; } // 80082948
  c->r[28]=0u+0x803F0000u; // 8008294C
  {uint32_t ea=c->r[2]+0xFFFF8C54u; c->f[31]=c->ps1[31]=RF32(ea);} // 80082950
  c->r[28]=c->r[28]+0xFFFFB218u; // 80082954
L_80082958:;
  c->lr=0x8008295Cu; f_8000FF80(c); // 80082958
  {uint32_t ea=c->r[28]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008295C
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[0]); // 80082960
  fcmp(c,0,c->f[30],c->f[31]); // 80082964
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80082968
  c->r[0]=c->cr; // 8008296C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; cr0(c,c->r[0]); // 80082970
  if (crb(c,2)) { IRQCHK(c); goto L_80082958; } // 80082974
  c->lr=0x8008297Cu; f_8007E170(c); // 80082978
L_8008297C:;
  c->r[3]=0u+0x00000000u; // 8008297C
  c->lr=0x80082984u; f_8005CF10(c); // 80082980
L_80082984:;
  c->lr=0x80082988u; f_8012AB70(c); // 80082984
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 80082988
  c->r[4]=0u+0x80410000u; // 8008298C
  c->r[4]=c->r[4]+0x00002A80u; // 80082990
  c->r[0]=0u+0x000000DDu; // 80082994
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80082998
  W32(c->r[31]+0x00000028u,c->r[3]); // 8008299C
  c->r[4]=c->r[27]+0xFFFFFFFCu; // 800829A0
  c->ctr=c->r[0]; // 800829A4
L_800829A8:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800829A8
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800829AC
  W32(c->r[5]+0x00000004u,c->r[3]); // 800829B0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800829B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800829A8; } // 800829B8
  c->r[11]=c->r[1]+0x00000030u; // 800829BC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800829C0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800829C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 800829C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800829CC
  c->lr=0x800829D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800829D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800829D4
  c->lr=c->r[0]; // 800829D8
  c->r[1]=c->r[1]+0x00000050u; // 800829DC
  return; // 800829E0
}

// fn_800829F0
void f_800829F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800829F0
  c->r[0]=c->lr; // 800829F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800829F8
  c->r[0]=R32(c->r[13]+0xFFFFB8A8u); // 800829FC
  cmps(c,0,(int32_t)c->r[0],0); // 80082A00
  if (crb(c,2)) { goto L_80082A24; } // 80082A04
  c->lr=0x80082A0Cu; f_800817F0(c); // 80082A08
L_80082A0C:;
  c->lr=0x80082A10u; f_8000FF80(c); // 80082A0C
  c->r[3]=0u+0x00000001u; // 80082A10
  c->r[4]=0u+0xFFFFFFFFu; // 80082A14
  c->lr=0x80082A1Cu; f_80081800(c); // 80082A18
  cmps(c,0,(int32_t)c->r[3],0); // 80082A1C
  if (crb(c,2)) { IRQCHK(c); goto L_80082A0C; } // 80082A20
L_80082A24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80082A24
  c->lr=c->r[0]; // 80082A28
  c->r[1]=c->r[1]+0x00000010u; // 80082A2C
  return; // 80082A30
}

// fn_80082A40
void f_80082A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082A40
  c->r[0]=c->lr; // 80082A44
  W32(c->r[1]+0x00000034u,c->r[0]); // 80082A48
  c->r[11]=c->r[1]+0x00000030u; // 80082A4C
  c->lr=0x80082A54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082A50
  c->r[28]=(uint32_t)((int32_t)c->r[3]*(int32_t)1768); // 80082A54
  c->r[5]=0u+0x80410000u; // 80082A58
  c->r[4]=0u+0x80410000u; // 80082A5C
  c->r[5]=c->r[5]+0x00000EE0u; // 80082A60
  c->r[6]=c->r[5]+c->r[28]; // 80082A64
  c->r[4]=c->r[4]+0xFFFFB2B4u; // 80082A68
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 80082A6C
  c->r[0]=0u+0x0000002Du; // 80082A70
  c->r[31]=c->r[3]|c->r[3]; // 80082A74
  c->r[4]=c->r[6]+0x00000038u; // 80082A78
  c->ctr=c->r[0]; // 80082A7C
L_80082A80:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082A80
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082A84
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082A88
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80082A8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082A80; } // 80082A90
  c->r[0]=R32(c->r[4]+0x00000004u); // 80082A94
  c->r[29]=0u+0x80410000u; // 80082A98
  c->r[29]=c->r[29]+0x00000EE0u; // 80082A9C
  W32(c->r[5]+0x00000004u,c->r[0]); // 80082AA0
  c->r[27]=c->r[29]+c->r[28]; // 80082AA4
  c->r[3]=c->r[1]+0x00000008u; // 80082AA8
  c->lr=0x80082AB0u; f_80089EF0(c); // 80082AAC
  c->r[4]=c->r[27]+0x000004E5u; // 80082AB0
  c->r[5]=0u+0x00000200u; // 80082AB4
  c->lr=0x80082ABCu; f_800043C4(c); // 80082AB8
  c->r[30]=0u+0x803F0000u; // 80082ABC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000004u); // 80082AC0
  c->r[30]=c->r[30]+0xFFFFB218u; // 80082AC4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000006u); // 80082AC8
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80082ACC
  W16(c->r[30]+0x00000004u,c->r[4]); // 80082AD0
  W16(c->r[30]+0x00000006u,c->r[3]); // 80082AD4
  W32(c->r[30]+0x00000028u,c->r[0]); // 80082AD8
  c->lr=0x80082AE0u; f_8012AB70(c); // 80082ADC
  W32(c->r[27]+0x0000002Cu,c->r[4]); // 80082AE0
  c->r[5]=0u+0x80410000u; // 80082AE4
  c->r[5]=c->r[5]+0x00002A80u; // 80082AE8
  c->r[0]=0u+0x000000DDu; // 80082AEC
  c->r[4]=c->r[27]+0xFFFFFFFCu; // 80082AF0
  W32(c->r[27]+0x00000028u,c->r[3]); // 80082AF4
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80082AF8
  W16(c->r[30]+0x00000002u,c->r[31]); // 80082AFC
  c->ctr=c->r[0]; // 80082B00
  c->r[0]=c->r[0]|0x00000000u; // 80082B04
L_80082B08:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082B08
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082B0C
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082B10
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80082B14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082B08; } // 80082B18
  c->r[11]=c->r[1]+0x00000030u; // 80082B1C
  c->lr=0x80082B24u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80082B20
  c->r[0]=R32(c->r[1]+0x00000034u); // 80082B24
  c->lr=c->r[0]; // 80082B28
  c->r[1]=c->r[1]+0x00000030u; // 80082B2C
  return; // 80082B30
}

// fn_80082B40
void f_80082B40(Ctx* __restrict c) {
  c->r[4]=0u+0x803F0000u; // 80082B40
  c->r[5]=0u+0x80410000u; // 80082B44
  c->r[4]=c->r[4]+0xFFFFB218u; // 80082B48
  c->r[3]=0u+0x80410000u; // 80082B4C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80082B50
  c->r[3]=c->r[3]+0x00002A80u; // 80082B54
  c->r[5]=c->r[5]+0x00000EE0u; // 80082B58
  c->r[0]=0u+0x000000DDu; // 80082B5C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)1768); // 80082B60
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 80082B64
  c->r[5]=c->r[5]+c->r[7]; // 80082B68
  c->ctr=c->r[0]; // 80082B6C
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80082B70
  c->r[0]=c->r[0]|0x00000000u; // 80082B74
L_80082B78:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082B78
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082B7C
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082B80
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80082B84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082B78; } // 80082B88
  c->r[3]=0u+0x80410000u; // 80082B8C
  c->r[6]=0u+0x80410000u; // 80082B90
  c->r[3]=c->r[3]+0x00000EE0u; // 80082B94
  c->r[0]=0u+0x0000002Du; // 80082B98
  c->r[6]=c->r[6]+0xFFFFB2B4u; // 80082B9C
  c->r[3]=c->r[3]+c->r[7]; // 80082BA0
  c->r[8]=R32(c->r[6]+0x00000014u); // 80082BA4
  c->r[5]=c->r[6]+0xFFFFFFFCu; // 80082BA8
  c->r[9]=R32(c->r[6]+0x00000010u); // 80082BAC
  c->r[4]=c->r[3]+0x00000038u; // 80082BB0
  c->r[10]=R32(c->r[6]+0x00000018u); // 80082BB4
  c->ctr=c->r[0]; // 80082BB8
  c->r[0]=c->r[0]|0x00000000u; // 80082BBC
L_80082BC0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80082BC0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80082BC4
  W32(c->r[5]+0x00000004u,c->r[3]); // 80082BC8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80082BCC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80082BC0; } // 80082BD0
  c->r[0]=R32(c->r[4]+0x00000004u); // 80082BD4
  c->r[3]=0u+0x80410000u; // 80082BD8
  c->r[3]=c->r[3]+0x00000EE0u; // 80082BDC
  W32(c->r[5]+0x00000004u,c->r[0]); // 80082BE0
  c->r[5]=c->r[3]+c->r[7]; // 80082BE4
  c->r[6]=0u+0x80410000u; // 80082BE8
  c->r[6]=c->r[6]+0xFFFFB2B4u; // 80082BEC
  c->r[3]=0u+0x803F0000u; // 80082BF0
  c->r[3]=c->r[3]+0xFFFFB218u; // 80082BF4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000004u); // 80082BF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000006u); // 80082BFC
  W32(c->r[6]+0x00000014u,c->r[8]); // 80082C00
  W32(c->r[6]+0x00000010u,c->r[9]); // 80082C04
  W32(c->r[6]+0x00000018u,c->r[10]); // 80082C08
  W16(c->r[3]+0x00000004u,c->r[4]); // 80082C0C
  W16(c->r[3]+0x00000006u,c->r[0]); // 80082C10
  return; // 80082C14
}

// fn_80082C20
void f_80082C20(Ctx* __restrict c) {
  c->r[3]=0u+0x803F0000u; // 80082C20
  c->r[4]=0u+0x80410000u; // 80082C24
  c->r[3]=c->r[3]+0xFFFFB218u; // 80082C28
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80082C2C
  c->r[4]=c->r[4]+0x00000EE0u; // 80082C30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082C34
  c->r[3]=c->r[4]+c->r[0]; // 80082C38
  c->r[3]=R8(c->r[3]+0x00000001u); // 80082C3C
  return; // 80082C40
}

// fn_80082C50
void f_80082C50(Ctx* __restrict c) {
  c->r[4]=0u+0x803F0000u; // 80082C50
  c->r[5]=0u+0x80410000u; // 80082C54
  c->r[4]=c->r[4]+0xFFFFB218u; // 80082C58
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80082C5C
  c->r[5]=c->r[5]+0x00000EE0u; // 80082C60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082C64
  c->r[4]=c->r[5]+c->r[0]; // 80082C68
  W8(c->r[4]+0x00000001u,c->r[3]); // 80082C6C
  return; // 80082C70
}

// fn_80082C80
void f_80082C80(Ctx* __restrict c) {
  c->r[3]=0u+0x803F0000u; // 80082C80
  c->r[4]=0u+0x80410000u; // 80082C84
  c->r[3]=c->r[3]+0xFFFFB218u; // 80082C88
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80082C8C
  c->r[4]=c->r[4]+0x00000EE0u; // 80082C90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082C94
  c->r[3]=c->r[4]+c->r[0]; // 80082C98
  c->r[3]=R32(c->r[3]+0x000001A8u); // 80082C9C
  return; // 80082CA0
}

// fn_80082CB0
void f_80082CB0(Ctx* __restrict c) {
  c->r[4]=0u+0x803F0000u; // 80082CB0
  c->r[5]=0u+0x80410000u; // 80082CB4
  c->r[4]=c->r[4]+0xFFFFB218u; // 80082CB8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80082CBC
  c->r[5]=c->r[5]+0x00000EE0u; // 80082CC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082CC4
  c->r[4]=c->r[5]+c->r[0]; // 80082CC8
  W32(c->r[4]+0x000001A8u,c->r[3]); // 80082CCC
  return; // 80082CD0
}

// fn_80082CE0
void f_80082CE0(Ctx* __restrict c) {
  c->r[3]=0u+0x803F0000u; // 80082CE0
  c->r[4]=0u+0x80410000u; // 80082CE4
  c->r[3]=c->r[3]+0xFFFFB218u; // 80082CE8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80082CEC
  c->r[4]=c->r[4]+0x00000EE0u; // 80082CF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082CF4
  c->r[3]=c->r[4]+c->r[0]; // 80082CF8
  c->r[3]=R32(c->r[3]+0x000001ACu); // 80082CFC
  return; // 80082D00
}

// fn_80082D10
void f_80082D10(Ctx* __restrict c) {
  c->r[4]=0u+0x803F0000u; // 80082D10
  c->r[5]=0u+0x80410000u; // 80082D14
  c->r[4]=c->r[4]+0xFFFFB218u; // 80082D18
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80082D1C
  c->r[5]=c->r[5]+0x00000EE0u; // 80082D20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082D24
  c->r[4]=c->r[5]+c->r[0]; // 80082D28
  W32(c->r[4]+0x000001ACu,c->r[3]); // 80082D2C
  return; // 80082D30
}

// fn_80082D40
void f_80082D40(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80082D40
  cmpu(c,0,c->r[0],0x0000000Au); // 80082D44
  if (crb(c,1)) return; // 80082D48
  c->r[5]=0u+0x803F0000u; // 80082D4C
  c->r[6]=0u+0x80410000u; // 80082D50
  c->r[5]=c->r[5]+0xFFFFB218u; // 80082D54
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 80082D58
  c->r[6]=c->r[6]+0x00000EE0u; // 80082D5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082D60
  c->r[0]=c->r[6]+c->r[0]; // 80082D64
  c->r[3]=c->r[0]+c->r[3]; // 80082D68
  W8(c->r[3]+0x000004D0u,c->r[4]); // 80082D6C
  return; // 80082D70
}

// fn_80082D80
void f_80082D80(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80082D80
  cmpu(c,0,c->r[0],0x0000000Au); // 80082D84
  if (crb(c,1)) { goto L_80082DB4; } // 80082D88
  c->r[4]=0u+0x803F0000u; // 80082D8C
  c->r[5]=0u+0x80410000u; // 80082D90
  c->r[4]=c->r[4]+0xFFFFB218u; // 80082D94
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 80082D98
  c->r[5]=c->r[5]+0x00000EE0u; // 80082D9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082DA0
  c->r[0]=c->r[5]+c->r[0]; // 80082DA4
  c->r[3]=c->r[0]+c->r[3]; // 80082DA8
  c->r[3]=R8(c->r[3]+0x000004D0u); // 80082DAC
  return; // 80082DB0
L_80082DB4:;
  c->r[3]=0u+0x00000002u; // 80082DB4
  return; // 80082DB8
}

// fn_80082DC0
void f_80082DC0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 80082DC0
  W32(c->r[13]+0xFFFFB8A8u,c->r[0]); // 80082DC4
  return; // 80082DC8
}

// fn_80082DD0
void f_80082DD0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80082DD0
  W32(c->r[13]+0xFFFFB8A8u,c->r[0]); // 80082DD4
  return; // 80082DD8
}

// fn_80082DE0
void f_80082DE0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB8A8u); // 80082DE0
  return; // 80082DE4
}

// fn_80082DF0
void f_80082DF0(Ctx* __restrict c) {
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF8708u); // 80082DF0
  return; // 80082DF4
}

// fn_80082E00
void f_80082E00(Ctx* __restrict c) {
  W16(c->r[13]+0xFFFF8708u,c->r[3]); // 80082E00
  return; // 80082E04
}

// fn_80082E10
void f_80082E10(Ctx* __restrict c) {
  c->r[3]=0u+0x803F0000u; // 80082E10
  c->r[4]=0u+0x80410000u; // 80082E14
  c->r[3]=c->r[3]+0xFFFFB218u; // 80082E18
  c->r[5]=0u+0x00000001u; // 80082E1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80082E20
  c->r[4]=c->r[4]+0x00000EE0u; // 80082E24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1768); // 80082E28
  c->r[3]=c->r[4]+c->r[0]; // 80082E2C
  W8(c->r[3]+0x00000002u,c->r[5]); // 80082E30
  return; // 80082E34
}

// fn_80082E40
void f_80082E40(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 80082E40
  c->r[3]=c->r[3]+0x00000EE0u; // 80082E44
  c->r[0]=R8(c->r[3]+0x00000002u); // 80082E48
  cmps(c,0,(int32_t)c->r[0],0); // 80082E4C
  if (crb(c,2)) { goto L_80082E5C; } // 80082E50
  c->r[3]=0u+0x00000001u; // 80082E54
  return; // 80082E58
L_80082E5C:;
  c->r[0]=R8(c->r[3]+0x000006EAu); // 80082E5C
  cmps(c,0,(int32_t)c->r[0],0); // 80082E60
  if (crb(c,2)) { goto L_80082E70; } // 80082E64
  c->r[3]=0u+0x00000001u; // 80082E68
  return; // 80082E6C
L_80082E70:;
  c->r[0]=R8(c->r[3]+0x00000DD2u); // 80082E70
  cmps(c,0,(int32_t)c->r[0],0); // 80082E74
  if (crb(c,2)) { goto L_80082E84; } // 80082E78
  c->r[3]=0u+0x00000001u; // 80082E7C
  return; // 80082E80
L_80082E84:;
  c->r[0]=R8(c->r[3]+0x000014BAu); // 80082E84
  cmps(c,0,(int32_t)c->r[0],0); // 80082E88
  if (crb(c,2)) { goto L_80082E98; } // 80082E8C
  c->r[3]=0u+0x00000001u; // 80082E90
  return; // 80082E94
L_80082E98:;
  c->r[3]=0u+0x00000000u; // 80082E98
  return; // 80082E9C
}

// fn_80082EA0
void f_80082EA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082EA0
  c->r[0]=c->lr; // 80082EA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082EA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80082EAC
  c->r[31]=0u+0x00000000u; // 80082EB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80082EB4
  c->r[30]=0u+0x80360000u; // 80082EB8
  c->r[30]=c->r[30]+0x000017A0u; // 80082EBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80082EC0
  c->r[29]=c->r[3]|c->r[3]; // 80082EC4
  goto L_80082EE8; // 80082EC8
L_80082ECC:;
  c->r[4]=c->r[29]|c->r[29]; // 80082ECC
  c->lr=0x80082ED4u; f_802EE984(c); // 80082ED0
  cmps(c,0,(int32_t)c->r[3],0); // 80082ED4
  if (!crb(c,2)) { goto L_80082EE0; } // 80082ED8
  goto L_80082EF8; // 80082EDC
L_80082EE0:;
  c->r[30]=c->r[30]+0x00000004u; // 80082EE0
  c->r[31]=c->r[31]+0x00000001u; // 80082EE4
L_80082EE8:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80082EE8
  cmps(c,0,(int32_t)c->r[3],0); // 80082EEC
  if (!crb(c,2)) { IRQCHK(c); goto L_80082ECC; } // 80082EF0
  c->r[31]=0u+0xFFFFFFFFu; // 80082EF4
L_80082EF8:;
  cmps(c,0,(int32_t)c->r[31],-1); // 80082EF8
  if (!crb(c,2)) { goto L_80082F08; } // 80082EFC
  c->r[3]=0u+0x00000000u; // 80082F00
  goto L_80082F14; // 80082F04
L_80082F08:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80082F08
  c->r[3]=c->r[13]+0xFFFF8870u; // 80082F0C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80082F10
L_80082F14:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082F14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80082F18
  c->r[30]=R32(c->r[1]+0x00000018u); // 80082F1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80082F20
  c->lr=c->r[0]; // 80082F24
  c->r[1]=c->r[1]+0x00000020u; // 80082F28
  return; // 80082F2C
}

// fn_80082F30
void f_80082F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082F30
  c->r[0]=c->lr; // 80082F34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80082F38
  c->r[11]=c->r[1]+0x00000020u; // 80082F3C
  c->lr=0x80082F44u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80082F40
  c->r[30]=0u+0x80360000u; // 80082F44
  c->r[27]=c->r[3]|c->r[3]; // 80082F48
  c->r[30]=c->r[30]+0x000017A0u; // 80082F4C
  c->r[28]=0u+0x00000000u; // 80082F50
  c->r[29]=c->r[13]+0xFFFF8870u; // 80082F54
  c->r[31]=c->r[13]+0xFFFF8870u; // 80082F58
  goto L_80082F94; // 80082F5C
L_80082F60:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80082F60
  c->r[0]=R32(c->r[3]+0x00000000u); // 80082F64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80082F68
  c->r[3]=R32(c->r[30]+c->r[0]); // 80082F6C
  c->lr=0x80082F74u; f_800684D0(c); // 80082F70
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[3]); // 80082F74
  if (!crb(c,2)) { goto L_80082F8C; } // 80082F78
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80082F7C
  c->r[3]=c->r[13]+0xFFFF8870u; // 80082F80
  c->r[3]=R32(c->r[3]+c->r[0]); // 80082F84
  goto L_80082FA0; // 80082F88
L_80082F8C:;
  c->r[29]=c->r[29]+0x00000004u; // 80082F8C
  c->r[28]=c->r[28]+0x00000001u; // 80082F90
L_80082F94:;
  cmps(c,0,(int32_t)c->r[31],0); // 80082F94
  if (!crb(c,2)) { IRQCHK(c); goto L_80082F60; } // 80082F98
  c->r[3]=0u+0x00000000u; // 80082F9C
L_80082FA0:;
  c->r[11]=c->r[1]+0x00000020u; // 80082FA0
  c->lr=0x80082FA8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80082FA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80082FA8
  c->lr=c->r[0]; // 80082FAC
  c->r[1]=c->r[1]+0x00000020u; // 80082FB0
  return; // 80082FB4
}

// fn_80082FC0
void f_80082FC0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[13]+0xFFFF8870u); // 80082FC0
  goto L_80082FDC; // 80082FC4
L_80082FC8:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80082FC8
  if (!crb(c,2)) { goto L_80082FD8; } // 80082FCC
  c->r[3]=c->r[4]|c->r[4]; // 80082FD0
  return; // 80082FD4
L_80082FD8:;
  c->r[4]=c->r[4]+0x00000034u; // 80082FD8
L_80082FDC:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80082FDC
  cmps(c,0,(int32_t)c->r[0],-1); // 80082FE0
  if (!crb(c,2)) { IRQCHK(c); goto L_80082FC8; } // 80082FE4
  c->r[3]=0u+0x00000000u; // 80082FE8
  return; // 80082FEC
}

// fn_80082FF0
void f_80082FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80082FF0
  c->r[0]=c->lr; // 80082FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80082FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80082FFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083000
  c->r[30]=c->r[3]|c->r[3]; // 80083004
  c->r[3]=c->r[13]+0xFFFF8870u; // 80083008
  goto L_80083054; // 8008300C
L_80083010:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80083010
  c->r[4]=c->r[30]|c->r[30]; // 80083014
  c->r[5]=0u+0x0000000Bu; // 80083018
  c->lr=0x80083020u; f_802EEAA0(c); // 8008301C
  goto L_80083044; // 80083020
L_80083024:;
  c->r[4]=c->r[30]|c->r[30]; // 80083024
  c->r[5]=0u+0x0000000Au; // 80083028
  c->lr=0x80083030u; f_802EEAA0(c); // 8008302C
  cmps(c,0,(int32_t)c->r[3],0); // 80083030
  if (!crb(c,2)) { goto L_80083040; } // 80083034
  c->r[3]=c->r[31]|c->r[31]; // 80083038
  goto L_80083064; // 8008303C
L_80083040:;
  c->r[31]=c->r[31]+0x00000034u; // 80083040
L_80083044:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 80083044
  cmps(c,0,(int32_t)c->r[3],0); // 80083048
  if (!crb(c,2)) { IRQCHK(c); goto L_80083024; } // 8008304C
  goto L_80083060; // 80083050
L_80083054:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 80083054
  cmps(c,0,(int32_t)c->r[31],0); // 80083058
  if (!crb(c,2)) { IRQCHK(c); goto L_80083010; } // 8008305C
L_80083060:;
  c->r[3]=0u+0x00000000u; // 80083060
L_80083064:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80083068
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008306C
  c->lr=c->r[0]; // 80083070
  c->r[1]=c->r[1]+0x00000010u; // 80083074
  return; // 80083078
}

// fn_80083080
void f_80083080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083080
  c->r[0]=c->lr; // 80083084
  c->r[6]=0u+0x80360000u; // 80083088
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008308C
  c->r[6]=c->r[6]+0x000017A0u; // 80083090
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80083094
  c->r[31]=c->r[5]|c->r[5]; // 80083098
  W32(c->r[1]+0x00000018u,c->r[30]); // 8008309C
  c->r[30]=c->r[4]|c->r[4]; // 800830A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800830A4
  c->r[29]=c->r[3]|c->r[3]; // 800830A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800830AC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800830B0
  c->r[3]=R32(c->r[6]+c->r[0]); // 800830B4
  c->lr=0x800830BCu; f_800684D0(c); // 800830B8
  W32(c->r[30]+0x00000000u,c->r[3]); // 800830BC
  c->r[0]=R32(c->r[29]+0x00000014u); // 800830C0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800830C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800830C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800830CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800830D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800830D4
  c->lr=c->r[0]; // 800830D8
  c->r[1]=c->r[1]+0x00000020u; // 800830DC
  return; // 800830E0
}

// fn_800830F0
void f_800830F0(Ctx* __restrict c) {
  c->r[4]=0u+0x80360000u; // 800830F0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800830F4
  c->r[4]=c->r[4]+0x000017A0u; // 800830F8
  c->r[3]=R32(c->r[4]+c->r[0]); // 800830FC
  f_800684D0(c); return; // 80083100
}

// fn_80083110
void f_80083110(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],20); // 80083110
  if (!crb(c,2)) { goto L_80083120; } // 80083114
  c->r[3]=0u+0x00000005u; // 80083118
  return; // 8008311C
L_80083120:;
  cmps(c,0,(int32_t)c->r[3],0); // 80083120
  if (crb(c,0)) { goto L_8008313C; } // 80083124
  c->r[5]=0u+0x803F0000u; // 80083128
  c->r[5]=c->r[5]+0xFFFFB218u; // 8008312C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000000Au); // 80083130
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80083134
  if (crb(c,1)) { goto L_80083144; } // 80083138
L_8008313C:;
  c->r[3]=0u+0x00000005u; // 8008313C
  return; // 80083140
L_80083144:;
  cmps(c,0,(int32_t)c->r[4],0); // 80083144
  if (crb(c,0)) { goto L_80083160; } // 80083148
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8008314C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80083150
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[0]); // 80083154
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80083158
  if (crb(c,1)) { goto L_80083168; } // 8008315C
L_80083160:;
  c->r[3]=0u+0x00000005u; // 80083160
  return; // 80083164
L_80083168:;
  c->r[5]=0u+0x80360000u; // 80083168
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8008316C
  c->r[5]=c->r[5]+0x00001C10u; // 80083170
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80083174
  c->r[3]=R32(c->r[5]+c->r[3]); // 80083178
  c->r[3]=R32(c->r[3]+c->r[0]); // 8008317C
  return; // 80083180
}

// fn_80083190
void f_80083190(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],8); // 80083190
  if (crb(c,2)) { goto L_800831A8; } // 80083194
  c->r[0]=c->r[3]+0xFFFFFFEDu; // 80083198
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8008319C
  cmpu(c,0,c->r[0],0x00000001u); // 800831A0
  if (crb(c,1)) { goto L_800831B0; } // 800831A4
L_800831A8:;
  c->r[3]=0u+0xFFFFFFFFu; // 800831A8
  return; // 800831AC
L_800831B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800831B0
  if (crb(c,0)) { goto L_800831CC; } // 800831B4
  c->r[5]=0u+0x803F0000u; // 800831B8
  c->r[5]=c->r[5]+0xFFFFB218u; // 800831BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000000Au); // 800831C0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800831C4
  if (crb(c,1)) { goto L_800831D4; } // 800831C8
L_800831CC:;
  c->r[3]=0u+0xFFFFFFFFu; // 800831CC
  return; // 800831D0
L_800831D4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800831D4
  if (crb(c,0)) { goto L_800831F0; } // 800831D8
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800831DC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800831E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[0]); // 800831E4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800831E8
  if (crb(c,1)) { goto L_800831F8; } // 800831EC
L_800831F0:;
  c->r[3]=0u+0xFFFFFFFFu; // 800831F0
  return; // 800831F4
L_800831F8:;
  c->r[5]=0u+0x80360000u; // 800831F8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800831FC
  c->r[5]=c->r[5]+0x00001C68u; // 80083200
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80083204
  c->r[3]=R32(c->r[5]+c->r[3]); // 80083208
  c->r[3]=R32(c->r[3]+c->r[0]); // 8008320C
  return; // 80083210
}

// fn_80083220
void f_80083220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083220
  c->r[0]=c->lr; // 80083224
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083228
  c->r[0]=c->r[3]+0xFFFFFFEDu; // 8008322C
  cmpu(c,0,c->r[0],0x00000001u); // 80083230
  if (!crb(c,1)) { goto L_8008324C; } // 80083234
  cmps(c,1,(int32_t)c->r[3],8); // 80083238
  if (crb(c,6)) { goto L_80083260; } // 8008323C
  cmps(c,0,(int32_t)c->r[3],-1); // 80083240
  if (crb(c,2)) { goto L_80083280; } // 80083244
  goto L_80083294; // 80083248
L_8008324C:;
  c->r[3]=0u+0x00000002u; // 8008324C
  c->r[4]=0u+0x00000007u; // 80083250
  c->r[5]=0u+0xFFFFFFFFu; // 80083254
  c->lr=0x8008325Cu; f_80036DF0(c); // 80083258
  goto L_80083390; // 8008325C
L_80083260:;
  c->r[3]=0u+0x00000002u; // 80083260
  c->r[4]=0u+0x00000008u; // 80083264
  c->r[5]=0u+0xFFFFFFFFu; // 80083268
  c->lr=0x80083270u; f_80036DF0(c); // 8008326C
  c->r[3]=0u+0x00000009u; // 80083270
  c->r[4]=0u+0x00000001u; // 80083274
  c->lr=0x8008327Cu; f_80036EC0(c); // 80083278
  goto L_80083390; // 8008327C
L_80083280:;
  c->r[3]=0u+0x00000002u; // 80083280
  c->r[4]=0u+0xFFFFFFFFu; // 80083284
  c->r[5]=0u+0xFFFFFFFFu; // 80083288
  c->lr=0x80083290u; f_80036DF0(c); // 8008328C
  goto L_80083390; // 80083290
L_80083294:;
  if (crb(c,6)) { goto L_800832A4; } // 80083294
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80083298
  cmpu(c,0,c->r[0],0x00000001u); // 8008329C
  if (crb(c,1)) { goto L_800832AC; } // 800832A0
L_800832A4:;
  c->r[3]=0u+0xFFFFFFFFu; // 800832A4
  goto L_8008330C; // 800832A8
L_800832AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800832AC
  if (crb(c,0)) { goto L_800832C8; } // 800832B0
  c->r[5]=0u+0x803F0000u; // 800832B4
  c->r[5]=c->r[5]+0xFFFFB218u; // 800832B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000000Au); // 800832BC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800832C0
  if (crb(c,1)) { goto L_800832D0; } // 800832C4
L_800832C8:;
  c->r[3]=0u+0xFFFFFFFFu; // 800832C8
  goto L_8008330C; // 800832CC
L_800832D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800832D0
  if (crb(c,0)) { goto L_800832EC; } // 800832D4
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800832D8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800832DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[0]); // 800832E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800832E4
  if (crb(c,1)) { goto L_800832F4; } // 800832E8
L_800832EC:;
  c->r[3]=0u+0xFFFFFFFFu; // 800832EC
  goto L_8008330C; // 800832F0
L_800832F4:;
  c->r[5]=0u+0x80360000u; // 800832F4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800832F8
  c->r[5]=c->r[5]+0x00001C68u; // 800832FC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80083300
  c->r[3]=R32(c->r[5]+c->r[3]); // 80083304
  c->r[3]=R32(c->r[3]+c->r[0]); // 80083308
L_8008330C:;
  c->r[0]=c->r[3]+0xFFFFFFB4u; // 8008330C
  cmpu(c,0,c->r[0],0x00000002u); // 80083310
  if (!crb(c,1)) { goto L_80083344; } // 80083314
  cmps(c,0,(int32_t)c->r[3],81); // 80083318
  if (crb(c,2)) { goto L_80083344; } // 8008331C
  cmps(c,0,(int32_t)c->r[3],79); // 80083320
  if (crb(c,2)) { goto L_80083358; } // 80083324
  cmps(c,0,(int32_t)c->r[3],80); // 80083328
  if (crb(c,2)) { goto L_8008336C; } // 8008332C
  cmps(c,0,(int32_t)c->r[3],82); // 80083330
  if (crb(c,2)) { goto L_8008336C; } // 80083334
  cmps(c,0,(int32_t)c->r[3],83); // 80083338
  if (crb(c,2)) { goto L_80083380; } // 8008333C
  goto L_80083390; // 80083340
L_80083344:;
  c->r[3]=0u+0x00000002u; // 80083344
  c->r[4]=0u+0x00000003u; // 80083348
  c->r[5]=0u+0xFFFFFFFFu; // 8008334C
  c->lr=0x80083354u; f_80036DF0(c); // 80083350
  goto L_80083390; // 80083354
L_80083358:;
  c->r[3]=0u+0x00000002u; // 80083358
  c->r[4]=0u+0x00000004u; // 8008335C
  c->r[5]=0u+0xFFFFFFFFu; // 80083360
  c->lr=0x80083368u; f_80036DF0(c); // 80083364
  goto L_80083390; // 80083368
L_8008336C:;
  c->r[3]=0u+0x00000002u; // 8008336C
  c->r[4]=0u+0x00000005u; // 80083370
  c->r[5]=0u+0xFFFFFFFFu; // 80083374
  c->lr=0x8008337Cu; f_80036DF0(c); // 80083378
  goto L_80083390; // 8008337C
L_80083380:;
  c->r[3]=0u+0x00000002u; // 80083380
  c->r[4]=0u+0x00000006u; // 80083384
  c->r[5]=0u+0xFFFFFFFFu; // 80083388
  c->lr=0x80083390u; f_80036DF0(c); // 8008338C
L_80083390:;
  c->r[3]=0u+0x0000000Bu; // 80083390
  c->r[4]=0u+0x00000000u; // 80083394
  c->lr=0x8008339Cu; f_800374D0(c); // 80083398
  c->r[3]=0u+0x0000000Bu; // 8008339C
  c->r[4]=0u+0x00000001u; // 800833A0
  c->lr=0x800833A8u; f_800374D0(c); // 800833A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800833A8
  c->lr=c->r[0]; // 800833AC
  c->r[1]=c->r[1]+0x00000010u; // 800833B0
  return; // 800833B4
}

// fn_800833C0
void f_800833C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800833C0
  c->r[0]=c->lr; // 800833C4
  c->r[3]=0u+0x80300000u; // 800833C8
  {uint32_t ea=c->r[3]+0xFFFFE490u; c->r[11]=R32(ea); c->r[3]=ea;} // 800833CC
  c->r[8]=0u+0x80300000u; // 800833D0
  {uint32_t ea=c->r[8]+0xFFFFE49Cu; c->r[7]=R32(ea); c->r[8]=ea;} // 800833D4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800833D8
  c->r[12]=0u+0x00000000u; // 800833DC
  c->r[10]=R32(c->r[3]+0x00000004u); // 800833E0
  c->r[4]=0u+0x00000000u; // 800833E4
  c->r[9]=R32(c->r[3]+0x00000008u); // 800833E8
  c->r[5]=0u+0x000000A0u; // 800833EC
  c->r[6]=R32(c->r[8]+0x00000004u); // 800833F0
  c->r[0]=R32(c->r[8]+0x00000008u); // 800833F4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800833F8
  c->r[31]=0u+0x80410000u; // 800833FC
  c->r[3]=c->r[31]+0x00003168u; // 80083400
  W32(c->r[1]+0x00000020u,c->r[12]); // 80083404
  W32(c->r[1]+0x00000024u,c->r[12]); // 80083408
  W32(c->r[1]+0x00000028u,c->r[12]); // 8008340C
  W32(c->r[1]+0x00000014u,c->r[11]); // 80083410
  W32(c->r[1]+0x00000018u,c->r[10]); // 80083414
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 80083418
  W32(c->r[1]+0x00000008u,c->r[7]); // 8008341C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 80083420
  W32(c->r[1]+0x00000010u,c->r[0]); // 80083424
  c->lr=0x8008342Cu; f_80004714(c); // 80083428
  c->r[3]=c->r[31]+0x00003168u; // 8008342C
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083430
  c->r[0]=0u+0xFFFFFFFFu; // 80083434
  W32(c->r[3]+0x00000004u,c->r[0]); // 80083438
  W32(c->r[3]+0x00000010u,c->r[0]); // 8008343C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80083440
  W32(c->r[3]+0x00000008u,c->r[0]); // 80083444
  W32(c->r[3]+0x00000024u,c->r[0]); // 80083448
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8008344C
  W32(c->r[3]+0x00000030u,c->r[0]); // 80083450
  W32(c->r[3]+0x00000034u,c->r[0]); // 80083454
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80083458
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8008345C
  W32(c->r[3]+0x00000048u,c->r[0]); // 80083460
  W32(c->r[3]+0x00000040u,c->r[0]); // 80083464
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80083468
  W32(c->r[3]+0x00000044u,c->r[0]); // 8008346C
  W32(c->r[3]+0x00000050u,c->r[0]); // 80083470
  W16(c->r[3]+0x0000005Eu,c->r[0]); // 80083474
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80083478
  c->r[0]=R32(c->r[1]+0x00000044u); // 8008347C
  c->lr=c->r[0]; // 80083480
  c->r[1]=c->r[1]+0x00000040u; // 80083484
  return; // 80083488
}

// fn_80083490
void f_80083490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083490
  c->r[0]=c->lr; // 80083494
  W32(c->r[1]+0x00000034u,c->r[0]); // 80083498
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8008349C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800834A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800834A4
  c->r[31]=0u+0x80440000u; // 800834A8
  c->r[31]=c->r[31]+0xFFFF88D0u; // 800834AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800834B0
  c->r[30]=0u+0x80410000u; // 800834B4
  c->r[30]=c->r[30]+0x00003168u; // 800834B8
  c->r[3]=R32(c->r[30]+0x00000004u); // 800834BC
  cmps(c,0,(int32_t)c->r[3],-1); // 800834C0
  if (crb(c,2)) { goto L_800834E4; } // 800834C4
  c->lr=0x800834CCu; f_80038130(c); // 800834C8
  cmps(c,0,(int32_t)c->r[3],0); // 800834CC
  if (!crb(c,2)) { goto L_80083508; } // 800834D0
  c->r[0]=0u+0xFFFFFFFFu; // 800834D4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800834D8
  W32(c->r[30]+0x00000004u,c->r[0]); // 800834DC
  goto L_80083508; // 800834E0
L_800834E4:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 800834E4
  cmps(c,0,(int32_t)c->r[3],-1); // 800834E8
  if (crb(c,2)) { goto L_80083508; } // 800834EC
  c->lr=0x800834F4u; f_80039AD0(c); // 800834F0
  c->r[4]=R32(c->r[30]+0x00000010u); // 800834F4
  c->r[0]=0u+0xFFFFFFFFu; // 800834F8
  W32(c->r[30]+0x00000004u,c->r[3]); // 800834FC
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80083500
  W32(c->r[30]+0x00000010u,c->r[0]); // 80083504
L_80083508:;
  c->lr=0x8008350Cu; f_80032D40(c); // 80083508
  cmps(c,0,(int32_t)c->r[3],2); // 8008350C
  if (crb(c,2)) { goto L_8008357C; } // 80083510
  c->r[30]=0u+0x80410000u; // 80083514
  c->r[30]=c->r[30]+0x00003168u; // 80083518
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 8008351C
  cmps(c,0,(int32_t)c->r[3],-1); // 80083520
  if (crb(c,2)) { goto L_80083534; } // 80083524
  c->lr=0x8008352Cu; f_80039EB0(c); // 80083528
  c->r[0]=0u+0xFFFFFFFFu; // 8008352C
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 80083530
L_80083534:;
  c->r[3]=0u+0x80410000u; // 80083534
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083538
  c->r[3]=c->r[3]+0x00003168u; // 8008353C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083540
  fcmp(c,0,c->f[1],c->f[0]); // 80083544
  if (crb(c,2)) { goto L_80083550; } // 80083548
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8008354C
L_80083550:;
  c->r[30]=0u+0x80410000u; // 80083550
  {uint32_t ea=c->r[2]+0xFFFF8C5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80083554
  c->r[30]=c->r[30]+0x00003168u; // 80083558
  c->r[3]=R32(c->r[30]+0x00000024u); // 8008355C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 80083560
  cmps(c,0,(int32_t)c->r[3],-1); // 80083564
  if (crb(c,2)) { goto L_80083B78; } // 80083568
  c->lr=0x80083570u; f_80039EB0(c); // 8008356C
  c->r[0]=0u+0xFFFFFFFFu; // 80083570
  W32(c->r[30]+0x00000024u,c->r[0]); // 80083574
  goto L_80083B78; // 80083578
L_8008357C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8008357C
  cmps(c,0,(int32_t)c->r[0],1); // 80083580
  if (!crb(c,2)) { goto L_8008359C; } // 80083584
  c->r[3]=0u+0x80410000u; // 80083588
  c->r[0]=0u+0x00000004u; // 8008358C
  c->r[3]=c->r[3]+0x00003168u; // 80083590
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80083594
  goto L_800835F8; // 80083598
L_8008359C:;
  c->lr=0x800835A0u; f_800C53D0(c); // 8008359C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800835A0
  cmps(c,0,(int32_t)c->r[0],-1); // 800835A4
  if (crb(c,2)) { goto L_800835C0; } // 800835A8
  cmps(c,0,(int32_t)c->r[0],0); // 800835AC
  if (crb(c,2)) { goto L_800835D4; } // 800835B0
  cmps(c,0,(int32_t)c->r[0],1); // 800835B4
  if (crb(c,2)) { goto L_800835E8; } // 800835B8
  goto L_800835F8; // 800835BC
L_800835C0:;
  c->r[3]=0u+0x80410000u; // 800835C0
  c->r[0]=0u+0x00000000u; // 800835C4
  c->r[3]=c->r[3]+0x00003168u; // 800835C8
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800835CC
  goto L_800835F8; // 800835D0
L_800835D4:;
  c->r[3]=0u+0x80410000u; // 800835D4
  c->r[0]=0u+0x00000001u; // 800835D8
  c->r[3]=c->r[3]+0x00003168u; // 800835DC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800835E0
  goto L_800835F8; // 800835E4
L_800835E8:;
  c->r[3]=0u+0x80410000u; // 800835E8
  c->r[0]=0u+0x00000002u; // 800835EC
  c->r[3]=c->r[3]+0x00003168u; // 800835F0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800835F4
L_800835F8:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800835F8
  cmps(c,0,(int32_t)c->r[0],1); // 800835FC
  if (crb(c,2)) { goto L_80083610; } // 80083600
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80083604
  c->r[0]=rotl(c->r[0],0)&0x000001FCu; cr0(c,c->r[0]); // 80083608
  if (!crb(c,2)) { goto L_8008361C; } // 8008360C
L_80083610:;
  c->lr=0x80083614u; f_800CEB20(c); // 80083610
  cmps(c,0,(int32_t)c->r[3],1); // 80083614
  if (!crb(c,2)) { goto L_80083684; } // 80083618
L_8008361C:;
  c->r[30]=0u+0x80410000u; // 8008361C
  c->r[0]=0u+0x00000000u; // 80083620
  c->r[30]=c->r[30]+0x00003168u; // 80083624
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 80083628
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8008362C
  cmps(c,0,(int32_t)c->r[3],-1); // 80083630
  if (crb(c,2)) { goto L_80083644; } // 80083634
  c->lr=0x8008363Cu; f_80039EB0(c); // 80083638
  c->r[0]=0u+0xFFFFFFFFu; // 8008363C
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 80083640
L_80083644:;
  c->r[30]=0u+0x80410000u; // 80083644
  c->r[30]=c->r[30]+0x00003168u; // 80083648
  c->r[3]=R32(c->r[30]+0x00000024u); // 8008364C
  cmps(c,0,(int32_t)c->r[3],-1); // 80083650
  if (crb(c,2)) { goto L_80083664; } // 80083654
  c->lr=0x8008365Cu; f_80039EB0(c); // 80083658
  c->r[0]=0u+0xFFFFFFFFu; // 8008365C
  W32(c->r[30]+0x00000024u,c->r[0]); // 80083660
L_80083664:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80083664
  c->r[3]=0u+0x80410000u; // 80083668
  c->r[3]=c->r[3]+0x00003168u; // 8008366C
  {uint32_t ea=c->r[2]+0xFFFF8C60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083670
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80083674
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80083678
  if (crb(c,2)) { goto L_80083750; } // 8008367C
  goto L_80083B78; // 80083680
L_80083684:;
  c->lr=0x80083688u; f_800657E0(c); // 80083684
  c->r[0]=c->r[3]^0x80000000u; // 80083688
  c->r[30]=0u+0x43300000u; // 8008368C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80083690
  {uint32_t ea=c->r[2]+0xFFFF8C78u; c->f[2]=RF64(ea);} // 80083694
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083698
  {uint32_t ea=c->r[2]+0xFFFF8C5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008369C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800836A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800836A4
  fcmp(c,0,c->f[1],c->f[0]); // 800836A8
  if (!crb(c,1)) { goto L_80083728; } // 800836AC
  c->lr=0x800836B4u; f_80065760(c); // 800836B0
  c->r[0]=c->r[3]^0x80000000u; // 800836B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800836B8
  {uint32_t ea=c->r[2]+0xFFFF8C78u; c->f[2]=RF64(ea);} // 800836BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800836C0
  {uint32_t ea=c->r[2]+0xFFFF8C64u; c->f[0]=c->ps1[0]=RF32(ea);} // 800836C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800836C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800836CC
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800836D0
  c->lr=0x800836D8u; f_800657E0(c); // 800836D4
  c->r[0]=c->r[3]^0x80000000u; // 800836D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800836DC
  {uint32_t ea=c->r[2]+0xFFFF8C78u; c->f[1]=RF64(ea);} // 800836E0
  W32(c->r[1]+0x00000010u,c->r[30]); // 800836E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800836E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800836EC
  fcmp(c,0,c->f[0],c->f[31]); // 800836F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800836F4
  if (!crb(c,2)) { goto L_80083728; } // 800836F8
  c->r[30]=0u+0x80410000u; // 800836FC
  c->r[30]=c->r[30]+0x00003168u; // 80083700
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 80083704
  cmps(c,0,(int32_t)c->r[0],-1); // 80083708
  if (!crb(c,2)) { goto L_80083750; } // 8008370C
  c->r[3]=0u+0x000001ADu; // 80083710
  c->lr=0x80083718u; f_80039AD0(c); // 80083714
  {uint32_t ea=c->r[2]+0xFFFF8C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083718
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 8008371C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 80083720
  goto L_80083750; // 80083724
L_80083728:;
  c->r[30]=0u+0x80410000u; // 80083728
  c->r[30]=c->r[30]+0x00003168u; // 8008372C
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 80083730
  cmps(c,0,(int32_t)c->r[3],-1); // 80083734
  if (crb(c,2)) { goto L_80083750; } // 80083738
  c->lr=0x80083740u; f_80039EB0(c); // 8008373C
  {uint32_t ea=c->r[2]+0xFFFF8C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80083740
  c->r[0]=0u+0xFFFFFFFFu; // 80083744
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 80083748
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8008374C
L_80083750:;
  c->r[31]=0u+0x80410000u; // 80083750
  c->r[31]=c->r[31]+0x00003168u; // 80083754
  c->r[0]=R32(c->r[31]+0x00000020u); // 80083758
  cmps(c,0,(int32_t)c->r[0],0); // 8008375C
  if (crb(c,2)) { goto L_80083788; } // 80083760
  cmps(c,0,(int32_t)c->r[0],1); // 80083764
  if (crb(c,2)) { goto L_80083818; } // 80083768
  cmps(c,0,(int32_t)c->r[0],2); // 8008376C
  if (crb(c,2)) { goto L_800838CC; } // 80083770
  cmps(c,0,(int32_t)c->r[0],3); // 80083774
  if (crb(c,2)) { goto L_80083980; } // 80083778
  cmps(c,0,(int32_t)c->r[0],4); // 8008377C
  if (crb(c,2)) { goto L_80083A6C; } // 80083780
  goto L_80083B0C; // 80083784
L_80083788:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80083788
  cmps(c,0,(int32_t)c->r[0],1); // 8008378C
  if (crb(c,2)) { goto L_800837A8; } // 80083790
  cmps(c,0,(int32_t)c->r[0],2); // 80083794
  if (crb(c,2)) { goto L_800837D0; } // 80083798
  cmps(c,0,(int32_t)c->r[0],4); // 8008379C
  if (crb(c,2)) { goto L_800837F8; } // 800837A0
  goto L_80083B0C; // 800837A4
L_800837A8:;
  c->r[3]=0u+0x000001A9u; // 800837A8
  c->lr=0x800837B0u; f_80039AD0(c); // 800837AC
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800837B0
  c->r[4]=0u+0x00000001u; // 800837B4
  c->r[0]=0u+0x00000000u; // 800837B8
  W32(c->r[31]+0x00000024u,c->r[3]); // 800837BC
  W32(c->r[31]+0x00000020u,c->r[4]); // 800837C0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800837C4
  W32(c->r[31]+0x00000028u,c->r[0]); // 800837C8
  goto L_80083B0C; // 800837CC
L_800837D0:;
  c->r[3]=0u+0x000001AAu; // 800837D0
  c->lr=0x800837D8u; f_80039AD0(c); // 800837D4
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800837D8
  c->r[4]=0u+0x00000002u; // 800837DC
  c->r[0]=0u+0x00000000u; // 800837E0
  W32(c->r[31]+0x00000024u,c->r[3]); // 800837E4
  W32(c->r[31]+0x00000020u,c->r[4]); // 800837E8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800837EC
  W32(c->r[31]+0x00000028u,c->r[0]); // 800837F0
  goto L_80083B0C; // 800837F4
L_800837F8:;
  c->r[3]=0u+0x000001ACu; // 800837F8
  c->lr=0x80083800u; f_80039AD0(c); // 800837FC
  {uint32_t ea=c->r[2]+0xFFFF8C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083800
  c->r[0]=0u+0x00000004u; // 80083804
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083808
  W32(c->r[31]+0x00000020u,c->r[0]); // 8008380C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083810
  goto L_80083B0C; // 80083814
L_80083818:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80083818
  cmps(c,0,(int32_t)c->r[0],0); // 8008381C
  if (crb(c,2)) { goto L_80083838; } // 80083820
  cmps(c,0,(int32_t)c->r[0],2); // 80083824
  if (crb(c,2)) { goto L_80083874; } // 80083828
  cmps(c,0,(int32_t)c->r[0],4); // 8008382C
  if (crb(c,2)) { goto L_800838A4; } // 80083830
  goto L_80083B0C; // 80083834
L_80083838:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 80083838
  c->r[0]=c->r[3]+0x00000001u; // 8008383C
  W32(c->r[31]+0x00000028u,c->r[0]); // 80083840
  cmps(c,0,(int32_t)c->r[0],30); // 80083844
  if (crb(c,0)) { goto L_80083B0C; } // 80083848
  c->r[30]=0u+0x00000000u; // 8008384C
  W32(c->r[31]+0x00000028u,c->r[30]); // 80083850
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083854
  c->lr=0x8008385Cu; f_80039EB0(c); // 80083858
  {uint32_t ea=c->r[2]+0xFFFF8C60u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008385C
  c->r[0]=0u+0xFFFFFFFFu; // 80083860
  W32(c->r[31]+0x00000024u,c->r[0]); // 80083864
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083868
  W32(c->r[31]+0x00000020u,c->r[30]); // 8008386C
  goto L_80083B0C; // 80083870
L_80083874:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083874
  c->lr=0x8008387Cu; f_80039EB0(c); // 80083878
  c->r[3]=0u+0x000001AAu; // 8008387C
  c->lr=0x80083884u; f_80039AD0(c); // 80083880
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083884
  c->r[4]=0u+0x00000002u; // 80083888
  c->r[0]=0u+0x00000000u; // 8008388C
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083890
  W32(c->r[31]+0x00000020u,c->r[4]); // 80083894
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083898
  W32(c->r[31]+0x00000028u,c->r[0]); // 8008389C
  goto L_80083B0C; // 800838A0
L_800838A4:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 800838A4
  c->lr=0x800838ACu; f_80039EB0(c); // 800838A8
  c->r[3]=0u+0x000001ACu; // 800838AC
  c->lr=0x800838B4u; f_80039AD0(c); // 800838B0
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800838B4
  c->r[0]=0u+0x00000004u; // 800838B8
  W32(c->r[31]+0x00000024u,c->r[3]); // 800838BC
  W32(c->r[31]+0x00000020u,c->r[0]); // 800838C0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800838C4
  goto L_80083B0C; // 800838C8
L_800838CC:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800838CC
  cmps(c,0,(int32_t)c->r[0],0); // 800838D0
  if (crb(c,2)) { goto L_800838EC; } // 800838D4
  cmps(c,0,(int32_t)c->r[0],1); // 800838D8
  if (crb(c,2)) { goto L_80083928; } // 800838DC
  cmps(c,0,(int32_t)c->r[0],4); // 800838E0
  if (crb(c,2)) { goto L_80083958; } // 800838E4
  goto L_80083B0C; // 800838E8
L_800838EC:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 800838EC
  c->r[0]=c->r[3]+0x00000001u; // 800838F0
  W32(c->r[31]+0x00000028u,c->r[0]); // 800838F4
  cmps(c,0,(int32_t)c->r[0],30); // 800838F8
  if (crb(c,0)) { goto L_80083B0C; } // 800838FC
  c->r[30]=0u+0x00000000u; // 80083900
  W32(c->r[31]+0x00000028u,c->r[30]); // 80083904
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083908
  c->lr=0x80083910u; f_80039EB0(c); // 8008390C
  {uint32_t ea=c->r[2]+0xFFFF8C60u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083910
  c->r[0]=0u+0xFFFFFFFFu; // 80083914
  W32(c->r[31]+0x00000024u,c->r[0]); // 80083918
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8008391C
  W32(c->r[31]+0x00000020u,c->r[30]); // 80083920
  goto L_80083B0C; // 80083924
L_80083928:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083928
  c->lr=0x80083930u; f_80039EB0(c); // 8008392C
  c->r[3]=0u+0x000001A9u; // 80083930
  c->lr=0x80083938u; f_80039AD0(c); // 80083934
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083938
  c->r[4]=0u+0x00000001u; // 8008393C
  c->r[0]=0u+0x00000000u; // 80083940
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083944
  W32(c->r[31]+0x00000020u,c->r[4]); // 80083948
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8008394C
  W32(c->r[31]+0x00000028u,c->r[0]); // 80083950
  goto L_80083B0C; // 80083954
L_80083958:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083958
  c->lr=0x80083960u; f_80039EB0(c); // 8008395C
  c->r[3]=0u+0x000001ACu; // 80083960
  c->lr=0x80083968u; f_80039AD0(c); // 80083964
  {uint32_t ea=c->r[2]+0xFFFF8C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083968
  c->r[0]=0u+0x00000004u; // 8008396C
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083970
  W32(c->r[31]+0x00000020u,c->r[0]); // 80083974
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083978
  goto L_80083B0C; // 8008397C
L_80083980:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80083980
  cmps(c,0,(int32_t)c->r[0],0); // 80083984
  if (crb(c,2)) { goto L_800839A8; } // 80083988
  cmps(c,0,(int32_t)c->r[0],1); // 8008398C
  if (crb(c,2)) { goto L_800839E4; } // 80083990
  cmps(c,0,(int32_t)c->r[0],2); // 80083994
  if (crb(c,2)) { goto L_80083A14; } // 80083998
  cmps(c,0,(int32_t)c->r[0],4); // 8008399C
  if (crb(c,2)) { goto L_80083A44; } // 800839A0
  goto L_80083B0C; // 800839A4
L_800839A8:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 800839A8
  c->r[0]=c->r[3]+0x00000001u; // 800839AC
  W32(c->r[31]+0x00000028u,c->r[0]); // 800839B0
  cmps(c,0,(int32_t)c->r[0],30); // 800839B4
  if (crb(c,0)) { goto L_80083B0C; } // 800839B8
  c->r[30]=0u+0x00000000u; // 800839BC
  W32(c->r[31]+0x00000028u,c->r[30]); // 800839C0
  c->r[3]=R32(c->r[31]+0x00000024u); // 800839C4
  c->lr=0x800839CCu; f_80039EB0(c); // 800839C8
  {uint32_t ea=c->r[2]+0xFFFF8C60u; c->f[0]=c->ps1[0]=RF32(ea);} // 800839CC
  c->r[0]=0u+0xFFFFFFFFu; // 800839D0
  W32(c->r[31]+0x00000024u,c->r[0]); // 800839D4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 800839D8
  W32(c->r[31]+0x00000020u,c->r[30]); // 800839DC
  goto L_80083B0C; // 800839E0
L_800839E4:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 800839E4
  c->lr=0x800839ECu; f_80039EB0(c); // 800839E8
  c->r[3]=0u+0x000001A9u; // 800839EC
  c->lr=0x800839F4u; f_80039AD0(c); // 800839F0
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800839F4
  c->r[4]=0u+0x00000001u; // 800839F8
  c->r[0]=0u+0x00000000u; // 800839FC
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083A00
  W32(c->r[31]+0x00000020u,c->r[4]); // 80083A04
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083A08
  W32(c->r[31]+0x00000028u,c->r[0]); // 80083A0C
  goto L_80083B0C; // 80083A10
L_80083A14:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083A14
  c->lr=0x80083A1Cu; f_80039EB0(c); // 80083A18
  c->r[3]=0u+0x000001AAu; // 80083A1C
  c->lr=0x80083A24u; f_80039AD0(c); // 80083A20
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083A24
  c->r[4]=0u+0x00000002u; // 80083A28
  c->r[0]=0u+0x00000000u; // 80083A2C
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083A30
  W32(c->r[31]+0x00000020u,c->r[4]); // 80083A34
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083A38
  W32(c->r[31]+0x00000028u,c->r[0]); // 80083A3C
  goto L_80083B0C; // 80083A40
L_80083A44:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083A44
  c->lr=0x80083A4Cu; f_80039EB0(c); // 80083A48
  c->r[3]=0u+0x000001ACu; // 80083A4C
  c->lr=0x80083A54u; f_80039AD0(c); // 80083A50
  {uint32_t ea=c->r[2]+0xFFFF8C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083A54
  c->r[0]=0u+0x00000004u; // 80083A58
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083A5C
  W32(c->r[31]+0x00000020u,c->r[0]); // 80083A60
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083A64
  goto L_80083B0C; // 80083A68
L_80083A6C:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80083A6C
  cmps(c,0,(int32_t)c->r[0],0); // 80083A70
  if (crb(c,2)) { goto L_80083A8C; } // 80083A74
  cmps(c,0,(int32_t)c->r[0],1); // 80083A78
  if (crb(c,2)) { goto L_80083AB0; } // 80083A7C
  cmps(c,0,(int32_t)c->r[0],2); // 80083A80
  if (crb(c,2)) { goto L_80083AE0; } // 80083A84
  goto L_80083B0C; // 80083A88
L_80083A8C:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083A8C
  c->lr=0x80083A94u; f_80039EB0(c); // 80083A90
  {uint32_t ea=c->r[2]+0xFFFF8C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80083A94
  c->r[3]=0u+0xFFFFFFFFu; // 80083A98
  c->r[0]=0u+0x00000000u; // 80083A9C
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083AA0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083AA4
  W32(c->r[31]+0x00000020u,c->r[0]); // 80083AA8
  goto L_80083B0C; // 80083AAC
L_80083AB0:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083AB0
  c->lr=0x80083AB8u; f_80039EB0(c); // 80083AB4
  c->r[3]=0u+0x000001A9u; // 80083AB8
  c->lr=0x80083AC0u; f_80039AD0(c); // 80083ABC
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083AC0
  c->r[4]=0u+0x00000001u; // 80083AC4
  c->r[0]=0u+0x00000000u; // 80083AC8
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083ACC
  W32(c->r[31]+0x00000020u,c->r[4]); // 80083AD0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083AD4
  W32(c->r[31]+0x00000028u,c->r[0]); // 80083AD8
  goto L_80083B0C; // 80083ADC
L_80083AE0:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 80083AE0
  c->lr=0x80083AE8u; f_80039EB0(c); // 80083AE4
  c->r[3]=0u+0x000001AAu; // 80083AE8
  c->lr=0x80083AF0u; f_80039AD0(c); // 80083AEC
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083AF0
  c->r[4]=0u+0x00000002u; // 80083AF4
  c->r[0]=0u+0x00000000u; // 80083AF8
  W32(c->r[31]+0x00000024u,c->r[3]); // 80083AFC
  W32(c->r[31]+0x00000020u,c->r[4]); // 80083B00
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 80083B04
  W32(c->r[31]+0x00000028u,c->r[0]); // 80083B08
L_80083B0C:;
  c->r[3]=0u+0x80410000u; // 80083B0C
  {uint32_t ea=c->r[2]+0xFFFF8C5Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80083B10
  c->r[3]=c->r[3]+0x00003168u; // 80083B14
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80083B18
  fcmp(c,0,c->f[2],c->f[0]); // 80083B1C
  if (!crb(c,0)) { goto L_80083B44; } // 80083B20
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083B24
  {uint32_t ea=c->r[2]+0xFFFF8C74u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083B28
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80083B2C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80083B30
  fcmp(c,0,c->f[1],c->f[0]); // 80083B34
  if (!crb(c,0)) { goto L_80083B60; } // 80083B38
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80083B3C
  goto L_80083B60; // 80083B40
L_80083B44:;
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083B44
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[0]=c->ps1[0]=RF32(ea);} // 80083B48
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 80083B4C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80083B50
  fcmp(c,0,c->f[1],c->f[0]); // 80083B54
  if (!crb(c,1)) { goto L_80083B60; } // 80083B58
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 80083B5C
L_80083B60:;
  c->r[5]=0u+0x80410000u; // 80083B60
  c->r[4]=0u+0x00000000u; // 80083B64
  c->r[5]=c->r[5]+0x00003168u; // 80083B68
  c->r[3]=R32(c->r[5]+0x00000004u); // 80083B6C
  {uint32_t ea=c->r[5]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80083B70
  c->lr=0x80083B78u; f_80037C70(c); // 80083B74
L_80083B78:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80083B78
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80083B7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80083B80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80083B84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80083B88
  c->lr=c->r[0]; // 80083B8C
  c->r[1]=c->r[1]+0x00000030u; // 80083B90
  return; // 80083B94
}

// fn_80083BA0
void f_80083BA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083BA0
  c->r[0]=c->lr; // 80083BA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083BA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083BAC
  c->r[31]=0u+0x80410000u; // 80083BB0
  c->r[31]=c->r[31]+0x00003168u; // 80083BB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083BB8
  c->r[30]=c->r[3]|c->r[3]; // 80083BBC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80083BC0
  cmpu(c,0,c->r[3],c->r[0]); // 80083BC4
  if (crb(c,2)) { goto L_80083C00; } // 80083BC8
  c->r[0]=R32(c->r[31]+0x00000004u); // 80083BCC
  cmps(c,0,(int32_t)c->r[0],-1); // 80083BD0
  if (crb(c,2)) { goto L_80083BEC; } // 80083BD4
  c->r[3]=c->r[0]|c->r[0]; // 80083BD8
  c->r[4]=0u+0x0000001Eu; // 80083BDC
  c->lr=0x80083BE4u; f_80039E60(c); // 80083BE0
  W32(c->r[31]+0x00000010u,c->r[30]); // 80083BE4
  goto L_80083C00; // 80083BE8
L_80083BEC:;
  c->lr=0x80083BF0u; f_80039AD0(c); // 80083BEC
  c->r[0]=0u+0xFFFFFFFFu; // 80083BF0
  W32(c->r[31]+0x00000004u,c->r[3]); // 80083BF4
  W32(c->r[31]+0x0000000Cu,c->r[30]); // 80083BF8
  W32(c->r[31]+0x00000010u,c->r[0]); // 80083BFC
L_80083C00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083C00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80083C04
  c->r[30]=R32(c->r[1]+0x00000008u); // 80083C08
  c->lr=c->r[0]; // 80083C0C
  c->r[1]=c->r[1]+0x00000010u; // 80083C10
  return; // 80083C14
}

// fn_80083C20
void f_80083C20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083C20
  c->r[0]=c->lr; // 80083C24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083C28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083C2C
  c->r[31]=0u+0x80410000u; // 80083C30
  c->r[31]=c->r[31]+0x00003168u; // 80083C34
  c->r[3]=R32(c->r[31]+0x00000004u); // 80083C38
  cmps(c,0,(int32_t)c->r[3],-1); // 80083C3C
  if (crb(c,2)) { goto L_80083C58; } // 80083C40
  c->r[4]=0u+0x0000001Eu; // 80083C44
  c->lr=0x80083C4Cu; f_80039E60(c); // 80083C48
  c->r[0]=0u+0xFFFFFFFFu; // 80083C4C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80083C50
  W32(c->r[31]+0x00000004u,c->r[0]); // 80083C54
L_80083C58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083C58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80083C5C
  c->lr=c->r[0]; // 80083C60
  c->r[1]=c->r[1]+0x00000010u; // 80083C64
  return; // 80083C68
}

// fn_80083C70
void f_80083C70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083C70
  c->r[0]=c->lr; // 80083C74
  c->r[4]=0u+0x80360000u; // 80083C78
  cmps(c,0,(int32_t)c->r[3],0); // 80083C7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083C80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80083C84
  c->r[4]=c->r[4]+0x00001CC0u; // 80083C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083C8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083C90
  c->r[31]=R32(c->r[4]+c->r[0]); // 80083C94
  if (!crb(c,2)) { goto L_80083CB0; } // 80083C98
  c->r[4]=0u+0x803F0000u; // 80083C9C
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083CA0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083CA4
  cmps(c,0,(int32_t)c->r[0],4); // 80083CA8
  if (crb(c,2)) { goto L_80083D90; } // 80083CAC
L_80083CB0:;
  cmps(c,0,(int32_t)c->r[3],1); // 80083CB0
  if (!crb(c,2)) { goto L_80083CCC; } // 80083CB4
  c->r[4]=0u+0x803F0000u; // 80083CB8
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083CBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083CC0
  cmps(c,0,(int32_t)c->r[0],4); // 80083CC4
  if (crb(c,2)) { goto L_80083D90; } // 80083CC8
L_80083CCC:;
  cmps(c,0,(int32_t)c->r[3],2); // 80083CCC
  if (!crb(c,2)) { goto L_80083CE8; } // 80083CD0
  c->r[4]=0u+0x803F0000u; // 80083CD4
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083CD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083CDC
  cmps(c,0,(int32_t)c->r[0],1); // 80083CE0
  if (crb(c,2)) { goto L_80083D90; } // 80083CE4
L_80083CE8:;
  cmps(c,0,(int32_t)c->r[3],3); // 80083CE8
  if (!crb(c,2)) { goto L_80083D04; } // 80083CEC
  c->r[4]=0u+0x803F0000u; // 80083CF0
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083CF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083CF8
  cmps(c,0,(int32_t)c->r[0],0); // 80083CFC
  if (crb(c,2)) { goto L_80083D90; } // 80083D00
L_80083D04:;
  cmps(c,0,(int32_t)c->r[3],4); // 80083D04
  if (!crb(c,2)) { goto L_80083D20; } // 80083D08
  c->r[4]=0u+0x803F0000u; // 80083D0C
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083D10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083D14
  cmps(c,0,(int32_t)c->r[0],0); // 80083D18
  if (crb(c,2)) { goto L_80083D90; } // 80083D1C
L_80083D20:;
  cmps(c,0,(int32_t)c->r[3],5); // 80083D20
  if (!crb(c,2)) { goto L_80083D3C; } // 80083D24
  c->r[4]=0u+0x803F0000u; // 80083D28
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083D2C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083D30
  cmps(c,0,(int32_t)c->r[0],0); // 80083D34
  if (crb(c,2)) { goto L_80083D90; } // 80083D38
L_80083D3C:;
  cmps(c,0,(int32_t)c->r[3],6); // 80083D3C
  if (!crb(c,2)) { goto L_80083D58; } // 80083D40
  c->r[4]=0u+0x803F0000u; // 80083D44
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083D48
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083D4C
  cmps(c,0,(int32_t)c->r[0],0); // 80083D50
  if (crb(c,2)) { goto L_80083D90; } // 80083D54
L_80083D58:;
  cmps(c,0,(int32_t)c->r[3],6); // 80083D58
  if (!crb(c,2)) { goto L_80083D74; } // 80083D5C
  c->r[4]=0u+0x803F0000u; // 80083D60
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083D64
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083D68
  cmps(c,0,(int32_t)c->r[0],5); // 80083D6C
  if (crb(c,2)) { goto L_80083D90; } // 80083D70
L_80083D74:;
  cmps(c,0,(int32_t)c->r[3],10); // 80083D74
  if (!crb(c,2)) { goto L_80083D94; } // 80083D78
  c->r[4]=0u+0x803F0000u; // 80083D7C
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083D80
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083D84
  cmps(c,0,(int32_t)c->r[0],0); // 80083D88
  if (!crb(c,2)) { goto L_80083D94; } // 80083D8C
L_80083D90:;
  c->r[31]=0u+0xFFFFFFFFu; // 80083D90
L_80083D94:;
  cmps(c,0,(int32_t)c->r[3],2); // 80083D94
  if (!crb(c,2)) { goto L_80083DB0; } // 80083D98
  c->r[4]=0u+0x803F0000u; // 80083D9C
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083DA0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083DA4
  cmps(c,0,(int32_t)c->r[0],5); // 80083DA8
  if (crb(c,2)) { goto L_80083E78; } // 80083DAC
L_80083DB0:;
  cmps(c,0,(int32_t)c->r[3],5); // 80083DB0
  if (!crb(c,2)) { goto L_80083DD0; } // 80083DB4
  c->r[4]=0u+0x803F0000u; // 80083DB8
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083DBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083DC0
  cmps(c,0,(int32_t)c->r[0],7); // 80083DC4
  if (!crb(c,2)) { goto L_80083DD0; } // 80083DC8
  goto L_80083E78; // 80083DCC
L_80083DD0:;
  cmps(c,0,(int32_t)c->r[3],8); // 80083DD0
  if (!crb(c,2)) { goto L_80083DF0; } // 80083DD4
  c->r[4]=0u+0x803F0000u; // 80083DD8
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083DDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083DE0
  cmps(c,0,(int32_t)c->r[0],8); // 80083DE4
  if (!crb(c,2)) { goto L_80083DF0; } // 80083DE8
  c->r[31]=0u+0x0000019Fu; // 80083DEC
L_80083DF0:;
  cmps(c,0,(int32_t)c->r[3],8); // 80083DF0
  if (!crb(c,2)) { goto L_80083E10; } // 80083DF4
  c->r[4]=0u+0x803F0000u; // 80083DF8
  c->r[4]=c->r[4]+0xFFFFB218u; // 80083DFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000006u); // 80083E00
  cmps(c,0,(int32_t)c->r[0],9); // 80083E04
  if (!crb(c,2)) { goto L_80083E10; } // 80083E08
  c->r[31]=0u+0x0000019Fu; // 80083E0C
L_80083E10:;
  cmps(c,0,(int32_t)c->r[3],10); // 80083E10
  if (!crb(c,2)) { goto L_80083E30; } // 80083E14
  c->r[3]=0u+0x803F0000u; // 80083E18
  c->r[3]=c->r[3]+0xFFFFB218u; // 80083E1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000006u); // 80083E20
  cmps(c,0,(int32_t)c->r[0],1); // 80083E24
  if (!crb(c,2)) { goto L_80083E30; } // 80083E28
  c->r[31]=0u+0x000001A1u; // 80083E2C
L_80083E30:;
  c->r[30]=0u+0x80410000u; // 80083E30
  c->r[30]=c->r[30]+0x00003168u; // 80083E34
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80083E38
  cmpu(c,0,c->r[31],c->r[0]); // 80083E3C
  if (crb(c,2)) { goto L_80083E78; } // 80083E40
  c->r[3]=R32(c->r[30]+0x00000004u); // 80083E44
  cmps(c,0,(int32_t)c->r[3],-1); // 80083E48
  if (crb(c,2)) { goto L_80083E60; } // 80083E4C
  c->r[4]=0u+0x0000001Eu; // 80083E50
  c->lr=0x80083E58u; f_80039E60(c); // 80083E54
  W32(c->r[30]+0x00000010u,c->r[31]); // 80083E58
  goto L_80083E78; // 80083E5C
L_80083E60:;
  c->r[3]=c->r[31]|c->r[31]; // 80083E60
  c->lr=0x80083E68u; f_80039AD0(c); // 80083E64
  c->r[0]=0u+0xFFFFFFFFu; // 80083E68
  W32(c->r[30]+0x00000004u,c->r[3]); // 80083E6C
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 80083E70
  W32(c->r[30]+0x00000010u,c->r[0]); // 80083E74
L_80083E78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083E78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80083E7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80083E80
  c->lr=c->r[0]; // 80083E84
  c->r[1]=c->r[1]+0x00000010u; // 80083E88
  return; // 80083E8C
}

// fn_80083E90
void f_80083E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083E90
  c->r[0]=c->lr; // 80083E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083E98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083E9C
  c->r[31]=0u+0x80440000u; // 80083EA0
  c->r[31]=c->r[31]+0xFFFF88D0u; // 80083EA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80083EA8
  c->r[30]=c->r[3]|c->r[3]; // 80083EAC
  c->lr=0x80083EB4u; f_80032D40(c); // 80083EB0
  cmps(c,0,(int32_t)c->r[3],2); // 80083EB4
  if (!crb(c,2)) { goto L_80083ED0; } // 80083EB8
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80083EBC
  c->r[0]=c->r[0]&0x00000014u; cr0(c,c->r[0]); // 80083EC0
  if (crb(c,2)) { goto L_80083ED0; } // 80083EC4
  c->r[3]=0u+0xFFFFFFFFu; // 80083EC8
  goto L_80083ED8; // 80083ECC
L_80083ED0:;
  c->r[3]=c->r[30]|c->r[30]; // 80083ED0
  c->lr=0x80083ED8u; f_800393F0(c); // 80083ED4
L_80083ED8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083ED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80083EDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80083EE0
  c->lr=c->r[0]; // 80083EE4
  c->r[1]=c->r[1]+0x00000010u; // 80083EE8
  return; // 80083EEC
}

// fn_80083EF0
void f_80083EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083EF0
  c->r[0]=c->lr; // 80083EF4
  c->r[4]=0u+0x80410000u; // 80083EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083EFC
  c->r[4]=c->r[4]+0x00003168u; // 80083F00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083F04
  c->r[31]=c->r[3]|c->r[3]; // 80083F08
  c->r[3]=R32(c->r[4]+0x00000008u); // 80083F0C
  cmps(c,0,(int32_t)c->r[3],-1); // 80083F10
  if (crb(c,2)) { goto L_80083F20; } // 80083F14
  c->r[4]=0u+0x0000000Fu; // 80083F18
  c->lr=0x80083F20u; f_80039780(c); // 80083F1C
L_80083F20:;
  c->r[3]=c->r[31]|c->r[31]; // 80083F20
  c->lr=0x80083F28u; f_800393F0(c); // 80083F24
  c->r[4]=0u+0x80410000u; // 80083F28
  c->r[4]=c->r[4]+0x00003168u; // 80083F2C
  W32(c->r[4]+0x00000008u,c->r[3]); // 80083F30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80083F34
  c->r[0]=R32(c->r[1]+0x00000014u); // 80083F38
  c->lr=c->r[0]; // 80083F3C
  c->r[1]=c->r[1]+0x00000010u; // 80083F40
  return; // 80083F44
}

// fn_80083F50
void f_80083F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80083F50
  c->r[0]=c->lr; // 80083F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80083F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80083F5C
  c->r[31]=0u+0x80410000u; // 80083F60
  c->r[31]=c->r[31]+0x00003168u; // 80083F64
  c->r[3]=R32(c->r[31]+0x00000038u); // 80083F68
  cmps(c,0,(int32_t)c->r[3],0); // 80083F6C
  if (!crb(c,2)) { goto L_80083F8C; } // 80083F70
  c->lr=0x80083F78u; f_80036450(c); // 80083F74
  c->lr=0x80083F7Cu; f_800364D0(c); // 80083F78
  c->r[0]=R32(c->r[31]+0x00000038u); // 80083F7C
  W32(c->r[31]+0x00000048u,c->r[3]); // 80083F80
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 80083F84
  goto L_80084020; // 80083F88
L_80083F8C:;
  cmps(c,0,(int32_t)c->r[3],1); // 80083F8C
  if (!crb(c,2)) { goto L_80083FC4; } // 80083F90
  c->r[3]=R32(c->r[31]+0x00000048u); // 80083F94
  c->lr=0x80083F9Cu; f_80036540(c); // 80083F98
  c->r[3]=R32(c->r[31]+0x00000038u); // 80083F9C
  c->lr=0x80083FA4u; f_80036450(c); // 80083FA0
  c->lr=0x80083FA8u; f_800364D0(c); // 80083FA4
  c->r[4]=R32(c->r[31]+0x00000038u); // 80083FA8
  c->r[0]=0u+0xFFFFFFFFu; // 80083FAC
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 80083FB0
  W32(c->r[31]+0x00000040u,c->r[4]); // 80083FB4
  W32(c->r[31]+0x00000044u,c->r[0]); // 80083FB8
  W32(c->r[31]+0x00000050u,c->r[0]); // 80083FBC
  goto L_80084020; // 80083FC0
L_80083FC4:;
  cmps(c,0,(int32_t)c->r[3],2); // 80083FC4
  if (!crb(c,2)) { goto L_80083FF0; } // 80083FC8
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 80083FCC
  c->lr=0x80083FD4u; f_80036540(c); // 80083FD0
  c->r[3]=R32(c->r[31]+0x00000038u); // 80083FD4
  c->lr=0x80083FDCu; f_80036450(c); // 80083FD8
  c->lr=0x80083FE0u; f_800364D0(c); // 80083FDC
  c->r[0]=R32(c->r[31]+0x00000038u); // 80083FE0
  W32(c->r[31]+0x00000050u,c->r[3]); // 80083FE4
  W32(c->r[31]+0x00000044u,c->r[0]); // 80083FE8
  goto L_80084020; // 80083FEC
L_80083FF0:;
  if (!crb(c,1)) { goto L_80084020; } // 80083FF0
  c->r[0]=R32(c->r[31]+0x00000048u); // 80083FF4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80083FF8
  if (crb(c,2)) { goto L_80084020; } // 80083FFC
  c->r[3]=R32(c->r[31]+0x00000050u); // 80084000
  c->lr=0x80084008u; f_80036540(c); // 80084004
  c->r[3]=R32(c->r[31]+0x00000038u); // 80084008
  c->lr=0x80084010u; f_80036450(c); // 8008400C
  c->lr=0x80084014u; f_800364D0(c); // 80084010
  c->r[0]=R32(c->r[31]+0x00000038u); // 80084014
  W32(c->r[31]+0x00000054u,c->r[3]); // 80084018
  W32(c->r[31]+0x00000048u,c->r[0]); // 8008401C
L_80084020:;
  c->r[3]=0u+0x80410000u; // 80084020
  c->r[0]=0u+0x00000000u; // 80084024
  c->r[3]=c->r[3]+0x00003168u; // 80084028
  W8(c->r[3]+0x0000005Cu,c->r[0]); // 8008402C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80084030
  c->r[0]=R32(c->r[1]+0x00000014u); // 80084034
  c->lr=c->r[0]; // 80084038
  c->r[1]=c->r[1]+0x00000010u; // 8008403C
  return; // 80084040
}

// fn_80084050
void f_80084050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084050
  c->r[0]=c->lr; // 80084054
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084058
  c->lr=0x80084060u; f_80083F50(c); // 8008405C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80084060
  c->r[3]=0u+0x00000000u; // 80084064
  c->lr=c->r[0]; // 80084068
  c->r[1]=c->r[1]+0x00000010u; // 8008406C
  return; // 80084070
}

// fn_80084080
void f_80084080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084080
  c->r[0]=c->lr; // 80084084
  c->r[4]=0u+0x80080000u; // 80084088
  c->r[5]=0u+0x00000000u; // 8008408C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084090
  c->r[0]=0u+0x00000001u; // 80084094
  c->r[4]=c->r[4]+0x00004050u; // 80084098
  c->r[8]=0u+0x00000008u; // 8008409C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800840A0
  c->r[31]=0u+0x80410000u; // 800840A4
  c->r[31]=c->r[31]+0x00003168u; // 800840A8
  c->r[9]=0u+0x00000001u; // 800840AC
  c->r[7]=c->r[31]+0x00000000u; // 800840B0
  W32(c->r[7]+0x00000038u,c->r[3]); // 800840B4
  c->r[6]=c->r[31]+0x000000A0u; // 800840B8
  c->r[3]=c->r[31]+0x000010A0u; // 800840BC
  W8(c->r[7]+0x0000005Cu,c->r[0]); // 800840C0
  c->r[6]=c->r[6]+0x00001000u; // 800840C4
  c->r[7]=0u+0x00001000u; // 800840C8
  c->lr=0x800840D0u; f_80129610(c); // 800840CC
  c->r[3]=c->r[31]+0x000010A0u; // 800840D0
  c->lr=0x800840D8u; f_80129CA0(c); // 800840D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800840D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800840DC
  c->lr=c->r[0]; // 800840E0
  c->r[1]=c->r[1]+0x00000010u; // 800840E4
  return; // 800840E8
}

// fn_800840F0
void f_800840F0(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 800840F0
  c->r[3]=c->r[3]+0x00003168u; // 800840F4
  c->r[3]=R8(c->r[3]+0x0000005Cu); // 800840F8
  return; // 800840FC
}

// fn_80084100
void f_80084100(Ctx* __restrict c) {
  return; // 80084100
}

// fn_80084110
void f_80084110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084110
  c->r[0]=c->lr; // 80084114
  W32(c->r[1]+0x00000044u,c->r[0]); // 80084118
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8008411C
  c->r[31]=0u+0x80440000u; // 80084120
  c->r[31]=c->r[31]+0xFFFF88D0u; // 80084124
  c->lr=0x8008412Cu; f_800847B0(c); // 80084128
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; cr0(c,c->r[0]); // 8008412C
  if (crb(c,2)) { goto L_80084148; } // 80084130
  cmps(c,0,(int32_t)c->r[0],1); // 80084134
  if (crb(c,2)) { goto L_8008424C; } // 80084138
  cmps(c,0,(int32_t)c->r[0],-1); // 8008413C
  if (crb(c,2)) { goto L_8008424C; } // 80084140
  goto L_80084348; // 80084144
L_80084148:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80084148
  c->r[0]=rotl(c->r[0],0)&0x00000180u; cr0(c,c->r[0]); // 8008414C
  if (crb(c,2)) { goto L_80084184; } // 80084150
  c->r[4]=c->r[1]+0x00000008u; // 80084154
  c->r[5]=c->r[1]+0x00000020u; // 80084158
  c->r[6]=c->r[1]+0x00000014u; // 8008415C
  c->r[3]=0u+0x00000002u; // 80084160
  c->lr=0x80084168u; f_8001D330(c); // 80084164
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80084168
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008416C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80084170
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 80084174
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 80084178
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8008417C
  goto L_80084198; // 80084180
L_80084184:;
  c->r[4]=0u+0x80360000u; // 80084184
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000058u); // 80084188
  c->r[4]=c->r[4]+0x00001D18u; // 8008418C
  c->r[5]=c->r[1]+0x0000002Cu; // 80084190
  c->lr=0x80084198u; f_8010DA60(c); // 80084194
L_80084198:;
  c->r[4]=c->r[1]+0x00000008u; // 80084198
  c->r[5]=c->r[1]+0x00000020u; // 8008419C
  c->r[6]=c->r[1]+0x00000014u; // 800841A0
  c->r[3]=0u+0x00000002u; // 800841A4
  c->lr=0x800841ACu; f_8001D330(c); // 800841A8
  c->r[3]=c->r[1]+0x00000008u; // 800841AC
  c->r[4]=c->r[1]+0x0000002Cu; // 800841B0
  c->r[5]=c->r[3]|c->r[3]; // 800841B4
  c->lr=0x800841BCu; f_8012EAE0(c); // 800841B8
  c->r[3]=c->r[1]+0x00000008u; // 800841BC
  c->r[4]=c->r[3]|c->r[3]; // 800841C0
  c->lr=0x800841C8u; f_8012EB30(c); // 800841C4
  c->r[31]=0u+0x80410000u; // 800841C8
  c->r[3]=c->r[1]+0x00000008u; // 800841CC
  c->r[31]=c->r[31]+0x00003168u; // 800841D0
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800841D4
  c->r[4]=c->r[3]|c->r[3]; // 800841D8
  c->lr=0x800841E0u; f_8012EB10(c); // 800841DC
  c->r[4]=c->r[1]+0x00000008u; // 800841E0
  c->r[3]=c->r[1]+0x0000002Cu; // 800841E4
  c->r[5]=c->r[4]|c->r[4]; // 800841E8
  c->lr=0x800841F0u; f_8012EAB0(c); // 800841EC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800841F0
  c->r[3]=0u+0x00000000u; // 800841F4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800841F8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800841FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80084200
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80084204
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084208
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[1]);} // 8008420C
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084210
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[2]);} // 80084214
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 80084218
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[3]);} // 8008421C
  {uint32_t ea=c->r[31]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 80084220
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[5]);} // 80084224
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[4]);} // 80084228
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 8008422C
  c->lr=0x80084234u; f_8003AA20(c); // 80084230
  c->r[4]=c->r[31]+0x00000074u; // 80084234
  c->r[5]=c->r[31]+0x00000080u; // 80084238
  c->r[6]=c->r[31]+0x0000008Cu; // 8008423C
  c->r[3]=0u+0x00000000u; // 80084240
  c->lr=0x80084248u; f_8003AB00(c); // 80084244
  goto L_80084348; // 80084248
L_8008424C:;
  c->r[4]=c->r[1]+0x00000008u; // 8008424C
  c->r[5]=c->r[1]+0x00000020u; // 80084250
  c->r[6]=c->r[1]+0x00000014u; // 80084254
  c->r[3]=0u+0x00000002u; // 80084258
  c->lr=0x80084260u; f_8001D330(c); // 8008425C
  c->r[3]=c->r[1]+0x00000008u; // 80084260
  c->r[4]=c->r[1]+0x00000014u; // 80084264
  c->r[5]=c->r[3]|c->r[3]; // 80084268
  c->lr=0x80084270u; f_8012EAE0(c); // 8008426C
  c->r[3]=c->r[1]+0x00000008u; // 80084270
  c->r[4]=c->r[3]|c->r[3]; // 80084274
  c->lr=0x8008427Cu; f_8012EB30(c); // 80084278
  c->r[4]=0u+0x80410000u; // 8008427C
  c->r[3]=c->r[1]+0x00000008u; // 80084280
  c->r[4]=c->r[4]+0x00003168u; // 80084284
  {uint32_t ea=c->r[4]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084288
  c->r[4]=c->r[3]|c->r[3]; // 8008428C
  c->lr=0x80084294u; f_8012EB10(c); // 80084290
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 80084294
  c->r[0]=rotl(c->r[0],0)&0x00000180u; cr0(c,c->r[0]); // 80084298
  if (crb(c,2)) { goto L_800842BC; } // 8008429C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800842A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800842A4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800842A8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800842AC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800842B0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800842B4
  goto L_800842D0; // 800842B8
L_800842BC:;
  c->r[4]=0u+0x80360000u; // 800842BC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000058u); // 800842C0
  c->r[4]=c->r[4]+0x00001D18u; // 800842C4
  c->r[5]=c->r[1]+0x0000002Cu; // 800842C8
  c->lr=0x800842D0u; f_8010DA60(c); // 800842CC
L_800842D0:;
  c->r[3]=c->r[1]+0x0000002Cu; // 800842D0
  c->lr=0x800842D8u; f_800E45D0(c); // 800842D4
  c->r[31]=0u+0x80410000u; // 800842D8
  c->r[4]=c->r[1]+0x00000008u; // 800842DC
  c->r[31]=c->r[31]+0x00003168u; // 800842E0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800842E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800842E8
  c->r[5]=c->r[4]|c->r[4]; // 800842EC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800842F0
  c->r[3]=c->r[1]+0x0000002Cu; // 800842F4
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[2]);} // 800842F8
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[1]);} // 800842FC
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[0]);} // 80084300
  c->lr=0x80084308u; f_8012EAB0(c); // 80084304
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084308
  c->r[3]=0u+0x00000000u; // 8008430C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80084310
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084314
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 80084318
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8008431C
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[2]);} // 80084320
  {uint32_t ea=c->r[31]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 80084324
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 80084328
  {uint32_t ea=c->r[31]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 8008432C
  c->lr=0x80084334u; f_8003AA20(c); // 80084330
  c->r[4]=c->r[31]+0x00000074u; // 80084334
  c->r[5]=c->r[31]+0x00000080u; // 80084338
  c->r[6]=c->r[31]+0x0000008Cu; // 8008433C
  c->r[3]=0u+0x00000000u; // 80084340
  c->lr=0x80084348u; f_8003AB00(c); // 80084344
L_80084348:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80084348
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8008434C
  c->lr=c->r[0]; // 80084350
  c->r[1]=c->r[1]+0x00000040u; // 80084354
  return; // 80084358
}

// fn_80084360
void f_80084360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084360
  c->r[0]=c->lr; // 80084364
  c->r[3]=0u+0x80300000u; // 80084368
  {uint32_t ea=c->r[3]+0xFFFFE4A8u; c->r[10]=R32(ea); c->r[3]=ea;} // 8008436C
  c->r[5]=0u+0x80300000u; // 80084370
  {uint32_t ea=c->r[5]+0xFFFFE4B4u; c->r[7]=R32(ea); c->r[5]=ea;} // 80084374
  c->r[11]=0u+0x00000000u; // 80084378
  c->r[9]=R32(c->r[3]+0x00000004u); // 8008437C
  c->r[8]=R32(c->r[3]+0x00000008u); // 80084380
  c->r[4]=0u+0x80410000u; // 80084384
  c->r[6]=R32(c->r[5]+0x00000004u); // 80084388
  c->r[4]=c->r[4]+0x00003168u; // 8008438C
  c->r[5]=R32(c->r[5]+0x00000008u); // 80084390
  c->r[3]=0u+0x80080000u; // 80084394
  W32(c->r[1]+0x00000020u,c->r[11]); // 80084398
  c->r[3]=c->r[3]+0x00004100u; // 8008439C
  {uint32_t ea=c->r[2]+0xFFFF8C80u; c->f[12]=c->ps1[12]=RF32(ea);} // 800843A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800843A4
  c->r[0]=0u+0xFFFFFFFFu; // 800843A8
  {uint32_t ea=c->r[2]+0xFFFF8C84u; c->f[11]=c->ps1[11]=RF32(ea);} // 800843AC
  W32(c->r[1]+0x00000024u,c->r[11]); // 800843B0
  {uint32_t ea=c->r[2]+0xFFFF8C88u; c->f[10]=c->ps1[10]=RF32(ea);} // 800843B4
  W32(c->r[1]+0x00000028u,c->r[11]); // 800843B8
  {uint32_t ea=c->r[2]+0xFFFF8C8Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 800843BC
  W32(c->r[1]+0x00000014u,c->r[10]); // 800843C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 800843C4
  W32(c->r[1]+0x00000018u,c->r[9]); // 800843C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 800843CC
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800843D0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 800843D4
  W32(c->r[1]+0x00000008u,c->r[7]); // 800843D8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 800843DC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800843E0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 800843E4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800843E8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800843EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800843F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800843F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800843F8
  W16(c->r[4]+0x0000006Cu,c->r[0]); // 800843FC
  {uint32_t ea=c->r[4]+0x00000060u; WF32(ea,c->f[12]);} // 80084400
  {uint32_t ea=c->r[4]+0x00000064u; WF32(ea,c->f[11]);} // 80084404
  {uint32_t ea=c->r[4]+0x00000068u; WF32(ea,c->f[10]);} // 80084408
  {uint32_t ea=c->r[4]+0x00000070u; WF32(ea,c->f[9]);} // 8008440C
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[8]);} // 80084410
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[7]);} // 80084414
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[6]);} // 80084418
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[5]);} // 8008441C
  {uint32_t ea=c->r[4]+0x00000084u; WF32(ea,c->f[4]);} // 80084420
  {uint32_t ea=c->r[4]+0x00000088u; WF32(ea,c->f[3]);} // 80084424
  {uint32_t ea=c->r[4]+0x0000008Cu; WF32(ea,c->f[2]);} // 80084428
  {uint32_t ea=c->r[4]+0x00000090u; WF32(ea,c->f[1]);} // 8008442C
  {uint32_t ea=c->r[4]+0x00000094u; WF32(ea,c->f[0]);} // 80084430
  c->lr=0x80084438u; f_8001B560(c); // 80084434
  c->r[0]=R32(c->r[1]+0x00000034u); // 80084438
  c->lr=c->r[0]; // 8008443C
  c->r[1]=c->r[1]+0x00000030u; // 80084440
  return; // 80084444
}

// fn_80084450
void f_80084450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084450
  c->r[0]=c->lr; // 80084454
  {uint32_t ea=c->r[2]+0xFFFF8C90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80084458
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008445C
  c->r[0]=0u+0x00000000u; // 80084460
  {uint32_t ea=c->r[2]+0xFFFF8C94u; c->f[2]=c->ps1[2]=RF32(ea);} // 80084464
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80084468
  c->r[31]=0u+0x80410000u; // 8008446C
  c->r[31]=c->r[31]+0x00003168u; // 80084470
  {uint32_t ea=c->r[2]+0xFFFF8C98u; c->f[3]=c->ps1[3]=RF32(ea);} // 80084474
  W32(c->r[1]+0x00000018u,c->r[30]); // 80084478
  c->r[30]=c->r[3]|c->r[3]; // 8008447C
  c->r[3]=0u+0x00000000u; // 80084480
  W32(c->r[1]+0x00000008u,c->r[0]); // 80084484
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80084488
  W32(c->r[1]+0x00000010u,c->r[0]); // 8008448C
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[1]);} // 80084490
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[2]);} // 80084494
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[3]);} // 80084498
  c->lr=0x800844A0u; f_8003A890(c); // 8008449C
  W16(c->r[31]+0x0000006Cu,c->r[30]); // 800844A0
  c->lr=0x800844A8u; f_80084110(c); // 800844A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800844A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800844AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800844B0
  c->lr=c->r[0]; // 800844B4
  c->r[1]=c->r[1]+0x00000020u; // 800844B8
  return; // 800844BC
}

// fn_800844C0
void f_800844C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800844C0
  c->r[0]=c->lr; // 800844C4
  c->r[3]=0u+0x00000000u; // 800844C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800844CC
  c->lr=0x800844D4u; f_8003A980(c); // 800844D0
  c->r[3]=0u+0x80410000u; // 800844D4
  c->r[0]=0u+0xFFFFFFFFu; // 800844D8
  c->r[3]=c->r[3]+0x00003168u; // 800844DC
  W16(c->r[3]+0x0000006Cu,c->r[0]); // 800844E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800844E4
  c->lr=c->r[0]; // 800844E8
  c->r[1]=c->r[1]+0x00000010u; // 800844EC
  return; // 800844F0
}

// fn_80084500
void f_80084500(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084500
  c->r[0]=c->lr; // 80084504
  c->r[3]=0u+0x80300000u; // 80084508
  {uint32_t ea=c->r[3]+0xFFFFE4C0u; c->r[8]=R32(ea); c->r[3]=ea;} // 8008450C
  c->r[5]=0u+0x80300000u; // 80084510
  {uint32_t ea=c->r[5]+0xFFFFE4CCu; c->r[4]=R32(ea); c->r[5]=ea;} // 80084514
  c->r[9]=0u+0x00000000u; // 80084518
  W32(c->r[1]+0x00000034u,c->r[0]); // 8008451C
  c->r[7]=R32(c->r[3]+0x00000004u); // 80084520
  c->r[6]=R32(c->r[3]+0x00000008u); // 80084524
  c->r[3]=R32(c->r[5]+0x00000004u); // 80084528
  c->r[0]=R32(c->r[5]+0x00000008u); // 8008452C
  W32(c->r[1]+0x00000020u,c->r[9]); // 80084530
  W32(c->r[1]+0x00000024u,c->r[9]); // 80084534
  W32(c->r[1]+0x00000028u,c->r[9]); // 80084538
  W32(c->r[1]+0x00000014u,c->r[8]); // 8008453C
  W32(c->r[1]+0x00000018u,c->r[7]); // 80084540
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 80084544
  W32(c->r[1]+0x00000008u,c->r[4]); // 80084548
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8008454C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80084550
  c->lr=0x80084558u; f_80084110(c); // 80084554
  c->r[0]=R32(c->r[1]+0x00000034u); // 80084558
  c->lr=c->r[0]; // 8008455C
  c->r[1]=c->r[1]+0x00000030u; // 80084560
  return; // 80084564
}

// fn_80084570
void f_80084570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084570
  c->r[0]=c->lr; // 80084574
  W32(c->r[1]+0x00000034u,c->r[0]); // 80084578
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8008457C
  c->r[31]=0u+0x80440000u; // 80084580
  c->r[31]=c->r[31]+0xFFFF88D0u; // 80084584
  W32(c->r[1]+0x00000028u,c->r[30]); // 80084588
  c->r[30]=0u+0xFFFFFFFFu; // 8008458C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80084590
  c->r[29]=c->r[4]|c->r[4]; // 80084594
  W32(c->r[1]+0x00000020u,c->r[28]); // 80084598
  c->r[28]=c->r[3]|c->r[3]; // 8008459C
  c->lr=0x800845A4u; f_80032D40(c); // 800845A0
  cmps(c,0,(int32_t)c->r[3],2); // 800845A4
  if (!crb(c,2)) { goto L_800845C0; } // 800845A8
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 800845AC
  c->r[0]=c->r[0]&0x00000014u; cr0(c,c->r[0]); // 800845B0
  if (crb(c,2)) { goto L_800845C0; } // 800845B4
  c->r[3]=0u+0xFFFFFFFFu; // 800845B8
  goto L_80084644; // 800845BC
L_800845C0:;
  c->lr=0x800845C4u; f_800847B0(c); // 800845C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; cr0(c,c->r[0]); // 800845C4
  if (crb(c,2)) { goto L_800845E0; } // 800845C8
  cmps(c,0,(int32_t)c->r[0],1); // 800845CC
  if (crb(c,2)) { goto L_80084600; } // 800845D0
  cmps(c,0,(int32_t)c->r[0],-1); // 800845D4
  if (crb(c,2)) { goto L_80084600; } // 800845D8
  goto L_80084640; // 800845DC
L_800845E0:;
  c->r[3]=c->r[28]|c->r[28]; // 800845E0
  c->r[4]=c->r[29]|c->r[29]; // 800845E4
  c->lr=0x800845ECu; f_8003AF20(c); // 800845E8
  cmps(c,0,(int32_t)c->r[3],0); // 800845EC
  c->r[30]=c->r[3]|c->r[3]; // 800845F0
  if (!crb(c,0)) { goto L_80084640; } // 800845F4
  c->r[3]=0u+0xFFFFFFFFu; // 800845F8
  goto L_80084644; // 800845FC
L_80084600:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084600
  c->r[3]=c->r[1]+0x00000008u; // 80084604
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80084608
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8008460C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80084610
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084614
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80084618
  c->lr=0x80084620u; f_800E45D0(c); // 8008461C
  c->r[3]=c->r[28]|c->r[28]; // 80084620
  c->r[4]=c->r[1]+0x00000008u; // 80084624
  c->lr=0x8008462Cu; f_8003AF20(c); // 80084628
  cmps(c,0,(int32_t)c->r[3],0); // 8008462C
  c->r[30]=c->r[3]|c->r[3]; // 80084630
  if (!crb(c,0)) { goto L_80084640; } // 80084634
  c->r[3]=0u+0xFFFFFFFFu; // 80084638
  goto L_80084644; // 8008463C
L_80084640:;
  c->r[3]=c->r[30]|c->r[30]; // 80084640
L_80084644:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80084644
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80084648
  c->r[30]=R32(c->r[1]+0x00000028u); // 8008464C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80084650
  c->r[28]=R32(c->r[1]+0x00000020u); // 80084654
  c->lr=c->r[0]; // 80084658
  c->r[1]=c->r[1]+0x00000030u; // 8008465C
  return; // 80084660
}

// fn_80084670
void f_80084670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084670
  c->r[0]=c->lr; // 80084674
  W32(c->r[1]+0x00000034u,c->r[0]); // 80084678
  c->r[0]=0u+0x00000000u; // 8008467C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80084680
  c->r[31]=0u+0x80440000u; // 80084684
  c->r[31]=c->r[31]+0xFFFF88D0u; // 80084688
  W32(c->r[1]+0x00000028u,c->r[30]); // 8008468C
  c->r[30]=0u+0xFFFFFFFFu; // 80084690
  W32(c->r[1]+0x00000024u,c->r[29]); // 80084694
  c->r[29]=c->r[4]|c->r[4]; // 80084698
  W32(c->r[1]+0x00000020u,c->r[28]); // 8008469C
  c->r[28]=c->r[3]|c->r[3]; // 800846A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800846A4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800846A8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800846AC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800846B0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800846B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800846B8
  c->lr=0x800846C0u; f_80032D40(c); // 800846BC
  cmps(c,0,(int32_t)c->r[3],2); // 800846C0
  if (!crb(c,2)) { goto L_800846DC; } // 800846C4
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 800846C8
  c->r[0]=c->r[0]&0x00000014u; cr0(c,c->r[0]); // 800846CC
  if (crb(c,2)) { goto L_800846DC; } // 800846D0
  c->r[3]=0u+0xFFFFFFFFu; // 800846D4
  goto L_80084790; // 800846D8
L_800846DC:;
  c->lr=0x800846E0u; f_800847B0(c); // 800846DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; cr0(c,c->r[0]); // 800846E0
  if (crb(c,2)) { goto L_800846FC; } // 800846E4
  cmps(c,0,(int32_t)c->r[0],1); // 800846E8
  if (crb(c,2)) { goto L_80084740; } // 800846EC
  cmps(c,0,(int32_t)c->r[0],-1); // 800846F0
  if (crb(c,2)) { goto L_80084740; } // 800846F4
  goto L_8008478C; // 800846F8
L_800846FC:;
  c->r[3]=c->r[29]|c->r[29]; // 800846FC
  c->r[4]=c->r[1]+0x00000014u; // 80084700
  c->lr=0x80084708u; f_80106A90(c); // 80084704
  c->r[3]=c->r[28]|c->r[28]; // 80084708
  c->r[4]=c->r[1]+0x00000014u; // 8008470C
  c->lr=0x80084714u; f_8003AF20(c); // 80084710
  c->r[30]=c->r[3]|c->r[3]; // 80084714
  c->r[4]=c->r[1]+0x00000008u; // 80084718
  c->lr=0x80084720u; f_8003B680(c); // 8008471C
  c->r[3]=c->r[30]|c->r[30]; // 80084720
  c->r[4]=c->r[29]|c->r[29]; // 80084724
  c->r[5]=0u+0x00000000u; // 80084728
  c->lr=0x80084730u; f_8003B5A0(c); // 8008472C
  cmps(c,0,(int32_t)c->r[30],0); // 80084730
  if (!crb(c,0)) { goto L_8008478C; } // 80084734
  c->r[3]=0u+0xFFFFFFFFu; // 80084738
  goto L_80084790; // 8008473C
L_80084740:;
  c->r[3]=c->r[29]|c->r[29]; // 80084740
  c->r[4]=c->r[1]+0x00000014u; // 80084744
  c->lr=0x8008474Cu; f_80106A90(c); // 80084748
  c->r[3]=c->r[1]+0x00000014u; // 8008474C
  c->lr=0x80084754u; f_800E45D0(c); // 80084750
  c->r[3]=c->r[28]|c->r[28]; // 80084754
  c->r[4]=c->r[1]+0x00000014u; // 80084758
  c->lr=0x80084760u; f_8003AF20(c); // 8008475C
  c->r[30]=c->r[3]|c->r[3]; // 80084760
  c->r[4]=c->r[1]+0x00000008u; // 80084764
  c->lr=0x8008476Cu; f_8003B680(c); // 80084768
  c->r[3]=c->r[30]|c->r[30]; // 8008476C
  c->r[4]=c->r[29]|c->r[29]; // 80084770
  c->r[5]=0u+0x00000000u; // 80084774
  c->lr=0x8008477Cu; f_8003B5A0(c); // 80084778
  cmps(c,0,(int32_t)c->r[30],0); // 8008477C
  if (!crb(c,0)) { goto L_8008478C; } // 80084780
  c->r[3]=0u+0xFFFFFFFFu; // 80084784
  goto L_80084790; // 80084788
L_8008478C:;
  c->r[3]=c->r[30]|c->r[30]; // 8008478C
L_80084790:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80084790
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80084794
  c->r[30]=R32(c->r[1]+0x00000028u); // 80084798
  c->r[29]=R32(c->r[1]+0x00000024u); // 8008479C
  c->r[28]=R32(c->r[1]+0x00000020u); // 800847A0
  c->lr=c->r[0]; // 800847A4
  c->r[1]=c->r[1]+0x00000030u; // 800847A8
  return; // 800847AC
}

// fn_800847B0
void f_800847B0(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 800847B0
  c->r[3]=c->r[3]+0x00003168u; // 800847B4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000006Cu); // 800847B8
  return; // 800847BC
}

// fn_800847C0
void f_800847C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800847C0
  c->r[0]=c->lr; // 800847C4
  c->r[4]=0u+0x00000000u; // 800847C8
  c->r[5]=0u+0x000001F8u; // 800847CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800847D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800847D4
  c->r[31]=0u+0x80410000u; // 800847D8
  c->r[31]=c->r[31]+0x00007120u; // 800847DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800847E0
  c->r[30]=c->r[3]|c->r[3]; // 800847E4
  c->r[3]=c->r[31]+0x00000000u; // 800847E8
  c->lr=0x800847F0u; f_80004714(c); // 800847EC
  c->r[3]=c->r[31]+0x00000000u; // 800847F0
  c->r[0]=0u+0x00000001u; // 800847F4
  W32(c->r[3]+0x000001F0u,c->r[0]); // 800847F8
  c->lr=0x80084800u; f_80120E70(c); // 800847FC
  c->r[3]=c->r[31]+0x000001F8u; // 80084800
  c->r[4]=c->r[31]+0x00000218u; // 80084804
  c->r[5]=0u+0x00000003u; // 80084808
  c->lr=0x80084810u; f_801263D0(c); // 8008480C
  c->lr=0x80084814u; f_8014ECB0(c); // 80084810
  cmps(c,0,(int32_t)c->r[3],0); // 80084814
  if (!crb(c,2)) { goto L_80084824; } // 80084818
  c->r[3]=0u+0x00000000u; // 8008481C
  goto L_800848D4; // 80084820
L_80084824:;
  c->lr=0x80084828u; f_801251B0(c); // 80084824
  c->r[0]=0u+0x00000000u; // 80084828
  W32(c->r[13]+0xFFFFB8BCu,c->r[30]); // 8008482C
  c->r[4]=0u+0x80080000u; // 80084830
  c->r[30]=c->r[3]|c->r[3]; // 80084834
  W32(c->r[13]+0xFFFFB8C8u,c->r[0]); // 80084838
  c->r[3]=c->r[4]+0x00005AC0u; // 8008483C
  W32(c->r[13]+0xFFFFB8C4u,c->r[0]); // 80084840
  W32(c->r[13]+0xFFFFB8C0u,c->r[0]); // 80084844
  c->lr=0x8008484Cu; f_8013D570(c); // 80084848
  cmps(c,0,(int32_t)c->r[3],0); // 8008484C
  W32(c->r[13]+0xFFFFB8B8u,c->r[3]); // 80084850
  if (!crb(c,2)) { goto L_8008487C; } // 80084854
  c->r[0]=R32(c->r[13]+0xFFFFB8BCu); // 80084858
  cmps(c,0,(int32_t)c->r[0],0); // 8008485C
  if (crb(c,2)) { goto L_8008487C; } // 80084860
  c->r[3]=0u+0x00000000u; // 80084864
  c->lr=0x8008486Cu; f_8013D570(c); // 80084868
  c->r[3]=c->r[30]|c->r[30]; // 8008486C
  c->lr=0x80084874u; f_801251F0(c); // 80084870
  c->r[3]=0u+0x00000000u; // 80084874
  goto L_800848D4; // 80084878
L_8008487C:;
  c->r[3]=c->r[30]|c->r[30]; // 8008487C
  c->lr=0x80084884u; f_801251F0(c); // 80084880
  c->r[0]=R32(c->r[13]+0xFFFFB8BCu); // 80084884
  cmps(c,0,(int32_t)c->r[0],0); // 80084888
  if (!crb(c,2)) { goto L_800848C8; } // 8008488C
  c->r[3]=c->r[31]+0x00000240u; // 80084890
  c->r[4]=0u+0x00000000u; // 80084894
  c->r[5]=0u+0x00000300u; // 80084898
  c->lr=0x800848A0u; f_80004714(c); // 8008489C
  c->r[3]=c->r[31]+0x00000240u; // 800848A0
  c->r[4]=0u+0x00000300u; // 800848A4
  c->lr=0x800848ACu; f_80120C40(c); // 800848A8
  c->r[3]=R32(c->r[13]+0xFFFFB8C8u); // 800848AC
  c->r[0]=c->r[31]+0x00000240u; // 800848B0
  c->r[4]=0u+0x00000180u; // 800848B4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 800848B8
  c->r[3]=c->r[0]+c->r[3]; // 800848BC
  c->lr=0x800848C4u; f_8013D5C0(c); // 800848C0
  c->lr=0x800848C8u; f_8013D640(c); // 800848C4
L_800848C8:;
  c->r[0]=0u+0x00000001u; // 800848C8
  W32(c->r[13]+0xFFFFB8B0u,c->r[0]); // 800848CC
  c->r[3]=0u+0x00000001u; // 800848D0
L_800848D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800848D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800848D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800848DC
  c->lr=c->r[0]; // 800848E0
  c->r[1]=c->r[1]+0x00000010u; // 800848E4
  return; // 800848E8
}

// fn_800848F0
void f_800848F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800848F0
  c->r[0]=c->lr; // 800848F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800848F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800848FC
  c->lr=0x80084904u; f_80120EB0(c); // 80084900
  c->lr=0x80084908u; f_801251B0(c); // 80084904
  c->r[0]=R32(c->r[13]+0xFFFFB8B8u); // 80084908
  c->r[31]=c->r[3]|c->r[3]; // 8008490C
  cmps(c,0,(int32_t)c->r[0],0); // 80084910
  if (crb(c,2)) { goto L_80084920; } // 80084914
  c->r[3]=c->r[0]|c->r[0]; // 80084918
  c->lr=0x80084920u; f_8013D570(c); // 8008491C
L_80084920:;
  c->r[3]=c->r[31]|c->r[31]; // 80084920
  c->lr=0x80084928u; f_801251F0(c); // 80084924
  c->r[0]=0u+0x00000000u; // 80084928
  W32(c->r[13]+0xFFFFB8B0u,c->r[0]); // 8008492C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80084930
  c->r[0]=R32(c->r[1]+0x00000014u); // 80084934
  c->lr=c->r[0]; // 80084938
  c->r[1]=c->r[1]+0x00000010u; // 8008493C
  return; // 80084940
}

// fn_80084950
void f_80084950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084950
  c->r[0]=c->lr; // 80084954
  W32(c->r[1]+0x00000024u,c->r[0]); // 80084958
  c->r[11]=c->r[1]+0x00000020u; // 8008495C
  c->lr=0x80084964u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80084960
  c->r[0]=R32(c->r[13]+0xFFFFB8B0u); // 80084964
  c->r[27]=c->r[3]|c->r[3]; // 80084968
  c->r[26]=c->r[4]|c->r[4]; // 8008496C
  cmps(c,0,(int32_t)c->r[0],0); // 80084970
  if (!crb(c,2)) { goto L_80084980; } // 80084974
  c->r[3]=0u+0x00000000u; // 80084978
  goto L_80084BB8; // 8008497C
L_80084980:;
  c->r[3]=0u+0x80410000u; // 80084980
  c->r[29]=c->r[3]+0x00007120u; // 80084984
  c->r[0]=R32(c->r[29]+0x000000A0u); // 80084988
  cmps(c,0,(int32_t)c->r[0],0); // 8008498C
  if (crb(c,2)) { goto L_8008499C; } // 80084990
  c->r[3]=0u+0x00000000u; // 80084994
  goto L_80084BB8; // 80084998
L_8008499C:;
  c->r[3]=c->r[29]+0x00000080u; // 8008499C
  c->r[4]=0u+0x00000000u; // 800849A0
  c->r[5]=0u+0x0000000Cu; // 800849A4
  c->lr=0x800849ACu; f_80004714(c); // 800849A8
  c->r[3]=c->r[29]+0x0000008Cu; // 800849AC
  c->r[4]=0u+0x00000000u; // 800849B0
  c->r[5]=0u+0x00000010u; // 800849B4
  c->lr=0x800849BCu; f_80004714(c); // 800849B8
  c->r[3]=c->r[27]|c->r[27]; // 800849BC
  c->r[4]=c->r[29]|c->r[29]; // 800849C0
  c->lr=0x800849C8u; f_8012FA70(c); // 800849C4
  cmps(c,0,(int32_t)c->r[3],0); // 800849C8
  if (!crb(c,2)) { goto L_800849D8; } // 800849CC
  c->r[3]=0u+0x00000000u; // 800849D0
  goto L_80084BB8; // 800849D4
L_800849D8:;
  c->r[30]=0u+0x80410000u; // 800849D8
  c->r[3]=c->r[29]|c->r[29]; // 800849DC
  c->r[4]=c->r[30]+0x00007660u; // 800849E0
  c->r[5]=0u+0x00000040u; // 800849E4
  c->r[6]=0u+0x00000000u; // 800849E8
  c->r[7]=0u+0x00000002u; // 800849EC
  c->lr=0x800849F4u; f_8012FDD0(c); // 800849F0
  cmps(c,0,(int32_t)c->r[3],0); // 800849F4
  if (!crb(c,0)) { goto L_80084A0C; } // 800849F8
  c->r[3]=c->r[29]|c->r[29]; // 800849FC
  c->lr=0x80084A04u; f_8012FB90(c); // 80084A00
  c->r[3]=0u+0x00000000u; // 80084A04
  goto L_80084BB8; // 80084A08
L_80084A0C:;
  c->r[3]=c->r[29]+0x0000003Cu; // 80084A0C
  c->r[4]=c->r[30]+0x00007660u; // 80084A10
  c->r[5]=0u+0x00000030u; // 80084A14
  c->lr=0x80084A1Cu; f_800043C4(c); // 80084A18
  c->r[3]=c->r[29]+0x0000003Cu; // 80084A1C
  c->r[4]=c->r[13]+0xFFFF88A0u; // 80084A20
  c->lr=0x80084A28u; f_802EE984(c); // 80084A24
  cmps(c,0,(int32_t)c->r[3],0); // 80084A28
  if (crb(c,2)) { goto L_80084A40; } // 80084A2C
  c->r[3]=c->r[29]|c->r[29]; // 80084A30
  c->lr=0x80084A38u; f_8012FB90(c); // 80084A34
  c->r[3]=0u+0x00000000u; // 80084A38
  goto L_80084BB8; // 80084A3C
L_80084A40:;
  c->r[3]=R32(c->r[29]+0x00000040u); // 80084A40
  c->r[0]=c->r[3]+0xFFFF0000u; // 80084A44
  cmpu(c,0,c->r[0],0x00001000u); // 80084A48
  if (crb(c,2)) { goto L_80084A60; } // 80084A4C
  c->r[3]=c->r[29]|c->r[29]; // 80084A50
  c->lr=0x80084A58u; f_8012FB90(c); // 80084A54
  c->r[3]=0u+0x00000000u; // 80084A58
  goto L_80084BB8; // 80084A5C
L_80084A60:;
  c->r[28]=R32(c->r[29]+0x0000005Cu); // 80084A60
  c->r[3]=c->r[29]|c->r[29]; // 80084A64
  c->r[4]=c->r[30]+0x00007660u; // 80084A68
  c->r[5]=0u+0x00000020u; // 80084A6C
  c->r[6]=c->r[28]|c->r[28]; // 80084A70
  c->r[7]=0u+0x00000002u; // 80084A74
  c->lr=0x80084A7Cu; f_8012FDD0(c); // 80084A78
  cmps(c,0,(int32_t)c->r[3],0); // 80084A7C
  if (!crb(c,0)) { goto L_80084A94; } // 80084A80
  c->r[3]=c->r[29]|c->r[29]; // 80084A84
  c->lr=0x80084A8Cu; f_8012FB90(c); // 80084A88
  c->r[3]=0u+0x00000000u; // 80084A8C
  goto L_80084BB8; // 80084A90
L_80084A94:;
  c->r[3]=c->r[29]+0x0000006Cu; // 80084A94
  c->r[4]=c->r[30]+0x00007660u; // 80084A98
  c->r[5]=0u+0x00000014u; // 80084A9C
  c->lr=0x80084AA4u; f_800043C4(c); // 80084AA0
  c->r[0]=0u+0x00000000u; // 80084AA4
  W8(c->r[29]+0x000000A7u,c->r[0]); // 80084AA8
  c->r[27]=0u+0x00000000u; // 80084AAC
  c->r[31]=0u+0x00000001u; // 80084AB0
  c->r[28]=c->r[28]+0x00000014u; // 80084AB4
  goto L_80084B7C; // 80084AB8
L_80084ABC:;
  c->r[3]=c->r[29]+c->r[27]; // 80084ABC
  c->r[0]=R8(c->r[3]+0x00000070u); // 80084AC0
  cmps(c,0,(int32_t)c->r[0],1); // 80084AC4
  if (crb(c,2)) { goto L_80084B24; } // 80084AC8
  if (!crb(c,0)) { goto L_80084B70; } // 80084ACC
  cmps(c,0,(int32_t)c->r[0],0); // 80084AD0
  if (!crb(c,0)) { goto L_80084ADC; } // 80084AD4
  goto L_80084B70; // 80084AD8
L_80084ADC:;
  c->r[3]=c->r[29]|c->r[29]; // 80084ADC
  c->r[6]=c->r[28]|c->r[28]; // 80084AE0
  c->r[4]=c->r[30]+0x00007660u; // 80084AE4
  c->r[5]=0u+0x00000020u; // 80084AE8
  c->r[7]=0u+0x00000002u; // 80084AEC
  c->lr=0x80084AF4u; f_8012FDD0(c); // 80084AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80084AF4
  if (!crb(c,0)) { goto L_80084B0C; } // 80084AF8
  c->r[3]=c->r[29]|c->r[29]; // 80084AFC
  c->lr=0x80084B04u; f_8012FB90(c); // 80084B00
  c->r[3]=0u+0x00000000u; // 80084B04
  goto L_80084BB8; // 80084B08
L_80084B0C:;
  c->r[3]=c->r[29]+0x00000080u; // 80084B0C
  c->r[4]=c->r[30]+0x00007660u; // 80084B10
  c->r[5]=0u+0x0000000Cu; // 80084B14
  c->lr=0x80084B1Cu; f_800043C4(c); // 80084B18
  c->r[28]=c->r[28]+0x0000000Cu; // 80084B1C
  goto L_80084B78; // 80084B20
L_80084B24:;
  c->r[3]=c->r[29]|c->r[29]; // 80084B24
  c->r[6]=c->r[28]|c->r[28]; // 80084B28
  c->r[4]=c->r[30]+0x00007660u; // 80084B2C
  c->r[5]=0u+0x00000020u; // 80084B30
  c->r[7]=0u+0x00000002u; // 80084B34
  c->lr=0x80084B3Cu; f_8012FDD0(c); // 80084B38
  cmps(c,0,(int32_t)c->r[3],0); // 80084B3C
  if (!crb(c,0)) { goto L_80084B54; } // 80084B40
  c->r[3]=c->r[29]|c->r[29]; // 80084B44
  c->lr=0x80084B4Cu; f_8012FB90(c); // 80084B48
  c->r[3]=0u+0x00000000u; // 80084B4C
  goto L_80084BB8; // 80084B50
L_80084B54:;
  c->r[3]=c->r[29]+0x0000008Cu; // 80084B54
  c->r[4]=c->r[30]+0x00007660u; // 80084B58
  c->r[5]=0u+0x00000010u; // 80084B5C
  c->lr=0x80084B64u; f_800043C4(c); // 80084B60
  W8(c->r[29]+0x000000A7u,c->r[31]); // 80084B64
  c->r[28]=c->r[28]+0x00000010u; // 80084B68
  goto L_80084B78; // 80084B6C
L_80084B70:;
  c->r[3]=0u+0x00000000u; // 80084B70
  goto L_80084BB8; // 80084B74
L_80084B78:;
  c->r[27]=c->r[27]+0x00000001u; // 80084B78
L_80084B7C:;
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 80084B7C
  cmpu(c,0,c->r[27],c->r[0]); // 80084B80
  if (crb(c,0)) { IRQCHK(c); goto L_80084ABC; } // 80084B84
  {uint32_t ea=c->r[2]+0xFFFF8CA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80084B88
  c->r[4]=0u+0x00000000u; // 80084B8C
  c->r[0]=0u+0x00000001u; // 80084B90
  W8(c->r[29]+0x000000A5u,c->r[4]); // 80084B94
  c->r[3]=0u+0x00000001u; // 80084B98
  W8(c->r[29]+0x000000A4u,c->r[4]); // 80084B9C
  W8(c->r[29]+0x000000A6u,c->r[4]); // 80084BA0
  W32(c->r[29]+0x000000B0u,c->r[26]); // 80084BA4
  W32(c->r[29]+0x000000A0u,c->r[0]); // 80084BA8
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[0]);} // 80084BAC
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 80084BB0
  W32(c->r[29]+0x000000E8u,c->r[4]); // 80084BB4
L_80084BB8:;
  c->r[11]=c->r[1]+0x00000020u; // 80084BB8
  c->lr=0x80084BC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80084BBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084BC0
  c->lr=c->r[0]; // 80084BC4
  c->r[1]=c->r[1]+0x00000020u; // 80084BC8
  return; // 80084BCC
}

// fn_80084BD0
void f_80084BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084BD0
  c->r[0]=c->lr; // 80084BD4
  c->r[3]=0u+0x80410000u; // 80084BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084BDC
  c->r[3]=c->r[3]+0x00007120u; // 80084BE0
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80084BE4
  cmps(c,0,(int32_t)c->r[0],0); // 80084BE8
  if (crb(c,2)) { goto L_80084C10; } // 80084BEC
  c->r[0]=R8(c->r[3]+0x000000A4u); // 80084BF0
  cmps(c,0,(int32_t)c->r[0],0); // 80084BF4
  if (!crb(c,2)) { goto L_80084C10; } // 80084BF8
  c->r[0]=0u+0x00000000u; // 80084BFC
  W32(c->r[3]+0x000000A0u,c->r[0]); // 80084C00
  c->lr=0x80084C08u; f_8012FB90(c); // 80084C04
  c->r[3]=0u+0x00000001u; // 80084C08
  goto L_80084C14; // 80084C0C
L_80084C10:;
  c->r[3]=0u+0x00000000u; // 80084C10
L_80084C14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80084C14
  c->lr=c->r[0]; // 80084C18
  c->r[1]=c->r[1]+0x00000010u; // 80084C1C
  return; // 80084C20
}

// fn_80084C30
void f_80084C30(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 80084C30
  c->r[3]=c->r[3]+0x00007120u; // 80084C34
  c->r[0]=R32(c->r[3]+0x000000A0u); // 80084C38
  cmps(c,0,(int32_t)c->r[0],0); // 80084C3C
  if (crb(c,2)) { goto L_80084CE0; } // 80084C40
  c->r[0]=R32(c->r[3]+0x000000B0u); // 80084C44
  cmps(c,0,(int32_t)c->r[0],0); // 80084C48
  if (crb(c,2)) { goto L_80084C60; } // 80084C4C
  c->r[3]=R32(c->r[3]+0x00000058u); // 80084C50
  c->r[0]=c->r[3]+0x0000001Fu; // 80084C54
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084C58
  goto L_80084C70; // 80084C5C
L_80084C60:;
  c->r[3]=R32(c->r[3]+0x00000044u); // 80084C60
  c->r[0]=c->r[3]+0x0000001Fu; // 80084C64
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084C68
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 80084C6C
L_80084C70:;
  c->r[4]=0u+0x80410000u; // 80084C70
  c->r[4]=c->r[4]+0x00007120u; // 80084C74
  c->r[3]=R32(c->r[4]+0x00000084u); // 80084C78
  c->r[5]=R32(c->r[4]+0x00000080u); // 80084C7C
  c->r[0]=R8(c->r[4]+0x000000A7u); // 80084C80
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[3]); // 80084C84
  cmps(c,0,(int32_t)c->r[0],0); // 80084C88
  c->r[0]=c->r[3]+0x0000001Fu; // 80084C8C
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 80084C90
  c->r[5]=c->r[3]+0x0000001Fu; // 80084C94
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084C98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFF80u; // 80084C9C
  c->r[3]=c->r[0]-c->r[3]; // 80084CA0
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFE0u; // 80084CA4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFF80u; // 80084CA8
  c->r[7]=c->r[7]+c->r[3]; // 80084CAC
  c->r[0]=c->r[0]-c->r[6]; // 80084CB0
  c->r[7]=c->r[7]+c->r[0]; // 80084CB4
  c->r[7]=c->r[7]+c->r[0]; // 80084CB8
  if (crb(c,2)) { goto L_80084CD8; } // 80084CBC
  c->r[0]=R32(c->r[4]+0x00000048u); // 80084CC0
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80084CC4
  c->r[0]=c->r[3]+0x0000001Fu; // 80084CC8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084CCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 80084CD0
  c->r[7]=c->r[7]+c->r[0]; // 80084CD4
L_80084CD8:;
  c->r[3]=c->r[7]+0x00001000u; // 80084CD8
  return; // 80084CDC
L_80084CE0:;
  c->r[3]=0u+0x00000000u; // 80084CE0
  return; // 80084CE4
}

// fn_80084CF0
void f_80084CF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084CF0
  c->r[0]=c->lr; // 80084CF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80084CF8
  c->r[11]=c->r[1]+0x00000020u; // 80084CFC
  c->lr=0x80084D04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80084D00
  c->r[4]=0u+0x80410000u; // 80084D04
  c->r[5]=c->r[4]+0x00007120u; // 80084D08
  c->r[0]=R32(c->r[5]+0x000000A0u); // 80084D0C
  cmps(c,0,(int32_t)c->r[0],0); // 80084D10
  if (crb(c,2)) { goto L_80084F1C; } // 80084D14
  c->r[0]=R8(c->r[5]+0x000000A4u); // 80084D18
  cmps(c,0,(int32_t)c->r[0],0); // 80084D1C
  if (!crb(c,2)) { goto L_80084F1C; } // 80084D20
  c->r[0]=R32(c->r[5]+0x000000B0u); // 80084D24
  cmps(c,0,(int32_t)c->r[0],0); // 80084D28
  if (crb(c,2)) { goto L_80084D40; } // 80084D2C
  c->r[0]=R32(c->r[5]+0x00000058u); // 80084D30
  W32(c->r[5]+0x000000B4u,c->r[3]); // 80084D34
  c->r[31]=c->r[3]+c->r[0]; // 80084D38
  goto L_80084E08; // 80084D3C
L_80084D40:;
  W32(c->r[5]+0x00000100u,c->r[3]); // 80084D40
  c->r[4]=R32(c->r[5]+0x00000044u); // 80084D44
  c->r[0]=c->r[4]+0x0000001Fu; // 80084D48
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084D4C
  c->r[31]=c->r[3]+c->r[0]; // 80084D50
  W32(c->r[5]+0x0000010Cu,c->r[31]); // 80084D54
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084D58
  c->r[0]=c->r[3]+0x0000001Fu; // 80084D5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084D60
  c->r[31]=c->r[31]+c->r[0]; // 80084D64
  W32(c->r[5]+0x00000118u,c->r[31]); // 80084D68
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084D6C
  c->r[0]=c->r[3]+0x0000001Fu; // 80084D70
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084D74
  c->r[31]=c->r[31]+c->r[0]; // 80084D78
  W32(c->r[5]+0x00000124u,c->r[31]); // 80084D7C
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084D80
  c->r[0]=c->r[3]+0x0000001Fu; // 80084D84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084D88
  c->r[31]=c->r[31]+c->r[0]; // 80084D8C
  W32(c->r[5]+0x00000130u,c->r[31]); // 80084D90
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084D94
  c->r[0]=c->r[3]+0x0000001Fu; // 80084D98
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084D9C
  c->r[31]=c->r[31]+c->r[0]; // 80084DA0
  W32(c->r[5]+0x0000013Cu,c->r[31]); // 80084DA4
  c->r[4]=R32(c->r[5]+0x00000044u); // 80084DA8
  c->r[0]=c->r[4]+0x0000001Fu; // 80084DAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084DB0
  c->r[31]=c->r[31]+c->r[0]; // 80084DB4
  W32(c->r[5]+0x00000148u,c->r[31]); // 80084DB8
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084DBC
  c->r[0]=c->r[3]+0x0000001Fu; // 80084DC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084DC4
  c->r[31]=c->r[31]+c->r[0]; // 80084DC8
  W32(c->r[5]+0x00000154u,c->r[31]); // 80084DCC
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084DD0
  c->r[0]=c->r[3]+0x0000001Fu; // 80084DD4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084DD8
  c->r[31]=c->r[31]+c->r[0]; // 80084DDC
  W32(c->r[5]+0x00000160u,c->r[31]); // 80084DE0
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084DE4
  c->r[0]=c->r[3]+0x0000001Fu; // 80084DE8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084DEC
  c->r[31]=c->r[31]+c->r[0]; // 80084DF0
  W32(c->r[5]+0x0000016Cu,c->r[31]); // 80084DF4
  c->r[3]=R32(c->r[5]+0x00000044u); // 80084DF8
  c->r[0]=c->r[3]+0x0000001Fu; // 80084DFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084E00
  c->r[31]=c->r[31]+c->r[0]; // 80084E04
L_80084E08:;
  c->r[30]=0u+0x80410000u; // 80084E08
  c->r[29]=0u+0x00000000u; // 80084E0C
  c->r[30]=c->r[30]+0x00007120u; // 80084E10
  c->r[0]=R32(c->r[30]+0x00000084u); // 80084E14
  c->r[3]=R32(c->r[30]+0x00000080u); // 80084E18
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 80084E1C
  c->r[3]=rotl(c->r[4],30)&0x3FFFFFFFu; // 80084E20
  c->r[4]=c->r[4]+0x0000001Fu; // 80084E24
  c->r[0]=c->r[3]+0x0000001Fu; // 80084E28
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80084E2C
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084E30
L_80084E34:;
  W32(c->r[30]+0x00000178u,c->r[31]); // 80084E34
  c->r[3]=c->r[31]|c->r[31]; // 80084E38
  c->r[4]=c->r[28]|c->r[28]; // 80084E3C
  c->lr=0x80084E44u; f_80120C10(c); // 80084E40
  c->r[31]=c->r[31]+c->r[28]; // 80084E44
  W32(c->r[30]+0x0000017Cu,c->r[31]); // 80084E48
  c->r[3]=c->r[31]|c->r[31]; // 80084E4C
  c->r[4]=c->r[27]|c->r[27]; // 80084E50
  c->lr=0x80084E58u; f_80120C10(c); // 80084E54
  c->r[31]=c->r[31]+c->r[27]; // 80084E58
  W32(c->r[30]+0x00000180u,c->r[31]); // 80084E5C
  c->r[3]=c->r[31]|c->r[31]; // 80084E60
  c->r[4]=c->r[27]|c->r[27]; // 80084E64
  c->lr=0x80084E6Cu; f_80120C10(c); // 80084E68
  c->r[29]=c->r[29]+0x00000001u; // 80084E6C
  c->r[31]=c->r[31]+c->r[27]; // 80084E70
  cmpu(c,0,c->r[29],0x00000003u); // 80084E74
  c->r[30]=c->r[30]+0x00000010u; // 80084E78
  if (crb(c,0)) { IRQCHK(c); goto L_80084E34; } // 80084E7C
  c->r[4]=0u+0x80410000u; // 80084E80
  c->r[4]=c->r[4]+0x00007120u; // 80084E84
  c->r[0]=R8(c->r[4]+0x000000A7u); // 80084E88
  cmps(c,0,(int32_t)c->r[0],0); // 80084E8C
  if (crb(c,2)) { goto L_80084F08; } // 80084E90
  c->r[0]=R32(c->r[4]+0x00000048u); // 80084E94
  c->r[5]=0u+0x00000000u; // 80084E98
  W32(c->r[4]+0x000001A8u,c->r[31]); // 80084E9C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80084EA0
  c->r[0]=c->r[3]+0x0000001Fu; // 80084EA4
  W32(c->r[4]+0x000001ACu,c->r[31]); // 80084EA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 80084EAC
  c->r[31]=c->r[31]+c->r[0]; // 80084EB0
  W32(c->r[4]+0x000001B4u,c->r[31]); // 80084EB4
  W32(c->r[4]+0x000001B8u,c->r[31]); // 80084EB8
  c->r[31]=c->r[31]+c->r[0]; // 80084EBC
  W32(c->r[4]+0x000001C0u,c->r[31]); // 80084EC0
  W32(c->r[4]+0x000001C4u,c->r[31]); // 80084EC4
  c->r[31]=c->r[31]+c->r[0]; // 80084EC8
  W32(c->r[4]+0x000001CCu,c->r[31]); // 80084ECC
  W32(c->r[4]+0x000001D0u,c->r[31]); // 80084ED0
  c->r[31]=c->r[31]+c->r[0]; // 80084ED4
  W32(c->r[4]+0x000001B0u,c->r[5]); // 80084ED8
  W32(c->r[4]+0x000001BCu,c->r[5]); // 80084EDC
  W32(c->r[4]+0x000001C8u,c->r[5]); // 80084EE0
  W32(c->r[4]+0x000001D4u,c->r[5]); // 80084EE4
  W32(c->r[4]+0x000001D8u,c->r[31]); // 80084EE8
  W32(c->r[4]+0x000001DCu,c->r[31]); // 80084EEC
  c->r[31]=c->r[31]+c->r[0]; // 80084EF0
  W32(c->r[4]+0x000001E0u,c->r[5]); // 80084EF4
  W32(c->r[4]+0x000001E4u,c->r[31]); // 80084EF8
  W32(c->r[4]+0x000001E8u,c->r[31]); // 80084EFC
  c->r[31]=c->r[31]+c->r[0]; // 80084F00
  W32(c->r[4]+0x000001ECu,c->r[5]); // 80084F04
L_80084F08:;
  c->r[4]=0u+0x80410000u; // 80084F08
  c->r[3]=0u+0x00000001u; // 80084F0C
  c->r[4]=c->r[4]+0x00007120u; // 80084F10
  W32(c->r[4]+0x0000009Cu,c->r[31]); // 80084F14
  goto L_80084F20; // 80084F18
L_80084F1C:;
  c->r[3]=0u+0x00000000u; // 80084F1C
L_80084F20:;
  c->r[11]=c->r[1]+0x00000020u; // 80084F20
  c->lr=0x80084F28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80084F24
  c->r[0]=R32(c->r[1]+0x00000024u); // 80084F28
  c->lr=c->r[0]; // 80084F2C
  c->r[1]=c->r[1]+0x00000020u; // 80084F30
  return; // 80084F34
}

// fn_80084F40
void f_80084F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80084F40
  c->r[0]=c->lr; // 80084F44
  c->r[3]=0u+0x80410000u; // 80084F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80084F4C
  c->r[3]=c->r[3]+0x00007120u; // 80084F50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80084F54
  W32(c->r[1]+0x00000008u,c->r[30]); // 80084F58
  c->r[0]=R32(c->r[3]+0x000000B0u); // 80084F5C
  cmps(c,0,(int32_t)c->r[0],0); // 80084F60
  if (!crb(c,2)) { goto L_80084F88; } // 80084F64
  c->r[31]=c->r[3]+0x00000100u; // 80084F68
  c->r[30]=0u+0x00000000u; // 80084F6C
L_80084F70:;
  c->r[3]=c->r[31]|c->r[31]; // 80084F70
  c->lr=0x80084F78u; f_80086CE0(c); // 80084F74
  c->r[30]=c->r[30]+0x00000001u; // 80084F78
  c->r[31]=c->r[31]+0x0000000Cu; // 80084F7C
  cmps(c,0,(int32_t)c->r[30],10); // 80084F80
  if (crb(c,0)) { IRQCHK(c); goto L_80084F70; } // 80084F84
L_80084F88:;
  c->r[3]=0u+0x80410000u; // 80084F88
  c->r[30]=0u+0x00000000u; // 80084F8C
  c->r[3]=c->r[3]+0x00007120u; // 80084F90
  c->r[31]=c->r[3]+0x00000178u; // 80084F94
L_80084F98:;
  c->r[3]=c->r[31]|c->r[31]; // 80084F98
  c->lr=0x80084FA0u; f_80086610(c); // 80084F9C
  c->r[30]=c->r[30]+0x00000001u; // 80084FA0
  c->r[31]=c->r[31]+0x00000010u; // 80084FA4
  cmps(c,0,(int32_t)c->r[30],3); // 80084FA8
  if (crb(c,0)) { IRQCHK(c); goto L_80084F98; } // 80084FAC
  c->r[3]=0u+0x80410000u; // 80084FB0
  c->r[3]=c->r[3]+0x00007120u; // 80084FB4
  c->r[0]=R8(c->r[3]+0x000000A7u); // 80084FB8
  cmps(c,0,(int32_t)c->r[0],0); // 80084FBC
  if (crb(c,2)) { goto L_80084FE4; } // 80084FC0
  c->r[31]=c->r[3]+0x000001A8u; // 80084FC4
  c->r[30]=0u+0x00000000u; // 80084FC8
L_80084FCC:;
  c->r[3]=c->r[31]|c->r[31]; // 80084FCC
  c->lr=0x80084FD4u; f_800869D0(c); // 80084FD0
  c->r[30]=c->r[30]+0x00000001u; // 80084FD4
  c->r[31]=c->r[31]+0x0000000Cu; // 80084FD8
  cmps(c,0,(int32_t)c->r[30],6); // 80084FDC
  if (crb(c,0)) { IRQCHK(c); goto L_80084FCC; } // 80084FE0
L_80084FE4:;
  c->r[3]=0u+0x80410000u; // 80084FE4
  c->r[4]=c->r[13]+0xFFFFB8CCu; // 80084FE8
  c->r[3]=c->r[3]+0x000076A0u; // 80084FEC
  c->r[5]=0u+0x00000001u; // 80084FF0
  c->lr=0x80084FF8u; f_801263D0(c); // 80084FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80084FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80084FFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80085000
  c->lr=c->r[0]; // 80085004
  c->r[1]=c->r[1]+0x00000010u; // 80085008
  return; // 8008500C
}

// fn_80085010
void f_80085010(Ctx* __restrict c) {
  c->r[5]=0u+0x80410000u; // 80085010
  c->r[4]=c->r[3]|c->r[3]; // 80085014
  c->r[3]=c->r[5]+0x000076A0u; // 80085018
  c->r[5]=0u+0x00000001u; // 8008501C
  f_80126430(c); return; // 80085020
}

// fn_80085030
void f_80085030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085030
  c->r[0]=c->lr; // 80085034
  W32(c->r[1]+0x00000034u,c->r[0]); // 80085038
  c->r[11]=c->r[1]+0x00000030u; // 8008503C
  c->lr=0x80085044u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085040
  c->r[30]=0u+0x80410000u; // 80085044
  c->r[27]=c->r[3]|c->r[3]; // 80085048
  c->r[30]=c->r[30]+0x00007120u; // 8008504C
  c->r[28]=c->r[4]|c->r[4]; // 80085050
  c->r[31]=c->r[30]+0x00000000u; // 80085054
  c->r[29]=c->r[5]|c->r[5]; // 80085058
  c->r[0]=R32(c->r[31]+0x000000A0u); // 8008505C
  cmps(c,0,(int32_t)c->r[0],0); // 80085060
  if (crb(c,2)) { goto L_8008529C; } // 80085064
  c->r[0]=R8(c->r[31]+0x000000A4u); // 80085068
  cmps(c,0,(int32_t)c->r[0],0); // 8008506C
  if (!crb(c,2)) { goto L_8008529C; } // 80085070
  cmps(c,0,(int32_t)c->r[3],0); // 80085074
  if (!crb(c,1)) { goto L_800850FC; } // 80085078
  c->r[5]=R32(c->r[31]+0x00000060u); // 8008507C
  cmps(c,0,(int32_t)c->r[5],0); // 80085080
  if (!crb(c,2)) { goto L_80085090; } // 80085084
  c->r[3]=0u+0x00000000u; // 80085088
  goto L_800852A0; // 8008508C
L_80085090:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 80085090
  cmpu(c,0,c->r[0],c->r[3]); // 80085094
  if (!crb(c,1)) { goto L_800850F4; } // 80085098
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8008509C
  c->r[3]=c->r[31]|c->r[31]; // 800850A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800850A4
  c->r[4]=c->r[30]+0x00000540u; // 800850A8
  c->r[6]=c->r[5]+c->r[0]; // 800850AC
  c->r[5]=0u+0x00000020u; // 800850B0
  c->r[7]=0u+0x00000002u; // 800850B4
  c->lr=0x800850BCu; f_8012FDD0(c); // 800850B8
  cmps(c,0,(int32_t)c->r[3],0); // 800850BC
  if (!crb(c,0)) { goto L_800850CC; } // 800850C0
  c->r[3]=0u+0x00000000u; // 800850C4
  goto L_800852A0; // 800850C8
L_800850CC:;
  c->r[3]=c->r[30]+0x00000540u; // 800850CC
  c->r[5]=R32(c->r[31]+0x00000064u); // 800850D0
  c->r[4]=R32(c->r[30]+0x00000540u); // 800850D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800850D8
  c->r[3]=c->r[5]+c->r[4]; // 800850DC
  W32(c->r[31]+0x000000B8u,c->r[3]); // 800850E0
  c->r[0]=c->r[0]-c->r[4]; // 800850E4
  W32(c->r[31]+0x000000C0u,c->r[27]); // 800850E8
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800850EC
  goto L_80085110; // 800850F0
L_800850F4:;
  c->r[3]=0u+0x00000000u; // 800850F4
  goto L_800852A0; // 800850F8
L_800850FC:;
  c->r[4]=R32(c->r[31]+0x00000064u); // 800850FC
  c->r[0]=R32(c->r[31]+0x00000054u); // 80085100
  W32(c->r[31]+0x000000B8u,c->r[4]); // 80085104
  W32(c->r[31]+0x000000BCu,c->r[0]); // 80085108
  W32(c->r[31]+0x000000C0u,c->r[3]); // 8008510C
L_80085110:;
  c->r[3]=c->r[30]+0x00000000u; // 80085110
  c->r[0]=R8(c->r[3]+0x000000A7u); // 80085114
  cmps(c,0,(int32_t)c->r[0],0); // 80085118
  if (crb(c,2)) { goto L_80085140; } // 8008511C
  cmps(c,0,(int32_t)c->r[29],0); // 80085120
  if (crb(c,0)) { goto L_80085134; } // 80085124
  c->r[0]=R32(c->r[3]+0x00000098u); // 80085128
  cmpu(c,0,c->r[29],c->r[0]); // 8008512C
  if (crb(c,0)) { goto L_8008513C; } // 80085130
L_80085134:;
  c->r[3]=0u+0x00000000u; // 80085134
  goto L_800852A0; // 80085138
L_8008513C:;
  W32(c->r[3]+0x000000ECu,c->r[29]); // 8008513C
L_80085140:;
  c->r[29]=c->r[30]+0x00000000u; // 80085140
  c->r[28]=rotl(c->r[28],0)&0x00000001u; // 80085144
  c->r[0]=R32(c->r[29]+0x000000B0u); // 80085148
  c->r[3]=0u+0x00000000u; // 8008514C
  W8(c->r[29]+0x000000A6u,c->r[28]); // 80085150
  cmps(c,0,(int32_t)c->r[0],0); // 80085154
  W32(c->r[29]+0x000000D8u,c->r[3]); // 80085158
  if (crb(c,2)) { goto L_800851C4; } // 8008515C
  c->r[4]=R32(c->r[29]+0x000000B4u); // 80085160
  c->r[3]=c->r[29]|c->r[29]; // 80085164
  c->r[5]=R32(c->r[29]+0x00000058u); // 80085168
  c->r[7]=0u+0x00000002u; // 8008516C
  c->r[6]=R32(c->r[29]+0x00000064u); // 80085170
  c->lr=0x80085178u; f_8012FDD0(c); // 80085174
  cmps(c,0,(int32_t)c->r[3],0); // 80085178
  if (!crb(c,0)) { goto L_80085188; } // 8008517C
  c->r[3]=0u+0x00000000u; // 80085180
  goto L_800852A0; // 80085184
L_80085188:;
  c->r[4]=R32(c->r[29]+0x000000B4u); // 80085188
  c->r[3]=0u+0x00000014u; // 8008518C
  c->r[0]=R32(c->r[29]+0x000000B8u); // 80085190
  c->r[5]=R32(c->r[29]+0x00000064u); // 80085194
  c->r[0]=c->r[4]+c->r[0]; // 80085198
  c->r[28]=c->r[0]-c->r[5]; // 8008519C
  c->r[4]=c->r[28]|c->r[28]; // 800851A0
  c->lr=0x800851A8u; f_80086140(c); // 800851A4
  c->r[0]=R8(c->r[29]+0x000000A7u); // 800851A8
  cmps(c,0,(int32_t)c->r[0],0); // 800851AC
  if (crb(c,2)) { goto L_800851F0; } // 800851B0
  c->r[4]=c->r[28]|c->r[28]; // 800851B4
  c->r[3]=0u+0x0000000Cu; // 800851B8
  c->lr=0x800851C0u; f_800866A0(c); // 800851BC
  goto L_800851F0; // 800851C0
L_800851C4:;
  c->r[3]=0u+0x00000014u; // 800851C4
  c->r[4]=0u+0x00000000u; // 800851C8
  c->lr=0x800851D0u; f_80086140(c); // 800851CC
  c->r[0]=R8(c->r[29]+0x000000A7u); // 800851D0
  cmps(c,0,(int32_t)c->r[0],0); // 800851D4
  if (crb(c,2)) { goto L_800851E8; } // 800851D8
  c->r[3]=0u+0x0000000Cu; // 800851DC
  c->r[4]=0u+0x00000000u; // 800851E0
  c->lr=0x800851E8u; f_800866A0(c); // 800851E4
L_800851E8:;
  c->r[3]=0u+0x00000008u; // 800851E8
  c->lr=0x800851F0u; f_80086A60(c); // 800851EC
L_800851F0:;
  c->r[28]=c->r[30]+0x00000000u; // 800851F0
  c->r[3]=0u+0xFFFFFFFFu; // 800851F4
  c->r[0]=0u+0x00000000u; // 800851F8
  W32(c->r[28]+0x000000F0u,c->r[3]); // 800851FC
  W32(c->r[28]+0x000000F4u,c->r[0]); // 80085200
  c->lr=0x80085208u; f_80084F40(c); // 80085204
  c->lr=0x8008520Cu; f_80086220(c); // 80085208
  c->r[0]=R8(c->r[28]+0x000000A7u); // 8008520C
  cmps(c,0,(int32_t)c->r[0],0); // 80085210
  if (crb(c,2)) { goto L_8008521C; } // 80085214
  c->lr=0x8008521Cu; f_80086770(c); // 80085218
L_8008521C:;
  c->r[3]=c->r[30]+0x00000000u; // 8008521C
  c->r[0]=R32(c->r[3]+0x000000B0u); // 80085220
  cmps(c,0,(int32_t)c->r[0],0); // 80085224
  if (!crb(c,2)) { goto L_80085230; } // 80085228
  c->lr=0x80085230u; f_80086B00(c); // 8008522C
L_80085230:;
  c->r[3]=c->r[30]+0x00000580u; // 80085230
  c->r[4]=c->r[1]+0x00000008u; // 80085234
  c->r[5]=0u+0x00000001u; // 80085238
  c->lr=0x80085240u; f_80126500(c); // 8008523C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80085240
  cmps(c,0,(int32_t)c->r[0],0); // 80085244
  if (crb(c,2)) { goto L_80085254; } // 80085248
  c->r[0]=0u+0x00000001u; // 8008524C
  goto L_80085258; // 80085250
L_80085254:;
  c->r[0]=0u+0x00000000u; // 80085254
L_80085258:;
  cmps(c,0,(int32_t)c->r[0],0); // 80085258
  if (!crb(c,2)) { goto L_80085268; } // 8008525C
  c->r[3]=0u+0x00000000u; // 80085260
  goto L_800852A0; // 80085264
L_80085268:;
  c->r[4]=c->r[30]+0x00000000u; // 80085268
  c->r[0]=0u+0x00000000u; // 8008526C
  c->r[5]=0u+0x00000001u; // 80085270
  c->r[3]=0u+0x80080000u; // 80085274
  W8(c->r[4]+0x000000A4u,c->r[5]); // 80085278
  c->r[3]=c->r[3]+0x00005420u; // 8008527C
  W8(c->r[4]+0x000000A5u,c->r[0]); // 80085280
  W32(c->r[4]+0x000000F8u,c->r[0]); // 80085284
  W32(c->r[4]+0x000000FCu,c->r[0]); // 80085288
  c->lr=0x80085290u; f_80138D20(c); // 8008528C
  W32(c->r[13]+0xFFFFB8B4u,c->r[3]); // 80085290
  c->r[3]=0u+0x00000001u; // 80085294
  goto L_800852A0; // 80085298
L_8008529C:;
  c->r[3]=0u+0x00000000u; // 8008529C
L_800852A0:;
  c->r[11]=c->r[1]+0x00000030u; // 800852A0
  c->lr=0x800852A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800852A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800852A8
  c->lr=c->r[0]; // 800852AC
  c->r[1]=c->r[1]+0x00000030u; // 800852B0
  return; // 800852B4
}

// fn_800852C0
void f_800852C0(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 800852C0
  c->r[3]=c->r[3]+0x00007120u; // 800852C4
  c->r[0]=R32(c->r[3]+0x000000A0u); // 800852C8
  cmps(c,0,(int32_t)c->r[0],0); // 800852CC
  if (crb(c,2)) { goto L_80085318; } // 800852D0
  c->r[0]=R8(c->r[3]+0x000000A4u); // 800852D4
  cmpu(c,0,c->r[0],0x00000001u); // 800852D8
  if (crb(c,2)) { goto L_800852E8; } // 800852DC
  cmpu(c,0,c->r[0],0x00000004u); // 800852E0
  if (!crb(c,2)) { goto L_80085318; } // 800852E4
L_800852E8:;
  c->r[5]=0u+0x80410000u; // 800852E8
  c->r[3]=0u+0x00000002u; // 800852EC
  c->r[5]=c->r[5]+0x00007120u; // 800852F0
  c->r[4]=0u+0x00000000u; // 800852F4
  c->r[0]=0u+0xFFFFFFFFu; // 800852F8
  W8(c->r[5]+0x000000A4u,c->r[3]); // 800852FC
  c->r[3]=0u+0x00000001u; // 80085300
  W32(c->r[5]+0x000000D0u,c->r[4]); // 80085304
  W32(c->r[5]+0x000000D4u,c->r[4]); // 80085308
  W32(c->r[5]+0x000000CCu,c->r[0]); // 8008530C
  W32(c->r[5]+0x000000C8u,c->r[0]); // 80085310
  return; // 80085314
L_80085318:;
  c->r[3]=0u+0x00000000u; // 80085318
  return; // 8008531C
}

// fn_80085320
void f_80085320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085320
  c->r[0]=c->lr; // 80085324
  W32(c->r[1]+0x00000014u,c->r[0]); // 80085328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008532C
  c->r[31]=0u+0x80410000u; // 80085330
  c->r[31]=c->r[31]+0x00007120u; // 80085334
  c->r[0]=R32(c->r[31]+0x000000A0u); // 80085338
  cmps(c,0,(int32_t)c->r[0],0); // 8008533C
  if (crb(c,2)) { goto L_800853C4; } // 80085340
  c->r[0]=R8(c->r[31]+0x000000A4u); // 80085344
  cmps(c,0,(int32_t)c->r[0],0); // 80085348
  if (crb(c,2)) { goto L_800853C4; } // 8008534C
  c->r[0]=0u+0x00000000u; // 80085350
  W8(c->r[31]+0x000000A5u,c->r[0]); // 80085354
  c->r[3]=R32(c->r[13]+0xFFFFB8B4u); // 80085358
  W8(c->r[31]+0x000000A4u,c->r[0]); // 8008535C
  c->lr=0x80085364u; f_80138D20(c); // 80085360
  c->r[0]=R32(c->r[31]+0x000000B0u); // 80085364
  cmps(c,0,(int32_t)c->r[0],0); // 80085368
  if (!crb(c,2)) { goto L_8008537C; } // 8008536C
  c->r[3]=c->r[31]|c->r[31]; // 80085370
  c->lr=0x80085378u; f_80134680(c); // 80085374
  c->lr=0x8008537Cu; f_80086B20(c); // 80085378
L_8008537C:;
  c->lr=0x80085380u; f_80086240(c); // 8008537C
  c->r[3]=0u+0x80410000u; // 80085380
  c->r[3]=c->r[3]+0x00007120u; // 80085384
  c->r[0]=R8(c->r[3]+0x000000A7u); // 80085388
  cmps(c,0,(int32_t)c->r[0],0); // 8008538C
  if (crb(c,2)) { goto L_80085398; } // 80085390
  c->lr=0x80085398u; f_80086790(c); // 80085394
L_80085398:;
  c->lr=0x8008539Cu; f_80085A00(c); // 80085398
  cmps(c,0,(int32_t)c->r[3],0); // 8008539C
  if (!crb(c,2)) { IRQCHK(c); goto L_80085398; } // 800853A0
  c->r[3]=0u+0x80410000u; // 800853A4
  c->r[0]=0u+0x00000000u; // 800853A8
  c->r[3]=c->r[3]+0x00007120u; // 800853AC
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800853B0
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 800853B4
  W32(c->r[3]+0x000000E8u,c->r[0]); // 800853B8
  W32(c->r[3]+0x000000A8u,c->r[0]); // 800853BC
  W32(c->r[3]+0x000000ACu,c->r[0]); // 800853C0
L_800853C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800853C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800853C8
  c->lr=c->r[0]; // 800853CC
  c->r[1]=c->r[1]+0x00000010u; // 800853D0
  return; // 800853D4
}

// fn_800853E0
void f_800853E0(Ctx* __restrict c) {
  c->r[4]=0u+0x80410000u; // 800853E0
  c->r[4]=c->r[4]+0x00007120u; // 800853E4
  c->r[0]=R32(c->r[4]+0x000000A0u); // 800853E8
  cmps(c,0,(int32_t)c->r[0],0); // 800853EC
  if (crb(c,2)) { goto L_80085414; } // 800853F0
  c->r[0]=R8(c->r[4]+0x000000A4u); // 800853F4
  cmpu(c,0,c->r[0],0x00000002u); // 800853F8
  if (!crb(c,2)) { goto L_80085414; } // 800853FC
  c->r[0]=0u+0x00000004u; // 80085400
  W8(c->r[4]+0x000000A5u,c->r[0]); // 80085404
  c->r[3]=0u+0x00000001u; // 80085408
  W8(c->r[4]+0x000000A4u,c->r[0]); // 8008540C
  return; // 80085410
L_80085414:;
  c->r[3]=0u+0x00000000u; // 80085414
  return; // 80085418
}

// fn_80085420
void f_80085420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085420
  c->r[0]=c->lr; // 80085424
  W32(c->r[1]+0x00000014u,c->r[0]); // 80085428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008542C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80085430
  c->r[12]=R32(c->r[13]+0xFFFFB8B4u); // 80085434
  cmps(c,0,(int32_t)c->r[12],0); // 80085438
  if (crb(c,2)) { goto L_80085448; } // 8008543C
  c->ctr=c->r[12]; // 80085440
  if (true) { c->lr=0x80085448u; dispatch(c,c->ctr); } // 80085444
L_80085448:;
  c->r[31]=0u+0x80410000u; // 80085448
  c->r[30]=0u+0xFFFFFFFFu; // 8008544C
  c->r[31]=c->r[31]+0x00007120u; // 80085450
  c->r[0]=R32(c->r[31]+0x000000A0u); // 80085454
  cmps(c,0,(int32_t)c->r[0],0); // 80085458
  if (crb(c,2)) { goto L_80085684; } // 8008545C
  c->r[0]=R8(c->r[31]+0x000000A4u); // 80085460
  cmpu(c,0,c->r[0],0x00000002u); // 80085464
  if (!crb(c,2)) { goto L_80085684; } // 80085468
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8008546C
  cmps(c,0,(int32_t)c->r[0],0); // 80085470
  if (!crb(c,2)) { goto L_80085484; } // 80085474
  c->r[0]=R32(c->r[31]+0x000000ACu); // 80085478
  cmps(c,0,(int32_t)c->r[0],0); // 8008547C
  if (crb(c,2)) { goto L_8008549C; } // 80085480
L_80085484:;
  c->r[3]=0u+0x80410000u; // 80085484
  c->r[0]=0u+0x00000005u; // 80085488
  c->r[3]=c->r[3]+0x00007120u; // 8008548C
  W8(c->r[3]+0x000000A5u,c->r[0]); // 80085490
  W8(c->r[3]+0x000000A4u,c->r[0]); // 80085494
  goto L_80085684; // 80085498
L_8008549C:;
  c->r[4]=R32(c->r[31]+0x000000CCu); // 8008549C
  c->r[3]=0u+0x00000001u; // 800854A0
  c->r[5]=R32(c->r[31]+0x000000C8u); // 800854A4
  c->r[0]=0u+0x00000000u; // 800854A8
  c->r[4]=addc(c,c->r[4],c->r[3],0); // 800854AC
  W32(c->r[31]+0x000000CCu,c->r[4]); // 800854B0
  c->r[3]=addc(c,c->r[5],c->r[0],c->xer_ca); // 800854B4
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 800854B8
  W32(c->r[31]+0x000000C8u,c->r[3]); // 800854BC
  if (!crb(c,2)) { goto L_80085538; } // 800854C0
  c->lr=0x800854C8u; f_800856A0(c); // 800854C4
  cmps(c,0,(int32_t)c->r[3],0); // 800854C8
  if (crb(c,2)) { goto L_80085528; } // 800854CC
  c->r[0]=R8(c->r[31]+0x000000A7u); // 800854D0
  cmps(c,0,(int32_t)c->r[0],0); // 800854D4
  if (crb(c,2)) { goto L_80085518; } // 800854D8
  c->r[0]=R32(c->r[31]+0x000000F4u); // 800854DC
  c->r[3]=R32(c->r[31]+0x000000F0u); // 800854E0
  c->r[0]=c->r[3]-c->r[0]; // 800854E4
  cmps(c,0,(int32_t)c->r[0],1); // 800854E8
  if (crb(c,1)) { goto L_8008550C; } // 800854EC
  c->r[3]=0u+0x00000000u; // 800854F0
  c->lr=0x800854F8u; f_80086630(c); // 800854F4
  c->r[4]=R32(c->r[31]+0x000000F0u); // 800854F8
  c->r[30]=c->r[3]|c->r[3]; // 800854FC
  c->r[0]=c->r[4]+0x00000001u; // 80085500
  W32(c->r[31]+0x000000F0u,c->r[0]); // 80085504
  goto L_800855A8; // 80085508
L_8008550C:;
  c->r[0]=0u+0x00000002u; // 8008550C
  W8(c->r[31]+0x000000A5u,c->r[0]); // 80085510
  goto L_800855A8; // 80085514
L_80085518:;
  c->r[3]=0u+0x00000000u; // 80085518
  c->lr=0x80085520u; f_80086630(c); // 8008551C
  c->r[30]=c->r[3]|c->r[3]; // 80085520
  goto L_800855A8; // 80085524
L_80085528:;
  c->r[0]=0u+0xFFFFFFFFu; // 80085528
  W32(c->r[31]+0x000000CCu,c->r[0]); // 8008552C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80085530
  goto L_800855A8; // 80085534
L_80085538:;
  c->r[0]=c->r[4]^0x00000001u; // 80085538
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 8008553C
  if (!crb(c,2)) { goto L_8008554C; } // 80085540
  c->r[0]=0u+0x00000002u; // 80085544
  W8(c->r[31]+0x000000A5u,c->r[0]); // 80085548
L_8008554C:;
  c->lr=0x80085550u; f_80085710(c); // 8008554C
  cmps(c,0,(int32_t)c->r[3],0); // 80085550
  if (crb(c,2)) { goto L_800855A8; } // 80085554
  c->r[31]=0u+0x80410000u; // 80085558
  c->r[31]=c->r[31]+0x00007120u; // 8008555C
  c->r[0]=R8(c->r[31]+0x000000A7u); // 80085560
  cmps(c,0,(int32_t)c->r[0],0); // 80085564
  if (crb(c,2)) { goto L_8008559C; } // 80085568
  c->r[0]=R32(c->r[31]+0x000000F4u); // 8008556C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 80085570
  c->r[0]=c->r[3]-c->r[0]; // 80085574
  cmps(c,0,(int32_t)c->r[0],1); // 80085578
  if (crb(c,1)) { goto L_800855A8; } // 8008557C
  c->r[3]=0u+0x00000000u; // 80085580
  c->lr=0x80085588u; f_80086630(c); // 80085584
  c->r[4]=R32(c->r[31]+0x000000F0u); // 80085588
  c->r[30]=c->r[3]|c->r[3]; // 8008558C
  c->r[0]=c->r[4]+0x00000001u; // 80085590
  W32(c->r[31]+0x000000F0u,c->r[0]); // 80085594
  goto L_800855A8; // 80085598
L_8008559C:;
  c->r[3]=0u+0x00000000u; // 8008559C
  c->lr=0x800855A4u; f_80086630(c); // 800855A0
  c->r[30]=c->r[3]|c->r[3]; // 800855A4
L_800855A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800855A8
  if (crb(c,2)) { goto L_800855E0; } // 800855AC
  c->r[0]=c->r[30]+0x00010000u; // 800855B0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800855B4
  if (crb(c,2)) { goto L_800855E0; } // 800855B8
  c->r[3]=0u+0x80410000u; // 800855BC
  c->r[3]=c->r[3]+0x00007120u; // 800855C0
  c->r[3]=R32(c->r[3]+0x000000F8u); // 800855C4
  cmps(c,0,(int32_t)c->r[3],0); // 800855C8
  if (crb(c,2)) { goto L_800855D4; } // 800855CC
  c->lr=0x800855D4u; f_800859E0(c); // 800855D0
L_800855D4:;
  c->r[3]=0u+0x80410000u; // 800855D4
  c->r[3]=c->r[3]+0x00007120u; // 800855D8
  W32(c->r[3]+0x000000F8u,c->r[30]); // 800855DC
L_800855E0:;
  c->r[4]=0u+0x80410000u; // 800855E0
  c->r[4]=c->r[4]+0x00007120u; // 800855E4
  c->r[0]=R8(c->r[4]+0x000000A6u); // 800855E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800855EC
  if (!crb(c,2)) { goto L_80085684; } // 800855F0
  c->r[0]=R8(c->r[4]+0x000000A7u); // 800855F4
  cmps(c,0,(int32_t)c->r[0],0); // 800855F8
  if (crb(c,2)) { goto L_80085634; } // 800855FC
  c->r[3]=R32(c->r[4]+0x000000C0u); // 80085600
  c->r[5]=R32(c->r[4]+0x000000F4u); // 80085604
  c->r[0]=R32(c->r[4]+0x00000050u); // 80085608
  c->r[3]=c->r[5]+c->r[3]; // 8008560C
  cmpu(c,0,c->r[3],c->r[0]); // 80085610
  if (!crb(c,2)) { goto L_80085684; } // 80085614
  c->r[0]=R32(c->r[4]+0x000000FCu); // 80085618
  cmps(c,0,(int32_t)c->r[0],0); // 8008561C
  if (!crb(c,2)) { goto L_80085684; } // 80085620
  c->r[0]=0u+0x00000003u; // 80085624
  W8(c->r[4]+0x000000A5u,c->r[0]); // 80085628
  W8(c->r[4]+0x000000A4u,c->r[0]); // 8008562C
  goto L_80085684; // 80085630
L_80085634:;
  c->r[3]=R32(c->r[4]+0x000000F8u); // 80085634
  cmps(c,0,(int32_t)c->r[3],0); // 80085638
  if (crb(c,2)) { goto L_80085650; } // 8008563C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80085640
  c->r[0]=R32(c->r[4]+0x000000C0u); // 80085644
  c->r[5]=c->r[3]+c->r[0]; // 80085648
  goto L_80085658; // 8008564C
L_80085650:;
  c->r[3]=R32(c->r[4]+0x000000C0u); // 80085650
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80085654
L_80085658:;
  c->r[4]=0u+0x80410000u; // 80085658
  c->r[4]=c->r[4]+0x00007120u; // 8008565C
  c->r[3]=R32(c->r[4]+0x00000050u); // 80085660
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80085664
  cmpu(c,0,c->r[5],c->r[0]); // 80085668
  if (!crb(c,2)) { goto L_80085684; } // 8008566C
  cmps(c,0,(int32_t)c->r[30],0); // 80085670
  if (!crb(c,2)) { goto L_80085684; } // 80085674
  c->r[0]=0u+0x00000003u; // 80085678
  W8(c->r[4]+0x000000A5u,c->r[0]); // 8008567C
  W8(c->r[4]+0x000000A4u,c->r[0]); // 80085680
L_80085684:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80085684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80085688
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008568C
  c->lr=c->r[0]; // 80085690
  c->r[1]=c->r[1]+0x00000010u; // 80085694
  return; // 80085698
}

// fn_800856A0
void f_800856A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800856A0
  c->r[0]=c->lr; // 800856A4
  c->r[3]=0u+0x80410000u; // 800856A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800856AC
  c->r[3]=c->r[3]+0x00007120u; // 800856B0
  c->r[3]=R32(c->r[3]+0x00000088u); // 800856B4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800856B8
  if (crb(c,2)) { goto L_800856D4; } // 800856BC
  c->lr=0x800856C4u; f_8013A7D0(c); // 800856C0
  cmps(c,0,(int32_t)c->r[3],0); // 800856C4
  if (!crb(c,2)) { goto L_800856F8; } // 800856C8
  c->r[3]=0u+0x00000001u; // 800856CC
  goto L_800856FC; // 800856D0
L_800856D4:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800856D4
  if (crb(c,2)) { goto L_800856F0; } // 800856D8
  c->lr=0x800856E0u; f_8013A7D0(c); // 800856DC
  cmpu(c,0,c->r[3],0x00000001u); // 800856E0
  if (!crb(c,2)) { goto L_800856F8; } // 800856E4
  c->r[3]=0u+0x00000001u; // 800856E8
  goto L_800856FC; // 800856EC
L_800856F0:;
  c->r[3]=0u+0x00000001u; // 800856F0
  goto L_800856FC; // 800856F4
L_800856F8:;
  c->r[3]=0u+0x00000000u; // 800856F8
L_800856FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800856FC
  c->lr=c->r[0]; // 80085700
  c->r[1]=c->r[1]+0x00000010u; // 80085704
  return; // 80085708
}

// fn_80085710
void f_80085710(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085710
  c->r[0]=c->lr; // 80085714
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085718
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008571C
  c->r[31]=0u+0x80410000u; // 80085720
  c->r[31]=c->r[31]+0x00007120u; // 80085724
  W32(c->r[1]+0x00000018u,c->r[30]); // 80085728
  c->r[3]=R32(c->r[31]+0x00000088u); // 8008572C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80085730
  if (crb(c,2)) { goto L_8008574C; } // 80085734
  c->lr=0x8008573Cu; f_8013A7D0(c); // 80085738
  cmps(c,0,(int32_t)c->r[3],0); // 8008573C
  if (!crb(c,2)) { goto L_8008581C; } // 80085740
  c->r[3]=0u+0x00000001u; // 80085744
  goto L_80085820; // 80085748
L_8008574C:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8008574C
  if (crb(c,2)) { goto L_80085768; } // 80085750
  c->lr=0x80085758u; f_8013A7D0(c); // 80085754
  cmpu(c,0,c->r[3],0x00000001u); // 80085758
  if (!crb(c,2)) { goto L_8008581C; } // 8008575C
  c->r[3]=0u+0x00000001u; // 80085760
  goto L_80085820; // 80085764
L_80085768:;
  {uint32_t ea=c->r[2]+0xFFFF8CA4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80085768
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8008576C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80085770
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80085774
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80085778
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 8008577C
  c->lr=0x80085784u; f_8013A900(c); // 80085780
  cmpu(c,0,c->r[3],0x00000001u); // 80085784
  if (!crb(c,2)) { goto L_800857C4; } // 80085788
  c->r[7]=R32(c->r[31]+0x000000CCu); // 8008578C
  c->r[0]=sraw(c,c->r[30],31); // 80085790
  c->r[4]=R32(c->r[31]+0x000000C8u); // 80085794
  c->r[6]=0u+0x00001388u; // 80085798
  c->r[3]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[30])>>32); // 8008579C
  c->r[5]=0u+0x00000000u; // 800857A0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[30]); // 800857A4
  c->r[3]=c->r[3]+c->r[4]; // 800857A8
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 800857AC
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[30]); // 800857B0
  c->r[3]=c->r[3]+c->r[0]; // 800857B4
  c->lr=0x800857BCu; f_802E6B1C(c); // 800857B8
  W32(c->r[31]+0x000000D4u,c->r[4]); // 800857BC
  goto L_800857F8; // 800857C0
L_800857C4:;
  c->r[7]=R32(c->r[31]+0x000000CCu); // 800857C4
  c->r[0]=sraw(c,c->r[30],31); // 800857C8
  c->r[4]=R32(c->r[31]+0x000000C8u); // 800857CC
  c->r[6]=0u+0x0000176Au; // 800857D0
  c->r[3]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[30])>>32); // 800857D4
  c->r[5]=0u+0x00000000u; // 800857D8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[30]); // 800857DC
  c->r[3]=c->r[3]+c->r[4]; // 800857E0
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 800857E4
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[30]); // 800857E8
  c->r[3]=c->r[3]+c->r[0]; // 800857EC
  c->lr=0x800857F4u; f_802E6B1C(c); // 800857F0
  W32(c->r[31]+0x000000D4u,c->r[4]); // 800857F4
L_800857F8:;
  c->r[3]=0u+0x80410000u; // 800857F8
  c->r[3]=c->r[3]+0x00007120u; // 800857FC
  c->r[4]=R32(c->r[3]+0x000000D4u); // 80085800
  c->r[0]=R32(c->r[3]+0x000000D0u); // 80085804
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80085808
  if (crb(c,2)) { goto L_8008581C; } // 8008580C
  W32(c->r[3]+0x000000D0u,c->r[4]); // 80085810
  c->r[3]=0u+0x00000001u; // 80085814
  goto L_80085820; // 80085818
L_8008581C:;
  c->r[3]=0u+0x00000000u; // 8008581C
L_80085820:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085820
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085824
  c->r[30]=R32(c->r[1]+0x00000018u); // 80085828
  c->lr=c->r[0]; // 8008582C
  c->r[1]=c->r[1]+0x00000020u; // 80085830
  return; // 80085834
}

// fn_80085840
void f_80085840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085840
  c->r[0]=c->lr; // 80085844
  W32(c->r[1]+0x00000034u,c->r[0]); // 80085848
  c->r[11]=c->r[1]+0x00000030u; // 8008584C
  c->lr=0x80085854u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085850
  c->r[31]=0u+0x80410000u; // 80085854
  c->r[27]=c->r[6]|c->r[6]; // 80085858
  c->r[31]=c->r[31]+0x00007120u; // 8008585C
  c->r[28]=c->r[7]|c->r[7]; // 80085860
  c->r[0]=R32(c->r[31]+0x000000A0u); // 80085864
  c->r[29]=c->r[8]|c->r[8]; // 80085868
  c->r[30]=c->r[9]|c->r[9]; // 8008586C
  cmps(c,0,(int32_t)c->r[0],0); // 80085870
  if (crb(c,2)) { goto L_800858F4; } // 80085874
  c->r[0]=R8(c->r[31]+0x000000A4u); // 80085878
  cmps(c,0,(int32_t)c->r[0],0); // 8008587C
  if (crb(c,2)) { goto L_800858F4; } // 80085880
  c->r[0]=R32(c->r[31]+0x000000F8u); // 80085884
  cmps(c,0,(int32_t)c->r[0],0); // 80085888
  if (crb(c,2)) { goto L_800858F4; } // 8008588C
  c->lr=0x80085894u; f_8004A070(c); // 80085890
  c->r[5]=R32(c->r[31]+0x000000F8u); // 80085894
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 80085898
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[27]; // 8008589C
  c->r[7]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 800858A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800858A4
  c->r[10]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 800858A8
  c->r[4]=R32(c->r[31]+0x00000080u); // 800858AC
  c->r[0]=R32(c->r[31]+0x00000084u); // 800858B0
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800858B4
  c->r[3]=R32(c->r[5]+0x00000000u); // 800858B8
  c->r[4]=R32(c->r[5]+0x00000004u); // 800858BC
  c->r[9]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800858C0
  c->r[5]=R32(c->r[5]+0x00000008u); // 800858C4
  c->lr=0x800858CCu; f_8004A4F0(c); // 800858C8
  c->lr=0x800858D0u; f_80049F40(c); // 800858CC
  c->r[3]=R32(c->r[31]+0x000000F8u); // 800858D0
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800858D4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800858D8
  c->r[4]=R32(c->r[31]+0x00000050u); // 800858DC
  c->r[3]=c->r[3]+c->r[0]; // 800858E0
  c->r[0]=divwu(c->r[3],c->r[4]); // 800858E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800858E8
  c->r[3]=c->r[3]-c->r[0]; // 800858EC
  goto L_800858F8; // 800858F0
L_800858F4:;
  c->r[3]=0u+0xFFFFFFFFu; // 800858F4
L_800858F8:;
  c->r[11]=c->r[1]+0x00000030u; // 800858F8
  c->lr=0x80085900u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800858FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80085900
  c->lr=c->r[0]; // 80085904
  c->r[1]=c->r[1]+0x00000030u; // 80085908
  return; // 8008590C
}

// fn_80085910
void f_80085910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085910
  c->r[0]=c->lr; // 80085914
  c->r[4]=0u+0x80410000u; // 80085918
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008591C
  c->r[4]=c->r[4]+0x00007120u; // 80085920
  c->r[0]=R32(c->r[4]+0x000000A0u); // 80085924
  cmps(c,0,(int32_t)c->r[0],0); // 80085928
  if (crb(c,2)) { goto L_80085944; } // 8008592C
  c->r[4]=c->r[4]+0x00000080u; // 80085930
  c->r[5]=0u+0x0000000Cu; // 80085934
  c->lr=0x8008593Cu; f_800043C4(c); // 80085938
  c->r[3]=0u+0x00000001u; // 8008593C
  goto L_80085948; // 80085940
L_80085944:;
  c->r[3]=0u+0x00000000u; // 80085944
L_80085948:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80085948
  c->lr=c->r[0]; // 8008594C
  c->r[1]=c->r[1]+0x00000010u; // 80085950
  return; // 80085954
}

// fn_80085960
void f_80085960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085960
  c->r[0]=c->lr; // 80085964
  c->r[4]=0u+0x80410000u; // 80085968
  W32(c->r[1]+0x00000014u,c->r[0]); // 8008596C
  c->r[4]=c->r[4]+0x00007120u; // 80085970
  c->r[0]=R32(c->r[4]+0x000000A0u); // 80085974
  cmps(c,0,(int32_t)c->r[0],0); // 80085978
  if (crb(c,2)) { goto L_80085994; } // 8008597C
  c->r[4]=c->r[4]+0x0000008Cu; // 80085980
  c->r[5]=0u+0x00000010u; // 80085984
  c->lr=0x8008598Cu; f_800043C4(c); // 80085988
  c->r[3]=0u+0x00000001u; // 8008598C
  goto L_80085998; // 80085990
L_80085994:;
  c->r[3]=0u+0x00000000u; // 80085994
L_80085998:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80085998
  c->lr=c->r[0]; // 8008599C
  c->r[1]=c->r[1]+0x00000010u; // 800859A0
  return; // 800859A4
}

// fn_800859B0
void f_800859B0(Ctx* __restrict c) {
  c->r[3]=0u+0x80410000u; // 800859B0
  c->r[3]=c->r[3]+0x00007120u; // 800859B4
  c->r[0]=R32(c->r[3]+0x000000A0u); // 800859B8
  cmps(c,0,(int32_t)c->r[0],0); // 800859BC
  if (crb(c,2)) { goto L_800859CC; } // 800859C0
  c->r[3]=R32(c->r[3]+0x00000050u); // 800859C4
  return; // 800859C8
L_800859CC:;
  c->r[3]=0u+0x00000000u; // 800859CC
  return; // 800859D0
}

// fn_800859E0
void f_800859E0(Ctx* __restrict c) {
  c->r[5]=0u+0x80410000u; // 800859E0
  c->r[4]=c->r[3]|c->r[3]; // 800859E4
  c->r[3]=c->r[5]+0x00007318u; // 800859E8
  c->r[5]=0u+0x00000000u; // 800859EC
  f_80126430(c); return; // 800859F0
}

// fn_80085A00
void f_80085A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085A00
  c->r[0]=c->lr; // 80085A04
  c->r[3]=0u+0x80410000u; // 80085A08
  c->r[5]=0u+0x00000000u; // 80085A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80085A10
  c->r[4]=c->r[1]+0x00000008u; // 80085A14
  c->r[3]=c->r[3]+0x00007318u; // 80085A18
  c->lr=0x80085A20u; f_80126500(c); // 80085A1C
  cmps(c,0,(int32_t)c->r[3],1); // 80085A20
  if (!crb(c,2)) { goto L_80085A30; } // 80085A24
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085A28
  goto L_80085A34; // 80085A2C
L_80085A30:;
  c->r[3]=0u+0x00000000u; // 80085A30
L_80085A34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80085A34
  c->lr=c->r[0]; // 80085A38
  c->r[1]=c->r[1]+0x00000010u; // 80085A3C
  return; // 80085A40
}

// fn_80085A50
void f_80085A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085A50
  c->r[0]=c->lr; // 80085A54
  W32(c->r[1]+0x00000024u,c->r[0]); // 80085A58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80085A5C
  c->lr=0x80085A64u; f_80141C50(c); // 80085A60
  c->r[0]=R32(c->r[13]+0xFFFFB8B0u); // 80085A64
  cmps(c,0,(int32_t)c->r[0],0); // 80085A68
  if (crb(c,2)) { goto L_80085AA8; } // 80085A6C
  c->r[31]=0u+0x80410000u; // 80085A70
L_80085A74:;
  c->r[3]=c->r[31]+0x00007318u; // 80085A74
  c->r[4]=c->r[1]+0x00000008u; // 80085A78
  c->r[5]=0u+0x00000000u; // 80085A7C
  c->lr=0x80085A84u; f_80126500(c); // 80085A80
  cmps(c,0,(int32_t)c->r[3],1); // 80085A84
  if (crb(c,2)) { goto L_80085A94; } // 80085A88
  c->r[3]=0u+0x00000000u; // 80085A8C
  goto L_80085A98; // 80085A90
L_80085A94:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80085A94
L_80085A98:;
  cmps(c,0,(int32_t)c->r[3],0); // 80085A98
  if (crb(c,2)) { goto L_80085AA8; } // 80085A9C
  c->lr=0x80085AA4u; f_80086610(c); // 80085AA0
  IRQCHK(c); goto L_80085A74; // 80085AA4
L_80085AA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80085AA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80085AAC
  c->lr=c->r[0]; // 80085AB0
  c->r[1]=c->r[1]+0x00000020u; // 80085AB4
  return; // 80085AB8
}

// fn_80085AC0
void f_80085AC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085AC0
  c->r[0]=c->lr; // 80085AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80085AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80085ACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80085AD0
  c->r[0]=R32(c->r[13]+0xFFFFB8BCu); // 80085AD4
  cmps(c,0,(int32_t)c->r[0],0); // 80085AD8
  if (!crb(c,2)) { goto L_80085B44; } // 80085ADC
  c->r[0]=R32(c->r[13]+0xFFFFB8C8u); // 80085AE0
  c->r[31]=0u+0x80410000u; // 80085AE4
  c->r[31]=c->r[31]+0x00007360u; // 80085AE8
  c->r[4]=0u+0x00000180u; // 80085AEC
  c->r[0]=c->r[0]^0x00000001u; // 80085AF0
  W32(c->r[13]+0xFFFFB8C8u,c->r[0]); // 80085AF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 80085AF8
  c->r[3]=c->r[31]+c->r[0]; // 80085AFC
  c->lr=0x80085B04u; f_8013D5C0(c); // 80085B00
  c->lr=0x80085B08u; f_801251D0(c); // 80085B04
  c->r[0]=R32(c->r[13]+0xFFFFB8C8u); // 80085B08
  c->r[30]=c->r[3]|c->r[3]; // 80085B0C
  c->r[4]=0u+0x00000000u; // 80085B10
  c->r[5]=0u+0x00000060u; // 80085B14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 80085B18
  c->r[3]=c->r[31]+c->r[0]; // 80085B1C
  c->lr=0x80085B24u; f_80085C30(c); // 80085B20
  c->r[0]=R32(c->r[13]+0xFFFFB8C8u); // 80085B24
  c->r[4]=0u+0x00000180u; // 80085B28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 80085B2C
  c->r[3]=c->r[31]+c->r[0]; // 80085B30
  c->lr=0x80085B38u; f_80120C40(c); // 80085B34
  c->r[3]=c->r[30]|c->r[30]; // 80085B38
  c->lr=0x80085B40u; f_801251F0(c); // 80085B3C
  goto L_80085C10; // 80085B40
L_80085B44:;
  cmps(c,0,(int32_t)c->r[0],1); // 80085B44
  if (!crb(c,2)) { goto L_80085B78; } // 80085B48
  c->r[0]=R32(c->r[13]+0xFFFFB8C4u); // 80085B4C
  cmps(c,0,(int32_t)c->r[0],0); // 80085B50
  if (crb(c,2)) { goto L_80085B5C; } // 80085B54
  W32(c->r[13]+0xFFFFB8C0u,c->r[0]); // 80085B58
L_80085B5C:;
  c->r[12]=R32(c->r[13]+0xFFFFB8B8u); // 80085B5C
  c->ctr=c->r[12]; // 80085B60
  if (true) { c->lr=0x80085B68u; dispatch(c,c->ctr); } // 80085B64
  c->lr=0x80085B6Cu; f_8013D670(c); // 80085B68
  c->r[0]=c->r[3]+0x80000000u; // 80085B6C
  W32(c->r[13]+0xFFFFB8C4u,c->r[0]); // 80085B70
  goto L_80085B90; // 80085B74
L_80085B78:;
  c->r[12]=R32(c->r[13]+0xFFFFB8B8u); // 80085B78
  c->ctr=c->r[12]; // 80085B7C
  if (true) { c->lr=0x80085B84u; dispatch(c,c->ctr); } // 80085B80
  c->lr=0x80085B88u; f_8013D670(c); // 80085B84
  c->r[0]=c->r[3]+0x80000000u; // 80085B88
  W32(c->r[13]+0xFFFFB8C0u,c->r[0]); // 80085B8C
L_80085B90:;
  c->r[0]=R32(c->r[13]+0xFFFFB8C8u); // 80085B90
  c->r[3]=0u+0x80410000u; // 80085B94
  c->r[3]=c->r[3]+0x00007360u; // 80085B98
  c->r[4]=0u+0x00000180u; // 80085B9C
  c->r[0]=c->r[0]^0x00000001u; // 80085BA0
  W32(c->r[13]+0xFFFFB8C8u,c->r[0]); // 80085BA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 80085BA8
  c->r[3]=c->r[3]+c->r[0]; // 80085BAC
  c->lr=0x80085BB4u; f_8013D5C0(c); // 80085BB0
  c->lr=0x80085BB8u; f_801251D0(c); // 80085BB4
  c->r[0]=R32(c->r[13]+0xFFFFB8C0u); // 80085BB8
  c->r[30]=c->r[3]|c->r[3]; // 80085BBC
  cmps(c,0,(int32_t)c->r[0],0); // 80085BC0
  if (crb(c,2)) { goto L_80085BD4; } // 80085BC4
  c->r[3]=c->r[0]|c->r[0]; // 80085BC8
  c->r[4]=0u+0x00000180u; // 80085BCC
  c->lr=0x80085BD4u; f_80120C10(c); // 80085BD0
L_80085BD4:;
  c->r[0]=R32(c->r[13]+0xFFFFB8C8u); // 80085BD4
  c->r[31]=0u+0x80410000u; // 80085BD8
  c->r[31]=c->r[31]+0x00007360u; // 80085BDC
  c->r[4]=R32(c->r[13]+0xFFFFB8C0u); // 80085BE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 80085BE4
  c->r[5]=0u+0x00000060u; // 80085BE8
  c->r[3]=c->r[31]+c->r[0]; // 80085BEC
  c->lr=0x80085BF4u; f_80085C30(c); // 80085BF0
  c->r[0]=R32(c->r[13]+0xFFFFB8C8u); // 80085BF4
  c->r[4]=0u+0x00000180u; // 80085BF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 80085BFC
  c->r[3]=c->r[31]+c->r[0]; // 80085C00
  c->lr=0x80085C08u; f_80120C40(c); // 80085C04
  c->r[3]=c->r[30]|c->r[30]; // 80085C08
  c->lr=0x80085C10u; f_801251F0(c); // 80085C0C
L_80085C10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80085C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80085C14
  c->r[30]=R32(c->r[1]+0x00000008u); // 80085C18
  c->lr=c->r[0]; // 80085C1C
  c->r[1]=c->r[1]+0x00000010u; // 80085C20
  return; // 80085C24
}

// fn_80085C30
void f_80085C30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80085C30
  c->r[0]=c->lr; // 80085C34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80085C38
  c->r[11]=c->r[1]+0x00000030u; // 80085C3C
  c->lr=0x80085C44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80085C40
  cmps(c,0,(int32_t)c->r[4],0); // 80085C44
  if (crb(c,2)) { goto L_80085E28; } // 80085C48
  c->r[6]=0u+0x80410000u; // 80085C4C
  c->r[30]=c->r[6]+0x00007120u; // 80085C50
  c->r[0]=R32(c->r[30]+0x000000A0u); // 80085C54
  cmps(c,0,(int32_t)c->r[0],0); // 80085C58
  if (crb(c,2)) { goto L_80085E1C; } // 80085C5C
  c->r[0]=R8(c->r[30]+0x000000A5u); // 80085C60
  cmpu(c,0,c->r[0],0x00000002u); // 80085C64
  if (!crb(c,2)) { goto L_80085E1C; } // 80085C68
  c->r[0]=R8(c->r[30]+0x000000A7u); // 80085C6C
  cmps(c,0,(int32_t)c->r[0],0); // 80085C70
  if (crb(c,2)) { goto L_80085E1C; } // 80085C74
  c->r[31]=0u+0x80360000u; // 80085C78
  c->r[29]=c->r[5]|c->r[5]; // 80085C7C
  c->r[28]=c->r[3]|c->r[3]; // 80085C80
  c->r[27]=c->r[4]|c->r[4]; // 80085C84
  c->r[31]=c->r[31]+0x00001D28u; // 80085C88
  c->r[26]=0u+0x00000000u; // 80085C8C
L_80085C90:;
  c->r[0]=R32(c->r[30]+0x000000FCu); // 80085C90
  cmps(c,0,(int32_t)c->r[0],0); // 80085C94
  if (!crb(c,2)) { goto L_80085CD0; } // 80085C98
  c->r[3]=0u+0x00000000u; // 80085C9C
  c->lr=0x80085CA4u; f_800869F0(c); // 80085CA0
  cmps(c,0,(int32_t)c->r[3],0); // 80085CA4
  W32(c->r[30]+0x000000FCu,c->r[3]); // 80085CA8
  if (!crb(c,2)) { goto L_80085CC4; } // 80085CAC
  c->r[3]=c->r[28]|c->r[28]; // 80085CB0
  c->r[4]=c->r[27]|c->r[27]; // 80085CB4
  c->r[5]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80085CB8
  c->lr=0x80085CC0u; f_800043C4(c); // 80085CBC
  goto L_80085FEC; // 80085CC0
L_80085CC4:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 80085CC4
  c->r[0]=c->r[3]+0x00000001u; // 80085CC8
  W32(c->r[30]+0x000000F4u,c->r[0]); // 80085CCC
L_80085CD0:;
  c->r[3]=R32(c->r[30]+0x000000FCu); // 80085CD0
  c->r[5]=R32(c->r[3]+0x00000008u); // 80085CD4
  cmps(c,0,(int32_t)c->r[5],0); // 80085CD8
  if (crb(c,2)) { IRQCHK(c); goto L_80085C90; } // 80085CDC
  cmpu(c,0,c->r[5],c->r[29]); // 80085CE0
  if (crb(c,0)) { goto L_80085CEC; } // 80085CE4
  c->r[5]=c->r[29]|c->r[29]; // 80085CE8
L_80085CEC:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 80085CEC
  c->ctr=c->r[5]; // 80085CF0
  cmpu(c,0,c->r[5],0x00000000u); // 80085CF4
  if (!crb(c,1)) { goto L_80085DDC; } // 80085CF8
  c->r[0]=c->r[0]|0x00000000u; // 80085CFC
L_80085D00:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 80085D00
  cmps(c,0,(int32_t)c->r[3],0); // 80085D04
  if (crb(c,2)) { goto L_80085D28; } // 80085D08
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80085D0C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80085D10
  {uint32_t ea=c->r[30]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085D14
  W32(c->r[30]+0x000000E8u,c->r[0]); // 80085D18
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80085D1C
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[0]);} // 80085D20
  goto L_80085D30; // 80085D24
L_80085D28:;
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085D28
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[0]);} // 80085D2C
L_80085D30:;
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80085D30
  c->r[0]=R32(c->r[30]+0x000001F0u); // 80085D34
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80085D38
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 80085D3C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000002u); // 80085D40
  cmps(c,0,(int32_t)c->r[0],0); // 80085D44
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80085D48
  c->r[6]=c->r[6]+0x00000004u; // 80085D4C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80085D50
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80085D54
  c->r[0]=R16(c->r[31]+c->r[0]); // 80085D58
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80085D5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80085D60
  c->r[3]=sraw(c,c->r[4],15); // 80085D64
  c->r[4]=sraw(c,c->r[0],15); // 80085D68
  if (!crb(c,2)) { goto L_80085D80; } // 80085D6C
  c->r[3]=c->r[3]+c->r[4]; // 80085D70
  c->r[3]=c->r[3]+0x00000001u; // 80085D74
  c->r[3]=sraw(c,c->r[3],1); // 80085D78
  c->r[4]=c->r[3]|c->r[3]; // 80085D7C
L_80085D80:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000000u); // 80085D80
  c->r[3]=c->r[3]+c->r[0]; // 80085D84
  cmps(c,0,(int32_t)c->r[3],-32768); // 80085D88
  if (!crb(c,0)) { goto L_80085D98; } // 80085D8C
  c->r[3]=0u+0xFFFF8000u; // 80085D90
  goto L_80085DA4; // 80085D94
L_80085D98:;
  cmps(c,0,(int32_t)c->r[3],32767); // 80085D98
  if (!crb(c,1)) { goto L_80085DA4; } // 80085D9C
  c->r[3]=0u+0x00007FFFu; // 80085DA0
L_80085DA4:;
  W16(c->r[28]+0x00000000u,c->r[3]); // 80085DA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[27]+0x00000002u); // 80085DA8
  c->r[27]=c->r[27]+0x00000004u; // 80085DAC
  c->r[4]=c->r[4]+c->r[0]; // 80085DB0
  cmps(c,0,(int32_t)c->r[4],-32768); // 80085DB4
  if (!crb(c,0)) { goto L_80085DC4; } // 80085DB8
  c->r[4]=0u+0xFFFF8000u; // 80085DBC
  goto L_80085DD0; // 80085DC0
L_80085DC4:;
  cmps(c,0,(int32_t)c->r[4],32767); // 80085DC4
  if (!crb(c,1)) { goto L_80085DD0; } // 80085DC8
  c->r[4]=0u+0x00007FFFu; // 80085DCC
L_80085DD0:;
  W16(c->r[28]+0x00000002u,c->r[4]); // 80085DD0
  c->r[28]=c->r[28]+0x00000004u; // 80085DD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80085D00; } // 80085DD8
L_80085DDC:;
  c->r[3]=R32(c->r[30]+0x000000FCu); // 80085DDC
  c->r[29]=c->r[29]-c->r[5]; // 80085DE0
  c->r[0]=R32(c->r[3]+0x00000008u); // 80085DE4
  c->r[0]=c->r[0]-c->r[5]; // 80085DE8
  W32(c->r[3]+0x00000008u,c->r[0]); // 80085DEC
  c->r[3]=R32(c->r[30]+0x000000FCu); // 80085DF0
  W32(c->r[3]+0x00000004u,c->r[6]); // 80085DF4
  c->r[3]=R32(c->r[30]+0x000000FCu); // 80085DF8
  c->r[0]=R32(c->r[3]+0x00000008u); // 80085DFC
  cmps(c,0,(int32_t)c->r[0],0); // 80085E00
  if (!crb(c,2)) { goto L_80085E10; } // 80085E04
  c->lr=0x80085E0Cu; f_800869D0(c); // 80085E08
  W32(c->r[30]+0x000000FCu,c->r[26]); // 80085E0C
L_80085E10:;
  cmps(c,0,(int32_t)c->r[29],0); // 80085E10
  if (crb(c,2)) { goto L_80085FEC; } // 80085E14
  IRQCHK(c); goto L_80085C90; // 80085E18
L_80085E1C:;
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80085E1C
  c->lr=0x80085E24u; f_800043C4(c); // 80085E20
  goto L_80085FEC; // 80085E24
L_80085E28:;
  c->r[4]=0u+0x80410000u; // 80085E28
  c->r[31]=c->r[4]+0x00007120u; // 80085E2C
  c->r[0]=R32(c->r[31]+0x000000A0u); // 80085E30
  cmps(c,0,(int32_t)c->r[0],0); // 80085E34
  if (crb(c,2)) { goto L_80085FE0; } // 80085E38
  c->r[0]=R8(c->r[31]+0x000000A5u); // 80085E3C
  cmpu(c,0,c->r[0],0x00000002u); // 80085E40
  if (!crb(c,2)) { goto L_80085FE0; } // 80085E44
  c->r[0]=R8(c->r[31]+0x000000A7u); // 80085E48
  cmps(c,0,(int32_t)c->r[0],0); // 80085E4C
  if (crb(c,2)) { goto L_80085FE0; } // 80085E50
  c->r[28]=0u+0x80360000u; // 80085E54
  c->r[30]=c->r[5]|c->r[5]; // 80085E58
  c->r[29]=c->r[3]|c->r[3]; // 80085E5C
  c->r[27]=0u+0x00000000u; // 80085E60
  c->r[28]=c->r[28]+0x00001D28u; // 80085E64
L_80085E68:;
  c->r[0]=R32(c->r[31]+0x000000FCu); // 80085E68
  cmps(c,0,(int32_t)c->r[0],0); // 80085E6C
  if (!crb(c,2)) { goto L_80085EA8; } // 80085E70
  c->r[3]=0u+0x00000000u; // 80085E74
  c->lr=0x80085E7Cu; f_800869F0(c); // 80085E78
  cmps(c,0,(int32_t)c->r[3],0); // 80085E7C
  W32(c->r[31]+0x000000FCu,c->r[3]); // 80085E80
  if (!crb(c,2)) { goto L_80085E9C; } // 80085E84
  c->r[3]=c->r[29]|c->r[29]; // 80085E88
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80085E8C
  c->r[4]=0u+0x00000000u; // 80085E90
  c->lr=0x80085E98u; f_80004714(c); // 80085E94
  goto L_80085FEC; // 80085E98
L_80085E9C:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 80085E9C
  c->r[0]=c->r[3]+0x00000001u; // 80085EA0
  W32(c->r[31]+0x000000F4u,c->r[0]); // 80085EA4
L_80085EA8:;
  c->r[3]=R32(c->r[31]+0x000000FCu); // 80085EA8
  c->r[5]=R32(c->r[3]+0x00000008u); // 80085EAC
  cmps(c,0,(int32_t)c->r[5],0); // 80085EB0
  if (crb(c,2)) { IRQCHK(c); goto L_80085E68; } // 80085EB4
  cmpu(c,0,c->r[5],c->r[30]); // 80085EB8
  if (crb(c,0)) { goto L_80085EC4; } // 80085EBC
  c->r[5]=c->r[30]|c->r[30]; // 80085EC0
L_80085EC4:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 80085EC4
  c->ctr=c->r[5]; // 80085EC8
  cmpu(c,0,c->r[5],0x00000000u); // 80085ECC
  if (!crb(c,1)) { goto L_80085FA0; } // 80085ED0
  c->r[0]=c->r[0]|0x00000000u; // 80085ED4
L_80085ED8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 80085ED8
  cmps(c,0,(int32_t)c->r[3],0); // 80085EDC
  if (crb(c,2)) { goto L_80085F00; } // 80085EE0
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80085EE4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80085EE8
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085EEC
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80085EF0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80085EF4
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 80085EF8
  goto L_80085F08; // 80085EFC
L_80085F00:;
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F00
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[0]);} // 80085F04
L_80085F08:;
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80085F08
  c->r[0]=R32(c->r[31]+0x000001F0u); // 80085F0C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80085F10
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000000u); // 80085F14
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000002u); // 80085F18
  cmps(c,0,(int32_t)c->r[0],0); // 80085F1C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 80085F20
  c->r[6]=c->r[6]+0x00000004u; // 80085F24
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80085F28
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80085F2C
  c->r[0]=R16(c->r[28]+c->r[0]); // 80085F30
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80085F34
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 80085F38
  c->r[3]=sraw(c,c->r[4],15); // 80085F3C
  c->r[0]=sraw(c,c->r[0],15); // 80085F40
  if (!crb(c,2)) { goto L_80085F58; } // 80085F44
  c->r[3]=c->r[3]+c->r[0]; // 80085F48
  c->r[3]=c->r[3]+0x00000001u; // 80085F4C
  c->r[3]=sraw(c,c->r[3],1); // 80085F50
  c->r[0]=c->r[3]|c->r[3]; // 80085F54
L_80085F58:;
  cmps(c,0,(int32_t)c->r[3],-32768); // 80085F58
  if (!crb(c,0)) { goto L_80085F68; } // 80085F5C
  c->r[3]=0u+0xFFFF8000u; // 80085F60
  goto L_80085F74; // 80085F64
L_80085F68:;
  cmps(c,0,(int32_t)c->r[3],32767); // 80085F68
  if (!crb(c,1)) { goto L_80085F74; } // 80085F6C
  c->r[3]=0u+0x00007FFFu; // 80085F70
L_80085F74:;
  cmps(c,0,(int32_t)c->r[0],-32768); // 80085F74
  W16(c->r[29]+0x00000000u,c->r[3]); // 80085F78
  if (!crb(c,0)) { goto L_80085F88; } // 80085F7C
  c->r[0]=0u+0xFFFF8000u; // 80085F80
  goto L_80085F94; // 80085F84
L_80085F88:;
  cmps(c,0,(int32_t)c->r[0],32767); // 80085F88
  if (!crb(c,1)) { goto L_80085F94; } // 80085F8C
  c->r[0]=0u+0x00007FFFu; // 80085F90
L_80085F94:;
  W16(c->r[29]+0x00000002u,c->r[0]); // 80085F94
  c->r[29]=c->r[29]+0x00000004u; // 80085F98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80085ED8; } // 80085F9C
L_80085FA0:;
  c->r[3]=R32(c->r[31]+0x000000FCu); // 80085FA0
  c->r[30]=c->r[30]-c->r[5]; // 80085FA4
  c->r[0]=R32(c->r[3]+0x00000008u); // 80085FA8
  c->r[0]=c->r[0]-c->r[5]; // 80085FAC
  W32(c->r[3]+0x00000008u,c->r[0]); // 80085FB0
  c->r[3]=R32(c->r[31]+0x000000FCu); // 80085FB4
  W32(c->r[3]+0x00000004u,c->r[6]); // 80085FB8
  c->r[3]=R32(c->r[31]+0x000000FCu); // 80085FBC
  c->r[0]=R32(c->r[3]+0x00000008u); // 80085FC0
  cmps(c,0,(int32_t)c->r[0],0); // 80085FC4
  if (!crb(c,2)) { goto L_80085FD4; } // 80085FC8
  c->lr=0x80085FD0u; f_800869D0(c); // 80085FCC
  W32(c->r[31]+0x000000FCu,c->r[27]); // 80085FD0
L_80085FD4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80085FD4
  if (crb(c,2)) { goto L_80085FEC; } // 80085FD8
  IRQCHK(c); goto L_80085E68; // 80085FDC
L_80085FE0:;
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80085FE0
  c->r[4]=0u+0x00000000u; // 80085FE4
  c->lr=0x80085FECu; f_80004714(c); // 80085FE8
L_80085FEC:;
  c->r[11]=c->r[1]+0x00000030u; // 80085FEC
  c->lr=0x80085FF4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80085FF0
  c->r[0]=R32(c->r[1]+0x00000034u); // 80085FF4
  c->lr=c->r[0]; // 80085FF8
  c->r[1]=c->r[1]+0x00000030u; // 80085FFC
  return; // 80086000
}

// fn_80086010
void f_80086010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086010
  c->r[0]=c->lr; // 80086014
  c->r[5]=0u+0x80410000u; // 80086018
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008601C
  c->r[5]=c->r[5]+0x00007120u; // 80086020
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80086024
  W32(c->r[1]+0x00000018u,c->r[30]); // 80086028
  c->r[30]=c->r[4]|c->r[4]; // 8008602C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80086030
  c->r[29]=c->r[3]|c->r[3]; // 80086034
  c->r[0]=R32(c->r[5]+0x000000A0u); // 80086038
  cmps(c,0,(int32_t)c->r[0],0); // 8008603C
  if (crb(c,2)) { goto L_80086118; } // 80086040
  c->r[0]=R8(c->r[5]+0x000000A7u); // 80086044
  cmps(c,0,(int32_t)c->r[0],0); // 80086048
  if (crb(c,2)) { goto L_80086118; } // 8008604C
  c->lr=0x80086054u; f_8013D6B0(c); // 80086050
  cmps(c,0,(int32_t)c->r[3],0); // 80086054
  c->r[31]=0u+0x00000030u; // 80086058
  if (!crb(c,2)) { goto L_80086064; } // 8008605C
  c->r[31]=0u+0x00000020u; // 80086060
L_80086064:;
  cmps(c,0,(int32_t)c->r[29],127); // 80086064
  if (!crb(c,1)) { goto L_80086070; } // 80086068
  c->r[29]=0u+0x0000007Fu; // 8008606C
L_80086070:;
  cmps(c,0,(int32_t)c->r[29],0); // 80086070
  if (!crb(c,0)) { goto L_8008607C; } // 80086074
  c->r[29]=0u+0x00000000u; // 80086078
L_8008607C:;
  c->r[3]=0u+0x00010000u; // 8008607C
  c->r[0]=c->r[3]+0xFFFFEA60u; // 80086080
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80086084
  if (!crb(c,1)) { goto L_80086090; } // 80086088
  c->r[30]=c->r[0]|c->r[0]; // 8008608C
L_80086090:;
  cmps(c,0,(int32_t)c->r[30],0); // 80086090
  if (!crb(c,0)) { goto L_8008609C; } // 80086094
  c->r[30]=0u+0x00000000u; // 80086098
L_8008609C:;
  c->lr=0x800860A0u; f_801251B0(c); // 8008609C
  c->r[0]=c->r[29]^0x80000000u; // 800860A0
  c->r[5]=0u+0x43300000u; // 800860A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800860A8
  c->r[4]=0u+0x80410000u; // 800860AC
  {uint32_t ea=c->r[2]+0xFFFF8CA8u; c->f[2]=RF64(ea);} // 800860B0
  cmps(c,0,(int32_t)c->r[30],0); // 800860B4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800860B8
  c->r[4]=c->r[4]+0x00007120u; // 800860BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800860C0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800860C4
  {uint32_t ea=c->r[4]+0x000000E0u; WF32(ea,c->f[1]);} // 800860C8
  if (crb(c,2)) { goto L_80086100; } // 800860CC
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[30]); // 800860D0
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800860D4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800860D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800860DC
  W32(c->r[4]+0x000000E8u,c->r[0]); // 800860E0
  c->r[0]=c->r[0]^0x80000000u; // 800860E4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800860E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800860EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800860F0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800860F4
  {uint32_t ea=c->r[4]+0x000000E4u; WF32(ea,c->f[0]);} // 800860F8
  goto L_8008610C; // 800860FC
L_80086100:;
  c->r[0]=0u+0x00000000u; // 80086100
  W32(c->r[4]+0x000000E8u,c->r[0]); // 80086104
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[1]);} // 80086108
L_8008610C:;
  c->lr=0x80086110u; f_801251F0(c); // 8008610C
  c->r[3]=0u+0x00000001u; // 80086110
  goto L_8008611C; // 80086114
L_80086118:;
  c->r[3]=0u+0x00000000u; // 80086118
L_8008611C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008611C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80086120
  c->r[30]=R32(c->r[1]+0x00000018u); // 80086124
  c->r[29]=R32(c->r[1]+0x00000014u); // 80086128
  c->lr=c->r[0]; // 8008612C
  c->r[1]=c->r[1]+0x00000020u; // 80086130
  return; // 80086134
}

// fn_80086140
void f_80086140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086140
  c->r[0]=c->lr; // 80086144
  cmps(c,0,(int32_t)c->r[4],0); // 80086148
  c->r[5]=c->r[4]|c->r[4]; // 8008614C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086150
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80086154
  c->r[31]=0u+0x80410000u; // 80086158
  c->r[31]=c->r[31]+0x000076C0u; // 8008615C
  if (crb(c,2)) { goto L_80086198; } // 80086160
  c->r[6]=c->r[31]+0x00000318u; // 80086164
  c->r[4]=0u+0x80080000u; // 80086168
  c->r[8]=c->r[3]|c->r[3]; // 8008616C
  c->r[3]=c->r[31]+0x00000000u; // 80086170
  c->r[4]=c->r[4]+0x00006350u; // 80086174
  c->r[6]=c->r[6]+0x00001000u; // 80086178
  c->r[7]=0u+0x00001000u; // 8008617C
  c->r[9]=0u+0x00000001u; // 80086180
  c->lr=0x80086188u; f_80129610(c); // 80086184
  cmps(c,0,(int32_t)c->r[3],0); // 80086188
  if (!crb(c,2)) { goto L_800861D0; } // 8008618C
  c->r[3]=0u+0x00000000u; // 80086190
  goto L_80086200; // 80086194
L_80086198:;
  c->r[5]=c->r[31]+0x00000318u; // 80086198
  c->r[4]=0u+0x80080000u; // 8008619C
  c->r[8]=c->r[3]|c->r[3]; // 800861A0
  c->r[3]=c->r[31]+0x00000000u; // 800861A4
  c->r[6]=c->r[5]+0x00001000u; // 800861A8
  c->r[4]=c->r[4]+0x00006280u; // 800861AC
  c->r[5]=0u+0x00000000u; // 800861B0
  c->r[7]=0u+0x00001000u; // 800861B4
  c->r[9]=0u+0x00000001u; // 800861B8
  c->lr=0x800861C0u; f_80129610(c); // 800861BC
  cmps(c,0,(int32_t)c->r[3],0); // 800861C0
  if (!crb(c,2)) { goto L_800861D0; } // 800861C4
  c->r[3]=0u+0x00000000u; // 800861C8
  goto L_80086200; // 800861CC
L_800861D0:;
  c->r[3]=c->r[31]+0x00001318u; // 800861D0
  c->r[4]=c->r[31]+0x00001338u; // 800861D4
  c->r[5]=0u+0x00000003u; // 800861D8
  c->lr=0x800861E0u; f_801263D0(c); // 800861DC
  c->r[3]=c->r[31]+0x00001348u; // 800861E0
  c->r[4]=c->r[31]+0x00001368u; // 800861E4
  c->r[5]=0u+0x00000003u; // 800861E8
  c->lr=0x800861F0u; f_801263D0(c); // 800861EC
  c->r[0]=0u+0x00000001u; // 800861F0
  W32(c->r[13]+0xFFFFB8D0u,c->r[0]); // 800861F4
  c->r[3]=0u+0x00000001u; // 800861F8
  W32(c->r[13]+0xFFFFB8D4u,c->r[0]); // 800861FC
L_80086200:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80086204
  c->lr=c->r[0]; // 80086208
  c->r[1]=c->r[1]+0x00000010u; // 8008620C
  return; // 80086210
}

// fn_80086220
void f_80086220(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFB8D0u); // 80086220
  cmps(c,0,(int32_t)c->r[0],0); // 80086224
  if (crb(c,2)) return; // 80086228
  c->r[3]=0u+0x80410000u; // 8008622C
  c->r[3]=c->r[3]+0x000076C0u; // 80086230
  f_80129CA0(c); return; // 80086234
  return; // 80086238
}

// fn_80086240
void f_80086240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086240
  c->r[0]=c->lr; // 80086244
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086248
  c->r[0]=R32(c->r[13]+0xFFFFB8D0u); // 8008624C
  cmps(c,0,(int32_t)c->r[0],0); // 80086250
  if (crb(c,2)) { goto L_8008626C; } // 80086254
  c->r[3]=0u+0x80410000u; // 80086258
  c->r[3]=c->r[3]+0x000076C0u; // 8008625C
  c->lr=0x80086264u; f_80129970(c); // 80086260
  c->r[0]=0u+0x00000000u; // 80086264
  W32(c->r[13]+0xFFFFB8D0u,c->r[0]); // 80086268
L_8008626C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008626C
  c->lr=c->r[0]; // 80086270
  c->r[1]=c->r[1]+0x00000010u; // 80086274
  return; // 80086278
}

// fn_80086280
void f_80086280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086280
  c->r[0]=c->lr; // 80086284
  c->r[3]=0u+0x80410000u; // 80086288
  W32(c->r[1]+0x00000024u,c->r[0]); // 8008628C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80086290
  W32(c->r[1]+0x00000018u,c->r[30]); // 80086294
  c->r[30]=c->r[3]+0x00007120u; // 80086298
  W32(c->r[1]+0x00000014u,c->r[29]); // 8008629C
  c->r[29]=0u+0x00000000u; // 800862A0
L_800862A4:;
  c->r[0]=R8(c->r[30]+0x000000A7u); // 800862A4
  cmps(c,0,(int32_t)c->r[0],0); // 800862A8
  if (crb(c,2)) { goto L_80086314; } // 800862AC
  goto L_8008630C; // 800862B0
L_800862B4:;
  c->lr=0x800862B8u; f_80086D00(c); // 800862B4
  c->r[0]=R32(c->r[30]+0x000000C0u); // 800862B8
  c->r[31]=c->r[3]|c->r[3]; // 800862BC
  c->r[4]=R32(c->r[3]+0x00000004u); // 800862C0
  c->r[5]=R32(c->r[30]+0x00000050u); // 800862C4
  c->r[6]=c->r[4]+c->r[0]; // 800862C8
  c->r[4]=divwu(c->r[6],c->r[5]); // 800862CC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800862D0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 800862D4
  c->r[4]=c->r[6]-c->r[4]; // 800862D8
  cmpu(c,0,c->r[4],c->r[0]); // 800862DC
  if (!crb(c,2)) { goto L_800862F4; } // 800862E0
  c->r[0]=R8(c->r[30]+0x000000A6u); // 800862E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800862E8
  if (!crb(c,2)) { goto L_800862F4; } // 800862EC
  c->lr=0x800862F4u; f_80086490(c); // 800862F0
L_800862F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800862F4
  c->lr=0x800862FCu; f_80086CE0(c); // 800862F8
  c->r[3]=R32(c->r[30]+0x000000D8u); // 800862FC
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 80086300
  c->r[0]=c->r[3]+0x00000001u; // 80086304
  W32(c->r[30]+0x000000D8u,c->r[0]); // 80086308
L_8008630C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8008630C
  if (!crb(c,2)) { IRQCHK(c); goto L_800862B4; } // 80086310
L_80086314:;
  c->r[0]=R8(c->r[30]+0x000000A7u); // 80086314
  cmps(c,0,(int32_t)c->r[0],0); // 80086318
  if (crb(c,2)) { goto L_8008632C; } // 8008631C
  c->lr=0x80086324u; f_80086D00(c); // 80086320
  c->r[31]=c->r[3]|c->r[3]; // 80086324
  goto L_80086334; // 80086328
L_8008632C:;
  c->lr=0x80086330u; f_80086C40(c); // 8008632C
  c->r[31]=c->r[3]|c->r[3]; // 80086330
L_80086334:;
  c->r[3]=c->r[31]|c->r[31]; // 80086334
  c->lr=0x8008633Cu; f_80086490(c); // 80086338
  c->r[29]=c->r[3]|c->r[3]; // 8008633C
  c->r[3]=c->r[31]|c->r[31]; // 80086340
  c->lr=0x80086348u; f_80086CE0(c); // 80086344
  IRQCHK(c); goto L_800862A4; // 80086348
}

// fn_80086350
void f_80086350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086350
  c->r[0]=c->lr; // 80086354
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086358
  c->r[11]=c->r[1]+0x00000030u; // 8008635C
  c->lr=0x80086364u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086360
  c->r[31]=0u+0x80410000u; // 80086364
  W32(c->r[1]+0x00000008u,c->r[3]); // 80086368
  c->r[31]=c->r[31]+0x00007120u; // 8008636C
  c->r[29]=0u+0x00000000u; // 80086370
  c->r[30]=R32(c->r[31]+0x000000BCu); // 80086374
  c->r[28]=0u+0x00000000u; // 80086378
  c->r[27]=0u+0x80410000u; // 8008637C
L_80086380:;
  c->r[0]=R8(c->r[31]+0x000000A7u); // 80086380
  cmps(c,0,(int32_t)c->r[0],0); // 80086384
  if (crb(c,2)) { goto L_80086408; } // 80086388
  c->ctr=c->r[28]; // 8008638C
  cmps(c,0,(int32_t)c->r[28],0); // 80086390
  if (crb(c,2)) { goto L_80086408; } // 80086394
L_80086398:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 80086398
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 8008639C
  c->r[5]=R32(c->r[31]+0x00000050u); // 800863A0
  c->r[6]=c->r[29]+c->r[0]; // 800863A4
  c->r[4]=R32(c->r[31]+0x000000D8u); // 800863A8
  c->r[3]=divwu(c->r[6],c->r[5]); // 800863AC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800863B0
  c->r[4]=c->r[4]+0x00000001u; // 800863B4
  W32(c->r[31]+0x000000D8u,c->r[4]); // 800863B8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[5]); // 800863BC
  c->r[3]=c->r[6]-c->r[3]; // 800863C0
  cmpu(c,0,c->r[3],c->r[0]); // 800863C4
  if (!crb(c,2)) { goto L_800863EC; } // 800863C8
  c->r[0]=R8(c->r[31]+0x000000A6u); // 800863CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800863D0
  if (crb(c,2)) { goto L_80086408; } // 800863D4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800863D8
  c->r[0]=R32(c->r[31]+0x000000B4u); // 800863DC
  c->r[30]=R32(c->r[3]+0x00000000u); // 800863E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800863E4
  goto L_80086400; // 800863E8
L_800863EC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800863EC
  c->r[4]=R32(c->r[3]+0x00000000u); // 800863F0
  c->r[0]=c->r[3]+c->r[30]; // 800863F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800863F8
  c->r[30]=c->r[4]|c->r[4]; // 800863FC
L_80086400:;
  c->r[29]=c->r[29]+0x00000001u; // 80086400
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80086398; } // 80086404
L_80086408:;
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80086408
  c->r[3]=c->r[1]+0x00000008u; // 8008640C
  c->lr=0x80086414u; f_80086490(c); // 80086410
  c->r[0]=R32(c->r[31]+0x000000C0u); // 80086414
  c->r[28]=c->r[3]|c->r[3]; // 80086418
  c->r[4]=R32(c->r[31]+0x00000050u); // 8008641C
  c->r[5]=c->r[29]+c->r[0]; // 80086420
  c->r[3]=divwu(c->r[5],c->r[4]); // 80086424
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80086428
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8008642C
  c->r[3]=c->r[5]-c->r[3]; // 80086430
  cmpu(c,0,c->r[3],c->r[0]); // 80086434
  if (!crb(c,2)) { goto L_80086468; } // 80086438
  c->r[0]=R8(c->r[31]+0x000000A6u); // 8008643C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80086440
  if (crb(c,2)) { goto L_8008645C; } // 80086444
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086448
  c->r[0]=R32(c->r[31]+0x000000B4u); // 8008644C
  c->r[30]=R32(c->r[3]+0x00000000u); // 80086450
  W32(c->r[1]+0x00000008u,c->r[0]); // 80086454
  goto L_8008647C; // 80086458
L_8008645C:;
  c->r[3]=c->r[27]+0x000076C0u; // 8008645C
  c->lr=0x80086464u; f_80129F40(c); // 80086460
  goto L_8008647C; // 80086464
L_80086468:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086468
  c->r[4]=R32(c->r[3]+0x00000000u); // 8008646C
  c->r[0]=c->r[3]+c->r[30]; // 80086470
  W32(c->r[1]+0x00000008u,c->r[0]); // 80086474
  c->r[30]=c->r[4]|c->r[4]; // 80086478
L_8008647C:;
  c->r[29]=c->r[29]+0x00000001u; // 8008647C
  IRQCHK(c); goto L_80086380; // 80086480
}

// fn_80086490
void f_80086490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086490
  c->r[0]=c->lr; // 80086494
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086498
  c->r[11]=c->r[1]+0x00000030u; // 8008649C
  c->lr=0x800864A4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800864A0
  c->r[4]=0u+0x80410000u; // 800864A4
  c->r[5]=R32(c->r[3]+0x00000000u); // 800864A8
  c->r[29]=c->r[4]+0x00007120u; // 800864AC
  c->r[22]=c->r[3]|c->r[3]; // 800864B0
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 800864B4
  c->r[24]=c->r[5]+0x00000008u; // 800864B8
  c->r[25]=0u+0x00000000u; // 800864BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800864C0
  c->r[23]=c->r[5]+c->r[0]; // 800864C4
  c->r[23]=c->r[23]+0x00000008u; // 800864C8
  c->lr=0x800864D0u; f_800865D0(c); // 800864CC
  c->r[27]=c->r[3]|c->r[3]; // 800864D0
  c->r[28]=c->r[29]|c->r[29]; // 800864D4
  c->r[26]=0u+0x00000000u; // 800864D8
  c->r[30]=0u+0x00000000u; // 800864DC
  c->r[31]=0u+0x80410000u; // 800864E0
  goto L_80086588; // 800864E4
L_800864E8:;
  c->r[0]=R8(c->r[28]+0x00000070u); // 800864E8
  cmps(c,0,(int32_t)c->r[0],0); // 800864EC
  if (!crb(c,2)) { goto L_80086574; } // 800864F0
  c->r[4]=R32(c->r[27]+0x00000000u); // 800864F4
  c->r[3]=c->r[23]|c->r[23]; // 800864F8
  c->r[5]=R32(c->r[27]+0x00000004u); // 800864FC
  c->r[6]=R32(c->r[27]+0x00000008u); // 80086500
  c->r[7]=R32(c->r[29]+0x0000009Cu); // 80086504
  c->lr=0x8008650Cu; f_8014B8C0(c); // 80086508
  cmps(c,0,(int32_t)c->r[3],0); // 8008650C
  W32(c->r[29]+0x000000ACu,c->r[3]); // 80086510
  if (crb(c,2)) { goto L_80086538; } // 80086514
  c->r[0]=R32(c->r[13]+0xFFFFB8D4u); // 80086518
  cmps(c,0,(int32_t)c->r[0],0); // 8008651C
  if (crb(c,2)) { goto L_80086530; } // 80086520
  c->r[3]=0u+0x00000000u; // 80086524
  c->lr=0x8008652Cu; f_80085010(c); // 80086528
  W32(c->r[13]+0xFFFFB8D4u,c->r[30]); // 8008652C
L_80086530:;
  c->r[3]=c->r[31]+0x000076C0u; // 80086530
  c->lr=0x80086538u; f_80129F40(c); // 80086534
L_80086538:;
  c->r[0]=R32(c->r[22]+0x00000004u); // 80086538
  c->r[3]=c->r[27]|c->r[27]; // 8008653C
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80086540
  c->lr=0x80086548u; f_80086680(c); // 80086544
  c->r[3]=R32(c->r[29]+0x000000F0u); // 80086548
  c->r[5]=R32(c->r[29]+0x000000D8u); // 8008654C
  c->r[6]=c->r[3]+0x00000001u; // 80086550
  c->r[0]=addc(c,~c->r[6],c->r[5],1); // 80086554
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 80086558
  c->r[4]=rotl(c->r[6],1)&0x00000001u; // 8008655C
  c->r[0]=c->r[5]+0x00000001u; // 80086560
  W32(c->r[29]+0x000000D8u,c->r[0]); // 80086564
  c->r[3]=addc(c,~c->r[3],c->r[4],c->xer_ca); // 80086568
  c->r[0]=c->r[6]-c->r[5]; // 8008656C
  c->r[25]=c->r[0]&c->r[3]; // 80086570
L_80086574:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80086574
  c->r[24]=c->r[24]+0x00000004u; // 80086578
  c->r[28]=c->r[28]+0x00000001u; // 8008657C
  c->r[26]=c->r[26]+0x00000001u; // 80086580
  c->r[23]=c->r[23]+c->r[0]; // 80086584
L_80086588:;
  c->r[0]=R32(c->r[29]+0x0000006Cu); // 80086588
  cmpu(c,0,c->r[26],c->r[0]); // 8008658C
  if (crb(c,0)) { IRQCHK(c); goto L_800864E8; } // 80086590
  c->r[0]=R32(c->r[13]+0xFFFFB8D4u); // 80086594
  cmps(c,0,(int32_t)c->r[0],0); // 80086598
  if (crb(c,2)) { goto L_800865B0; } // 8008659C
  c->r[3]=0u+0x00000001u; // 800865A0
  c->lr=0x800865A8u; f_80085010(c); // 800865A4
  c->r[0]=0u+0x00000000u; // 800865A8
  W32(c->r[13]+0xFFFFB8D4u,c->r[0]); // 800865AC
L_800865B0:;
  c->r[11]=c->r[1]+0x00000030u; // 800865B0
  c->r[3]=c->r[25]|c->r[25]; // 800865B4
  c->lr=0x800865BCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800865B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800865BC
  c->lr=c->r[0]; // 800865C0
  c->r[1]=c->r[1]+0x00000030u; // 800865C4
  return; // 800865C8
}

// fn_800865D0
void f_800865D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800865D0
  c->r[0]=c->lr; // 800865D4
  c->r[3]=0u+0x80420000u; // 800865D8
  c->r[5]=0u+0x00000001u; // 800865DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800865E0
  c->r[4]=c->r[1]+0x00000008u; // 800865E4
  c->r[3]=c->r[3]+0xFFFF89D8u; // 800865E8
  c->lr=0x800865F0u; f_80126500(c); // 800865EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800865F0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800865F4
  c->lr=c->r[0]; // 800865F8
  c->r[1]=c->r[1]+0x00000010u; // 800865FC
  return; // 80086600
}

// fn_80086610
void f_80086610(Ctx* __restrict c) {
  c->r[5]=0u+0x80420000u; // 80086610
  c->r[4]=c->r[3]|c->r[3]; // 80086614
  c->r[3]=c->r[5]+0xFFFF89D8u; // 80086618
  c->r[5]=0u+0x00000000u; // 8008661C
  f_80126430(c); return; // 80086620
}

// fn_80086630
void f_80086630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086630
  c->r[0]=c->lr; // 80086634
  c->r[4]=0u+0x80420000u; // 80086638
  c->r[5]=c->r[3]|c->r[3]; // 8008663C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086640
  c->r[3]=c->r[4]+0xFFFF8A08u; // 80086644
  c->r[4]=c->r[1]+0x00000008u; // 80086648
  c->lr=0x80086650u; f_80126500(c); // 8008664C
  cmps(c,0,(int32_t)c->r[3],1); // 80086650
  if (!crb(c,2)) { goto L_80086660; } // 80086654
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086658
  goto L_80086664; // 8008665C
L_80086660:;
  c->r[3]=0u+0x00000000u; // 80086660
L_80086664:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086664
  c->lr=c->r[0]; // 80086668
  c->r[1]=c->r[1]+0x00000010u; // 8008666C
  return; // 80086670
}

// fn_80086680
void f_80086680(Ctx* __restrict c) {
  c->r[5]=0u+0x80420000u; // 80086680
  c->r[4]=c->r[3]|c->r[3]; // 80086684
  c->r[3]=c->r[5]+0xFFFF8A08u; // 80086688
  c->r[5]=0u+0x00000001u; // 8008668C
  f_80126430(c); return; // 80086690
}

// fn_800866A0
void f_800866A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800866A0
  c->r[0]=c->lr; // 800866A4
  cmps(c,0,(int32_t)c->r[4],0); // 800866A8
  c->r[5]=c->r[4]|c->r[4]; // 800866AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800866B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800866B4
  c->r[31]=0u+0x80420000u; // 800866B8
  c->r[31]=c->r[31]+0xFFFF8A38u; // 800866BC
  if (crb(c,2)) { goto L_800866F8; } // 800866C0
  c->r[6]=c->r[31]+0x00000318u; // 800866C4
  c->r[4]=0u+0x80080000u; // 800866C8
  c->r[8]=c->r[3]|c->r[3]; // 800866CC
  c->r[3]=c->r[31]+0x00000000u; // 800866D0
  c->r[4]=c->r[4]+0x00006800u; // 800866D4
  c->r[6]=c->r[6]+0x00001000u; // 800866D8
  c->r[7]=0u+0x00001000u; // 800866DC
  c->r[9]=0u+0x00000001u; // 800866E0
  c->lr=0x800866E8u; f_80129610(c); // 800866E4
  cmps(c,0,(int32_t)c->r[3],0); // 800866E8
  if (!crb(c,2)) { goto L_80086730; } // 800866EC
  c->r[3]=0u+0x00000000u; // 800866F0
  goto L_8008675C; // 800866F4
L_800866F8:;
  c->r[5]=c->r[31]+0x00000318u; // 800866F8
  c->r[4]=0u+0x80080000u; // 800866FC
  c->r[8]=c->r[3]|c->r[3]; // 80086700
  c->r[3]=c->r[31]+0x00000000u; // 80086704
  c->r[6]=c->r[5]+0x00001000u; // 80086708
  c->r[4]=c->r[4]+0x000067D0u; // 8008670C
  c->r[5]=0u+0x00000000u; // 80086710
  c->r[7]=0u+0x00001000u; // 80086714
  c->r[9]=0u+0x00000001u; // 80086718
  c->lr=0x80086720u; f_80129610(c); // 8008671C
  cmps(c,0,(int32_t)c->r[3],0); // 80086720
  if (!crb(c,2)) { goto L_80086730; } // 80086724
  c->r[3]=0u+0x00000000u; // 80086728
  goto L_8008675C; // 8008672C
L_80086730:;
  c->r[3]=c->r[31]+0x00001318u; // 80086730
  c->r[4]=c->r[31]+0x00001338u; // 80086734
  c->r[5]=0u+0x00000006u; // 80086738
  c->lr=0x80086740u; f_801263D0(c); // 8008673C
  c->r[3]=c->r[31]+0x00001350u; // 80086740
  c->r[4]=c->r[31]+0x00001370u; // 80086744
  c->r[5]=0u+0x00000006u; // 80086748
  c->lr=0x80086750u; f_801263D0(c); // 8008674C
  c->r[0]=0u+0x00000001u; // 80086750
  W32(c->r[13]+0xFFFFB8D8u,c->r[0]); // 80086754
  c->r[3]=0u+0x00000001u; // 80086758
L_8008675C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008675C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80086760
  c->lr=c->r[0]; // 80086764
  c->r[1]=c->r[1]+0x00000010u; // 80086768
  return; // 8008676C
}

// fn_80086770
void f_80086770(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFB8D8u); // 80086770
  cmps(c,0,(int32_t)c->r[0],0); // 80086774
  if (crb(c,2)) return; // 80086778
  c->r[3]=0u+0x80420000u; // 8008677C
  c->r[3]=c->r[3]+0xFFFF8A38u; // 80086780
  f_80129CA0(c); return; // 80086784
  return; // 80086788
}

// fn_80086790
void f_80086790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086790
  c->r[0]=c->lr; // 80086794
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086798
  c->r[0]=R32(c->r[13]+0xFFFFB8D8u); // 8008679C
  cmps(c,0,(int32_t)c->r[0],0); // 800867A0
  if (crb(c,2)) { goto L_800867BC; } // 800867A4
  c->r[3]=0u+0x80420000u; // 800867A8
  c->r[3]=c->r[3]+0xFFFF8A38u; // 800867AC
  c->lr=0x800867B4u; f_80129970(c); // 800867B0
  c->r[0]=0u+0x00000000u; // 800867B4
  W32(c->r[13]+0xFFFFB8D8u,c->r[0]); // 800867B8
L_800867BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800867BC
  c->lr=c->r[0]; // 800867C0
  c->r[1]=c->r[1]+0x00000010u; // 800867C4
  return; // 800867C8
}

// fn_800867D0
void f_800867D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800867D0
  c->r[0]=c->lr; // 800867D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800867D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800867DC
L_800867E0:;
  c->lr=0x800867E4u; f_80086C40(c); // 800867E0
  c->r[31]=c->r[3]|c->r[3]; // 800867E4
  c->lr=0x800867ECu; f_800868B0(c); // 800867E8
  c->r[3]=c->r[31]|c->r[31]; // 800867EC
  c->lr=0x800867F4u; f_80086D40(c); // 800867F0
  IRQCHK(c); goto L_800867E0; // 800867F4
}

// fn_80086800
void f_80086800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086800
  c->r[0]=c->lr; // 80086804
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086808
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8008680C
  c->r[31]=0u+0x00000000u; // 80086810
  W32(c->r[1]+0x00000028u,c->r[30]); // 80086814
  c->r[30]=0u+0x80420000u; // 80086818
  W32(c->r[1]+0x00000024u,c->r[29]); // 8008681C
  c->r[29]=0u+0x80410000u; // 80086820
  c->r[29]=c->r[29]+0x00007120u; // 80086824
  W32(c->r[1]+0x00000020u,c->r[28]); // 80086828
  W32(c->r[1]+0x00000008u,c->r[3]); // 8008682C
  c->r[28]=R32(c->r[29]+0x000000BCu); // 80086830
L_80086834:;
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80086834
  c->r[3]=c->r[1]+0x00000008u; // 80086838
  c->lr=0x80086840u; f_800868B0(c); // 8008683C
  c->r[0]=R32(c->r[29]+0x000000C0u); // 80086840
  c->r[4]=R32(c->r[29]+0x00000050u); // 80086844
  c->r[5]=c->r[31]+c->r[0]; // 80086848
  c->r[3]=divwu(c->r[5],c->r[4]); // 8008684C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80086850
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 80086854
  c->r[3]=c->r[5]-c->r[3]; // 80086858
  cmpu(c,0,c->r[3],c->r[0]); // 8008685C
  if (!crb(c,2)) { goto L_80086890; } // 80086860
  c->r[0]=R8(c->r[29]+0x000000A6u); // 80086864
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80086868
  if (crb(c,2)) { goto L_80086884; } // 8008686C
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086870
  c->r[0]=R32(c->r[29]+0x000000B4u); // 80086874
  c->r[28]=R32(c->r[3]+0x00000000u); // 80086878
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008687C
  goto L_800868A4; // 80086880
L_80086884:;
  c->r[3]=c->r[30]+0xFFFF8A38u; // 80086884
  c->lr=0x8008688Cu; f_80129F40(c); // 80086888
  goto L_800868A4; // 8008688C
L_80086890:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086890
  c->r[4]=R32(c->r[3]+0x00000000u); // 80086894
  c->r[0]=c->r[3]+c->r[28]; // 80086898
  W32(c->r[1]+0x00000008u,c->r[0]); // 8008689C
  c->r[28]=c->r[4]|c->r[4]; // 800868A0
L_800868A4:;
  c->r[31]=c->r[31]+0x00000001u; // 800868A4
  IRQCHK(c); goto L_80086834; // 800868A8
}

// fn_800868B0
void f_800868B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800868B0
  c->r[0]=c->lr; // 800868B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800868B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800868BC
  c->r[31]=0u+0x80410000u; // 800868C0
  c->r[31]=c->r[31]+0x00007120u; // 800868C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800868C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800868CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800868D0
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 800868D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800868D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800868DC
  c->r[28]=c->r[3]+c->r[0]; // 800868E0
  c->r[29]=c->r[3]+0x00000008u; // 800868E4
  c->r[28]=c->r[28]+0x00000008u; // 800868E8
  c->lr=0x800868F0u; f_80086990(c); // 800868EC
  c->r[0]=R32(c->r[31]+0x0000006Cu); // 800868F0
  c->r[30]=c->r[3]|c->r[3]; // 800868F4
  c->ctr=c->r[0]; // 800868F8
  cmpu(c,0,c->r[0],0x00000000u); // 800868FC
  if (!crb(c,1)) { goto L_80086964; } // 80086900
  c->r[0]=c->r[0]|0x00000000u; // 80086904
L_80086908:;
  c->r[0]=R8(c->r[31]+0x00000070u); // 80086908
  cmps(c,0,(int32_t)c->r[0],1); // 8008690C
  if (!crb(c,2)) { goto L_80086950; } // 80086910
  c->r[4]=0u+0x80410000u; // 80086914
  c->r[6]=R32(c->r[29]+0x00000000u); // 80086918
  c->r[4]=c->r[4]+0x00007120u; // 8008691C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80086920
  c->r[0]=R32(c->r[4]+0x000000ECu); // 80086924
  c->r[5]=0u+0x00000000u; // 80086928
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 8008692C
  c->r[4]=c->r[28]+c->r[0]; // 80086930
  c->lr=0x80086938u; f_8014ED50(c); // 80086934
  W32(c->r[30]+0x00000008u,c->r[3]); // 80086938
  c->r[3]=c->r[30]|c->r[30]; // 8008693C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80086940
  W32(c->r[30]+0x00000004u,c->r[0]); // 80086944
  c->lr=0x8008694Cu; f_80086A40(c); // 80086948
  goto L_80086964; // 8008694C
L_80086950:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80086950
  c->r[29]=c->r[29]+0x00000004u; // 80086954
  c->r[31]=c->r[31]+0x00000001u; // 80086958
  c->r[28]=c->r[28]+c->r[0]; // 8008695C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80086908; } // 80086960
L_80086964:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80086964
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80086968
  c->r[30]=R32(c->r[1]+0x00000018u); // 8008696C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80086970
  c->r[28]=R32(c->r[1]+0x00000010u); // 80086974
  c->lr=c->r[0]; // 80086978
  c->r[1]=c->r[1]+0x00000020u; // 8008697C
  return; // 80086980
}

// fn_80086990
void f_80086990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086990
  c->r[0]=c->lr; // 80086994
  c->r[3]=0u+0x80420000u; // 80086998
  c->r[5]=0u+0x00000001u; // 8008699C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800869A0
  c->r[4]=c->r[1]+0x00000008u; // 800869A4
  c->r[3]=c->r[3]+0xFFFF9D50u; // 800869A8
  c->lr=0x800869B0u; f_80126500(c); // 800869AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800869B0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800869B4
  c->lr=c->r[0]; // 800869B8
  c->r[1]=c->r[1]+0x00000010u; // 800869BC
  return; // 800869C0
}

// fn_800869D0
void f_800869D0(Ctx* __restrict c) {
  c->r[5]=0u+0x80420000u; // 800869D0
  c->r[4]=c->r[3]|c->r[3]; // 800869D4
  c->r[3]=c->r[5]+0xFFFF9D50u; // 800869D8
  c->r[5]=0u+0x00000000u; // 800869DC
  f_80126430(c); return; // 800869E0
}

// fn_800869F0
void f_800869F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800869F0
  c->r[0]=c->lr; // 800869F4
  c->r[4]=0u+0x80420000u; // 800869F8
  c->r[5]=c->r[3]|c->r[3]; // 800869FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086A00
  c->r[3]=c->r[4]+0xFFFF9D88u; // 80086A04
  c->r[4]=c->r[1]+0x00000008u; // 80086A08
  c->lr=0x80086A10u; f_80126500(c); // 80086A0C
  cmps(c,0,(int32_t)c->r[3],1); // 80086A10
  if (!crb(c,2)) { goto L_80086A20; } // 80086A14
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086A18
  goto L_80086A24; // 80086A1C
L_80086A20:;
  c->r[3]=0u+0x00000000u; // 80086A20
L_80086A24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086A24
  c->lr=c->r[0]; // 80086A28
  c->r[1]=c->r[1]+0x00000010u; // 80086A2C
  return; // 80086A30
}

// fn_80086A40
void f_80086A40(Ctx* __restrict c) {
  c->r[5]=0u+0x80420000u; // 80086A40
  c->r[4]=c->r[3]|c->r[3]; // 80086A44
  c->r[3]=c->r[5]+0xFFFF9D88u; // 80086A48
  c->r[5]=0u+0x00000001u; // 80086A4C
  f_80126430(c); return; // 80086A50
}

// fn_80086A60
void f_80086A60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086A60
  c->r[0]=c->lr; // 80086A64
  c->r[4]=0u+0x80080000u; // 80086A68
  c->r[8]=c->r[3]|c->r[3]; // 80086A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086A70
  c->r[4]=c->r[4]+0x00006B60u; // 80086A74
  c->r[5]=0u+0x00000000u; // 80086A78
  c->r[7]=0u+0x00001000u; // 80086A7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80086A80
  c->r[31]=0u+0x80420000u; // 80086A84
  c->r[31]=c->r[31]+0xFFFF9DC0u; // 80086A88
  c->r[9]=0u+0x00000001u; // 80086A8C
  c->r[6]=c->r[31]+0x00000318u; // 80086A90
  c->r[3]=c->r[31]+0x00000000u; // 80086A94
  c->r[6]=c->r[6]+0x00001000u; // 80086A98
  c->lr=0x80086AA0u; f_80129610(c); // 80086A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80086AA0
  if (!crb(c,2)) { goto L_80086AB0; } // 80086AA4
  c->r[3]=0u+0x00000000u; // 80086AA8
  goto L_80086AEC; // 80086AAC
L_80086AB0:;
  c->r[3]=c->r[31]+0x00001318u; // 80086AB0
  c->r[4]=c->r[31]+0x00001338u; // 80086AB4
  c->r[5]=0u+0x0000000Au; // 80086AB8
  c->lr=0x80086AC0u; f_801263D0(c); // 80086ABC
  c->r[3]=c->r[31]+0x00001360u; // 80086AC0
  c->r[4]=c->r[31]+0x00001380u; // 80086AC4
  c->r[5]=0u+0x0000000Au; // 80086AC8
  c->lr=0x80086AD0u; f_801263D0(c); // 80086ACC
  c->r[3]=c->r[31]+0x000013A8u; // 80086AD0
  c->r[4]=c->r[31]+0x000013C8u; // 80086AD4
  c->r[5]=0u+0x0000000Au; // 80086AD8
  c->lr=0x80086AE0u; f_801263D0(c); // 80086ADC
  c->r[0]=0u+0x00000001u; // 80086AE0
  W32(c->r[13]+0xFFFFB8E0u,c->r[0]); // 80086AE4
  c->r[3]=0u+0x00000001u; // 80086AE8
L_80086AEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086AEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80086AF0
  c->lr=c->r[0]; // 80086AF4
  c->r[1]=c->r[1]+0x00000010u; // 80086AF8
  return; // 80086AFC
}

// fn_80086B00
void f_80086B00(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFB8E0u); // 80086B00
  cmps(c,0,(int32_t)c->r[0],0); // 80086B04
  if (crb(c,2)) return; // 80086B08
  c->r[3]=0u+0x80420000u; // 80086B0C
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 80086B10
  f_80129CA0(c); return; // 80086B14
  return; // 80086B18
}

// fn_80086B20
void f_80086B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086B20
  c->r[0]=c->lr; // 80086B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086B28
  c->r[0]=R32(c->r[13]+0xFFFFB8E0u); // 80086B2C
  cmps(c,0,(int32_t)c->r[0],0); // 80086B30
  if (crb(c,2)) { goto L_80086B4C; } // 80086B34
  c->r[3]=0u+0x80420000u; // 80086B38
  c->r[3]=c->r[3]+0xFFFF9DC0u; // 80086B3C
  c->lr=0x80086B44u; f_80129970(c); // 80086B40
  c->r[0]=0u+0x00000000u; // 80086B44
  W32(c->r[13]+0xFFFFB8E0u,c->r[0]); // 80086B48
L_80086B4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086B4C
  c->lr=c->r[0]; // 80086B50
  c->r[1]=c->r[1]+0x00000010u; // 80086B54
  return; // 80086B58
}

// fn_80086B60
void f_80086B60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086B60
  c->r[0]=c->lr; // 80086B64
  W32(c->r[1]+0x00000034u,c->r[0]); // 80086B68
  c->r[11]=c->r[1]+0x00000030u; // 80086B6C
  c->lr=0x80086B74u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80086B70
  c->r[28]=0u+0x80410000u; // 80086B74
  c->r[24]=0u+0x00000000u; // 80086B78
  c->r[29]=c->r[28]+0x00007120u; // 80086B7C
  c->r[30]=0u+0xFFFFFFFFu; // 80086B80
  c->r[26]=R32(c->r[29]+0x000000B8u); // 80086B84
  c->r[31]=0u+0x80420000u; // 80086B88
  c->r[25]=R32(c->r[29]+0x000000BCu); // 80086B8C
L_80086B90:;
  c->lr=0x80086B94u; f_80086CA0(c); // 80086B90
  c->r[4]=R32(c->r[3]+0x00000000u); // 80086B94
  c->r[27]=c->r[3]|c->r[3]; // 80086B98
  c->r[5]=c->r[25]|c->r[25]; // 80086B9C
  c->r[6]=c->r[26]|c->r[26]; // 80086BA0
  c->r[3]=c->r[28]+0x00007120u; // 80086BA4
  c->r[7]=0u+0x00000002u; // 80086BA8
  c->lr=0x80086BB0u; f_8012FDD0(c); // 80086BAC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[25]); // 80086BB0
  if (crb(c,2)) { goto L_80086BDC; } // 80086BB4
  cmps(c,0,(int32_t)c->r[3],-1); // 80086BB8
  if (!crb(c,2)) { goto L_80086BC4; } // 80086BBC
  W32(c->r[29]+0x000000A8u,c->r[30]); // 80086BC0
L_80086BC4:;
  cmps(c,0,(int32_t)c->r[24],0); // 80086BC4
  if (!crb(c,2)) { goto L_80086BD4; } // 80086BC8
  c->r[3]=0u+0x00000000u; // 80086BCC
  c->lr=0x80086BD4u; f_80085010(c); // 80086BD0
L_80086BD4:;
  c->r[3]=c->r[31]+0xFFFF9DC0u; // 80086BD4
  c->lr=0x80086BDCu; f_80129F40(c); // 80086BD8
L_80086BDC:;
  W32(c->r[27]+0x00000004u,c->r[24]); // 80086BDC
  c->r[3]=c->r[27]|c->r[27]; // 80086BE0
  c->lr=0x80086BE8u; f_80086C80(c); // 80086BE4
  c->r[0]=R32(c->r[29]+0x000000C0u); // 80086BE8
  c->r[26]=c->r[26]+c->r[25]; // 80086BEC
  c->r[5]=R32(c->r[29]+0x00000050u); // 80086BF0
  c->r[6]=c->r[24]+c->r[0]; // 80086BF4
  c->r[4]=R32(c->r[27]+0x00000000u); // 80086BF8
  c->r[3]=divwu(c->r[6],c->r[5]); // 80086BFC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80086C00
  c->r[25]=R32(c->r[4]+0x00000000u); // 80086C04
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[5]); // 80086C08
  c->r[3]=c->r[6]-c->r[3]; // 80086C0C
  cmpu(c,0,c->r[3],c->r[0]); // 80086C10
  if (!crb(c,2)) { goto L_80086C34; } // 80086C14
  c->r[0]=R8(c->r[29]+0x000000A6u); // 80086C18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80086C1C
  if (crb(c,2)) { goto L_80086C2C; } // 80086C20
  c->r[26]=R32(c->r[29]+0x00000064u); // 80086C24
  goto L_80086C34; // 80086C28
L_80086C2C:;
  c->r[3]=c->r[31]+0xFFFF9DC0u; // 80086C2C
  c->lr=0x80086C34u; f_80129F40(c); // 80086C30
L_80086C34:;
  c->r[24]=c->r[24]+0x00000001u; // 80086C34
  IRQCHK(c); goto L_80086B90; // 80086C38
}

// fn_80086C40
void f_80086C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086C40
  c->r[0]=c->lr; // 80086C44
  c->r[3]=0u+0x80420000u; // 80086C48
  c->r[5]=0u+0x00000001u; // 80086C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086C50
  c->r[4]=c->r[1]+0x00000008u; // 80086C54
  c->r[3]=c->r[3]+0xFFFFB120u; // 80086C58
  c->lr=0x80086C60u; f_80126500(c); // 80086C5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086C60
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086C64
  c->lr=c->r[0]; // 80086C68
  c->r[1]=c->r[1]+0x00000010u; // 80086C6C
  return; // 80086C70
}

// fn_80086C80
void f_80086C80(Ctx* __restrict c) {
  c->r[5]=0u+0x80420000u; // 80086C80
  c->r[4]=c->r[3]|c->r[3]; // 80086C84
  c->r[3]=c->r[5]+0xFFFFB120u; // 80086C88
  c->r[5]=0u+0x00000001u; // 80086C8C
  f_80126430(c); return; // 80086C90
}

// fn_80086CA0
void f_80086CA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086CA0
  c->r[0]=c->lr; // 80086CA4
  c->r[3]=0u+0x80420000u; // 80086CA8
  c->r[5]=0u+0x00000001u; // 80086CAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086CB0
  c->r[4]=c->r[1]+0x00000008u; // 80086CB4
  c->r[3]=c->r[3]+0xFFFFB0D8u; // 80086CB8
  c->lr=0x80086CC0u; f_80126500(c); // 80086CBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086CC0
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086CC4
  c->lr=c->r[0]; // 80086CC8
  c->r[1]=c->r[1]+0x00000010u; // 80086CCC
  return; // 80086CD0
}

// fn_80086CE0
void f_80086CE0(Ctx* __restrict c) {
  c->r[5]=0u+0x80420000u; // 80086CE0
  c->r[4]=c->r[3]|c->r[3]; // 80086CE4
  c->r[3]=c->r[5]+0xFFFFB0D8u; // 80086CE8
  c->r[5]=0u+0x00000001u; // 80086CEC
  f_80126430(c); return; // 80086CF0
}

// fn_80086D00
void f_80086D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086D00
  c->r[0]=c->lr; // 80086D04
  c->r[3]=0u+0x80420000u; // 80086D08
  c->r[5]=0u+0x00000001u; // 80086D0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086D10
  c->r[4]=c->r[1]+0x00000008u; // 80086D14
  c->r[3]=c->r[3]+0xFFFFB168u; // 80086D18
  c->lr=0x80086D20u; f_80126500(c); // 80086D1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80086D20
  c->r[3]=R32(c->r[1]+0x00000008u); // 80086D24
  c->lr=c->r[0]; // 80086D28
  c->r[1]=c->r[1]+0x00000010u; // 80086D2C
  return; // 80086D30
}

// fn_80086D40
void f_80086D40(Ctx* __restrict c) {
  c->r[5]=0u+0x80420000u; // 80086D40
  c->r[4]=c->r[3]|c->r[3]; // 80086D44
  c->r[3]=c->r[5]+0xFFFFB168u; // 80086D48
  c->r[5]=0u+0x00000001u; // 80086D4C
  f_80126430(c); return; // 80086D50
}

// fn_80086D60
void f_80086D60(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000000u); // 80086D60
  return; // 80086D64
}

// fn_80086D70
void f_80086D70(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000001u); // 80086D70
  c->r[3]=R8(c->r[3]+0x00000000u); // 80086D74
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80086D78
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80086D7C
  c->r[3]=c->r[3]|c->r[0]; // 80086D80
  return; // 80086D84
}

// fn_80086D90
void f_80086D90(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000001u); // 80086D90
  c->r[6]=R8(c->r[3]+0x00000000u); // 80086D94
  c->r[4]=R8(c->r[3]+0x00000002u); // 80086D98
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 80086D9C
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086DA0
  c->r[3]=rotl(c->r[4],16)&0xFFFF0000u; // 80086DA4
  c->r[6]=c->r[6]|c->r[3]; // 80086DA8
  c->r[3]=c->r[6]|c->r[3]; // 80086DAC
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 80086DB0
  return; // 80086DB4
}

// fn_80086DC0
void f_80086DC0(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000001u); // 80086DC0
  c->r[6]=R8(c->r[3]+0x00000000u); // 80086DC4
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086DC8
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 80086DCC
  c->r[4]=R8(c->r[3]+0x00000002u); // 80086DD0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086DD4
  c->r[3]=rotl(c->r[4],16)&0xFFFF0000u; // 80086DD8
  c->r[4]=R32(c->r[13]+0xFFFFB8E8u); // 80086DDC
  c->r[6]=c->r[6]|c->r[3]; // 80086DE0
  c->r[6]=c->r[6]|c->r[0]; // 80086DE4
  c->r[3]=R8(c->r[4]+c->r[6]); // 80086DE8
  return; // 80086DEC
}

// fn_80086DF0
void f_80086DF0(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000001u); // 80086DF0
  c->r[6]=R8(c->r[3]+0x00000000u); // 80086DF4
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086DF8
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 80086DFC
  c->r[4]=R8(c->r[3]+0x00000002u); // 80086E00
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086E04
  c->r[3]=rotl(c->r[4],16)&0xFFFF0000u; // 80086E08
  c->r[4]=R32(c->r[13]+0xFFFFB8E8u); // 80086E0C
  c->r[6]=c->r[6]|c->r[3]; // 80086E10
  c->r[6]=c->r[6]|c->r[0]; // 80086E14
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[6]); // 80086E18
  return; // 80086E1C
}

// fn_80086E20
void f_80086E20(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000001u); // 80086E20
  c->r[6]=R8(c->r[3]+0x00000000u); // 80086E24
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086E28
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 80086E2C
  c->r[4]=R8(c->r[3]+0x00000002u); // 80086E30
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086E34
  c->r[3]=rotl(c->r[4],16)&0xFFFF0000u; // 80086E38
  c->r[4]=R32(c->r[13]+0xFFFFB8E8u); // 80086E3C
  c->r[6]=c->r[6]|c->r[3]; // 80086E40
  c->r[6]=c->r[6]|c->r[0]; // 80086E44
  c->r[3]=R32(c->r[4]+c->r[6]); // 80086E48
  return; // 80086E4C
}

// fn_80086E50
void f_80086E50(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000002u); // 80086E50
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086E54
  c->r[6]=R8(c->r[3]+0x00000001u); // 80086E58
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 80086E5C
  c->r[7]=R8(c->r[3]+0x00000000u); // 80086E60
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086E64
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80086E68
  c->r[3]=R32(c->r[13]+0xFFFFB8E8u); // 80086E6C
  c->r[7]=c->r[7]|c->r[5]; // 80086E70
  c->r[7]=c->r[7]|c->r[0]; // 80086E74
  W8(c->r[3]+c->r[7],c->r[4]); // 80086E78
  return; // 80086E7C
}

// fn_80086E80
void f_80086E80(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000002u); // 80086E80
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086E84
  c->r[6]=R8(c->r[3]+0x00000001u); // 80086E88
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 80086E8C
  c->r[7]=R8(c->r[3]+0x00000000u); // 80086E90
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086E94
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80086E98
  c->r[3]=R32(c->r[13]+0xFFFFB8E8u); // 80086E9C
  c->r[7]=c->r[7]|c->r[5]; // 80086EA0
  c->r[7]=c->r[7]|c->r[0]; // 80086EA4
  W16(c->r[3]+c->r[7],c->r[4]); // 80086EA8
  return; // 80086EAC
}

// fn_80086EB0
void f_80086EB0(Ctx* __restrict c) {
  c->r[5]=R8(c->r[3]+0x00000002u); // 80086EB0
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086EB4
  c->r[6]=R8(c->r[3]+0x00000001u); // 80086EB8
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 80086EBC
  c->r[7]=R8(c->r[3]+0x00000000u); // 80086EC0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086EC4
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80086EC8
  c->r[3]=R32(c->r[13]+0xFFFFB8E8u); // 80086ECC
  c->r[7]=c->r[7]|c->r[5]; // 80086ED0
  c->r[7]=c->r[7]|c->r[0]; // 80086ED4
  W32(c->r[3]+c->r[7],c->r[4]); // 80086ED8
  return; // 80086EDC
}

// fn_80086EE0
void f_80086EE0(Ctx* __restrict c) {
  c->r[6]=R8(c->r[4]+0x00000001u); // 80086EE0
  c->r[7]=R8(c->r[4]+0x00000000u); // 80086EE4
  c->r[0]=R8(c->r[4]+0x00000003u); // 80086EE8
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 80086EEC
  c->r[5]=R8(c->r[4]+0x00000002u); // 80086EF0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086EF4
  c->r[4]=rotl(c->r[5],16)&0xFFFF0000u; // 80086EF8
  c->r[7]=c->r[7]|c->r[4]; // 80086EFC
  c->r[7]=c->r[7]|c->r[0]; cr0(c,c->r[7]); // 80086F00
  if (crb(c,2)) { goto L_80086F14; } // 80086F04
  c->r[0]=R32(c->r[3]+0x00000424u); // 80086F08
  c->r[3]=c->r[0]+c->r[7]; // 80086F0C
  return; // 80086F10
L_80086F14:;
  c->r[3]=0u+0x00000000u; // 80086F14
  return; // 80086F18
}

// fn_80086F20
void f_80086F20(Ctx* __restrict c) {
  c->r[0]=R8(c->r[4]+0x00000001u); // 80086F20
  c->r[4]=R8(c->r[4]+0x00000000u); // 80086F24
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); cr0(c,c->r[4]); // 80086F28
  if (crb(c,2)) { goto L_80086F3C; } // 80086F2C
  c->r[0]=R32(c->r[3]+0x00000424u); // 80086F30
  c->r[3]=c->r[0]+c->r[4]; // 80086F34
  return; // 80086F38
L_80086F3C:;
  c->r[3]=0u+0x00000000u; // 80086F3C
  return; // 80086F40
}

// fn_80086F50
void f_80086F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086F50
  c->r[5]=R8(c->r[3]+0x00000001u); // 80086F54
  c->r[6]=R8(c->r[3]+0x00000000u); // 80086F58
  c->r[0]=R8(c->r[3]+0x00000003u); // 80086F5C
  c->r[6]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 80086F60
  c->r[4]=R8(c->r[3]+0x00000002u); // 80086F64
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 80086F68
  c->r[3]=rotl(c->r[4],16)&0xFFFF0000u; // 80086F6C
  c->r[6]=c->r[6]|c->r[3]; // 80086F70
  c->r[6]=c->r[6]|c->r[0]; // 80086F74
  W32(c->r[1]+0x00000008u,c->r[6]); // 80086F78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80086F7C
  c->r[1]=c->r[1]+0x00000010u; // 80086F80
  return; // 80086F84
}

// fn_80086F90
void f_80086F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80086F90
  c->r[0]=c->lr; // 80086F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80086F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80086F9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80086FA0
  c->r[0]=R16(c->r[13]+0xFFFFB8F0u); // 80086FA4
  cmps(c,0,(int32_t)c->r[0],0); // 80086FA8
  if (crb(c,2)) { goto L_80087028; } // 80086FAC
  c->r[5]=R32(c->r[3]+0x00000424u); // 80086FB0
  c->r[4]=R32(c->r[3]+0x00000004u); // 80086FB4
  c->r[0]=R16(c->r[5]+0x00000006u); // 80086FB8
  c->r[3]=R16(c->r[5]+0x0000000Au); // 80086FBC
  c->r[4]=c->r[4]-c->r[5]; // 80086FC0
  c->r[0]=c->r[5]+c->r[0]; // 80086FC4
  c->r[30]=rotl(c->r[4],0)&0x0000FFFFu; // 80086FC8
  c->r[31]=c->r[3]+c->r[0]; // 80086FCC
  goto L_80087014; // 80086FD0
L_80086FD4:;
  cmpu(c,0,c->r[0],c->r[30]); // 80086FD4
  if (!crb(c,2)) { goto L_80087010; } // 80086FD8
  c->r[0]=R16(c->r[13]+0xFFFFB8F0u); // 80086FDC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80086FE0
  if (crb(c,2)) { goto L_80086FF0; } // 80086FE4
  c->r[3]=R16(c->r[31]+0x00000002u); // 80086FE8
  c->lr=0x80086FF0u; f_80087060(c); // 80086FEC
L_80086FF0:;
  c->r[0]=R16(c->r[13]+0xFFFFB8F0u); // 80086FF0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80086FF4
  if (crb(c,2)) { goto L_80087010; } // 80086FF8
  c->r[3]=R16(c->r[31]+0x00000002u); // 80086FFC
  c->r[0]=R16(c->r[13]+0xFFFFB8F2u); // 80087000
  cmpu(c,0,c->r[0],c->r[3]); // 80087004
  if (!crb(c,2)) { goto L_80087010; } // 80087008
  c->lr=0x80087010u; f_80087040(c); // 8008700C
L_80087010:;
  c->r[31]=c->r[31]+0x00000004u; // 80087010
L_80087014:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 80087014
  cmps(c,0,(int32_t)c->r[0],0); // 80087018
  if (crb(c,2)) { goto L_80087028; } // 8008701C
  cmpu(c,0,c->r[0],c->r[30]); // 80087020
  if (!crb(c,1)) { IRQCHK(c); goto L_80086FD4; } // 80087024
L_80087028:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087028
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008702C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80087030
  c->lr=c->r[0]; // 80087034
  c->r[1]=c->r[1]+0x00000010u; // 80087038
  return; // 8008703C
}

// fn_80087040
void f_80087040(Ctx* __restrict c) {
  c->r[5]=0u+0x80360000u; // 80087040
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80087044
  c->r[6]=c->r[3]|c->r[3]; // 80087048
  c->r[3]=0u+0x00000064u; // 8008704C
  c->r[5]=c->r[5]+0x00001E28u; // 80087050
  c->r[4]=0u+0x00000032u; // 80087054
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80087058
  f_8000E870(c); return; // 8008705C
}

// fn_80087060
void f_80087060(Ctx* __restrict c) {
  c->r[5]=0u+0x80360000u; // 80087060
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80087064
  c->r[6]=c->r[3]|c->r[3]; // 80087068
  c->r[3]=0u+0x00000064u; // 8008706C
  c->r[5]=c->r[5]+0x00001E40u; // 80087070
  c->r[4]=0u+0x00000032u; // 80087074
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80087078
  f_8000E870(c); return; // 8008707C
}

// fn_80087080
void f_80087080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087080
  c->r[0]=c->lr; // 80087084
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087088
  c->r[11]=c->r[1]+0x00000020u; // 8008708C
  c->lr=0x80087094u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80087090
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087094
  c->r[30]=c->r[3]|c->r[3]; // 80087098
  c->r[3]=R32(c->r[3]+0x00000008u); // 8008709C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800870A0
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 800870A4
  c->lr=0x800870ACu; f_80086D60(c); // 800870A8
  c->r[4]=R32(c->r[30]+0x00000424u); // 800870AC
  c->r[31]=c->r[3]|c->r[3]; // 800870B0
  c->r[3]=R16(c->r[4]+0x00000002u); // 800870B4
  c->r[0]=R16(c->r[4]+0x00000004u); // 800870B8
  c->r[0]=c->r[3]+c->r[0]; // 800870BC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800870C0
  if (crb(c,1)) { goto L_800870F4; } // 800870C4
  c->r[3]=c->r[30]|c->r[30]; // 800870C8
  c->lr=0x800870D0u; f_80087310(c); // 800870CC
  c->r[5]=0u+0x80360000u; // 800870D0
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800870D4
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 800870D8
  c->r[3]=0u+0x00000064u; // 800870DC
  c->r[5]=c->r[5]+0x00001E58u; // 800870E0
  c->r[4]=0u+0x00000032u; // 800870E4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 800870E8
  c->lr=0x800870F0u; f_8000E870(c); // 800870EC
L_800870F0:;
  IRQCHK(c); goto L_800870F0; // 800870F0
L_800870F4:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 800870F4
  c->r[3]=rotl(c->r[29],1)&0x0001FFFEu; // 800870F8
  c->r[0]=c->r[4]+c->r[0]; // 800870FC
  c->r[3]=c->r[3]+c->r[0]; // 80087100
  c->lr=0x80087108u; f_80086D70(c); // 80087104
  c->r[5]=R32(c->r[30]+0x00000424u); // 80087108
  c->r[8]=rotl(c->r[3],0)&0x0000FFFFu; // 8008710C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80087110
  c->r[3]=R32(c->r[30]+0x00000010u); // 80087114
  c->r[6]=R16(c->r[5]+0x00000006u); // 80087118
  c->r[7]=rotl(c->r[31],1)&0x000001FEu; // 8008711C
  cmpu(c,0,c->r[0],0x00000001u); // 80087120
  c->r[4]=0u+0x00000001u; // 80087124
  c->r[5]=c->r[5]+c->r[6]; // 80087128
  c->r[5]=c->r[5]+c->r[8]; // 8008712C
  c->r[28]=c->r[5]+c->r[7]; // 80087130
  W32(c->r[3]+0x00000000u,c->r[28]); // 80087134
  c->r[29]=R32(c->r[30]+0x00000010u); // 80087138
  c->r[3]=c->r[29]+0xFFFFFFF8u; // 8008713C
  W32(c->r[30]+0x00000010u,c->r[3]); // 80087140
  W32(c->r[29]+0xFFFFFFF8u,c->r[4]); // 80087144
  if (!crb(c,1)) { goto L_800871A0; } // 80087148
  c->r[27]=0u+0x00000001u; // 8008714C
L_80087150:;
  c->r[28]=c->r[28]+0xFFFFFFFEu; // 80087150
  c->r[3]=c->r[28]|c->r[28]; // 80087154
  c->lr=0x8008715Cu; f_80086D70(c); // 80087158
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8008715C
  c->r[3]=R32(c->r[30]+0x00000010u); // 80087160
  c->r[27]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[0]); // 80087164
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 80087168
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8008716C
  W32(c->r[30]+0x00000010u,c->r[3]); // 80087170
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80087174
  cmpu(c,0,c->r[0],0x00000001u); // 80087178
  W32(c->r[3]+0x00000000u,c->r[27]); // 8008717C
  if (!crb(c,0)) { IRQCHK(c); goto L_80087150; } // 80087180
  c->r[3]=R32(c->r[30]+0x00000010u); // 80087184
  c->r[0]=0u+0x00000000u; // 80087188
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8008718C
  W32(c->r[30]+0x00000010u,c->r[3]); // 80087190
  W32(c->r[3]+0x00000000u,c->r[0]); // 80087194
  W32(c->r[29]+0xFFFFFFFCu,c->r[27]); // 80087198
  goto L_800871C0; // 8008719C
L_800871A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800871A0
  if (crb(c,2)) { goto L_800871B8; } // 800871A4
  c->r[3]=c->r[28]+0xFFFFFFFEu; // 800871A8
  c->lr=0x800871B0u; f_80086D70(c); // 800871AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800871B0
  goto L_800871BC; // 800871B4
L_800871B8:;
  c->r[0]=0u+0x00000100u; // 800871B8
L_800871BC:;
  W32(c->r[29]+0xFFFFFFFCu,c->r[0]); // 800871BC
L_800871C0:;
  c->r[11]=c->r[1]+0x00000020u; // 800871C0
  c->lr=0x800871C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800871C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800871C8
  c->lr=c->r[0]; // 800871CC
  c->r[1]=c->r[1]+0x00000020u; // 800871D0
  return; // 800871D4
}

// fn_800871E0
void f_800871E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800871E0
  c->r[0]=c->lr; // 800871E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800871E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800871EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800871F0
  c->r[30]=c->r[3]|c->r[3]; // 800871F4
  c->r[6]=R32(c->r[3]+0x00000010u); // 800871F8
  c->r[5]=c->r[6]+0x00000004u; // 800871FC
  W32(c->r[3]+0x00000010u,c->r[5]); // 80087200
  c->r[4]=c->r[5]+0x00000004u; // 80087204
  c->r[7]=R32(c->r[6]+0x00000000u); // 80087208
  W32(c->r[3]+0x00000010u,c->r[4]); // 8008720C
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 80087210
  c->r[0]=R32(c->r[5]+0x00000004u); // 80087214
  c->r[31]=R32(c->r[5]+0x00000000u); // 80087218
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 8008721C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 80087220
  if (crb(c,0)) { goto L_80087260; } // 80087224
  c->lr=0x8008722Cu; f_80087310(c); // 80087228
  c->r[5]=0u+0x80360000u; // 8008722C
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80087230
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 80087234
  c->r[3]=0u+0x00000064u; // 80087238
  c->r[5]=c->r[5]+0x00001E84u; // 8008723C
  c->r[4]=0u+0x00000032u; // 80087240
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 80087244
  c->lr=0x8008724Cu; f_8000E870(c); // 80087248
  c->r[3]=R32(c->r[30]+0x00000010u); // 8008724C
  c->r[6]=R32(c->r[3]+0x00000004u); // 80087250
  c->r[0]=R32(c->r[3]+0x00000000u); // 80087254
  c->r[3]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 80087258
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 8008725C
L_80087260:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 80087260
  c->r[3]=R32(c->r[30]+0x00000010u); // 80087264
  c->r[0]=c->r[31]+c->r[0]; // 80087268
  W32(c->r[3]+0x00000000u,c->r[0]); // 8008726C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087270
  c->r[30]=R32(c->r[1]+0x00000008u); // 80087274
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087278
  c->lr=c->r[0]; // 8008727C
  c->r[1]=c->r[1]+0x00000010u; // 80087280
  return; // 80087284
}

// fn_80087290
void f_80087290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087290
  c->r[0]=c->lr; // 80087294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008729C
  c->r[31]=c->r[3]|c->r[3]; // 800872A0
  c->r[5]=R32(c->r[3]+0x00000010u); // 800872A4
  c->r[0]=c->r[5]+0x00000008u; // 800872A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800872AC
  c->r[0]=R32(c->r[5]+0x00000004u); // 800872B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800872B4
  if (crb(c,0)) { goto L_800872EC; } // 800872B8
  c->lr=0x800872C0u; f_80087310(c); // 800872BC
  c->r[5]=0u+0x80360000u; // 800872C0
  {uint32_t ea=c->r[2]+0xFFFF8CB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800872C4
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 800872C8
  c->r[3]=0u+0x00000064u; // 800872CC
  c->r[5]=c->r[5]+0x00001EACu; // 800872D0
  c->r[4]=0u+0x00000032u; // 800872D4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 800872D8
  c->lr=0x800872E0u; f_8000E870(c); // 800872DC
  c->r[3]=R32(c->r[31]+0x00000010u); // 800872E0
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 800872E4
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800872E8
L_800872EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800872EC
  c->r[3]=c->r[4]|c->r[4]; // 800872F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800872F4
  c->lr=c->r[0]; // 800872F8
  c->r[1]=c->r[1]+0x00000010u; // 800872FC
  return; // 80087300
}

// fn_80087310
void f_80087310(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000424u); // 80087310
  c->r[3]=R32(c->r[3]+0x00000004u); // 80087314
  c->r[5]=R16(c->r[4]+0x0000000Au); // 80087318
  c->r[0]=R16(c->r[4]+0x00000006u); // 8008731C
  c->r[3]=c->r[3]-c->r[4]; // 80087320
  cmps(c,0,(int32_t)c->r[5],0); // 80087324
  c->r[0]=c->r[4]+c->r[0]; // 80087328
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 8008732C
  c->r[3]=c->r[5]+c->r[0]; // 80087330
  if (crb(c,2)) { goto L_80087378; } // 80087334
  c->r[0]=R16(c->r[3]+0x00000000u); // 80087338
  cmps(c,0,(int32_t)c->r[0],0); // 8008733C
  if (crb(c,2)) { goto L_80087378; } // 80087340
  c->r[0]=c->r[0]|0x00000000u; // 80087344
L_80087348:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 80087348
  cmps(c,0,(int32_t)c->r[0],0); // 8008734C
  if (crb(c,2)) { goto L_8008735C; } // 80087350
  cmpu(c,0,c->r[0],c->r[4]); // 80087354
  if (!crb(c,1)) { goto L_80087364; } // 80087358
L_8008735C:;
  c->r[3]=R16(c->r[3]+0xFFFFFFFEu); // 8008735C
  return; // 80087360
L_80087364:;
  if (!crb(c,2)) { goto L_80087370; } // 80087364
  c->r[3]=R16(c->r[3]+0x00000002u); // 80087368
  return; // 8008736C
L_80087370:;
  c->r[3]=c->r[3]+0x00000004u; // 80087370
  IRQCHK(c); goto L_80087348; // 80087374
L_80087378:;
  c->r[3]=0u+0x00000000u; // 80087378
  return; // 8008737C
}

// fn_80087380
void f_80087380(Ctx* __restrict c) {
  c->r[5]=c->r[3]+0x00000014u; // 80087380
  c->r[4]=c->r[3]+0x00000410u; // 80087384
  c->r[0]=0u+0x00000000u; // 80087388
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8008738C
  W32(c->r[3]+0x00000010u,c->r[4]); // 80087390
  W32(c->r[3]+0x0000042Cu,c->r[0]); // 80087394
  return; // 80087398
}

// fn_800873A0
void f_800873A0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800873A0
  W8(c->r[5]+0x00000000u,c->r[4]); // 800873A4
  c->r[0]=c->r[5]+0x00000001u; // 800873A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800873AC
  return; // 800873B0
}

// fn_800873C0
void f_800873C0(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 800873C0
  c->r[5]=rotl(c->r[4],24)&0x000000FFu; // 800873C4
  W8(c->r[6]+0x00000000u,c->r[4]); // 800873C8
  c->r[4]=c->r[6]+0x00000001u; // 800873CC
  c->r[0]=c->r[4]+0x00000001u; // 800873D0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800873D4
  W8(c->r[6]+0x00000001u,c->r[5]); // 800873D8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800873DC
  return; // 800873E0
}

// fn_800873F0
void f_800873F0(Ctx* __restrict c) {
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 800873F0
  c->r[8]=rotl(c->r[4],24)&0x000000FFu; // 800873F4
  c->r[6]=rotl(c->r[4],16)&0x000000FFu; // 800873F8
  c->r[5]=rotl(c->r[4],8)&0x000000FFu; // 800873FC
  W8(c->r[7]+0x00000000u,c->r[4]); // 80087400
  c->r[9]=c->r[7]+0x00000001u; // 80087404
  c->r[7]=c->r[9]+0x00000001u; // 80087408
  W32(c->r[3]+0x0000000Cu,c->r[9]); // 8008740C
  c->r[4]=c->r[7]+0x00000001u; // 80087410
  c->r[0]=c->r[4]+0x00000001u; // 80087414
  W8(c->r[9]+0x00000000u,c->r[8]); // 80087418
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8008741C
  W8(c->r[9]+0x00000001u,c->r[6]); // 80087420
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80087424
  W8(c->r[9]+0x00000002u,c->r[5]); // 80087428
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8008742C
  return; // 80087430
}

// fn_80087440
void f_80087440(Ctx* __restrict c) {
  W32(c->r[3]+0x00000424u,c->r[4]); // 80087440
  c->r[5]=R16(c->r[4]+0x00000000u); // 80087444
  c->r[0]=sraw(c,c->r[5],8); // 80087448
  c->r[0]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8008744C
  W16(c->r[4]+0x00000000u,c->r[0]); // 80087450
  c->r[5]=R32(c->r[3]+0x00000424u); // 80087454
  c->r[4]=R16(c->r[5]+0x00000002u); // 80087458
  c->r[0]=sraw(c,c->r[4],8); // 8008745C
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80087460
  W16(c->r[5]+0x00000002u,c->r[0]); // 80087464
  c->r[5]=R32(c->r[3]+0x00000424u); // 80087468
  c->r[4]=R16(c->r[5]+0x00000004u); // 8008746C
  c->r[0]=sraw(c,c->r[4],8); // 80087470
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80087474
  W16(c->r[5]+0x00000004u,c->r[0]); // 80087478
  c->r[5]=R32(c->r[3]+0x00000424u); // 8008747C
  c->r[4]=R16(c->r[5]+0x00000006u); // 80087480
  c->r[0]=sraw(c,c->r[4],8); // 80087484
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 80087488
  W16(c->r[5]+0x00000006u,c->r[0]); // 8008748C
  c->r[5]=R32(c->r[3]+0x00000424u); // 80087490
  c->r[4]=R16(c->r[5]+0x00000008u); // 80087494
  c->r[0]=sraw(c,c->r[4],8); // 80087498
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8008749C
  W16(c->r[5]+0x00000008u,c->r[0]); // 800874A0
  c->r[5]=R32(c->r[3]+0x00000424u); // 800874A4
  c->r[4]=R16(c->r[5]+0x0000000Au); // 800874A8
  c->r[0]=sraw(c,c->r[4],8); // 800874AC
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800874B0
  W16(c->r[5]+0x0000000Au,c->r[0]); // 800874B4
  c->r[12]=R32(c->r[3]+0x0000042Cu); // 800874B8
  cmps(c,0,(int32_t)c->r[12],0); // 800874BC
  if (crb(c,2)) return; // 800874C0
  c->ctr=c->r[12]; // 800874C4
  if (true) { dispatch(c,c->ctr); return; } // 800874C8
  return; // 800874CC
}

// fn_800874D0
void f_800874D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800874D0
  c->r[0]=c->lr; // 800874D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800874D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800874DC
  c->r[31]=c->r[3]|c->r[3]; // 800874E0
  c->r[5]=R32(c->r[3]+0x00000424u); // 800874E4
  c->r[0]=R16(c->r[5]+0x00000002u); // 800874E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800874EC
  if (!crb(c,1)) { goto L_800874FC; } // 800874F0
  c->r[3]=R32(c->r[3]+0x00000414u); // 800874F4
  goto L_80087544; // 800874F8
L_800874FC:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 800874FC
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80087500
  c->r[0]=c->r[5]+c->r[0]; // 80087504
  c->r[4]=c->r[4]+c->r[0]; // 80087508
  c->lr=0x80087510u; f_80086F20(c); // 8008750C
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 80087510
  cmps(c,0,(int32_t)c->r[5],0); // 80087514
  if (crb(c,2)) { goto L_80087540; } // 80087518
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 8008751C
  c->r[4]=R32(c->r[31]+0x00000424u); // 80087520
  c->r[3]=rotl(c->r[0],8)&0x0000FF00u; // 80087524
  c->r[0]=R16(c->r[4]+0x00000006u); // 80087528
  c->r[3]=c->r[5]|c->r[3]; // 8008752C
  c->r[3]=rotl(c->r[3],31)&0x00007FFFu; // 80087530
  c->r[0]=c->r[4]+c->r[0]; // 80087534
  c->r[3]=c->r[3]+c->r[0]; // 80087538
  goto L_80087544; // 8008753C
L_80087540:;
  c->r[3]=0u+0x00000000u; // 80087540
L_80087544:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087544
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087548
  c->lr=c->r[0]; // 8008754C
  c->r[1]=c->r[1]+0x00000010u; // 80087550
  return; // 80087554
}

// fn_80087560
void f_80087560(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087560
  c->r[0]=c->lr; // 80087564
  W32(c->r[1]+0x00000034u,c->r[0]); // 80087568
  c->r[11]=c->r[1]+0x00000030u; // 8008756C
  c->lr=0x80087574u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80087570
  cmps(c,0,(int32_t)c->r[4],0); // 80087574
  c->r[26]=R32(c->r[3]+0x00000414u); // 80087578
  c->r[25]=R32(c->r[3]+0x00000428u); // 8008757C
  c->r[24]=c->r[3]|c->r[3]; // 80087580
  c->r[28]=c->r[4]|c->r[4]; // 80087584
  c->r[27]=c->r[5]|c->r[5]; // 80087588
  if (crb(c,2)) { goto L_800875AC; } // 8008758C
  c->r[5]=R32(c->r[3]+0x00000424u); // 80087590
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 80087594
  c->r[0]=R16(c->r[5]+0x00000000u); // 80087598
  c->r[0]=c->r[5]+c->r[0]; // 8008759C
  c->r[4]=c->r[4]+c->r[0]; // 800875A0
  c->lr=0x800875A8u; f_80086F20(c); // 800875A4
  W32(c->r[24]+0x00000428u,c->r[3]); // 800875A8
L_800875AC:;
  W16(c->r[24]+0x00000430u,c->r[27]); // 800875AC
  c->r[5]=R32(c->r[24]+0x00000424u); // 800875B0
  c->r[0]=R16(c->r[5]+0x00000002u); // 800875B4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 800875B8
  if (!crb(c,1)) { goto L_800875C8; } // 800875BC
  c->r[0]=R32(c->r[24]+0x00000414u); // 800875C0
  goto L_80087614; // 800875C4
L_800875C8:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 800875C8
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 800875CC
  c->r[3]=c->r[24]|c->r[24]; // 800875D0
  c->r[0]=c->r[5]+c->r[0]; // 800875D4
  c->r[4]=c->r[4]+c->r[0]; // 800875D8
  c->lr=0x800875E0u; f_80086F20(c); // 800875DC
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 800875E0
  cmps(c,0,(int32_t)c->r[5],0); // 800875E4
  if (crb(c,2)) { goto L_80087610; } // 800875E8
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 800875EC
  c->r[4]=R32(c->r[24]+0x00000424u); // 800875F0
  c->r[3]=rotl(c->r[0],8)&0x0000FF00u; // 800875F4
  c->r[0]=R16(c->r[4]+0x00000006u); // 800875F8
  c->r[3]=c->r[5]|c->r[3]; // 800875FC
  c->r[3]=rotl(c->r[3],31)&0x00007FFFu; // 80087600
  c->r[0]=c->r[4]+c->r[0]; // 80087604
  c->r[0]=c->r[3]+c->r[0]; // 80087608
  goto L_80087614; // 8008760C
L_80087610:;
  c->r[0]=0u+0x00000000u; // 80087610
L_80087614:;
  W32(c->r[24]+0x00000414u,c->r[0]); // 80087614
  c->r[28]=R32(c->r[24]+0x00000428u); // 80087618
  goto L_80087648; // 8008761C
L_80087620:;
  c->r[0]=R16(c->r[24]+0x00000430u); // 80087620
  cmpu(c,0,c->r[3],c->r[0]); // 80087624
  if (!crb(c,2)) { goto L_80087644; } // 80087628
  c->r[3]=c->r[24]|c->r[24]; // 8008762C
  c->r[4]=c->r[28]+0x00000002u; // 80087630
  c->lr=0x80087638u; f_80086F20(c); // 80087634
  c->r[27]=c->r[3]|c->r[3]; // 80087638
  c->r[0]=0u+0x00000001u; // 8008763C
  goto L_8008765C; // 80087640
L_80087644:;
  c->r[28]=c->r[28]+0x00000004u; // 80087644
L_80087648:;
  c->r[3]=c->r[28]|c->r[28]; // 80087648
  c->lr=0x80087650u; f_80086D70(c); // 8008764C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[3]); // 80087650
  if (!crb(c,2)) { IRQCHK(c); goto L_80087620; } // 80087654
  c->r[0]=0u+0x00000000u; // 80087658
L_8008765C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8008765C
  if (crb(c,2)) { goto L_80087858; } // 80087660
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 80087664
  c->r[28]=0u+0x805F0000u; // 80087668
  c->r[4]=R32(c->r[24]+0x00000004u); // 8008766C
  c->r[29]=0u+0x805F0000u; // 80087670
  W8(c->r[3]+0x00000000u,c->r[4]); // 80087674
  c->r[3]=c->r[3]+0x00000001u; // 80087678
  c->r[7]=c->r[3]+0x00000001u; // 8008767C
  c->r[30]=0u+0x80360000u; // 80087680
  W32(c->r[24]+0x0000000Cu,c->r[3]); // 80087684
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 80087688
  c->r[6]=rotl(c->r[4],16)&0x000000FFu; // 8008768C
  c->r[31]=0u+0x80360000u; // 80087690
  W8(c->r[3]+0x00000000u,c->r[0]); // 80087694
  c->r[5]=c->r[7]+0x00000001u; // 80087698
  c->r[4]=rotl(c->r[4],8)&0x000000FFu; // 8008769C
  c->r[0]=0u+0x00000000u; // 800876A0
  W32(c->r[24]+0x0000000Cu,c->r[7]); // 800876A4
  c->r[3]=c->r[5]+0x00000001u; // 800876A8
  c->r[28]=c->r[28]+0x00005394u; // 800876AC
  c->r[29]=c->r[29]+0x00005390u; // 800876B0
  W8(c->r[7]+0x00000000u,c->r[6]); // 800876B4
  c->r[30]=c->r[30]+0x0000232Cu; // 800876B8
  c->r[31]=c->r[31]+0x00001EF8u; // 800876BC
  W32(c->r[24]+0x0000000Cu,c->r[5]); // 800876C0
  W8(c->r[7]+0x00000001u,c->r[4]); // 800876C4
  W32(c->r[24]+0x0000000Cu,c->r[3]); // 800876C8
  W32(c->r[24]+0x00000004u,c->r[27]); // 800876CC
  W8(c->r[24]+0x00000000u,c->r[0]); // 800876D0
  goto L_800877FC; // 800876D4
L_800876D8:;
  c->r[3]=c->r[24]|c->r[24]; // 800876D8
  c->lr=0x800876E0u; f_80086F90(c); // 800876DC
  c->r[7]=R32(c->r[24]+0x00000004u); // 800876E0
  c->r[4]=R8(c->r[7]+0x00000000u); // 800876E4
  cmpu(c,0,c->r[4],0x000000FFu); // 800876E8
  if (crb(c,0)) { goto L_80087774; } // 800876EC
  c->r[0]=addc(c,~c->r[4],0x000000FFu,1); // 800876F0
  c->r[6]=R8(c->r[7]+0x00000001u); // 800876F4
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800876F8
  c->r[0]=R8(c->r[24]+0x00000000u); // 800876FC
  c->r[5]=R32(c->r[28]+c->r[4]); // 80087700
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80087704
  c->r[4]=R32(c->r[29]+c->r[4]); // 80087708
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8008770C
  c->r[5]=c->r[5]+c->r[6]; // 80087710
  c->r[3]=c->r[4]+c->r[3]; // 80087714
  c->r[6]=R8(c->r[5]+0xFFFFFFFFu); // 80087718
  c->r[12]=R32(c->r[3]+0xFFFFFFFCu); // 8008771C
  if (crb(c,2)) { goto L_80087730; } // 80087720
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 80087724
  c->r[5]=c->r[0]-c->r[6]; // 80087728
  goto L_80087734; // 8008772C
L_80087730:;
  c->r[5]=c->r[7]+0x00000002u; // 80087730
L_80087734:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 80087734
  c->r[3]=R32(c->r[24]+0x00000004u); // 80087738
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8008773C
  W32(c->r[24]+0x00000008u,c->r[5]); // 80087740
  c->r[0]=0u-c->r[4]; // 80087744
  c->r[0]=c->r[0]|c->r[4]; // 80087748
  W8(c->r[24]+0x00000002u,c->r[6]); // 8008774C
  c->r[0]=sraw(c,c->r[0],31); // 80087750
  c->r[4]=c->r[6]&~c->r[0]; // 80087754
  c->r[0]=c->r[4]+0x00000002u; // 80087758
  W8(c->r[24]+0x00000001u,c->r[0]); // 8008775C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80087760
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80087764
  c->r[0]=c->r[3]+c->r[0]; // 80087768
  W32(c->r[24]+0x00000004u,c->r[0]); // 8008776C
  goto L_800877E0; // 80087770
L_80087774:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 80087774
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80087778
  c->r[4]=c->r[30]+c->r[4]; // 8008777C
  c->r[3]=c->r[31]+c->r[3]; // 80087780
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80087784
  c->r[6]=R8(c->r[4]+0xFFFFFFFFu); // 80087788
  c->r[12]=R32(c->r[3]+0xFFFFFFFCu); // 8008778C
  if (crb(c,2)) { goto L_800877A0; } // 80087790
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 80087794
  c->r[5]=c->r[0]-c->r[6]; // 80087798
  goto L_800877A4; // 8008779C
L_800877A0:;
  c->r[5]=c->r[7]+0x00000001u; // 800877A0
L_800877A4:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 800877A4
  c->r[3]=R32(c->r[24]+0x00000004u); // 800877A8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800877AC
  W32(c->r[24]+0x00000008u,c->r[5]); // 800877B0
  c->r[0]=0u-c->r[4]; // 800877B4
  c->r[0]=c->r[0]|c->r[4]; // 800877B8
  W8(c->r[24]+0x00000002u,c->r[6]); // 800877BC
  c->r[0]=sraw(c,c->r[0],31); // 800877C0
  c->r[4]=c->r[6]&~c->r[0]; // 800877C4
  c->r[0]=c->r[4]+0x00000001u; // 800877C8
  W8(c->r[24]+0x00000001u,c->r[0]); // 800877CC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800877D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800877D4
  c->r[0]=c->r[3]+c->r[0]; // 800877D8
  W32(c->r[24]+0x00000004u,c->r[0]); // 800877DC
L_800877E0:;
  c->r[3]=c->r[24]|c->r[24]; // 800877E0
  c->ctr=c->r[12]; // 800877E4
  if (true) { c->lr=0x800877ECu; dispatch(c,c->ctr); } // 800877E8
  c->r[0]=R8(c->r[24]+0x00000000u); // 800877EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800877F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800877F4
  W8(c->r[24]+0x00000000u,c->r[0]); // 800877F8
L_800877FC:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 800877FC
  c->r[0]=R8(c->r[3]+0x00000000u); // 80087800
  cmps(c,0,(int32_t)c->r[0],0); // 80087804
  if (!crb(c,2)) { IRQCHK(c); goto L_800876D8; } // 80087808
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 8008780C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80087810
  W32(c->r[24]+0x0000000Cu,c->r[3]); // 80087814
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80087818
  c->r[6]=R8(c->r[3]+0x00000000u); // 8008781C
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 80087820
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 80087824
  W32(c->r[24]+0x0000000Cu,c->r[5]); // 80087828
  c->r[0]=R8(c->r[5]+0x00000000u); // 8008782C
  W32(c->r[24]+0x0000000Cu,c->r[4]); // 80087830
  c->r[5]=rotl(c->r[0],16)&0xFFFF0000u; // 80087834
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80087838
  c->r[0]=R8(c->r[4]+0x00000000u); // 8008783C
  W32(c->r[24]+0x0000000Cu,c->r[3]); // 80087840
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80087844
  c->r[5]=c->r[5]|c->r[0]; // 80087848
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 8008784C
  c->r[5]=c->r[5]|c->r[0]; // 80087850
  W32(c->r[24]+0x00000004u,c->r[5]); // 80087854
L_80087858:;
  W32(c->r[24]+0x00000428u,c->r[25]); // 80087858
  c->r[11]=c->r[1]+0x00000030u; // 8008785C
  W32(c->r[24]+0x00000414u,c->r[26]); // 80087860
  c->lr=0x80087868u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80087864
  c->r[0]=R32(c->r[1]+0x00000034u); // 80087868
  c->lr=c->r[0]; // 8008786C
  c->r[1]=c->r[1]+0x00000030u; // 80087870
  return; // 80087874
}

// fn_80087880
void f_80087880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087880
  c->r[0]=c->lr; // 80087884
  W32(c->r[1]+0x00000044u,c->r[0]); // 80087888
  c->r[11]=c->r[1]+0x00000040u; // 8008788C
  c->lr=0x80087894u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80087890
  c->r[6]=R32(c->r[3]+0x00000424u); // 80087894
  c->r[28]=0u+0x805F0000u; // 80087898
  c->r[29]=0u+0x805F0000u; // 8008789C
  c->r[30]=0u+0x80360000u; // 800878A0
  c->r[21]=R16(c->r[6]+0x00000002u); // 800878A4
  c->r[31]=0u+0x80360000u; // 800878A8
  c->r[0]=R16(c->r[6]+0x00000000u); // 800878AC
  c->r[19]=c->r[3]|c->r[3]; // 800878B0
  c->r[5]=rotl(c->r[21],1)&0xFFFFFFFEu; // 800878B4
  c->r[23]=R32(c->r[3]+0x00000428u); // 800878B8
  c->r[0]=c->r[6]+c->r[0]; // 800878BC
  c->r[20]=c->r[4]|c->r[4]; // 800878C0
  c->r[28]=c->r[28]+0x00005394u; // 800878C4
  c->r[29]=c->r[29]+0x00005390u; // 800878C8
  c->r[24]=c->r[5]+c->r[0]; // 800878CC
  c->r[30]=c->r[30]+0x0000232Cu; // 800878D0
  c->r[31]=c->r[31]+0x00001EF8u; // 800878D4
  c->r[27]=0u+0x00000000u; // 800878D8
  goto L_80087B84; // 800878DC
L_800878E0:;
  W16(c->r[19]+0x00000430u,c->r[20]); // 800878E0
  c->r[3]=c->r[21]|c->r[21]; // 800878E4
  c->r[5]=R32(c->r[19]+0x00000424u); // 800878E8
  c->r[24]=c->r[24]+0x00000002u; // 800878EC
  c->r[22]=R32(c->r[19]+0x00000010u); // 800878F0
  c->r[0]=R16(c->r[5]+0x00000002u); // 800878F4
  c->r[25]=R32(c->r[19]+0x00000414u); // 800878F8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 800878FC
  c->r[21]=c->r[21]+0x00000001u; // 80087900
  if (!crb(c,1)) { goto L_80087910; } // 80087904
  c->r[0]=c->r[25]|c->r[25]; // 80087908
  goto L_8008795C; // 8008790C
L_80087910:;
  c->r[0]=R16(c->r[5]+0x00000000u); // 80087910
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80087914
  c->r[3]=c->r[19]|c->r[19]; // 80087918
  c->r[0]=c->r[5]+c->r[0]; // 8008791C
  c->r[4]=c->r[4]+c->r[0]; // 80087920
  c->lr=0x80087928u; f_80086F20(c); // 80087924
  c->r[5]=R8(c->r[3]+0xFFFFFFFFu); // 80087928
  cmps(c,0,(int32_t)c->r[5],0); // 8008792C
  if (crb(c,2)) { goto L_80087958; } // 80087930
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 80087934
  c->r[4]=R32(c->r[19]+0x00000424u); // 80087938
  c->r[3]=rotl(c->r[0],8)&0x0000FF00u; // 8008793C
  c->r[0]=R16(c->r[4]+0x00000006u); // 80087940
  c->r[3]=c->r[5]|c->r[3]; // 80087944
  c->r[3]=rotl(c->r[3],31)&0x00007FFFu; // 80087948
  c->r[0]=c->r[4]+c->r[0]; // 8008794C
  c->r[0]=c->r[3]+c->r[0]; // 80087950
  goto L_8008795C; // 80087954
L_80087958:;
  c->r[0]=0u+0x00000000u; // 80087958
L_8008795C:;
  W32(c->r[19]+0x00000414u,c->r[0]); // 8008795C
  c->r[18]=R32(c->r[19]+0x00000428u); // 80087960
  goto L_80087990; // 80087964
L_80087968:;
  c->r[0]=R16(c->r[19]+0x00000430u); // 80087968
  cmpu(c,0,c->r[3],c->r[0]); // 8008796C
  if (!crb(c,2)) { goto L_8008798C; } // 80087970
  c->r[3]=c->r[19]|c->r[19]; // 80087974
  c->r[4]=c->r[18]+0x00000002u; // 80087978
  c->lr=0x80087980u; f_80086F20(c); // 8008797C
  c->r[26]=c->r[3]|c->r[3]; // 80087980
  c->r[0]=0u+0x00000001u; // 80087984
  goto L_800879A4; // 80087988
L_8008798C:;
  c->r[18]=c->r[18]+0x00000004u; // 8008798C
L_80087990:;
  c->r[3]=c->r[18]|c->r[18]; // 80087990
  c->lr=0x80087998u; f_80086D70(c); // 80087994
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[3]); // 80087998
  if (!crb(c,2)) { IRQCHK(c); goto L_80087968; } // 8008799C
  c->r[0]=0u+0x00000000u; // 800879A0
L_800879A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800879A4
  if (crb(c,2)) { goto L_80087B7C; } // 800879A8
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 800879AC
  c->r[8]=R32(c->r[19]+0x00000004u); // 800879B0
  W8(c->r[3]+0x00000000u,c->r[8]); // 800879B4
  c->r[7]=c->r[3]+0x00000001u; // 800879B8
  c->r[6]=c->r[7]+0x00000001u; // 800879BC
  c->r[0]=rotl(c->r[8],24)&0x000000FFu; // 800879C0
  W32(c->r[19]+0x0000000Cu,c->r[7]); // 800879C4
  c->r[5]=rotl(c->r[8],16)&0x000000FFu; // 800879C8
  c->r[4]=c->r[6]+0x00000001u; // 800879CC
  c->r[3]=rotl(c->r[8],8)&0x000000FFu; // 800879D0
  W8(c->r[7]+0x00000000u,c->r[0]); // 800879D4
  c->r[0]=c->r[4]+0x00000001u; // 800879D8
  W32(c->r[19]+0x0000000Cu,c->r[6]); // 800879DC
  W8(c->r[7]+0x00000001u,c->r[5]); // 800879E0
  W32(c->r[19]+0x0000000Cu,c->r[4]); // 800879E4
  W8(c->r[7]+0x00000002u,c->r[3]); // 800879E8
  W32(c->r[19]+0x0000000Cu,c->r[0]); // 800879EC
  W32(c->r[19]+0x00000004u,c->r[26]); // 800879F0
  W8(c->r[19]+0x00000000u,c->r[27]); // 800879F4
  goto L_80087B20; // 800879F8
L_800879FC:;
  c->r[3]=c->r[19]|c->r[19]; // 800879FC
  c->lr=0x80087A04u; f_80086F90(c); // 80087A00
  c->r[3]=R32(c->r[19]+0x00000004u); // 80087A04
  c->r[5]=R8(c->r[3]+0x00000000u); // 80087A08
  cmpu(c,0,c->r[5],0x000000FFu); // 80087A0C
  if (crb(c,0)) { goto L_80087A98; } // 80087A10
  c->r[0]=addc(c,~c->r[5],0x000000FFu,1); // 80087A14
  c->r[7]=R8(c->r[3]+0x00000001u); // 80087A18
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80087A1C
  c->r[0]=R8(c->r[19]+0x00000000u); // 80087A20
  c->r[6]=R32(c->r[28]+c->r[5]); // 80087A24
  c->r[4]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80087A28
  c->r[5]=R32(c->r[29]+c->r[5]); // 80087A2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80087A30
  c->r[6]=c->r[6]+c->r[7]; // 80087A34
  c->r[4]=c->r[5]+c->r[4]; // 80087A38
  c->r[6]=R8(c->r[6]+0xFFFFFFFFu); // 80087A3C
  c->r[12]=R32(c->r[4]+0xFFFFFFFCu); // 80087A40
  if (crb(c,2)) { goto L_80087A54; } // 80087A44
  c->r[0]=R32(c->r[19]+0x0000000Cu); // 80087A48
  c->r[5]=c->r[0]-c->r[6]; // 80087A4C
  goto L_80087A58; // 80087A50
L_80087A54:;
  c->r[5]=c->r[3]+0x00000002u; // 80087A54
L_80087A58:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 80087A58
  c->r[3]=R32(c->r[19]+0x00000004u); // 80087A5C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80087A60
  W32(c->r[19]+0x00000008u,c->r[5]); // 80087A64
  c->r[0]=0u-c->r[4]; // 80087A68
  c->r[0]=c->r[0]|c->r[4]; // 80087A6C
  W8(c->r[19]+0x00000002u,c->r[6]); // 80087A70
  c->r[0]=sraw(c,c->r[0],31); // 80087A74
  c->r[4]=c->r[6]&~c->r[0]; // 80087A78
  c->r[0]=c->r[4]+0x00000002u; // 80087A7C
  W8(c->r[19]+0x00000001u,c->r[0]); // 80087A80
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80087A84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80087A88
  c->r[0]=c->r[3]+c->r[0]; // 80087A8C
  W32(c->r[19]+0x00000004u,c->r[0]); // 80087A90
  goto L_80087B04; // 80087A94
L_80087A98:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 80087A98
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80087A9C
  c->r[5]=c->r[30]+c->r[5]; // 80087AA0
  c->r[4]=c->r[31]+c->r[4]; // 80087AA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80087AA8
  c->r[6]=R8(c->r[5]+0xFFFFFFFFu); // 80087AAC
  c->r[12]=R32(c->r[4]+0xFFFFFFFCu); // 80087AB0
  if (crb(c,2)) { goto L_80087AC4; } // 80087AB4
  c->r[0]=R32(c->r[19]+0x0000000Cu); // 80087AB8
  c->r[5]=c->r[0]-c->r[6]; // 80087ABC
  goto L_80087AC8; // 80087AC0
L_80087AC4:;
  c->r[5]=c->r[3]+0x00000001u; // 80087AC4
L_80087AC8:;
  c->r[0]=R8(c->r[19]+0x00000000u); // 80087AC8
  c->r[3]=R32(c->r[19]+0x00000004u); // 80087ACC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80087AD0
  W32(c->r[19]+0x00000008u,c->r[5]); // 80087AD4
  c->r[0]=0u-c->r[4]; // 80087AD8
  c->r[0]=c->r[0]|c->r[4]; // 80087ADC
  W8(c->r[19]+0x00000002u,c->r[6]); // 80087AE0
  c->r[0]=sraw(c,c->r[0],31); // 80087AE4
  c->r[4]=c->r[6]&~c->r[0]; // 80087AE8
  c->r[0]=c->r[4]+0x00000001u; // 80087AEC
  W8(c->r[19]+0x00000001u,c->r[0]); // 80087AF0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80087AF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80087AF8
  c->r[0]=c->r[3]+c->r[0]; // 80087AFC
  W32(c->r[19]+0x00000004u,c->r[0]); // 80087B00
L_80087B04:;
  c->r[3]=c->r[19]|c->r[19]; // 80087B04
  c->ctr=c->r[12]; // 80087B08
  if (true) { c->lr=0x80087B10u; dispatch(c,c->ctr); } // 80087B0C
  c->r[0]=R8(c->r[19]+0x00000000u); // 80087B10
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80087B14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80087B18
  W8(c->r[19]+0x00000000u,c->r[0]); // 80087B1C
L_80087B20:;
  c->r[3]=R32(c->r[19]+0x00000004u); // 80087B20
  c->r[0]=R8(c->r[3]+0x00000000u); // 80087B24
  cmps(c,0,(int32_t)c->r[0],0); // 80087B28
  if (!crb(c,2)) { IRQCHK(c); goto L_800879FC; } // 80087B2C
  c->r[3]=R32(c->r[19]+0x0000000Cu); // 80087B30
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80087B34
  W32(c->r[19]+0x0000000Cu,c->r[3]); // 80087B38
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80087B3C
  c->r[6]=R8(c->r[3]+0x00000000u); // 80087B40
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 80087B44
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 80087B48
  W32(c->r[19]+0x0000000Cu,c->r[5]); // 80087B4C
  c->r[0]=R8(c->r[5]+0x00000000u); // 80087B50
  W32(c->r[19]+0x0000000Cu,c->r[4]); // 80087B54
  c->r[5]=rotl(c->r[0],16)&0xFFFF0000u; // 80087B58
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 80087B5C
  c->r[0]=R8(c->r[4]+0x00000000u); // 80087B60
  W32(c->r[19]+0x0000000Cu,c->r[3]); // 80087B64
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80087B68
  c->r[5]=c->r[5]|c->r[0]; // 80087B6C
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 80087B70
  c->r[5]=c->r[5]|c->r[0]; // 80087B74
  W32(c->r[19]+0x00000004u,c->r[5]); // 80087B78
L_80087B7C:;
  W32(c->r[19]+0x00000414u,c->r[25]); // 80087B7C
  W32(c->r[19]+0x00000010u,c->r[22]); // 80087B80
L_80087B84:;
  c->r[3]=c->r[19]|c->r[19]; // 80087B84
  c->r[4]=c->r[24]|c->r[24]; // 80087B88
  c->lr=0x80087B90u; f_80086F20(c); // 80087B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80087B90
  W32(c->r[19]+0x00000428u,c->r[3]); // 80087B94
  if (!crb(c,2)) { IRQCHK(c); goto L_800878E0; } // 80087B98
  W32(c->r[19]+0x00000428u,c->r[23]); // 80087B9C
  c->r[11]=c->r[1]+0x00000040u; // 80087BA0
  c->lr=0x80087BA8u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80087BA4
  c->r[0]=R32(c->r[1]+0x00000044u); // 80087BA8
  c->lr=c->r[0]; // 80087BAC
  c->r[1]=c->r[1]+0x00000040u; // 80087BB0
  return; // 80087BB4
}

// fn_80087BC0
void f_80087BC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087BC0
  c->r[0]=c->lr; // 80087BC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087BC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087BCC
  c->r[31]=c->r[3]|c->r[3]; // 80087BD0
  c->r[4]=R32(c->r[3]+0x00000008u); // 80087BD4
  c->lr=0x80087BDCu; f_80086EE0(c); // 80087BD8
  W32(c->r[31]+0x00000004u,c->r[3]); // 80087BDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087BE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087BE4
  c->lr=c->r[0]; // 80087BE8
  c->r[1]=c->r[1]+0x00000010u; // 80087BEC
  return; // 80087BF0
}

// fn_80087C00
void f_80087C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087C00
  c->r[0]=c->lr; // 80087C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087C08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087C0C
  c->r[31]=c->r[3]|c->r[3]; // 80087C10
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087C14
  c->lr=0x80087C1Cu; f_80086D60(c); // 80087C18
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087C1C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087C20
  c->r[0]=c->r[0]+c->r[3]; // 80087C24
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087C28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087C30
  c->lr=c->r[0]; // 80087C34
  c->r[1]=c->r[1]+0x00000010u; // 80087C38
  return; // 80087C3C
}

// fn_80087C40
void f_80087C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087C40
  c->r[0]=c->lr; // 80087C44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087C48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087C4C
  c->r[31]=c->r[3]|c->r[3]; // 80087C50
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087C54
  c->lr=0x80087C5Cu; f_80086D70(c); // 80087C58
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087C5C
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80087C60
  c->r[0]=c->r[0]+c->r[3]; // 80087C64
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087C68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087C70
  c->lr=c->r[0]; // 80087C74
  c->r[1]=c->r[1]+0x00000010u; // 80087C78
  return; // 80087C7C
}

// fn_80087C80
void f_80087C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087C80
  c->r[0]=c->lr; // 80087C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087C8C
  c->r[31]=c->r[3]|c->r[3]; // 80087C90
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087C94
  c->lr=0x80087C9Cu; f_80086D90(c); // 80087C98
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087C9C
  c->r[0]=c->r[0]+c->r[3]; // 80087CA0
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087CA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087CA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087CAC
  c->lr=c->r[0]; // 80087CB0
  c->r[1]=c->r[1]+0x00000010u; // 80087CB4
  return; // 80087CB8
}

// fn_80087CC0
void f_80087CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087CC0
  c->r[0]=c->lr; // 80087CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087CC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087CCC
  c->r[31]=c->r[3]|c->r[3]; // 80087CD0
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087CD4
  c->r[0]=c->r[4]+0x00000004u; // 80087CD8
  W32(c->r[3]+0x00000010u,c->r[0]); // 80087CDC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80087CE0
  cmps(c,0,(int32_t)c->r[0],0); // 80087CE4
  if (crb(c,2)) { goto L_80087D04; } // 80087CE8
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087CEC
  c->lr=0x80087CF4u; f_80086D60(c); // 80087CF0
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087CF4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087CF8
  c->r[0]=c->r[0]+c->r[3]; // 80087CFC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087D00
L_80087D04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087D04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087D08
  c->lr=c->r[0]; // 80087D0C
  c->r[1]=c->r[1]+0x00000010u; // 80087D10
  return; // 80087D14
}

// fn_80087D20
void f_80087D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087D20
  c->r[0]=c->lr; // 80087D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087D2C
  c->r[31]=c->r[3]|c->r[3]; // 80087D30
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087D34
  c->r[0]=c->r[4]+0x00000004u; // 80087D38
  W32(c->r[3]+0x00000010u,c->r[0]); // 80087D3C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80087D40
  cmps(c,0,(int32_t)c->r[0],0); // 80087D44
  if (crb(c,2)) { goto L_80087D64; } // 80087D48
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087D4C
  c->lr=0x80087D54u; f_80086D70(c); // 80087D50
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087D54
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80087D58
  c->r[0]=c->r[0]+c->r[3]; // 80087D5C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087D60
L_80087D64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087D64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087D68
  c->lr=c->r[0]; // 80087D6C
  c->r[1]=c->r[1]+0x00000010u; // 80087D70
  return; // 80087D74
}

// fn_80087D80
void f_80087D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087D80
  c->r[0]=c->lr; // 80087D84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087D88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087D8C
  c->r[31]=c->r[3]|c->r[3]; // 80087D90
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087D94
  c->r[0]=R32(c->r[4]+0x00000000u); // 80087D98
  cmps(c,0,(int32_t)c->r[0],0); // 80087D9C
  if (crb(c,2)) { goto L_80087DB8; } // 80087DA0
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087DA4
  c->lr=0x80087DACu; f_80086D90(c); // 80087DA8
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087DAC
  c->r[0]=c->r[0]+c->r[3]; // 80087DB0
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087DB4
L_80087DB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087DB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087DBC
  c->lr=c->r[0]; // 80087DC0
  c->r[1]=c->r[1]+0x00000010u; // 80087DC4
  return; // 80087DC8
}

// fn_80087DD0
void f_80087DD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087DD0
  c->r[0]=c->lr; // 80087DD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087DD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087DDC
  c->r[31]=c->r[3]|c->r[3]; // 80087DE0
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087DE4
  c->r[0]=c->r[4]+0x00000004u; // 80087DE8
  W32(c->r[3]+0x00000010u,c->r[0]); // 80087DEC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80087DF0
  cmps(c,0,(int32_t)c->r[0],0); // 80087DF4
  if (!crb(c,2)) { goto L_80087E14; } // 80087DF8
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087DFC
  c->lr=0x80087E04u; f_80086D60(c); // 80087E00
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087E04
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80087E08
  c->r[0]=c->r[0]+c->r[3]; // 80087E0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087E10
L_80087E14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087E14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087E18
  c->lr=c->r[0]; // 80087E1C
  c->r[1]=c->r[1]+0x00000010u; // 80087E20
  return; // 80087E24
}

// fn_80087E30
void f_80087E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087E30
  c->r[0]=c->lr; // 80087E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087E38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087E3C
  c->r[31]=c->r[3]|c->r[3]; // 80087E40
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087E44
  c->r[0]=c->r[4]+0x00000004u; // 80087E48
  W32(c->r[3]+0x00000010u,c->r[0]); // 80087E4C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80087E50
  cmps(c,0,(int32_t)c->r[0],0); // 80087E54
  if (!crb(c,2)) { goto L_80087E74; } // 80087E58
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087E5C
  c->lr=0x80087E64u; f_80086D70(c); // 80087E60
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087E64
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80087E68
  c->r[0]=c->r[0]+c->r[3]; // 80087E6C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087E70
L_80087E74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087E74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087E78
  c->lr=c->r[0]; // 80087E7C
  c->r[1]=c->r[1]+0x00000010u; // 80087E80
  return; // 80087E84
}

// fn_80087E90
void f_80087E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087E90
  c->r[0]=c->lr; // 80087E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087E98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087E9C
  c->r[31]=c->r[3]|c->r[3]; // 80087EA0
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087EA4
  c->r[0]=c->r[4]+0x00000004u; // 80087EA8
  W32(c->r[3]+0x00000010u,c->r[0]); // 80087EAC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80087EB0
  cmps(c,0,(int32_t)c->r[0],0); // 80087EB4
  if (!crb(c,2)) { goto L_80087ED0; } // 80087EB8
  c->r[3]=R32(c->r[3]+0x00000008u); // 80087EBC
  c->lr=0x80087EC4u; f_80086D90(c); // 80087EC0
  c->r[0]=R32(c->r[31]+0x00000004u); // 80087EC4
  c->r[0]=c->r[0]+c->r[3]; // 80087EC8
  W32(c->r[31]+0x00000004u,c->r[0]); // 80087ECC
L_80087ED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087ED4
  c->lr=c->r[0]; // 80087ED8
  c->r[1]=c->r[1]+0x00000010u; // 80087EDC
  return; // 80087EE0
}

// fn_80087EF0
void f_80087EF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087EF0
  c->r[0]=c->lr; // 80087EF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80087EF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80087EFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80087F00
  c->r[30]=c->r[3]|c->r[3]; // 80087F04
  c->r[5]=R32(c->r[3]+0x00000010u); // 80087F08
  c->r[4]=R32(c->r[3]+0x00000008u); // 80087F0C
  c->r[0]=c->r[5]+0x00000004u; // 80087F10
  W32(c->r[3]+0x00000010u,c->r[0]); // 80087F14
  c->r[0]=c->r[4]+0x00000001u; // 80087F18
  c->r[3]=c->r[4]|c->r[4]; // 80087F1C
  c->r[31]=R32(c->r[5]+0x00000000u); // 80087F20
  W32(c->r[30]+0x00000008u,c->r[0]); // 80087F24
  c->lr=0x80087F2Cu; f_80086D60(c); // 80087F28
  c->r[4]=R32(c->r[30]+0x00000008u); // 80087F2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80087F30
  c->r[31]=c->r[31]-c->r[0]; // 80087F34
  c->r[0]=c->r[4]+0x00000001u; // 80087F38
  W32(c->r[30]+0x00000008u,c->r[0]); // 80087F3C
  c->r[3]=c->r[4]|c->r[4]; // 80087F40
  c->lr=0x80087F48u; f_80086D60(c); // 80087F44
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80087F48
  c->r[0]=c->r[31]+0x00000001u; // 80087F4C
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 80087F50
  c->r[4]=R32(c->r[30]+0x00000008u); // 80087F54
  c->r[3]=addc(c,~c->r[6],c->r[31],1); // 80087F58
  c->r[5]=addc(c,c->r[6],0,c->xer_ca); // 80087F5C
  c->r[5]=c->r[6]-c->r[5]; // 80087F60
  c->r[3]=c->r[30]|c->r[30]; // 80087F64
  c->r[31]=c->r[0]&~c->r[5]; // 80087F68
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80087F6C
  c->r[4]=c->r[4]+c->r[0]; // 80087F70
  c->lr=0x80087F78u; f_80086F20(c); // 80087F74
  W32(c->r[30]+0x00000004u,c->r[3]); // 80087F78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80087F7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80087F80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80087F84
  c->lr=c->r[0]; // 80087F88
  c->r[1]=c->r[1]+0x00000010u; // 80087F8C
  return; // 80087F90
}

// fn_80087FA0
void f_80087FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80087FA0
  c->r[0]=c->lr; // 80087FA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80087FA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80087FAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80087FB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80087FB4
  c->r[29]=c->r[3]|c->r[3]; // 80087FB8
  c->r[4]=R32(c->r[3]+0x00000010u); // 80087FBC
  c->r[30]=R32(c->r[3]+0x00000008u); // 80087FC0
  c->r[0]=c->r[4]+0x00000004u; // 80087FC4
  W32(c->r[3]+0x00000010u,c->r[0]); // 80087FC8
  c->r[3]=c->r[30]|c->r[30]; // 80087FCC
  c->r[30]=c->r[30]+0x00000002u; // 80087FD0
  c->r[31]=R32(c->r[4]+0x00000000u); // 80087FD4
  c->lr=0x80087FDCu; f_80086D70(c); // 80087FD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80087FDC
  c->r[3]=c->r[30]|c->r[30]; // 80087FE0
  c->r[31]=c->r[31]-c->r[0]; // 80087FE4
  c->r[30]=c->r[30]+0x00000002u; // 80087FE8
  c->lr=0x80087FF0u; f_80086D70(c); // 80087FEC
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80087FF0
  c->r[0]=c->r[31]+0x00000001u; // 80087FF4
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80087FF8
  c->r[4]=addc(c,~c->r[5],c->r[31],1); // 80087FFC
  c->r[3]=c->r[29]|c->r[29]; // 80088000
  c->r[4]=addc(c,c->r[5],0,c->xer_ca); // 80088004
  c->r[4]=c->r[5]-c->r[4]; // 80088008
  c->r[31]=c->r[0]&~c->r[4]; // 8008800C
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80088010
  c->r[4]=c->r[30]+c->r[0]; // 80088014
  c->lr=0x8008801Cu; f_80086F20(c); // 80088018
  W32(c->r[29]+0x00000004u,c->r[3]); // 8008801C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80088020
  c->r[30]=R32(c->r[1]+0x00000018u); // 80088024
  c->r[29]=R32(c->r[1]+0x00000014u); // 80088028
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008802C
  c->lr=c->r[0]; // 80088030
  c->r[1]=c->r[1]+0x00000020u; // 80088034
  return; // 80088038
}

// fn_80088040
void f_80088040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088040
  c->r[0]=c->lr; // 80088044
  W32(c->r[1]+0x00000024u,c->r[0]); // 80088048
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8008804C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80088050
  W32(c->r[1]+0x00000014u,c->r[29]); // 80088054
  c->r[29]=c->r[3]|c->r[3]; // 80088058
  c->r[4]=R32(c->r[3]+0x00000010u); // 8008805C
  c->r[30]=R32(c->r[3]+0x00000008u); // 80088060
  c->r[0]=c->r[4]+0x00000004u; // 80088064
  W32(c->r[3]+0x00000010u,c->r[0]); // 80088068
  c->r[3]=c->r[30]|c->r[30]; // 8008806C
  c->r[30]=c->r[30]+0x00000004u; // 80088070
  c->r[31]=R32(c->r[4]+0x00000000u); // 80088074
  c->lr=0x8008807Cu; f_80086D90(c); // 80088078
  c->r[31]=c->r[31]-c->r[3]; // 8008807C
  c->r[3]=c->r[30]|c->r[30]; // 80088080
  c->r[30]=c->r[30]+0x00000004u; // 80088084
  c->lr=0x8008808Cu; f_80086D90(c); // 80088088
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8008808C
  c->r[0]=c->r[31]+0x00000001u; // 80088090
  c->r[3]=addc(c,~c->r[5],c->r[31],1); // 80088094
  c->r[4]=addc(c,c->r[5],0,c->xer_ca); // 80088098
  c->r[4]=c->r[5]-c->r[4]; // 8008809C
  c->r[3]=c->r[29]|c->r[29]; // 800880A0
  c->r[31]=c->r[0]&~c->r[4]; // 800880A4
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 800880A8
  c->r[4]=c->r[30]+c->r[0]; // 800880AC
  c->lr=0x800880B4u; f_80086F20(c); // 800880B0
  W32(c->r[29]+0x00000004u,c->r[3]); // 800880B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800880B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800880BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800880C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800880C4
  c->lr=c->r[0]; // 800880C8
  c->r[1]=c->r[1]+0x00000020u; // 800880CC
  return; // 800880D0
}

// fn_800880E0
void f_800880E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800880E0
  c->r[0]=c->lr; // 800880E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800880E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800880EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800880F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800880F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800880F8
  c->r[28]=c->r[3]|c->r[3]; // 800880FC
  c->r[31]=R32(c->r[3]+0x00000008u); // 80088100
  c->r[3]=c->r[31]|c->r[31]; // 80088104
  c->r[31]=c->r[31]+0x00000001u; // 80088108
  c->lr=0x80088110u; f_80086D60(c); // 8008810C
  c->r[4]=R32(c->r[28]+0x00000010u); // 80088110
  c->r[30]=c->r[3]|c->r[3]; // 80088114
  c->r[0]=c->r[4]+0x00000004u; // 80088118
  W32(c->r[28]+0x00000010u,c->r[0]); // 8008811C
  c->r[29]=R32(c->r[4]+0x00000000u); // 80088120
  goto L_80088140; // 80088124
L_80088128:;
  c->r[3]=c->r[31]|c->r[31]; // 80088128
  c->lr=0x80088130u; f_80086D90(c); // 8008812C
  cmpu(c,0,c->r[29],c->r[3]); // 80088130
  c->r[31]=c->r[31]+0x00000004u; // 80088134
  if (crb(c,2)) { goto L_8008814C; } // 80088138
  c->r[31]=c->r[31]+0x00000002u; // 8008813C
L_80088140:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; cr0(c,c->r[0]); // 80088140
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 80088144
  if (!crb(c,2)) { IRQCHK(c); goto L_80088128; } // 80088148
L_8008814C:;
  c->r[3]=c->r[28]|c->r[28]; // 8008814C
  c->r[4]=c->r[31]|c->r[31]; // 80088150
  c->lr=0x80088158u; f_80086F20(c); // 80088154
  W32(c->r[28]+0x00000004u,c->r[3]); // 80088158
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8008815C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80088160
  c->r[29]=R32(c->r[1]+0x00000014u); // 80088164
  c->r[28]=R32(c->r[1]+0x00000010u); // 80088168
  c->r[0]=R32(c->r[1]+0x00000024u); // 8008816C
  c->lr=c->r[0]; // 80088170
  c->r[1]=c->r[1]+0x00000020u; // 80088174
  return; // 80088178
}

// fn_80088180
void f_80088180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088180
  c->r[0]=c->lr; // 80088184
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008818C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80088190
  c->r[30]=c->r[3]|c->r[3]; // 80088194
  c->r[4]=R32(c->r[3]+0x00000008u); // 80088198
  c->r[3]=c->r[4]+0x00000002u; // 8008819C
  c->lr=0x800881A4u; f_80086D70(c); // 800881A0
  c->r[31]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800881A4
  c->r[3]=R32(c->r[30]+0x00000008u); // 800881A8
  c->lr=0x800881B0u; f_80086D70(c); // 800881AC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800881B0
  c->r[3]=c->r[30]|c->r[30]; // 800881B4
  c->r[5]=c->r[31]|c->r[31]; // 800881B8
  c->lr=0x800881C0u; f_80087560(c); // 800881BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800881C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800881C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800881C8
  c->lr=c->r[0]; // 800881CC
  c->r[1]=c->r[1]+0x00000010u; // 800881D0
  return; // 800881D4
}

// fn_800881E0
void f_800881E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800881E0
  c->r[0]=c->lr; // 800881E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800881E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800881EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800881F0
  c->r[30]=c->r[3]|c->r[3]; // 800881F4
  c->r[4]=R32(c->r[3]+0x00000010u); // 800881F8
  c->r[0]=c->r[4]+0x00000004u; // 800881FC
  W32(c->r[3]+0x00000010u,c->r[0]); // 80088200
  c->r[3]=R32(c->r[3]+0x00000008u); // 80088204
  c->r[0]=R32(c->r[4]+0x00000000u); // 80088208
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 8008820C
  c->lr=0x80088214u; f_80086D70(c); // 80088210
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80088214
  c->r[3]=c->r[30]|c->r[30]; // 80088218
  c->r[4]=c->r[31]|c->r[31]; // 8008821C
  c->lr=0x80088224u; f_80087560(c); // 80088220
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80088228
  c->r[30]=R32(c->r[1]+0x00000008u); // 8008822C
  c->lr=c->r[0]; // 80088230
  c->r[1]=c->r[1]+0x00000010u; // 80088234
  return; // 80088238
}

// fn_80088240
void f_80088240(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 80088240
  W8(c->r[3]+0x00000000u,c->r[0]); // 80088244
  return; // 80088248
}

// fn_80088250
void f_80088250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088250
  c->r[0]=c->lr; // 80088254
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008825C
  c->r[31]=c->r[3]|c->r[3]; // 80088260
  c->r[3]=R32(c->r[3]+0x00000008u); // 80088264
  c->lr=0x8008826Cu; f_80086D60(c); // 80088268
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8008826C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80088270
  c->r[0]=c->r[0]+c->r[3]; // 80088274
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80088278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008827C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088280
  c->lr=c->r[0]; // 80088284
  c->r[1]=c->r[1]+0x00000010u; // 80088288
  return; // 8008828C
}

// fn_80088290
void f_80088290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088290
  c->r[0]=c->lr; // 80088294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008829C
  c->r[31]=c->r[3]|c->r[3]; // 800882A0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800882A4
  c->lr=0x800882ACu; f_80086D60(c); // 800882A8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800882AC
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800882B0
  c->r[0]=c->r[0]-c->r[3]; // 800882B4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800882B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800882BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800882C0
  c->lr=c->r[0]; // 800882C4
  c->r[1]=c->r[1]+0x00000010u; // 800882C8
  return; // 800882CC
}

// fn_800882D0
void f_800882D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800882D0
  c->r[0]=c->lr; // 800882D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800882D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800882DC
  c->r[31]=c->r[3]|c->r[3]; // 800882E0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800882E4
  c->lr=0x800882ECu; f_80086D60(c); // 800882E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800882EC
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800882F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800882F4
  c->r[5]=R32(c->r[13]+0xFFFFB8E8u); // 800882F8
  c->r[0]=c->r[4]+c->r[0]; // 800882FC
  c->r[3]=c->r[31]|c->r[31]; // 80088300
  c->r[4]=c->r[0]-c->r[5]; // 80088304
  c->lr=0x8008830Cu; f_800873F0(c); // 80088308
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008830C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80088310
  c->lr=c->r[0]; // 80088314
  c->r[1]=c->r[1]+0x00000010u; // 80088318
  return; // 8008831C
}

// fn_80088320
void f_80088320(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 80088320
  c->r[0]=c->r[4]+0x00000004u; // 80088324
  W32(c->r[3]+0x00000010u,c->r[0]); // 80088328
  c->r[0]=R32(c->r[4]+0x00000000u); // 8008832C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80088330
  f_800873A0(c); return; // 80088334
}

// fn_80088340
void f_80088340(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 80088340
  c->r[0]=c->r[4]+0x00000004u; // 80088344
  W32(c->r[3]+0x00000010u,c->r[0]); // 80088348
  c->r[0]=R32(c->r[4]+0x00000000u); // 8008834C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80088350
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80088354
  f_800873C0(c); return; // 80088358
}

// fn_80088360
void f_80088360(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 80088360
  c->r[0]=c->r[4]+0x00000004u; // 80088364
  W32(c->r[3]+0x00000010u,c->r[0]); // 80088368
  c->r[4]=R32(c->r[4]+0x00000000u); // 8008836C
  f_800873F0(c); return; // 80088370
}

// fn_80088380
void f_80088380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088380
  c->r[0]=c->lr; // 80088384
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008838C
  c->r[31]=c->r[3]|c->r[3]; // 80088390
  c->r[3]=R32(c->r[3]+0x00000008u); // 80088394
  c->lr=0x8008839Cu; f_80086D60(c); // 80088398
  c->r[0]=c->r[3]|c->r[3]; // 8008839C
  c->r[3]=c->r[31]|c->r[31]; // 800883A0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800883A4
  c->lr=0x800883ACu; f_800873A0(c); // 800883A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800883AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800883B0
  c->lr=c->r[0]; // 800883B4
  c->r[1]=c->r[1]+0x00000010u; // 800883B8
  return; // 800883BC
}

// fn_800883C0
void f_800883C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800883C0
  c->r[0]=c->lr; // 800883C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800883C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800883CC
  c->r[31]=c->r[3]|c->r[3]; // 800883D0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800883D4
  c->lr=0x800883DCu; f_80086D70(c); // 800883D8
  c->r[0]=c->r[3]|c->r[3]; // 800883DC
  c->r[3]=c->r[31]|c->r[31]; // 800883E0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800883E4
  c->lr=0x800883ECu; f_800873C0(c); // 800883E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800883EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800883F0
  c->lr=c->r[0]; // 800883F4
  c->r[1]=c->r[1]+0x00000010u; // 800883F8
  return; // 800883FC
}

// fn_80088400
void f_80088400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088400
  c->r[0]=c->lr; // 80088404
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008840C
  c->r[31]=c->r[3]|c->r[3]; // 80088410
  c->r[3]=R32(c->r[3]+0x00000008u); // 80088414
  c->lr=0x8008841Cu; f_80086D90(c); // 80088418
  c->r[4]=c->r[3]|c->r[3]; // 8008841C
  c->r[3]=c->r[31]|c->r[31]; // 80088420
  c->lr=0x80088428u; f_800873F0(c); // 80088424
  c->r[0]=R32(c->r[1]+0x00000014u); // 80088428
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8008842C
  c->lr=c->r[0]; // 80088430
  c->r[1]=c->r[1]+0x00000010u; // 80088434
  return; // 80088438
}

// fn_80088440
void f_80088440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088440
  c->r[0]=c->lr; // 80088444
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008844C
  c->r[31]=c->r[3]|c->r[3]; // 80088450
  c->r[3]=R32(c->r[3]+0x00000008u); // 80088454
  c->lr=0x8008845Cu; f_80086DC0(c); // 80088458
  c->r[0]=c->r[3]|c->r[3]; // 8008845C
  c->r[3]=c->r[31]|c->r[31]; // 80088460
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80088464
  c->lr=0x8008846Cu; f_800873A0(c); // 80088468
  c->r[0]=R32(c->r[1]+0x00000014u); // 8008846C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80088470
  c->lr=c->r[0]; // 80088474
  c->r[1]=c->r[1]+0x00000010u; // 80088478
  return; // 8008847C
}

// fn_80088480
void f_80088480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80088480
  c->r[0]=c->lr; // 80088484
  W32(c->r[1]+0x00000014u,c->r[0]); // 80088488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8008848C
  c->r[31]=c->r[3]|c->r[3]; // 80088490
  c->r[3]=R32(c->r[3]+0x00000008u); // 80088494
  c->lr=0x8008849Cu; f_80086DF0(c); // 80088498
  c->r[0]=c->r[3]|c->r[3]; // 8008849C
  c->r[3]=c->r[31]|c->r[31]; // 800884A0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800884A4
  c->lr=0x800884ACu; f_800873C0(c); // 800884A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800884AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800884B0
  c->lr=c->r[0]; // 800884B4
  c->r[1]=c->r[1]+0x00000010u; // 800884B8
  return; // 800884BC
}

// fn_800884C0
void f_800884C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800884C0
  c->r[0]=c->lr; // 800884C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800884C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800884CC
  c->r[31]=c->r[3]|c->r[3]; // 800884D0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800884D4
  c->lr=0x800884DCu; f_80086E20(c); // 800884D8
  c->r[4]=c->r[3]|c->r[3]; // 800884DC
  c->r[3]=c->r[31]|c->r[31]; // 800884E0
  c->lr=0x800884E8u; f_800873F0(c); // 800884E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800884E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800884EC
  c->lr=c->r[0]; // 800884F0
  c->r[1]=c->r[1]+0x00000010u; // 800884F4
  return; // 800884F8
}

// fn_80088500
void f_80088500(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 80088500
  c->r[5]=R32(c->r[4]+0x00000000u); // 80088504
  c->r[0]=R32(c->r[4]+0x00000004u); // 80088508
  W32(c->r[4]+0x00000000u,c->r[0]); // 8008850C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80088510
  W32(c->r[3]+0x00000004u,c->r[5]); // 80088514
  return; // 80088518
}

// fn_80088520
void f_80088520(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 80088520
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 80088524
  W32(c->r[3]+0x00000010u,c->r[4]); // 80088528
  c->r[0]=R32(c->r[4]+0x00000004u); // 8008852C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80088530
  return; // 80088534
}

// fn_80088540
void f_80088540(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 80088540
  c->r[0]=c->r[4]+0x00000004u; // 80088544
  W32(c->r[3]+0x00000010u,c->r[0]); // 80088548
  return; // 8008854C
}

