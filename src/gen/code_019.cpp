#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801BC770
void f_801BC770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC770
  c->r[0]=c->lr; // 801BC774
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801BC778
  c->r[11]=c->r[1]+0x00000050u; // 801BC77C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801BC780
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801BC784
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 801BC788
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 801BC78C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 801BC790
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 801BC794
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 801BC798
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 801BC79C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 801BC7A0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 801BC7A4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 801BC7A8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 801BC7AC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[25]);} // 801BC7B0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,25,ea,0,0);} // 801BC7B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[24]);} // 801BC7B8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,24,ea,0,0);} // 801BC7BC
  c->lr=0x801BC7C4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC7C0
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BC7C4
  c->r[0]=0u+0x43300000u; // 801BC7C8
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC7CC
  c->r[31]=c->r[3]|c->r[3]; // 801BC7D0
  c->r[6]=R32(c->r[3]+0x00000010u); // 801BC7D4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801BC7D8
  c->r[5]=R32(c->r[3]+0x000000A8u); // 801BC7DC
  {uint32_t ea=c->r[6]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC7E0
  c->r[4]=R32(c->r[3]+0x000000ACu); // 801BC7E4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801BC7E8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801BC7EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801BC7F0
  W32(c->r[1]+0x00000030u,c->r[0]); // 801BC7F4
  if (crb(c,0)) { goto L_801BC804; } // 801BC7F8
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC7FC
  goto L_801BC840; // 801BC800
L_801BC804:;
  c->r[0]=c->r[4]^0x80000000u; // 801BC804
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC808
  c->r[0]=c->r[5]^0x80000000u; // 801BC80C
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BC810
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801BC814
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC818
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC81C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BC820
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC824
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BC828
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801BC82C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BC830
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BC834
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BC838
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801BC83C
L_801BC840:;
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 801BC840
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801BC844
  c->r[0]=R32(c->r[3]+0x00000070u); // 801BC848
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801BC84C
  if (crb(c,0)) { goto L_801BC85C; } // 801BC850
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC854
  goto L_801BC898; // 801BC858
L_801BC85C:;
  c->r[0]=c->r[0]^0x80000000u; // 801BC85C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC860
  c->r[0]=c->r[4]^0x80000000u; // 801BC864
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BC868
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801BC86C
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC870
  {uint32_t ea=c->r[3]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC874
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BC878
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC87C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BC880
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801BC884
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BC888
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BC88C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BC890
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801BC894
L_801BC898:;
  c->r[4]=R32(c->r[3]+0x0000007Cu); // 801BC898
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801BC89C
  c->r[0]=R32(c->r[3]+0x00000080u); // 801BC8A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801BC8A4
  if (crb(c,0)) { goto L_801BC8B4; } // 801BC8A8
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC8AC
  goto L_801BC8F0; // 801BC8B0
L_801BC8B4:;
  c->r[0]=c->r[0]^0x80000000u; // 801BC8B4
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BC8B8
  c->r[0]=c->r[4]^0x80000000u; // 801BC8BC
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BC8C0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801BC8C4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC8C8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC8CC
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801BC8D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BC8D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BC8D8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801BC8DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BC8E0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BC8E4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BC8E8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801BC8EC
L_801BC8F0:;
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801BC8F0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC8F4
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[28]=c->ps1[28]=RF32(ea);} // 801BC8F8
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC8FC
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 801BC900
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BC904
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC908
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801BC90C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC910
  {uint32_t ea=c->r[3]+0x00000058u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC914
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 801BC918
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC91C
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[0]); // 801BC920
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[29]=c->ps1[29]=RF32(ea);} // 801BC924
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[2]); // 801BC928
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC92C
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 801BC930
  {uint32_t ea=c->r[3]+0x00000060u; c->f[3]=c->ps1[3]=RF32(ea);} // 801BC934
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 801BC938
  c->r[28]=R8(c->r[3]+0x0000009Au); // 801BC93C
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC940
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC944
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[27]=c->ps1[27]=RF32(ea);} // 801BC948
  cmps(c,0,(int32_t)c->r[28],0); // 801BC94C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC950
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[3]); // 801BC954
  c->f[28]=c->ps1[28]=S(c->f[28]*c->f[1]); // 801BC958
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[26]=c->ps1[26]=RF32(ea);} // 801BC95C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801BC960
  {uint32_t ea=c->r[6]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC964
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[2]); // 801BC968
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801BC96C
  if (!crb(c,2)) { goto L_801BC98C; } // 801BC970
  c->r[28]=R32(c->r[6]+0x0000003Cu); // 801BC974
  {uint32_t ea=c->r[6]+0x00000040u; c->f[26]=c->ps1[26]=RF32(ea);} // 801BC978
  cmps(c,0,(int32_t)c->r[28],0); // 801BC97C
  if (!crb(c,2)) { goto L_801BC98C; } // 801BC980
  c->r[28]=R32(c->r[3]+0x0000004Cu); // 801BC984
  {uint32_t ea=c->r[3]+0x00000048u; c->f[26]=c->ps1[26]=RF32(ea);} // 801BC988
L_801BC98C:;
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[25]=c->ps1[25]=RF32(ea);} // 801BC98C
  c->r[29]=c->r[31]|c->r[31]; // 801BC990
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC994
  c->r[30]=c->r[1]+0x00000018u; // 801BC998
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC99C
  c->r[26]=0u+0x00000000u; // 801BC9A0
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[0]); // 801BC9A4
  c->r[27]=R32(c->r[3]+0x000000C8u); // 801BC9A8
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[24]=c->ps1[24]=RF32(ea);} // 801BC9AC
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[1]); // 801BC9B0
L_801BC9B4:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[24]);} // 801BC9B4
  c->r[4]=c->r[26]|c->r[26]; // 801BC9B8
  c->r[3]=R32(c->r[31]+0x00000010u); // 801BC9BC
  c->lr=0x801BC9C4u; f_801D6330(c); // 801BC9C0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BC9C4
  c->r[26]=c->r[26]+0x00000001u; // 801BC9C8
  {uint32_t ea=c->r[29]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC9CC
  cmps(c,0,(int32_t)c->r[26],4); // 801BC9D0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801BC9D4
  c->r[29]=c->r[29]+0x00000004u; // 801BC9D8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801BC9DC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801BC9E0
  c->r[30]=c->r[30]+0x00000004u; // 801BC9E4
  if (crb(c,0)) { IRQCHK(c); goto L_801BC9B4; } // 801BC9E8
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BC9EC
  c->r[3]=c->r[31]|c->r[31]; // 801BC9F0
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BC9F4
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BC9F8
  c->r[4]=R32(c->r[31]+0x00000010u); // 801BC9FC
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 801BCA00
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCA04
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801BCA08
  {uint32_t ea=c->r[4]+0x00000058u; c->f[5]=c->ps1[5]=RF32(ea);} // 801BCA0C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[2]); // 801BCA10
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BCA14
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BCA18
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[2]); // 801BCA1C
  {uint32_t ea=c->r[4]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BCA20
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[24]=c->ps1[24]=RF32(ea);} // 801BCA24
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 801BCA28
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BCA2C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 801BCA30
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCA34
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 801BCA38
  {uint32_t ea=c->r[4]+0x00000054u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BCA3C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 801BCA40
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BCA44
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 801BCA48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801BCA4C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801BCA50
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801BCA54
  c->ctr=c->r[12]; // 801BCA58
  if (true) { c->lr=0x801BCA60u; dispatch(c,c->ctr); } // 801BCA5C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[31]);} // 801BCA60
  c->f[1]=c->f[26]; // 801BCA64
  c->r[26]=c->r[3]|c->r[3]; // 801BCA68
  c->r[4]=c->r[28]|c->r[28]; // 801BCA6C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[30]);} // 801BCA70
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[29]);} // 801BCA74
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[28]);} // 801BCA78
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[27]);} // 801BCA7C
  c->lr=0x801BCA84u; f_801BB620(c); // 801BCA80
  W32(c->r[26]+0x00000020u,c->r[27]); // 801BCA84
  c->r[31]=c->r[1]+0x00000018u; // 801BCA88
  c->r[27]=0u+0x00000000u; // 801BCA8C
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[25]);} // 801BCA90
L_801BCA94:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCA94
  c->r[3]=c->r[26]|c->r[26]; // 801BCA98
  c->r[4]=c->r[27]|c->r[27]; // 801BCA9C
  c->lr=0x801BCAA4u; f_801BB790(c); // 801BCAA0
  c->r[27]=c->r[27]+0x00000001u; // 801BCAA4
  c->r[31]=c->r[31]+0x00000004u; // 801BCAA8
  cmps(c,0,(int32_t)c->r[27],4); // 801BCAAC
  if (crb(c,0)) { IRQCHK(c); goto L_801BCA94; } // 801BCAB0
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[24]);} // 801BCAB4
  c->r[31]=c->r[1]+0x00000008u; // 801BCAB8
  c->r[27]=0u+0x00000000u; // 801BCABC
L_801BCAC0:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BCAC0
  c->r[3]=c->r[26]|c->r[26]; // 801BCAC4
  c->r[4]=c->r[27]|c->r[27]; // 801BCAC8
  c->lr=0x801BCAD0u; f_801BB510(c); // 801BCACC
  c->r[27]=c->r[27]+0x00000001u; // 801BCAD0
  c->r[31]=c->r[31]+0x00000004u; // 801BCAD4
  cmps(c,0,(int32_t)c->r[27],3); // 801BCAD8
  if (crb(c,0)) { IRQCHK(c); goto L_801BCAC0; } // 801BCADC
  c->r[11]=c->r[1]+0x00000050u; // 801BCAE0
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801BCAE4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801BCAE8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 801BCAEC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 801BCAF0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 801BCAF4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 801BCAF8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 801BCAFC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 801BCB00
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 801BCB04
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 801BCB08
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 801BCB0C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 801BCB10
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,25,ea,0,0);} // 801BCB14
  {uint32_t ea=c->r[1]+0x00000060u; c->f[25]=RF64(ea);} // 801BCB18
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,24,ea,0,0);} // 801BCB1C
  {uint32_t ea=c->r[1]+0x00000050u; c->f[24]=RF64(ea);} // 801BCB20
  c->lr=0x801BCB28u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BCB24
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801BCB28
  c->lr=c->r[0]; // 801BCB2C
  c->r[1]=c->r[1]+0x000000D0u; // 801BCB30
  return; // 801BCB34
}

// fn_801BCB40
void f_801BCB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCB40
  c->r[0]=c->lr; // 801BCB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCB48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BCB4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BCB50
  c->r[30]=c->r[3]|c->r[3]; // 801BCB54
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BCB58
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BCB5C
  c->ctr=c->r[12]; // 801BCB60
  if (true) { c->lr=0x801BCB68u; dispatch(c,c->ctr); } // 801BCB64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BCB68
  c->r[31]=c->r[3]|c->r[3]; // 801BCB6C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801BCB70
  c->ctr=c->r[12]; // 801BCB74
  if (true) { c->lr=0x801BCB7Cu; dispatch(c,c->ctr); } // 801BCB78
  cmps(c,0,(int32_t)c->r[3],0); // 801BCB7C
  if (crb(c,2)) { goto L_801BCBAC; } // 801BCB80
  c->r[0]=R8(c->r[30]+0x00000087u); // 801BCB84
  cmps(c,0,(int32_t)c->r[0],0); // 801BCB88
  if (crb(c,2)) { goto L_801BCB98; } // 801BCB8C
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BCB90
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 801BCB94
L_801BCB98:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801BCB98
  c->r[3]=c->r[31]|c->r[31]; // 801BCB9C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BCBA0
  c->ctr=c->r[12]; // 801BCBA4
  if (true) { c->lr=0x801BCBACu; dispatch(c,c->ctr); } // 801BCBA8
L_801BCBAC:;
  c->r[31]=0u+0xFFFFFFFFu; // 801BCBAC
  W32(c->r[30]+0x0000009Cu,c->r[31]); // 801BCBB0
  c->r[3]=c->r[30]|c->r[30]; // 801BCBB4
  c->r[12]=R32(c->r[30]+0x00000000u); // 801BCBB8
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BCBBC
  c->ctr=c->r[12]; // 801BCBC0
  if (true) { c->lr=0x801BCBC8u; dispatch(c,c->ctr); } // 801BCBC4
  W32(c->r[3]+0x000000B0u,c->r[31]); // 801BCBC8
  c->r[3]=R32(c->r[30]+0x00000008u); // 801BCBCC
  cmps(c,0,(int32_t)c->r[3],0); // 801BCBD0
  if (crb(c,2)) { goto L_801BCBDC; } // 801BCBD4
  c->lr=0x801BCBDCu; f_801D5EA0(c); // 801BCBD8
L_801BCBDC:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801BCBDC
  cmps(c,0,(int32_t)c->r[3],0); // 801BCBE0
  if (crb(c,2)) { goto L_801BCBEC; } // 801BCBE4
  c->lr=0x801BCBECu; f_801D5EA0(c); // 801BCBE8
L_801BCBEC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801BCBEC
  c->r[3]=c->r[30]|c->r[30]; // 801BCBF0
  c->r[12]=R32(c->r[12]+0x00000018u); // 801BCBF4
  c->ctr=c->r[12]; // 801BCBF8
  if (true) { c->lr=0x801BCC00u; dispatch(c,c->ctr); } // 801BCBFC
  cmps(c,0,(int32_t)c->r[3],0); // 801BCC00
  if (crb(c,2)) { goto L_801BCC1C; } // 801BCC04
  c->r[12]=R32(c->r[30]+0x00000000u); // 801BCC08
  c->r[3]=c->r[30]|c->r[30]; // 801BCC0C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801BCC10
  c->ctr=c->r[12]; // 801BCC14
  if (true) { c->lr=0x801BCC1Cu; dispatch(c,c->ctr); } // 801BCC18
L_801BCC1C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801BCC1C
  cmps(c,0,(int32_t)c->r[0],0); // 801BCC20
  if (crb(c,2)) { goto L_801BCC34; } // 801BCC24
  c->r[3]=R32(c->r[30]+0x00000010u); // 801BCC28
  c->r[4]=c->r[30]|c->r[30]; // 801BCC2C
  c->lr=0x801BCC34u; f_801D70B0(c); // 801BCC30
L_801BCC34:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801BCC34
  cmps(c,0,(int32_t)c->r[3],0); // 801BCC38
  if (crb(c,2)) { goto L_801BCC48; } // 801BCC3C
  c->r[4]=c->r[30]|c->r[30]; // 801BCC40
  c->lr=0x801BCC48u; f_801D6AC0(c); // 801BCC44
L_801BCC48:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 801BCC48
  cmps(c,0,(int32_t)c->r[3],0); // 801BCC4C
  if (crb(c,2)) { goto L_801BCC5C; } // 801BCC50
  c->r[4]=c->r[30]|c->r[30]; // 801BCC54
  c->lr=0x801BCC5Cu; f_801C0980(c); // 801BCC58
L_801BCC5C:;
  c->r[3]=R32(c->r[30]+0x00000024u); // 801BCC5C
  cmps(c,0,(int32_t)c->r[3],0); // 801BCC60
  if (crb(c,2)) { goto L_801BCC88; } // 801BCC64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BCC68
  c->r[5]=c->r[30]|c->r[30]; // 801BCC6C
  c->r[4]=R32(c->r[30]+0x00000028u); // 801BCC70
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BCC74
  c->ctr=c->r[12]; // 801BCC78
  if (true) { c->lr=0x801BCC80u; dispatch(c,c->ctr); } // 801BCC7C
  c->r[0]=0u+0x00000000u; // 801BCC80
  W32(c->r[30]+0x00000028u,c->r[0]); // 801BCC84
L_801BCC88:;
  c->r[0]=0u+0x00000000u; // 801BCC88
  W8(c->r[30]+0x00000085u,c->r[0]); // 801BCC8C
  W8(c->r[30]+0x00000087u,c->r[0]); // 801BCC90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BCC94
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BCC98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BCC9C
  c->lr=c->r[0]; // 801BCCA0
  c->r[1]=c->r[1]+0x00000010u; // 801BCCA4
  return; // 801BCCA8
}

// fn_801BCCB0
void f_801BCCB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCCB0
  c->r[0]=c->lr; // 801BCCB4
  cmps(c,0,(int32_t)c->r[4],0); // 801BCCB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCCBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCCC0
  c->r[31]=0u+0x803A0000u; // 801BCCC4
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BCCC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCCCC
  c->r[30]=c->r[4]|c->r[4]; // 801BCCD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCCD4
  c->r[29]=c->r[3]|c->r[3]; // 801BCCD8
  if (!crb(c,2)) { goto L_801BCCF4; } // 801BCCDC
  c->r[3]=c->r[31]+0x00000000u; // 801BCCE0
  c->r[5]=c->r[31]+0x00000074u; // 801BCCE4
  c->r[4]=0u+0x0000026Fu; // 801BCCE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCCEC
  c->lr=0x801BCCF4u; f_80212260(c); // 801BCCF0
L_801BCCF4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801BCCF4
  cmps(c,0,(int32_t)c->r[0],0); // 801BCCF8
  if (crb(c,2)) { goto L_801BCD14; } // 801BCCFC
  c->r[3]=c->r[31]+0x00000000u; // 801BCD00
  c->r[5]=c->r[31]+0x0000009Cu; // 801BCD04
  c->r[4]=0u+0x00000270u; // 801BCD08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCD0C
  c->lr=0x801BCD14u; f_80212260(c); // 801BCD10
L_801BCD14:;
  W32(c->r[29]+0x00000004u,c->r[30]); // 801BCD14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCD18
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCD1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BCD20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCD24
  c->lr=c->r[0]; // 801BCD28
  c->r[1]=c->r[1]+0x00000020u; // 801BCD2C
  return; // 801BCD30
}

// fn_801BCD40
void f_801BCD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCD40
  c->r[0]=c->lr; // 801BCD44
  cmps(c,0,(int32_t)c->r[4],0); // 801BCD48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCD4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCD50
  c->r[31]=0u+0x803A0000u; // 801BCD54
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BCD58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCD5C
  c->r[30]=c->r[4]|c->r[4]; // 801BCD60
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCD64
  c->r[29]=c->r[3]|c->r[3]; // 801BCD68
  if (!crb(c,2)) { goto L_801BCD84; } // 801BCD6C
  c->r[3]=c->r[31]+0x00000000u; // 801BCD70
  c->r[5]=c->r[31]+0x00000074u; // 801BCD74
  c->r[4]=0u+0x00000280u; // 801BCD78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCD7C
  c->lr=0x801BCD84u; f_80212260(c); // 801BCD80
L_801BCD84:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801BCD84
  cmpu(c,0,c->r[30],c->r[0]); // 801BCD88
  if (crb(c,2)) { goto L_801BCDA4; } // 801BCD8C
  c->r[3]=c->r[31]+0x00000000u; // 801BCD90
  c->r[5]=c->r[31]+0x000000C8u; // 801BCD94
  c->r[4]=0u+0x00000281u; // 801BCD98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCD9C
  c->lr=0x801BCDA4u; f_80212260(c); // 801BCDA0
L_801BCDA4:;
  c->r[0]=0u+0x00000000u; // 801BCDA4
  W32(c->r[29]+0x00000004u,c->r[0]); // 801BCDA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCDAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCDB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BCDB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCDB8
  c->lr=c->r[0]; // 801BCDBC
  c->r[1]=c->r[1]+0x00000020u; // 801BCDC0
  return; // 801BCDC4
}

// fn_801BCDD0
void f_801BCDD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCDD0
  c->r[0]=c->lr; // 801BCDD4
  cmps(c,0,(int32_t)c->r[4],0); // 801BCDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCDDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCDE0
  c->r[31]=0u+0x803A0000u; // 801BCDE4
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BCDE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCDEC
  c->r[30]=c->r[4]|c->r[4]; // 801BCDF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCDF4
  c->r[29]=c->r[3]|c->r[3]; // 801BCDF8
  if (!crb(c,2)) { goto L_801BCE14; } // 801BCDFC
  c->r[3]=c->r[31]+0x00000000u; // 801BCE00
  c->r[5]=c->r[31]+0x000000F4u; // 801BCE04
  c->r[4]=0u+0x00000292u; // 801BCE08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCE0C
  c->lr=0x801BCE14u; f_80212260(c); // 801BCE10
L_801BCE14:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801BCE14
  cmps(c,0,(int32_t)c->r[0],0); // 801BCE18
  if (crb(c,2)) { goto L_801BCE34; } // 801BCE1C
  c->r[3]=c->r[31]+0x00000000u; // 801BCE20
  c->r[5]=c->r[31]+0x0000011Cu; // 801BCE24
  c->r[4]=0u+0x00000293u; // 801BCE28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCE2C
  c->lr=0x801BCE34u; f_80212260(c); // 801BCE30
L_801BCE34:;
  W32(c->r[29]+0x00000010u,c->r[30]); // 801BCE34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCE38
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCE3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BCE40
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCE44
  c->lr=c->r[0]; // 801BCE48
  c->r[1]=c->r[1]+0x00000020u; // 801BCE4C
  return; // 801BCE50
}

// fn_801BCE60
void f_801BCE60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCE60
  c->r[0]=c->lr; // 801BCE64
  cmps(c,0,(int32_t)c->r[4],0); // 801BCE68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCE6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCE70
  c->r[31]=0u+0x803A0000u; // 801BCE74
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BCE78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCE7C
  c->r[30]=c->r[4]|c->r[4]; // 801BCE80
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCE84
  c->r[29]=c->r[3]|c->r[3]; // 801BCE88
  if (!crb(c,2)) { goto L_801BCEA4; } // 801BCE8C
  c->r[3]=c->r[31]+0x00000000u; // 801BCE90
  c->r[5]=c->r[31]+0x000000F4u; // 801BCE94
  c->r[4]=0u+0x000002A3u; // 801BCE98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCE9C
  c->lr=0x801BCEA4u; f_80212260(c); // 801BCEA0
L_801BCEA4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801BCEA4
  cmpu(c,0,c->r[30],c->r[0]); // 801BCEA8
  if (crb(c,2)) { goto L_801BCEC4; } // 801BCEAC
  c->r[3]=c->r[31]+0x00000000u; // 801BCEB0
  c->r[5]=c->r[31]+0x00000148u; // 801BCEB4
  c->r[4]=0u+0x000002A4u; // 801BCEB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCEBC
  c->lr=0x801BCEC4u; f_80212260(c); // 801BCEC0
L_801BCEC4:;
  c->r[0]=0u+0x00000000u; // 801BCEC4
  W32(c->r[29]+0x00000010u,c->r[0]); // 801BCEC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCECC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCED0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BCED4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCED8
  c->lr=c->r[0]; // 801BCEDC
  c->r[1]=c->r[1]+0x00000020u; // 801BCEE0
  return; // 801BCEE4
}

// fn_801BCEF0
void f_801BCEF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCEF0
  c->r[0]=c->lr; // 801BCEF4
  cmps(c,0,(int32_t)c->r[4],0); // 801BCEF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCEFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCF00
  c->r[31]=0u+0x803A0000u; // 801BCF04
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BCF08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCF0C
  c->r[30]=c->r[4]|c->r[4]; // 801BCF10
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCF14
  c->r[29]=c->r[3]|c->r[3]; // 801BCF18
  if (!crb(c,2)) { goto L_801BCF34; } // 801BCF1C
  c->r[3]=c->r[31]+0x00000000u; // 801BCF20
  c->r[5]=c->r[31]+0x00000178u; // 801BCF24
  c->r[4]=0u+0x000002B5u; // 801BCF28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCF2C
  c->lr=0x801BCF34u; f_80212260(c); // 801BCF30
L_801BCF34:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801BCF34
  cmps(c,0,(int32_t)c->r[0],0); // 801BCF38
  if (crb(c,2)) { goto L_801BCF54; } // 801BCF3C
  c->r[3]=c->r[31]+0x00000000u; // 801BCF40
  c->r[5]=c->r[31]+0x000001A0u; // 801BCF44
  c->r[4]=0u+0x000002B6u; // 801BCF48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCF4C
  c->lr=0x801BCF54u; f_80212260(c); // 801BCF50
L_801BCF54:;
  W32(c->r[29]+0x00000014u,c->r[30]); // 801BCF54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCF58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCF5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BCF60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCF64
  c->lr=c->r[0]; // 801BCF68
  c->r[1]=c->r[1]+0x00000020u; // 801BCF6C
  return; // 801BCF70
}

// fn_801BCF80
void f_801BCF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCF80
  c->r[0]=c->lr; // 801BCF84
  cmps(c,0,(int32_t)c->r[4],0); // 801BCF88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCF8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCF90
  c->r[31]=0u+0x803A0000u; // 801BCF94
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BCF98
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCF9C
  c->r[30]=c->r[4]|c->r[4]; // 801BCFA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCFA4
  c->r[29]=c->r[3]|c->r[3]; // 801BCFA8
  if (!crb(c,2)) { goto L_801BCFC4; } // 801BCFAC
  c->r[3]=c->r[31]+0x00000000u; // 801BCFB0
  c->r[5]=c->r[31]+0x00000178u; // 801BCFB4
  c->r[4]=0u+0x000002C6u; // 801BCFB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCFBC
  c->lr=0x801BCFC4u; f_80212260(c); // 801BCFC0
L_801BCFC4:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 801BCFC4
  cmpu(c,0,c->r[30],c->r[0]); // 801BCFC8
  if (crb(c,2)) { goto L_801BCFE4; } // 801BCFCC
  c->r[3]=c->r[31]+0x00000000u; // 801BCFD0
  c->r[5]=c->r[31]+0x000001CCu; // 801BCFD4
  c->r[4]=0u+0x000002C7u; // 801BCFD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BCFDC
  c->lr=0x801BCFE4u; f_80212260(c); // 801BCFE0
L_801BCFE4:;
  c->r[0]=0u+0x00000000u; // 801BCFE4
  W32(c->r[29]+0x00000014u,c->r[0]); // 801BCFE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCFEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCFF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BCFF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCFF8
  c->lr=c->r[0]; // 801BCFFC
  c->r[1]=c->r[1]+0x00000020u; // 801BD000
  return; // 801BD004
}

// fn_801BD010
void f_801BD010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD010
  c->r[0]=c->lr; // 801BD014
  cmps(c,0,(int32_t)c->r[4],0); // 801BD018
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD01C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD020
  c->r[31]=0u+0x803A0000u; // 801BD024
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BD028
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD02C
  c->r[30]=c->r[4]|c->r[4]; // 801BD030
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BD034
  c->r[29]=c->r[3]|c->r[3]; // 801BD038
  if (!crb(c,2)) { goto L_801BD054; } // 801BD03C
  c->r[3]=c->r[31]+0x00000000u; // 801BD040
  c->r[5]=c->r[31]+0x000001F8u; // 801BD044
  c->r[4]=0u+0x000002D8u; // 801BD048
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD04C
  c->lr=0x801BD054u; f_80212260(c); // 801BD050
L_801BD054:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801BD054
  cmps(c,0,(int32_t)c->r[0],0); // 801BD058
  if (crb(c,2)) { goto L_801BD074; } // 801BD05C
  c->r[3]=c->r[31]+0x00000000u; // 801BD060
  c->r[5]=c->r[31]+0x00000224u; // 801BD064
  c->r[4]=0u+0x000002D9u; // 801BD068
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD06C
  c->lr=0x801BD074u; f_80212260(c); // 801BD070
L_801BD074:;
  W32(c->r[29]+0x00000018u,c->r[30]); // 801BD074
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD078
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD07C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD080
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD084
  c->lr=c->r[0]; // 801BD088
  c->r[1]=c->r[1]+0x00000020u; // 801BD08C
  return; // 801BD090
}

// fn_801BD0A0
void f_801BD0A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD0A0
  c->r[0]=c->lr; // 801BD0A4
  cmps(c,0,(int32_t)c->r[4],0); // 801BD0A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD0AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD0B0
  c->r[31]=0u+0x803A0000u; // 801BD0B4
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BD0B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD0BC
  c->r[30]=c->r[4]|c->r[4]; // 801BD0C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BD0C4
  c->r[29]=c->r[3]|c->r[3]; // 801BD0C8
  if (!crb(c,2)) { goto L_801BD0E4; } // 801BD0CC
  c->r[3]=c->r[31]+0x00000000u; // 801BD0D0
  c->r[5]=c->r[31]+0x000001F8u; // 801BD0D4
  c->r[4]=0u+0x000002E9u; // 801BD0D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD0DC
  c->lr=0x801BD0E4u; f_80212260(c); // 801BD0E0
L_801BD0E4:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801BD0E4
  cmpu(c,0,c->r[30],c->r[0]); // 801BD0E8
  if (crb(c,2)) { goto L_801BD104; } // 801BD0EC
  c->r[3]=c->r[31]+0x00000000u; // 801BD0F0
  c->r[5]=c->r[31]+0x00000254u; // 801BD0F4
  c->r[4]=0u+0x000002EAu; // 801BD0F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD0FC
  c->lr=0x801BD104u; f_80212260(c); // 801BD100
L_801BD104:;
  c->r[0]=0u+0x00000000u; // 801BD104
  W32(c->r[29]+0x00000018u,c->r[0]); // 801BD108
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD10C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD110
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD114
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD118
  c->lr=c->r[0]; // 801BD11C
  c->r[1]=c->r[1]+0x00000020u; // 801BD120
  return; // 801BD124
}

// fn_801BD130
void f_801BD130(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000099u); // 801BD130
  return; // 801BD134
}

// fn_801BD140
void f_801BD140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD140
  c->r[0]=c->lr; // 801BD144
  cmpu(c,0,c->r[4],0x0000007Fu); // 801BD148
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD14C
  c->r[0]=0u+0x00000000u; // 801BD150
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD154
  c->r[31]=c->r[4]|c->r[4]; // 801BD158
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BD15C
  c->r[30]=c->r[3]|c->r[3]; // 801BD160
  if (crb(c,1)) { goto L_801BD16C; } // 801BD164
  c->r[0]=0u+0x00000001u; // 801BD168
L_801BD16C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BD16C
  if (!crb(c,2)) { goto L_801BD19C; } // 801BD170
  c->r[3]=0u+0x803A0000u; // 801BD174
  c->r[5]=0u+0x803A0000u; // 801BD178
  c->r[6]=c->r[31]|c->r[31]; // 801BD17C
  c->r[4]=0u+0x00000325u; // 801BD180
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BD184
  c->r[5]=c->r[5]+0xFFFFC67Cu; // 801BD188
  c->r[7]=0u+0x00000000u; // 801BD18C
  c->r[8]=0u+0x0000007Fu; // 801BD190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD194
  c->lr=0x801BD19Cu; f_80212260(c); // 801BD198
L_801BD19C:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801BD19C
  W8(c->r[30]+0x00000098u,c->r[31]); // 801BD1A0
  cmps(c,0,(int32_t)c->r[3],0); // 801BD1A4
  if (crb(c,2)) { goto L_801BD1B4; } // 801BD1A8
  c->r[4]=c->r[30]|c->r[30]; // 801BD1AC
  c->lr=0x801BD1B4u; f_801D63B0(c); // 801BD1B0
L_801BD1B4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801BD1B4
  c->r[3]=c->r[30]|c->r[30]; // 801BD1B8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801BD1BC
  c->ctr=c->r[12]; // 801BD1C0
  if (true) { c->lr=0x801BD1C8u; dispatch(c,c->ctr); } // 801BD1C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD1C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD1CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BD1D0
  c->lr=c->r[0]; // 801BD1D4
  c->r[1]=c->r[1]+0x00000010u; // 801BD1D8
  return; // 801BD1DC
}

// fn_801BD1E0
void f_801BD1E0(Ctx* __restrict c) {
  return; // 801BD1E0
}

// fn_801BD1F0
void f_801BD1F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD1F0
  c->r[0]=c->lr; // 801BD1F4
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD1F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD1FC
  fcmp(c,0,c->f[1],c->f[0]); // 801BD200
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801BD204
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801BD208
  c->f[31]=c->f[1]; // 801BD20C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD210
  c->r[31]=c->r[3]|c->r[3]; // 801BD214
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BD218
  if (crb(c,2)) { goto L_801BD23C; } // 801BD21C
  c->r[3]=0u+0x803A0000u; // 801BD220
  c->r[5]=0u+0x803A0000u; // 801BD224
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BD228
  c->r[4]=0u+0x0000033Au; // 801BD22C
  c->r[5]=c->r[5]+0xFFFFC8F0u; // 801BD230
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD234
  c->lr=0x801BD23Cu; f_80212260(c); // 801BD238
L_801BD23C:;
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD23C
  fcmp(c,0,c->f[31],c->f[0]); // 801BD240
  if (!crb(c,0)) { goto L_801BD24C; } // 801BD244
  c->f[31]=c->f[0]; // 801BD248
L_801BD24C:;
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[31]);} // 801BD24C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801BD250
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801BD254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD258
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD25C
  c->lr=c->r[0]; // 801BD260
  c->r[1]=c->r[1]+0x00000020u; // 801BD264
  return; // 801BD268
}

// fn_801BD270
void f_801BD270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD270
  c->r[0]=c->lr; // 801BD274
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD278
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BD27C
  fcmp(c,0,c->f[1],c->f[0]); // 801BD280
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801BD284
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801BD288
  c->f[31]=c->f[1]; // 801BD28C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD290
  c->r[31]=c->r[4]|c->r[4]; // 801BD294
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD298
  c->r[30]=c->r[3]|c->r[3]; // 801BD29C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BD2A0
  if (crb(c,2)) { goto L_801BD2C4; } // 801BD2A4
  c->r[3]=0u+0x803A0000u; // 801BD2A8
  c->r[5]=0u+0x803A0000u; // 801BD2AC
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BD2B0
  c->r[4]=0u+0x0000034Au; // 801BD2B4
  c->r[5]=c->r[5]+0xFFFFC8F0u; // 801BD2B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD2BC
  c->lr=0x801BD2C4u; f_80212260(c); // 801BD2C0
L_801BD2C4:;
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD2C4
  fcmp(c,0,c->f[31],c->f[0]); // 801BD2C8
  if (!crb(c,0)) { goto L_801BD2D4; } // 801BD2CC
  c->f[31]=c->f[0]; // 801BD2D0
L_801BD2D4:;
  c->r[4]=R32(c->r[30]+0x000000A8u); // 801BD2D4
  c->r[0]=R32(c->r[30]+0x000000ACu); // 801BD2D8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801BD2DC
  if (crb(c,0)) { goto L_801BD2EC; } // 801BD2E0
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD2E4
  goto L_801BD334; // 801BD2E8
L_801BD2EC:;
  c->r[3]=0u+0x43300000u; // 801BD2EC
  c->r[0]=c->r[0]^0x80000000u; // 801BD2F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BD2F4
  c->r[0]=c->r[4]^0x80000000u; // 801BD2F8
  {uint32_t ea=c->r[2]+0xFFFFA5E8u; c->f[4]=RF64(ea);} // 801BD2FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BD300
  {uint32_t ea=c->r[30]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD304
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801BD308
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BD30C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 801BD310
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD314
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801BD318
  W32(c->r[1]+0x00000010u,c->r[3]); // 801BD31C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BD320
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801BD324
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801BD328
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BD32C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801BD330
L_801BD334:;
  c->r[0]=0u+0x00000000u; // 801BD334
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 801BD338
  {uint32_t ea=c->r[30]+0x000000A4u; WF32(ea,c->f[31]);} // 801BD33C
  W32(c->r[30]+0x000000A8u,c->r[31]); // 801BD340
  W32(c->r[30]+0x000000ACu,c->r[0]); // 801BD344
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801BD348
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801BD34C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD350
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD354
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD358
  c->lr=c->r[0]; // 801BD35C
  c->r[1]=c->r[1]+0x00000030u; // 801BD360
  return; // 801BD364
}

// fn_801BD370
void f_801BD370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD370
  c->r[0]=c->lr; // 801BD374
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD378
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD37C
  fcmp(c,0,c->f[1],c->f[0]); // 801BD380
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801BD384
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801BD388
  c->f[31]=c->f[1]; // 801BD38C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD390
  c->r[31]=c->r[3]|c->r[3]; // 801BD394
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BD398
  if (crb(c,2)) { goto L_801BD3BC; } // 801BD39C
  c->r[3]=0u+0x803A0000u; // 801BD3A0
  c->r[5]=0u+0x803A0000u; // 801BD3A4
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BD3A8
  c->r[4]=0u+0x0000035Au; // 801BD3AC
  c->r[5]=c->r[5]+0xFFFFC918u; // 801BD3B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD3B4
  c->lr=0x801BD3BCu; f_80212260(c); // 801BD3B8
L_801BD3BC:;
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[31]);} // 801BD3BC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801BD3C0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801BD3C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD3C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD3CC
  c->lr=c->r[0]; // 801BD3D0
  c->r[1]=c->r[1]+0x00000020u; // 801BD3D4
  return; // 801BD3D8
}

// fn_801BD3E0
void f_801BD3E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 801BD3E0
  return; // 801BD3E4
}

// fn_801BD3F0
void f_801BD3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 801BD3F0
  return; // 801BD3F4
}

// fn_801BD400
void f_801BD400(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 801BD400
  return; // 801BD404
}

// fn_801BD410
void f_801BD410(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801BD410
  return; // 801BD414
}

// fn_801BD420
void f_801BD420(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 801BD420
  c->r[0]=R32(c->r[4]+0x00000034u); // 801BD424
  W32(c->r[3]+0x000000C8u,c->r[0]); // 801BD428
  return; // 801BD42C
}

// fn_801BD430
void f_801BD430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD430
  c->r[0]=c->lr; // 801BD434
  cmpu(c,0,c->r[4],0x00000003u); // 801BD438
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BD43C
  c->r[0]=0u+0x00000000u; // 801BD440
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801BD444
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801BD448
  c->f[31]=c->f[1]; // 801BD44C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD450
  c->r[31]=0u+0x803A0000u; // 801BD454
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BD458
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD45C
  c->r[30]=c->r[4]|c->r[4]; // 801BD460
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BD464
  c->r[29]=c->r[3]|c->r[3]; // 801BD468
  if (crb(c,1)) { goto L_801BD474; } // 801BD46C
  c->r[0]=0u+0x00000001u; // 801BD470
L_801BD474:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BD474
  if (!crb(c,2)) { goto L_801BD49C; } // 801BD478
  c->r[6]=c->r[30]|c->r[30]; // 801BD47C
  c->r[3]=c->r[31]+0x00000000u; // 801BD480
  c->r[5]=c->r[31]+0x000002D4u; // 801BD484
  c->r[4]=0u+0x000003D1u; // 801BD488
  c->r[7]=0u+0x00000000u; // 801BD48C
  c->r[8]=0u+0x00000004u; // 801BD490
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD494
  c->lr=0x801BD49Cu; f_80212260(c); // 801BD498
L_801BD49C:;
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD49C
  fcmp(c,0,c->f[31],c->f[0]); // 801BD4A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801BD4A4
  if (crb(c,2)) { goto L_801BD4C0; } // 801BD4A8
  c->r[3]=c->r[31]+0x00000000u; // 801BD4AC
  c->r[5]=c->r[31]+0x00000288u; // 801BD4B0
  c->r[4]=0u+0x000003D2u; // 801BD4B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD4B8
  c->lr=0x801BD4C0u; f_80212260(c); // 801BD4BC
L_801BD4C0:;
  {uint32_t ea=c->r[2]+0xFFFFA5E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD4C0
  fcmp(c,0,c->f[31],c->f[0]); // 801BD4C4
  if (!crb(c,0)) { goto L_801BD4D0; } // 801BD4C8
  c->f[31]=c->f[0]; // 801BD4CC
L_801BD4D0:;
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801BD4D0
  c->r[3]=c->r[29]+c->r[0]; // 801BD4D4
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[31]);} // 801BD4D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801BD4DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801BD4E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD4E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD4E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD4EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BD4F0
  c->lr=c->r[0]; // 801BD4F4
  c->r[1]=c->r[1]+0x00000030u; // 801BD4F8
  return; // 801BD4FC
}

// fn_801BD500
void f_801BD500(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[1]);} // 801BD500
  return; // 801BD504
}

// fn_801BD510
void f_801BD510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD510
  c->r[0]=c->lr; // 801BD514
  cmpu(c,0,c->r[4],0x00000002u); // 801BD518
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD51C
  c->r[0]=0u+0x00000000u; // 801BD520
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801BD524
  c->f[31]=c->f[1]; // 801BD528
  W32(c->r[1]+0x00000014u,c->r[31]); // 801BD52C
  c->r[31]=c->r[4]|c->r[4]; // 801BD530
  W32(c->r[1]+0x00000010u,c->r[30]); // 801BD534
  c->r[30]=c->r[3]|c->r[3]; // 801BD538
  if (crb(c,1)) { goto L_801BD544; } // 801BD53C
  c->r[0]=0u+0x00000001u; // 801BD540
L_801BD544:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BD544
  if (!crb(c,2)) { goto L_801BD574; } // 801BD548
  c->r[3]=0u+0x803A0000u; // 801BD54C
  c->r[5]=0u+0x803A0000u; // 801BD550
  c->r[6]=c->r[31]|c->r[31]; // 801BD554
  c->r[4]=0u+0x000003F2u; // 801BD558
  c->r[3]=c->r[3]+0xFFFFC668u; // 801BD55C
  c->r[5]=c->r[5]+0xFFFFC984u; // 801BD560
  c->r[7]=0u+0x00000000u; // 801BD564
  c->r[8]=0u+0x00000003u; // 801BD568
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD56C
  c->lr=0x801BD574u; f_80212260(c); // 801BD570
L_801BD574:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801BD574
  c->r[3]=c->r[30]+c->r[0]; // 801BD578
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[31]);} // 801BD57C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801BD580
  c->r[31]=R32(c->r[1]+0x00000014u); // 801BD584
  c->r[30]=R32(c->r[1]+0x00000010u); // 801BD588
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD58C
  c->lr=c->r[0]; // 801BD590
  c->r[1]=c->r[1]+0x00000020u; // 801BD594
  return; // 801BD598
}

// fn_801BD5A0
void f_801BD5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD5A0
  c->r[0]=c->lr; // 801BD5A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD5A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD5AC
  c->r[31]=c->r[4]|c->r[4]; // 801BD5B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BD5B4
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BD5B8
  c->ctr=c->r[12]; // 801BD5BC
  if (true) { c->lr=0x801BD5C4u; dispatch(c,c->ctr); } // 801BD5C0
  c->r[4]=c->r[31]|c->r[31]; // 801BD5C4
  c->lr=0x801BD5CCu; f_801BB710(c); // 801BD5C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD5CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD5D0
  c->lr=c->r[0]; // 801BD5D4
  c->r[1]=c->r[1]+0x00000010u; // 801BD5D8
  return; // 801BD5DC
}

// fn_801BD5E0
void f_801BD5E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD5E0
  c->r[0]=c->lr; // 801BD5E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD5E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD5EC
  c->r[31]=c->r[4]|c->r[4]; // 801BD5F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BD5F4
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BD5F8
  c->ctr=c->r[12]; // 801BD5FC
  if (true) { c->lr=0x801BD604u; dispatch(c,c->ctr); } // 801BD600
  W32(c->r[3]+0x0000002Cu,c->r[31]); // 801BD604
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD608
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD60C
  c->lr=c->r[0]; // 801BD610
  c->r[1]=c->r[1]+0x00000010u; // 801BD614
  return; // 801BD618
}

// fn_801BD620
void f_801BD620(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD620
  c->r[0]=c->lr; // 801BD624
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD62C
  c->r[31]=c->r[4]|c->r[4]; // 801BD630
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BD634
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BD638
  c->ctr=c->r[12]; // 801BD63C
  if (true) { c->lr=0x801BD644u; dispatch(c,c->ctr); } // 801BD640
  W32(c->r[3]+0x00000030u,c->r[31]); // 801BD644
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD648
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD64C
  c->lr=c->r[0]; // 801BD650
  c->r[1]=c->r[1]+0x00000010u; // 801BD654
  return; // 801BD658
}

// fn_801BD660
void f_801BD660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD660
  c->r[0]=c->lr; // 801BD664
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD668
  c->r[0]=R32(c->r[4]+0x00000008u); // 801BD66C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD670
  c->r[31]=0u+0x803A0000u; // 801BD674
  cmps(c,0,(int32_t)c->r[0],0); // 801BD678
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD67C
  c->r[31]=c->r[31]+0xFFFFC668u; // 801BD680
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BD684
  c->r[29]=c->r[4]|c->r[4]; // 801BD688
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BD68C
  c->r[28]=c->r[3]|c->r[3]; // 801BD690
  if (!crb(c,2)) { goto L_801BD6AC; } // 801BD694
  c->r[3]=c->r[31]+0x00000000u; // 801BD698
  c->r[5]=c->r[31]+0x00000354u; // 801BD69C
  c->r[4]=0u+0x0000042Bu; // 801BD6A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD6A4
  c->lr=0x801BD6ACu; f_80212260(c); // 801BD6A8
L_801BD6AC:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 801BD6AC
  c->r[4]=R32(c->r[29]+0x00000010u); // 801BD6B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BD6B4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BD6B8
  c->ctr=c->r[12]; // 801BD6BC
  if (true) { c->lr=0x801BD6C4u; dispatch(c,c->ctr); } // 801BD6C0
  cmps(c,0,(int32_t)c->r[3],0); // 801BD6C4
  c->r[30]=c->r[3]|c->r[3]; // 801BD6C8
  if (!crb(c,2)) { goto L_801BD6EC; } // 801BD6CC
  if (!crb(c,2)) { goto L_801BD750; } // 801BD6D0
  c->r[3]=c->r[31]+0x00000000u; // 801BD6D4
  c->r[5]=c->r[31]+0x00000398u; // 801BD6D8
  c->r[4]=0u+0x0000042Eu; // 801BD6DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BD6E0
  c->lr=0x801BD6E8u; f_80212300(c); // 801BD6E4
  goto L_801BD750; // 801BD6E8
L_801BD6EC:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801BD6EC
  c->r[5]=R32(c->r[29]+0x00000010u); // 801BD6F0
  c->lr=0x801BD6F8u; f_800043C4(c); // 801BD6F4
  c->r[0]=R32(c->r[29]+0x00000000u); // 801BD6F8
  c->r[3]=R32(c->r[29]+0x00000000u); // 801BD6FC
  c->r[5]=R32(c->r[29]+0x00000004u); // 801BD700
  cmps(c,0,(int32_t)c->r[0],0); // 801BD704
  c->r[4]=R32(c->r[29]+0x00000008u); // 801BD708
  c->r[0]=R32(c->r[29]+0x00000010u); // 801BD70C
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 801BD710
  W32(c->r[28]+0x00000020u,c->r[5]); // 801BD714
  W32(c->r[28]+0x00000024u,c->r[4]); // 801BD718
  W32(c->r[28]+0x0000002Cu,c->r[0]); // 801BD71C
  W32(c->r[28]+0x00000028u,c->r[30]); // 801BD720
  if (crb(c,2)) { goto L_801BD750; } // 801BD724
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BD728
  c->r[4]=c->r[30]|c->r[30]; // 801BD72C
  c->r[5]=R32(c->r[28]+0x0000009Cu); // 801BD730
  c->r[12]=R32(c->r[12]+0x00000014u); // 801BD734
  c->ctr=c->r[12]; // 801BD738
  if (true) { c->lr=0x801BD740u; dispatch(c,c->ctr); } // 801BD73C
  cmps(c,0,(int32_t)c->r[3],4); // 801BD740
  if (!crb(c,1)) { goto L_801BD74C; } // 801BD744
  c->r[3]=0u+0x00000004u; // 801BD748
L_801BD74C:;
  W8(c->r[28]+0x00000099u,c->r[3]); // 801BD74C
L_801BD750:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD750
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD754
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD758
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD75C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BD760
  c->lr=c->r[0]; // 801BD764
  c->r[1]=c->r[1]+0x00000020u; // 801BD768
  return; // 801BD76C
}

// fn_801BD770
void f_801BD770(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BD770
  c->r[6]=c->r[3]|c->r[3]; // 801BD774
  cmps(c,0,(int32_t)c->r[0],0); // 801BD778
  if (!crb(c,2)) { goto L_801BD788; } // 801BD77C
  c->r[3]=0u+0x00000000u; // 801BD780
  return; // 801BD784
L_801BD788:;
  c->r[3]=c->r[0]|c->r[0]; // 801BD788
  c->r[5]=c->r[4]|c->r[4]; // 801BD78C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BD790
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 801BD794
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BD798
  c->ctr=c->r[12]; // 801BD79C
  if (true) { dispatch(c,c->ctr); return; } // 801BD7A0
}

// fn_801BD7A4
void f_801BD7A4(Ctx* __restrict c) {
  return; // 801BD7A4
}

// fn_801BD7B0
void f_801BD7B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 801BD7B0
  c->r[0]=0u-c->r[3]; // 801BD7B4
  c->r[0]=c->r[0]|c->r[3]; // 801BD7B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801BD7BC
  return; // 801BD7C0
}

// fn_801BD7D0
void f_801BD7D0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801BD7D0
  c->r[0]=0u-c->r[3]; // 801BD7D4
  c->r[0]=c->r[0]|c->r[3]; // 801BD7D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801BD7DC
  return; // 801BD7E0
}

// DetachTempGeneralHandle__Q44nw4r3snd6detail10BasicSoundFv
void f_801BD7F0(Ctx* __restrict c) {
  trace_call(0x801BD7F0u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801BD7F0
  f_801D5EA0(c); return; // 801BD7F4
}

// fn_801BD800
void f_801BD800(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801BD800
  f_801D5EA0(c); return; // 801BD804
}

// fn_801BD810
void f_801BD810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD810
  c->r[0]=c->lr; // 801BD814
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD81C
  c->r[31]=c->r[4]|c->r[4]; // 801BD820
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 801BD824
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BD828
  c->r[12]=R32(c->r[12]+0x00000024u); // 801BD82C
  c->ctr=c->r[12]; // 801BD830
  if (true) { c->lr=0x801BD838u; dispatch(c,c->ctr); } // 801BD834
  W32(c->r[3]+0x000000B0u,c->r[31]); // 801BD838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD83C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD840
  c->lr=c->r[0]; // 801BD844
  c->r[1]=c->r[1]+0x00000010u; // 801BD848
  return; // 801BD84C
}

// fn_801BD850
void f_801BD850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD850
  c->r[0]=c->lr; // 801BD854
  cmps(c,0,(int32_t)c->r[3],0); // 801BD858
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD85C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD860
  c->r[31]=c->r[3]|c->r[3]; // 801BD864
  if (crb(c,2)) { goto L_801BD878; } // 801BD868
  cmps(c,0,(int32_t)c->r[4],0); // 801BD86C
  if (!crb(c,1)) { goto L_801BD878; } // 801BD870
  c->lr=0x801BD878u; f_802E61AC(c); // 801BD874
L_801BD878:;
  c->r[3]=c->r[31]|c->r[31]; // 801BD878
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD87C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD880
  c->lr=c->r[0]; // 801BD884
  c->r[1]=c->r[1]+0x00000010u; // 801BD888
  return; // 801BD88C
}

// fn_801BD890
void f_801BD890(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFC420u; // 801BD890
  return; // 801BD894
}

// fn_801BD8A0
void f_801BD8A0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801BD8A0
  W32(c->r[13]+0xFFFFC420u,c->r[0]); // 801BD8A4
  return; // 801BD8A8
}

// fn_801BD8B0
void f_801BD8B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD8B0
  c->r[4]=0u+0x0000006Fu; // 801BD8B4
  c->r[0]=0u+0x43300000u; // 801BD8B8
  {uint32_t ea=c->r[2]+0xFFFFA5F0u; c->f[2]=RF64(ea);} // 801BD8BC
  c->r[3]=c->r[4]^0x80000000u; // 801BD8C0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BD8C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BD8C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BD8CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BD8D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BD8D4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BD8D8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801BD8DC
  c->r[3]=R32(c->r[1]+0x00000014u); // 801BD8E0
  cmps(c,0,(int32_t)c->r[3],111); // 801BD8E4
  if (!crb(c,1)) { goto L_801BD8F0; } // 801BD8E8
  goto L_801BD8F8; // 801BD8EC
L_801BD8F0:;
  c->r[0]=sraw(c,c->r[3],31); // 801BD8F0
  c->r[4]=c->r[3]&~c->r[0]; // 801BD8F4
L_801BD8F8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801BD8F8
  c->r[3]=0u+0x80310000u; // 801BD8FC
  c->r[3]=c->r[3]+0xFFFFA070u; // 801BD900
  c->r[7]=c->r[3]+c->r[0]; // 801BD904
  c->r[8]=R16(c->r[3]+c->r[0]); // 801BD908
  c->r[6]=R16(c->r[7]+0x00000002u); // 801BD90C
  c->r[4]=R16(c->r[7]+0x00000004u); // 801BD910
  c->r[3]=R16(c->r[7]+0x00000006u); // 801BD914
  c->r[0]=R16(c->r[7]+0x00000008u); // 801BD918
  W16(c->r[5]+0x00000000u,c->r[8]); // 801BD91C
  W16(c->r[5]+0x00000002u,c->r[6]); // 801BD920
  W16(c->r[5]+0x00000004u,c->r[4]); // 801BD924
  W16(c->r[5]+0x00000006u,c->r[3]); // 801BD928
  W16(c->r[5]+0x00000008u,c->r[0]); // 801BD92C
  c->r[1]=c->r[1]+0x00000020u; // 801BD930
  return; // 801BD934
}

// fn_801BD940
void f_801BD940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD940
  c->r[4]=0u+0x00000060u; // 801BD944
  c->r[0]=0u+0x43300000u; // 801BD948
  {uint32_t ea=c->r[2]+0xFFFFA5F0u; c->f[2]=RF64(ea);} // 801BD94C
  c->r[3]=c->r[4]^0x80000000u; // 801BD950
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BD954
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BD958
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BD95C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BD960
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BD964
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BD968
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801BD96C
  c->r[3]=R32(c->r[1]+0x00000014u); // 801BD970
  cmps(c,0,(int32_t)c->r[3],96); // 801BD974
  if (!crb(c,1)) { goto L_801BD980; } // 801BD978
  goto L_801BD988; // 801BD97C
L_801BD980:;
  c->r[0]=sraw(c,c->r[3],31); // 801BD980
  c->r[4]=c->r[3]&~c->r[0]; // 801BD984
L_801BD988:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801BD988
  c->r[3]=0u+0x80310000u; // 801BD98C
  c->r[3]=c->r[3]+0xFFFFA4D0u; // 801BD990
  c->r[7]=c->r[3]+c->r[0]; // 801BD994
  c->r[8]=R16(c->r[3]+c->r[0]); // 801BD998
  c->r[6]=R16(c->r[7]+0x00000002u); // 801BD99C
  c->r[4]=R16(c->r[7]+0x00000004u); // 801BD9A0
  c->r[3]=R16(c->r[7]+0x00000006u); // 801BD9A4
  c->r[0]=R16(c->r[7]+0x00000008u); // 801BD9A8
  W16(c->r[5]+0x00000000u,c->r[8]); // 801BD9AC
  W16(c->r[5]+0x00000002u,c->r[6]); // 801BD9B0
  W16(c->r[5]+0x00000004u,c->r[4]); // 801BD9B4
  W16(c->r[5]+0x00000006u,c->r[3]); // 801BD9B8
  W16(c->r[5]+0x00000008u,c->r[0]); // 801BD9BC
  c->r[1]=c->r[1]+0x00000020u; // 801BD9C0
  return; // 801BD9C4
}

// fn_801BD9D0
void f_801BD9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFA5F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BD9D0
  c->r[4]=0u+0x00000079u; // 801BD9D4
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD9D8
  c->r[3]=c->r[4]^0x80000000u; // 801BD9DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BD9E0
  c->r[0]=0u+0x43300000u; // 801BD9E4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BD9E8
  {uint32_t ea=c->r[2]+0xFFFFA5F0u; c->f[2]=RF64(ea);} // 801BD9EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BD9F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801BD9F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BD9F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BD9FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BDA00
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BDA04
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801BDA08
  c->r[3]=R32(c->r[1]+0x00000014u); // 801BDA0C
  cmps(c,0,(int32_t)c->r[3],121); // 801BDA10
  if (!crb(c,1)) { goto L_801BDA1C; } // 801BDA14
  goto L_801BDA24; // 801BDA18
L_801BDA1C:;
  c->r[0]=sraw(c,c->r[3],31); // 801BDA1C
  c->r[4]=c->r[3]&~c->r[0]; // 801BDA20
L_801BDA24:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801BDA24
  c->r[3]=0u+0x80310000u; // 801BDA28
  c->r[3]=c->r[3]+0xFFFFA89Cu; // 801BDA2C
  c->r[7]=c->r[3]+c->r[0]; // 801BDA30
  c->r[8]=R16(c->r[3]+c->r[0]); // 801BDA34
  c->r[6]=R16(c->r[7]+0x00000002u); // 801BDA38
  c->r[4]=R16(c->r[7]+0x00000004u); // 801BDA3C
  c->r[3]=R16(c->r[7]+0x00000006u); // 801BDA40
  c->r[0]=R16(c->r[7]+0x00000008u); // 801BDA44
  W16(c->r[5]+0x00000000u,c->r[8]); // 801BDA48
  W16(c->r[5]+0x00000002u,c->r[6]); // 801BDA4C
  W16(c->r[5]+0x00000004u,c->r[4]); // 801BDA50
  W16(c->r[5]+0x00000006u,c->r[3]); // 801BDA54
  W16(c->r[5]+0x00000008u,c->r[0]); // 801BDA58
  c->r[1]=c->r[1]+0x00000020u; // 801BDA5C
  return; // 801BDA60
}

// fn_801BDA70
void f_801BDA70(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFA5F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDA70
  c->r[4]=0u+0x0000005Cu; // 801BDA74
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDA78
  c->r[3]=c->r[4]^0x80000000u; // 801BDA7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BDA80
  c->r[0]=0u+0x43300000u; // 801BDA84
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BDA88
  {uint32_t ea=c->r[2]+0xFFFFA5F0u; c->f[2]=RF64(ea);} // 801BDA8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BDA90
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801BDA94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BDA98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BDA9C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BDAA0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BDAA4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801BDAA8
  c->r[3]=R32(c->r[1]+0x00000014u); // 801BDAAC
  cmps(c,0,(int32_t)c->r[3],92); // 801BDAB0
  if (!crb(c,1)) { goto L_801BDABC; } // 801BDAB4
  goto L_801BDAC4; // 801BDAB8
L_801BDABC:;
  c->r[0]=sraw(c,c->r[3],31); // 801BDABC
  c->r[4]=c->r[3]&~c->r[0]; // 801BDAC0
L_801BDAC4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801BDAC4
  c->r[3]=0u+0x80310000u; // 801BDAC8
  c->r[3]=c->r[3]+0xFFFFAD60u; // 801BDACC
  c->r[7]=c->r[3]+c->r[0]; // 801BDAD0
  c->r[8]=R16(c->r[3]+c->r[0]); // 801BDAD4
  c->r[6]=R16(c->r[7]+0x00000002u); // 801BDAD8
  c->r[4]=R16(c->r[7]+0x00000004u); // 801BDADC
  c->r[3]=R16(c->r[7]+0x00000006u); // 801BDAE0
  c->r[0]=R16(c->r[7]+0x00000008u); // 801BDAE4
  W16(c->r[5]+0x00000000u,c->r[8]); // 801BDAE8
  W16(c->r[5]+0x00000002u,c->r[6]); // 801BDAEC
  W16(c->r[5]+0x00000004u,c->r[4]); // 801BDAF0
  W16(c->r[5]+0x00000006u,c->r[3]); // 801BDAF4
  W16(c->r[5]+0x00000008u,c->r[0]); // 801BDAF8
  c->r[1]=c->r[1]+0x00000020u; // 801BDAFC
  return; // 801BDB00
}

// fn_801BDB10
void f_801BDB10(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFA5F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDB10
  c->r[4]=0u+0x0000005Cu; // 801BDB14
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDB18
  c->r[3]=c->r[4]^0x80000000u; // 801BDB1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BDB20
  c->r[0]=0u+0x43300000u; // 801BDB24
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801BDB28
  {uint32_t ea=c->r[2]+0xFFFFA5F0u; c->f[2]=RF64(ea);} // 801BDB2C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801BDB30
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801BDB34
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801BDB38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BDB3C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BDB40
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BDB44
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801BDB48
  c->r[3]=R32(c->r[1]+0x00000014u); // 801BDB4C
  cmps(c,0,(int32_t)c->r[3],92); // 801BDB50
  if (!crb(c,1)) { goto L_801BDB5C; } // 801BDB54
  goto L_801BDB64; // 801BDB58
L_801BDB5C:;
  c->r[0]=sraw(c,c->r[3],31); // 801BDB5C
  c->r[4]=c->r[3]&~c->r[0]; // 801BDB60
L_801BDB64:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801BDB64
  c->r[3]=0u+0x80310000u; // 801BDB68
  c->r[3]=c->r[3]+0xFFFFB104u; // 801BDB6C
  c->r[7]=c->r[3]+c->r[0]; // 801BDB70
  c->r[8]=R16(c->r[3]+c->r[0]); // 801BDB74
  c->r[6]=R16(c->r[7]+0x00000002u); // 801BDB78
  c->r[4]=R16(c->r[7]+0x00000004u); // 801BDB7C
  c->r[3]=R16(c->r[7]+0x00000006u); // 801BDB80
  c->r[0]=R16(c->r[7]+0x00000008u); // 801BDB84
  W16(c->r[5]+0x00000000u,c->r[8]); // 801BDB88
  W16(c->r[5]+0x00000002u,c->r[6]); // 801BDB8C
  W16(c->r[5]+0x00000004u,c->r[4]); // 801BDB90
  W16(c->r[5]+0x00000006u,c->r[3]); // 801BDB94
  W16(c->r[5]+0x00000008u,c->r[0]); // 801BDB98
  c->r[1]=c->r[1]+0x00000020u; // 801BDB9C
  return; // 801BDBA0
}

// fn_801BDBB0
void f_801BDBB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDBB0
  c->r[0]=c->lr; // 801BDBB4
  cmps(c,0,(int32_t)c->r[3],0); // 801BDBB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDBBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDBC0
  c->r[31]=c->r[3]|c->r[3]; // 801BDBC4
  if (crb(c,2)) { goto L_801BDBD8; } // 801BDBC8
  cmps(c,0,(int32_t)c->r[4],0); // 801BDBCC
  if (!crb(c,1)) { goto L_801BDBD8; } // 801BDBD0
  c->lr=0x801BDBD8u; f_802E61AC(c); // 801BDBD4
L_801BDBD8:;
  c->r[3]=c->r[31]|c->r[31]; // 801BDBD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDBDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDBE0
  c->lr=c->r[0]; // 801BDBE4
  c->r[1]=c->r[1]+0x00000010u; // 801BDBE8
  return; // 801BDBEC
}

// fn_801BDBF0
void f_801BDBF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDBF0
  c->r[0]=c->lr; // 801BDBF4
  cmps(c,0,(int32_t)c->r[3],0); // 801BDBF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDBFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDC00
  c->r[31]=c->r[3]|c->r[3]; // 801BDC04
  if (crb(c,2)) { goto L_801BDC18; } // 801BDC08
  cmps(c,0,(int32_t)c->r[4],0); // 801BDC0C
  if (!crb(c,1)) { goto L_801BDC18; } // 801BDC10
  c->lr=0x801BDC18u; f_802E61AC(c); // 801BDC14
L_801BDC18:;
  c->r[3]=c->r[31]|c->r[31]; // 801BDC18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDC1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDC20
  c->lr=c->r[0]; // 801BDC24
  c->r[1]=c->r[1]+0x00000010u; // 801BDC28
  return; // 801BDC2C
}

// fn_801BDC30
void f_801BDC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDC30
  c->r[0]=c->lr; // 801BDC34
  cmps(c,0,(int32_t)c->r[3],0); // 801BDC38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDC3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDC40
  c->r[31]=c->r[3]|c->r[3]; // 801BDC44
  if (crb(c,2)) { goto L_801BDC58; } // 801BDC48
  cmps(c,0,(int32_t)c->r[4],0); // 801BDC4C
  if (!crb(c,1)) { goto L_801BDC58; } // 801BDC50
  c->lr=0x801BDC58u; f_802E61AC(c); // 801BDC54
L_801BDC58:;
  c->r[3]=c->r[31]|c->r[31]; // 801BDC58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDC5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDC60
  c->lr=c->r[0]; // 801BDC64
  c->r[1]=c->r[1]+0x00000010u; // 801BDC68
  return; // 801BDC6C
}

// fn_801BDC70
void f_801BDC70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDC70
  c->r[0]=c->lr; // 801BDC74
  cmps(c,0,(int32_t)c->r[3],0); // 801BDC78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDC7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDC80
  c->r[31]=c->r[3]|c->r[3]; // 801BDC84
  if (crb(c,2)) { goto L_801BDC98; } // 801BDC88
  cmps(c,0,(int32_t)c->r[4],0); // 801BDC8C
  if (!crb(c,1)) { goto L_801BDC98; } // 801BDC90
  c->lr=0x801BDC98u; f_802E61AC(c); // 801BDC94
L_801BDC98:;
  c->r[3]=c->r[31]|c->r[31]; // 801BDC98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDC9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDCA0
  c->lr=c->r[0]; // 801BDCA4
  c->r[1]=c->r[1]+0x00000010u; // 801BDCA8
  return; // 801BDCAC
}

// fn_801BDCB0
void f_801BDCB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDCB0
  c->r[0]=c->lr; // 801BDCB4
  cmps(c,0,(int32_t)c->r[3],0); // 801BDCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDCBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDCC0
  c->r[31]=c->r[3]|c->r[3]; // 801BDCC4
  if (crb(c,2)) { goto L_801BDCD8; } // 801BDCC8
  cmps(c,0,(int32_t)c->r[4],0); // 801BDCCC
  if (!crb(c,1)) { goto L_801BDCD8; } // 801BDCD0
  c->lr=0x801BDCD8u; f_802E61AC(c); // 801BDCD4
L_801BDCD8:;
  c->r[3]=c->r[31]|c->r[31]; // 801BDCD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDCDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDCE0
  c->lr=c->r[0]; // 801BDCE4
  c->r[1]=c->r[1]+0x00000010u; // 801BDCE8
  return; // 801BDCEC
}

// GetInstance__Q44nw4r3snd6detail14ChannelManagerFv
void f_801BDCF0(Ctx* __restrict c) {
  trace_call(0x801BDCF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDCF0
  c->r[0]=c->lr; // 801BDCF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDCF8
  c->r[0]=R8(c->r[13]+0xFFFFC428u); // 801BDCFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BDD00
  if (!crb(c,2)) { goto L_801BDD4C; } // 801BDD04
  c->r[6]=0u+0x805B0000u; // 801BDD08
  c->r[0]=0u+0x00000000u; // 801BDD0C
  c->r[3]=c->r[6]+0xFFFFC658u; // 801BDD10
  c->r[4]=0u+0x801C0000u; // 801BDD14
  c->r[7]=c->r[3]+0x00000008u; // 801BDD18
  c->r[5]=0u+0x805B0000u; // 801BDD1C
  W32(c->r[6]+0xFFFFC658u,c->r[0]); // 801BDD20
  c->r[4]=c->r[4]+0xFFFFDD70u; // 801BDD24
  c->r[5]=c->r[5]+0xFFFFC648u; // 801BDD28
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BDD2C
  W32(c->r[3]+0x00000008u,c->r[7]); // 801BDD30
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801BDD34
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BDD38
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BDD3C
  c->lr=0x801BDD44u; f_802E6064(c); // 801BDD40
  c->r[0]=0u+0x00000001u; // 801BDD44
  W8(c->r[13]+0xFFFFC428u,c->r[0]); // 801BDD48
L_801BDD4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDD4C
  c->r[3]=0u+0x805B0000u; // 801BDD50
  c->r[3]=c->r[3]+0xFFFFC658u; // 801BDD54
  c->lr=c->r[0]; // 801BDD58
  c->r[1]=c->r[1]+0x00000010u; // 801BDD5C
  return; // 801BDD60
}

// fn_801BDD70
void f_801BDD70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDD70
  c->r[0]=c->lr; // 801BDD74
  cmps(c,0,(int32_t)c->r[3],0); // 801BDD78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDD7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDD80
  c->r[31]=c->r[4]|c->r[4]; // 801BDD84
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BDD88
  c->r[30]=c->r[3]|c->r[3]; // 801BDD8C
  if (crb(c,2)) { goto L_801BDDB4; } // 801BDD90
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 801BDD94
  if (crb(c,2)) { goto L_801BDDA4; } // 801BDD98
  c->r[4]=0u+0x00000000u; // 801BDD9C
  c->lr=0x801BDDA4u; f_801E4130(c); // 801BDDA0
L_801BDDA4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BDDA4
  if (!crb(c,1)) { goto L_801BDDB4; } // 801BDDA8
  c->r[3]=c->r[30]|c->r[30]; // 801BDDAC
  c->lr=0x801BDDB4u; f_802E61AC(c); // 801BDDB0
L_801BDDB4:;
  c->r[3]=c->r[30]|c->r[30]; // 801BDDB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDDB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BDDBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDDC0
  c->lr=c->r[0]; // 801BDDC4
  c->r[1]=c->r[1]+0x00000010u; // 801BDDC8
  return; // 801BDDCC
}

// GetRequiredMemSize__Q44nw4r3snd6detail14ChannelManagerFi
void f_801BDDD0(Ctx* __restrict c) {
  trace_call(0x801BDDD0u);
  c->r[0]=c->r[4]+0x00000001u; // 801BDDD0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)224); // 801BDDD4
  return; // 801BDDD8
}

// Setup__Q44nw4r3snd6detail14ChannelManagerFPvUl
void f_801BDDE0(Ctx* __restrict c) {
  trace_call(0x801BDDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDDE0
  c->r[0]=c->lr; // 801BDDE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BDDE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BDDEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BDDF0
  c->r[30]=c->r[5]|c->r[5]; // 801BDDF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BDDF8
  c->r[29]=c->r[4]|c->r[4]; // 801BDDFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BDE00
  c->r[28]=c->r[3]|c->r[3]; // 801BDE04
  c->lr=0x801BDE0Cu; f_801251B0(c); // 801BDE08
  c->r[0]=R8(c->r[28]+0x00000010u); // 801BDE0C
  c->r[31]=c->r[3]|c->r[3]; // 801BDE10
  cmps(c,0,(int32_t)c->r[0],0); // 801BDE14
  if (crb(c,2)) { goto L_801BDE24; } // 801BDE18
  c->lr=0x801BDE20u; f_801251F0(c); // 801BDE1C
  goto L_801BDE54; // 801BDE20
L_801BDE24:;
  c->r[3]=c->r[28]|c->r[28]; // 801BDE24
  c->r[4]=c->r[29]|c->r[29]; // 801BDE28
  c->r[5]=c->r[30]|c->r[30]; // 801BDE2C
  c->r[6]=0u+0x000000E0u; // 801BDE30
  c->lr=0x801BDE38u; f_801C5E30(c); // 801BDE34
  W32(c->r[28]+0x00000014u,c->r[3]); // 801BDE38
  c->r[0]=0u+0x00000001u; // 801BDE3C
  c->r[3]=c->r[31]|c->r[31]; // 801BDE40
  W32(c->r[28]+0x00000018u,c->r[29]); // 801BDE44
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 801BDE48
  W8(c->r[28]+0x00000010u,c->r[0]); // 801BDE4C
  c->lr=0x801BDE54u; f_801251F0(c); // 801BDE50
L_801BDE54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BDE54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BDE58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BDE5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BDE60
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BDE64
  c->lr=c->r[0]; // 801BDE68
  c->r[1]=c->r[1]+0x00000020u; // 801BDE6C
  return; // 801BDE70
}

// fn_801BDE80
void f_801BDE80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDE80
  c->r[0]=c->lr; // 801BDE84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BDE88
  c->r[11]=c->r[1]+0x00000020u; // 801BDE8C
  c->lr=0x801BDE94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BDE90
  c->r[31]=R32(c->r[3]+0x00000008u); // 801BDE94
  c->r[30]=c->r[3]+0x00000008u; // 801BDE98
  c->r[28]=0u+0x803A0000u; // 801BDE9C
  c->r[29]=0u+0x803A0000u; // 801BDEA0
  goto L_801BDED4; // 801BDEA4
L_801BDEA8:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801BDEA8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801BDEAC
  if (!crb(c,2)) { goto L_801BDEC8; } // 801BDEB0
  c->r[3]=c->r[28]+0xFFFFCBE8u; // 801BDEB4
  c->r[5]=c->r[29]+0xFFFFCBC4u; // 801BDEB8
  c->r[4]=0u+0x0000023Du; // 801BDEBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BDEC0
  c->lr=0x801BDEC8u; f_80212260(c); // 801BDEC4
L_801BDEC8:;
  c->r[3]=c->r[27]+0xFFFFFF28u; // 801BDEC8
  c->r[4]=0u+0x00000001u; // 801BDECC
  c->lr=0x801BDED4u; f_801BE010(c); // 801BDED0
L_801BDED4:;
  cmpu(c,0,c->r[31],c->r[30]); // 801BDED4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BDEA8; } // 801BDED8
  c->r[11]=c->r[1]+0x00000020u; // 801BDEDC
  c->lr=0x801BDEE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BDEE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BDEE4
  c->lr=c->r[0]; // 801BDEE8
  c->r[1]=c->r[1]+0x00000020u; // 801BDEEC
  return; // 801BDEF0
}

// fn_801BDF00
void f_801BDF00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDF00
  c->r[0]=c->lr; // 801BDF04
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BDF08
  c->r[7]=0u+0x00000001u; // 801BDF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDF10
  c->r[6]=0u+0x0000003Cu; // 801BDF14
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BDF18
  c->r[0]=0u+0x000000FFu; // 801BDF1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDF20
  c->r[31]=0u+0x00000000u; // 801BDF24
  {uint32_t ea=c->r[2]+0xFFFFA628u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BDF28
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BDF2C
  c->r[30]=c->r[3]|c->r[3]; // 801BDF30
  W32(c->r[3]+0x000000D4u,c->r[31]); // 801BDF34
  W32(c->r[3]+0x000000C0u,c->r[4]); // 801BDF38
  W32(c->r[3]+0x000000C4u,c->r[5]); // 801BDF3C
  W32(c->r[3]+0x000000C8u,c->r[31]); // 801BDF40
  W32(c->r[3]+0x000000CCu,c->r[31]); // 801BDF44
  W8(c->r[3]+0x00000035u,c->r[31]); // 801BDF48
  W8(c->r[3]+0x00000038u,c->r[7]); // 801BDF4C
  W8(c->r[3]+0x00000039u,c->r[31]); // 801BDF50
  W8(c->r[3]+0x0000003Au,c->r[31]); // 801BDF54
  W32(c->r[3]+0x000000B0u,c->r[31]); // 801BDF58
  W32(c->r[3]+0x000000A8u,c->r[6]); // 801BDF5C
  W32(c->r[3]+0x000000ACu,c->r[6]); // 801BDF60
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[2]);} // 801BDF64
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 801BDF68
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 801BDF6C
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[2]);} // 801BDF70
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 801BDF74
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 801BDF78
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 801BDF7C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801BDF80
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801BDF84
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 801BDF88
  W8(c->r[3]+0x0000003Bu,c->r[31]); // 801BDF8C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801BDF90
  W8(c->r[3]+0x0000003Cu,c->r[31]); // 801BDF94
  W32(c->r[3]+0x00000058u,c->r[7]); // 801BDF98
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[2]);} // 801BDF9C
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801BDFA0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 801BDFA4
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 801BDFA8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801BDFAC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 801BDFB0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[2]);} // 801BDFB4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[2]);} // 801BDFB8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 801BDFBC
  W8(c->r[3]+0x000000A0u,c->r[0]); // 801BDFC0
  W8(c->r[3]+0x000000A1u,c->r[0]); // 801BDFC4
  W16(c->r[3]+0x000000A2u,c->r[31]); // 801BDFC8
  W16(c->r[3]+0x000000A4u,c->r[31]); // 801BDFCC
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 801BDFD0
  W32(c->r[3]+0x0000008Cu,c->r[31]); // 801BDFD4
  W32(c->r[3]+0x00000088u,c->r[31]); // 801BDFD8
  c->lr=0x801BDFE0u; f_801BFE00(c); // 801BDFDC
  c->r[3]=c->r[30]+0x0000001Cu; // 801BDFE0
  c->lr=0x801BDFE8u; f_801C6160(c); // 801BDFE4
  W8(c->r[30]+0x00000034u,c->r[31]); // 801BDFE8
  W32(c->r[30]+0x000000B4u,c->r[31]); // 801BDFEC
  W32(c->r[30]+0x000000B8u,c->r[31]); // 801BDFF0
  W32(c->r[30]+0x000000BCu,c->r[31]); // 801BDFF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDFF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BDFFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE000
  c->lr=c->r[0]; // 801BE004
  c->r[1]=c->r[1]+0x00000010u; // 801BE008
  return; // 801BE00C
}

// fn_801BE010
void f_801BE010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE010
  c->r[0]=c->lr; // 801BE014
  c->r[5]=0u+0x43300000u; // 801BE018
  W32(c->r[1]+0x000000F4u,c->r[0]); // 801BE01C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 801BE020
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 801BE024
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 801BE028
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 801BE02C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 801BE030
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 801BE034
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 801BE038
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 801BE03C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 801BE040
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 801BE044
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 801BE048
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 801BE04C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[25]);} // 801BE050
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,25,ea,0,0);} // 801BE054
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[24]);} // 801BE058
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,24,ea,0,0);} // 801BE05C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[23]);} // 801BE060
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,23,ea,0,0);} // 801BE064
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[22]);} // 801BE068
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,22,ea,0,0);} // 801BE06C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801BE070
  c->r[31]=c->r[4]|c->r[4]; // 801BE074
  W32(c->r[1]+0x00000048u,c->r[30]); // 801BE078
  c->r[30]=c->r[3]|c->r[3]; // 801BE07C
  W32(c->r[1]+0x00000044u,c->r[29]); // 801BE080
  c->r[0]=R8(c->r[3]+0x00000036u); // 801BE084
  W32(c->r[1]+0x00000028u,c->r[5]); // 801BE088
  cmps(c,0,(int32_t)c->r[0],0); // 801BE08C
  W32(c->r[1]+0x00000030u,c->r[5]); // 801BE090
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE094
  c->r[0]=R8(c->r[3]+0x00000035u); // 801BE098
  cmps(c,0,(int32_t)c->r[0],0); // 801BE09C
  if (crb(c,2)) { goto L_801BE0A8; } // 801BE0A0
  c->r[31]=0u+0x00000000u; // 801BE0A4
L_801BE0A8:;
  c->r[3]=c->r[3]+0x0000001Cu; // 801BE0A8
  c->lr=0x801BE0B0u; f_801C6250(c); // 801BE0AC
  c->r[3]=R16(c->r[30]+0x000000A4u); // 801BE0B0
  c->f[31]=c->f[1]; // 801BE0B4
  c->r[0]=R16(c->r[30]+0x000000A2u); // 801BE0B8
  cmpu(c,0,c->r[3],c->r[0]); // 801BE0BC
  if (!crb(c,0)) { goto L_801BE0CC; } // 801BE0C0
  c->r[0]=c->r[3]+0x00000001u; // 801BE0C4
  W16(c->r[30]+0x000000A4u,c->r[0]); // 801BE0C8
L_801BE0CC:;
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[30]=c->ps1[30]=RF32(ea);} // 801BE0CC
  {uint32_t ea=c->r[30]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE0D0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE0D4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 801BE0D8
  c->r[4]=R16(c->r[30]+0x000000A2u); // 801BE0DC
  c->r[3]=R16(c->r[30]+0x000000A4u); // 801BE0E0
  cmpu(c,0,c->r[3],c->r[4]); // 801BE0E4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 801BE0E8
  if (crb(c,0)) { goto L_801BE0F8; } // 801BE0EC
  c->r[0]=R8(c->r[30]+0x000000A1u); // 801BE0F0
  goto L_801BE114; // 801BE0F4
L_801BE0F8:;
  c->r[5]=R8(c->r[30]+0x000000A0u); // 801BE0F8
  c->r[0]=R8(c->r[30]+0x000000A1u); // 801BE0FC
  c->r[0]=c->r[0]-c->r[5]; // 801BE100
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801BE104
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801BE108
  c->r[0]=c->r[5]+c->r[0]; // 801BE10C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BE110
L_801BE114:;
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BE114
  c->r[3]=c->r[30]|c->r[30]; // 801BE118
  {uint32_t ea=c->r[2]+0xFFFFA618u; c->f[2]=RF64(ea);} // 801BE11C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801BE120
  {uint32_t ea=c->r[2]+0xFFFFA608u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE124
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801BE128
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[29]=c->ps1[29]=RF32(ea);} // 801BE12C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801BE130
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 801BE134
  c->lr=0x801BE13Cu; f_801BFE60(c); // 801BE138
  c->lr=0x801BE140u; f_801E12A0(c); // 801BE13C
  c->r[0]=R8(c->r[30]+0x00000034u); // 801BE140
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801BE144
  cmpu(c,0,c->r[0],0x00000001u); // 801BE148
  if (!crb(c,2)) { goto L_801BE160; } // 801BE14C
  {uint32_t ea=c->r[2]+0xFFFFA60Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE150
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801BE154
  c->lr=0x801BE15Cu; f_801E12A0(c); // 801BE158
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801BE15C
L_801BE160:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801BE160
  cmps(c,0,(int32_t)c->r[0],4); // 801BE164
  if (!crb(c,2)) { goto L_801BE3C4; } // 801BE168
  c->r[0]=R32(c->r[30]+0x000000C0u); // 801BE16C
  cmps(c,0,(int32_t)c->r[0],0); // 801BE170
  if (crb(c,2)) { goto L_801BE29C; } // 801BE174
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE178
  fcmp(c,0,c->f[0],c->f[29]); // 801BE17C
  if (!crb(c,2)) { goto L_801BE3C4; } // 801BE180
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE184
  cmps(c,0,(int32_t)c->r[3],0); // 801BE188
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE18C
  c->lr=0x801BE194u; f_801DE620(c); // 801BE190
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE194
  c->lr=0x801BE19Cu; f_801DE300(c); // 801BE198
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801BE19C
  c->r[0]=0u+0x00000000u; // 801BE1A0
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801BE1A4
  cmps(c,0,(int32_t)c->r[12],0); // 801BE1A8
  W8(c->r[30]+0x00000035u,c->r[0]); // 801BE1AC
  W8(c->r[30]+0x00000036u,c->r[0]); // 801BE1B0
  if (crb(c,2)) { goto L_801BE1CC; } // 801BE1B4
  c->r[3]=c->r[30]|c->r[30]; // 801BE1B8
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801BE1BC
  c->r[4]=0u+0x00000000u; // 801BE1C0
  c->ctr=c->r[12]; // 801BE1C4
  if (true) { c->lr=0x801BE1CCu; dispatch(c,c->ctr); } // 801BE1C8
L_801BE1CC:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801BE1CC
  cmps(c,0,(int32_t)c->r[3],0); // 801BE1D0
  if (crb(c,2)) { goto L_801BE1EC; } // 801BE1D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE1D8
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801BE1DC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BE1E0
  c->ctr=c->r[12]; // 801BE1E4
  if (true) { c->lr=0x801BE1ECu; dispatch(c,c->ctr); } // 801BE1E8
L_801BE1EC:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 801BE1EC
  cmps(c,0,(int32_t)c->r[0],0); // 801BE1F0
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE1F4
  c->r[7]=0u+0x00000000u; // 801BE1F8
  W8(c->r[30]+0x00000037u,c->r[7]); // 801BE1FC
  c->r[0]=R8(c->r[13]+0xFFFFC428u); // 801BE200
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BE204
  if (!crb(c,2)) { goto L_801BE24C; } // 801BE208
  c->r[6]=0u+0x805B0000u; // 801BE20C
  c->r[4]=0u+0x801C0000u; // 801BE210
  c->r[3]=c->r[6]+0xFFFFC658u; // 801BE214
  c->r[5]=0u+0x805B0000u; // 801BE218
  c->r[0]=c->r[3]+0x00000008u; // 801BE21C
  W32(c->r[6]+0xFFFFC658u,c->r[7]); // 801BE220
  c->r[4]=c->r[4]+0xFFFFDD70u; // 801BE224
  c->r[5]=c->r[5]+0xFFFFC648u; // 801BE228
  W32(c->r[3]+0x00000004u,c->r[7]); // 801BE22C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BE230
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BE234
  W8(c->r[3]+0x00000010u,c->r[7]); // 801BE238
  W32(c->r[3]+0x00000014u,c->r[7]); // 801BE23C
  c->lr=0x801BE244u; f_802E6064(c); // 801BE240
  c->r[0]=0u+0x00000001u; // 801BE244
  W8(c->r[13]+0xFFFFC428u,c->r[0]); // 801BE248
L_801BE24C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BE24C
  c->r[31]=0u+0x805B0000u; // 801BE250
  c->r[31]=c->r[31]+0xFFFFC658u; // 801BE254
  if (!crb(c,2)) { goto L_801BE278; } // 801BE258
  c->r[3]=0u+0x803A0000u; // 801BE25C
  c->r[5]=0u+0x803A0000u; // 801BE260
  c->r[3]=c->r[3]+0xFFFFCBB8u; // 801BE264
  c->r[4]=0u+0x00000233u; // 801BE268
  c->r[5]=c->r[5]+0xFFFFCB94u; // 801BE26C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BE270
  c->lr=0x801BE278u; f_80212260(c); // 801BE274
L_801BE278:;
  c->r[3]=c->r[31]+0x00000004u; // 801BE278
  c->r[4]=c->r[30]+0x000000D8u; // 801BE27C
  c->lr=0x801BE284u; f_801E45B0(c); // 801BE280
  cmps(c,0,(int32_t)c->r[30],0); // 801BE284
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE288
  c->r[3]=c->r[31]|c->r[31]; // 801BE28C
  c->r[4]=c->r[30]|c->r[30]; // 801BE290
  c->lr=0x801BE298u; f_801C6110(c); // 801BE294
  goto L_801BE6F4; // 801BE298
L_801BE29C:;
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[29]); // 801BE29C
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE2A0
  fcmp(c,0,c->f[1],c->f[0]); // 801BE2A4
  if (!crb(c,2)) { goto L_801BE3C4; } // 801BE2A8
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE2AC
  cmps(c,0,(int32_t)c->r[3],0); // 801BE2B0
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE2B4
  c->lr=0x801BE2BCu; f_801DE620(c); // 801BE2B8
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE2BC
  c->lr=0x801BE2C4u; f_801DE300(c); // 801BE2C0
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801BE2C4
  c->r[0]=0u+0x00000000u; // 801BE2C8
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801BE2CC
  cmps(c,0,(int32_t)c->r[12],0); // 801BE2D0
  W8(c->r[30]+0x00000035u,c->r[0]); // 801BE2D4
  W8(c->r[30]+0x00000036u,c->r[0]); // 801BE2D8
  if (crb(c,2)) { goto L_801BE2F4; } // 801BE2DC
  c->r[3]=c->r[30]|c->r[30]; // 801BE2E0
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801BE2E4
  c->r[4]=0u+0x00000000u; // 801BE2E8
  c->ctr=c->r[12]; // 801BE2EC
  if (true) { c->lr=0x801BE2F4u; dispatch(c,c->ctr); } // 801BE2F0
L_801BE2F4:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801BE2F4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE2F8
  if (crb(c,2)) { goto L_801BE314; } // 801BE2FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE300
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801BE304
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BE308
  c->ctr=c->r[12]; // 801BE30C
  if (true) { c->lr=0x801BE314u; dispatch(c,c->ctr); } // 801BE310
L_801BE314:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 801BE314
  cmps(c,0,(int32_t)c->r[0],0); // 801BE318
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE31C
  c->r[7]=0u+0x00000000u; // 801BE320
  W8(c->r[30]+0x00000037u,c->r[7]); // 801BE324
  c->r[0]=R8(c->r[13]+0xFFFFC428u); // 801BE328
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BE32C
  if (!crb(c,2)) { goto L_801BE374; } // 801BE330
  c->r[6]=0u+0x805B0000u; // 801BE334
  c->r[4]=0u+0x801C0000u; // 801BE338
  c->r[3]=c->r[6]+0xFFFFC658u; // 801BE33C
  c->r[5]=0u+0x805B0000u; // 801BE340
  c->r[0]=c->r[3]+0x00000008u; // 801BE344
  W32(c->r[6]+0xFFFFC658u,c->r[7]); // 801BE348
  c->r[4]=c->r[4]+0xFFFFDD70u; // 801BE34C
  c->r[5]=c->r[5]+0xFFFFC648u; // 801BE350
  W32(c->r[3]+0x00000004u,c->r[7]); // 801BE354
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BE358
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BE35C
  W8(c->r[3]+0x00000010u,c->r[7]); // 801BE360
  W32(c->r[3]+0x00000014u,c->r[7]); // 801BE364
  c->lr=0x801BE36Cu; f_802E6064(c); // 801BE368
  c->r[0]=0u+0x00000001u; // 801BE36C
  W8(c->r[13]+0xFFFFC428u,c->r[0]); // 801BE370
L_801BE374:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BE374
  c->r[31]=0u+0x805B0000u; // 801BE378
  c->r[31]=c->r[31]+0xFFFFC658u; // 801BE37C
  if (!crb(c,2)) { goto L_801BE3A0; } // 801BE380
  c->r[3]=0u+0x803A0000u; // 801BE384
  c->r[5]=0u+0x803A0000u; // 801BE388
  c->r[3]=c->r[3]+0xFFFFCBB8u; // 801BE38C
  c->r[4]=0u+0x00000233u; // 801BE390
  c->r[5]=c->r[5]+0xFFFFCB94u; // 801BE394
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BE398
  c->lr=0x801BE3A0u; f_80212260(c); // 801BE39C
L_801BE3A0:;
  c->r[3]=c->r[31]+0x00000004u; // 801BE3A0
  c->r[4]=c->r[30]+0x000000D8u; // 801BE3A4
  c->lr=0x801BE3ACu; f_801E45B0(c); // 801BE3A8
  cmps(c,0,(int32_t)c->r[30],0); // 801BE3AC
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE3B0
  c->r[3]=c->r[31]|c->r[31]; // 801BE3B4
  c->r[4]=c->r[30]|c->r[30]; // 801BE3B8
  c->lr=0x801BE3C0u; f_801C6110(c); // 801BE3BC
  goto L_801BE6F4; // 801BE3C0
L_801BE3C4:;
  c->r[3]=R32(c->r[30]+0x000000ACu); // 801BE3C4
  c->r[0]=R32(c->r[30]+0x000000A8u); // 801BE3C8
  {uint32_t ea=c->r[2]+0xFFFFA620u; c->f[2]=RF64(ea);} // 801BE3CC
  c->r[0]=c->r[0]-c->r[3]; // 801BE3D0
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[24]=c->ps1[24]=RF32(ea);} // 801BE3D4
  c->r[0]=c->r[0]^0x80000000u; // 801BE3D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BE3DC
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[23]=c->ps1[23]=RF32(ea);} // 801BE3E0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801BE3E4
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE3E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BE3EC
  fcmp(c,0,c->f[23],c->f[1]); // 801BE3F0
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801BE3F4
  if (!crb(c,2)) { goto L_801BE400; } // 801BE3F8
  goto L_801BE46C; // 801BE3FC
L_801BE400:;
  c->r[0]=R32(c->r[30]+0x00000088u); // 801BE400
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 801BE404
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801BE408
  if (crb(c,0)) { goto L_801BE414; } // 801BE40C
  goto L_801BE46C; // 801BE410
L_801BE414:;
  c->r[0]=c->r[3]-c->r[0]; // 801BE414
  cmps(c,0,(int32_t)c->r[3],0); // 801BE418
  c->r[0]=c->r[0]^0x80000000u; // 801BE41C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801BE420
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801BE424
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801BE428
  c->f[23]=c->ps1[23]=S(c->f[1]*c->f[0]); // 801BE42C
  if (!crb(c,2)) { goto L_801BE450; } // 801BE430
  c->r[3]=0u+0x803A0000u; // 801BE434
  c->r[5]=0u+0x803A0000u; // 801BE438
  c->r[3]=c->r[3]+0xFFFFCAA8u; // 801BE43C
  c->r[4]=0u+0x000001FCu; // 801BE440
  c->r[5]=c->r[5]+0xFFFFCAE8u; // 801BE444
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BE448
  c->lr=0x801BE450u; f_80212260(c); // 801BE44C
L_801BE450:;
  c->r[0]=R32(c->r[30]+0x0000008Cu); // 801BE450
  {uint32_t ea=c->r[2]+0xFFFFA620u; c->f[1]=RF64(ea);} // 801BE454
  c->r[0]=c->r[0]^0x80000000u; // 801BE458
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BE45C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801BE460
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BE464
  c->f[23]=c->ps1[23]=S(c->f[23]/c->f[0]); // 801BE468
L_801BE46C:;
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[23]); // 801BE46C
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE470
  c->r[0]=R8(c->r[30]+0x00000034u); // 801BE474
  cmps(c,0,(int32_t)c->r[0],0); // 801BE478
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801BE47C
  if (!crb(c,2)) { goto L_801BE488; } // 801BE480
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[31]); // 801BE484
L_801BE488:;
  {uint32_t ea=c->r[2]+0xFFFFA610u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE488
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[23]=c->ps1[23]=RF32(ea);} // 801BE48C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[24]); // 801BE490
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BE494
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE498
  c->f[23]=c->ps1[23]=S(c->f[23]*c->f[2]); // 801BE49C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801BE4A0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 801BE4A4
  c->f[23]=c->ps1[23]=S(c->f[23]*c->f[1]); // 801BE4A8
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 801BE4AC
  c->lr=0x801BE4B4u; f_801E10F0(c); // 801BE4B0
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[27]=c->ps1[27]=RF32(ea);} // 801BE4B4
  c->f[28]=c->ps1[28]=S(c->f[1]*c->f[23]); // 801BE4B8
  {uint32_t ea=c->r[30]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE4BC
  c->r[0]=R8(c->r[30]+0x00000034u); // 801BE4C0
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801BE4C4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE4C8
  cmpu(c,0,c->r[0],0x00000002u); // 801BE4CC
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801BE4D0
  if (!crb(c,2)) { goto L_801BE4DC; } // 801BE4D4
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[31]); // 801BE4D8
L_801BE4DC:;
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[31]=c->ps1[31]=RF32(ea);} // 801BE4DC
  cmps(c,0,(int32_t)c->r[31],0); // 801BE4E0
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE4E4
  c->f[3]=c->f[31]; // 801BE4E8
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BE4EC
  {uint32_t ea=c->r[30]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BE4F0
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801BE4F4
  {uint32_t ea=c->r[30]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE4F8
  c->f[26]=c->f[4]; // 801BE4FC
  c->f[7]=c->ps1[7]=S(c->f[3]+c->f[2]); // 801BE500
  {uint32_t ea=c->r[30]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE504
  c->f[5]=c->ps1[5]=S(c->f[3]+c->f[0]); // 801BE508
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BE50C
  c->f[6]=c->ps1[6]=S(c->f[3]+c->f[1]); // 801BE510
  {uint32_t ea=c->r[30]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE514
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[0]); // 801BE518
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE51C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[2]); // 801BE520
  {uint32_t ea=c->r[30]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BE524
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE528
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 801BE52C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801BE530
  {uint32_t ea=c->r[30]+0x00000050u; c->f[9]=c->ps1[9]=RF32(ea);} // 801BE534
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801BE538
  {uint32_t ea=c->r[30]+0x0000005Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 801BE53C
  c->f[25]=c->f[4]; // 801BE540
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[24]=c->ps1[24]=RF32(ea);} // 801BE544
  {uint32_t ea=c->r[30]+0x00000060u; c->f[4]=c->ps1[4]=RF32(ea);} // 801BE548
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[9]); // 801BE54C
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[8]); // 801BE550
  c->r[31]=R8(c->r[30]+0x0000003Cu); // 801BE554
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 801BE558
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[7]);} // 801BE55C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[6]);} // 801BE560
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 801BE564
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801BE568
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801BE56C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801BE570
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801BE574
  if (crb(c,2)) { goto L_801BE5BC; } // 801BE578
  c->r[0]=R8(c->r[30]+0x00000038u); // 801BE57C
  cmps(c,0,(int32_t)c->r[0],0); // 801BE580
  if (crb(c,2)) { goto L_801BE5A4; } // 801BE584
  c->r[3]=R32(c->r[30]+0x00000088u); // 801BE588
  c->r[4]=R32(c->r[30]+0x0000008Cu); // 801BE58C
  c->r[0]=c->r[3]+0x00000003u; // 801BE590
  W32(c->r[30]+0x00000088u,c->r[0]); // 801BE594
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801BE598
  if (!crb(c,1)) { goto L_801BE5A4; } // 801BE59C
  W32(c->r[30]+0x00000088u,c->r[4]); // 801BE5A0
L_801BE5A4:;
  c->r[3]=c->r[30]+0x0000001Cu; // 801BE5A4
  c->r[4]=0u+0x00000003u; // 801BE5A8
  c->lr=0x801BE5B0u; f_801C61B0(c); // 801BE5AC
  c->r[3]=c->r[30]|c->r[30]; // 801BE5B0
  c->r[4]=0u+0x00000003u; // 801BE5B4
  c->lr=0x801BE5BCu; f_801BFE90(c); // 801BE5B8
L_801BE5BC:;
  c->r[3]=c->r[30]+0x0000001Cu; // 801BE5BC
  c->lr=0x801BE5C4u; f_801C6250(c); // 801BE5C0
  c->f[23]=c->f[1]; // 801BE5C4
  {uint32_t ea=c->r[2]+0xFFFFA604u; c->f[22]=c->ps1[22]=RF32(ea);} // 801BE5C8
  c->r[3]=c->r[30]|c->r[30]; // 801BE5CC
  c->lr=0x801BE5D4u; f_801BFE60(c); // 801BE5D0
  c->lr=0x801BE5D8u; f_801E12A0(c); // 801BE5D4
  c->r[0]=R8(c->r[30]+0x00000034u); // 801BE5D8
  c->f[22]=c->ps1[22]=S(c->f[22]*c->f[1]); // 801BE5DC
  cmpu(c,0,c->r[0],0x00000001u); // 801BE5E0
  if (!crb(c,2)) { goto L_801BE5F8; } // 801BE5E4
  {uint32_t ea=c->r[2]+0xFFFFA60Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801BE5E8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 801BE5EC
  c->lr=0x801BE5F4u; f_801E12A0(c); // 801BE5F0
  c->f[22]=c->ps1[22]=S(c->f[22]*c->f[1]); // 801BE5F4
L_801BE5F8:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE5F8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE5FC
  if (crb(c,2)) { goto L_801BE6F4; } // 801BE600
  c->r[4]=R32(c->r[30]+0x000000B4u); // 801BE604
  c->lr=0x801BE60Cu; f_801DE850(c); // 801BE608
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE60C
  c->r[4]=R32(c->r[30]+0x000000B8u); // 801BE610
  c->lr=0x801BE618u; f_801DE870(c); // 801BE614
  c->f[1]=c->f[30]; // 801BE618
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE61C
  c->lr=0x801BE624u; f_801DE780(c); // 801BE620
  c->f[1]=c->f[22]; // 801BE624
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE628
  c->f[2]=c->f[29]; // 801BE62C
  c->lr=0x801BE634u; f_801DE7B0(c); // 801BE630
  c->f[1]=c->f[28]; // 801BE634
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE638
  c->lr=0x801BE640u; f_801DE830(c); // 801BE63C
  c->f[1]=c->f[27]; // 801BE640
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE644
  c->lr=0x801BE64Cu; f_801DE890(c); // 801BE648
  c->f[1]=c->f[31]; // 801BE64C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE650
  c->lr=0x801BE658u; f_801DE8B0(c); // 801BE654
  c->f[1]=c->f[26]; // 801BE658
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE65C
  c->lr=0x801BE664u; f_801DE8D0(c); // 801BE660
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE664
  c->r[4]=R8(c->r[30]+0x0000003Bu); // 801BE668
  {uint32_t ea=c->r[30]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE66C
  c->lr=0x801BE674u; f_801DE8F0(c); // 801BE670
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE674
  c->r[4]=c->r[31]|c->r[31]; // 801BE678
  c->lr=0x801BE680u; f_801DE9E0(c); // 801BE67C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE680
  c->r[4]=R32(c->r[30]+0x00000058u); // 801BE684
  c->lr=0x801BE68Cu; f_801DEA20(c); // 801BE688
  c->f[1]=c->f[25]; // 801BE68C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE690
  c->lr=0x801BE698u; f_801DEA40(c); // 801BE694
  c->f[1]=c->f[24]; // 801BE698
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE69C
  c->lr=0x801BE6A4u; f_801DEA70(c); // 801BE6A0
  c->r[31]=c->r[1]+0x00000018u; // 801BE6A4
  c->r[29]=0u+0x00000000u; // 801BE6A8
L_801BE6AC:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE6AC
  c->r[4]=c->r[29]|c->r[29]; // 801BE6B0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE6B4
  c->lr=0x801BE6BCu; f_801DEAB0(c); // 801BE6B8
  c->r[29]=c->r[29]+0x00000001u; // 801BE6BC
  c->r[31]=c->r[31]+0x00000004u; // 801BE6C0
  cmps(c,0,(int32_t)c->r[29],3); // 801BE6C4
  if (crb(c,0)) { IRQCHK(c); goto L_801BE6AC; } // 801BE6C8
  c->r[31]=c->r[1]+0x00000008u; // 801BE6CC
  c->r[29]=0u+0x00000000u; // 801BE6D0
L_801BE6D4:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE6D4
  c->r[4]=c->r[29]|c->r[29]; // 801BE6D8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE6DC
  c->lr=0x801BE6E4u; f_801DEB70(c); // 801BE6E0
  c->r[29]=c->r[29]+0x00000001u; // 801BE6E4
  c->r[31]=c->r[31]+0x00000004u; // 801BE6E8
  cmps(c,0,(int32_t)c->r[29],4); // 801BE6EC
  if (crb(c,0)) { IRQCHK(c); goto L_801BE6D4; } // 801BE6F0
L_801BE6F4:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 801BE6F4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 801BE6F8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 801BE6FC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 801BE700
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 801BE704
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 801BE708
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 801BE70C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 801BE710
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 801BE714
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 801BE718
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 801BE71C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 801BE720
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 801BE724
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,25,ea,0,0);} // 801BE728
  {uint32_t ea=c->r[1]+0x00000080u; c->f[25]=RF64(ea);} // 801BE72C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,24,ea,0,0);} // 801BE730
  {uint32_t ea=c->r[1]+0x00000070u; c->f[24]=RF64(ea);} // 801BE734
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,23,ea,0,0);} // 801BE738
  {uint32_t ea=c->r[1]+0x00000060u; c->f[23]=RF64(ea);} // 801BE73C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,22,ea,0,0);} // 801BE740
  {uint32_t ea=c->r[1]+0x00000050u; c->f[22]=RF64(ea);} // 801BE744
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801BE748
  c->r[30]=R32(c->r[1]+0x00000048u); // 801BE74C
  c->r[29]=R32(c->r[1]+0x00000044u); // 801BE750
  c->lr=c->r[0]; // 801BE754
  c->r[1]=c->r[1]+0x000000F0u; // 801BE758
  return; // 801BE75C
}

// fn_801BE760
void f_801BE760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE760
  c->r[0]=c->lr; // 801BE764
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE768
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE76C
  c->r[31]=c->r[6]|c->r[6]; // 801BE770
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE774
  c->r[30]=c->r[4]|c->r[4]; // 801BE778
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE77C
  c->r[29]=c->r[3]|c->r[3]; // 801BE780
  W32(c->r[3]+0x000000B0u,c->r[5]); // 801BE784
  c->r[3]=c->r[3]+0x0000001Cu; // 801BE788
  c->lr=0x801BE790u; f_801C6190(c); // 801BE78C
  {uint32_t ea=c->r[2]+0xFFFFA628u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BE790
  c->r[3]=c->r[29]|c->r[29]; // 801BE794
  c->lr=0x801BE79Cu; f_801BFE40(c); // 801BE798
  c->r[0]=0u+0x00000000u; // 801BE79C
  W32(c->r[29]+0x00000088u,c->r[0]); // 801BE7A0
  c->r[3]=R32(c->r[29]+0x000000D0u); // 801BE7A4
  c->r[4]=c->r[30]|c->r[30]; // 801BE7A8
  c->r[5]=c->r[31]|c->r[31]; // 801BE7AC
  c->lr=0x801BE7B4u; f_801DE3D0(c); // 801BE7B0
  c->r[3]=R32(c->r[29]+0x000000D0u); // 801BE7B4
  c->lr=0x801BE7BCu; f_801DE600(c); // 801BE7B8
  c->r[0]=0u+0x00000001u; // 801BE7BC
  W8(c->r[29]+0x00000036u,c->r[0]); // 801BE7C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE7C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE7C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE7CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE7D0
  c->lr=c->r[0]; // 801BE7D4
  c->r[1]=c->r[1]+0x00000020u; // 801BE7D8
  return; // 801BE7DC
}

// fn_801BE7E0
void f_801BE7E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE7E0
  c->r[0]=c->lr; // 801BE7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE7E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE7EC
  c->r[31]=c->r[3]|c->r[3]; // 801BE7F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BE7F4
  cmps(c,0,(int32_t)c->r[0],4); // 801BE7F8
  if (crb(c,2)) { goto L_801BE82C; } // 801BE7FC
  c->r[4]=R32(c->r[3]+0x000000D0u); // 801BE800
  cmps(c,0,(int32_t)c->r[4],0); // 801BE804
  if (crb(c,2)) { goto L_801BE824; } // 801BE808
  c->r[0]=R8(c->r[3]+0x00000039u); // 801BE80C
  cmps(c,0,(int32_t)c->r[0],0); // 801BE810
  if (!crb(c,2)) { goto L_801BE824; } // 801BE814
  c->r[3]=c->r[4]|c->r[4]; // 801BE818
  c->r[4]=0u+0x00000001u; // 801BE81C
  c->lr=0x801BE824u; f_801DED00(c); // 801BE820
L_801BE824:;
  c->r[0]=0u+0x00000004u; // 801BE824
  W32(c->r[31]+0x00000000u,c->r[0]); // 801BE828
L_801BE82C:;
  c->r[0]=0u+0x00000000u; // 801BE82C
  W8(c->r[31]+0x00000035u,c->r[0]); // 801BE830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE834
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE838
  c->lr=c->r[0]; // 801BE83C
  c->r[1]=c->r[1]+0x00000010u; // 801BE840
  return; // 801BE844
}

// fn_801BE850
void f_801BE850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE850
  c->r[0]=c->lr; // 801BE854
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE85C
  c->r[31]=c->r[3]|c->r[3]; // 801BE860
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801BE864
  cmps(c,0,(int32_t)c->r[0],0); // 801BE868
  if (!crb(c,2)) { goto L_801BE8B0; } // 801BE86C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BE870
  cmps(c,0,(int32_t)c->r[0],4); // 801BE874
  if (crb(c,2)) { goto L_801BE8A8; } // 801BE878
  c->r[4]=R32(c->r[3]+0x000000D0u); // 801BE87C
  cmps(c,0,(int32_t)c->r[4],0); // 801BE880
  if (crb(c,2)) { goto L_801BE8A0; } // 801BE884
  c->r[0]=R8(c->r[3]+0x00000039u); // 801BE888
  cmps(c,0,(int32_t)c->r[0],0); // 801BE88C
  if (!crb(c,2)) { goto L_801BE8A0; } // 801BE890
  c->r[3]=c->r[4]|c->r[4]; // 801BE894
  c->r[4]=0u+0x00000001u; // 801BE898
  c->lr=0x801BE8A0u; f_801DED00(c); // 801BE89C
L_801BE8A0:;
  c->r[0]=0u+0x00000004u; // 801BE8A0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801BE8A4
L_801BE8A8:;
  c->r[0]=0u+0x00000000u; // 801BE8A8
  W8(c->r[31]+0x00000035u,c->r[0]); // 801BE8AC
L_801BE8B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE8B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE8B4
  c->lr=c->r[0]; // 801BE8B8
  c->r[1]=c->r[1]+0x00000010u; // 801BE8BC
  return; // 801BE8C0
}

// fn_801BE8D0
void f_801BE8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE8D0
  c->r[0]=c->lr; // 801BE8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE8DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BE8E0
  c->r[30]=c->r[3]|c->r[3]; // 801BE8E4
  c->r[0]=R32(c->r[3]+0x000000D0u); // 801BE8E8
  cmps(c,0,(int32_t)c->r[0],0); // 801BE8EC
  if (crb(c,2)) { goto L_801BEA00; } // 801BE8F0
  c->r[3]=c->r[0]|c->r[0]; // 801BE8F4
  c->lr=0x801BE8FCu; f_801DE620(c); // 801BE8F8
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801BE8FC
  c->lr=0x801BE904u; f_801DE300(c); // 801BE900
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801BE904
  c->r[0]=0u+0x00000000u; // 801BE908
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801BE90C
  cmps(c,0,(int32_t)c->r[12],0); // 801BE910
  W8(c->r[30]+0x00000035u,c->r[0]); // 801BE914
  W8(c->r[30]+0x00000036u,c->r[0]); // 801BE918
  if (crb(c,2)) { goto L_801BE934; } // 801BE91C
  c->r[3]=c->r[30]|c->r[30]; // 801BE920
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801BE924
  c->r[4]=0u+0x00000000u; // 801BE928
  c->ctr=c->r[12]; // 801BE92C
  if (true) { c->lr=0x801BE934u; dispatch(c,c->ctr); } // 801BE930
L_801BE934:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801BE934
  cmps(c,0,(int32_t)c->r[3],0); // 801BE938
  if (crb(c,2)) { goto L_801BE954; } // 801BE93C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BE940
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801BE944
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BE948
  c->ctr=c->r[12]; // 801BE94C
  if (true) { c->lr=0x801BE954u; dispatch(c,c->ctr); } // 801BE950
L_801BE954:;
  c->r[0]=R8(c->r[30]+0x00000037u); // 801BE954
  cmps(c,0,(int32_t)c->r[0],0); // 801BE958
  if (crb(c,2)) { goto L_801BEA00; } // 801BE95C
  c->r[7]=0u+0x00000000u; // 801BE960
  W8(c->r[30]+0x00000037u,c->r[7]); // 801BE964
  c->r[0]=R8(c->r[13]+0xFFFFC428u); // 801BE968
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BE96C
  if (!crb(c,2)) { goto L_801BE9B4; } // 801BE970
  c->r[6]=0u+0x805B0000u; // 801BE974
  c->r[4]=0u+0x801C0000u; // 801BE978
  c->r[3]=c->r[6]+0xFFFFC658u; // 801BE97C
  c->r[5]=0u+0x805B0000u; // 801BE980
  c->r[0]=c->r[3]+0x00000008u; // 801BE984
  W32(c->r[6]+0xFFFFC658u,c->r[7]); // 801BE988
  c->r[4]=c->r[4]+0xFFFFDD70u; // 801BE98C
  c->r[5]=c->r[5]+0xFFFFC648u; // 801BE990
  W32(c->r[3]+0x00000004u,c->r[7]); // 801BE994
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BE998
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BE99C
  W8(c->r[3]+0x00000010u,c->r[7]); // 801BE9A0
  W32(c->r[3]+0x00000014u,c->r[7]); // 801BE9A4
  c->lr=0x801BE9ACu; f_802E6064(c); // 801BE9A8
  c->r[0]=0u+0x00000001u; // 801BE9AC
  W8(c->r[13]+0xFFFFC428u,c->r[0]); // 801BE9B0
L_801BE9B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BE9B4
  c->r[31]=0u+0x805B0000u; // 801BE9B8
  c->r[31]=c->r[31]+0xFFFFC658u; // 801BE9BC
  if (!crb(c,2)) { goto L_801BE9E0; } // 801BE9C0
  c->r[3]=0u+0x803A0000u; // 801BE9C4
  c->r[5]=0u+0x803A0000u; // 801BE9C8
  c->r[3]=c->r[3]+0xFFFFCBB8u; // 801BE9CC
  c->r[4]=0u+0x00000233u; // 801BE9D0
  c->r[5]=c->r[5]+0xFFFFCB94u; // 801BE9D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BE9D8
  c->lr=0x801BE9E0u; f_80212260(c); // 801BE9DC
L_801BE9E0:;
  c->r[3]=c->r[31]+0x00000004u; // 801BE9E0
  c->r[4]=c->r[30]+0x000000D8u; // 801BE9E4
  c->lr=0x801BE9ECu; f_801E45B0(c); // 801BE9E8
  cmps(c,0,(int32_t)c->r[30],0); // 801BE9EC
  if (crb(c,2)) { goto L_801BEA00; } // 801BE9F0
  c->r[3]=c->r[31]|c->r[31]; // 801BE9F4
  c->r[4]=c->r[30]|c->r[30]; // 801BE9F8
  c->lr=0x801BEA00u; f_801C6110(c); // 801BE9FC
L_801BEA00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEA04
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEA08
  c->lr=c->r[0]; // 801BEA0C
  c->r[1]=c->r[1]+0x00000010u; // 801BEA10
  return; // 801BEA14
}

// fn_801BEA20
void f_801BEA20(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000088u); // 801BEA20
  c->r[5]=R32(c->r[3]+0x0000008Cu); // 801BEA24
  c->r[0]=c->r[0]+c->r[4]; // 801BEA28
  W32(c->r[3]+0x00000088u,c->r[0]); // 801BEA2C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801BEA30
  if (!crb(c,1)) return; // 801BEA34
  W32(c->r[3]+0x00000088u,c->r[5]); // 801BEA38
  return; // 801BEA3C
}

// SetSweepParam__Q44nw4r3snd6detail7ChannelFfib
void f_801BEA40(Ctx* __restrict c) {
  trace_call(0x801BEA40u);
  c->r[0]=0u+0x00000000u; // 801BEA40
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 801BEA44
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 801BEA48
  W8(c->r[3]+0x00000038u,c->r[5]); // 801BEA4C
  W32(c->r[3]+0x00000088u,c->r[0]); // 801BEA50
  return; // 801BEA54
}

// fn_801BEA60
void f_801BEA60(Ctx* __restrict c) {
  W8(c->r[3]+0x0000003Bu,c->r[4]); // 801BEA60
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[1]);} // 801BEA64
  return; // 801BEA68
}

// fn_801BEA70
void f_801BEA70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEA70
  c->r[0]=c->lr; // 801BEA74
  cmps(c,0,(int32_t)c->r[5],0); // 801BEA78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEA7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEA80
  c->r[31]=c->r[4]|c->r[4]; // 801BEA84
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEA88
  c->r[30]=c->r[5]|c->r[5]; // 801BEA8C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEA90
  c->r[29]=c->r[3]|c->r[3]; // 801BEA94
  if (!crb(c,2)) { goto L_801BEAB8; } // 801BEA98
  c->r[3]=0u+0x803A0000u; // 801BEA9C
  c->r[5]=0u+0x803A0000u; // 801BEAA0
  c->r[3]=c->r[3]+0xFFFFCAA8u; // 801BEAA4
  c->r[4]=0u+0x00000217u; // 801BEAA8
  c->r[5]=c->r[5]+0xFFFFCB10u; // 801BEAAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BEAB0
  c->lr=0x801BEAB8u; f_80212260(c); // 801BEAB4
L_801BEAB8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BEAB8
  if (crb(c,2)) { goto L_801BEADC; } // 801BEABC
  cmps(c,0,(int32_t)c->r[31],1); // 801BEAC0
  if (crb(c,2)) { goto L_801BEAEC; } // 801BEAC4
  cmps(c,0,(int32_t)c->r[31],2); // 801BEAC8
  if (crb(c,2)) { goto L_801BEAFC; } // 801BEACC
  cmps(c,0,(int32_t)c->r[31],3); // 801BEAD0
  if (crb(c,2)) { goto L_801BEB04; } // 801BEAD4
  goto L_801BEB08; // 801BEAD8
L_801BEADC:;
  c->r[3]=c->r[29]|c->r[29]; // 801BEADC
  c->r[31]=0u+0x00000002u; // 801BEAE0
  c->lr=0x801BEAE8u; f_801DE300(c); // 801BEAE4
  goto L_801BEB08; // 801BEAE8
L_801BEAEC:;
  c->r[3]=c->r[29]|c->r[29]; // 801BEAEC
  c->r[31]=0u+0x00000003u; // 801BEAF0
  c->lr=0x801BEAF8u; f_801DE300(c); // 801BEAF4
  goto L_801BEB08; // 801BEAF8
L_801BEAFC:;
  c->r[31]=0u+0x00000001u; // 801BEAFC
  goto L_801BEB08; // 801BEB00
L_801BEB04:;
  c->r[31]=0u+0x00000001u; // 801BEB04
L_801BEB08:;
  c->r[12]=R32(c->r[30]+0x000000C0u); // 801BEB08
  cmps(c,0,(int32_t)c->r[12],0); // 801BEB0C
  if (crb(c,2)) { goto L_801BEB28; } // 801BEB10
  c->r[3]=c->r[30]|c->r[30]; // 801BEB14
  c->r[4]=c->r[31]|c->r[31]; // 801BEB18
  c->r[5]=R32(c->r[30]+0x000000C4u); // 801BEB1C
  c->ctr=c->r[12]; // 801BEB20
  if (true) { c->lr=0x801BEB28u; dispatch(c,c->ctr); } // 801BEB24
L_801BEB28:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801BEB28
  cmps(c,0,(int32_t)c->r[3],0); // 801BEB2C
  if (crb(c,2)) { goto L_801BEB48; } // 801BEB30
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BEB34
  c->r[4]=R32(c->r[30]+0x000000CCu); // 801BEB38
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BEB3C
  c->ctr=c->r[12]; // 801BEB40
  if (true) { c->lr=0x801BEB48u; dispatch(c,c->ctr); } // 801BEB44
L_801BEB48:;
  c->r[7]=0u+0x00000000u; // 801BEB48
  W32(c->r[30]+0x000000D0u,c->r[7]); // 801BEB4C
  W8(c->r[30]+0x00000035u,c->r[7]); // 801BEB50
  W8(c->r[30]+0x00000036u,c->r[7]); // 801BEB54
  W8(c->r[30]+0x00000037u,c->r[7]); // 801BEB58
  c->r[0]=R8(c->r[13]+0xFFFFC428u); // 801BEB5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BEB60
  if (!crb(c,2)) { goto L_801BEBA8; } // 801BEB64
  c->r[6]=0u+0x805B0000u; // 801BEB68
  c->r[4]=0u+0x801C0000u; // 801BEB6C
  c->r[3]=c->r[6]+0xFFFFC658u; // 801BEB70
  c->r[5]=0u+0x805B0000u; // 801BEB74
  c->r[0]=c->r[3]+0x00000008u; // 801BEB78
  W32(c->r[6]+0xFFFFC658u,c->r[7]); // 801BEB7C
  c->r[4]=c->r[4]+0xFFFFDD70u; // 801BEB80
  c->r[5]=c->r[5]+0xFFFFC648u; // 801BEB84
  W32(c->r[3]+0x00000004u,c->r[7]); // 801BEB88
  W32(c->r[3]+0x00000008u,c->r[0]); // 801BEB8C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801BEB90
  W8(c->r[3]+0x00000010u,c->r[7]); // 801BEB94
  W32(c->r[3]+0x00000014u,c->r[7]); // 801BEB98
  c->lr=0x801BEBA0u; f_802E6064(c); // 801BEB9C
  c->r[0]=0u+0x00000001u; // 801BEBA0
  W8(c->r[13]+0xFFFFC428u,c->r[0]); // 801BEBA4
L_801BEBA8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801BEBA8
  c->r[31]=0u+0x805B0000u; // 801BEBAC
  c->r[31]=c->r[31]+0xFFFFC658u; // 801BEBB0
  if (!crb(c,2)) { goto L_801BEBD4; } // 801BEBB4
  c->r[3]=0u+0x803A0000u; // 801BEBB8
  c->r[5]=0u+0x803A0000u; // 801BEBBC
  c->r[3]=c->r[3]+0xFFFFCBB8u; // 801BEBC0
  c->r[4]=0u+0x00000233u; // 801BEBC4
  c->r[5]=c->r[5]+0xFFFFCB94u; // 801BEBC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BEBCC
  c->lr=0x801BEBD4u; f_80212260(c); // 801BEBD0
L_801BEBD4:;
  c->r[3]=c->r[31]+0x00000004u; // 801BEBD4
  c->r[4]=c->r[30]+0x000000D8u; // 801BEBD8
  c->lr=0x801BEBE0u; f_801E45B0(c); // 801BEBDC
  cmps(c,0,(int32_t)c->r[30],0); // 801BEBE0
  if (crb(c,2)) { goto L_801BEBF4; } // 801BEBE4
  c->r[3]=c->r[31]|c->r[31]; // 801BEBE8
  c->r[4]=c->r[30]|c->r[30]; // 801BEBEC
  c->lr=0x801BEBF4u; f_801C6110(c); // 801BEBF0
L_801BEBF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BEBF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BEBF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BEBFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BEC00
  c->lr=c->r[0]; // 801BEC04
  c->r[1]=c->r[1]+0x00000020u; // 801BEC08
  return; // 801BEC0C
}

// fn_801BEC10
void f_801BEC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEC10
  c->r[0]=c->lr; // 801BEC14
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BEC18
  c->r[11]=c->r[1]+0x00000040u; // 801BEC1C
  c->lr=0x801BEC24u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BEC20
  cmpu(c,0,c->r[5],0x000000FFu); // 801BEC24
  c->r[25]=0u+0x803A0000u; // 801BEC28
  c->r[27]=c->r[3]|c->r[3]; // 801BEC2C
  c->r[28]=c->r[4]|c->r[4]; // 801BEC30
  c->r[29]=c->r[5]|c->r[5]; // 801BEC34
  c->r[30]=c->r[6]|c->r[6]; // 801BEC38
  c->r[31]=c->r[7]|c->r[7]; // 801BEC3C
  c->r[25]=c->r[25]+0xFFFFCAA8u; // 801BEC40
  c->r[0]=0u+0x00000000u; // 801BEC44
  if (crb(c,1)) { goto L_801BEC50; } // 801BEC48
  c->r[0]=0u+0x00000001u; // 801BEC4C
L_801BEC50:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BEC50
  if (!crb(c,2)) { goto L_801BEC78; } // 801BEC54
  c->r[6]=c->r[29]|c->r[29]; // 801BEC58
  c->r[3]=c->r[25]+0x00000000u; // 801BEC5C
  c->r[5]=c->r[25]+0x0000008Cu; // 801BEC60
  c->r[4]=0u+0x00000252u; // 801BEC64
  c->r[7]=0u+0x00000000u; // 801BEC68
  c->r[8]=0u+0x000000FFu; // 801BEC6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BEC70
  c->lr=0x801BEC78u; f_80212260(c); // 801BEC74
L_801BEC78:;
  c->r[0]=R8(c->r[13]+0xFFFFC428u); // 801BEC78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BEC7C
  if (!crb(c,2)) { goto L_801BECC8; } // 801BEC80
  c->r[6]=0u+0x805B0000u; // 801BEC84
  c->r[0]=0u+0x00000000u; // 801BEC88
  c->r[3]=c->r[6]+0xFFFFC658u; // 801BEC8C
  c->r[4]=0u+0x801C0000u; // 801BEC90
  c->r[7]=c->r[3]+0x00000008u; // 801BEC94
  c->r[5]=0u+0x805B0000u; // 801BEC98
  W32(c->r[6]+0xFFFFC658u,c->r[0]); // 801BEC9C
  c->r[4]=c->r[4]+0xFFFFDD70u; // 801BECA0
  c->r[5]=c->r[5]+0xFFFFC648u; // 801BECA4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BECA8
  W32(c->r[3]+0x00000008u,c->r[7]); // 801BECAC
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801BECB0
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BECB4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BECB8
  c->lr=0x801BECC0u; f_802E6064(c); // 801BECBC
  c->r[0]=0u+0x00000001u; // 801BECC0
  W8(c->r[13]+0xFFFFC428u,c->r[0]); // 801BECC4
L_801BECC8:;
  c->r[24]=0u+0x805B0000u; // 801BECC8
  c->r[24]=c->r[24]+0xFFFFC658u; // 801BECCC
  c->r[3]=c->r[24]|c->r[24]; // 801BECD0
  c->lr=0x801BECD8u; f_801C60B0(c); // 801BECD4
  cmps(c,0,(int32_t)c->r[3],0); // 801BECD8
  c->r[23]=c->r[3]|c->r[3]; // 801BECDC
  if (!crb(c,2)) { goto L_801BECEC; } // 801BECE0
  c->r[23]=0u+0x00000000u; // 801BECE4
  goto L_801BED34; // 801BECE8
L_801BECEC:;
  if (crb(c,2)) { goto L_801BED34; } // 801BECEC
  c->lr=0x801BECF4u; f_801BFDB0(c); // 801BECF0
  c->r[3]=c->r[23]+0x0000001Cu; // 801BECF4
  c->lr=0x801BECFCu; f_801C6160(c); // 801BECF8
  c->r[0]=0u+0x00000000u; // 801BECFC
  W32(c->r[23]+0x0000002Cu,c->r[0]); // 801BED00
  {uint32_t ea=c->r[2]+0xFFFFA600u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BED04
  {uint32_t ea=c->r[23]+0x00000030u; WF32(ea,c->f[0]);} // 801BED08
  W8(c->r[23]+0x00000035u,c->r[0]); // 801BED0C
  W8(c->r[23]+0x00000036u,c->r[0]); // 801BED10
  W8(c->r[23]+0x00000037u,c->r[0]); // 801BED14
  W8(c->r[23]+0x000000A0u,c->r[0]); // 801BED18
  W8(c->r[23]+0x000000A1u,c->r[0]); // 801BED1C
  W16(c->r[23]+0x000000A2u,c->r[0]); // 801BED20
  W16(c->r[23]+0x000000A4u,c->r[0]); // 801BED24
  W32(c->r[23]+0x000000D0u,c->r[0]); // 801BED28
  W32(c->r[23]+0x000000D8u,c->r[0]); // 801BED2C
  W32(c->r[23]+0x000000DCu,c->r[0]); // 801BED30
L_801BED34:;
  cmps(c,0,(int32_t)c->r[23],0); // 801BED34
  c->r[26]=c->r[24]+0x00000008u; // 801BED38
  if (!crb(c,2)) { goto L_801BED5C; } // 801BED3C
  c->r[3]=0u+0x803A0000u; // 801BED40
  c->r[5]=0u+0x803A0000u; // 801BED44
  c->r[3]=c->r[3]+0xFFFFCBB8u; // 801BED48
  c->r[4]=0u+0x00000233u; // 801BED4C
  c->r[5]=c->r[5]+0xFFFFCB94u; // 801BED50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BED54
  c->lr=0x801BED5Cu; f_80212260(c); // 801BED58
L_801BED5C:;
  c->r[22]=c->r[23]+0x000000D8u; // 801BED5C
  W32(c->r[1]+0x00000008u,c->r[26]); // 801BED60
  c->r[5]=c->r[22]|c->r[22]; // 801BED64
  c->r[3]=c->r[24]+0x00000004u; // 801BED68
  c->r[4]=c->r[1]+0x00000008u; // 801BED6C
  c->lr=0x801BED74u; f_801E44B0(c); // 801BED70
  cmps(c,0,(int32_t)c->r[23],0); // 801BED74
  if (!crb(c,2)) { goto L_801BED9C; } // 801BED78
  if (!crb(c,2)) { goto L_801BED94; } // 801BED7C
  c->r[3]=c->r[25]+0x00000000u; // 801BED80
  c->r[5]=c->r[25]+0x000000D0u; // 801BED84
  c->r[4]=0u+0x00000257u; // 801BED88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BED8C
  c->lr=0x801BED94u; f_80212300(c); // 801BED90
L_801BED94:;
  c->r[3]=0u+0x00000000u; // 801BED94
  goto L_801BEE84; // 801BED98
L_801BED9C:;
  c->r[26]=0u+0x00000001u; // 801BED9C
  W8(c->r[23]+0x00000037u,c->r[26]); // 801BEDA0
  c->lr=0x801BEDA8u; f_801E0470(c); // 801BEDA4
  c->r[7]=0u+0x801C0000u; // 801BEDA8
  c->r[4]=c->r[27]|c->r[27]; // 801BEDAC
  c->r[5]=c->r[28]|c->r[28]; // 801BEDB0
  c->r[6]=c->r[29]|c->r[29]; // 801BEDB4
  c->r[8]=c->r[23]|c->r[23]; // 801BEDB8
  c->r[7]=c->r[7]+0xFFFFEA70u; // 801BEDBC
  c->lr=0x801BEDC4u; f_801E0670(c); // 801BEDC0
  cmps(c,0,(int32_t)c->r[3],0); // 801BEDC4
  if (!crb(c,2)) { goto L_801BEE6C; } // 801BEDC8
  c->r[0]=R8(c->r[13]+0xFFFFC428u); // 801BEDCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BEDD0
  if (!crb(c,2)) { goto L_801BEE18; } // 801BEDD4
  c->r[6]=0u+0x805B0000u; // 801BEDD8
  c->r[0]=0u+0x00000000u; // 801BEDDC
  c->r[3]=c->r[6]+0xFFFFC658u; // 801BEDE0
  c->r[4]=0u+0x801C0000u; // 801BEDE4
  c->r[7]=c->r[3]+0x00000008u; // 801BEDE8
  c->r[5]=0u+0x805B0000u; // 801BEDEC
  W32(c->r[6]+0xFFFFC658u,c->r[0]); // 801BEDF0
  c->r[4]=c->r[4]+0xFFFFDD70u; // 801BEDF4
  c->r[5]=c->r[5]+0xFFFFC648u; // 801BEDF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BEDFC
  W32(c->r[3]+0x00000008u,c->r[7]); // 801BEE00
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801BEE04
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BEE08
  W32(c->r[3]+0x00000014u,c->r[0]); // 801BEE0C
  c->lr=0x801BEE14u; f_802E6064(c); // 801BEE10
  W8(c->r[13]+0xFFFFC428u,c->r[26]); // 801BEE14
L_801BEE18:;
  cmps(c,0,(int32_t)c->r[23],0); // 801BEE18
  c->r[24]=0u+0x805B0000u; // 801BEE1C
  c->r[24]=c->r[24]+0xFFFFC658u; // 801BEE20
  if (!crb(c,2)) { goto L_801BEE44; } // 801BEE24
  c->r[3]=0u+0x803A0000u; // 801BEE28
  c->r[5]=0u+0x803A0000u; // 801BEE2C
  c->r[3]=c->r[3]+0xFFFFCBB8u; // 801BEE30
  c->r[4]=0u+0x00000233u; // 801BEE34
  c->r[5]=c->r[5]+0xFFFFCB94u; // 801BEE38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BEE3C
  c->lr=0x801BEE44u; f_80212260(c); // 801BEE40
L_801BEE44:;
  c->r[4]=c->r[22]|c->r[22]; // 801BEE44
  c->r[3]=c->r[24]+0x00000004u; // 801BEE48
  c->lr=0x801BEE50u; f_801E45B0(c); // 801BEE4C
  cmps(c,0,(int32_t)c->r[23],0); // 801BEE50
  if (crb(c,2)) { goto L_801BEE64; } // 801BEE54
  c->r[3]=c->r[24]|c->r[24]; // 801BEE58
  c->r[4]=c->r[23]|c->r[23]; // 801BEE5C
  c->lr=0x801BEE64u; f_801C6110(c); // 801BEE60
L_801BEE64:;
  c->r[3]=0u+0x00000000u; // 801BEE64
  goto L_801BEE84; // 801BEE68
L_801BEE6C:;
  W32(c->r[23]+0x000000D0u,c->r[3]); // 801BEE6C
  c->r[3]=c->r[23]|c->r[23]; // 801BEE70
  c->r[4]=c->r[30]|c->r[30]; // 801BEE74
  c->r[5]=c->r[31]|c->r[31]; // 801BEE78
  c->lr=0x801BEE80u; f_801BDF00(c); // 801BEE7C
  c->r[3]=c->r[23]|c->r[23]; // 801BEE80
L_801BEE84:;
  c->r[11]=c->r[1]+0x00000040u; // 801BEE84
  c->lr=0x801BEE8Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BEE88
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BEE8C
  c->lr=c->r[0]; // 801BEE90
  c->r[1]=c->r[1]+0x00000040u; // 801BEE94
  return; // 801BEE98
}

// FreeChannel__Q44nw4r3snd6detail7ChannelFPQ44nw4r3snd6detail7Channel
void f_801BEEA0(Ctx* __restrict c) {
  trace_call(0x801BEEA0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801BEEA0
  if (crb(c,2)) return; // 801BEEA4
  c->r[0]=0u+0x00000000u; // 801BEEA8
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801BEEAC
  W32(c->r[3]+0x000000C4u,c->r[0]); // 801BEEB0
  return; // 801BEEB4
}

// fn_801BEEC0
void f_801BEEC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEEC0
  c->r[0]=c->lr; // 801BEEC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEEC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEECC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEED0
  c->lr=0x801BEED8u; f_801251B0(c); // 801BEED4
  c->r[0]=R8(c->r[13]+0xFFFFC430u); // 801BEED8
  c->r[31]=c->r[3]|c->r[3]; // 801BEEDC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BEEE0
  if (!crb(c,2)) { goto L_801BEF20; } // 801BEEE4
  c->r[3]=0u+0x805B0000u; // 801BEEE8
  c->r[4]=0u+0x801C0000u; // 801BEEEC
  c->r[3]=c->r[3]+0xFFFFC684u; // 801BEEF0
  c->r[0]=0u+0x00000000u; // 801BEEF4
  c->r[6]=c->r[3]+0x00000004u; // 801BEEF8
  c->r[5]=0u+0x805B0000u; // 801BEEFC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BEF00
  c->r[4]=c->r[4]+0xFFFFEF50u; // 801BEF04
  c->r[5]=c->r[5]+0xFFFFC678u; // 801BEF08
  W32(c->r[3]+0x00000004u,c->r[6]); // 801BEF0C
  W32(c->r[3]+0x00000008u,c->r[6]); // 801BEF10
  c->lr=0x801BEF18u; f_802E6064(c); // 801BEF14
  c->r[0]=0u+0x00000001u; // 801BEF18
  W8(c->r[13]+0xFFFFC430u,c->r[0]); // 801BEF1C
L_801BEF20:;
  c->r[30]=0u+0x805B0000u; // 801BEF20
  c->r[3]=c->r[31]|c->r[31]; // 801BEF24
  c->r[30]=c->r[30]+0xFFFFC684u; // 801BEF28
  c->lr=0x801BEF30u; f_801251F0(c); // 801BEF2C
  c->r[3]=c->r[30]|c->r[30]; // 801BEF30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEF34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEF38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEF3C
  c->lr=c->r[0]; // 801BEF40
  c->r[1]=c->r[1]+0x00000010u; // 801BEF44
  return; // 801BEF48
}

// fn_801BEF50
void f_801BEF50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEF50
  c->r[0]=c->lr; // 801BEF54
  cmps(c,0,(int32_t)c->r[3],0); // 801BEF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEF5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEF60
  c->r[31]=c->r[4]|c->r[4]; // 801BEF64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEF68
  c->r[30]=c->r[3]|c->r[3]; // 801BEF6C
  if (crb(c,2)) { goto L_801BEF90; } // 801BEF70
  if (crb(c,2)) { goto L_801BEF80; } // 801BEF74
  c->r[4]=0u+0x00000000u; // 801BEF78
  c->lr=0x801BEF80u; f_801E4130(c); // 801BEF7C
L_801BEF80:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BEF80
  if (!crb(c,1)) { goto L_801BEF90; } // 801BEF84
  c->r[3]=c->r[30]|c->r[30]; // 801BEF88
  c->lr=0x801BEF90u; f_802E61AC(c); // 801BEF8C
L_801BEF90:;
  c->r[3]=c->r[30]|c->r[30]; // 801BEF90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEF94
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEF98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEF9C
  c->lr=c->r[0]; // 801BEFA0
  c->r[1]=c->r[1]+0x00000010u; // 801BEFA4
  return; // 801BEFA8
}

// fn_801BEFB0
void f_801BEFB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEFB0
  c->r[0]=c->lr; // 801BEFB4
  cmps(c,0,(int32_t)c->r[4],0); // 801BEFB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BEFBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BEFC0
  c->r[31]=c->r[3]+0x00000004u; // 801BEFC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BEFC8
  c->r[30]=c->r[4]|c->r[4]; // 801BEFCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BEFD0
  c->r[29]=c->r[3]|c->r[3]; // 801BEFD4
  if (!crb(c,2)) { goto L_801BEFF8; } // 801BEFD8
  c->r[3]=0u+0x803A0000u; // 801BEFDC
  c->r[5]=0u+0x803A0000u; // 801BEFE0
  c->r[3]=c->r[3]+0xFFFFCC4Cu; // 801BEFE4
  c->r[4]=0u+0x00000233u; // 801BEFE8
  c->r[5]=c->r[5]+0xFFFFCC28u; // 801BEFEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BEFF0
  c->lr=0x801BEFF8u; f_80212260(c); // 801BEFF4
L_801BEFF8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801BEFF8
  c->r[3]=c->r[29]|c->r[29]; // 801BEFFC
  c->r[5]=c->r[30]|c->r[30]; // 801BF000
  c->r[4]=c->r[1]+0x00000008u; // 801BF004
  c->lr=0x801BF00Cu; f_801E44B0(c); // 801BF008
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF00C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF010
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF014
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BF018
  c->lr=c->r[0]; // 801BF01C
  c->r[1]=c->r[1]+0x00000020u; // 801BF020
  return; // 801BF024
}

// fn_801BF030
void f_801BF030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF030
  c->r[0]=c->lr; // 801BF034
  cmps(c,0,(int32_t)c->r[4],0); // 801BF038
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF03C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF040
  c->r[31]=c->r[4]|c->r[4]; // 801BF044
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BF048
  c->r[30]=c->r[3]|c->r[3]; // 801BF04C
  if (!crb(c,2)) { goto L_801BF070; } // 801BF050
  c->r[3]=0u+0x803A0000u; // 801BF054
  c->r[5]=0u+0x803A0000u; // 801BF058
  c->r[3]=c->r[3]+0xFFFFCC4Cu; // 801BF05C
  c->r[4]=0u+0x00000233u; // 801BF060
  c->r[5]=c->r[5]+0xFFFFCC28u; // 801BF064
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF068
  c->lr=0x801BF070u; f_80212260(c); // 801BF06C
L_801BF070:;
  c->r[3]=c->r[30]|c->r[30]; // 801BF070
  c->r[4]=c->r[31]|c->r[31]; // 801BF074
  c->lr=0x801BF07Cu; f_801E45B0(c); // 801BF078
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF07C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF080
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BF084
  c->lr=c->r[0]; // 801BF088
  c->r[1]=c->r[1]+0x00000010u; // 801BF08C
  return; // 801BF090
}

// fn_801BF0A0
void f_801BF0A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF0A0
  c->r[0]=c->lr; // 801BF0A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BF0A8
  c->r[11]=c->r[1]+0x00000040u; // 801BF0AC
  c->lr=0x801BF0B4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF0B0
  c->r[31]=c->r[4]|c->r[4]; // 801BF0B4
  c->r[30]=c->r[4]+c->r[5]; // 801BF0B8
  c->lr=0x801BF0C0u; f_801D76C0(c); // 801BF0BC
  c->r[3]=c->r[3]+0x00000354u; // 801BF0C0
  c->lr=0x801BF0C8u; f_80126DC0(c); // 801BF0C4
  c->lr=0x801BF0CCu; f_801251B0(c); // 801BF0C8
  c->r[0]=R8(c->r[13]+0xFFFFC430u); // 801BF0CC
  c->r[29]=c->r[3]|c->r[3]; // 801BF0D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BF0D4
  if (!crb(c,2)) { goto L_801BF114; } // 801BF0D8
  c->r[3]=0u+0x805B0000u; // 801BF0DC
  c->r[4]=0u+0x801C0000u; // 801BF0E0
  c->r[3]=c->r[3]+0xFFFFC684u; // 801BF0E4
  c->r[0]=0u+0x00000000u; // 801BF0E8
  c->r[6]=c->r[3]+0x00000004u; // 801BF0EC
  c->r[5]=0u+0x805B0000u; // 801BF0F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BF0F4
  c->r[4]=c->r[4]+0xFFFFEF50u; // 801BF0F8
  c->r[5]=c->r[5]+0xFFFFC678u; // 801BF0FC
  W32(c->r[3]+0x00000004u,c->r[6]); // 801BF100
  W32(c->r[3]+0x00000008u,c->r[6]); // 801BF104
  c->lr=0x801BF10Cu; f_802E6064(c); // 801BF108
  c->r[0]=0u+0x00000001u; // 801BF10C
  W8(c->r[13]+0xFFFFC430u,c->r[0]); // 801BF110
L_801BF114:;
  c->r[4]=0u+0x805B0000u; // 801BF114
  c->r[3]=c->r[29]|c->r[29]; // 801BF118
  c->r[20]=c->r[4]+0xFFFFC684u; // 801BF11C
  c->lr=0x801BF124u; f_801251F0(c); // 801BF120
  c->r[29]=R32(c->r[20]+0x00000004u); // 801BF124
  c->r[27]=c->r[20]+0x00000004u; // 801BF128
  c->r[23]=0u+0x00000000u; // 801BF12C
  c->r[24]=0u+0x801C0000u; // 801BF130
  c->r[25]=0u+0x805B0000u; // 801BF134
  c->r[26]=0u+0x00000001u; // 801BF138
  c->r[21]=0u+0x803A0000u; // 801BF13C
  c->r[22]=0u+0x803A0000u; // 801BF140
  goto L_801BF184; // 801BF144
L_801BF148:;
  c->r[28]=c->r[29]|c->r[29]; cr0(c,c->r[28]); // 801BF148
  c->r[29]=R32(c->r[29]+0x00000000u); // 801BF14C
  if (!crb(c,2)) { goto L_801BF168; } // 801BF150
  c->r[3]=c->r[21]+0xFFFFCC1Cu; // 801BF154
  c->r[5]=c->r[22]+0xFFFFCBF8u; // 801BF158
  c->r[4]=0u+0x0000023Du; // 801BF15C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF160
  c->lr=0x801BF168u; f_80212260(c); // 801BF164
L_801BF168:;
  c->r[12]=R32(c->r[28]+0x00000008u); // 801BF168
  c->r[3]=c->r[28]|c->r[28]; // 801BF16C
  c->r[4]=c->r[31]|c->r[31]; // 801BF170
  c->r[5]=c->r[30]|c->r[30]; // 801BF174
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801BF178
  c->ctr=c->r[12]; // 801BF17C
  if (true) { c->lr=0x801BF184u; dispatch(c,c->ctr); } // 801BF180
L_801BF184:;
  c->lr=0x801BF188u; f_801251B0(c); // 801BF184
  c->r[0]=R8(c->r[13]+0xFFFFC430u); // 801BF188
  c->r[28]=c->r[3]|c->r[3]; // 801BF18C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BF190
  if (!crb(c,2)) { goto L_801BF1BC; } // 801BF194
  c->r[0]=c->r[20]+0x00000004u; // 801BF198
  W32(c->r[20]+0x00000000u,c->r[23]); // 801BF19C
  c->r[3]=c->r[20]|c->r[20]; // 801BF1A0
  c->r[4]=c->r[24]+0xFFFFEF50u; // 801BF1A4
  W32(c->r[20]+0x00000004u,c->r[0]); // 801BF1A8
  c->r[5]=c->r[25]+0xFFFFC678u; // 801BF1AC
  W32(c->r[20]+0x00000008u,c->r[0]); // 801BF1B0
  c->lr=0x801BF1B8u; f_802E6064(c); // 801BF1B4
  W8(c->r[13]+0xFFFFC430u,c->r[26]); // 801BF1B8
L_801BF1BC:;
  c->r[3]=c->r[28]|c->r[28]; // 801BF1BC
  c->lr=0x801BF1C4u; f_801251F0(c); // 801BF1C0
  cmpu(c,0,c->r[29],c->r[27]); // 801BF1C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BF148; } // 801BF1C8
  c->lr=0x801BF1D0u; f_801D76C0(c); // 801BF1CC
  c->r[3]=c->r[3]+0x00000354u; // 801BF1D0
  c->lr=0x801BF1D8u; f_80126EA0(c); // 801BF1D4
  c->r[11]=c->r[1]+0x00000040u; // 801BF1D8
  c->lr=0x801BF1E0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF1DC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BF1E0
  c->lr=c->r[0]; // 801BF1E4
  c->r[1]=c->r[1]+0x00000040u; // 801BF1E8
  return; // 801BF1EC
}

// fn_801BF1F0
void f_801BF1F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF1F0
  c->r[0]=c->lr; // 801BF1F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BF1F8
  c->r[11]=c->r[1]+0x00000040u; // 801BF1FC
  c->lr=0x801BF204u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF200
  c->r[31]=c->r[4]|c->r[4]; // 801BF204
  c->r[30]=c->r[4]+c->r[5]; // 801BF208
  c->lr=0x801BF210u; f_801D76C0(c); // 801BF20C
  c->r[3]=c->r[3]+0x00000354u; // 801BF210
  c->lr=0x801BF218u; f_80126DC0(c); // 801BF214
  c->lr=0x801BF21Cu; f_801251B0(c); // 801BF218
  c->r[0]=R8(c->r[13]+0xFFFFC430u); // 801BF21C
  c->r[29]=c->r[3]|c->r[3]; // 801BF220
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BF224
  if (!crb(c,2)) { goto L_801BF264; } // 801BF228
  c->r[3]=0u+0x805B0000u; // 801BF22C
  c->r[4]=0u+0x801C0000u; // 801BF230
  c->r[3]=c->r[3]+0xFFFFC684u; // 801BF234
  c->r[0]=0u+0x00000000u; // 801BF238
  c->r[6]=c->r[3]+0x00000004u; // 801BF23C
  c->r[5]=0u+0x805B0000u; // 801BF240
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BF244
  c->r[4]=c->r[4]+0xFFFFEF50u; // 801BF248
  c->r[5]=c->r[5]+0xFFFFC678u; // 801BF24C
  W32(c->r[3]+0x00000004u,c->r[6]); // 801BF250
  W32(c->r[3]+0x00000008u,c->r[6]); // 801BF254
  c->lr=0x801BF25Cu; f_802E6064(c); // 801BF258
  c->r[0]=0u+0x00000001u; // 801BF25C
  W8(c->r[13]+0xFFFFC430u,c->r[0]); // 801BF260
L_801BF264:;
  c->r[4]=0u+0x805B0000u; // 801BF264
  c->r[3]=c->r[29]|c->r[29]; // 801BF268
  c->r[20]=c->r[4]+0xFFFFC684u; // 801BF26C
  c->lr=0x801BF274u; f_801251F0(c); // 801BF270
  c->r[29]=R32(c->r[20]+0x00000004u); // 801BF274
  c->r[27]=c->r[20]+0x00000004u; // 801BF278
  c->r[23]=0u+0x00000000u; // 801BF27C
  c->r[24]=0u+0x801C0000u; // 801BF280
  c->r[25]=0u+0x805B0000u; // 801BF284
  c->r[26]=0u+0x00000001u; // 801BF288
  c->r[21]=0u+0x803A0000u; // 801BF28C
  c->r[22]=0u+0x803A0000u; // 801BF290
  goto L_801BF2D4; // 801BF294
L_801BF298:;
  c->r[28]=c->r[29]|c->r[29]; cr0(c,c->r[28]); // 801BF298
  c->r[29]=R32(c->r[29]+0x00000000u); // 801BF29C
  if (!crb(c,2)) { goto L_801BF2B8; } // 801BF2A0
  c->r[3]=c->r[21]+0xFFFFCC1Cu; // 801BF2A4
  c->r[5]=c->r[22]+0xFFFFCBF8u; // 801BF2A8
  c->r[4]=0u+0x0000023Du; // 801BF2AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF2B0
  c->lr=0x801BF2B8u; f_80212260(c); // 801BF2B4
L_801BF2B8:;
  c->r[12]=R32(c->r[28]+0x00000008u); // 801BF2B8
  c->r[3]=c->r[28]|c->r[28]; // 801BF2BC
  c->r[4]=c->r[31]|c->r[31]; // 801BF2C0
  c->r[5]=c->r[30]|c->r[30]; // 801BF2C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801BF2C8
  c->ctr=c->r[12]; // 801BF2CC
  if (true) { c->lr=0x801BF2D4u; dispatch(c,c->ctr); } // 801BF2D0
L_801BF2D4:;
  c->lr=0x801BF2D8u; f_801251B0(c); // 801BF2D4
  c->r[0]=R8(c->r[13]+0xFFFFC430u); // 801BF2D8
  c->r[28]=c->r[3]|c->r[3]; // 801BF2DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801BF2E0
  if (!crb(c,2)) { goto L_801BF30C; } // 801BF2E4
  c->r[0]=c->r[20]+0x00000004u; // 801BF2E8
  W32(c->r[20]+0x00000000u,c->r[23]); // 801BF2EC
  c->r[3]=c->r[20]|c->r[20]; // 801BF2F0
  c->r[4]=c->r[24]+0xFFFFEF50u; // 801BF2F4
  W32(c->r[20]+0x00000004u,c->r[0]); // 801BF2F8
  c->r[5]=c->r[25]+0xFFFFC678u; // 801BF2FC
  W32(c->r[20]+0x00000008u,c->r[0]); // 801BF300
  c->lr=0x801BF308u; f_802E6064(c); // 801BF304
  W8(c->r[13]+0xFFFFC430u,c->r[26]); // 801BF308
L_801BF30C:;
  c->r[3]=c->r[28]|c->r[28]; // 801BF30C
  c->lr=0x801BF314u; f_801251F0(c); // 801BF310
  cmpu(c,0,c->r[29],c->r[27]); // 801BF314
  if (!crb(c,2)) { IRQCHK(c); goto L_801BF298; } // 801BF318
  c->lr=0x801BF320u; f_801D76C0(c); // 801BF31C
  c->r[3]=c->r[3]+0x00000354u; // 801BF320
  c->lr=0x801BF328u; f_80126EA0(c); // 801BF324
  c->r[11]=c->r[1]+0x00000040u; // 801BF328
  c->lr=0x801BF330u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF32C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BF330
  c->lr=c->r[0]; // 801BF334
  c->r[1]=c->r[1]+0x00000040u; // 801BF338
  return; // 801BF33C
}

// fn_801BF340
void f_801BF340(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 801BF340
  c->r[4]=0u+0x00000000u; // 801BF344
  if (crb(c,2)) { goto L_801BF378; } // 801BF348
  cmps(c,0,(int32_t)c->r[3],1); // 801BF34C
  if (crb(c,2)) { goto L_801BF380; } // 801BF350
  cmps(c,0,(int32_t)c->r[3],2); // 801BF354
  if (crb(c,2)) { goto L_801BF388; } // 801BF358
  cmps(c,0,(int32_t)c->r[3],3); // 801BF35C
  if (crb(c,2)) { goto L_801BF390; } // 801BF360
  cmps(c,0,(int32_t)c->r[3],4); // 801BF364
  if (crb(c,2)) { goto L_801BF398; } // 801BF368
  cmps(c,0,(int32_t)c->r[3],5); // 801BF36C
  if (crb(c,2)) { goto L_801BF3A0; } // 801BF370
  goto L_801BF3A4; // 801BF374
L_801BF378:;
  c->r[4]=0u+0x0000001Fu; // 801BF378
  goto L_801BF3A4; // 801BF37C
L_801BF380:;
  c->r[4]=0u+0x00000001u; // 801BF380
  goto L_801BF3A4; // 801BF384
L_801BF388:;
  c->r[4]=0u+0x00000002u; // 801BF388
  goto L_801BF3A4; // 801BF38C
L_801BF390:;
  c->r[4]=0u+0x00000004u; // 801BF390
  goto L_801BF3A4; // 801BF394
L_801BF398:;
  c->r[4]=0u+0x00000008u; // 801BF398
  goto L_801BF3A4; // 801BF39C
L_801BF3A0:;
  c->r[4]=0u+0x00000010u; // 801BF3A0
L_801BF3A4:;
  c->r[0]=R32(c->r[13]+0xFFFFAD38u); // 801BF3A4
  c->r[0]=c->r[4]&c->r[0]; // 801BF3A8
  c->r[0]=c->r[0]-c->r[4]; // 801BF3AC
  c->r[0]=cntlz(c->r[0]); // 801BF3B0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BF3B4
  return; // 801BF3B8
}

// fn_801BF3C0
void f_801BF3C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF3C0
  c->r[0]=c->lr; // 801BF3C4
  cmps(c,0,(int32_t)c->r[3],0); // 801BF3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF3CC
  if (crb(c,2)) { goto L_801BF3E8; } // 801BF3D0
  cmps(c,0,(int32_t)c->r[3],1); // 801BF3D4
  if (crb(c,2)) { goto L_801BF3F0; } // 801BF3D8
  cmps(c,0,(int32_t)c->r[3],2); // 801BF3DC
  if (crb(c,2)) { goto L_801BF3F8; } // 801BF3E0
  goto L_801BF400; // 801BF3E4
L_801BF3E8:;
  c->r[3]=0u+0x00000001u; // 801BF3E8
  goto L_801BF420; // 801BF3EC
L_801BF3F0:;
  c->r[3]=0u+0x00000002u; // 801BF3F0
  goto L_801BF420; // 801BF3F4
L_801BF3F8:;
  c->r[3]=0u+0x00000003u; // 801BF3F8
  goto L_801BF420; // 801BF3FC
L_801BF400:;
  c->r[3]=0u+0x803A0000u; // 801BF400
  c->r[5]=0u+0x803A0000u; // 801BF404
  c->r[3]=c->r[3]+0xFFFFCC58u; // 801BF408
  c->r[4]=0u+0x0000005Bu; // 801BF40C
  c->r[5]=c->r[5]+0xFFFFCC68u; // 801BF410
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF414
  c->lr=0x801BF41Cu; f_80212260(c); // 801BF418
  c->r[3]=0u+0x00000001u; // 801BF41C
L_801BF420:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF420
  c->lr=c->r[0]; // 801BF424
  c->r[1]=c->r[1]+0x00000010u; // 801BF428
  return; // 801BF42C
}

// fn_801BF430
void f_801BF430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF430
  c->r[0]=c->lr; // 801BF434
  cmps(c,0,(int32_t)c->r[3],0); // 801BF438
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF43C
  if (crb(c,2)) { goto L_801BF458; } // 801BF440
  cmps(c,0,(int32_t)c->r[3],1); // 801BF444
  if (crb(c,2)) { goto L_801BF460; } // 801BF448
  cmps(c,0,(int32_t)c->r[3],2); // 801BF44C
  if (crb(c,2)) { goto L_801BF468; } // 801BF450
  goto L_801BF470; // 801BF454
L_801BF458:;
  c->r[3]=c->r[13]+0xFFFFAD3Cu; // 801BF458
  goto L_801BF490; // 801BF45C
L_801BF460:;
  c->r[3]=c->r[13]+0xFFFFAD40u; // 801BF460
  goto L_801BF490; // 801BF464
L_801BF468:;
  c->r[3]=c->r[13]+0xFFFFAD48u; // 801BF468
  goto L_801BF490; // 801BF46C
L_801BF470:;
  c->r[3]=0u+0x803A0000u; // 801BF470
  c->r[5]=0u+0x803A0000u; // 801BF474
  c->r[3]=c->r[3]+0xFFFFCC58u; // 801BF478
  c->r[4]=0u+0x0000006Bu; // 801BF47C
  c->r[5]=c->r[5]+0xFFFFCC68u; // 801BF480
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF484
  c->lr=0x801BF48Cu; f_80212260(c); // 801BF488
  c->r[3]=c->r[13]+0xFFFFAD50u; // 801BF48C
L_801BF490:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF490
  c->lr=c->r[0]; // 801BF494
  c->r[1]=c->r[1]+0x00000010u; // 801BF498
  return; // 801BF49C
}

// fn_801BF4A0
void f_801BF4A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF4A0
  c->r[0]=c->lr; // 801BF4A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF4A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF4AC
  c->r[31]=c->r[3]|c->r[3]; // 801BF4B0
  c->lr=0x801BF4B8u; f_801CFCF0(c); // 801BF4B4
  c->r[4]=0u+0x803A0000u; // 801BF4B8
  c->r[3]=c->r[31]+0x00000108u; // 801BF4BC
  c->r[4]=c->r[4]+0xFFFFCFC0u; // 801BF4C0
  W32(c->r[31]+0x00000000u,c->r[4]); // 801BF4C4
  c->lr=0x801BF4CCu; f_801D04D0(c); // 801BF4C8
  c->r[0]=0u+0x00000000u; // 801BF4CC
  W8(c->r[31]+0x00000188u,c->r[0]); // 801BF4D0
  c->r[3]=c->r[31]|c->r[31]; // 801BF4D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF4D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF4DC
  c->lr=c->r[0]; // 801BF4E0
  c->r[1]=c->r[1]+0x00000010u; // 801BF4E4
  return; // 801BF4E8
}

// fn_801BF4F0
void f_801BF4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF4F0
  c->r[0]=c->lr; // 801BF4F4
  cmps(c,0,(int32_t)c->r[3],0); // 801BF4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF4FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF500
  c->r[31]=c->r[4]|c->r[4]; // 801BF504
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BF508
  c->r[30]=c->r[3]|c->r[3]; // 801BF50C
  if (crb(c,2)) { goto L_801BF560; } // 801BF510
  c->r[0]=R8(c->r[3]+0x00000188u); // 801BF514
  c->r[4]=0u+0x803A0000u; // 801BF518
  c->r[4]=c->r[4]+0xFFFFCFC0u; // 801BF51C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801BF520
  cmps(c,0,(int32_t)c->r[0],0); // 801BF524
  if (crb(c,2)) { goto L_801BF53C; } // 801BF528
  c->r[3]=c->r[3]+0x0000014Cu; // 801BF52C
  c->lr=0x801BF534u; f_8012FB90(c); // 801BF530
  c->r[0]=0u+0x00000000u; // 801BF534
  W8(c->r[30]+0x00000188u,c->r[0]); // 801BF538
L_801BF53C:;
  c->r[3]=c->r[30]|c->r[30]; // 801BF53C
  c->lr=0x801BF544u; f_801CFDE0(c); // 801BF540
  c->r[3]=c->r[30]|c->r[30]; // 801BF544
  c->r[4]=0u+0x00000000u; // 801BF548
  c->lr=0x801BF550u; f_801CFD20(c); // 801BF54C
  cmps(c,0,(int32_t)c->r[31],0); // 801BF550
  if (!crb(c,1)) { goto L_801BF560; } // 801BF554
  c->r[3]=c->r[30]|c->r[30]; // 801BF558
  c->lr=0x801BF560u; f_802E61AC(c); // 801BF55C
L_801BF560:;
  c->r[3]=c->r[30]|c->r[30]; // 801BF560
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF564
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BF568
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF56C
  c->lr=c->r[0]; // 801BF570
  c->r[1]=c->r[1]+0x00000010u; // 801BF574
  return; // 801BF578
}

// fn_801BF580
void f_801BF580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF580
  c->r[0]=c->lr; // 801BF584
  W32(c->r[1]+0x00000184u,c->r[0]); // 801BF588
  W32(c->r[1]+0x0000017Cu,c->r[31]); // 801BF58C
  c->r[31]=0u+0x803A0000u; // 801BF590
  c->r[31]=c->r[31]+0xFFFFCC88u; // 801BF594
  W32(c->r[1]+0x00000178u,c->r[30]); // 801BF598
  W32(c->r[1]+0x00000174u,c->r[29]); // 801BF59C
  c->r[29]=c->r[4]|c->r[4]; // 801BF5A0
  W32(c->r[1]+0x00000170u,c->r[28]); // 801BF5A4
  c->r[28]=c->r[3]|c->r[3]; // 801BF5A8
  c->r[3]=c->r[29]|c->r[29]; // 801BF5AC
  c->lr=0x801BF5B4u; f_8012F6F0(c); // 801BF5B0
  cmps(c,0,(int32_t)c->r[3],0); // 801BF5B4
  c->r[30]=c->r[3]|c->r[3]; // 801BF5B8
  if (!crb(c,0)) { goto L_801BF5E0; } // 801BF5BC
  c->r[6]=c->r[29]|c->r[29]; // 801BF5C0
  c->r[3]=c->r[31]+0x00000000u; // 801BF5C4
  c->r[5]=c->r[31]+0x00000094u; // 801BF5C8
  c->r[4]=0u+0x00000064u; // 801BF5CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF5D0
  c->lr=0x801BF5D8u; f_80212300(c); // 801BF5D4
  c->r[3]=0u+0x00000000u; // 801BF5D8
  goto L_801BF754; // 801BF5DC
L_801BF5E0:;
  c->r[4]=c->r[28]+0x0000014Cu; // 801BF5E0
  c->lr=0x801BF5E8u; f_8012FA00(c); // 801BF5E4
  cmps(c,0,(int32_t)c->r[3],0); // 801BF5E8
  if (!crb(c,2)) { goto L_801BF610; } // 801BF5EC
  c->r[6]=c->r[30]|c->r[30]; // 801BF5F0
  c->r[3]=c->r[31]+0x00000000u; // 801BF5F4
  c->r[5]=c->r[31]+0x00000018u; // 801BF5F8
  c->r[4]=0u+0x00000047u; // 801BF5FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF600
  c->lr=0x801BF608u; f_80212300(c); // 801BF604
  c->r[0]=0u+0x00000000u; // 801BF608
  goto L_801BF6A8; // 801BF60C
L_801BF610:;
  c->r[0]=0u+0x00000001u; // 801BF610
  W8(c->r[28]+0x00000188u,c->r[0]); // 801BF614
  goto L_801BF620; // 801BF618
  c->lr=0x801BF620u; f_80212260(c); // 801BF61C
L_801BF620:;
  c->r[0]=c->r[1]+0x00000027u; // 801BF620
  c->r[3]=c->r[28]+0x0000014Cu; // 801BF624
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BF628
  c->r[5]=0u+0x00000040u; // 801BF62C
  c->r[4]=c->r[30]|c->r[30]; // 801BF630
  c->r[6]=0u+0x00000000u; // 801BF634
  c->r[7]=0u+0x00000002u; // 801BF638
  c->lr=0x801BF640u; f_8012FDD0(c); // 801BF63C
  cmpu(c,0,c->r[3],0x00000040u); // 801BF640
  if (crb(c,2)) { goto L_801BF664; } // 801BF644
  c->r[3]=c->r[31]+0x00000000u; // 801BF648
  c->r[5]=c->r[31]+0x0000004Cu; // 801BF64C
  c->r[4]=0u+0x000000CDu; // 801BF650
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF654
  c->lr=0x801BF65Cu; f_80212300(c); // 801BF658
  c->r[0]=0u+0x00000000u; // 801BF65C
  goto L_801BF680; // 801BF660
L_801BF664:;
  c->r[4]=c->r[30]|c->r[30]; // 801BF664
  c->r[3]=c->r[28]+0x00000108u; // 801BF668
  c->lr=0x801BF670u; f_801D0500(c); // 801BF66C
  c->r[3]=c->r[28]|c->r[28]; // 801BF670
  c->r[4]=c->r[28]+0x00000108u; // 801BF674
  c->lr=0x801BF67Cu; f_801CFD80(c); // 801BF678
  c->r[0]=0u+0x00000001u; // 801BF67C
L_801BF680:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BF680
  if (!crb(c,2)) { goto L_801BF6A4; } // 801BF684
  c->r[3]=c->r[31]+0x00000000u; // 801BF688
  c->r[5]=c->r[31]+0x00000080u; // 801BF68C
  c->r[4]=0u+0x0000004Fu; // 801BF690
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF694
  c->lr=0x801BF69Cu; f_80212300(c); // 801BF698
  c->r[0]=0u+0x00000000u; // 801BF69C
  goto L_801BF6A8; // 801BF6A0
L_801BF6A4:;
  c->r[0]=0u+0x00000001u; // 801BF6A4
L_801BF6A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BF6A8
  if (!crb(c,2)) { goto L_801BF6B8; } // 801BF6AC
  c->r[3]=0u+0x00000000u; // 801BF6B0
  goto L_801BF754; // 801BF6B4
L_801BF6B8:;
  c->r[3]=c->r[29]|c->r[29]; // 801BF6B8
  c->lr=0x801BF6C0u; f_802E5F80(c); // 801BF6BC
  c->r[30]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 801BF6C0
  c->r[0]=c->r[30]+0x00000001u; // 801BF6C4
  c->r[3]=c->r[29]+c->r[30]; // 801BF6C8
  c->ctr=c->r[0]; // 801BF6CC
  if (crb(c,0)) { goto L_801BF750; } // 801BF6D0
  c->r[0]=c->r[0]|0x00000000u; // 801BF6D4
L_801BF6D8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BF6D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801BF6DC
  cmps(c,0,(int32_t)c->r[0],47); // 801BF6E0
  if (crb(c,2)) { goto L_801BF6F0; } // 801BF6E4
  cmps(c,0,(int32_t)c->r[0],92); // 801BF6E8
  if (!crb(c,2)) { goto L_801BF744; } // 801BF6EC
L_801BF6F0:;
  cmps(c,0,(int32_t)c->r[30],256); // 801BF6F0
  if (crb(c,0)) { goto L_801BF70C; } // 801BF6F4
  c->r[3]=c->r[31]+0x00000000u; // 801BF6F8
  c->r[5]=c->r[31]+0x000000B0u; // 801BF6FC
  c->r[4]=0u+0x00000074u; // 801BF700
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF704
  c->lr=0x801BF70Cu; f_80212260(c); // 801BF708
L_801BF70C:;
  cmps(c,0,(int32_t)c->r[30],256); // 801BF70C
  if (crb(c,0)) { goto L_801BF71C; } // 801BF710
  c->r[3]=0u+0x00000000u; // 801BF714
  goto L_801BF754; // 801BF718
L_801BF71C:;
  c->r[4]=c->r[29]|c->r[29]; // 801BF71C
  c->r[5]=c->r[30]|c->r[30]; // 801BF720
  c->r[3]=c->r[1]+0x00000070u; // 801BF724
  c->lr=0x801BF72Cu; f_802EE8C8(c); // 801BF728
  c->r[4]=c->r[1]+0x00000070u; // 801BF72C
  c->r[0]=0u+0x00000000u; // 801BF730
  W8(c->r[4]+c->r[30],c->r[0]); // 801BF734
  c->r[3]=c->r[28]|c->r[28]; // 801BF738
  c->lr=0x801BF740u; f_801D0410(c); // 801BF73C
  goto L_801BF750; // 801BF740
L_801BF744:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801BF744
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801BF748
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF6D8; } // 801BF74C
L_801BF750:;
  c->r[3]=0u+0x00000001u; // 801BF750
L_801BF754:;
  c->r[0]=R32(c->r[1]+0x00000184u); // 801BF754
  c->r[31]=R32(c->r[1]+0x0000017Cu); // 801BF758
  c->r[30]=R32(c->r[1]+0x00000178u); // 801BF75C
  c->r[29]=R32(c->r[1]+0x00000174u); // 801BF760
  c->r[28]=R32(c->r[1]+0x00000170u); // 801BF764
  c->lr=c->r[0]; // 801BF768
  c->r[1]=c->r[1]+0x00000180u; // 801BF76C
  return; // 801BF770
}

// fn_801BF780
void f_801BF780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF780
  c->r[0]=c->lr; // 801BF784
  c->r[8]=c->r[3]|c->r[3]; // 801BF788
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF78C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BF790
  c->r[31]=c->r[7]|c->r[7]; // 801BF794
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BF798
  c->r[30]=c->r[6]|c->r[6]; // 801BF79C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BF7A0
  c->r[29]=c->r[4]|c->r[4]; // 801BF7A4
  c->r[0]=R8(c->r[3]+0x00000188u); // 801BF7A8
  cmps(c,0,(int32_t)c->r[0],0); // 801BF7AC
  if (!crb(c,2)) { goto L_801BF7BC; } // 801BF7B0
  c->r[3]=0u+0x00000000u; // 801BF7B4
  goto L_801BF834; // 801BF7B8
L_801BF7BC:;
  cmpu(c,0,c->r[5],0x00000078u); // 801BF7BC
  if (!crb(c,0)) { goto L_801BF7CC; } // 801BF7C0
  c->r[3]=0u+0x00000000u; // 801BF7C4
  goto L_801BF834; // 801BF7C8
L_801BF7CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BF7CC
  if (crb(c,2)) { goto L_801BF830; } // 801BF7D0
  c->r[3]=c->r[29]|c->r[29]; // 801BF7D4
  c->r[4]=c->r[8]+0x0000014Cu; // 801BF7D8
  c->r[5]=0u+0x00000000u; // 801BF7DC
  c->lr=0x801BF7E4u; f_801E9FF0(c); // 801BF7E0
  c->r[0]=R32(c->r[29]+0x00000014u); // 801BF7E4
  c->r[3]=0u+0x803A0000u; // 801BF7E8
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801BF7EC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801BF7F0
  cmpu(c,0,c->r[31],c->r[0]); // 801BF7F4
  W32(c->r[29]+0x00000070u,c->r[30]); // 801BF7F8
  W32(c->r[29]+0x00000074u,c->r[31]); // 801BF7FC
  if (!crb(c,1)) { goto L_801BF820; } // 801BF800
  c->r[3]=0u+0x803A0000u; // 801BF804
  c->r[5]=0u+0x803A0000u; // 801BF808
  c->r[3]=c->r[3]+0xFFFFCC88u; // 801BF80C
  c->r[4]=0u+0x0000014Fu; // 801BF810
  c->r[5]=c->r[5]+0xFFFFCD60u; // 801BF814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF818
  c->lr=0x801BF820u; f_80212260(c); // 801BF81C
L_801BF820:;
  c->r[4]=R32(c->r[29]+0x00000070u); // 801BF820
  c->r[3]=c->r[29]|c->r[29]; // 801BF824
  c->r[5]=0u+0x00000000u; // 801BF828
  c->lr=0x801BF830u; f_801E9D20(c); // 801BF82C
L_801BF830:;
  c->r[3]=c->r[29]|c->r[29]; // 801BF830
L_801BF834:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF834
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BF838
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BF83C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BF840
  c->lr=c->r[0]; // 801BF844
  c->r[1]=c->r[1]+0x00000020u; // 801BF848
  return; // 801BF84C
}

// fn_801BF850
void f_801BF850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF850
  c->r[0]=c->lr; // 801BF854
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF858
  c->r[11]=c->r[1]+0x00000020u; // 801BF85C
  c->lr=0x801BF864u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF860
  c->r[0]=R8(c->r[3]+0x00000188u); // 801BF864
  c->r[31]=0u+0x803A0000u; // 801BF868
  c->r[27]=c->r[4]|c->r[4]; // 801BF86C
  c->r[28]=c->r[6]|c->r[6]; // 801BF870
  cmps(c,0,(int32_t)c->r[0],0); // 801BF874
  c->r[29]=c->r[7]|c->r[7]; // 801BF878
  c->r[30]=c->r[8]|c->r[8]; // 801BF87C
  c->r[31]=c->r[31]+0xFFFFCC88u; // 801BF880
  if (!crb(c,2)) { goto L_801BF890; } // 801BF884
  c->r[3]=0u+0x00000000u; // 801BF888
  goto L_801BF92C; // 801BF88C
L_801BF890:;
  cmpu(c,0,c->r[5],0x00000078u); // 801BF890
  if (!crb(c,0)) { goto L_801BF8A0; } // 801BF894
  c->r[3]=0u+0x00000000u; // 801BF898
  goto L_801BF92C; // 801BF89C
L_801BF8A0:;
  c->r[3]=c->r[28]|c->r[28]; // 801BF8A0
  c->lr=0x801BF8A8u; f_8012F6F0(c); // 801BF8A4
  cmps(c,0,(int32_t)c->r[3],0); // 801BF8A8
  c->r[4]=c->r[3]|c->r[3]; // 801BF8AC
  if (!crb(c,0)) { goto L_801BF8D4; } // 801BF8B0
  c->r[6]=c->r[28]|c->r[28]; // 801BF8B4
  c->r[3]=c->r[31]+0x00000000u; // 801BF8B8
  c->r[5]=c->r[31]+0x0000011Cu; // 801BF8BC
  c->r[4]=0u+0x000000A7u; // 801BF8C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF8C4
  c->lr=0x801BF8CCu; f_80212300(c); // 801BF8C8
  c->r[3]=0u+0x00000000u; // 801BF8CC
  goto L_801BF92C; // 801BF8D0
L_801BF8D4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801BF8D4
  if (crb(c,2)) { goto L_801BF928; } // 801BF8D8
  c->r[3]=c->r[27]|c->r[27]; // 801BF8DC
  c->lr=0x801BF8E4u; f_801E9F60(c); // 801BF8E0
  c->r[0]=R32(c->r[27]+0x00000014u); // 801BF8E4
  c->r[3]=0u+0x803A0000u; // 801BF8E8
  c->r[3]=c->r[3]+0xFFFFCF58u; // 801BF8EC
  W32(c->r[27]+0x00000000u,c->r[3]); // 801BF8F0
  cmpu(c,0,c->r[30],c->r[0]); // 801BF8F4
  W32(c->r[27]+0x00000070u,c->r[29]); // 801BF8F8
  W32(c->r[27]+0x00000074u,c->r[30]); // 801BF8FC
  if (!crb(c,1)) { goto L_801BF918; } // 801BF900
  c->r[3]=c->r[31]+0x00000000u; // 801BF904
  c->r[5]=c->r[31]+0x000000D8u; // 801BF908
  c->r[4]=0u+0x00000145u; // 801BF90C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF910
  c->lr=0x801BF918u; f_80212260(c); // 801BF914
L_801BF918:;
  c->r[4]=R32(c->r[27]+0x00000070u); // 801BF918
  c->r[3]=c->r[27]|c->r[27]; // 801BF91C
  c->r[5]=0u+0x00000000u; // 801BF920
  c->lr=0x801BF928u; f_801E9D20(c); // 801BF924
L_801BF928:;
  c->r[3]=c->r[27]|c->r[27]; // 801BF928
L_801BF92C:;
  c->r[11]=c->r[1]+0x00000020u; // 801BF92C
  c->lr=0x801BF934u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BF930
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BF934
  c->lr=c->r[0]; // 801BF938
  c->r[1]=c->r[1]+0x00000020u; // 801BF93C
  return; // 801BF940
}

// fn_801BF950
void f_801BF950(Ctx* __restrict c) {
  c->r[3]=0u+0x00000078u; // 801BF950
  return; // 801BF954
}

// fn_801BF960
void f_801BF960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF960
  c->r[0]=c->lr; // 801BF964
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BF968
  c->r[11]=c->r[1]+0x00000020u; // 801BF96C
  c->lr=0x801BF974u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BF970
  c->r[0]=R8(c->r[3]+0x00000188u); // 801BF974
  c->r[31]=0u+0x803A0000u; // 801BF978
  c->r[27]=c->r[3]|c->r[3]; // 801BF97C
  c->r[28]=c->r[4]|c->r[4]; // 801BF980
  cmps(c,0,(int32_t)c->r[0],0); // 801BF984
  c->r[29]=c->r[5]|c->r[5]; // 801BF988
  c->r[31]=c->r[31]+0xFFFFCC88u; // 801BF98C
  if (!crb(c,2)) { goto L_801BF9A8; } // 801BF990
  c->r[3]=c->r[31]+0x00000000u; // 801BF994
  c->r[5]=c->r[31]+0x00000030u; // 801BF998
  c->r[4]=0u+0x000000E3u; // 801BF99C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF9A0
  c->lr=0x801BF9A8u; f_80212260(c); // 801BF9A4
L_801BF9A8:;
  c->r[30]=R32(c->r[27]+0x00000124u); // 801BF9A8
  c->r[6]=R32(c->r[27]+0x00000120u); // 801BF9AC
  cmpu(c,0,c->r[29],c->r[30]); // 801BF9B0
  if (!crb(c,0)) { goto L_801BF9D8; } // 801BF9B4
  if (!crb(c,0)) { goto L_801BF9D0; } // 801BF9B8
  c->r[3]=c->r[31]+0x00000000u; // 801BF9BC
  c->r[5]=c->r[31]+0x00000144u; // 801BF9C0
  c->r[4]=0u+0x000000EDu; // 801BF9C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BF9C8
  c->lr=0x801BF9D0u; f_80212300(c); // 801BF9CC
L_801BF9D0:;
  c->r[3]=0u+0x00000000u; // 801BF9D0
  goto L_801BFA24; // 801BF9D4
L_801BF9D8:;
  c->r[4]=c->r[28]|c->r[28]; // 801BF9D8
  c->r[5]=c->r[30]|c->r[30]; // 801BF9DC
  c->r[3]=c->r[27]+0x0000014Cu; // 801BF9E0
  c->r[7]=0u+0x00000002u; // 801BF9E4
  c->lr=0x801BF9ECu; f_8012FDD0(c); // 801BF9E8
  cmpu(c,0,c->r[3],c->r[30]); // 801BF9EC
  if (crb(c,2)) { goto L_801BFA10; } // 801BF9F0
  c->r[3]=c->r[31]+0x00000000u; // 801BF9F4
  c->r[5]=c->r[31]+0x0000017Cu; // 801BF9F8
  c->r[4]=0u+0x000000FEu; // 801BF9FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BFA00
  c->lr=0x801BFA08u; f_80212300(c); // 801BFA04
  c->r[3]=0u+0x00000000u; // 801BFA08
  goto L_801BFA24; // 801BFA0C
L_801BFA10:;
  c->r[4]=c->r[28]|c->r[28]; // 801BFA10
  c->r[5]=c->r[30]|c->r[30]; // 801BFA14
  c->r[3]=c->r[27]+0x00000108u; // 801BFA18
  c->lr=0x801BFA20u; f_801D0660(c); // 801BFA1C
  c->r[3]=0u+0x00000001u; // 801BFA20
L_801BFA24:;
  c->r[11]=c->r[1]+0x00000020u; // 801BFA24
  c->lr=0x801BFA2Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BFA28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFA2C
  c->lr=c->r[0]; // 801BFA30
  c->r[1]=c->r[1]+0x00000020u; // 801BFA34
  return; // 801BFA38
}

// fn_801BFA40
void f_801BFA40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFA40
  c->r[0]=c->lr; // 801BFA44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BFA48
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801BFA4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BFA50
  c->r[31]=0u+0x803A0000u; // 801BFA54
  c->r[31]=c->r[31]+0xFFFFCC88u; // 801BFA58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BFA5C
  c->r[30]=c->r[5]|c->r[5]; // 801BFA60
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BFA64
  c->r[29]=c->r[4]|c->r[4]; // 801BFA68
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BFA6C
  c->r[28]=c->r[3]|c->r[3]; // 801BFA70
  if (crb(c,2)) { goto L_801BFA90; } // 801BFA74
  c->r[6]=c->r[29]|c->r[29]; // 801BFA78
  c->r[3]=c->r[31]+0x00000000u; // 801BFA7C
  c->r[5]=c->r[31]+0x00000228u; // 801BFA80
  c->r[4]=0u+0x00000156u; // 801BFA84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BFA88
  c->lr=0x801BFA90u; f_80212260(c); // 801BFA8C
L_801BFA90:;
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801BFA90
  if (crb(c,2)) { goto L_801BFAB0; } // 801BFA94
  c->r[6]=c->r[30]|c->r[30]; // 801BFA98
  c->r[3]=c->r[31]+0x00000000u; // 801BFA9C
  c->r[5]=c->r[31]+0x00000270u; // 801BFAA0
  c->r[4]=0u+0x00000157u; // 801BFAA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BFAA8
  c->lr=0x801BFAB0u; f_80212260(c); // 801BFAAC
L_801BFAB0:;
  c->r[5]=R32(c->r[28]+0x00000018u); // 801BFAB0
  c->r[4]=R32(c->r[28]+0x00000070u); // 801BFAB4
  c->r[3]=R32(c->r[28]+0x00000074u); // 801BFAB8
  c->r[0]=c->r[5]+c->r[30]; // 801BFABC
  c->r[3]=c->r[4]+c->r[3]; // 801BFAC0
  cmpu(c,0,c->r[0],c->r[3]); // 801BFAC4
  if (!crb(c,1)) { goto L_801BFAD8; } // 801BFAC8
  c->r[3]=c->r[3]-c->r[5]; // 801BFACC
  c->r[0]=c->r[3]+0x0000001Fu; // 801BFAD0
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801BFAD4
L_801BFAD8:;
  c->r[3]=c->r[28]|c->r[28]; // 801BFAD8
  c->r[4]=c->r[29]|c->r[29]; // 801BFADC
  c->r[5]=c->r[30]|c->r[30]; // 801BFAE0
  c->lr=0x801BFAE8u; f_801EA120(c); // 801BFAE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BFAE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BFAEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BFAF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BFAF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BFAF8
  c->lr=c->r[0]; // 801BFAFC
  c->r[1]=c->r[1]+0x00000020u; // 801BFB00
  return; // 801BFB04
}

// fn_801BFB10
void f_801BFB10(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 801BFB10
  if (crb(c,2)) { goto L_801BFB2C; } // 801BFB14
  cmpu(c,0,c->r[5],0x00000001u); // 801BFB18
  if (crb(c,2)) { goto L_801BFB38; } // 801BFB1C
  cmpu(c,0,c->r[5],0x00000002u); // 801BFB20
  if (crb(c,2)) { goto L_801BFB44; } // 801BFB24
  goto L_801BFB58; // 801BFB28
L_801BFB2C:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 801BFB2C
  c->r[4]=c->r[4]+c->r[0]; // 801BFB30
  goto L_801BFB74; // 801BFB34
L_801BFB38:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 801BFB38
  c->r[4]=c->r[4]+c->r[0]; // 801BFB3C
  goto L_801BFB74; // 801BFB40
L_801BFB44:;
  c->r[5]=R32(c->r[3]+0x00000070u); // 801BFB44
  c->r[0]=R32(c->r[3]+0x00000074u); // 801BFB48
  c->r[0]=c->r[5]+c->r[0]; // 801BFB4C
  c->r[4]=c->r[0]-c->r[4]; // 801BFB50
  goto L_801BFB74; // 801BFB54
L_801BFB58:;
  c->r[3]=0u+0x803A0000u; // 801BFB58
  c->r[5]=0u+0x803A0000u; // 801BFB5C
  c->r[3]=c->r[3]+0xFFFFCC88u; // 801BFB60
  c->r[4]=0u+0x00000170u; // 801BFB64
  c->r[5]=c->r[5]+0xFFFFCF40u; // 801BFB68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BFB6C
  f_80212260(c); return; // 801BFB70
L_801BFB74:;
  c->r[5]=R32(c->r[3]+0x00000070u); // 801BFB74
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801BFB78
  if (!crb(c,0)) { goto L_801BFB88; } // 801BFB7C
  c->r[4]=c->r[5]|c->r[5]; // 801BFB80
  goto L_801BFB9C; // 801BFB84
L_801BFB88:;
  c->r[0]=R32(c->r[3]+0x00000074u); // 801BFB88
  c->r[0]=c->r[5]+c->r[0]; // 801BFB8C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801BFB90
  if (!crb(c,1)) { goto L_801BFB9C; } // 801BFB94
  c->r[4]=c->r[0]|c->r[0]; // 801BFB98
L_801BFB9C:;
  c->r[5]=0u+0x00000000u; // 801BFB9C
  f_801E9D20(c); return; // 801BFBA0
}

// fn_801BFBB0
void f_801BFBB0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000020u; // 801BFBB0
  return; // 801BFBB4
}

// fn_801BFBC0
void f_801BFBC0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000020u; // 801BFBC0
  return; // 801BFBC4
}

// fn_801BFBD0
void f_801BFBD0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000004u; // 801BFBD0
  return; // 801BFBD4
}

// fn_801BFBE0
void f_801BFBE0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801BFBE0
  return; // 801BFBE4
}

// fn_801BFBF0
void f_801BFBF0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801BFBF0
  return; // 801BFBF4
}

// fn_801BFC00
void f_801BFC00(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801BFC00
  return; // 801BFC04
}

// fn_801BFC10
void f_801BFC10(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801BFC10
  return; // 801BFC14
}

// fn_801BFC20
void f_801BFC20(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x0000006Cu); // 801BFC20
  return; // 801BFC24
}

// fn_801BFC30
void f_801BFC30(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801BFC30
  return; // 801BFC34
}

// fn_801BFC40
void f_801BFC40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFC40
  c->r[0]=c->lr; // 801BFC44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFC48
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BFC4C
  c->r[12]=R32(c->r[12]+0x00000028u); // 801BFC50
  c->ctr=c->r[12]; // 801BFC54
  if (true) { c->lr=0x801BFC5Cu; dispatch(c,c->ctr); } // 801BFC58
  cmps(c,0,(int32_t)c->r[3],0); // 801BFC5C
  if (!crb(c,2)) { goto L_801BFC80; } // 801BFC60
  c->r[3]=0u+0x803A0000u; // 801BFC64
  c->r[5]=0u+0x803A0000u; // 801BFC68
  c->r[3]=c->r[3]+0xFFFFD048u; // 801BFC6C
  c->r[4]=0u+0x0000003Au; // 801BFC70
  c->r[5]=c->r[5]+0xFFFFD020u; // 801BFC74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BFC78
  c->lr=0x801BFC80u; f_80212260(c); // 801BFC7C
L_801BFC80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFC80
  c->r[3]=0u+0x00000000u; // 801BFC84
  c->lr=c->r[0]; // 801BFC88
  c->r[1]=c->r[1]+0x00000010u; // 801BFC8C
  return; // 801BFC90
}

// fn_801BFCA0
void f_801BFCA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFCA0
  c->r[0]=c->lr; // 801BFCA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFCA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801BFCAC
  c->r[12]=R32(c->r[12]+0x00000028u); // 801BFCB0
  c->ctr=c->r[12]; // 801BFCB4
  if (true) { c->lr=0x801BFCBCu; dispatch(c,c->ctr); } // 801BFCB8
  cmps(c,0,(int32_t)c->r[3],0); // 801BFCBC
  if (!crb(c,2)) { goto L_801BFCE0; } // 801BFCC0
  c->r[3]=0u+0x803A0000u; // 801BFCC4
  c->r[5]=0u+0x803A0000u; // 801BFCC8
  c->r[3]=c->r[3]+0xFFFFD008u; // 801BFCCC
  c->r[4]=0u+0x00000035u; // 801BFCD0
  c->r[5]=c->r[5]+0xFFFFCFE0u; // 801BFCD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BFCD8
  c->lr=0x801BFCE0u; f_80212260(c); // 801BFCDC
L_801BFCE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFCE0
  c->r[3]=0u+0x00000000u; // 801BFCE4
  c->lr=c->r[0]; // 801BFCE8
  c->r[1]=c->r[1]+0x00000010u; // 801BFCEC
  return; // 801BFCF0
}

// fn_801BFD00
void f_801BFD00(Ctx* __restrict c) {
  c->r[3]=c->r[13]+0xFFFFC4A8u; // 801BFD00
  return; // 801BFD04
}

// fn_801BFD10
void f_801BFD10(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000074u); // 801BFD10
  return; // 801BFD14
}

// fn_801BFD20
void f_801BFD20(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000070u); // 801BFD20
  c->r[0]=R32(c->r[3]+0x00000018u); // 801BFD24
  c->r[3]=c->r[0]-c->r[4]; // 801BFD28
  return; // 801BFD2C
}

// fn_801BFD30
void f_801BFD30(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801BFD30
  return; // 801BFD34
}

// fn_801BFD40
void f_801BFD40(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801BFD40
  return; // 801BFD44
}

// fn_801BFD50
void f_801BFD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFD50
  c->r[0]=c->lr; // 801BFD54
  cmps(c,0,(int32_t)c->r[3],0); // 801BFD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFD5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BFD60
  c->r[31]=c->r[4]|c->r[4]; // 801BFD64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BFD68
  c->r[30]=c->r[3]|c->r[3]; // 801BFD6C
  if (crb(c,2)) { goto L_801BFD8C; } // 801BFD70
  c->r[4]=0u+0x00000000u; // 801BFD74
  c->lr=0x801BFD7Cu; f_801EA080(c); // 801BFD78
  cmps(c,0,(int32_t)c->r[31],0); // 801BFD7C
  if (!crb(c,1)) { goto L_801BFD8C; } // 801BFD80
  c->r[3]=c->r[30]|c->r[30]; // 801BFD84
  c->lr=0x801BFD8Cu; f_802E61AC(c); // 801BFD88
L_801BFD8C:;
  c->r[3]=c->r[30]|c->r[30]; // 801BFD8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BFD90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BFD94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BFD98
  c->lr=c->r[0]; // 801BFD9C
  c->r[1]=c->r[1]+0x00000010u; // 801BFDA0
  return; // 801BFDA4
}

// fn_801BFDB0
void f_801BFDB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFA628u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFDB0
  c->r[4]=0u+0x00000000u; // 801BFDB4
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFDB8
  c->r[5]=0u+0x80310000u; // 801BFDBC
  c->r[5]=c->r[5]+0xFFFFB5A8u; // 801BFDC0
  {uint32_t ea=c->r[2]+0xFFFFA62Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFDC4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BFDC8
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFDCC
  c->r[0]=0u+0x0000007Fu; // 801BFDD0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801BFDD4
  W16(c->r[3]+0x00000016u,c->r[4]); // 801BFDD8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801BFDDC
  W8(c->r[3]+0x00000014u,c->r[0]); // 801BFDE0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801BFDE4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BFDE8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801BFDEC
  return; // 801BFDF0
}

// fn_801BFE00
void f_801BFE00(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFE00
  c->r[4]=0u+0x00000000u; // 801BFE04
  c->r[5]=0u+0x80310000u; // 801BFE08
  {uint32_t ea=c->r[2]+0xFFFFA62Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFE0C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BFE10
  c->r[5]=c->r[5]+0xFFFFB5A8u; // 801BFE14
  {uint32_t ea=c->r[5]+0x000001FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFE18
  c->r[0]=0u+0x0000007Fu; // 801BFE1C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801BFE20
  W16(c->r[3]+0x00000016u,c->r[4]); // 801BFE24
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801BFE28
  W8(c->r[3]+0x00000014u,c->r[0]); // 801BFE2C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 801BFE30
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BFE34
  W32(c->r[3]+0x00000000u,c->r[4]); // 801BFE38
  return; // 801BFE3C
}

// fn_801BFE40
void f_801BFE40(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFE40
  c->r[0]=0u+0x00000000u; // 801BFE44
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BFE48
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801BFE4C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BFE50
  return; // 801BFE54
}

// fn_801BFE60
void f_801BFE60(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BFE60
  cmps(c,0,(int32_t)c->r[0],0); // 801BFE64
  if (!crb(c,2)) { goto L_801BFE7C; } // 801BFE68
  {uint32_t ea=c->r[2]+0xFFFFA634u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFE6C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFE70
  fcmp(c,0,c->f[1],c->f[0]); // 801BFE74
  if (crb(c,2)) return; // 801BFE78
L_801BFE7C:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFE7C
  {uint32_t ea=c->r[2]+0xFFFFA630u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFE80
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801BFE84
  return; // 801BFE88
}

// fn_801BFE90
void f_801BFE90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BFE90
  c->r[0]=c->lr; // 801BFE94
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BFE98
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BFE9C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BFEA0
  c->r[30]=c->r[4]|c->r[4]; // 801BFEA4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801BFEA8
  c->r[29]=c->r[3]|c->r[3]; // 801BFEAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BFEB0
  cmps(c,0,(int32_t)c->r[0],0); // 801BFEB4
  if (crb(c,2)) { goto L_801BFED8; } // 801BFEB8
  cmps(c,0,(int32_t)c->r[0],1); // 801BFEBC
  if (crb(c,2)) { goto L_801BFF24; } // 801BFEC0
  cmps(c,0,(int32_t)c->r[0],2); // 801BFEC4
  if (crb(c,2)) { goto L_801BFF5C; } // 801BFEC8
  cmps(c,0,(int32_t)c->r[0],4); // 801BFECC
  if (crb(c,2)) { goto L_801C000C; } // 801BFED0
  goto L_801C003C; // 801BFED4
L_801BFED8:;
  {uint32_t ea=c->r[2]+0xFFFFA638u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFED8
  c->ctr=c->r[4]; // 801BFEDC
  cmps(c,0,(int32_t)c->r[4],0); // 801BFEE0
  if (!crb(c,1)) { goto L_801C003C; } // 801BFEE4
L_801BFEE8:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801BFEE8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFEEC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801BFEF0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 801BFEF4
  fcmp(c,0,c->f[1],c->f[0]); // 801BFEF8
  if (!crb(c,1)) { goto L_801BFF1C; } // 801BFEFC
  {uint32_t ea=c->r[2]+0xFFFFA634u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFF00
  c->r[4]=0u+0x00000001u; // 801BFF04
  c->r[0]=R16(c->r[3]+0x00000016u); // 801BFF08
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801BFF0C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801BFF10
  W16(c->r[3]+0x00000018u,c->r[0]); // 801BFF14
  goto L_801C003C; // 801BFF18
L_801BFF1C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BFEE8; } // 801BFF1C
  goto L_801C003C; // 801BFF20
L_801BFF24:;
  c->r[6]=R16(c->r[3]+0x00000018u); // 801BFF24
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801BFF28
  if (!crb(c,0)) { goto L_801BFF3C; } // 801BFF2C
  c->r[0]=c->r[6]-c->r[4]; // 801BFF30
  W16(c->r[3]+0x00000018u,c->r[0]); // 801BFF34
  goto L_801BFF50; // 801BFF38
L_801BFF3C:;
  c->r[5]=0u+0x00000000u; // 801BFF3C
  c->r[0]=0u+0x00000002u; // 801BFF40
  W16(c->r[3]+0x00000018u,c->r[5]); // 801BFF44
  c->r[30]=c->r[4]-c->r[6]; // 801BFF48
  W32(c->r[3]+0x00000000u,c->r[0]); // 801BFF4C
L_801BFF50:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BFF50
  cmps(c,0,(int32_t)c->r[0],2); // 801BFF54
  if (!crb(c,2)) { goto L_801C003C; } // 801BFF58
L_801BFF5C:;
  c->r[31]=R8(c->r[3]+0x00000014u); // 801BFF5C
  c->r[0]=0u+0x00000000u; // 801BFF60
  cmpu(c,0,c->r[31],0x0000007Fu); // 801BFF64
  if (crb(c,1)) { goto L_801BFF70; } // 801BFF68
  c->r[0]=0u+0x00000001u; // 801BFF6C
L_801BFF70:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BFF70
  if (!crb(c,2)) { goto L_801BFFA0; } // 801BFF74
  c->r[3]=0u+0x803A0000u; // 801BFF78
  c->r[5]=0u+0x803A0000u; // 801BFF7C
  c->r[6]=c->r[31]|c->r[31]; // 801BFF80
  c->r[4]=0u+0x00000160u; // 801BFF84
  c->r[3]=c->r[3]+0xFFFFD060u; // 801BFF88
  c->r[5]=c->r[5]+0xFFFFD078u; // 801BFF8C
  c->r[7]=0u+0x00000000u; // 801BFF90
  c->r[8]=0u+0x0000007Fu; // 801BFF94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801BFF98
  c->lr=0x801BFFA0u; f_80212260(c); // 801BFF9C
L_801BFFA0:;
  c->r[3]=0u+0x43300000u; // 801BFFA0
  c->r[0]=c->r[30]^0x80000000u; // 801BFFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BFFA8
  c->r[4]=0u+0x80310000u; // 801BFFAC
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[3]=RF64(ea);} // 801BFFB0
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801BFFB4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801BFFB8
  c->r[4]=c->r[4]+0xFFFFB4A8u; // 801BFFBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+c->r[0]); // 801BFFC0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801BFFC4
  c->r[0]=c->r[0]^0x80000000u; // 801BFFC8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801BFFCC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801BFFD0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BFFD4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801BFFD8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801BFFDC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801BFFE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801BFFE4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801BFFE8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 801BFFEC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 801BFFF0
  fcmp(c,0,c->f[0],c->f[1]); // 801BFFF4
  if (!crb(c,0)) { goto L_801C003C; } // 801BFFF8
  c->r[0]=0u+0x00000003u; // 801BFFFC
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 801C0000
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C0004
  goto L_801C003C; // 801C0008
L_801C000C:;
  c->r[4]=c->r[4]^0x80000000u; // 801C000C
  c->r[0]=0u+0x43300000u; // 801C0010
  W32(c->r[1]+0x00000014u,c->r[4]); // 801C0014
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[3]=RF64(ea);} // 801C0018
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C001C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0020
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801C0024
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0028
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C002C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801C0030
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801C0034
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801C0038
L_801C003C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C003C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C0040
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C0044
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C0048
  c->lr=c->r[0]; // 801C004C
  c->r[1]=c->r[1]+0x00000030u; // 801C0050
  return; // 801C0054
}

// fn_801C0060
void f_801C0060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0060
  c->r[0]=c->lr; // 801C0064
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C0068
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C006C
  c->r[0]=0u+0x00000000u; // 801C0070
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0074
  c->r[31]=c->r[4]|c->r[4]; // 801C0078
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C007C
  c->r[30]=c->r[3]|c->r[3]; // 801C0080
  if (crb(c,1)) { goto L_801C008C; } // 801C0084
  c->r[0]=0u+0x00000001u; // 801C0088
L_801C008C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C008C
  if (!crb(c,2)) { goto L_801C00BC; } // 801C0090
  c->r[3]=0u+0x803A0000u; // 801C0094
  c->r[5]=0u+0x803A0000u; // 801C0098
  c->r[6]=c->r[31]|c->r[31]; // 801C009C
  c->r[4]=0u+0x00000107u; // 801C00A0
  c->r[3]=c->r[3]+0xFFFFD060u; // 801C00A4
  c->r[5]=c->r[5]+0xFFFFD0B4u; // 801C00A8
  c->r[7]=0u+0x00000000u; // 801C00AC
  c->r[8]=0u+0x0000007Fu; // 801C00B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C00B4
  c->lr=0x801C00BCu; f_80212260(c); // 801C00B8
L_801C00BC:;
  c->r[3]=0u+0x80310000u; // 801C00BC
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801C00C0
  c->r[3]=c->r[3]+0xFFFFB5A8u; // 801C00C4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 801C00C8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 801C00CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C00D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C00D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C00D8
  c->lr=c->r[0]; // 801C00DC
  c->r[1]=c->r[1]+0x00000010u; // 801C00E0
  return; // 801C00E4
}

// fn_801C00F0
void f_801C00F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C00F0
  c->r[0]=c->lr; // 801C00F4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C00F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C00FC
  c->r[0]=0u+0x00000000u; // 801C0100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0104
  c->r[31]=c->r[4]|c->r[4]; // 801C0108
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C010C
  c->r[30]=c->r[3]|c->r[3]; // 801C0110
  if (crb(c,1)) { goto L_801C011C; } // 801C0114
  c->r[0]=0u+0x00000001u; // 801C0118
L_801C011C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C011C
  if (!crb(c,2)) { goto L_801C014C; } // 801C0120
  c->r[3]=0u+0x803A0000u; // 801C0124
  c->r[5]=0u+0x803A0000u; // 801C0128
  c->r[6]=c->r[31]|c->r[31]; // 801C012C
  c->r[4]=0u+0x00000116u; // 801C0130
  c->r[3]=c->r[3]+0xFFFFD060u; // 801C0134
  c->r[5]=c->r[5]+0xFFFFD0F4u; // 801C0138
  c->r[7]=0u+0x00000000u; // 801C013C
  c->r[8]=0u+0x0000007Fu; // 801C0140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0144
  c->lr=0x801C014Cu; f_80212260(c); // 801C0148
L_801C014C:;
  c->r[0]=c->r[31]+0x00000001u; // 801C014C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 801C0150
  c->r[0]=sraw(c,c->r[0],2); // 801C0154
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 801C0158
  W16(c->r[30]+0x00000016u,c->r[0]); // 801C015C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0160
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C0164
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0168
  c->lr=c->r[0]; // 801C016C
  c->r[1]=c->r[1]+0x00000010u; // 801C0170
  return; // 801C0174
}

// fn_801C0180
void f_801C0180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0180
  c->r[0]=c->lr; // 801C0184
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C0188
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C018C
  c->r[0]=0u+0x00000000u; // 801C0190
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C0194
  c->r[31]=0u+0x803A0000u; // 801C0198
  c->r[31]=c->r[31]+0xFFFFD060u; // 801C019C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C01A0
  c->r[30]=c->r[4]|c->r[4]; // 801C01A4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C01A8
  c->r[29]=c->r[3]|c->r[3]; // 801C01AC
  if (crb(c,1)) { goto L_801C01B8; } // 801C01B0
  c->r[0]=0u+0x00000001u; // 801C01B4
L_801C01B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C01B8
  if (!crb(c,2)) { goto L_801C01E0; } // 801C01BC
  c->r[6]=c->r[30]|c->r[30]; // 801C01C0
  c->r[3]=c->r[31]+0x00000000u; // 801C01C4
  c->r[5]=c->r[31]+0x000000D0u; // 801C01C8
  c->r[4]=0u+0x00000126u; // 801C01CC
  c->r[7]=0u+0x00000000u; // 801C01D0
  c->r[8]=0u+0x0000007Fu; // 801C01D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C01D8
  c->lr=0x801C01E0u; f_80212260(c); // 801C01DC
L_801C01E0:;
  cmpu(c,0,c->r[30],0x0000007Fu); // 801C01E0
  c->r[0]=0u+0x00000000u; // 801C01E4
  if (crb(c,1)) { goto L_801C01F0; } // 801C01E8
  c->r[0]=0u+0x00000001u; // 801C01EC
L_801C01F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C01F0
  if (!crb(c,2)) { goto L_801C0218; } // 801C01F4
  c->r[6]=c->r[30]|c->r[30]; // 801C01F8
  c->r[3]=c->r[31]+0x00000000u; // 801C01FC
  c->r[5]=c->r[31]+0x00000110u; // 801C0200
  c->r[4]=0u+0x00000151u; // 801C0204
  c->r[7]=0u+0x00000000u; // 801C0208
  c->r[8]=0u+0x0000007Fu; // 801C020C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0210
  c->lr=0x801C0218u; f_80212260(c); // 801C0214
L_801C0218:;
  cmps(c,0,(int32_t)c->r[30],127); // 801C0218
  if (!crb(c,2)) { goto L_801C0228; } // 801C021C
  {uint32_t ea=c->r[2]+0xFFFFA62Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0220
  goto L_801C02A8; // 801C0224
L_801C0228:;
  cmps(c,0,(int32_t)c->r[30],126); // 801C0228
  if (!crb(c,2)) { goto L_801C0238; } // 801C022C
  {uint32_t ea=c->r[2]+0xFFFFA648u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0230
  goto L_801C02A8; // 801C0234
L_801C0238:;
  cmps(c,0,(int32_t)c->r[30],50); // 801C0238
  if (!crb(c,0)) { goto L_801C0278; } // 801C023C
  c->r[3]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801C0240
  c->r[0]=0u+0x43300000u; // 801C0244
  c->r[3]=c->r[3]+0x00000001u; // 801C0248
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C024C
  c->r[0]=c->r[3]^0x80000000u; // 801C0250
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[3]=RF64(ea);} // 801C0254
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C0258
  {uint32_t ea=c->r[2]+0xFFFFA64Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C025C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801C0260
  {uint32_t ea=c->r[2]+0xFFFFA650u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0264
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C0268
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801C026C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C0270
  goto L_801C02A8; // 801C0274
L_801C0278:;
  c->r[3]=addc(c,~c->r[30],0x0000007Eu,1); // 801C0278
  c->r[0]=0u+0x43300000u; // 801C027C
  c->r[3]=c->r[3]^0x80000000u; // 801C0280
  W32(c->r[1]+0x00000014u,c->r[3]); // 801C0284
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[3]=RF64(ea);} // 801C0288
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C028C
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0290
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801C0294
  {uint32_t ea=c->r[2]+0xFFFFA650u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0298
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C029C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801C02A0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C02A4
L_801C02A8:;
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 801C02A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C02AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C02B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C02B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C02B8
  c->lr=c->r[0]; // 801C02BC
  c->r[1]=c->r[1]+0x00000030u; // 801C02C0
  return; // 801C02C4
}

// fn_801C02D0
void f_801C02D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C02D0
  c->r[0]=c->lr; // 801C02D4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C02D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C02DC
  c->r[0]=0u+0x00000000u; // 801C02E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C02E4
  c->r[31]=c->r[4]|c->r[4]; // 801C02E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C02EC
  c->r[30]=c->r[3]|c->r[3]; // 801C02F0
  if (crb(c,1)) { goto L_801C02FC; } // 801C02F4
  c->r[0]=0u+0x00000001u; // 801C02F8
L_801C02FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C02FC
  if (!crb(c,2)) { goto L_801C032C; } // 801C0300
  c->r[3]=0u+0x803A0000u; // 801C0304
  c->r[5]=0u+0x803A0000u; // 801C0308
  c->r[6]=c->r[31]|c->r[31]; // 801C030C
  c->r[4]=0u+0x00000136u; // 801C0310
  c->r[3]=c->r[3]+0xFFFFD060u; // 801C0314
  c->r[5]=c->r[5]+0xFFFFD1B0u; // 801C0318
  c->r[7]=0u+0x00000000u; // 801C031C
  c->r[8]=0u+0x0000007Fu; // 801C0320
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0324
  c->lr=0x801C032Cu; f_80212260(c); // 801C0328
L_801C032C:;
  W8(c->r[30]+0x00000014u,c->r[31]); // 801C032C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C0330
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C0334
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C0338
  c->lr=c->r[0]; // 801C033C
  c->r[1]=c->r[1]+0x00000010u; // 801C0340
  return; // 801C0344
}

// fn_801C0350
void f_801C0350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0350
  c->r[0]=c->lr; // 801C0354
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C0358
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C035C
  c->r[0]=0u+0x00000000u; // 801C0360
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C0364
  c->r[31]=c->r[4]|c->r[4]; // 801C0368
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C036C
  c->r[30]=c->r[3]|c->r[3]; // 801C0370
  if (crb(c,1)) { goto L_801C037C; } // 801C0374
  c->r[0]=0u+0x00000001u; // 801C0378
L_801C037C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C037C
  if (!crb(c,2)) { goto L_801C03AC; } // 801C0380
  c->r[3]=0u+0x803A0000u; // 801C0384
  c->r[5]=0u+0x803A0000u; // 801C0388
  c->r[6]=c->r[31]|c->r[31]; // 801C038C
  c->r[4]=0u+0x00000146u; // 801C0390
  c->r[3]=c->r[3]+0xFFFFD060u; // 801C0394
  c->r[5]=c->r[5]+0xFFFFD170u; // 801C0398
  c->r[7]=0u+0x00000000u; // 801C039C
  c->r[8]=0u+0x0000007Fu; // 801C03A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C03A4
  c->lr=0x801C03ACu; f_80212260(c); // 801C03A8
L_801C03AC:;
  cmpu(c,0,c->r[31],0x0000007Fu); // 801C03AC
  c->r[0]=0u+0x00000000u; // 801C03B0
  if (crb(c,1)) { goto L_801C03BC; } // 801C03B4
  c->r[0]=0u+0x00000001u; // 801C03B8
L_801C03BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C03BC
  if (!crb(c,2)) { goto L_801C03EC; } // 801C03C0
  c->r[3]=0u+0x803A0000u; // 801C03C4
  c->r[5]=0u+0x803A0000u; // 801C03C8
  c->r[6]=c->r[31]|c->r[31]; // 801C03CC
  c->r[4]=0u+0x00000151u; // 801C03D0
  c->r[3]=c->r[3]+0xFFFFD060u; // 801C03D4
  c->r[5]=c->r[5]+0xFFFFD170u; // 801C03D8
  c->r[7]=0u+0x00000000u; // 801C03DC
  c->r[8]=0u+0x0000007Fu; // 801C03E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C03E4
  c->lr=0x801C03ECu; f_80212260(c); // 801C03E8
L_801C03EC:;
  cmps(c,0,(int32_t)c->r[31],127); // 801C03EC
  if (!crb(c,2)) { goto L_801C03FC; } // 801C03F0
  {uint32_t ea=c->r[2]+0xFFFFA62Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C03F4
  goto L_801C047C; // 801C03F8
L_801C03FC:;
  cmps(c,0,(int32_t)c->r[31],126); // 801C03FC
  if (!crb(c,2)) { goto L_801C040C; } // 801C0400
  {uint32_t ea=c->r[2]+0xFFFFA648u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0404
  goto L_801C047C; // 801C0408
L_801C040C:;
  cmps(c,0,(int32_t)c->r[31],50); // 801C040C
  if (!crb(c,0)) { goto L_801C044C; } // 801C0410
  c->r[3]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801C0414
  c->r[0]=0u+0x43300000u; // 801C0418
  c->r[3]=c->r[3]+0x00000001u; // 801C041C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C0420
  c->r[0]=c->r[3]^0x80000000u; // 801C0424
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[3]=RF64(ea);} // 801C0428
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C042C
  {uint32_t ea=c->r[2]+0xFFFFA64Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0430
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801C0434
  {uint32_t ea=c->r[2]+0xFFFFA650u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C0438
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C043C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801C0440
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C0444
  goto L_801C047C; // 801C0448
L_801C044C:;
  c->r[3]=addc(c,~c->r[31],0x0000007Eu,1); // 801C044C
  c->r[0]=0u+0x43300000u; // 801C0450
  c->r[3]=c->r[3]^0x80000000u; // 801C0454
  W32(c->r[1]+0x00000014u,c->r[3]); // 801C0458
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[3]=RF64(ea);} // 801C045C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C0460
  {uint32_t ea=c->r[2]+0xFFFFA654u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C0464
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801C0468
  {uint32_t ea=c->r[2]+0xFFFFA650u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C046C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C0470
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[2]); // 801C0474
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C0478
L_801C047C:;
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 801C047C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C0480
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C0484
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C0488
  c->lr=c->r[0]; // 801C048C
  c->r[1]=c->r[1]+0x00000020u; // 801C0490
  return; // 801C0494
}

// fn_801C04A0
void f_801C04A0(Ctx* __restrict c) {
  c->r[5]=c->r[3]+0x00000004u; // 801C04A0
  c->r[4]=0u+0x00000000u; // 801C04A4
  c->r[0]=0u+0x00000001u; // 801C04A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C04AC
  W32(c->r[3]+0x00000004u,c->r[5]); // 801C04B0
  W32(c->r[3]+0x00000008u,c->r[5]); // 801C04B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C04B8
  return; // 801C04BC
}

// fn_801C04C0
void f_801C04C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C04C0
  c->r[0]=c->lr; // 801C04C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C04C8
  c->r[11]=c->r[1]+0x00000030u; // 801C04CC
  c->lr=0x801C04D4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C04D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C04D4
  c->r[25]=c->r[3]|c->r[3]; // 801C04D8
  c->r[26]=c->r[4]|c->r[4]; // 801C04DC
  if (crb(c,2)) { goto L_801C0550; } // 801C04E0
  c->r[31]=R32(c->r[3]+0x00000004u); // 801C04E4
  c->r[30]=c->r[3]+0x00000004u; // 801C04E8
  c->r[28]=0u+0x803A0000u; // 801C04EC
  c->r[29]=0u+0x803A0000u; // 801C04F0
  goto L_801C0524; // 801C04F4
L_801C04F8:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801C04F8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801C04FC
  if (!crb(c,2)) { goto L_801C0518; } // 801C0500
  c->r[3]=c->r[28]+0xFFFFD2E4u; // 801C0504
  c->r[5]=c->r[29]+0xFFFFD2C0u; // 801C0508
  c->r[4]=0u+0x0000023Du; // 801C050C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0510
  c->lr=0x801C0518u; f_80212260(c); // 801C0514
L_801C0518:;
  c->r[4]=c->r[25]|c->r[25]; // 801C0518
  c->r[3]=c->r[27]+0xFFFFFEF8u; // 801C051C
  c->lr=0x801C0524u; f_801BD0A0(c); // 801C0520
L_801C0524:;
  cmpu(c,0,c->r[31],c->r[30]); // 801C0524
  if (!crb(c,2)) { IRQCHK(c); goto L_801C04F8; } // 801C0528
  cmps(c,0,(int32_t)c->r[25],0); // 801C052C
  if (crb(c,2)) { goto L_801C0540; } // 801C0530
  c->r[3]=c->r[25]|c->r[25]; // 801C0534
  c->r[4]=0u+0x00000000u; // 801C0538
  c->lr=0x801C0540u; f_801E4130(c); // 801C053C
L_801C0540:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C0540
  if (!crb(c,1)) { goto L_801C0550; } // 801C0544
  c->r[3]=c->r[25]|c->r[25]; // 801C0548
  c->lr=0x801C0550u; f_802E61AC(c); // 801C054C
L_801C0550:;
  c->r[11]=c->r[1]+0x00000030u; // 801C0550
  c->r[3]=c->r[25]|c->r[25]; // 801C0554
  c->lr=0x801C055Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0558
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C055C
  c->lr=c->r[0]; // 801C0560
  c->r[1]=c->r[1]+0x00000030u; // 801C0564
  return; // 801C0568
}

// fn_801C0570
void f_801C0570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0570
  c->r[0]=c->lr; // 801C0574
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C0578
  c->r[11]=c->r[1]+0x00000020u; // 801C057C
  c->lr=0x801C0584u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0580
  c->r[31]=R32(c->r[3]+0x00000004u); // 801C0584
  c->r[26]=c->r[4]|c->r[4]; // 801C0588
  c->r[30]=c->r[3]+0x00000004u; // 801C058C
  c->r[28]=0u+0x803A0000u; // 801C0590
  c->r[29]=0u+0x803A0000u; // 801C0594
  goto L_801C05C8; // 801C0598
L_801C059C:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801C059C
  c->r[31]=R32(c->r[31]+0x00000000u); // 801C05A0
  if (!crb(c,2)) { goto L_801C05BC; } // 801C05A4
  c->r[3]=c->r[28]+0xFFFFD2E4u; // 801C05A8
  c->r[5]=c->r[29]+0xFFFFD2C0u; // 801C05AC
  c->r[4]=0u+0x0000023Du; // 801C05B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C05B4
  c->lr=0x801C05BCu; f_80212260(c); // 801C05B8
L_801C05BC:;
  c->r[4]=c->r[26]|c->r[26]; // 801C05BC
  c->r[3]=c->r[27]+0xFFFFFEF8u; // 801C05C0
  c->lr=0x801C05C8u; f_801BCF80(c); // 801C05C4
L_801C05C8:;
  cmpu(c,0,c->r[31],c->r[30]); // 801C05C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C059C; } // 801C05CC
  c->r[11]=c->r[1]+0x00000020u; // 801C05D0
  c->lr=0x801C05D8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C05D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C05D8
  c->lr=c->r[0]; // 801C05DC
  c->r[1]=c->r[1]+0x00000020u; // 801C05E0
  return; // 801C05E4
}

// fn_801C05F0
void f_801C05F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C05F0
  c->r[0]=c->lr; // 801C05F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C05F8
  c->r[11]=c->r[1]+0x00000050u; // 801C05FC
  c->lr=0x801C0604u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0600
  cmps(c,0,(int32_t)c->r[4],0); // 801C0604
  c->r[26]=c->r[3]|c->r[3]; // 801C0608
  c->r[27]=c->r[4]|c->r[4]; // 801C060C
  if (!crb(c,2)) { goto L_801C0630; } // 801C0610
  c->r[3]=0u+0x803A0000u; // 801C0614
  c->r[5]=0u+0x803A0000u; // 801C0618
  c->r[3]=c->r[3]+0xFFFFD1F0u; // 801C061C
  c->r[4]=0u+0x00000081u; // 801C0620
  c->r[5]=c->r[5]+0xFFFFD20Cu; // 801C0624
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0628
  c->lr=0x801C0630u; f_80212260(c); // 801C062C
L_801C0630:;
  c->lr=0x801C0634u; f_801D76C0(c); // 801C0630
  c->r[3]=c->r[3]+0x00000354u; // 801C0634
  c->lr=0x801C063Cu; f_80126DC0(c); // 801C0638
  c->r[3]=R8(c->r[27]+0x00000098u); // 801C063C
  c->r[0]=R32(c->r[27]+0x00000050u); // 801C0640
  c->r[3]=c->r[3]+c->r[0]; // 801C0644
  cmps(c,0,(int32_t)c->r[3],127); // 801C0648
  if (!crb(c,1)) { goto L_801C0658; } // 801C064C
  c->r[28]=0u+0x0000007Fu; // 801C0650
  goto L_801C0660; // 801C0654
L_801C0658:;
  c->r[0]=sraw(c,c->r[3],31); // 801C0658
  c->r[28]=c->r[3]&~c->r[0]; // 801C065C
L_801C0660:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 801C0660
  cmps(c,0,(int32_t)c->r[0],0); // 801C0664
  if (!crb(c,2)) { goto L_801C0680; } // 801C0668
  c->lr=0x801C0670u; f_801D76C0(c); // 801C066C
  c->r[3]=c->r[3]+0x00000354u; // 801C0670
  c->lr=0x801C0678u; f_80126EA0(c); // 801C0674
  c->r[3]=0u+0x00000000u; // 801C0678
  goto L_801C0818; // 801C067C
L_801C0680:;
  c->r[24]=c->r[26]+0x00000004u; // 801C0680
  c->r[30]=0u+0x803A0000u; // 801C0684
  c->r[31]=0u+0x803A0000u; // 801C0688
  c->r[22]=0u+0x803A0000u; // 801C068C
  c->r[23]=0u+0x803A0000u; // 801C0690
  goto L_801C07B0; // 801C0694
L_801C0698:;
  c->r[25]=R32(c->r[26]+0x00000004u); // 801C0698
  c->r[21]=0u+0x00000080u; // 801C069C
  c->r[29]=0u+0x00000000u; // 801C06A0
  goto L_801C0738; // 801C06A4
L_801C06A8:;
  cmps(c,0,(int32_t)c->r[25],0); // 801C06A8
  if (!crb(c,2)) { goto L_801C06C4; } // 801C06AC
  c->r[3]=c->r[30]+0xFFFFD2E4u; // 801C06B0
  c->r[5]=c->r[31]+0xFFFFD2C0u; // 801C06B4
  c->r[4]=0u+0x0000023Du; // 801C06B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C06BC
  c->lr=0x801C06C4u; f_80212260(c); // 801C06C0
L_801C06C4:;
  c->r[3]=R8(c->r[25]+0xFFFFFF90u); // 801C06C4
  c->r[19]=c->r[25]+0xFFFFFEF8u; // 801C06C8
  c->r[0]=R32(c->r[25]+0xFFFFFF48u); // 801C06CC
  c->r[3]=c->r[3]+c->r[0]; // 801C06D0
  cmps(c,0,(int32_t)c->r[3],127); // 801C06D4
  if (!crb(c,1)) { goto L_801C06E4; } // 801C06D8
  c->r[20]=0u+0x0000007Fu; // 801C06DC
  goto L_801C06EC; // 801C06E0
L_801C06E4:;
  c->r[0]=sraw(c,c->r[3],31); // 801C06E4
  c->r[20]=c->r[3]&~c->r[0]; // 801C06E8
L_801C06EC:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[20]); // 801C06EC
  if (!crb(c,1)) { goto L_801C0734; } // 801C06F0
  cmps(c,0,(int32_t)c->r[25],0); // 801C06F4
  if (!crb(c,2)) { goto L_801C0710; } // 801C06F8
  c->r[3]=c->r[30]+0xFFFFD2E4u; // 801C06FC
  c->r[5]=c->r[31]+0xFFFFD2C0u; // 801C0700
  c->r[4]=0u+0x0000023Du; // 801C0704
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0708
  c->lr=0x801C0710u; f_80212260(c); // 801C070C
L_801C0710:;
  cmps(c,0,(int32_t)c->r[19],0); // 801C0710
  if (!crb(c,2)) { goto L_801C072C; } // 801C0714
  c->r[3]=c->r[22]+0xFFFFD284u; // 801C0718
  c->r[5]=c->r[23]+0xFFFFD260u; // 801C071C
  c->r[4]=0u+0x00000193u; // 801C0720
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0724
  c->lr=0x801C072Cu; f_80212260(c); // 801C0728
L_801C072C:;
  c->r[29]=c->r[19]|c->r[19]; // 801C072C
  c->r[21]=c->r[20]|c->r[20]; // 801C0730
L_801C0734:;
  c->r[25]=R32(c->r[25]+0x00000000u); // 801C0734
L_801C0738:;
  cmpu(c,0,c->r[25],c->r[24]); // 801C0738
  if (!crb(c,2)) { IRQCHK(c); goto L_801C06A8; } // 801C073C
  cmps(c,0,(int32_t)c->r[29],0); // 801C0740
  if (!crb(c,2)) { goto L_801C075C; } // 801C0744
  c->lr=0x801C074Cu; f_801D76C0(c); // 801C0748
  c->r[3]=c->r[3]+0x00000354u; // 801C074C
  c->lr=0x801C0754u; f_80126EA0(c); // 801C0750
  c->r[3]=0u+0x00000000u; // 801C0754
  goto L_801C0818; // 801C0758
L_801C075C:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 801C075C
  c->r[0]=R32(c->r[29]+0x00000050u); // 801C0760
  c->r[3]=c->r[3]+c->r[0]; // 801C0764
  cmps(c,0,(int32_t)c->r[3],127); // 801C0768
  if (!crb(c,1)) { goto L_801C0778; } // 801C076C
  c->r[0]=0u+0x0000007Fu; // 801C0770
  goto L_801C0780; // 801C0774
L_801C0778:;
  c->r[0]=sraw(c,c->r[3],31); // 801C0778
  c->r[0]=c->r[3]&~c->r[0]; // 801C077C
L_801C0780:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801C0780
  if (!crb(c,0)) { goto L_801C079C; } // 801C0784
  c->lr=0x801C078Cu; f_801D76C0(c); // 801C0788
  c->r[3]=c->r[3]+0x00000354u; // 801C078C
  c->lr=0x801C0794u; f_80126EA0(c); // 801C0790
  c->r[3]=0u+0x00000000u; // 801C0794
  goto L_801C0818; // 801C0798
L_801C079C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801C079C
  c->r[3]=c->r[29]|c->r[29]; // 801C07A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C07A4
  c->ctr=c->r[12]; // 801C07A8
  if (true) { c->lr=0x801C07B0u; dispatch(c,c->ctr); } // 801C07AC
L_801C07B0:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801C07B0
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 801C07B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C07B8
  if (!crb(c,0)) { IRQCHK(c); goto L_801C0698; } // 801C07BC
  cmps(c,0,(int32_t)c->r[27],0); // 801C07C0
  c->r[24]=c->r[26]+0x00000004u; // 801C07C4
  if (!crb(c,2)) { goto L_801C07E8; } // 801C07C8
  c->r[3]=0u+0x803A0000u; // 801C07CC
  c->r[5]=0u+0x803A0000u; // 801C07D0
  c->r[3]=c->r[3]+0xFFFFD2B4u; // 801C07D4
  c->r[4]=0u+0x00000233u; // 801C07D8
  c->r[5]=c->r[5]+0xFFFFD290u; // 801C07DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C07E0
  c->lr=0x801C07E8u; f_80212260(c); // 801C07E4
L_801C07E8:;
  W32(c->r[1]+0x00000008u,c->r[24]); // 801C07E8
  c->r[3]=c->r[26]|c->r[26]; // 801C07EC
  c->r[4]=c->r[1]+0x00000008u; // 801C07F0
  c->r[5]=c->r[27]+0x00000108u; // 801C07F4
  c->lr=0x801C07FCu; f_801E44B0(c); // 801C07F8
  c->r[3]=c->r[27]|c->r[27]; // 801C07FC
  c->r[4]=c->r[26]|c->r[26]; // 801C0800
  c->lr=0x801C0808u; f_801BD010(c); // 801C0804
  c->lr=0x801C080Cu; f_801D76C0(c); // 801C0808
  c->r[3]=c->r[3]+0x00000354u; // 801C080C
  c->lr=0x801C0814u; f_80126EA0(c); // 801C0810
  c->r[3]=0u+0x00000001u; // 801C0814
L_801C0818:;
  c->r[11]=c->r[1]+0x00000050u; // 801C0818
  c->lr=0x801C0820u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C081C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C0820
  c->lr=c->r[0]; // 801C0824
  c->r[1]=c->r[1]+0x00000050u; // 801C0828
  return; // 801C082C
}

// fn_801C0830
void f_801C0830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0830
  c->r[0]=c->lr; // 801C0834
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C0838
  c->r[11]=c->r[1]+0x00000040u; // 801C083C
  c->lr=0x801C0844u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0840
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C0844
  c->r[31]=c->r[3]|c->r[3]; // 801C0848
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801C084C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C0850
  if (!crb(c,1)) { goto L_801C0960; } // 801C0854
  c->r[30]=c->r[3]+0x00000004u; // 801C0858
  c->r[23]=0u+0x803A0000u; // 801C085C
  c->r[24]=0u+0x803A0000u; // 801C0860
  c->r[25]=0u+0x803A0000u; // 801C0864
  c->r[26]=0u+0x803A0000u; // 801C0868
  c->r[27]=0u+0x803A0000u; // 801C086C
  c->r[28]=0u+0x803A0000u; // 801C0870
  goto L_801C0950; // 801C0874
L_801C0878:;
  c->r[29]=R32(c->r[31]+0x00000004u); // 801C0878
  c->r[21]=0u+0x00000080u; // 801C087C
  c->r[22]=0u+0x00000000u; // 801C0880
  goto L_801C0918; // 801C0884
L_801C0888:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C0888
  if (!crb(c,2)) { goto L_801C08A4; } // 801C088C
  c->r[3]=c->r[23]+0xFFFFD2E4u; // 801C0890
  c->r[5]=c->r[24]+0xFFFFD2C0u; // 801C0894
  c->r[4]=0u+0x0000023Du; // 801C0898
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C089C
  c->lr=0x801C08A4u; f_80212260(c); // 801C08A0
L_801C08A4:;
  c->r[3]=R8(c->r[29]+0xFFFFFF90u); // 801C08A4
  c->r[19]=c->r[29]+0xFFFFFEF8u; // 801C08A8
  c->r[0]=R32(c->r[29]+0xFFFFFF48u); // 801C08AC
  c->r[3]=c->r[3]+c->r[0]; // 801C08B0
  cmps(c,0,(int32_t)c->r[3],127); // 801C08B4
  if (!crb(c,1)) { goto L_801C08C4; } // 801C08B8
  c->r[20]=0u+0x0000007Fu; // 801C08BC
  goto L_801C08CC; // 801C08C0
L_801C08C4:;
  c->r[0]=sraw(c,c->r[3],31); // 801C08C4
  c->r[20]=c->r[3]&~c->r[0]; // 801C08C8
L_801C08CC:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[20]); // 801C08CC
  if (!crb(c,1)) { goto L_801C0914; } // 801C08D0
  cmps(c,0,(int32_t)c->r[29],0); // 801C08D4
  if (!crb(c,2)) { goto L_801C08F0; } // 801C08D8
  c->r[3]=c->r[23]+0xFFFFD2E4u; // 801C08DC
  c->r[5]=c->r[24]+0xFFFFD2C0u; // 801C08E0
  c->r[4]=0u+0x0000023Du; // 801C08E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C08E8
  c->lr=0x801C08F0u; f_80212260(c); // 801C08EC
L_801C08F0:;
  cmps(c,0,(int32_t)c->r[19],0); // 801C08F0
  if (!crb(c,2)) { goto L_801C090C; } // 801C08F4
  c->r[3]=c->r[25]+0xFFFFD284u; // 801C08F8
  c->r[5]=c->r[26]+0xFFFFD260u; // 801C08FC
  c->r[4]=0u+0x00000193u; // 801C0900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0904
  c->lr=0x801C090Cu; f_80212260(c); // 801C0908
L_801C090C:;
  c->r[22]=c->r[19]|c->r[19]; // 801C090C
  c->r[21]=c->r[20]|c->r[20]; // 801C0910
L_801C0914:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 801C0914
L_801C0918:;
  cmpu(c,0,c->r[29],c->r[30]); // 801C0918
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0888; } // 801C091C
  cmps(c,0,(int32_t)c->r[22],0); // 801C0920
  if (!crb(c,2)) { goto L_801C093C; } // 801C0924
  c->r[3]=c->r[27]+0xFFFFD1F0u; // 801C0928
  c->r[5]=c->r[28]+0xFFFFD234u; // 801C092C
  c->r[4]=0u+0x000000A9u; // 801C0930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0934
  c->lr=0x801C093Cu; f_80212260(c); // 801C0938
L_801C093C:;
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C093C
  c->r[3]=c->r[22]|c->r[22]; // 801C0940
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C0944
  c->ctr=c->r[12]; // 801C0948
  if (true) { c->lr=0x801C0950u; dispatch(c,c->ctr); } // 801C094C
L_801C0950:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C0950
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C0954
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801C0958
  if (crb(c,1)) { IRQCHK(c); goto L_801C0878; } // 801C095C
L_801C0960:;
  c->r[11]=c->r[1]+0x00000040u; // 801C0960
  c->lr=0x801C0968u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0964
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C0968
  c->lr=c->r[0]; // 801C096C
  c->r[1]=c->r[1]+0x00000040u; // 801C0970
  return; // 801C0974
}

// fn_801C0980
void f_801C0980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0980
  c->r[0]=c->lr; // 801C0984
  cmps(c,0,(int32_t)c->r[4],0); // 801C0988
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C098C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C0990
  c->r[31]=c->r[4]|c->r[4]; // 801C0994
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C0998
  c->r[30]=c->r[3]|c->r[3]; // 801C099C
  if (!crb(c,2)) { goto L_801C09C0; } // 801C09A0
  c->r[3]=0u+0x803A0000u; // 801C09A4
  c->r[5]=0u+0x803A0000u; // 801C09A8
  c->r[3]=c->r[3]+0xFFFFD2B4u; // 801C09AC
  c->r[4]=0u+0x00000233u; // 801C09B0
  c->r[5]=c->r[5]+0xFFFFD290u; // 801C09B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C09B8
  c->lr=0x801C09C0u; f_80212260(c); // 801C09BC
L_801C09C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801C09C0
  c->r[4]=c->r[31]+0x00000108u; // 801C09C4
  c->lr=0x801C09CCu; f_801E45B0(c); // 801C09C8
  c->r[3]=c->r[31]|c->r[31]; // 801C09CC
  c->r[4]=c->r[30]|c->r[30]; // 801C09D0
  c->lr=0x801C09D8u; f_801BD0A0(c); // 801C09D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C09D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C09DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C09E0
  c->lr=c->r[0]; // 801C09E4
  c->r[1]=c->r[1]+0x00000010u; // 801C09E8
  return; // 801C09EC
}

// fn_801C09F0
void f_801C09F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C09F0
  c->r[0]=c->lr; // 801C09F4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C09F8
  c->r[11]=c->r[1]+0x00000040u; // 801C09FC
  c->lr=0x801C0A04u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0A00
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 801C0A04
  c->r[31]=c->r[4]|c->r[4]; // 801C0A08
  cmps(c,0,(int32_t)c->r[5],0); // 801C0A0C
  if (!crb(c,2)) { goto L_801C0A1C; } // 801C0A10
  c->r[3]=0u+0x00000000u; // 801C0A14
  goto L_801C0B2C; // 801C0A18
L_801C0A1C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C0A1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801C0A20
  if (crb(c,0)) { goto L_801C0B28; } // 801C0A24
  c->r[30]=R32(c->r[3]+0x00000004u); // 801C0A28
  c->r[29]=c->r[3]+0x00000004u; // 801C0A2C
  c->r[23]=0u+0x00000080u; // 801C0A30
  c->r[24]=0u+0x00000000u; // 801C0A34
  c->r[25]=0u+0x803A0000u; // 801C0A38
  c->r[26]=0u+0x803A0000u; // 801C0A3C
  c->r[27]=0u+0x803A0000u; // 801C0A40
  c->r[28]=0u+0x803A0000u; // 801C0A44
  goto L_801C0ADC; // 801C0A48
L_801C0A4C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C0A4C
  if (!crb(c,2)) { goto L_801C0A68; } // 801C0A50
  c->r[3]=c->r[25]+0xFFFFD2E4u; // 801C0A54
  c->r[5]=c->r[26]+0xFFFFD2C0u; // 801C0A58
  c->r[4]=0u+0x0000023Du; // 801C0A5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0A60
  c->lr=0x801C0A68u; f_80212260(c); // 801C0A64
L_801C0A68:;
  c->r[3]=R8(c->r[30]+0xFFFFFF90u); // 801C0A68
  c->r[21]=c->r[30]+0xFFFFFEF8u; // 801C0A6C
  c->r[0]=R32(c->r[30]+0xFFFFFF48u); // 801C0A70
  c->r[3]=c->r[3]+c->r[0]; // 801C0A74
  cmps(c,0,(int32_t)c->r[3],127); // 801C0A78
  if (!crb(c,1)) { goto L_801C0A88; } // 801C0A7C
  c->r[22]=0u+0x0000007Fu; // 801C0A80
  goto L_801C0A90; // 801C0A84
L_801C0A88:;
  c->r[0]=sraw(c,c->r[3],31); // 801C0A88
  c->r[22]=c->r[3]&~c->r[0]; // 801C0A8C
L_801C0A90:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[22]); // 801C0A90
  if (!crb(c,1)) { goto L_801C0AD8; } // 801C0A94
  cmps(c,0,(int32_t)c->r[30],0); // 801C0A98
  if (!crb(c,2)) { goto L_801C0AB4; } // 801C0A9C
  c->r[3]=c->r[25]+0xFFFFD2E4u; // 801C0AA0
  c->r[5]=c->r[26]+0xFFFFD2C0u; // 801C0AA4
  c->r[4]=0u+0x0000023Du; // 801C0AA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0AAC
  c->lr=0x801C0AB4u; f_80212260(c); // 801C0AB0
L_801C0AB4:;
  cmps(c,0,(int32_t)c->r[21],0); // 801C0AB4
  if (!crb(c,2)) { goto L_801C0AD0; } // 801C0AB8
  c->r[3]=c->r[27]+0xFFFFD284u; // 801C0ABC
  c->r[5]=c->r[28]+0xFFFFD260u; // 801C0AC0
  c->r[4]=0u+0x00000193u; // 801C0AC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0AC8
  c->lr=0x801C0AD0u; f_80212260(c); // 801C0ACC
L_801C0AD0:;
  c->r[24]=c->r[21]|c->r[21]; // 801C0AD0
  c->r[23]=c->r[22]|c->r[22]; // 801C0AD4
L_801C0AD8:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801C0AD8
L_801C0ADC:;
  cmpu(c,0,c->r[30],c->r[29]); // 801C0ADC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0A4C; } // 801C0AE0
  cmps(c,0,(int32_t)c->r[24],0); // 801C0AE4
  if (!crb(c,2)) { goto L_801C0AF4; } // 801C0AE8
  c->r[3]=0u+0x00000000u; // 801C0AEC
  goto L_801C0B2C; // 801C0AF0
L_801C0AF4:;
  c->r[3]=R8(c->r[24]+0x00000098u); // 801C0AF4
  c->r[0]=R32(c->r[24]+0x00000050u); // 801C0AF8
  c->r[3]=c->r[3]+c->r[0]; // 801C0AFC
  cmps(c,0,(int32_t)c->r[3],127); // 801C0B00
  if (!crb(c,1)) { goto L_801C0B10; } // 801C0B04
  c->r[0]=0u+0x0000007Fu; // 801C0B08
  goto L_801C0B18; // 801C0B0C
L_801C0B10:;
  c->r[0]=sraw(c,c->r[3],31); // 801C0B10
  c->r[0]=c->r[3]&~c->r[0]; // 801C0B14
L_801C0B18:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C0B18
  if (!crb(c,0)) { goto L_801C0B28; } // 801C0B1C
  c->r[3]=0u+0x00000000u; // 801C0B20
  goto L_801C0B2C; // 801C0B24
L_801C0B28:;
  c->r[3]=0u+0x00000001u; // 801C0B28
L_801C0B2C:;
  c->r[11]=c->r[1]+0x00000040u; // 801C0B2C
  c->lr=0x801C0B34u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0B30
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C0B34
  c->lr=c->r[0]; // 801C0B38
  c->r[1]=c->r[1]+0x00000040u; // 801C0B3C
  return; // 801C0B40
}

// fn_801C0B50
void f_801C0B50(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00000008u; // 801C0B50
  c->r[0]=0u+0x00000000u; // 801C0B54
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C0B58
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C0B5C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801C0B60
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801C0B64
  return; // 801C0B68
}

// fn_801C0B70
void f_801C0B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0B70
  c->r[0]=c->lr; // 801C0B74
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C0B78
  c->r[11]=c->r[1]+0x00000050u; // 801C0B7C
  c->lr=0x801C0B84u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0B80
  cmps(c,0,(int32_t)c->r[3],0); // 801C0B84
  c->r[30]=c->r[3]|c->r[3]; // 801C0B88
  c->r[31]=c->r[4]|c->r[4]; // 801C0B8C
  if (crb(c,2)) { goto L_801C0D10; } // 801C0B90
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C0B94
  cmps(c,0,(int32_t)c->r[0],0); // 801C0B98
  if (crb(c,2)) { goto L_801C0CF0; } // 801C0B9C
  if (crb(c,2)) { goto L_801C0CF0; } // 801C0BA0
  c->r[20]=c->r[3]+0x00000008u; // 801C0BA4
  c->r[26]=0u+0x803A0000u; // 801C0BA8
  c->r[27]=0u+0x803A0000u; // 801C0BAC
  c->r[18]=0u+0x803A0000u; // 801C0BB0
  c->r[19]=0u+0x803A0000u; // 801C0BB4
  c->r[21]=0u+0x803A0000u; // 801C0BB8
  c->r[22]=0u+0x803A0000u; // 801C0BBC
  c->r[23]=0u+0x803A0000u; // 801C0BC0
  c->r[24]=0u+0x803A0000u; // 801C0BC4
  c->r[28]=0u+0x803A0000u; // 801C0BC8
  c->r[29]=0u+0x803A0000u; // 801C0BCC
  goto L_801C0CC8; // 801C0BD0
L_801C0BD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C0BD4
  if (!crb(c,2)) { goto L_801C0BF0; } // 801C0BD8
  c->r[3]=c->r[18]+0xFFFFD5ACu; // 801C0BDC
  c->r[5]=c->r[19]+0xFFFFD588u; // 801C0BE0
  c->r[4]=0u+0x000001FBu; // 801C0BE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0BE8
  c->lr=0x801C0BF0u; f_80212260(c); // 801C0BEC
L_801C0BF0:;
  c->r[17]=R32(c->r[20]+0x00000004u); // 801C0BF0
  cmps(c,0,(int32_t)c->r[17],0); // 801C0BF4
  if (!crb(c,2)) { goto L_801C0C10; } // 801C0BF8
  c->r[3]=c->r[21]+0xFFFFD54Cu; // 801C0BFC
  c->r[5]=c->r[22]+0xFFFFD528u; // 801C0C00
  c->r[4]=0u+0x0000023Du; // 801C0C04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0C08
  c->lr=0x801C0C10u; f_80212260(c); // 801C0C0C
L_801C0C10:;
  cmps(c,0,(int32_t)c->r[17],0); // 801C0C10
  if (!crb(c,2)) { goto L_801C0C2C; } // 801C0C14
  c->r[3]=c->r[23]+0xFFFFD57Cu; // 801C0C18
  c->r[5]=c->r[24]+0xFFFFD558u; // 801C0C1C
  c->r[4]=0u+0x00000193u; // 801C0C20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0C24
  c->lr=0x801C0C2Cu; f_80212260(c); // 801C0C28
L_801C0C2C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801C0C2C
  if (crb(c,2)) { goto L_801C0CA0; } // 801C0C30
  c->r[25]=c->r[17]+0x0000000Cu; // 801C0C34
  goto L_801C0C84; // 801C0C38
L_801C0C3C:;
  c->r[25]=R32(c->r[25]+0x00000004u); // 801C0C3C
  cmps(c,0,(int32_t)c->r[25],0); // 801C0C40
  if (!crb(c,2)) { goto L_801C0C5C; } // 801C0C44
  c->r[3]=c->r[26]+0xFFFFD4ECu; // 801C0C48
  c->r[5]=c->r[27]+0xFFFFD4C8u; // 801C0C4C
  c->r[4]=0u+0x0000023Du; // 801C0C50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0C54
  c->lr=0x801C0C5Cu; f_80212260(c); // 801C0C58
L_801C0C5C:;
  cmps(c,0,(int32_t)c->r[25],0); // 801C0C5C
  if (crb(c,2)) { goto L_801C0C84; } // 801C0C60
  c->r[12]=R32(c->r[25]+0x00000010u); // 801C0C64
  cmps(c,0,(int32_t)c->r[12],0); // 801C0C68
  if (crb(c,2)) { goto L_801C0C84; } // 801C0C6C
  c->r[3]=R32(c->r[25]+0x00000008u); // 801C0C70
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 801C0C74
  c->r[5]=R32(c->r[25]+0x00000014u); // 801C0C78
  c->ctr=c->r[12]; // 801C0C7C
  if (true) { c->lr=0x801C0C84u; dispatch(c,c->ctr); } // 801C0C80
L_801C0C84:;
  c->r[0]=R32(c->r[17]+0x0000000Cu); // 801C0C84
  cmpu(c,0,c->r[25],c->r[0]); // 801C0C88
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0C3C; } // 801C0C8C
  c->r[3]=addc(c,c->r[17],0x00000008u,0); cr0(c,c->r[3]); // 801C0C90
  if (crb(c,2)) { goto L_801C0CA0; } // 801C0C94
  c->r[4]=0u+0x00000000u; // 801C0C98
  c->lr=0x801C0CA0u; f_801E4130(c); // 801C0C9C
L_801C0CA0:;
  cmps(c,0,(int32_t)c->r[17],0); // 801C0CA0
  if (!crb(c,2)) { goto L_801C0CBC; } // 801C0CA4
  c->r[3]=c->r[28]+0xFFFFD51Cu; // 801C0CA8
  c->r[5]=c->r[29]+0xFFFFD4F8u; // 801C0CAC
  c->r[4]=0u+0x00000233u; // 801C0CB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0CB4
  c->lr=0x801C0CBCu; f_80212260(c); // 801C0CB8
L_801C0CBC:;
  c->r[4]=c->r[17]|c->r[17]; // 801C0CBC
  c->r[3]=c->r[30]+0x00000004u; // 801C0CC0
  c->lr=0x801C0CC8u; f_801E45B0(c); // 801C0CC4
L_801C0CC8:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801C0CC8
  cmps(c,0,(int32_t)c->r[0],0); // 801C0CCC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0BD4; } // 801C0CD0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C0CD4
  c->r[4]=0u+0x00000003u; // 801C0CD8
  c->lr=0x801C0CE0u; f_801A8AF0(c); // 801C0CDC
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C0CE0
  c->lr=0x801C0CE8u; f_801A89A0(c); // 801C0CE4
  c->r[0]=0u+0x00000000u; // 801C0CE8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C0CEC
L_801C0CF0:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 801C0CF0
  if (crb(c,2)) { goto L_801C0D00; } // 801C0CF4
  c->r[4]=0u+0x00000000u; // 801C0CF8
  c->lr=0x801C0D00u; f_801E4130(c); // 801C0CFC
L_801C0D00:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C0D00
  if (!crb(c,1)) { goto L_801C0D10; } // 801C0D04
  c->r[3]=c->r[30]|c->r[30]; // 801C0D08
  c->lr=0x801C0D10u; f_802E61AC(c); // 801C0D0C
L_801C0D10:;
  c->r[11]=c->r[1]+0x00000050u; // 801C0D10
  c->r[3]=c->r[30]|c->r[30]; // 801C0D14
  c->lr=0x801C0D1Cu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0D18
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C0D1C
  c->lr=c->r[0]; // 801C0D20
  c->r[1]=c->r[1]+0x00000050u; // 801C0D24
  return; // 801C0D28
}

// fn_801C0D30
void f_801C0D30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0D30
  c->r[0]=c->lr; // 801C0D34
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C0D38
  c->r[11]=c->r[1]+0x00000050u; // 801C0D3C
  c->lr=0x801C0D44u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0D40
  cmps(c,0,(int32_t)c->r[4],0); // 801C0D44
  c->r[29]=c->r[3]|c->r[3]; // 801C0D48
  c->r[30]=c->r[4]|c->r[4]; // 801C0D4C
  c->r[31]=c->r[5]|c->r[5]; // 801C0D50
  if (!crb(c,2)) { goto L_801C0D74; } // 801C0D54
  c->r[3]=0u+0x803A0000u; // 801C0D58
  c->r[5]=0u+0x803A0000u; // 801C0D5C
  c->r[3]=c->r[3]+0xFFFFD2F0u; // 801C0D60
  c->r[4]=0u+0x0000004Bu; // 801C0D64
  c->r[5]=c->r[5]+0xFFFFD304u; // 801C0D68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0D6C
  c->lr=0x801C0D74u; f_80212260(c); // 801C0D70
L_801C0D74:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C0D74
  cmps(c,0,(int32_t)c->r[0],0); // 801C0D78
  if (crb(c,2)) { goto L_801C0EDC; } // 801C0D7C
  if (crb(c,2)) { goto L_801C0EDC; } // 801C0D80
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0D84
  cmps(c,0,(int32_t)c->r[0],0); // 801C0D88
  if (crb(c,2)) { goto L_801C0EC0; } // 801C0D8C
  c->r[28]=c->r[29]+0x00000008u; // 801C0D90
  c->r[24]=0u+0x803A0000u; // 801C0D94
  c->r[25]=0u+0x803A0000u; // 801C0D98
  c->r[17]=0u+0x803A0000u; // 801C0D9C
  c->r[18]=0u+0x803A0000u; // 801C0DA0
  c->r[19]=0u+0x803A0000u; // 801C0DA4
  c->r[20]=0u+0x803A0000u; // 801C0DA8
  c->r[21]=0u+0x803A0000u; // 801C0DAC
  c->r[22]=0u+0x803A0000u; // 801C0DB0
  c->r[26]=0u+0x803A0000u; // 801C0DB4
  c->r[27]=0u+0x803A0000u; // 801C0DB8
  goto L_801C0EB4; // 801C0DBC
L_801C0DC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C0DC0
  if (!crb(c,2)) { goto L_801C0DDC; } // 801C0DC4
  c->r[3]=c->r[17]+0xFFFFD5ACu; // 801C0DC8
  c->r[5]=c->r[18]+0xFFFFD588u; // 801C0DCC
  c->r[4]=0u+0x000001FBu; // 801C0DD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0DD4
  c->lr=0x801C0DDCu; f_80212260(c); // 801C0DD8
L_801C0DDC:;
  c->r[16]=R32(c->r[28]+0x00000004u); // 801C0DDC
  cmps(c,0,(int32_t)c->r[16],0); // 801C0DE0
  if (!crb(c,2)) { goto L_801C0DFC; } // 801C0DE4
  c->r[3]=c->r[19]+0xFFFFD54Cu; // 801C0DE8
  c->r[5]=c->r[20]+0xFFFFD528u; // 801C0DEC
  c->r[4]=0u+0x0000023Du; // 801C0DF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0DF4
  c->lr=0x801C0DFCu; f_80212260(c); // 801C0DF8
L_801C0DFC:;
  cmps(c,0,(int32_t)c->r[16],0); // 801C0DFC
  if (!crb(c,2)) { goto L_801C0E18; } // 801C0E00
  c->r[3]=c->r[21]+0xFFFFD57Cu; // 801C0E04
  c->r[5]=c->r[22]+0xFFFFD558u; // 801C0E08
  c->r[4]=0u+0x00000193u; // 801C0E0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0E10
  c->lr=0x801C0E18u; f_80212260(c); // 801C0E14
L_801C0E18:;
  cmps(c,0,(int32_t)c->r[16],0); // 801C0E18
  if (crb(c,2)) { goto L_801C0E8C; } // 801C0E1C
  c->r[23]=c->r[16]+0x0000000Cu; // 801C0E20
  goto L_801C0E70; // 801C0E24
L_801C0E28:;
  c->r[23]=R32(c->r[23]+0x00000004u); // 801C0E28
  cmps(c,0,(int32_t)c->r[23],0); // 801C0E2C
  if (!crb(c,2)) { goto L_801C0E48; } // 801C0E30
  c->r[3]=c->r[24]+0xFFFFD4ECu; // 801C0E34
  c->r[5]=c->r[25]+0xFFFFD4C8u; // 801C0E38
  c->r[4]=0u+0x0000023Du; // 801C0E3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0E40
  c->lr=0x801C0E48u; f_80212260(c); // 801C0E44
L_801C0E48:;
  cmps(c,0,(int32_t)c->r[23],0); // 801C0E48
  if (crb(c,2)) { goto L_801C0E70; } // 801C0E4C
  c->r[12]=R32(c->r[23]+0x00000010u); // 801C0E50
  cmps(c,0,(int32_t)c->r[12],0); // 801C0E54
  if (crb(c,2)) { goto L_801C0E70; } // 801C0E58
  c->r[3]=R32(c->r[23]+0x00000008u); // 801C0E5C
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 801C0E60
  c->r[5]=R32(c->r[23]+0x00000014u); // 801C0E64
  c->ctr=c->r[12]; // 801C0E68
  if (true) { c->lr=0x801C0E70u; dispatch(c,c->ctr); } // 801C0E6C
L_801C0E70:;
  c->r[0]=R32(c->r[16]+0x0000000Cu); // 801C0E70
  cmpu(c,0,c->r[23],c->r[0]); // 801C0E74
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0E28; } // 801C0E78
  c->r[3]=addc(c,c->r[16],0x00000008u,0); cr0(c,c->r[3]); // 801C0E7C
  if (crb(c,2)) { goto L_801C0E8C; } // 801C0E80
  c->r[4]=0u+0x00000000u; // 801C0E84
  c->lr=0x801C0E8Cu; f_801E4130(c); // 801C0E88
L_801C0E8C:;
  cmps(c,0,(int32_t)c->r[16],0); // 801C0E8C
  if (!crb(c,2)) { goto L_801C0EA8; } // 801C0E90
  c->r[3]=c->r[26]+0xFFFFD51Cu; // 801C0E94
  c->r[5]=c->r[27]+0xFFFFD4F8u; // 801C0E98
  c->r[4]=0u+0x00000233u; // 801C0E9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0EA0
  c->lr=0x801C0EA8u; f_80212260(c); // 801C0EA4
L_801C0EA8:;
  c->r[4]=c->r[16]|c->r[16]; // 801C0EA8
  c->r[3]=c->r[29]+0x00000004u; // 801C0EAC
  c->lr=0x801C0EB4u; f_801E45B0(c); // 801C0EB0
L_801C0EB4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C0EB4
  cmps(c,0,(int32_t)c->r[0],0); // 801C0EB8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C0DC0; } // 801C0EBC
L_801C0EC0:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C0EC0
  c->r[4]=0u+0x00000003u; // 801C0EC4
  c->lr=0x801C0ECCu; f_801A8AF0(c); // 801C0EC8
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C0ECC
  c->lr=0x801C0ED4u; f_801A89A0(c); // 801C0ED0
  c->r[0]=0u+0x00000000u; // 801C0ED4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C0ED8
L_801C0EDC:;
  c->r[0]=c->r[30]+0x00000003u; // 801C0EDC
  c->r[4]=c->r[30]+c->r[31]; // 801C0EE0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801C0EE4
  cmpu(c,0,c->r[3],c->r[4]); // 801C0EE8
  if (!crb(c,1)) { goto L_801C0EF8; } // 801C0EEC
  c->r[3]=0u+0x00000000u; // 801C0EF0
  goto L_801C0FB4; // 801C0EF4
L_801C0EF8:;
  c->r[4]=c->r[4]-c->r[3]; // 801C0EF8
  c->r[5]=0u+0x00000000u; // 801C0EFC
  c->lr=0x801C0F04u; f_801A8910(c); // 801C0F00
  cmps(c,0,(int32_t)c->r[3],0); // 801C0F04
  W32(c->r[29]+0x00000000u,c->r[3]); // 801C0F08
  if (!crb(c,2)) { goto L_801C0F18; } // 801C0F0C
  c->r[3]=0u+0x00000000u; // 801C0F10
  goto L_801C0FB4; // 801C0F14
L_801C0F18:;
  c->r[4]=0u+0x00000014u; // 801C0F18
  c->r[5]=0u+0x00000004u; // 801C0F1C
  c->lr=0x801C0F24u; f_801A89D0(c); // 801C0F20
  cmps(c,0,(int32_t)c->r[3],0); // 801C0F24
  if (!crb(c,2)) { goto L_801C0F34; } // 801C0F28
  c->r[0]=0u+0x00000000u; // 801C0F2C
  goto L_801C0FA0; // 801C0F30
L_801C0F34:;
  c->r[17]=c->r[3]|c->r[3]; // 801C0F34
  if (crb(c,2)) { goto L_801C0F60; } // 801C0F38
  c->r[0]=0u+0x00000000u; // 801C0F3C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C0F40
  c->r[4]=c->r[3]+0x0000000Cu; // 801C0F44
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C0F48
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C0F4C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C0F50
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C0F54
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801C0F58
  W32(c->r[3]+0x00000010u,c->r[4]); // 801C0F5C
L_801C0F60:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C0F60
  c->r[28]=c->r[29]+0x00000008u; // 801C0F64
  if (!crb(c,2)) { goto L_801C0F88; } // 801C0F68
  c->r[3]=0u+0x803A0000u; // 801C0F6C
  c->r[5]=0u+0x803A0000u; // 801C0F70
  c->r[3]=c->r[3]+0xFFFFD51Cu; // 801C0F74
  c->r[4]=0u+0x00000233u; // 801C0F78
  c->r[5]=c->r[5]+0xFFFFD4F8u; // 801C0F7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C0F80
  c->lr=0x801C0F88u; f_80212260(c); // 801C0F84
L_801C0F88:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 801C0F88
  c->r[5]=c->r[17]|c->r[17]; // 801C0F8C
  c->r[3]=c->r[29]+0x00000004u; // 801C0F90
  c->r[4]=c->r[1]+0x00000008u; // 801C0F94
  c->lr=0x801C0F9Cu; f_801E44B0(c); // 801C0F98
  c->r[0]=0u+0x00000001u; // 801C0F9C
L_801C0FA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C0FA0
  if (!crb(c,2)) { goto L_801C0FB0; } // 801C0FA4
  c->r[3]=0u+0x00000000u; // 801C0FA8
  goto L_801C0FB4; // 801C0FAC
L_801C0FB0:;
  c->r[3]=0u+0x00000001u; // 801C0FB0
L_801C0FB4:;
  c->r[11]=c->r[1]+0x00000050u; // 801C0FB4
  c->lr=0x801C0FBCu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C0FB8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C0FBC
  c->lr=c->r[0]; // 801C0FC0
  c->r[1]=c->r[1]+0x00000050u; // 801C0FC4
  return; // 801C0FC8
}

// fn_801C0FD0
void f_801C0FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C0FD0
  c->r[0]=c->lr; // 801C0FD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C0FD8
  c->r[11]=c->r[1]+0x00000040u; // 801C0FDC
  c->lr=0x801C0FE4u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C0FE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C0FE4
  c->r[31]=c->r[3]|c->r[3]; // 801C0FE8
  cmps(c,0,(int32_t)c->r[0],0); // 801C0FEC
  if (crb(c,2)) { goto L_801C114C; } // 801C0FF0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C0FF4
  cmps(c,0,(int32_t)c->r[0],0); // 801C0FF8
  if (crb(c,2)) { goto L_801C1130; } // 801C0FFC
  c->r[30]=c->r[3]+0x00000008u; // 801C1000
  c->r[26]=0u+0x803A0000u; // 801C1004
  c->r[27]=0u+0x803A0000u; // 801C1008
  c->r[19]=0u+0x803A0000u; // 801C100C
  c->r[20]=0u+0x803A0000u; // 801C1010
  c->r[21]=0u+0x803A0000u; // 801C1014
  c->r[22]=0u+0x803A0000u; // 801C1018
  c->r[23]=0u+0x803A0000u; // 801C101C
  c->r[24]=0u+0x803A0000u; // 801C1020
  c->r[28]=0u+0x803A0000u; // 801C1024
  c->r[29]=0u+0x803A0000u; // 801C1028
  goto L_801C1124; // 801C102C
L_801C1030:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1030
  if (!crb(c,2)) { goto L_801C104C; } // 801C1034
  c->r[3]=c->r[19]+0xFFFFD5ACu; // 801C1038
  c->r[5]=c->r[20]+0xFFFFD588u; // 801C103C
  c->r[4]=0u+0x000001FBu; // 801C1040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1044
  c->lr=0x801C104Cu; f_80212260(c); // 801C1048
L_801C104C:;
  c->r[18]=R32(c->r[30]+0x00000004u); // 801C104C
  cmps(c,0,(int32_t)c->r[18],0); // 801C1050
  if (!crb(c,2)) { goto L_801C106C; } // 801C1054
  c->r[3]=c->r[21]+0xFFFFD54Cu; // 801C1058
  c->r[5]=c->r[22]+0xFFFFD528u; // 801C105C
  c->r[4]=0u+0x0000023Du; // 801C1060
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1064
  c->lr=0x801C106Cu; f_80212260(c); // 801C1068
L_801C106C:;
  cmps(c,0,(int32_t)c->r[18],0); // 801C106C
  if (!crb(c,2)) { goto L_801C1088; } // 801C1070
  c->r[3]=c->r[23]+0xFFFFD57Cu; // 801C1074
  c->r[5]=c->r[24]+0xFFFFD558u; // 801C1078
  c->r[4]=0u+0x00000193u; // 801C107C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1080
  c->lr=0x801C1088u; f_80212260(c); // 801C1084
L_801C1088:;
  cmps(c,0,(int32_t)c->r[18],0); // 801C1088
  if (crb(c,2)) { goto L_801C10FC; } // 801C108C
  c->r[25]=c->r[18]+0x0000000Cu; // 801C1090
  goto L_801C10E0; // 801C1094
L_801C1098:;
  c->r[25]=R32(c->r[25]+0x00000004u); // 801C1098
  cmps(c,0,(int32_t)c->r[25],0); // 801C109C
  if (!crb(c,2)) { goto L_801C10B8; } // 801C10A0
  c->r[3]=c->r[26]+0xFFFFD4ECu; // 801C10A4
  c->r[5]=c->r[27]+0xFFFFD4C8u; // 801C10A8
  c->r[4]=0u+0x0000023Du; // 801C10AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C10B0
  c->lr=0x801C10B8u; f_80212260(c); // 801C10B4
L_801C10B8:;
  cmps(c,0,(int32_t)c->r[25],0); // 801C10B8
  if (crb(c,2)) { goto L_801C10E0; } // 801C10BC
  c->r[12]=R32(c->r[25]+0x00000010u); // 801C10C0
  cmps(c,0,(int32_t)c->r[12],0); // 801C10C4
  if (crb(c,2)) { goto L_801C10E0; } // 801C10C8
  c->r[3]=R32(c->r[25]+0x00000008u); // 801C10CC
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 801C10D0
  c->r[5]=R32(c->r[25]+0x00000014u); // 801C10D4
  c->ctr=c->r[12]; // 801C10D8
  if (true) { c->lr=0x801C10E0u; dispatch(c,c->ctr); } // 801C10DC
L_801C10E0:;
  c->r[0]=R32(c->r[18]+0x0000000Cu); // 801C10E0
  cmpu(c,0,c->r[25],c->r[0]); // 801C10E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1098; } // 801C10E8
  c->r[3]=addc(c,c->r[18],0x00000008u,0); cr0(c,c->r[3]); // 801C10EC
  if (crb(c,2)) { goto L_801C10FC; } // 801C10F0
  c->r[4]=0u+0x00000000u; // 801C10F4
  c->lr=0x801C10FCu; f_801E4130(c); // 801C10F8
L_801C10FC:;
  cmps(c,0,(int32_t)c->r[18],0); // 801C10FC
  if (!crb(c,2)) { goto L_801C1118; } // 801C1100
  c->r[3]=c->r[28]+0xFFFFD51Cu; // 801C1104
  c->r[5]=c->r[29]+0xFFFFD4F8u; // 801C1108
  c->r[4]=0u+0x00000233u; // 801C110C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1110
  c->lr=0x801C1118u; f_80212260(c); // 801C1114
L_801C1118:;
  c->r[4]=c->r[18]|c->r[18]; // 801C1118
  c->r[3]=c->r[31]+0x00000004u; // 801C111C
  c->lr=0x801C1124u; f_801E45B0(c); // 801C1120
L_801C1124:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801C1124
  cmps(c,0,(int32_t)c->r[0],0); // 801C1128
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1030; } // 801C112C
L_801C1130:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C1130
  c->r[4]=0u+0x00000003u; // 801C1134
  c->lr=0x801C113Cu; f_801A8AF0(c); // 801C1138
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C113C
  c->lr=0x801C1144u; f_801A89A0(c); // 801C1140
  c->r[0]=0u+0x00000000u; // 801C1144
  W32(c->r[31]+0x00000000u,c->r[0]); // 801C1148
L_801C114C:;
  c->r[11]=c->r[1]+0x00000040u; // 801C114C
  c->lr=0x801C1154u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C1150
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C1154
  c->lr=c->r[0]; // 801C1158
  c->r[1]=c->r[1]+0x00000040u; // 801C115C
  return; // 801C1160
}

// fn_801C1170
void f_801C1170(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1170
  c->r[0]=c->lr; // 801C1174
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C1178
  c->r[11]=c->r[1]+0x00000030u; // 801C117C
  c->lr=0x801C1184u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C1180
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C1184
  c->r[30]=0u+0x803A0000u; // 801C1188
  c->r[25]=c->r[3]|c->r[3]; // 801C118C
  c->r[26]=c->r[4]|c->r[4]; // 801C1190
  cmps(c,0,(int32_t)c->r[0],0); // 801C1194
  c->r[27]=c->r[5]|c->r[5]; // 801C1198
  c->r[31]=c->r[6]|c->r[6]; // 801C119C
  c->r[30]=c->r[30]+0xFFFFD2F0u; // 801C11A0
  if (!crb(c,2)) { goto L_801C11BC; } // 801C11A4
  c->r[3]=c->r[30]+0x00000000u; // 801C11A8
  c->r[5]=c->r[30]+0x00000048u; // 801C11AC
  c->r[4]=0u+0x000000A1u; // 801C11B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C11B4
  c->lr=0x801C11BCu; f_80212260(c); // 801C11B8
L_801C11BC:;
  c->r[0]=c->r[26]+0x0000001Fu; // 801C11BC
  c->r[3]=R32(c->r[25]+0x00000000u); // 801C11C0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C11C4
  c->r[5]=0u+0x00000020u; // 801C11C8
  c->r[4]=c->r[4]+0x00000020u; // 801C11CC
  c->lr=0x801C11D4u; f_801A89D0(c); // 801C11D0
  cmps(c,0,(int32_t)c->r[3],0); // 801C11D4
  c->r[28]=c->r[3]|c->r[3]; // 801C11D8
  if (!crb(c,2)) { goto L_801C11E8; } // 801C11DC
  c->r[3]=0u+0x00000000u; // 801C11E0
  goto L_801C12E0; // 801C11E4
L_801C11E8:;
  c->r[29]=c->r[3]+0x00000020u; // 801C11E8
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 801C11EC
  if (crb(c,2)) { goto L_801C1208; } // 801C11F0
  c->r[3]=c->r[30]+0x00000000u; // 801C11F4
  c->r[5]=c->r[30]+0x00000094u; // 801C11F8
  c->r[4]=0u+0x000000ABu; // 801C11FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1200
  c->lr=0x801C1208u; f_80212260(c); // 801C1204
L_801C1208:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C1208
  if (crb(c,2)) { goto L_801C122C; } // 801C120C
  c->r[0]=0u+0x00000000u; // 801C1210
  W32(c->r[28]+0x00000000u,c->r[0]); // 801C1214
  W32(c->r[28]+0x00000004u,c->r[0]); // 801C1218
  W32(c->r[28]+0x00000008u,c->r[29]); // 801C121C
  W32(c->r[28]+0x0000000Cu,c->r[26]); // 801C1220
  W32(c->r[28]+0x00000010u,c->r[27]); // 801C1224
  W32(c->r[28]+0x00000014u,c->r[31]); // 801C1228
L_801C122C:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 801C122C
  cmps(c,0,(int32_t)c->r[0],0); // 801C1230
  if (!crb(c,2)) { goto L_801C1254; } // 801C1234
  c->r[3]=0u+0x803A0000u; // 801C1238
  c->r[5]=0u+0x803A0000u; // 801C123C
  c->r[3]=c->r[3]+0xFFFFD5ACu; // 801C1240
  c->r[4]=0u+0x000001FBu; // 801C1244
  c->r[5]=c->r[5]+0xFFFFD588u; // 801C1248
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C124C
  c->lr=0x801C1254u; f_80212260(c); // 801C1250
L_801C1254:;
  c->r[30]=R32(c->r[25]+0x0000000Cu); // 801C1254
  cmps(c,0,(int32_t)c->r[30],0); // 801C1258
  if (!crb(c,2)) { goto L_801C127C; } // 801C125C
  c->r[3]=0u+0x803A0000u; // 801C1260
  c->r[5]=0u+0x803A0000u; // 801C1264
  c->r[3]=c->r[3]+0xFFFFD54Cu; // 801C1268
  c->r[4]=0u+0x0000023Du; // 801C126C
  c->r[5]=c->r[5]+0xFFFFD528u; // 801C1270
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1274
  c->lr=0x801C127Cu; f_80212260(c); // 801C1278
L_801C127C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C127C
  if (!crb(c,2)) { goto L_801C12A0; } // 801C1280
  c->r[3]=0u+0x803A0000u; // 801C1284
  c->r[5]=0u+0x803A0000u; // 801C1288
  c->r[3]=c->r[3]+0xFFFFD57Cu; // 801C128C
  c->r[4]=0u+0x00000193u; // 801C1290
  c->r[5]=c->r[5]+0xFFFFD558u; // 801C1294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1298
  c->lr=0x801C12A0u; f_80212260(c); // 801C129C
L_801C12A0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C12A0
  c->r[31]=c->r[30]+0x0000000Cu; // 801C12A4
  if (!crb(c,2)) { goto L_801C12C8; } // 801C12A8
  c->r[3]=0u+0x803A0000u; // 801C12AC
  c->r[5]=0u+0x803A0000u; // 801C12B0
  c->r[3]=c->r[3]+0xFFFFD5DCu; // 801C12B4
  c->r[4]=0u+0x00000233u; // 801C12B8
  c->r[5]=c->r[5]+0xFFFFD5B8u; // 801C12BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C12C0
  c->lr=0x801C12C8u; f_80212260(c); // 801C12C4
L_801C12C8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801C12C8
  c->r[5]=c->r[28]|c->r[28]; // 801C12CC
  c->r[3]=c->r[30]+0x00000008u; // 801C12D0
  c->r[4]=c->r[1]+0x00000008u; // 801C12D4
  c->lr=0x801C12DCu; f_801E44B0(c); // 801C12D8
  c->r[3]=c->r[29]|c->r[29]; // 801C12DC
L_801C12E0:;
  c->r[11]=c->r[1]+0x00000030u; // 801C12E0
  c->lr=0x801C12E8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C12E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C12E8
  c->lr=c->r[0]; // 801C12EC
  c->r[1]=c->r[1]+0x00000030u; // 801C12F0
  return; // 801C12F4
}

// fn_801C1300
void f_801C1300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1300
  c->r[0]=c->lr; // 801C1304
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C130C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C1310
  c->r[30]=0u+0x803A0000u; // 801C1314
  c->r[30]=c->r[30]+0xFFFFD2F0u; // 801C1318
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C131C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C1320
  c->r[28]=c->r[3]|c->r[3]; // 801C1324
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C1328
  cmps(c,0,(int32_t)c->r[0],0); // 801C132C
  if (!crb(c,2)) { goto L_801C1348; } // 801C1330
  c->r[3]=c->r[30]+0x00000000u; // 801C1334
  c->r[5]=c->r[30]+0x00000048u; // 801C1338
  c->r[4]=0u+0x000000C0u; // 801C133C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1340
  c->lr=0x801C1348u; f_80212260(c); // 801C1344
L_801C1348:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C1348
  c->r[4]=R32(c->r[28]+0x00000004u); // 801C134C
  c->lr=0x801C1354u; f_801A8B90(c); // 801C1350
  cmps(c,0,(int32_t)c->r[3],0); // 801C1354
  if (!crb(c,2)) { goto L_801C1364; } // 801C1358
  c->r[3]=0u+0xFFFFFFFFu; // 801C135C
  goto L_801C1430; // 801C1360
L_801C1364:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C1364
  c->r[4]=0u+0x00000014u; // 801C1368
  c->r[5]=0u+0x00000004u; // 801C136C
  c->lr=0x801C1374u; f_801A89D0(c); // 801C1370
  cmps(c,0,(int32_t)c->r[3],0); // 801C1374
  if (!crb(c,2)) { goto L_801C1384; } // 801C1378
  c->r[0]=0u+0x00000000u; // 801C137C
  goto L_801C13F0; // 801C1380
L_801C1384:;
  c->r[29]=c->r[3]|c->r[3]; // 801C1384
  if (crb(c,2)) { goto L_801C13B0; } // 801C1388
  c->r[0]=0u+0x00000000u; // 801C138C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C1390
  c->r[4]=c->r[3]+0x0000000Cu; // 801C1394
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C1398
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C139C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C13A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C13A4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801C13A8
  W32(c->r[3]+0x00000010u,c->r[4]); // 801C13AC
L_801C13B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C13B0
  c->r[31]=c->r[28]+0x00000008u; // 801C13B4
  if (!crb(c,2)) { goto L_801C13D8; } // 801C13B8
  c->r[3]=0u+0x803A0000u; // 801C13BC
  c->r[5]=0u+0x803A0000u; // 801C13C0
  c->r[3]=c->r[3]+0xFFFFD51Cu; // 801C13C4
  c->r[4]=0u+0x00000233u; // 801C13C8
  c->r[5]=c->r[5]+0xFFFFD4F8u; // 801C13CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C13D0
  c->lr=0x801C13D8u; f_80212260(c); // 801C13D4
L_801C13D8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801C13D8
  c->r[5]=c->r[29]|c->r[29]; // 801C13DC
  c->r[3]=c->r[28]+0x00000004u; // 801C13E0
  c->r[4]=c->r[1]+0x00000008u; // 801C13E4
  c->lr=0x801C13ECu; f_801E44B0(c); // 801C13E8
  c->r[0]=0u+0x00000001u; // 801C13EC
L_801C13F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C13F0
  if (!crb(c,2)) { goto L_801C1428; } // 801C13F4
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C13F8
  c->r[4]=0u+0x00000000u; // 801C13FC
  c->lr=0x801C1404u; f_801A8C70(c); // 801C1400
  cmps(c,0,(int32_t)c->r[3],0); // 801C1404
  if (!crb(c,2)) { goto L_801C1420; } // 801C1408
  c->r[3]=c->r[30]+0x00000000u; // 801C140C
  c->r[5]=c->r[30]+0x000000B8u; // 801C1410
  c->r[4]=0u+0x000000C8u; // 801C1414
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1418
  c->lr=0x801C1420u; f_80212260(c); // 801C141C
L_801C1420:;
  c->r[3]=0u+0xFFFFFFFFu; // 801C1420
  goto L_801C1430; // 801C1424
L_801C1428:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801C1428
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801C142C
L_801C1430:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1430
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C1434
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C1438
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C143C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C1440
  c->lr=c->r[0]; // 801C1444
  c->r[1]=c->r[1]+0x00000020u; // 801C1448
  return; // 801C144C
}

// fn_801C1450
void f_801C1450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1450
  c->r[0]=c->lr; // 801C1454
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C1458
  c->r[11]=c->r[1]+0x00000050u; // 801C145C
  c->lr=0x801C1464u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C1460
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C1464
  c->r[31]=0u+0x803A0000u; // 801C1468
  c->r[29]=c->r[3]|c->r[3]; // 801C146C
  c->r[30]=c->r[4]|c->r[4]; // 801C1470
  cmps(c,0,(int32_t)c->r[0],0); // 801C1474
  c->r[31]=c->r[31]+0xFFFFD2F0u; // 801C1478
  if (!crb(c,2)) { goto L_801C1494; } // 801C147C
  c->r[3]=c->r[31]+0x00000000u; // 801C1480
  c->r[5]=c->r[31]+0x00000048u; // 801C1484
  c->r[4]=0u+0x000000DAu; // 801C1488
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C148C
  c->lr=0x801C1494u; f_80212260(c); // 801C1490
L_801C1494:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C1494
  c->r[3]=0u+0x00000000u; // 801C1498
  if (crb(c,0)) { goto L_801C14B0; } // 801C149C
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C14A0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C14A4
  if (!crb(c,0)) { goto L_801C14B0; } // 801C14A8
  c->r[3]=0u+0x00000001u; // 801C14AC
L_801C14B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C14B0
  if (!crb(c,2)) { goto L_801C14D8; } // 801C14B4
  c->r[8]=R32(c->r[29]+0x00000004u); // 801C14B8
  c->r[6]=c->r[30]|c->r[30]; // 801C14BC
  c->r[3]=c->r[31]+0x00000000u; // 801C14C0
  c->r[5]=c->r[31]+0x000000F4u; // 801C14C4
  c->r[4]=0u+0x000000DBu; // 801C14C8
  c->r[7]=0u+0x00000000u; // 801C14CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C14D0
  c->lr=0x801C14D8u; f_80212260(c); // 801C14D4
L_801C14D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C14D8
  if (!crb(c,2)) { goto L_801C16F4; } // 801C14DC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C14E0
  cmps(c,0,(int32_t)c->r[0],0); // 801C14E4
  if (!crb(c,2)) { goto L_801C1500; } // 801C14E8
  c->r[3]=c->r[31]+0x00000000u; // 801C14EC
  c->r[5]=c->r[31]+0x00000048u; // 801C14F0
  c->r[4]=0u+0x00000087u; // 801C14F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C14F8
  c->lr=0x801C1500u; f_80212260(c); // 801C14FC
L_801C1500:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C1500
  cmps(c,0,(int32_t)c->r[0],0); // 801C1504
  if (crb(c,2)) { goto L_801C163C; } // 801C1508
  c->r[30]=c->r[29]+0x00000008u; // 801C150C
  c->r[20]=0u+0x803A0000u; // 801C1510
  c->r[19]=0u+0x803A0000u; // 801C1514
  c->r[27]=0u+0x803A0000u; // 801C1518
  c->r[26]=0u+0x803A0000u; // 801C151C
  c->r[25]=0u+0x803A0000u; // 801C1520
  c->r[24]=0u+0x803A0000u; // 801C1524
  c->r[23]=0u+0x803A0000u; // 801C1528
  c->r[22]=0u+0x803A0000u; // 801C152C
  c->r[18]=0u+0x803A0000u; // 801C1530
  c->r[17]=0u+0x803A0000u; // 801C1534
  goto L_801C1630; // 801C1538
L_801C153C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C153C
  if (!crb(c,2)) { goto L_801C1558; } // 801C1540
  c->r[3]=c->r[27]+0xFFFFD5ACu; // 801C1544
  c->r[5]=c->r[26]+0xFFFFD588u; // 801C1548
  c->r[4]=0u+0x000001FBu; // 801C154C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1550
  c->lr=0x801C1558u; f_80212260(c); // 801C1554
L_801C1558:;
  c->r[28]=R32(c->r[30]+0x00000004u); // 801C1558
  cmps(c,0,(int32_t)c->r[28],0); // 801C155C
  if (!crb(c,2)) { goto L_801C1578; } // 801C1560
  c->r[3]=c->r[25]+0xFFFFD54Cu; // 801C1564
  c->r[5]=c->r[24]+0xFFFFD528u; // 801C1568
  c->r[4]=0u+0x0000023Du; // 801C156C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1570
  c->lr=0x801C1578u; f_80212260(c); // 801C1574
L_801C1578:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C1578
  if (!crb(c,2)) { goto L_801C1594; } // 801C157C
  c->r[3]=c->r[23]+0xFFFFD57Cu; // 801C1580
  c->r[5]=c->r[22]+0xFFFFD558u; // 801C1584
  c->r[4]=0u+0x00000193u; // 801C1588
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C158C
  c->lr=0x801C1594u; f_80212260(c); // 801C1590
L_801C1594:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C1594
  if (crb(c,2)) { goto L_801C1608; } // 801C1598
  c->r[21]=c->r[28]+0x0000000Cu; // 801C159C
  goto L_801C15EC; // 801C15A0
L_801C15A4:;
  c->r[21]=R32(c->r[21]+0x00000004u); // 801C15A4
  cmps(c,0,(int32_t)c->r[21],0); // 801C15A8
  if (!crb(c,2)) { goto L_801C15C4; } // 801C15AC
  c->r[3]=c->r[20]+0xFFFFD4ECu; // 801C15B0
  c->r[5]=c->r[19]+0xFFFFD4C8u; // 801C15B4
  c->r[4]=0u+0x0000023Du; // 801C15B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C15BC
  c->lr=0x801C15C4u; f_80212260(c); // 801C15C0
L_801C15C4:;
  cmps(c,0,(int32_t)c->r[21],0); // 801C15C4
  if (crb(c,2)) { goto L_801C15EC; } // 801C15C8
  c->r[12]=R32(c->r[21]+0x00000010u); // 801C15CC
  cmps(c,0,(int32_t)c->r[12],0); // 801C15D0
  if (crb(c,2)) { goto L_801C15EC; } // 801C15D4
  c->r[3]=R32(c->r[21]+0x00000008u); // 801C15D8
  c->r[4]=R32(c->r[21]+0x0000000Cu); // 801C15DC
  c->r[5]=R32(c->r[21]+0x00000014u); // 801C15E0
  c->ctr=c->r[12]; // 801C15E4
  if (true) { c->lr=0x801C15ECu; dispatch(c,c->ctr); } // 801C15E8
L_801C15EC:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801C15EC
  cmpu(c,0,c->r[21],c->r[0]); // 801C15F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C15A4; } // 801C15F4
  c->r[3]=addc(c,c->r[28],0x00000008u,0); cr0(c,c->r[3]); // 801C15F8
  if (crb(c,2)) { goto L_801C1608; } // 801C15FC
  c->r[4]=0u+0x00000000u; // 801C1600
  c->lr=0x801C1608u; f_801E4130(c); // 801C1604
L_801C1608:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C1608
  if (!crb(c,2)) { goto L_801C1624; } // 801C160C
  c->r[3]=c->r[18]+0xFFFFD51Cu; // 801C1610
  c->r[5]=c->r[17]+0xFFFFD4F8u; // 801C1614
  c->r[4]=0u+0x00000233u; // 801C1618
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C161C
  c->lr=0x801C1624u; f_80212260(c); // 801C1620
L_801C1624:;
  c->r[4]=c->r[28]|c->r[28]; // 801C1624
  c->r[3]=c->r[29]+0x00000004u; // 801C1628
  c->lr=0x801C1630u; f_801E45B0(c); // 801C162C
L_801C1630:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C1630
  cmps(c,0,(int32_t)c->r[0],0); // 801C1634
  if (!crb(c,2)) { IRQCHK(c); goto L_801C153C; } // 801C1638
L_801C163C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C163C
  c->r[4]=0u+0x00000003u; // 801C1640
  c->lr=0x801C1648u; f_801A8AF0(c); // 801C1644
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C1648
  c->r[4]=0u+0x00000014u; // 801C164C
  c->r[5]=0u+0x00000004u; // 801C1650
  c->lr=0x801C1658u; f_801A89D0(c); // 801C1654
  cmps(c,0,(int32_t)c->r[3],0); // 801C1658
  if (!crb(c,2)) { goto L_801C1668; } // 801C165C
  c->r[0]=0u+0x00000000u; // 801C1660
  goto L_801C16D4; // 801C1664
L_801C1668:;
  c->r[18]=c->r[3]|c->r[3]; // 801C1668
  if (crb(c,2)) { goto L_801C1694; } // 801C166C
  c->r[0]=0u+0x00000000u; // 801C1670
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C1674
  c->r[4]=c->r[3]+0x0000000Cu; // 801C1678
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C167C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C1680
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C1684
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C1688
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801C168C
  W32(c->r[3]+0x00000010u,c->r[4]); // 801C1690
L_801C1694:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C1694
  c->r[17]=c->r[29]+0x00000008u; // 801C1698
  if (!crb(c,2)) { goto L_801C16BC; } // 801C169C
  c->r[3]=0u+0x803A0000u; // 801C16A0
  c->r[5]=0u+0x803A0000u; // 801C16A4
  c->r[3]=c->r[3]+0xFFFFD51Cu; // 801C16A8
  c->r[4]=0u+0x00000233u; // 801C16AC
  c->r[5]=c->r[5]+0xFFFFD4F8u; // 801C16B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C16B4
  c->lr=0x801C16BCu; f_80212260(c); // 801C16B8
L_801C16BC:;
  W32(c->r[1]+0x0000000Cu,c->r[17]); // 801C16BC
  c->r[5]=c->r[18]|c->r[18]; // 801C16C0
  c->r[3]=c->r[29]+0x00000004u; // 801C16C4
  c->r[4]=c->r[1]+0x0000000Cu; // 801C16C8
  c->lr=0x801C16D0u; f_801E44B0(c); // 801C16CC
  c->r[0]=0u+0x00000001u; // 801C16D0
L_801C16D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C16D4
  if (!crb(c,2)) { goto L_801C1928; } // 801C16D8
  c->r[3]=c->r[31]+0x00000000u; // 801C16DC
  c->r[5]=c->r[31]+0x00000068u; // 801C16E0
  c->r[4]=0u+0x00000091u; // 801C16E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C16E8
  c->lr=0x801C16F0u; f_80212260(c); // 801C16EC
  goto L_801C1928; // 801C16F0
L_801C16F4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C16F4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C16F8
  if (!crb(c,0)) { goto L_801C1830; } // 801C16FC
  c->r[28]=c->r[29]+0x00000008u; // 801C1700
  c->r[24]=0u+0x803A0000u; // 801C1704
  c->r[25]=0u+0x803A0000u; // 801C1708
  c->r[17]=0u+0x803A0000u; // 801C170C
  c->r[18]=0u+0x803A0000u; // 801C1710
  c->r[19]=0u+0x803A0000u; // 801C1714
  c->r[20]=0u+0x803A0000u; // 801C1718
  c->r[21]=0u+0x803A0000u; // 801C171C
  c->r[22]=0u+0x803A0000u; // 801C1720
  c->r[26]=0u+0x803A0000u; // 801C1724
  c->r[27]=0u+0x803A0000u; // 801C1728
  goto L_801C1824; // 801C172C
L_801C1730:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1730
  if (!crb(c,2)) { goto L_801C174C; } // 801C1734
  c->r[3]=c->r[17]+0xFFFFD5ACu; // 801C1738
  c->r[5]=c->r[18]+0xFFFFD588u; // 801C173C
  c->r[4]=0u+0x000001FBu; // 801C1740
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1744
  c->lr=0x801C174Cu; f_80212260(c); // 801C1748
L_801C174C:;
  c->r[16]=R32(c->r[28]+0x00000004u); // 801C174C
  cmps(c,0,(int32_t)c->r[16],0); // 801C1750
  if (!crb(c,2)) { goto L_801C176C; } // 801C1754
  c->r[3]=c->r[19]+0xFFFFD54Cu; // 801C1758
  c->r[5]=c->r[20]+0xFFFFD528u; // 801C175C
  c->r[4]=0u+0x0000023Du; // 801C1760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1764
  c->lr=0x801C176Cu; f_80212260(c); // 801C1768
L_801C176C:;
  cmps(c,0,(int32_t)c->r[16],0); // 801C176C
  if (!crb(c,2)) { goto L_801C1788; } // 801C1770
  c->r[3]=c->r[21]+0xFFFFD57Cu; // 801C1774
  c->r[5]=c->r[22]+0xFFFFD558u; // 801C1778
  c->r[4]=0u+0x00000193u; // 801C177C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1780
  c->lr=0x801C1788u; f_80212260(c); // 801C1784
L_801C1788:;
  cmps(c,0,(int32_t)c->r[16],0); // 801C1788
  if (crb(c,2)) { goto L_801C17FC; } // 801C178C
  c->r[23]=c->r[16]+0x0000000Cu; // 801C1790
  goto L_801C17E0; // 801C1794
L_801C1798:;
  c->r[23]=R32(c->r[23]+0x00000004u); // 801C1798
  cmps(c,0,(int32_t)c->r[23],0); // 801C179C
  if (!crb(c,2)) { goto L_801C17B8; } // 801C17A0
  c->r[3]=c->r[24]+0xFFFFD4ECu; // 801C17A4
  c->r[5]=c->r[25]+0xFFFFD4C8u; // 801C17A8
  c->r[4]=0u+0x0000023Du; // 801C17AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C17B0
  c->lr=0x801C17B8u; f_80212260(c); // 801C17B4
L_801C17B8:;
  cmps(c,0,(int32_t)c->r[23],0); // 801C17B8
  if (crb(c,2)) { goto L_801C17E0; } // 801C17BC
  c->r[12]=R32(c->r[23]+0x00000010u); // 801C17C0
  cmps(c,0,(int32_t)c->r[12],0); // 801C17C4
  if (crb(c,2)) { goto L_801C17E0; } // 801C17C8
  c->r[3]=R32(c->r[23]+0x00000008u); // 801C17CC
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 801C17D0
  c->r[5]=R32(c->r[23]+0x00000014u); // 801C17D4
  c->ctr=c->r[12]; // 801C17D8
  if (true) { c->lr=0x801C17E0u; dispatch(c,c->ctr); } // 801C17DC
L_801C17E0:;
  c->r[0]=R32(c->r[16]+0x0000000Cu); // 801C17E0
  cmpu(c,0,c->r[23],c->r[0]); // 801C17E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801C1798; } // 801C17E8
  c->r[3]=addc(c,c->r[16],0x00000008u,0); cr0(c,c->r[3]); // 801C17EC
  if (crb(c,2)) { goto L_801C17FC; } // 801C17F0
  c->r[4]=0u+0x00000000u; // 801C17F4
  c->lr=0x801C17FCu; f_801E4130(c); // 801C17F8
L_801C17FC:;
  cmps(c,0,(int32_t)c->r[16],0); // 801C17FC
  if (!crb(c,2)) { goto L_801C1818; } // 801C1800
  c->r[3]=c->r[26]+0xFFFFD51Cu; // 801C1804
  c->r[5]=c->r[27]+0xFFFFD4F8u; // 801C1808
  c->r[4]=0u+0x00000233u; // 801C180C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1810
  c->lr=0x801C1818u; f_80212260(c); // 801C1814
L_801C1818:;
  c->r[4]=c->r[16]|c->r[16]; // 801C1818
  c->r[3]=c->r[29]+0x00000004u; // 801C181C
  c->lr=0x801C1824u; f_801E45B0(c); // 801C1820
L_801C1824:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C1824
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C1828
  if (crb(c,0)) { IRQCHK(c); goto L_801C1730; } // 801C182C
L_801C1830:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C1830
  c->r[4]=c->r[30]|c->r[30]; // 801C1834
  c->lr=0x801C183Cu; f_801A8C70(c); // 801C1838
  cmps(c,0,(int32_t)c->r[3],0); // 801C183C
  if (!crb(c,2)) { goto L_801C1858; } // 801C1840
  c->r[3]=c->r[31]+0x00000000u; // 801C1844
  c->r[5]=c->r[31]+0x00000130u; // 801C1848
  c->r[4]=0u+0x000000EFu; // 801C184C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1850
  c->lr=0x801C1858u; f_80212260(c); // 801C1854
L_801C1858:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C1858
  c->r[4]=R32(c->r[29]+0x00000004u); // 801C185C
  c->lr=0x801C1864u; f_801A8B90(c); // 801C1860
  cmps(c,0,(int32_t)c->r[3],0); // 801C1864
  if (!crb(c,2)) { goto L_801C1880; } // 801C1868
  c->r[3]=c->r[31]+0x00000000u; // 801C186C
  c->r[5]=c->r[31]+0x0000016Cu; // 801C1870
  c->r[4]=0u+0x000000F3u; // 801C1874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1878
  c->lr=0x801C1880u; f_80212260(c); // 801C187C
L_801C1880:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801C1880
  c->r[4]=0u+0x00000014u; // 801C1884
  c->r[5]=0u+0x00000004u; // 801C1888
  c->lr=0x801C1890u; f_801A89D0(c); // 801C188C
  cmps(c,0,(int32_t)c->r[3],0); // 801C1890
  if (!crb(c,2)) { goto L_801C18A0; } // 801C1894
  c->r[0]=0u+0x00000000u; // 801C1898
  goto L_801C190C; // 801C189C
L_801C18A0:;
  c->r[17]=c->r[3]|c->r[3]; // 801C18A0
  if (crb(c,2)) { goto L_801C18CC; } // 801C18A4
  c->r[0]=0u+0x00000000u; // 801C18A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C18AC
  c->r[4]=c->r[3]+0x0000000Cu; // 801C18B0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C18B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C18B8
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C18BC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C18C0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801C18C4
  W32(c->r[3]+0x00000010u,c->r[4]); // 801C18C8
L_801C18CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C18CC
  c->r[28]=c->r[29]+0x00000008u; // 801C18D0
  if (!crb(c,2)) { goto L_801C18F4; } // 801C18D4
  c->r[3]=0u+0x803A0000u; // 801C18D8
  c->r[5]=0u+0x803A0000u; // 801C18DC
  c->r[3]=c->r[3]+0xFFFFD51Cu; // 801C18E0
  c->r[4]=0u+0x00000233u; // 801C18E4
  c->r[5]=c->r[5]+0xFFFFD4F8u; // 801C18E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C18EC
  c->lr=0x801C18F4u; f_80212260(c); // 801C18F0
L_801C18F4:;
  W32(c->r[1]+0x00000008u,c->r[28]); // 801C18F4
  c->r[5]=c->r[17]|c->r[17]; // 801C18F8
  c->r[3]=c->r[29]+0x00000004u; // 801C18FC
  c->r[4]=c->r[1]+0x00000008u; // 801C1900
  c->lr=0x801C1908u; f_801E44B0(c); // 801C1904
  c->r[0]=0u+0x00000001u; // 801C1908
L_801C190C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C190C
  if (!crb(c,2)) { goto L_801C1928; } // 801C1910
  c->r[3]=c->r[31]+0x00000000u; // 801C1914
  c->r[5]=c->r[31]+0x000001A8u; // 801C1918
  c->r[4]=0u+0x000000F7u; // 801C191C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1920
  c->lr=0x801C1928u; f_80212260(c); // 801C1924
L_801C1928:;
  c->r[11]=c->r[1]+0x00000050u; // 801C1928
  c->lr=0x801C1930u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C192C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C1930
  c->lr=c->r[0]; // 801C1934
  c->r[1]=c->r[1]+0x00000050u; // 801C1938
  return; // 801C193C
}

// fn_801C1940
void f_801C1940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1940
  c->r[0]=c->lr; // 801C1944
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1948
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C194C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C1950
  c->r[31]=c->r[3]|c->r[3]; // 801C1954
  cmps(c,0,(int32_t)c->r[0],0); // 801C1958
  if (!crb(c,2)) { goto L_801C197C; } // 801C195C
  c->r[3]=0u+0x803A0000u; // 801C1960
  c->r[5]=0u+0x803A0000u; // 801C1964
  c->r[3]=c->r[3]+0xFFFFD2F0u; // 801C1968
  c->r[4]=0u+0x00000105u; // 801C196C
  c->r[5]=c->r[5]+0xFFFFD338u; // 801C1970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1974
  c->lr=0x801C197Cu; f_80212260(c); // 801C1978
L_801C197C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C197C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C1980
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1984
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801C1988
  c->lr=c->r[0]; // 801C198C
  c->r[1]=c->r[1]+0x00000010u; // 801C1990
  return; // 801C1994
}

// fn_801C19A0
void f_801C19A0(Ctx* __restrict c) {
  return; // 801C19A0
}

// fn_801C19B0
void f_801C19B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C19B0
  c->r[0]=c->lr; // 801C19B4
  c->r[5]=0u+0x803A0000u; // 801C19B8
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C19BC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C19C0
  c->r[0]=0u+0x00000000u; // 801C19C4
  {uint32_t ea=c->r[2]+0xFFFFA658u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C19C8
  c->r[5]=c->r[5]+0xFFFFD850u; // 801C19CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C19D0
  c->r[31]=c->r[3]|c->r[3]; // 801C19D4
  {uint32_t ea=c->r[2]+0xFFFFA65Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C19D8
  c->r[4]=c->r[1]+0x00000008u; // 801C19DC
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C19E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C19E4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C19E8
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C19EC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C19F0
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C19F4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C19F8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 801C19FC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C1A00
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801C1A04
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801C1A08
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801C1A0C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801C1A10
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C1A14
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801C1A18
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801C1A1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801C1A20
  c->lr=0x801C1A28u; f_801C1C00(c); // 801C1A24
  c->r[3]=c->r[31]|c->r[31]; // 801C1A28
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C1A2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C1A30
  c->lr=c->r[0]; // 801C1A34
  c->r[1]=c->r[1]+0x00000030u; // 801C1A38
  return; // 801C1A3C
}

// fn_801C1A40
void f_801C1A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A40
  c->r[0]=c->lr; // 801C1A44
  c->r[3]=c->r[3]+0x0000002Cu; // 801C1A48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C1A4C
  c->lr=0x801C1A54u; f_80157670(c); // 801C1A50
  c->r[0]=c->r[3]+0x00000087u; // 801C1A54
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C1A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C1A5C
  c->lr=c->r[0]; // 801C1A60
  c->r[1]=c->r[1]+0x00000010u; // 801C1A64
  return; // 801C1A68
}

// fn_801C1A70
void f_801C1A70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C1A70
  f_801BA4C0(c); return; // 801C1A74
}

// fn_801C1A80
void f_801C1A80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C1A80
  f_801BA530(c); return; // 801C1A84
}

// fn_801C1A90
void f_801C1A90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1A90
  c->r[0]=c->lr; // 801C1A94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1A98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C1A9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C1AA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C1AA4
  c->r[29]=c->r[3]|c->r[3]; // 801C1AA8
  c->r[3]=c->r[3]+0x0000002Cu; // 801C1AAC
  c->lr=0x801C1AB4u; f_80157670(c); // 801C1AB0
  c->r[4]=R32(c->r[29]+0x00000010u); // 801C1AB4
  c->r[0]=c->r[3]+0x00000087u; // 801C1AB8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C1ABC
  cmps(c,0,(int32_t)c->r[4],0); // 801C1AC0
  if (!crb(c,2)) { goto L_801C1AD0; } // 801C1AC4
  c->r[0]=0u+0x00000000u; // 801C1AC8
  goto L_801C1AD8; // 801C1ACC
L_801C1AD0:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C1AD0
  c->r[0]=c->r[0]-c->r[4]; // 801C1AD4
L_801C1AD8:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C1AD8
  if (!crb(c,1)) { goto L_801C1AE8; } // 801C1ADC
  c->r[3]=0u+0x00000000u; // 801C1AE0
  goto L_801C1B68; // 801C1AE4
L_801C1AE8:;
  c->r[3]=c->r[29]+0x00000010u; // 801C1AE8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C1AEC
  c->r[5]=c->r[1]+0x00000008u; // 801C1AF0
  c->lr=0x801C1AF8u; f_801BA580(c); // 801C1AF4
  c->r[3]=c->r[29]+0x0000002Cu; // 801C1AF8
  c->lr=0x801C1B00u; f_80157680(c); // 801C1AFC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C1B00
  c->r[30]=c->r[3]|c->r[3]; // 801C1B04
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C1B08
  c->r[3]=c->r[29]+0x00000010u; // 801C1B0C
  c->lr=0x801C1B14u; f_801BA5E0(c); // 801C1B10
  c->r[31]=c->r[3]|c->r[3]; // 801C1B14
  c->r[3]=c->r[29]+0x0000002Cu; // 801C1B18
  c->lr=0x801C1B20u; f_80157670(c); // 801C1B1C
  c->r[3]=c->r[3]+0x00000087u; // 801C1B20
  c->r[0]=c->r[31]+0x00000087u; // 801C1B24
  c->r[7]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801C1B28
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C1B2C
  cmpu(c,0,c->r[7],c->r[6]); // 801C1B30
  if (crb(c,2)) { goto L_801C1B54; } // 801C1B34
  c->r[3]=0u+0x803A0000u; // 801C1B38
  c->r[5]=0u+0x803A0000u; // 801C1B3C
  c->r[3]=c->r[3]+0xFFFFD5E8u; // 801C1B40
  c->r[4]=0u+0x0000008Au; // 801C1B44
  c->r[5]=c->r[5]+0xFFFFD5FCu; // 801C1B48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1B4C
  c->lr=0x801C1B54u; f_80212300(c); // 801C1B50
L_801C1B54:;
  c->r[0]=0u-c->r[30]; // 801C1B54
  c->r[3]=0u+0x00000001u; // 801C1B58
  c->r[0]=c->r[0]|c->r[30]; // 801C1B5C
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 801C1B60
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C1B64
L_801C1B68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1B68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C1B6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C1B70
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C1B74
  c->lr=c->r[0]; // 801C1B78
  c->r[1]=c->r[1]+0x00000020u; // 801C1B7C
  return; // 801C1B80
}

// fn_801C1B90
void f_801C1B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1B90
  c->r[0]=c->lr; // 801C1B94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1B98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C1B9C
  c->r[31]=c->r[3]|c->r[3]; // 801C1BA0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C1BA4
  cmps(c,0,(int32_t)c->r[0],0); // 801C1BA8
  if (crb(c,2)) { goto L_801C1BE0; } // 801C1BAC
  c->r[0]=0u+0x00000000u; // 801C1BB0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C1BB4
  c->r[3]=c->r[3]+0x00000010u; // 801C1BB8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C1BBC
  c->r[5]=c->r[1]+0x00000008u; // 801C1BC0
  c->lr=0x801C1BC8u; f_801BA580(c); // 801C1BC4
  c->r[3]=c->r[31]+0x0000002Cu; // 801C1BC8
  c->lr=0x801C1BD0u; f_80157A90(c); // 801C1BCC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C1BD0
  c->r[3]=c->r[31]+0x00000010u; // 801C1BD4
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C1BD8
  c->lr=0x801C1BE0u; f_801BA5E0(c); // 801C1BDC
L_801C1BE0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1BE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C1BE4
  c->lr=c->r[0]; // 801C1BE8
  c->r[1]=c->r[1]+0x00000020u; // 801C1BEC
  return; // 801C1BF0
}

// fn_801C1C00
void f_801C1C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1C00
  c->r[0]=c->lr; // 801C1C04
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1C08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C1C0C
  c->r[0]=0u+0x00000000u; // 801C1C10
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C1C18
  c->r[31]=0u+0x803A0000u; // 801C1C1C
  fcmp(c,0,c->f[1],c->f[0]); // 801C1C20
  c->r[31]=c->r[31]+0xFFFFD5E8u; // 801C1C24
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C1C28
  c->r[30]=c->r[4]|c->r[4]; // 801C1C2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C1C30
  c->r[29]=c->r[3]|c->r[3]; // 801C1C34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C1C38
  if (!crb(c,2)) { goto L_801C1C54; } // 801C1C3C
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C40
  fcmp(c,0,c->f[1],c->f[0]); // 801C1C44
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C1C48
  if (!crb(c,2)) { goto L_801C1C54; } // 801C1C4C
  c->r[0]=0u+0x00000001u; // 801C1C50
L_801C1C54:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1C54
  if (!crb(c,2)) { goto L_801C1C7C; } // 801C1C58
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1C5C
  c->r[3]=c->r[31]+0x00000000u; // 801C1C60
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=RF64(ea);} // 801C1C64
  c->r[5]=c->r[31]+0x00000058u; // 801C1C68
  {uint32_t ea=c->r[2]+0xFFFFA678u; c->f[3]=RF64(ea);} // 801C1C6C
  c->r[4]=0u+0x000000B1u; // 801C1C70
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C1C74
  c->lr=0x801C1C7Cu; f_80212260(c); // 801C1C78
L_801C1C7C:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1C7C
  c->r[0]=0u+0x00000000u; // 801C1C80
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C84
  fcmp(c,0,c->f[1],c->f[0]); // 801C1C88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C1C8C
  if (!crb(c,2)) { goto L_801C1CA8; } // 801C1C90
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1C94
  fcmp(c,0,c->f[1],c->f[0]); // 801C1C98
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C1C9C
  if (!crb(c,2)) { goto L_801C1CA8; } // 801C1CA0
  c->r[0]=0u+0x00000001u; // 801C1CA4
L_801C1CA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1CA8
  if (!crb(c,2)) { goto L_801C1CD0; } // 801C1CAC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1CB0
  c->r[3]=c->r[31]+0x00000000u; // 801C1CB4
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[2]=RF64(ea);} // 801C1CB8
  c->r[5]=c->r[31]+0x000000A8u; // 801C1CBC
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[3]=RF64(ea);} // 801C1CC0
  c->r[4]=0u+0x000000B2u; // 801C1CC4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C1CC8
  c->lr=0x801C1CD0u; f_80212260(c); // 801C1CCC
L_801C1CD0:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1CD0
  c->r[0]=0u+0x00000000u; // 801C1CD4
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1CD8
  fcmp(c,0,c->f[1],c->f[0]); // 801C1CDC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C1CE0
  if (!crb(c,2)) { goto L_801C1CFC; } // 801C1CE4
  {uint32_t ea=c->r[2]+0xFFFFA690u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1CE8
  fcmp(c,0,c->f[1],c->f[0]); // 801C1CEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C1CF0
  if (!crb(c,2)) { goto L_801C1CFC; } // 801C1CF4
  c->r[0]=0u+0x00000001u; // 801C1CF8
L_801C1CFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1CFC
  if (!crb(c,2)) { goto L_801C1D24; } // 801C1D00
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1D04
  c->r[3]=c->r[31]+0x00000000u; // 801C1D08
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[2]=RF64(ea);} // 801C1D0C
  c->r[5]=c->r[31]+0x000000F0u; // 801C1D10
  {uint32_t ea=c->r[2]+0xFFFFA698u; c->f[3]=RF64(ea);} // 801C1D14
  c->r[4]=0u+0x000000B3u; // 801C1D18
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C1D1C
  c->lr=0x801C1D24u; f_80212260(c); // 801C1D20
L_801C1D24:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1D24
  c->r[0]=0u+0x00000000u; // 801C1D28
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D2C
  fcmp(c,0,c->f[1],c->f[0]); // 801C1D30
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C1D34
  if (!crb(c,2)) { goto L_801C1D50; } // 801C1D38
  {uint32_t ea=c->r[2]+0xFFFFA6A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D3C
  fcmp(c,0,c->f[1],c->f[0]); // 801C1D40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C1D44
  if (!crb(c,2)) { goto L_801C1D50; } // 801C1D48
  c->r[0]=0u+0x00000001u; // 801C1D4C
L_801C1D50:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1D50
  if (!crb(c,2)) { goto L_801C1D78; } // 801C1D54
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1D58
  c->r[3]=c->r[31]+0x00000000u; // 801C1D5C
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[2]=RF64(ea);} // 801C1D60
  c->r[5]=c->r[31]+0x00000138u; // 801C1D64
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[3]=RF64(ea);} // 801C1D68
  c->r[4]=0u+0x000000B4u; // 801C1D6C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C1D70
  c->lr=0x801C1D78u; f_80212260(c); // 801C1D74
L_801C1D78:;
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1D78
  c->r[0]=0u+0x00000000u; // 801C1D7C
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D80
  fcmp(c,0,c->f[1],c->f[0]); // 801C1D84
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C1D88
  if (!crb(c,2)) { goto L_801C1DA4; } // 801C1D8C
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1D90
  fcmp(c,0,c->f[1],c->f[0]); // 801C1D94
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C1D98
  if (!crb(c,2)) { goto L_801C1DA4; } // 801C1D9C
  c->r[0]=0u+0x00000001u; // 801C1DA0
L_801C1DA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C1DA4
  if (!crb(c,2)) { goto L_801C1DCC; } // 801C1DA8
  {uint32_t ea=c->r[30]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1DAC
  c->r[3]=c->r[31]+0x00000000u; // 801C1DB0
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[2]=RF64(ea);} // 801C1DB4
  c->r[5]=c->r[31]+0x00000188u; // 801C1DB8
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[3]=RF64(ea);} // 801C1DBC
  c->r[4]=0u+0x000000B5u; // 801C1DC0
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C1DC4
  c->lr=0x801C1DCCu; f_80212260(c); // 801C1DC8
L_801C1DCC:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C1DCC
  {uint32_t ea=c->r[2]+0xFFFFA66Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1DD0
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C1DD4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1DD8
  fcmp(c,0,c->f[4],c->f[5]); // 801C1DDC
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1DE0
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1DE4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[4]);} // 801C1DE8
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[3]);} // 801C1DEC
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[2]);} // 801C1DF0
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[1]);} // 801C1DF4
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 801C1DF8
  if (!crb(c,1)) { goto L_801C1E04; } // 801C1DFC
  goto L_801C1E18; // 801C1E00
L_801C1E04:;
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C1E04
  fcmp(c,0,c->f[4],c->f[5]); // 801C1E08
  if (!crb(c,0)) { goto L_801C1E14; } // 801C1E0C
  goto L_801C1E18; // 801C1E10
L_801C1E14:;
  c->f[5]=c->f[4]; // 801C1E14
L_801C1E18:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1E18
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1E1C
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[5]);} // 801C1E20
  fcmp(c,0,c->f[0],c->f[1]); // 801C1E24
  if (!crb(c,1)) { goto L_801C1E30; } // 801C1E28
  goto L_801C1E44; // 801C1E2C
L_801C1E30:;
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1E30
  fcmp(c,0,c->f[0],c->f[1]); // 801C1E34
  if (!crb(c,0)) { goto L_801C1E40; } // 801C1E38
  goto L_801C1E44; // 801C1E3C
L_801C1E40:;
  c->f[1]=c->f[0]; // 801C1E40
L_801C1E44:;
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1E44
  {uint32_t ea=c->r[2]+0xFFFFA690u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1E48
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 801C1E4C
  fcmp(c,0,c->f[0],c->f[2]); // 801C1E50
  if (!crb(c,1)) { goto L_801C1E5C; } // 801C1E54
  goto L_801C1E70; // 801C1E58
L_801C1E5C:;
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1E5C
  fcmp(c,0,c->f[0],c->f[2]); // 801C1E60
  if (!crb(c,0)) { goto L_801C1E6C; } // 801C1E64
  goto L_801C1E70; // 801C1E68
L_801C1E6C:;
  c->f[2]=c->f[0]; // 801C1E6C
L_801C1E70:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1E70
  {uint32_t ea=c->r[2]+0xFFFFA6A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1E74
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[2]);} // 801C1E78
  fcmp(c,0,c->f[0],c->f[1]); // 801C1E7C
  if (!crb(c,1)) { goto L_801C1E88; } // 801C1E80
  goto L_801C1E9C; // 801C1E84
L_801C1E88:;
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C1E88
  fcmp(c,0,c->f[0],c->f[1]); // 801C1E8C
  if (!crb(c,0)) { goto L_801C1E98; } // 801C1E90
  goto L_801C1E9C; // 801C1E94
L_801C1E98:;
  c->f[1]=c->f[0]; // 801C1E98
L_801C1E9C:;
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1E9C
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1EA0
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 801C1EA4
  fcmp(c,0,c->f[0],c->f[2]); // 801C1EA8
  if (!crb(c,1)) { goto L_801C1EB4; } // 801C1EAC
  goto L_801C1EC8; // 801C1EB0
L_801C1EB4:;
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C1EB4
  fcmp(c,0,c->f[0],c->f[2]); // 801C1EB8
  if (!crb(c,0)) { goto L_801C1EC4; } // 801C1EBC
  goto L_801C1EC8; // 801C1EC0
L_801C1EC4:;
  c->f[2]=c->f[0]; // 801C1EC4
L_801C1EC8:;
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 801C1EC8
  c->r[31]=0u+0x00000000u; // 801C1ECC
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C1ED0
  cmps(c,0,(int32_t)c->r[0],0); // 801C1ED4
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[2]);} // 801C1ED8
  W32(c->r[29]+0x000000BCu,c->r[31]); // 801C1EDC
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801C1EE0
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[0]);} // 801C1EE4
  if (!crb(c,2)) { goto L_801C1EF4; } // 801C1EE8
  c->r[3]=0u+0x00000001u; // 801C1EEC
  goto L_801C1F40; // 801C1EF0
L_801C1EF4:;
  c->r[3]=c->r[29]+0x0000002Cu; // 801C1EF4
  c->lr=0x801C1EFCu; f_80157670(c); // 801C1EF8
  c->r[4]=R32(c->r[29]+0x00000010u); // 801C1EFC
  c->r[0]=c->r[3]+0x00000087u; // 801C1F00
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C1F04
  cmps(c,0,(int32_t)c->r[4],0); // 801C1F08
  if (!crb(c,2)) { goto L_801C1F14; } // 801C1F0C
  goto L_801C1F1C; // 801C1F10
L_801C1F14:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C1F14
  c->r[31]=c->r[0]-c->r[4]; // 801C1F18
L_801C1F1C:;
  cmpu(c,0,c->r[3],c->r[31]); // 801C1F1C
  if (!crb(c,1)) { goto L_801C1F2C; } // 801C1F20
  c->r[3]=0u+0x00000000u; // 801C1F24
  goto L_801C1F40; // 801C1F28
L_801C1F2C:;
  c->r[3]=c->r[29]+0x0000002Cu; // 801C1F2C
  c->lr=0x801C1F34u; f_801578E0(c); // 801C1F30
  c->r[0]=0u-c->r[3]; // 801C1F34
  c->r[0]=c->r[0]|c->r[3]; // 801C1F38
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C1F3C
L_801C1F40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C1F40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C1F44
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C1F48
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C1F4C
  c->lr=c->r[0]; // 801C1F50
  c->r[1]=c->r[1]+0x00000020u; // 801C1F54
  return; // 801C1F58
}

// fn_801C1F60
void f_801C1F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C1F60
  c->r[0]=c->lr; // 801C1F64
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C1F68
  c->r[11]=c->r[1]+0x00000030u; // 801C1F6C
  c->lr=0x801C1F74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C1F70
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C1F74
  c->r[31]=0u+0x803A0000u; // 801C1F78
  c->r[27]=c->r[3]|c->r[3]; // 801C1F7C
  c->r[28]=c->r[5]|c->r[5]; // 801C1F80
  cmps(c,0,(int32_t)c->r[0],0); // 801C1F84
  c->r[29]=c->r[6]|c->r[6]; // 801C1F88
  c->r[30]=c->r[7]|c->r[7]; // 801C1F8C
  c->r[31]=c->r[31]+0xFFFFD5E8u; // 801C1F90
  if (crb(c,2)) { goto L_801C2018; } // 801C1F94
  cmps(c,0,(int32_t)c->r[8],2); // 801C1F98
  if (crb(c,2)) { goto L_801C2018; } // 801C1F9C
  cmps(c,0,(int32_t)c->r[4],3); // 801C1FA0
  if (!crb(c,0)) { goto L_801C1FBC; } // 801C1FA4
  c->r[3]=c->r[31]+0x00000000u; // 801C1FA8
  c->r[5]=c->r[31]+0x000001D4u; // 801C1FAC
  c->r[4]=0u+0x000000F6u; // 801C1FB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1FB4
  c->lr=0x801C1FBCu; f_80212260(c); // 801C1FB8
L_801C1FBC:;
  cmpu(c,0,c->r[29],0x00000180u); // 801C1FBC
  if (crb(c,2)) { goto L_801C1FD8; } // 801C1FC0
  c->r[3]=c->r[31]+0x00000000u; // 801C1FC4
  c->r[5]=c->r[31]+0x000001FCu; // 801C1FC8
  c->r[4]=0u+0x000000F7u; // 801C1FCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1FD0
  c->lr=0x801C1FD8u; f_80212260(c); // 801C1FD4
L_801C1FD8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C1FD8
  if (crb(c,2)) { goto L_801C1FF4; } // 801C1FDC
  c->r[3]=c->r[31]+0x00000000u; // 801C1FE0
  c->r[5]=c->r[31]+0x00000230u; // 801C1FE4
  c->r[4]=0u+0x000000F8u; // 801C1FE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C1FEC
  c->lr=0x801C1FF4u; f_80212260(c); // 801C1FF0
L_801C1FF4:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801C1FF4
  c->r[3]=c->r[1]+0x00000008u; // 801C1FF8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C1FFC
  c->r[4]=c->r[27]+0x0000002Cu; // 801C2000
  c->r[0]=R32(c->r[28]+0x00000004u); // 801C2004
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C2008
  c->r[0]=R32(c->r[28]+0x00000008u); // 801C200C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C2010
  c->lr=0x801C2018u; f_80157B20(c); // 801C2014
L_801C2018:;
  c->r[11]=c->r[1]+0x00000030u; // 801C2018
  c->lr=0x801C2020u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C201C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C2020
  c->lr=c->r[0]; // 801C2024
  c->r[1]=c->r[1]+0x00000030u; // 801C2028
  return; // 801C202C
}

// fn_801C2030
void f_801C2030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2030
  c->r[0]=c->lr; // 801C2034
  c->r[5]=0u+0x803A0000u; // 801C2038
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C203C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C2040
  c->r[0]=0u+0x00000000u; // 801C2044
  {uint32_t ea=c->r[2]+0xFFFFA6B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2048
  c->r[5]=c->r[5]+0xFFFFDB3Cu; // 801C204C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C2050
  c->r[31]=c->r[3]|c->r[3]; // 801C2054
  {uint32_t ea=c->r[2]+0xFFFFA6B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2058
  c->r[4]=c->r[1]+0x00000008u; // 801C205C
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2060
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C2064
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C2068
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C206C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C2070
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C2074
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C2078
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[3]);} // 801C207C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[2]);} // 801C2080
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 801C2084
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801C2088
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C208C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[3]);} // 801C2090
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 801C2094
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801C2098
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801C209C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801C20A0
  c->lr=0x801C20A8u; f_801C2340(c); // 801C20A4
  c->r[3]=c->r[31]|c->r[31]; // 801C20A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C20AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C20B0
  c->lr=c->r[0]; // 801C20B4
  c->r[1]=c->r[1]+0x00000030u; // 801C20B8
  return; // 801C20BC
}

// fn_801C20C0
void f_801C20C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C20C0
  c->r[0]=c->lr; // 801C20C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C20C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C20CC
  c->r[31]=c->r[3]|c->r[3]; // 801C20D0
  c->r[3]=c->r[3]+0x00000030u; // 801C20D4
  c->lr=0x801C20DCu; f_80157670(c); // 801C20D8
  c->r[0]=c->r[3]+0x00000087u; // 801C20DC
  c->r[3]=c->r[31]+0x000000D0u; // 801C20E0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C20E4
  c->lr=0x801C20ECu; f_80158190(c); // 801C20E8
  c->r[0]=c->r[3]+0x00000087u; // 801C20EC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C20F0
  cmpu(c,0,c->r[3],c->r[31]); // 801C20F4
  if (!crb(c,0)) { goto L_801C2100; } // 801C20F8
  c->r[3]=c->r[31]|c->r[31]; // 801C20FC
L_801C2100:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2104
  c->lr=c->r[0]; // 801C2108
  c->r[1]=c->r[1]+0x00000010u; // 801C210C
  return; // 801C2110
}

// fn_801C2120
void f_801C2120(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C2120
  f_801BA4C0(c); return; // 801C2124
}

// fn_801C2130
void f_801C2130(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C2130
  f_801BA530(c); return; // 801C2134
}

// fn_801C2140
void f_801C2140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2140
  c->r[0]=c->lr; // 801C2144
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2148
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C214C
  c->r[31]=c->r[3]|c->r[3]; // 801C2150
  c->r[3]=c->r[3]+0x00000030u; // 801C2154
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2158
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C215C
  c->lr=0x801C2164u; f_80157670(c); // 801C2160
  c->r[0]=c->r[3]+0x00000087u; // 801C2164
  c->r[3]=c->r[31]+0x000000D0u; // 801C2168
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C216C
  c->lr=0x801C2174u; f_80158190(c); // 801C2170
  c->r[0]=c->r[3]+0x00000087u; // 801C2174
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2178
  cmpu(c,0,c->r[3],c->r[30]); // 801C217C
  if (!crb(c,0)) { goto L_801C2188; } // 801C2180
  c->r[3]=c->r[30]|c->r[30]; // 801C2184
L_801C2188:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C2188
  cmps(c,0,(int32_t)c->r[4],0); // 801C218C
  if (!crb(c,2)) { goto L_801C219C; } // 801C2190
  c->r[0]=0u+0x00000000u; // 801C2194
  goto L_801C21A4; // 801C2198
L_801C219C:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C219C
  c->r[0]=c->r[0]-c->r[4]; // 801C21A0
L_801C21A4:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C21A4
  if (!crb(c,1)) { goto L_801C21B4; } // 801C21A8
  c->r[3]=0u+0x00000000u; // 801C21AC
  goto L_801C2298; // 801C21B0
L_801C21B4:;
  c->lr=0x801C21B8u; f_801B4F50(c); // 801C21B4
  c->lr=0x801C21BCu; f_801B58C0(c); // 801C21B8
  cmps(c,0,(int32_t)c->r[3],2); // 801C21BC
  if (!crb(c,2)) { goto L_801C2210; } // 801C21C0
  c->r[0]=0u+0x00000001u; // 801C21C4
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C21C8
  c->r[3]=c->r[31]+0x00000014u; // 801C21CC
  c->r[4]=c->r[1]+0x0000000Cu; // 801C21D0
  c->r[5]=c->r[1]+0x00000008u; // 801C21D4
  c->lr=0x801C21DCu; f_801BA580(c); // 801C21D8
  c->r[3]=c->r[31]+0x000000D0u; // 801C21DC
  c->lr=0x801C21E4u; f_801581A0(c); // 801C21E0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C21E4
  c->r[30]=c->r[3]|c->r[3]; // 801C21E8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C21EC
  c->r[3]=c->r[31]+0x00000014u; // 801C21F0
  c->lr=0x801C21F8u; f_801BA5E0(c); // 801C21F4
  c->r[29]=c->r[3]|c->r[3]; // 801C21F8
  c->r[3]=c->r[31]+0x000000D0u; // 801C21FC
  c->lr=0x801C2204u; f_80158190(c); // 801C2200
  c->r[0]=c->r[3]+0x00000087u; // 801C2204
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2208
  goto L_801C2258; // 801C220C
L_801C2210:;
  c->r[0]=0u+0x00000000u; // 801C2210
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C2214
  c->r[3]=c->r[31]+0x00000014u; // 801C2218
  c->r[4]=c->r[1]+0x0000000Cu; // 801C221C
  c->r[5]=c->r[1]+0x00000008u; // 801C2220
  c->lr=0x801C2228u; f_801BA580(c); // 801C2224
  c->r[3]=c->r[31]+0x00000030u; // 801C2228
  c->lr=0x801C2230u; f_80157680(c); // 801C222C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C2230
  c->r[30]=c->r[3]|c->r[3]; // 801C2234
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C2238
  c->r[3]=c->r[31]+0x00000014u; // 801C223C
  c->lr=0x801C2244u; f_801BA5E0(c); // 801C2240
  c->r[29]=c->r[3]|c->r[3]; // 801C2244
  c->r[3]=c->r[31]+0x00000030u; // 801C2248
  c->lr=0x801C2250u; f_80157670(c); // 801C224C
  c->r[0]=c->r[3]+0x00000087u; // 801C2250
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2254
L_801C2258:;
  c->r[0]=c->r[29]+0x00000087u; // 801C2258
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C225C
  cmpu(c,0,c->r[7],c->r[6]); // 801C2260
  if (crb(c,2)) { goto L_801C2284; } // 801C2264
  c->r[3]=0u+0x803A0000u; // 801C2268
  c->r[5]=0u+0x803A0000u; // 801C226C
  c->r[3]=c->r[3]+0xFFFFD878u; // 801C2270
  c->r[4]=0u+0x000000B0u; // 801C2274
  c->r[5]=c->r[5]+0xFFFFD890u; // 801C2278
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C227C
  c->lr=0x801C2284u; f_80212300(c); // 801C2280
L_801C2284:;
  c->r[0]=0u-c->r[30]; // 801C2284
  c->r[3]=0u+0x00000001u; // 801C2288
  c->r[0]=c->r[0]|c->r[30]; // 801C228C
  W8(c->r[31]+0x0000000Cu,c->r[3]); // 801C2290
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C2294
L_801C2298:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2298
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C229C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C22A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C22A4
  c->lr=c->r[0]; // 801C22A8
  c->r[1]=c->r[1]+0x00000020u; // 801C22AC
  return; // 801C22B0
}

// fn_801C22C0
void f_801C22C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C22C0
  c->r[0]=c->lr; // 801C22C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C22C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C22CC
  c->r[31]=c->r[3]|c->r[3]; // 801C22D0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C22D4
  cmps(c,0,(int32_t)c->r[0],0); // 801C22D8
  if (crb(c,2)) { goto L_801C2328; } // 801C22DC
  c->r[0]=0u+0x00000000u; // 801C22E0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C22E4
  c->r[3]=c->r[3]+0x00000014u; // 801C22E8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C22EC
  c->r[5]=c->r[1]+0x00000008u; // 801C22F0
  c->lr=0x801C22F8u; f_801BA580(c); // 801C22F4
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C22F8
  cmps(c,0,(int32_t)c->r[0],1); // 801C22FC
  if (!crb(c,2)) { goto L_801C2310; } // 801C2300
  c->r[3]=c->r[31]+0x000000D0u; // 801C2304
  c->lr=0x801C230Cu; f_801585D0(c); // 801C2308
  goto L_801C2318; // 801C230C
L_801C2310:;
  c->r[3]=c->r[31]+0x00000030u; // 801C2310
  c->lr=0x801C2318u; f_80157A90(c); // 801C2314
L_801C2318:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C2318
  c->r[3]=c->r[31]+0x00000014u; // 801C231C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C2320
  c->lr=0x801C2328u; f_801BA5E0(c); // 801C2324
L_801C2328:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2328
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C232C
  c->lr=c->r[0]; // 801C2330
  c->r[1]=c->r[1]+0x00000020u; // 801C2334
  return; // 801C2338
}

// fn_801C2340
void f_801C2340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2340
  c->r[0]=c->lr; // 801C2344
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2348
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C234C
  c->r[0]=0u+0x00000000u; // 801C2350
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2354
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2358
  c->r[31]=c->r[3]|c->r[3]; // 801C235C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2360
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2364
  c->r[30]=0u+0x803A0000u; // 801C2368
  c->r[30]=c->r[30]+0xFFFFD878u; // 801C236C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2370
  c->r[29]=c->r[4]|c->r[4]; // 801C2374
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2378
  if (!crb(c,2)) { goto L_801C2394; } // 801C237C
  {uint32_t ea=c->r[2]+0xFFFFA6C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2380
  fcmp(c,0,c->f[1],c->f[0]); // 801C2384
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2388
  if (!crb(c,2)) { goto L_801C2394; } // 801C238C
  c->r[0]=0u+0x00000001u; // 801C2390
L_801C2394:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C2394
  if (!crb(c,2)) { goto L_801C23BC; } // 801C2398
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C239C
  c->r[3]=c->r[30]+0x00000000u; // 801C23A0
  {uint32_t ea=c->r[2]+0xFFFFA6C8u; c->f[2]=RF64(ea);} // 801C23A4
  c->r[5]=c->r[30]+0x00000060u; // 801C23A8
  {uint32_t ea=c->r[2]+0xFFFFA6D0u; c->f[3]=RF64(ea);} // 801C23AC
  c->r[4]=0u+0x000000DEu; // 801C23B0
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C23B4
  c->lr=0x801C23BCu; f_80212260(c); // 801C23B8
L_801C23BC:;
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C23BC
  c->r[0]=0u+0x00000000u; // 801C23C0
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C23C4
  fcmp(c,0,c->f[1],c->f[0]); // 801C23C8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C23CC
  if (!crb(c,2)) { goto L_801C23E8; } // 801C23D0
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C23D4
  fcmp(c,0,c->f[1],c->f[0]); // 801C23D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C23DC
  if (!crb(c,2)) { goto L_801C23E8; } // 801C23E0
  c->r[0]=0u+0x00000001u; // 801C23E4
L_801C23E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C23E8
  if (!crb(c,2)) { goto L_801C2410; } // 801C23EC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C23F0
  c->r[3]=c->r[30]+0x00000000u; // 801C23F4
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[2]=RF64(ea);} // 801C23F8
  c->r[5]=c->r[30]+0x000000B0u; // 801C23FC
  {uint32_t ea=c->r[2]+0xFFFFA6E0u; c->f[3]=RF64(ea);} // 801C2400
  c->r[4]=0u+0x000000DFu; // 801C2404
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C2408
  c->lr=0x801C2410u; f_80212260(c); // 801C240C
L_801C2410:;
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2410
  c->r[0]=0u+0x00000000u; // 801C2414
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2418
  fcmp(c,0,c->f[1],c->f[0]); // 801C241C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2420
  if (!crb(c,2)) { goto L_801C243C; } // 801C2424
  {uint32_t ea=c->r[2]+0xFFFFA6E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2428
  fcmp(c,0,c->f[1],c->f[0]); // 801C242C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2430
  if (!crb(c,2)) { goto L_801C243C; } // 801C2434
  c->r[0]=0u+0x00000001u; // 801C2438
L_801C243C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C243C
  if (!crb(c,2)) { goto L_801C2464; } // 801C2440
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2444
  c->r[3]=c->r[30]+0x00000000u; // 801C2448
  {uint32_t ea=c->r[2]+0xFFFFA6C8u; c->f[2]=RF64(ea);} // 801C244C
  c->r[5]=c->r[30]+0x000000F8u; // 801C2450
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[3]=RF64(ea);} // 801C2454
  c->r[4]=0u+0x000000E0u; // 801C2458
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C245C
  c->lr=0x801C2464u; f_80212260(c); // 801C2460
L_801C2464:;
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2464
  c->r[0]=0u+0x00000000u; // 801C2468
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C246C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2470
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2474
  if (!crb(c,2)) { goto L_801C2490; } // 801C2478
  {uint32_t ea=c->r[2]+0xFFFFA6F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C247C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2480
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2484
  if (!crb(c,2)) { goto L_801C2490; } // 801C2488
  c->r[0]=0u+0x00000001u; // 801C248C
L_801C2490:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C2490
  if (!crb(c,2)) { goto L_801C24B8; } // 801C2494
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2498
  c->r[3]=c->r[30]+0x00000000u; // 801C249C
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[2]=RF64(ea);} // 801C24A0
  c->r[5]=c->r[30]+0x00000140u; // 801C24A4
  {uint32_t ea=c->r[2]+0xFFFFA700u; c->f[3]=RF64(ea);} // 801C24A8
  c->r[4]=0u+0x000000E1u; // 801C24AC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C24B0
  c->lr=0x801C24B8u; f_80212260(c); // 801C24B4
L_801C24B8:;
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C24B8
  c->r[0]=0u+0x00000000u; // 801C24BC
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C24C0
  fcmp(c,0,c->f[1],c->f[0]); // 801C24C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C24C8
  if (!crb(c,2)) { goto L_801C24E4; } // 801C24CC
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C24D0
  fcmp(c,0,c->f[1],c->f[0]); // 801C24D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C24D8
  if (!crb(c,2)) { goto L_801C24E4; } // 801C24DC
  c->r[0]=0u+0x00000001u; // 801C24E0
L_801C24E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C24E4
  if (!crb(c,2)) { goto L_801C250C; } // 801C24E8
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C24EC
  c->r[3]=c->r[30]+0x00000000u; // 801C24F0
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[2]=RF64(ea);} // 801C24F4
  c->r[5]=c->r[30]+0x00000190u; // 801C24F8
  {uint32_t ea=c->r[2]+0xFFFFA6E0u; c->f[3]=RF64(ea);} // 801C24FC
  c->r[4]=0u+0x000000E2u; // 801C2500
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C2504
  c->lr=0x801C250Cu; f_80212260(c); // 801C2508
L_801C250C:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C250C
  {uint32_t ea=c->r[2]+0xFFFFA6C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2510
  {uint32_t ea=c->r[29]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2514
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2518
  fcmp(c,0,c->f[4],c->f[5]); // 801C251C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2520
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2524
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[4]);} // 801C2528
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 801C252C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 801C2530
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 801C2534
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C2538
  if (!crb(c,1)) { goto L_801C2544; } // 801C253C
  goto L_801C2558; // 801C2540
L_801C2544:;
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2544
  fcmp(c,0,c->f[4],c->f[5]); // 801C2548
  if (!crb(c,0)) { goto L_801C2554; } // 801C254C
  goto L_801C2558; // 801C2550
L_801C2554:;
  c->f[5]=c->f[4]; // 801C2554
L_801C2558:;
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2558
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C255C
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[5]);} // 801C2560
  fcmp(c,0,c->f[0],c->f[1]); // 801C2564
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[5]);} // 801C2568
  if (!crb(c,1)) { goto L_801C2574; } // 801C256C
  goto L_801C2588; // 801C2570
L_801C2574:;
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2574
  fcmp(c,0,c->f[0],c->f[1]); // 801C2578
  if (!crb(c,0)) { goto L_801C2584; } // 801C257C
  goto L_801C2588; // 801C2580
L_801C2584:;
  c->f[1]=c->f[0]; // 801C2584
L_801C2588:;
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2588
  {uint32_t ea=c->r[2]+0xFFFFA6E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C258C
  {uint32_t ea=c->r[31]+0x00000168u; WF32(ea,c->f[1]);} // 801C2590
  fcmp(c,0,c->f[0],c->f[2]); // 801C2594
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[1]);} // 801C2598
  if (!crb(c,1)) { goto L_801C25A4; } // 801C259C
  goto L_801C25B8; // 801C25A0
L_801C25A4:;
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C25A4
  fcmp(c,0,c->f[0],c->f[2]); // 801C25A8
  if (!crb(c,0)) { goto L_801C25B4; } // 801C25AC
  goto L_801C25B8; // 801C25B0
L_801C25B4:;
  c->f[2]=c->f[0]; // 801C25B4
L_801C25B8:;
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C25B8
  {uint32_t ea=c->r[2]+0xFFFFA6F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C25BC
  {uint32_t ea=c->r[31]+0x0000016Cu; WF32(ea,c->f[2]);} // 801C25C0
  fcmp(c,0,c->f[0],c->f[1]); // 801C25C4
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[2]);} // 801C25C8
  if (!crb(c,1)) { goto L_801C25D4; } // 801C25CC
  goto L_801C25E8; // 801C25D0
L_801C25D4:;
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C25D4
  fcmp(c,0,c->f[0],c->f[1]); // 801C25D8
  if (!crb(c,0)) { goto L_801C25E4; } // 801C25DC
  goto L_801C25E8; // 801C25E0
L_801C25E4:;
  c->f[1]=c->f[0]; // 801C25E4
L_801C25E8:;
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C25E8
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C25EC
  {uint32_t ea=c->r[31]+0x00000170u; WF32(ea,c->f[1]);} // 801C25F0
  fcmp(c,0,c->f[0],c->f[2]); // 801C25F4
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[1]);} // 801C25F8
  if (!crb(c,1)) { goto L_801C2604; } // 801C25FC
  goto L_801C2618; // 801C2600
L_801C2604:;
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2604
  fcmp(c,0,c->f[0],c->f[2]); // 801C2608
  if (!crb(c,0)) { goto L_801C2614; } // 801C260C
  goto L_801C2618; // 801C2610
L_801C2614:;
  c->f[2]=c->f[0]; // 801C2614
L_801C2618:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801C2618
  c->r[3]=0u+0x00000000u; // 801C261C
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2620
  cmps(c,0,(int32_t)c->r[0],0); // 801C2624
  {uint32_t ea=c->r[31]+0x0000017Cu; WF32(ea,c->f[2]);} // 801C2628
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[2]);} // 801C262C
  W32(c->r[31]+0x000000C0u,c->r[3]); // 801C2630
  W32(c->r[31]+0x000000C4u,c->r[3]); // 801C2634
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 801C2638
  W32(c->r[31]+0x00000174u,c->r[3]); // 801C263C
  W32(c->r[31]+0x00000178u,c->r[3]); // 801C2640
  {uint32_t ea=c->r[31]+0x00000180u; WF32(ea,c->f[0]);} // 801C2644
  if (!crb(c,2)) { goto L_801C2654; } // 801C2648
  c->r[3]=0u+0x00000001u; // 801C264C
  goto L_801C26D8; // 801C2650
L_801C2654:;
  c->r[3]=c->r[31]+0x00000030u; // 801C2654
  c->lr=0x801C265Cu; f_80157670(c); // 801C2658
  c->r[0]=c->r[3]+0x00000087u; // 801C265C
  c->r[3]=c->r[31]+0x000000D0u; // 801C2660
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2664
  c->lr=0x801C266Cu; f_80158190(c); // 801C2668
  c->r[0]=c->r[3]+0x00000087u; // 801C266C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2670
  cmpu(c,0,c->r[3],c->r[30]); // 801C2674
  if (!crb(c,0)) { goto L_801C2680; } // 801C2678
  c->r[3]=c->r[30]|c->r[30]; // 801C267C
L_801C2680:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C2680
  cmps(c,0,(int32_t)c->r[4],0); // 801C2684
  if (!crb(c,2)) { goto L_801C2694; } // 801C2688
  c->r[0]=0u+0x00000000u; // 801C268C
  goto L_801C269C; // 801C2690
L_801C2694:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C2694
  c->r[0]=c->r[0]-c->r[4]; // 801C2698
L_801C269C:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C269C
  if (!crb(c,1)) { goto L_801C26AC; } // 801C26A0
  c->r[3]=0u+0x00000000u; // 801C26A4
  goto L_801C26D8; // 801C26A8
L_801C26AC:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C26AC
  cmps(c,0,(int32_t)c->r[0],1); // 801C26B0
  if (!crb(c,2)) { goto L_801C26C4; } // 801C26B4
  c->r[3]=c->r[31]+0x000000D0u; // 801C26B8
  c->lr=0x801C26C0u; f_80158420(c); // 801C26BC
  goto L_801C26CC; // 801C26C0
L_801C26C4:;
  c->r[3]=c->r[31]+0x00000030u; // 801C26C4
  c->lr=0x801C26CCu; f_801578E0(c); // 801C26C8
L_801C26CC:;
  c->r[0]=0u-c->r[3]; // 801C26CC
  c->r[0]=c->r[0]|c->r[3]; // 801C26D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C26D4
L_801C26D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C26D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C26DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C26E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C26E4
  c->lr=c->r[0]; // 801C26E8
  c->r[1]=c->r[1]+0x00000020u; // 801C26EC
  return; // 801C26F0
}

// fn_801C2700
void f_801C2700(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2700
  c->r[0]=c->lr; // 801C2704
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C2708
  c->r[11]=c->r[1]+0x00000050u; // 801C270C
  c->lr=0x801C2714u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C2710
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C2714
  c->r[31]=0u+0x803A0000u; // 801C2718
  c->r[25]=c->r[3]|c->r[3]; // 801C271C
  c->r[26]=c->r[4]|c->r[4]; // 801C2720
  cmps(c,0,(int32_t)c->r[0],0); // 801C2724
  c->r[27]=c->r[5]|c->r[5]; // 801C2728
  c->r[28]=c->r[6]|c->r[6]; // 801C272C
  c->r[29]=c->r[7]|c->r[7]; // 801C2730
  c->r[30]=c->r[8]|c->r[8]; // 801C2734
  c->r[31]=c->r[31]+0xFFFFD878u; // 801C2738
  if (crb(c,2)) { goto L_801C2844; } // 801C273C
  cmps(c,0,(int32_t)c->r[4],3); // 801C2740
  if (!crb(c,0)) { goto L_801C275C; } // 801C2744
  c->r[3]=c->r[31]+0x00000000u; // 801C2748
  c->r[5]=c->r[31]+0x000001DCu; // 801C274C
  c->r[4]=0u+0x00000126u; // 801C2750
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2754
  c->lr=0x801C275Cu; f_80212260(c); // 801C2758
L_801C275C:;
  cmpu(c,0,c->r[28],0x00000180u); // 801C275C
  if (crb(c,2)) { goto L_801C2778; } // 801C2760
  c->r[3]=c->r[31]+0x00000000u; // 801C2764
  c->r[5]=c->r[31]+0x00000204u; // 801C2768
  c->r[4]=0u+0x00000127u; // 801C276C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2770
  c->lr=0x801C2778u; f_80212260(c); // 801C2774
L_801C2778:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C2778
  if (crb(c,2)) { goto L_801C2794; } // 801C277C
  c->r[3]=c->r[31]+0x00000000u; // 801C2780
  c->r[5]=c->r[31]+0x00000238u; // 801C2784
  c->r[4]=0u+0x00000128u; // 801C2788
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C278C
  c->lr=0x801C2794u; f_80212260(c); // 801C2790
L_801C2794:;
  c->r[3]=c->r[30]+0xFFFFFFFEu; // 801C2794
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C2798
  c->r[3]=cntlz(c->r[3]); // 801C279C
  c->r[30]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C27A0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C27A4
  if (crb(c,2)) { goto L_801C27C0; } // 801C27A8
  c->r[3]=c->r[31]+0x00000000u; // 801C27AC
  c->r[5]=c->r[31]+0x00000270u; // 801C27B0
  c->r[4]=0u+0x0000012Au; // 801C27B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C27B8
  c->lr=0x801C27C0u; f_80212260(c); // 801C27BC
L_801C27C0:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C27C0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C27C4
  if (!crb(c,2)) { goto L_801C2844; } // 801C27C8
  cmps(c,0,(int32_t)c->r[0],1); // 801C27CC
  if (!crb(c,2)) { goto L_801C2820; } // 801C27D0
  cmps(c,0,(int32_t)c->r[26],4); // 801C27D4
  if (!crb(c,0)) { goto L_801C27F0; } // 801C27D8
  c->r[3]=c->r[31]+0x00000000u; // 801C27DC
  c->r[5]=c->r[31]+0x0000029Cu; // 801C27E0
  c->r[4]=0u+0x0000012Fu; // 801C27E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C27E8
  c->lr=0x801C27F0u; f_80212260(c); // 801C27EC
L_801C27F0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C27F0
  c->r[3]=c->r[1]+0x00000018u; // 801C27F4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C27F8
  c->r[4]=c->r[25]+0x000000D0u; // 801C27FC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C2800
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C2804
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C2808
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C280C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801C2810
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2814
  c->lr=0x801C281Cu; f_80158660(c); // 801C2818
  goto L_801C2844; // 801C281C
L_801C2820:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C2820
  c->r[3]=c->r[1]+0x00000008u; // 801C2824
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C2828
  c->r[4]=c->r[25]+0x00000030u; // 801C282C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C2830
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C2834
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C2838
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C283C
  c->lr=0x801C2844u; f_80157B20(c); // 801C2840
L_801C2844:;
  c->r[11]=c->r[1]+0x00000050u; // 801C2844
  c->lr=0x801C284Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2848
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C284C
  c->lr=c->r[0]; // 801C2850
  c->r[1]=c->r[1]+0x00000050u; // 801C2854
  return; // 801C2858
}

// fn_801C2860
void f_801C2860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2860
  c->r[0]=c->lr; // 801C2864
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C286C
  c->r[31]=c->r[3]|c->r[3]; // 801C2870
  c->lr=0x801C2878u; f_801B4F50(c); // 801C2874
  c->lr=0x801C287Cu; f_801B58C0(c); // 801C2878
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801C287C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C2880
  c->r[3]=cntlz(c->r[3]); // 801C2884
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C2888
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801C288C
  if (crb(c,2)) { goto L_801C28BC; } // 801C2890
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C2894
  c->r[3]=c->r[31]|c->r[31]; // 801C2898
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C289C
  c->ctr=c->r[12]; // 801C28A0
  if (true) { c->lr=0x801C28A8u; dispatch(c,c->ctr); } // 801C28A4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C28A8
  c->r[3]=c->r[31]|c->r[31]; // 801C28AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C28B0
  c->ctr=c->r[12]; // 801C28B4
  if (true) { c->lr=0x801C28BCu; dispatch(c,c->ctr); } // 801C28B8
L_801C28BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C28BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C28C0
  c->lr=c->r[0]; // 801C28C4
  c->r[1]=c->r[1]+0x00000010u; // 801C28C8
  return; // 801C28CC
}

// fn_801C28D0
void f_801C28D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C28D0
  c->r[0]=c->lr; // 801C28D4
  c->r[5]=0u+0x803A0000u; // 801C28D8
  {uint32_t ea=c->r[2]+0xFFFFA708u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C28DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C28E0
  c->r[0]=0u+0x00000000u; // 801C28E4
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C28E8
  c->r[5]=c->r[5]+0xFFFFDD90u; // 801C28EC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C28F0
  c->r[31]=c->r[3]|c->r[3]; // 801C28F4
  {uint32_t ea=c->r[2]+0xFFFFA70Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C28F8
  c->r[4]=c->r[1]+0x00000008u; // 801C28FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C2900
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C2904
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C2908
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C290C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C2910
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C2914
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 801C2918
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C291C
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801C2920
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 801C2924
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801C2928
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801C292C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C2930
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801C2934
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801C2938
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801C293C
  c->lr=0x801C2944u; f_801C2B20(c); // 801C2940
  c->r[3]=c->r[31]|c->r[31]; // 801C2944
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C2948
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C294C
  c->lr=c->r[0]; // 801C2950
  c->r[1]=c->r[1]+0x00000030u; // 801C2954
  return; // 801C2958
}

// fn_801C2960
void f_801C2960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2960
  c->r[0]=c->lr; // 801C2964
  c->r[3]=c->r[3]+0x0000002Cu; // 801C2968
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C296C
  c->lr=0x801C2974u; f_80154830(c); // 801C2970
  c->r[0]=c->r[3]+0x00000087u; // 801C2974
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2978
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C297C
  c->lr=c->r[0]; // 801C2980
  c->r[1]=c->r[1]+0x00000010u; // 801C2984
  return; // 801C2988
}

// fn_801C2990
void f_801C2990(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C2990
  f_801BA4C0(c); return; // 801C2994
}

// fn_801C29A0
void f_801C29A0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C29A0
  f_801BA530(c); return; // 801C29A4
}

// fn_801C29B0
void f_801C29B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C29B0
  c->r[0]=c->lr; // 801C29B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C29B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C29BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C29C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C29C4
  c->r[29]=c->r[3]|c->r[3]; // 801C29C8
  c->r[3]=c->r[3]+0x0000002Cu; // 801C29CC
  c->lr=0x801C29D4u; f_80154830(c); // 801C29D0
  c->r[4]=R32(c->r[29]+0x00000010u); // 801C29D4
  c->r[0]=c->r[3]+0x00000087u; // 801C29D8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C29DC
  cmps(c,0,(int32_t)c->r[4],0); // 801C29E0
  if (!crb(c,2)) { goto L_801C29F0; } // 801C29E4
  c->r[0]=0u+0x00000000u; // 801C29E8
  goto L_801C29F8; // 801C29EC
L_801C29F0:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C29F0
  c->r[0]=c->r[0]-c->r[4]; // 801C29F4
L_801C29F8:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C29F8
  if (!crb(c,1)) { goto L_801C2A08; } // 801C29FC
  c->r[3]=0u+0x00000000u; // 801C2A00
  goto L_801C2A88; // 801C2A04
L_801C2A08:;
  c->r[3]=c->r[29]+0x00000010u; // 801C2A08
  c->r[4]=c->r[1]+0x0000000Cu; // 801C2A0C
  c->r[5]=c->r[1]+0x00000008u; // 801C2A10
  c->lr=0x801C2A18u; f_801BA580(c); // 801C2A14
  c->r[3]=c->r[29]+0x0000002Cu; // 801C2A18
  c->lr=0x801C2A20u; f_80154860(c); // 801C2A1C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C2A20
  c->r[30]=c->r[3]|c->r[3]; // 801C2A24
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C2A28
  c->r[3]=c->r[29]+0x00000010u; // 801C2A2C
  c->lr=0x801C2A34u; f_801BA5E0(c); // 801C2A30
  c->r[31]=c->r[3]|c->r[3]; // 801C2A34
  c->r[3]=c->r[29]+0x0000002Cu; // 801C2A38
  c->lr=0x801C2A40u; f_80154830(c); // 801C2A3C
  c->r[3]=c->r[3]+0x00000087u; // 801C2A40
  c->r[0]=c->r[31]+0x00000087u; // 801C2A44
  c->r[7]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801C2A48
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2A4C
  cmpu(c,0,c->r[7],c->r[6]); // 801C2A50
  if (crb(c,2)) { goto L_801C2A74; } // 801C2A54
  c->r[3]=0u+0x803A0000u; // 801C2A58
  c->r[5]=0u+0x803A0000u; // 801C2A5C
  c->r[3]=c->r[3]+0xFFFFDB60u; // 801C2A60
  c->r[4]=0u+0x00000089u; // 801C2A64
  c->r[5]=c->r[5]+0xFFFFDB70u; // 801C2A68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2A6C
  c->lr=0x801C2A74u; f_80212300(c); // 801C2A70
L_801C2A74:;
  c->r[0]=0u-c->r[30]; // 801C2A74
  c->r[3]=0u+0x00000001u; // 801C2A78
  c->r[0]=c->r[0]|c->r[30]; // 801C2A7C
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 801C2A80
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C2A84
L_801C2A88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2A88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2A8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2A90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2A94
  c->lr=c->r[0]; // 801C2A98
  c->r[1]=c->r[1]+0x00000020u; // 801C2A9C
  return; // 801C2AA0
}

// fn_801C2AB0
void f_801C2AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2AB0
  c->r[0]=c->lr; // 801C2AB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2AB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2ABC
  c->r[31]=c->r[3]|c->r[3]; // 801C2AC0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C2AC4
  cmps(c,0,(int32_t)c->r[0],0); // 801C2AC8
  if (crb(c,2)) { goto L_801C2B00; } // 801C2ACC
  c->r[0]=0u+0x00000000u; // 801C2AD0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C2AD4
  c->r[3]=c->r[3]+0x00000010u; // 801C2AD8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C2ADC
  c->r[5]=c->r[1]+0x00000008u; // 801C2AE0
  c->lr=0x801C2AE8u; f_801BA580(c); // 801C2AE4
  c->r[3]=c->r[31]+0x0000002Cu; // 801C2AE8
  c->lr=0x801C2AF0u; f_80154DD0(c); // 801C2AEC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C2AF0
  c->r[3]=c->r[31]+0x00000010u; // 801C2AF4
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C2AF8
  c->lr=0x801C2B00u; f_801BA5E0(c); // 801C2AFC
L_801C2B00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2B00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2B04
  c->lr=c->r[0]; // 801C2B08
  c->r[1]=c->r[1]+0x00000020u; // 801C2B0C
  return; // 801C2B10
}

// fn_801C2B20
void f_801C2B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2B20
  c->r[0]=c->lr; // 801C2B24
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2B28
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2B2C
  {uint32_t ea=c->r[2]+0xFFFFA714u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2B30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2B34
  c->r[31]=0u+0x803A0000u; // 801C2B38
  fcmp(c,0,c->f[1],c->f[0]); // 801C2B3C
  c->r[31]=c->r[31]+0xFFFFDB60u; // 801C2B40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2B44
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2B48
  c->r[29]=c->r[4]|c->r[4]; // 801C2B4C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C2B50
  c->r[28]=c->r[3]|c->r[3]; // 801C2B54
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2B58
  if (crb(c,2)) { goto L_801C2B74; } // 801C2B5C
  c->r[3]=c->r[31]+0x00000000u; // 801C2B60
  c->r[5]=c->r[31]+0x00000054u; // 801C2B64
  c->r[4]=0u+0x000000B0u; // 801C2B68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2B6C
  c->lr=0x801C2B74u; f_80212260(c); // 801C2B70
L_801C2B74:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2B74
  {uint32_t ea=c->r[2]+0xFFFFA714u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2B78
  fcmp(c,0,c->f[1],c->f[0]); // 801C2B7C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2B80
  if (crb(c,2)) { goto L_801C2B9C; } // 801C2B84
  c->r[3]=c->r[31]+0x00000000u; // 801C2B88
  c->r[5]=c->r[31]+0x0000008Cu; // 801C2B8C
  c->r[4]=0u+0x000000B1u; // 801C2B90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2B94
  c->lr=0x801C2B9Cu; f_80212260(c); // 801C2B98
L_801C2B9C:;
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2B9C
  c->r[0]=0u+0x00000000u; // 801C2BA0
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2BA4
  fcmp(c,0,c->f[1],c->f[0]); // 801C2BA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2BAC
  if (!crb(c,2)) { goto L_801C2BC8; } // 801C2BB0
  {uint32_t ea=c->r[2]+0xFFFFA71Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2BB4
  fcmp(c,0,c->f[1],c->f[0]); // 801C2BB8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2BBC
  if (!crb(c,2)) { goto L_801C2BC8; } // 801C2BC0
  c->r[0]=0u+0x00000001u; // 801C2BC4
L_801C2BC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C2BC8
  if (!crb(c,2)) { goto L_801C2BF0; } // 801C2BCC
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2BD0
  c->r[3]=c->r[31]+0x00000000u; // 801C2BD4
  {uint32_t ea=c->r[2]+0xFFFFA720u; c->f[2]=RF64(ea);} // 801C2BD8
  c->r[5]=c->r[31]+0x000000BCu; // 801C2BDC
  {uint32_t ea=c->r[2]+0xFFFFA728u; c->f[3]=RF64(ea);} // 801C2BE0
  c->r[4]=0u+0x000000B2u; // 801C2BE4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C2BE8
  c->lr=0x801C2BF0u; f_80212260(c); // 801C2BEC
L_801C2BF0:;
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2BF0
  c->r[0]=0u+0x00000000u; // 801C2BF4
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2BF8
  fcmp(c,0,c->f[1],c->f[0]); // 801C2BFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2C00
  if (!crb(c,2)) { goto L_801C2C1C; } // 801C2C04
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2C08
  fcmp(c,0,c->f[1],c->f[0]); // 801C2C0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2C10
  if (!crb(c,2)) { goto L_801C2C1C; } // 801C2C14
  c->r[0]=0u+0x00000001u; // 801C2C18
L_801C2C1C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C2C1C
  if (!crb(c,2)) { goto L_801C2C44; } // 801C2C20
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2C24
  c->r[3]=c->r[31]+0x00000000u; // 801C2C28
  {uint32_t ea=c->r[2]+0xFFFFA720u; c->f[2]=RF64(ea);} // 801C2C2C
  c->r[5]=c->r[31]+0x0000010Cu; // 801C2C30
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[3]=RF64(ea);} // 801C2C34
  c->r[4]=0u+0x000000B3u; // 801C2C38
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C2C3C
  c->lr=0x801C2C44u; f_80212260(c); // 801C2C40
L_801C2C44:;
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2C44
  c->r[0]=0u+0x00000000u; // 801C2C48
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2C4C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2C50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C2C54
  if (!crb(c,2)) { goto L_801C2C70; } // 801C2C58
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2C5C
  fcmp(c,0,c->f[1],c->f[0]); // 801C2C60
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C2C64
  if (!crb(c,2)) { goto L_801C2C70; } // 801C2C68
  c->r[0]=0u+0x00000001u; // 801C2C6C
L_801C2C70:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C2C70
  if (!crb(c,2)) { goto L_801C2C98; } // 801C2C74
  {uint32_t ea=c->r[29]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2C78
  c->r[3]=c->r[31]+0x00000000u; // 801C2C7C
  {uint32_t ea=c->r[2]+0xFFFFA720u; c->f[2]=RF64(ea);} // 801C2C80
  c->r[5]=c->r[31]+0x00000150u; // 801C2C84
  {uint32_t ea=c->r[2]+0xFFFFA730u; c->f[3]=RF64(ea);} // 801C2C88
  c->r[4]=0u+0x000000B4u; // 801C2C8C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C2C90
  c->lr=0x801C2C98u; f_80212260(c); // 801C2C94
L_801C2C98:;
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2C98
  {uint32_t ea=c->r[2]+0xFFFFA714u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C2C9C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C2CA0
  {uint32_t ea=c->r[29]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C2CA4
  fcmp(c,0,c->f[1],c->f[5]); // 801C2CA8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2CAC
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2CB0
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[4]);} // 801C2CB4
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[3]);} // 801C2CB8
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 801C2CBC
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[1]);} // 801C2CC0
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 801C2CC4
  if (!crb(c,0)) { goto L_801C2CD0; } // 801C2CC8
  goto L_801C2CD4; // 801C2CCC
L_801C2CD0:;
  c->f[5]=c->f[1]; // 801C2CD0
L_801C2CD4:;
  {uint32_t ea=c->r[28]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2CD4
  fcmp(c,0,c->f[5],c->f[0]); // 801C2CD8
  c->r[0]=c->cr; // 801C2CDC
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2CE0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2CE4
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801C2CE8
  {uint32_t ea=c->r[28]+0x00000064u; WF32(ea,c->f[5]);} // 801C2CEC
  c->r[30]=c->r[0]^0x00000001u; // 801C2CF0
  fcmp(c,0,c->f[0],c->f[1]); // 801C2CF4
  if (!crb(c,1)) { goto L_801C2D00; } // 801C2CF8
  goto L_801C2D14; // 801C2CFC
L_801C2D00:;
  {uint32_t ea=c->r[2]+0xFFFFA714u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2D00
  fcmp(c,0,c->f[0],c->f[1]); // 801C2D04
  if (!crb(c,0)) { goto L_801C2D10; } // 801C2D08
  goto L_801C2D14; // 801C2D0C
L_801C2D10:;
  c->f[1]=c->f[0]; // 801C2D10
L_801C2D14:;
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2D14
  {uint32_t ea=c->r[2]+0xFFFFA71Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2D18
  {uint32_t ea=c->r[28]+0x00000068u; WF32(ea,c->f[1]);} // 801C2D1C
  fcmp(c,0,c->f[0],c->f[2]); // 801C2D20
  if (!crb(c,1)) { goto L_801C2D2C; } // 801C2D24
  goto L_801C2D40; // 801C2D28
L_801C2D2C:;
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2D2C
  fcmp(c,0,c->f[0],c->f[2]); // 801C2D30
  if (!crb(c,0)) { goto L_801C2D3C; } // 801C2D34
  goto L_801C2D40; // 801C2D38
L_801C2D3C:;
  c->f[2]=c->f[0]; // 801C2D3C
L_801C2D40:;
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2D40
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2D44
  {uint32_t ea=c->r[28]+0x0000006Cu; WF32(ea,c->f[2]);} // 801C2D48
  fcmp(c,0,c->f[0],c->f[1]); // 801C2D4C
  if (!crb(c,1)) { goto L_801C2D58; } // 801C2D50
  goto L_801C2D6C; // 801C2D54
L_801C2D58:;
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2D58
  fcmp(c,0,c->f[0],c->f[1]); // 801C2D5C
  if (!crb(c,0)) { goto L_801C2D68; } // 801C2D60
  goto L_801C2D6C; // 801C2D64
L_801C2D68:;
  c->f[1]=c->f[0]; // 801C2D68
L_801C2D6C:;
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2D6C
  {uint32_t ea=c->r[2]+0xFFFFA710u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2D70
  {uint32_t ea=c->r[28]+0x00000070u; WF32(ea,c->f[1]);} // 801C2D74
  fcmp(c,0,c->f[0],c->f[2]); // 801C2D78
  if (!crb(c,1)) { goto L_801C2D84; } // 801C2D7C
  goto L_801C2D98; // 801C2D80
L_801C2D84:;
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2D84
  fcmp(c,0,c->f[0],c->f[2]); // 801C2D88
  if (!crb(c,0)) { goto L_801C2D94; } // 801C2D8C
  goto L_801C2D98; // 801C2D90
L_801C2D94:;
  c->f[2]=c->f[0]; // 801C2D94
L_801C2D98:;
  c->r[0]=R8(c->r[28]+0x0000000Cu); // 801C2D98
  c->r[31]=0u+0x00000000u; // 801C2D9C
  {uint32_t ea=c->r[2]+0xFFFFA718u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2DA0
  cmps(c,0,(int32_t)c->r[0],0); // 801C2DA4
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[2]);} // 801C2DA8
  W32(c->r[28]+0x00000074u,c->r[31]); // 801C2DAC
  W32(c->r[28]+0x00000078u,c->r[31]); // 801C2DB0
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[0]);} // 801C2DB4
  if (!crb(c,2)) { goto L_801C2DC4; } // 801C2DB8
  c->r[3]=0u+0x00000001u; // 801C2DBC
  goto L_801C2E4C; // 801C2DC0
L_801C2DC4:;
  c->r[3]=c->r[28]+0x0000002Cu; // 801C2DC4
  c->lr=0x801C2DCCu; f_80154830(c); // 801C2DC8
  c->r[4]=R32(c->r[28]+0x00000010u); // 801C2DCC
  c->r[0]=c->r[3]+0x00000087u; // 801C2DD0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2DD4
  cmps(c,0,(int32_t)c->r[4],0); // 801C2DD8
  if (!crb(c,2)) { goto L_801C2DE4; } // 801C2DDC
  goto L_801C2DEC; // 801C2DE0
L_801C2DE4:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C2DE4
  c->r[31]=c->r[0]-c->r[4]; // 801C2DE8
L_801C2DEC:;
  cmpu(c,0,c->r[3],c->r[31]); // 801C2DEC
  if (!crb(c,1)) { goto L_801C2DFC; } // 801C2DF0
  c->r[3]=0u+0x00000000u; // 801C2DF4
  goto L_801C2E4C; // 801C2DF8
L_801C2DFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C2DFC
  if (crb(c,2)) { goto L_801C2E34; } // 801C2E00
  c->r[3]=c->r[28]+0x00000010u; // 801C2E04
  c->r[4]=c->r[1]+0x0000000Cu; // 801C2E08
  c->r[5]=c->r[1]+0x00000008u; // 801C2E0C
  c->lr=0x801C2E14u; f_801BA580(c); // 801C2E10
  c->r[3]=c->r[28]+0x0000002Cu; // 801C2E14
  c->lr=0x801C2E1Cu; f_80154B30(c); // 801C2E18
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C2E1C
  c->r[30]=c->r[3]|c->r[3]; // 801C2E20
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C2E24
  c->r[3]=c->r[28]+0x00000010u; // 801C2E28
  c->lr=0x801C2E30u; f_801BA5E0(c); // 801C2E2C
  goto L_801C2E40; // 801C2E30
L_801C2E34:;
  c->r[3]=c->r[28]+0x0000002Cu; // 801C2E34
  c->lr=0x801C2E3Cu; f_80154CC0(c); // 801C2E38
  c->r[30]=c->r[3]|c->r[3]; // 801C2E3C
L_801C2E40:;
  c->r[0]=0u-c->r[30]; // 801C2E40
  c->r[0]=c->r[0]|c->r[30]; // 801C2E44
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C2E48
L_801C2E4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2E4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2E50
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2E54
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2E58
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C2E5C
  c->lr=c->r[0]; // 801C2E60
  c->r[1]=c->r[1]+0x00000020u; // 801C2E64
  return; // 801C2E68
}

// fn_801C2E70
void f_801C2E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2E70
  c->r[0]=c->lr; // 801C2E74
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C2E78
  c->r[11]=c->r[1]+0x00000030u; // 801C2E7C
  c->lr=0x801C2E84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C2E80
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C2E84
  c->r[31]=0u+0x803A0000u; // 801C2E88
  c->r[27]=c->r[3]|c->r[3]; // 801C2E8C
  c->r[28]=c->r[5]|c->r[5]; // 801C2E90
  cmps(c,0,(int32_t)c->r[0],0); // 801C2E94
  c->r[29]=c->r[6]|c->r[6]; // 801C2E98
  c->r[30]=c->r[7]|c->r[7]; // 801C2E9C
  c->r[31]=c->r[31]+0xFFFFDB60u; // 801C2EA0
  if (crb(c,2)) { goto L_801C2F28; } // 801C2EA4
  cmps(c,0,(int32_t)c->r[8],2); // 801C2EA8
  if (crb(c,2)) { goto L_801C2F28; } // 801C2EAC
  cmps(c,0,(int32_t)c->r[4],3); // 801C2EB0
  if (!crb(c,0)) { goto L_801C2ECC; } // 801C2EB4
  c->r[3]=c->r[31]+0x00000000u; // 801C2EB8
  c->r[5]=c->r[31]+0x0000019Cu; // 801C2EBC
  c->r[4]=0u+0x00000104u; // 801C2EC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2EC4
  c->lr=0x801C2ECCu; f_80212260(c); // 801C2EC8
L_801C2ECC:;
  cmpu(c,0,c->r[29],0x00000180u); // 801C2ECC
  if (crb(c,2)) { goto L_801C2EE8; } // 801C2ED0
  c->r[3]=c->r[31]+0x00000000u; // 801C2ED4
  c->r[5]=c->r[31]+0x000001C4u; // 801C2ED8
  c->r[4]=0u+0x00000105u; // 801C2EDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2EE0
  c->lr=0x801C2EE8u; f_80212260(c); // 801C2EE4
L_801C2EE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C2EE8
  if (crb(c,2)) { goto L_801C2F04; } // 801C2EEC
  c->r[3]=c->r[31]+0x00000000u; // 801C2EF0
  c->r[5]=c->r[31]+0x000001F8u; // 801C2EF4
  c->r[4]=0u+0x00000106u; // 801C2EF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C2EFC
  c->lr=0x801C2F04u; f_80212260(c); // 801C2F00
L_801C2F04:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801C2F04
  c->r[3]=c->r[1]+0x00000008u; // 801C2F08
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C2F0C
  c->r[4]=c->r[27]+0x0000002Cu; // 801C2F10
  c->r[0]=R32(c->r[28]+0x00000004u); // 801C2F14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C2F18
  c->r[0]=R32(c->r[28]+0x00000008u); // 801C2F1C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C2F20
  c->lr=0x801C2F28u; f_80154E80(c); // 801C2F24
L_801C2F28:;
  c->r[11]=c->r[1]+0x00000030u; // 801C2F28
  c->lr=0x801C2F30u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C2F2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C2F30
  c->lr=c->r[0]; // 801C2F34
  c->r[1]=c->r[1]+0x00000030u; // 801C2F38
  return; // 801C2F3C
}

// fn_801C2F40
void f_801C2F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2F40
  c->r[0]=c->lr; // 801C2F44
  c->r[5]=0u+0x803A0000u; // 801C2F48
  {uint32_t ea=c->r[2]+0xFFFFA738u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C2F4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C2F50
  c->r[0]=0u+0x00000000u; // 801C2F54
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C2F58
  c->r[5]=c->r[5]+0xFFFFE040u; // 801C2F5C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C2F60
  c->r[31]=c->r[3]|c->r[3]; // 801C2F64
  {uint32_t ea=c->r[2]+0xFFFFA73Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C2F68
  c->r[4]=c->r[1]+0x00000008u; // 801C2F6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C2F70
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C2F74
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C2F78
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C2F7C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C2F80
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C2F84
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 801C2F88
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801C2F8C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801C2F90
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 801C2F94
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C2F98
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 801C2F9C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801C2FA0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801C2FA4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801C2FA8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801C2FAC
  c->lr=0x801C2FB4u; f_801C3250(c); // 801C2FB0
  c->r[3]=c->r[31]|c->r[31]; // 801C2FB4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C2FB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C2FBC
  c->lr=c->r[0]; // 801C2FC0
  c->r[1]=c->r[1]+0x00000030u; // 801C2FC4
  return; // 801C2FC8
}

// fn_801C2FD0
void f_801C2FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2FD0
  c->r[0]=c->lr; // 801C2FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C2FD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C2FDC
  c->r[31]=c->r[3]|c->r[3]; // 801C2FE0
  c->r[3]=c->r[3]+0x00000030u; // 801C2FE4
  c->lr=0x801C2FECu; f_80154830(c); // 801C2FE8
  c->r[0]=c->r[3]+0x00000087u; // 801C2FEC
  c->r[3]=c->r[31]+0x00000088u; // 801C2FF0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C2FF4
  c->lr=0x801C2FFCu; f_80155300(c); // 801C2FF8
  c->r[0]=c->r[3]+0x00000087u; // 801C2FFC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C3000
  cmpu(c,0,c->r[3],c->r[31]); // 801C3004
  if (!crb(c,0)) { goto L_801C3010; } // 801C3008
  c->r[3]=c->r[31]|c->r[31]; // 801C300C
L_801C3010:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3010
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3014
  c->lr=c->r[0]; // 801C3018
  c->r[1]=c->r[1]+0x00000010u; // 801C301C
  return; // 801C3020
}

// fn_801C3030
void f_801C3030(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C3030
  f_801BA4C0(c); return; // 801C3034
}

// fn_801C3040
void f_801C3040(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C3040
  f_801BA530(c); return; // 801C3044
}

// fn_801C3050
void f_801C3050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3050
  c->r[0]=c->lr; // 801C3054
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C305C
  c->r[31]=c->r[3]|c->r[3]; // 801C3060
  c->r[3]=c->r[3]+0x00000030u; // 801C3064
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3068
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C306C
  c->lr=0x801C3074u; f_80154830(c); // 801C3070
  c->r[0]=c->r[3]+0x00000087u; // 801C3074
  c->r[3]=c->r[31]+0x00000088u; // 801C3078
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C307C
  c->lr=0x801C3084u; f_80155300(c); // 801C3080
  c->r[0]=c->r[3]+0x00000087u; // 801C3084
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C3088
  cmpu(c,0,c->r[3],c->r[30]); // 801C308C
  if (!crb(c,0)) { goto L_801C3098; } // 801C3090
  c->r[3]=c->r[30]|c->r[30]; // 801C3094
L_801C3098:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C3098
  cmps(c,0,(int32_t)c->r[4],0); // 801C309C
  if (!crb(c,2)) { goto L_801C30AC; } // 801C30A0
  c->r[0]=0u+0x00000000u; // 801C30A4
  goto L_801C30B4; // 801C30A8
L_801C30AC:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C30AC
  c->r[0]=c->r[0]-c->r[4]; // 801C30B0
L_801C30B4:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C30B4
  if (!crb(c,1)) { goto L_801C30C4; } // 801C30B8
  c->r[3]=0u+0x00000000u; // 801C30BC
  goto L_801C31A8; // 801C30C0
L_801C30C4:;
  c->lr=0x801C30C8u; f_801B4F50(c); // 801C30C4
  c->lr=0x801C30CCu; f_801B58C0(c); // 801C30C8
  cmps(c,0,(int32_t)c->r[3],2); // 801C30CC
  if (!crb(c,2)) { goto L_801C3120; } // 801C30D0
  c->r[0]=0u+0x00000001u; // 801C30D4
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C30D8
  c->r[3]=c->r[31]+0x00000014u; // 801C30DC
  c->r[4]=c->r[1]+0x0000000Cu; // 801C30E0
  c->r[5]=c->r[1]+0x00000008u; // 801C30E4
  c->lr=0x801C30ECu; f_801BA580(c); // 801C30E8
  c->r[3]=c->r[31]+0x00000088u; // 801C30EC
  c->lr=0x801C30F4u; f_80155330(c); // 801C30F0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C30F4
  c->r[30]=c->r[3]|c->r[3]; // 801C30F8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C30FC
  c->r[3]=c->r[31]+0x00000014u; // 801C3100
  c->lr=0x801C3108u; f_801BA5E0(c); // 801C3104
  c->r[29]=c->r[3]|c->r[3]; // 801C3108
  c->r[3]=c->r[31]+0x00000088u; // 801C310C
  c->lr=0x801C3114u; f_80155300(c); // 801C3110
  c->r[0]=c->r[3]+0x00000087u; // 801C3114
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C3118
  goto L_801C3168; // 801C311C
L_801C3120:;
  c->r[0]=0u+0x00000000u; // 801C3120
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C3124
  c->r[3]=c->r[31]+0x00000014u; // 801C3128
  c->r[4]=c->r[1]+0x0000000Cu; // 801C312C
  c->r[5]=c->r[1]+0x00000008u; // 801C3130
  c->lr=0x801C3138u; f_801BA580(c); // 801C3134
  c->r[3]=c->r[31]+0x00000030u; // 801C3138
  c->lr=0x801C3140u; f_80154860(c); // 801C313C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C3140
  c->r[30]=c->r[3]|c->r[3]; // 801C3144
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C3148
  c->r[3]=c->r[31]+0x00000014u; // 801C314C
  c->lr=0x801C3154u; f_801BA5E0(c); // 801C3150
  c->r[29]=c->r[3]|c->r[3]; // 801C3154
  c->r[3]=c->r[31]+0x00000030u; // 801C3158
  c->lr=0x801C3160u; f_80154830(c); // 801C315C
  c->r[0]=c->r[3]+0x00000087u; // 801C3160
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C3164
L_801C3168:;
  c->r[0]=c->r[29]+0x00000087u; // 801C3168
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C316C
  cmpu(c,0,c->r[7],c->r[6]); // 801C3170
  if (crb(c,2)) { goto L_801C3194; } // 801C3174
  c->r[3]=0u+0x803A0000u; // 801C3178
  c->r[5]=0u+0x803A0000u; // 801C317C
  c->r[3]=c->r[3]+0xFFFFDDB8u; // 801C3180
  c->r[4]=0u+0x000000AEu; // 801C3184
  c->r[5]=c->r[5]+0xFFFFDDCCu; // 801C3188
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C318C
  c->lr=0x801C3194u; f_80212300(c); // 801C3190
L_801C3194:;
  c->r[0]=0u-c->r[30]; // 801C3194
  c->r[3]=0u+0x00000001u; // 801C3198
  c->r[0]=c->r[0]|c->r[30]; // 801C319C
  W8(c->r[31]+0x0000000Cu,c->r[3]); // 801C31A0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C31A4
L_801C31A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C31A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C31AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C31B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C31B4
  c->lr=c->r[0]; // 801C31B8
  c->r[1]=c->r[1]+0x00000020u; // 801C31BC
  return; // 801C31C0
}

// fn_801C31D0
void f_801C31D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C31D0
  c->r[0]=c->lr; // 801C31D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C31D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C31DC
  c->r[31]=c->r[3]|c->r[3]; // 801C31E0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C31E4
  cmps(c,0,(int32_t)c->r[0],0); // 801C31E8
  if (crb(c,2)) { goto L_801C3238; } // 801C31EC
  c->r[0]=0u+0x00000000u; // 801C31F0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C31F4
  c->r[3]=c->r[3]+0x00000014u; // 801C31F8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C31FC
  c->r[5]=c->r[1]+0x00000008u; // 801C3200
  c->lr=0x801C3208u; f_801BA580(c); // 801C3204
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C3208
  cmps(c,0,(int32_t)c->r[0],1); // 801C320C
  if (!crb(c,2)) { goto L_801C3220; } // 801C3210
  c->r[3]=c->r[31]+0x00000088u; // 801C3214
  c->lr=0x801C321Cu; f_80155760(c); // 801C3218
  goto L_801C3228; // 801C321C
L_801C3220:;
  c->r[3]=c->r[31]+0x00000030u; // 801C3220
  c->lr=0x801C3228u; f_80154DD0(c); // 801C3224
L_801C3228:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C3228
  c->r[3]=c->r[31]+0x00000014u; // 801C322C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C3230
  c->lr=0x801C3238u; f_801BA5E0(c); // 801C3234
L_801C3238:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3238
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C323C
  c->lr=c->r[0]; // 801C3240
  c->r[1]=c->r[1]+0x00000020u; // 801C3244
  return; // 801C3248
}

// fn_801C3250
void f_801C3250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3250
  c->r[0]=c->lr; // 801C3254
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3258
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C325C
  {uint32_t ea=c->r[2]+0xFFFFA744u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3260
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3264
  c->r[31]=c->r[3]|c->r[3]; // 801C3268
  fcmp(c,0,c->f[1],c->f[0]); // 801C326C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3270
  c->r[30]=0u+0x803A0000u; // 801C3274
  c->r[30]=c->r[30]+0xFFFFDDB8u; // 801C3278
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C327C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C3280
  c->r[28]=c->r[4]|c->r[4]; // 801C3284
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3288
  if (crb(c,2)) { goto L_801C32A4; } // 801C328C
  c->r[3]=c->r[30]+0x00000000u; // 801C3290
  c->r[5]=c->r[30]+0x00000058u; // 801C3294
  c->r[4]=0u+0x000000DCu; // 801C3298
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C329C
  c->lr=0x801C32A4u; f_80212260(c); // 801C32A0
L_801C32A4:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C32A4
  {uint32_t ea=c->r[2]+0xFFFFA744u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C32A8
  fcmp(c,0,c->f[1],c->f[0]); // 801C32AC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C32B0
  if (crb(c,2)) { goto L_801C32CC; } // 801C32B4
  c->r[3]=c->r[30]+0x00000000u; // 801C32B8
  c->r[5]=c->r[30]+0x00000090u; // 801C32BC
  c->r[4]=0u+0x000000DDu; // 801C32C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C32C4
  c->lr=0x801C32CCu; f_80212260(c); // 801C32C8
L_801C32CC:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C32CC
  c->r[0]=0u+0x00000000u; // 801C32D0
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C32D4
  fcmp(c,0,c->f[1],c->f[0]); // 801C32D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C32DC
  if (!crb(c,2)) { goto L_801C32F8; } // 801C32E0
  {uint32_t ea=c->r[2]+0xFFFFA74Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C32E4
  fcmp(c,0,c->f[1],c->f[0]); // 801C32E8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C32EC
  if (!crb(c,2)) { goto L_801C32F8; } // 801C32F0
  c->r[0]=0u+0x00000001u; // 801C32F4
L_801C32F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C32F8
  if (!crb(c,2)) { goto L_801C3320; } // 801C32FC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3300
  c->r[3]=c->r[30]+0x00000000u; // 801C3304
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[2]=RF64(ea);} // 801C3308
  c->r[5]=c->r[30]+0x000000C0u; // 801C330C
  {uint32_t ea=c->r[2]+0xFFFFA758u; c->f[3]=RF64(ea);} // 801C3310
  c->r[4]=0u+0x000000DEu; // 801C3314
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C3318
  c->lr=0x801C3320u; f_80212260(c); // 801C331C
L_801C3320:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3320
  c->r[0]=0u+0x00000000u; // 801C3324
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3328
  fcmp(c,0,c->f[1],c->f[0]); // 801C332C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3330
  if (!crb(c,2)) { goto L_801C334C; } // 801C3334
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3338
  fcmp(c,0,c->f[1],c->f[0]); // 801C333C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3340
  if (!crb(c,2)) { goto L_801C334C; } // 801C3344
  c->r[0]=0u+0x00000001u; // 801C3348
L_801C334C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C334C
  if (!crb(c,2)) { goto L_801C3374; } // 801C3350
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3354
  c->r[3]=c->r[30]+0x00000000u; // 801C3358
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[2]=RF64(ea);} // 801C335C
  c->r[5]=c->r[30]+0x00000110u; // 801C3360
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[3]=RF64(ea);} // 801C3364
  c->r[4]=0u+0x000000DFu; // 801C3368
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C336C
  c->lr=0x801C3374u; f_80212260(c); // 801C3370
L_801C3374:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3374
  c->r[0]=0u+0x00000000u; // 801C3378
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C337C
  fcmp(c,0,c->f[1],c->f[0]); // 801C3380
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3384
  if (!crb(c,2)) { goto L_801C33A0; } // 801C3388
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C338C
  fcmp(c,0,c->f[1],c->f[0]); // 801C3390
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3394
  if (!crb(c,2)) { goto L_801C33A0; } // 801C3398
  c->r[0]=0u+0x00000001u; // 801C339C
L_801C33A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C33A0
  if (!crb(c,2)) { goto L_801C33C8; } // 801C33A4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C33A8
  c->r[3]=c->r[30]+0x00000000u; // 801C33AC
  {uint32_t ea=c->r[2]+0xFFFFA750u; c->f[2]=RF64(ea);} // 801C33B0
  c->r[5]=c->r[30]+0x00000154u; // 801C33B4
  {uint32_t ea=c->r[2]+0xFFFFA760u; c->f[3]=RF64(ea);} // 801C33B8
  c->r[4]=0u+0x000000E0u; // 801C33BC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C33C0
  c->lr=0x801C33C8u; f_80212260(c); // 801C33C4
L_801C33C8:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C33C8
  {uint32_t ea=c->r[2]+0xFFFFA744u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C33CC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C33D0
  {uint32_t ea=c->r[28]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C33D4
  fcmp(c,0,c->f[1],c->f[5]); // 801C33D8
  {uint32_t ea=c->r[28]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C33DC
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C33E0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[4]);} // 801C33E4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 801C33E8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 801C33EC
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 801C33F0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C33F4
  if (!crb(c,0)) { goto L_801C3400; } // 801C33F8
  goto L_801C3404; // 801C33FC
L_801C3400:;
  c->f[5]=c->f[1]; // 801C3400
L_801C3404:;
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3404
  fcmp(c,0,c->f[5],c->f[0]); // 801C3408
  c->r[0]=c->cr; // 801C340C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3410
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3414
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801C3418
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[5]);} // 801C341C
  c->r[29]=c->r[0]^0x00000001u; // 801C3420
  fcmp(c,0,c->f[0],c->f[1]); // 801C3424
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[5]);} // 801C3428
  if (!crb(c,1)) { goto L_801C3434; } // 801C342C
  goto L_801C3448; // 801C3430
L_801C3434:;
  {uint32_t ea=c->r[2]+0xFFFFA744u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3434
  fcmp(c,0,c->f[0],c->f[1]); // 801C3438
  if (!crb(c,0)) { goto L_801C3444; } // 801C343C
  goto L_801C3448; // 801C3440
L_801C3444:;
  c->f[1]=c->f[0]; // 801C3444
L_801C3448:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3448
  {uint32_t ea=c->r[2]+0xFFFFA74Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C344C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[1]);} // 801C3450
  fcmp(c,0,c->f[0],c->f[2]); // 801C3454
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[1]);} // 801C3458
  if (!crb(c,1)) { goto L_801C3464; } // 801C345C
  goto L_801C3478; // 801C3460
L_801C3464:;
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3464
  fcmp(c,0,c->f[0],c->f[2]); // 801C3468
  if (!crb(c,0)) { goto L_801C3474; } // 801C346C
  goto L_801C3478; // 801C3470
L_801C3474:;
  c->f[2]=c->f[0]; // 801C3474
L_801C3478:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3478
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C347C
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[2]);} // 801C3480
  fcmp(c,0,c->f[0],c->f[1]); // 801C3484
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[2]);} // 801C3488
  if (!crb(c,1)) { goto L_801C3494; } // 801C348C
  goto L_801C34A8; // 801C3490
L_801C3494:;
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3494
  fcmp(c,0,c->f[0],c->f[1]); // 801C3498
  if (!crb(c,0)) { goto L_801C34A4; } // 801C349C
  goto L_801C34A8; // 801C34A0
L_801C34A4:;
  c->f[1]=c->f[0]; // 801C34A4
L_801C34A8:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C34A8
  {uint32_t ea=c->r[2]+0xFFFFA740u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C34AC
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 801C34B0
  fcmp(c,0,c->f[0],c->f[2]); // 801C34B4
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 801C34B8
  if (!crb(c,1)) { goto L_801C34C4; } // 801C34BC
  goto L_801C34D8; // 801C34C0
L_801C34C4:;
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C34C4
  fcmp(c,0,c->f[0],c->f[2]); // 801C34C8
  if (!crb(c,0)) { goto L_801C34D4; } // 801C34CC
  goto L_801C34D8; // 801C34D0
L_801C34D4:;
  c->f[2]=c->f[0]; // 801C34D4
L_801C34D8:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801C34D8
  c->r[3]=0u+0x00000000u; // 801C34DC
  {uint32_t ea=c->r[2]+0xFFFFA748u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C34E0
  cmps(c,0,(int32_t)c->r[0],0); // 801C34E4
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[2]);} // 801C34E8
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[2]);} // 801C34EC
  W32(c->r[31]+0x00000078u,c->r[3]); // 801C34F0
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 801C34F4
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 801C34F8
  W32(c->r[31]+0x000000D8u,c->r[3]); // 801C34FC
  W32(c->r[31]+0x000000DCu,c->r[3]); // 801C3500
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[0]);} // 801C3504
  if (!crb(c,2)) { goto L_801C3514; } // 801C3508
  c->r[3]=0u+0x00000001u; // 801C350C
  goto L_801C35EC; // 801C3510
L_801C3514:;
  c->r[3]=c->r[31]+0x00000030u; // 801C3514
  c->lr=0x801C351Cu; f_80154830(c); // 801C3518
  c->r[0]=c->r[3]+0x00000087u; // 801C351C
  c->r[3]=c->r[31]+0x00000088u; // 801C3520
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C3524
  c->lr=0x801C352Cu; f_80155300(c); // 801C3528
  c->r[0]=c->r[3]+0x00000087u; // 801C352C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C3530
  cmpu(c,0,c->r[3],c->r[30]); // 801C3534
  if (!crb(c,0)) { goto L_801C3540; } // 801C3538
  c->r[3]=c->r[30]|c->r[30]; // 801C353C
L_801C3540:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C3540
  cmps(c,0,(int32_t)c->r[4],0); // 801C3544
  if (!crb(c,2)) { goto L_801C3554; } // 801C3548
  c->r[0]=0u+0x00000000u; // 801C354C
  goto L_801C355C; // 801C3550
L_801C3554:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C3554
  c->r[0]=c->r[0]-c->r[4]; // 801C3558
L_801C355C:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C355C
  if (!crb(c,1)) { goto L_801C356C; } // 801C3560
  c->r[3]=0u+0x00000000u; // 801C3564
  goto L_801C35EC; // 801C3568
L_801C356C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C356C
  if (crb(c,2)) { goto L_801C35BC; } // 801C3570
  c->r[3]=c->r[31]+0x00000014u; // 801C3574
  c->r[4]=c->r[1]+0x0000000Cu; // 801C3578
  c->r[5]=c->r[1]+0x00000008u; // 801C357C
  c->lr=0x801C3584u; f_801BA580(c); // 801C3580
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C3584
  cmps(c,0,(int32_t)c->r[0],1); // 801C3588
  if (!crb(c,2)) { goto L_801C359C; } // 801C358C
  c->r[3]=c->r[31]+0x00000088u; // 801C3590
  c->lr=0x801C3598u; f_80155560(c); // 801C3594
  goto L_801C35A4; // 801C3598
L_801C359C:;
  c->r[3]=c->r[31]+0x00000030u; // 801C359C
  c->lr=0x801C35A4u; f_80154B30(c); // 801C35A0
L_801C35A4:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C35A4
  c->r[29]=c->r[3]|c->r[3]; // 801C35A8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C35AC
  c->r[3]=c->r[31]+0x00000014u; // 801C35B0
  c->lr=0x801C35B8u; f_801BA5E0(c); // 801C35B4
  goto L_801C35E0; // 801C35B8
L_801C35BC:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C35BC
  cmps(c,0,(int32_t)c->r[0],1); // 801C35C0
  if (!crb(c,2)) { goto L_801C35D4; } // 801C35C4
  c->r[3]=c->r[31]+0x00000088u; // 801C35C8
  c->lr=0x801C35D0u; f_80155690(c); // 801C35CC
  goto L_801C35DC; // 801C35D0
L_801C35D4:;
  c->r[3]=c->r[31]+0x00000030u; // 801C35D4
  c->lr=0x801C35DCu; f_80154CC0(c); // 801C35D8
L_801C35DC:;
  c->r[29]=c->r[3]|c->r[3]; // 801C35DC
L_801C35E0:;
  c->r[0]=0u-c->r[29]; // 801C35E0
  c->r[0]=c->r[0]|c->r[29]; // 801C35E4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C35E8
L_801C35EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C35EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C35F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C35F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C35F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C35FC
  c->lr=c->r[0]; // 801C3600
  c->r[1]=c->r[1]+0x00000020u; // 801C3604
  return; // 801C3608
}

// fn_801C3610
void f_801C3610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3610
  c->r[0]=c->lr; // 801C3614
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C3618
  c->r[11]=c->r[1]+0x00000050u; // 801C361C
  c->lr=0x801C3624u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3620
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C3624
  c->r[31]=0u+0x803A0000u; // 801C3628
  c->r[25]=c->r[3]|c->r[3]; // 801C362C
  c->r[26]=c->r[4]|c->r[4]; // 801C3630
  cmps(c,0,(int32_t)c->r[0],0); // 801C3634
  c->r[27]=c->r[5]|c->r[5]; // 801C3638
  c->r[28]=c->r[6]|c->r[6]; // 801C363C
  c->r[29]=c->r[7]|c->r[7]; // 801C3640
  c->r[30]=c->r[8]|c->r[8]; // 801C3644
  c->r[31]=c->r[31]+0xFFFFDDB8u; // 801C3648
  if (crb(c,2)) { goto L_801C3754; } // 801C364C
  cmps(c,0,(int32_t)c->r[4],3); // 801C3650
  if (!crb(c,0)) { goto L_801C366C; } // 801C3654
  c->r[3]=c->r[31]+0x00000000u; // 801C3658
  c->r[5]=c->r[31]+0x000001A0u; // 801C365C
  c->r[4]=0u+0x00000133u; // 801C3660
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3664
  c->lr=0x801C366Cu; f_80212260(c); // 801C3668
L_801C366C:;
  cmpu(c,0,c->r[28],0x00000180u); // 801C366C
  if (crb(c,2)) { goto L_801C3688; } // 801C3670
  c->r[3]=c->r[31]+0x00000000u; // 801C3674
  c->r[5]=c->r[31]+0x000001C8u; // 801C3678
  c->r[4]=0u+0x00000134u; // 801C367C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3680
  c->lr=0x801C3688u; f_80212260(c); // 801C3684
L_801C3688:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C3688
  if (crb(c,2)) { goto L_801C36A4; } // 801C368C
  c->r[3]=c->r[31]+0x00000000u; // 801C3690
  c->r[5]=c->r[31]+0x000001FCu; // 801C3694
  c->r[4]=0u+0x00000135u; // 801C3698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C369C
  c->lr=0x801C36A4u; f_80212260(c); // 801C36A0
L_801C36A4:;
  c->r[3]=c->r[30]+0xFFFFFFFEu; // 801C36A4
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C36A8
  c->r[3]=cntlz(c->r[3]); // 801C36AC
  c->r[30]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C36B0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C36B4
  if (crb(c,2)) { goto L_801C36D0; } // 801C36B8
  c->r[3]=c->r[31]+0x00000000u; // 801C36BC
  c->r[5]=c->r[31]+0x00000234u; // 801C36C0
  c->r[4]=0u+0x00000137u; // 801C36C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C36C8
  c->lr=0x801C36D0u; f_80212260(c); // 801C36CC
L_801C36D0:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C36D0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C36D4
  if (!crb(c,2)) { goto L_801C3754; } // 801C36D8
  cmps(c,0,(int32_t)c->r[0],1); // 801C36DC
  if (!crb(c,2)) { goto L_801C3730; } // 801C36E0
  cmps(c,0,(int32_t)c->r[26],4); // 801C36E4
  if (!crb(c,0)) { goto L_801C3700; } // 801C36E8
  c->r[3]=c->r[31]+0x00000000u; // 801C36EC
  c->r[5]=c->r[31]+0x00000260u; // 801C36F0
  c->r[4]=0u+0x0000013Cu; // 801C36F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C36F8
  c->lr=0x801C3700u; f_80212260(c); // 801C36FC
L_801C3700:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C3700
  c->r[3]=c->r[1]+0x00000018u; // 801C3704
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C3708
  c->r[4]=c->r[25]+0x00000088u; // 801C370C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C3710
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C3714
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C3718
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C371C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801C3720
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3724
  c->lr=0x801C372Cu; f_801557F0(c); // 801C3728
  goto L_801C3754; // 801C372C
L_801C3730:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C3730
  c->r[3]=c->r[1]+0x00000008u; // 801C3734
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C3738
  c->r[4]=c->r[25]+0x00000030u; // 801C373C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C3740
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C3744
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C3748
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C374C
  c->lr=0x801C3754u; f_80154E80(c); // 801C3750
L_801C3754:;
  c->r[11]=c->r[1]+0x00000050u; // 801C3754
  c->lr=0x801C375Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C3758
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C375C
  c->lr=c->r[0]; // 801C3760
  c->r[1]=c->r[1]+0x00000050u; // 801C3764
  return; // 801C3768
}

// fn_801C3770
void f_801C3770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3770
  c->r[0]=c->lr; // 801C3774
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C377C
  c->r[31]=c->r[3]|c->r[3]; // 801C3780
  c->lr=0x801C3788u; f_801B4F50(c); // 801C3784
  c->lr=0x801C378Cu; f_801B58C0(c); // 801C3788
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801C378C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C3790
  c->r[3]=cntlz(c->r[3]); // 801C3794
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C3798
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801C379C
  if (crb(c,2)) { goto L_801C37CC; } // 801C37A0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C37A4
  c->r[3]=c->r[31]|c->r[31]; // 801C37A8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C37AC
  c->ctr=c->r[12]; // 801C37B0
  if (true) { c->lr=0x801C37B8u; dispatch(c,c->ctr); } // 801C37B4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C37B8
  c->r[3]=c->r[31]|c->r[31]; // 801C37BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C37C0
  c->ctr=c->r[12]; // 801C37C4
  if (true) { c->lr=0x801C37CCu; dispatch(c,c->ctr); } // 801C37C8
L_801C37CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C37CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C37D0
  c->lr=c->r[0]; // 801C37D4
  c->r[1]=c->r[1]+0x00000010u; // 801C37D8
  return; // 801C37DC
}

// fn_801C37E0
void f_801C37E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C37E0
  c->r[0]=c->lr; // 801C37E4
  c->r[5]=0u+0x803A0000u; // 801C37E8
  {uint32_t ea=c->r[2]+0xFFFFA768u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C37EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C37F0
  c->r[6]=0u+0x00000000u; // 801C37F4
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C37F8
  c->r[5]=c->r[5]+0xFFFFE3F0u; // 801C37FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C3800
  c->r[0]=0u+0x00000005u; // 801C3804
  {uint32_t ea=c->r[2]+0xFFFFA76Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3808
  c->r[31]=c->r[3]|c->r[3]; // 801C380C
  {uint32_t ea=c->r[2]+0xFFFFA770u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3810
  c->r[4]=c->r[1]+0x00000008u; // 801C3814
  {uint32_t ea=c->r[2]+0xFFFFA774u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3818
  {uint32_t ea=c->r[2]+0xFFFFA778u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C381C
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3820
  W32(c->r[3]+0x00000004u,c->r[6]); // 801C3824
  W32(c->r[3]+0x00000008u,c->r[6]); // 801C3828
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C382C
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801C3830
  W32(c->r[3]+0x00000010u,c->r[6]); // 801C3834
  W32(c->r[3]+0x00000014u,c->r[6]); // 801C3838
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[6]);} // 801C383C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[5]);} // 801C3840
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[4]);} // 801C3844
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[3]);} // 801C3848
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 801C384C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C3850
  W32(c->r[3]+0x00000030u,c->r[0]); // 801C3854
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[6]);} // 801C3858
  W32(c->r[3]+0x00000038u,c->r[6]); // 801C385C
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801C3860
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801C3864
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 801C3868
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 801C386C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 801C3870
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 801C3874
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 801C3878
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C387C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C3880
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 801C3884
  W32(c->r[1]+0x00000028u,c->r[6]); // 801C3888
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C388C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801C3890
  c->lr=0x801C3898u; f_801C3A70(c); // 801C3894
  c->r[3]=c->r[31]|c->r[31]; // 801C3898
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C389C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C38A0
  c->lr=c->r[0]; // 801C38A4
  c->r[1]=c->r[1]+0x00000040u; // 801C38A8
  return; // 801C38AC
}

// fn_801C38B0
void f_801C38B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C38B0
  c->r[0]=c->lr; // 801C38B4
  c->r[3]=c->r[3]+0x00000044u; // 801C38B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C38BC
  c->lr=0x801C38C4u; f_801526D0(c); // 801C38C0
  c->r[0]=c->r[3]+0x00000087u; // 801C38C4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C38C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C38CC
  c->lr=c->r[0]; // 801C38D0
  c->r[1]=c->r[1]+0x00000010u; // 801C38D4
  return; // 801C38D8
}

// fn_801C38E0
void f_801C38E0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C38E0
  f_801BA4C0(c); return; // 801C38E4
}

// fn_801C38F0
void f_801C38F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C38F0
  f_801BA530(c); return; // 801C38F4
}

// fn_801C3900
void f_801C3900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3900
  c->r[0]=c->lr; // 801C3904
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C390C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3910
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C3914
  c->r[29]=c->r[3]|c->r[3]; // 801C3918
  c->r[3]=c->r[3]+0x00000044u; // 801C391C
  c->lr=0x801C3924u; f_801526D0(c); // 801C3920
  c->r[4]=R32(c->r[29]+0x00000010u); // 801C3924
  c->r[0]=c->r[3]+0x00000087u; // 801C3928
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C392C
  cmps(c,0,(int32_t)c->r[4],0); // 801C3930
  if (!crb(c,2)) { goto L_801C3940; } // 801C3934
  c->r[0]=0u+0x00000000u; // 801C3938
  goto L_801C3948; // 801C393C
L_801C3940:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C3940
  c->r[0]=c->r[0]-c->r[4]; // 801C3944
L_801C3948:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C3948
  if (!crb(c,1)) { goto L_801C3958; } // 801C394C
  c->r[3]=0u+0x00000000u; // 801C3950
  goto L_801C39D8; // 801C3954
L_801C3958:;
  c->r[3]=c->r[29]+0x00000010u; // 801C3958
  c->r[4]=c->r[1]+0x0000000Cu; // 801C395C
  c->r[5]=c->r[1]+0x00000008u; // 801C3960
  c->lr=0x801C3968u; f_801BA580(c); // 801C3964
  c->r[3]=c->r[29]+0x00000044u; // 801C3968
  c->lr=0x801C3970u; f_80152760(c); // 801C396C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C3970
  c->r[30]=c->r[3]|c->r[3]; // 801C3974
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C3978
  c->r[3]=c->r[29]+0x00000010u; // 801C397C
  c->lr=0x801C3984u; f_801BA5E0(c); // 801C3980
  c->r[31]=c->r[3]|c->r[3]; // 801C3984
  c->r[3]=c->r[29]+0x00000044u; // 801C3988
  c->lr=0x801C3990u; f_801526D0(c); // 801C398C
  c->r[3]=c->r[3]+0x00000087u; // 801C3990
  c->r[0]=c->r[31]+0x00000087u; // 801C3994
  c->r[7]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801C3998
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C399C
  cmpu(c,0,c->r[7],c->r[6]); // 801C39A0
  if (crb(c,2)) { goto L_801C39C4; } // 801C39A4
  c->r[3]=0u+0x803A0000u; // 801C39A8
  c->r[5]=0u+0x803A0000u; // 801C39AC
  c->r[3]=c->r[3]+0xFFFFE068u; // 801C39B0
  c->r[4]=0u+0x0000008Fu; // 801C39B4
  c->r[5]=c->r[5]+0xFFFFE07Cu; // 801C39B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C39BC
  c->lr=0x801C39C4u; f_80212300(c); // 801C39C0
L_801C39C4:;
  c->r[0]=0u-c->r[30]; // 801C39C4
  c->r[3]=0u+0x00000001u; // 801C39C8
  c->r[0]=c->r[0]|c->r[30]; // 801C39CC
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 801C39D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C39D4
L_801C39D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C39D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C39DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C39E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C39E4
  c->lr=c->r[0]; // 801C39E8
  c->r[1]=c->r[1]+0x00000020u; // 801C39EC
  return; // 801C39F0
}

// fn_801C3A00
void f_801C3A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3A00
  c->r[0]=c->lr; // 801C3A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3A08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3A0C
  c->r[31]=c->r[3]|c->r[3]; // 801C3A10
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C3A14
  cmps(c,0,(int32_t)c->r[0],0); // 801C3A18
  if (crb(c,2)) { goto L_801C3A50; } // 801C3A1C
  c->r[0]=0u+0x00000000u; // 801C3A20
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C3A24
  c->r[3]=c->r[3]+0x00000010u; // 801C3A28
  c->r[4]=c->r[1]+0x0000000Cu; // 801C3A2C
  c->r[5]=c->r[1]+0x00000008u; // 801C3A30
  c->lr=0x801C3A38u; f_801BA580(c); // 801C3A34
  c->r[3]=c->r[31]+0x00000044u; // 801C3A38
  c->lr=0x801C3A40u; f_80152A90(c); // 801C3A3C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C3A40
  c->r[3]=c->r[31]+0x00000010u; // 801C3A44
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C3A48
  c->lr=0x801C3A50u; f_801BA5E0(c); // 801C3A4C
L_801C3A50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3A50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3A54
  c->lr=c->r[0]; // 801C3A58
  c->r[1]=c->r[1]+0x00000020u; // 801C3A5C
  return; // 801C3A60
}

// fn_801C3A70
void f_801C3A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3A70
  c->r[0]=c->lr; // 801C3A74
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3A78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3A7C
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3A80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3A84
  c->r[31]=c->r[3]|c->r[3]; // 801C3A88
  fcmp(c,0,c->f[1],c->f[0]); // 801C3A8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3A90
  c->r[30]=0u+0x803A0000u; // 801C3A94
  c->r[30]=c->r[30]+0xFFFFE068u; // 801C3A98
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C3A9C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C3AA0
  c->r[28]=c->r[4]|c->r[4]; // 801C3AA4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3AA8
  if (crb(c,2)) { goto L_801C3AC4; } // 801C3AAC
  c->r[3]=c->r[30]+0x00000000u; // 801C3AB0
  c->r[5]=c->r[30]+0x00000058u; // 801C3AB4
  c->r[4]=0u+0x000000B6u; // 801C3AB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3ABC
  c->lr=0x801C3AC4u; f_80212260(c); // 801C3AC0
L_801C3AC4:;
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3AC4
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3AC8
  fcmp(c,0,c->f[1],c->f[0]); // 801C3ACC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3AD0
  if (crb(c,2)) { goto L_801C3AEC; } // 801C3AD4
  c->r[3]=c->r[30]+0x00000000u; // 801C3AD8
  c->r[5]=c->r[30]+0x00000098u; // 801C3ADC
  c->r[4]=0u+0x000000B7u; // 801C3AE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3AE4
  c->lr=0x801C3AECu; f_80212260(c); // 801C3AE8
L_801C3AEC:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3AEC
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3AF0
  fcmp(c,0,c->f[1],c->f[0]); // 801C3AF4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3AF8
  if (crb(c,2)) { goto L_801C3B14; } // 801C3AFC
  c->r[3]=c->r[30]+0x00000000u; // 801C3B00
  c->r[5]=c->r[30]+0x000000E0u; // 801C3B04
  c->r[4]=0u+0x000000B8u; // 801C3B08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C3B0C
  c->lr=0x801C3B14u; f_80212260(c); // 801C3B10
L_801C3B14:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3B14
  c->r[0]=0u+0x00000000u; // 801C3B18
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3B1C
  fcmp(c,0,c->f[1],c->f[0]); // 801C3B20
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3B24
  if (!crb(c,2)) { goto L_801C3B40; } // 801C3B28
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3B2C
  fcmp(c,0,c->f[1],c->f[0]); // 801C3B30
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3B34
  if (!crb(c,2)) { goto L_801C3B40; } // 801C3B38
  c->r[0]=0u+0x00000001u; // 801C3B3C
L_801C3B40:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3B40
  if (!crb(c,2)) { goto L_801C3B68; } // 801C3B44
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3B48
  c->r[3]=c->r[30]+0x00000000u; // 801C3B4C
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[2]=RF64(ea);} // 801C3B50
  c->r[5]=c->r[30]+0x00000118u; // 801C3B54
  {uint32_t ea=c->r[2]+0xFFFFA790u; c->f[3]=RF64(ea);} // 801C3B58
  c->r[4]=0u+0x000000B9u; // 801C3B5C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C3B60
  c->lr=0x801C3B68u; f_80212260(c); // 801C3B64
L_801C3B68:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3B68
  c->r[0]=0u+0x00000000u; // 801C3B6C
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3B70
  fcmp(c,0,c->f[1],c->f[0]); // 801C3B74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3B78
  if (!crb(c,2)) { goto L_801C3B94; } // 801C3B7C
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3B80
  fcmp(c,0,c->f[1],c->f[0]); // 801C3B84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3B88
  if (!crb(c,2)) { goto L_801C3B94; } // 801C3B8C
  c->r[0]=0u+0x00000001u; // 801C3B90
L_801C3B94:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3B94
  if (!crb(c,2)) { goto L_801C3BBC; } // 801C3B98
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3B9C
  c->r[3]=c->r[30]+0x00000000u; // 801C3BA0
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[2]=RF64(ea);} // 801C3BA4
  c->r[5]=c->r[30]+0x0000016Cu; // 801C3BA8
  {uint32_t ea=c->r[2]+0xFFFFA790u; c->f[3]=RF64(ea);} // 801C3BAC
  c->r[4]=0u+0x000000BAu; // 801C3BB0
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C3BB4
  c->lr=0x801C3BBCu; f_80212260(c); // 801C3BB8
L_801C3BBC:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3BBC
  c->r[0]=0u+0x00000000u; // 801C3BC0
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3BC4
  fcmp(c,0,c->f[1],c->f[0]); // 801C3BC8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3BCC
  if (!crb(c,2)) { goto L_801C3BE8; } // 801C3BD0
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3BD4
  fcmp(c,0,c->f[1],c->f[0]); // 801C3BD8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3BDC
  if (!crb(c,2)) { goto L_801C3BE8; } // 801C3BE0
  c->r[0]=0u+0x00000001u; // 801C3BE4
L_801C3BE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3BE8
  if (!crb(c,2)) { goto L_801C3C10; } // 801C3BEC
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3BF0
  c->r[3]=c->r[30]+0x00000000u; // 801C3BF4
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[2]=RF64(ea);} // 801C3BF8
  c->r[5]=c->r[30]+0x000001B8u; // 801C3BFC
  {uint32_t ea=c->r[2]+0xFFFFA790u; c->f[3]=RF64(ea);} // 801C3C00
  c->r[4]=0u+0x000000BBu; // 801C3C04
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C3C08
  c->lr=0x801C3C10u; f_80212260(c); // 801C3C0C
L_801C3C10:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3C10
  c->r[0]=0u+0x00000000u; // 801C3C14
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3C18
  fcmp(c,0,c->f[1],c->f[0]); // 801C3C1C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3C20
  if (!crb(c,2)) { goto L_801C3C3C; } // 801C3C24
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3C28
  fcmp(c,0,c->f[1],c->f[0]); // 801C3C2C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3C30
  if (!crb(c,2)) { goto L_801C3C3C; } // 801C3C34
  c->r[0]=0u+0x00000001u; // 801C3C38
L_801C3C3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3C3C
  if (!crb(c,2)) { goto L_801C3C64; } // 801C3C40
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3C44
  c->r[3]=c->r[30]+0x00000000u; // 801C3C48
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[2]=RF64(ea);} // 801C3C4C
  c->r[5]=c->r[30]+0x00000208u; // 801C3C50
  {uint32_t ea=c->r[2]+0xFFFFA790u; c->f[3]=RF64(ea);} // 801C3C54
  c->r[4]=0u+0x000000BCu; // 801C3C58
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C3C5C
  c->lr=0x801C3C64u; f_80212260(c); // 801C3C60
L_801C3C64:;
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3C64
  c->r[0]=0u+0x00000000u; // 801C3C68
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3C6C
  fcmp(c,0,c->f[1],c->f[0]); // 801C3C70
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3C74
  if (!crb(c,2)) { goto L_801C3C90; } // 801C3C78
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3C7C
  fcmp(c,0,c->f[1],c->f[0]); // 801C3C80
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3C84
  if (!crb(c,2)) { goto L_801C3C90; } // 801C3C88
  c->r[0]=0u+0x00000001u; // 801C3C8C
L_801C3C90:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3C90
  if (!crb(c,2)) { goto L_801C3CB8; } // 801C3C94
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3C98
  c->r[3]=c->r[30]+0x00000000u; // 801C3C9C
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[2]=RF64(ea);} // 801C3CA0
  c->r[5]=c->r[30]+0x00000258u; // 801C3CA4
  {uint32_t ea=c->r[2]+0xFFFFA790u; c->f[3]=RF64(ea);} // 801C3CA8
  c->r[4]=0u+0x000000BDu; // 801C3CAC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C3CB0
  c->lr=0x801C3CB8u; f_80212260(c); // 801C3CB4
L_801C3CB8:;
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3CB8
  c->r[0]=0u+0x00000000u; // 801C3CBC
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3CC0
  fcmp(c,0,c->f[1],c->f[0]); // 801C3CC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C3CC8
  if (!crb(c,2)) { goto L_801C3CE4; } // 801C3CCC
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3CD0
  fcmp(c,0,c->f[1],c->f[0]); // 801C3CD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C3CD8
  if (!crb(c,2)) { goto L_801C3CE4; } // 801C3CDC
  c->r[0]=0u+0x00000001u; // 801C3CE0
L_801C3CE4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3CE4
  if (!crb(c,2)) { goto L_801C3D0C; } // 801C3CE8
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3CEC
  c->r[3]=c->r[30]+0x00000000u; // 801C3CF0
  {uint32_t ea=c->r[2]+0xFFFFA788u; c->f[2]=RF64(ea);} // 801C3CF4
  c->r[5]=c->r[30]+0x000002A8u; // 801C3CF8
  {uint32_t ea=c->r[2]+0xFFFFA790u; c->f[3]=RF64(ea);} // 801C3CFC
  c->r[4]=0u+0x000000BEu; // 801C3D00
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C3D04
  c->lr=0x801C3D0Cu; f_80212260(c); // 801C3D08
L_801C3D0C:;
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3D0C
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C3D10
  {uint32_t ea=c->r[28]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C3D14
  {uint32_t ea=c->r[28]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C3D18
  fcmp(c,0,c->f[2],c->f[9]); // 801C3D1C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C3D20
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C3D24
  {uint32_t ea=c->r[28]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C3D28
  {uint32_t ea=c->r[28]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C3D2C
  c->r[3]=R32(c->r[28]+0x00000018u); // 801C3D30
  c->r[0]=R32(c->r[28]+0x00000020u); // 801C3D34
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3D38
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D3C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[8]);} // 801C3D40
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[7]);} // 801C3D44
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[6]);} // 801C3D48
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[5]);} // 801C3D4C
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[4]);} // 801C3D50
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[3]);} // 801C3D54
  W32(c->r[31]+0x00000030u,c->r[3]); // 801C3D58
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 801C3D5C
  W32(c->r[31]+0x00000038u,c->r[0]); // 801C3D60
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 801C3D64
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 801C3D68
  if (!crb(c,0)) { goto L_801C3D74; } // 801C3D6C
  goto L_801C3D78; // 801C3D70
L_801C3D74:;
  c->f[9]=c->f[2]; // 801C3D74
L_801C3D78:;
  {uint32_t ea=c->r[31]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D78
  fcmp(c,0,c->f[9],c->f[0]); // 801C3D7C
  c->r[0]=c->cr; // 801C3D80
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3D84
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3D88
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801C3D8C
  c->r[29]=c->r[0]^0x00000001u; // 801C3D90
  c->r[0]=R32(c->r[28]+0x00000018u); // 801C3D94
  fcmp(c,0,c->f[0],c->f[1]); // 801C3D98
  W32(c->r[31]+0x00000154u,c->r[0]); // 801C3D9C
  {uint32_t ea=c->r[31]+0x00000158u; WF32(ea,c->f[9]);} // 801C3DA0
  if (!crb(c,1)) { goto L_801C3DAC; } // 801C3DA4
  goto L_801C3DC0; // 801C3DA8
L_801C3DAC:;
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3DAC
  fcmp(c,0,c->f[0],c->f[1]); // 801C3DB0
  if (!crb(c,0)) { goto L_801C3DBC; } // 801C3DB4
  goto L_801C3DC0; // 801C3DB8
L_801C3DBC:;
  c->f[1]=c->f[0]; // 801C3DBC
L_801C3DC0:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3DC0
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3DC4
  c->r[0]=R32(c->r[28]+0x00000020u); // 801C3DC8
  fcmp(c,0,c->f[0],c->f[2]); // 801C3DCC
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[1]);} // 801C3DD0
  W32(c->r[31]+0x00000160u,c->r[0]); // 801C3DD4
  if (!crb(c,0)) { goto L_801C3DE0; } // 801C3DD8
  goto L_801C3DE4; // 801C3DDC
L_801C3DE0:;
  c->f[2]=c->f[0]; // 801C3DE0
L_801C3DE4:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3DE4
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3DE8
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[2]);} // 801C3DEC
  fcmp(c,0,c->f[0],c->f[1]); // 801C3DF0
  if (!crb(c,1)) { goto L_801C3DFC; } // 801C3DF4
  goto L_801C3E10; // 801C3DF8
L_801C3DFC:;
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3DFC
  fcmp(c,0,c->f[0],c->f[1]); // 801C3E00
  if (!crb(c,0)) { goto L_801C3E0C; } // 801C3E04
  goto L_801C3E10; // 801C3E08
L_801C3E0C:;
  c->f[1]=c->f[0]; // 801C3E0C
L_801C3E10:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E10
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3E14
  {uint32_t ea=c->r[31]+0x00000168u; WF32(ea,c->f[1]);} // 801C3E18
  fcmp(c,0,c->f[0],c->f[2]); // 801C3E1C
  if (!crb(c,1)) { goto L_801C3E28; } // 801C3E20
  goto L_801C3E3C; // 801C3E24
L_801C3E28:;
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3E28
  fcmp(c,0,c->f[0],c->f[2]); // 801C3E2C
  if (!crb(c,0)) { goto L_801C3E38; } // 801C3E30
  goto L_801C3E3C; // 801C3E34
L_801C3E38:;
  c->f[2]=c->f[0]; // 801C3E38
L_801C3E3C:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E3C
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3E40
  {uint32_t ea=c->r[31]+0x0000016Cu; WF32(ea,c->f[2]);} // 801C3E44
  fcmp(c,0,c->f[0],c->f[1]); // 801C3E48
  if (!crb(c,1)) { goto L_801C3E54; } // 801C3E4C
  goto L_801C3E68; // 801C3E50
L_801C3E54:;
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3E54
  fcmp(c,0,c->f[0],c->f[1]); // 801C3E58
  if (!crb(c,0)) { goto L_801C3E64; } // 801C3E5C
  goto L_801C3E68; // 801C3E60
L_801C3E64:;
  c->f[1]=c->f[0]; // 801C3E64
L_801C3E68:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E68
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3E6C
  {uint32_t ea=c->r[31]+0x00000170u; WF32(ea,c->f[1]);} // 801C3E70
  fcmp(c,0,c->f[0],c->f[2]); // 801C3E74
  if (!crb(c,1)) { goto L_801C3E80; } // 801C3E78
  goto L_801C3E94; // 801C3E7C
L_801C3E80:;
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3E80
  fcmp(c,0,c->f[0],c->f[2]); // 801C3E84
  if (!crb(c,0)) { goto L_801C3E90; } // 801C3E88
  goto L_801C3E94; // 801C3E8C
L_801C3E90:;
  c->f[2]=c->f[0]; // 801C3E90
L_801C3E94:;
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3E94
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3E98
  {uint32_t ea=c->r[31]+0x00000174u; WF32(ea,c->f[2]);} // 801C3E9C
  fcmp(c,0,c->f[0],c->f[1]); // 801C3EA0
  if (!crb(c,1)) { goto L_801C3EAC; } // 801C3EA4
  goto L_801C3EC0; // 801C3EA8
L_801C3EAC:;
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C3EAC
  fcmp(c,0,c->f[0],c->f[1]); // 801C3EB0
  if (!crb(c,0)) { goto L_801C3EBC; } // 801C3EB4
  goto L_801C3EC0; // 801C3EB8
L_801C3EBC:;
  c->f[1]=c->f[0]; // 801C3EBC
L_801C3EC0:;
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3EC0
  {uint32_t ea=c->r[2]+0xFFFFA77Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3EC4
  {uint32_t ea=c->r[31]+0x00000178u; WF32(ea,c->f[1]);} // 801C3EC8
  fcmp(c,0,c->f[0],c->f[2]); // 801C3ECC
  if (!crb(c,1)) { goto L_801C3ED8; } // 801C3ED0
  goto L_801C3EEC; // 801C3ED4
L_801C3ED8:;
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C3ED8
  fcmp(c,0,c->f[0],c->f[2]); // 801C3EDC
  if (!crb(c,0)) { goto L_801C3EE8; } // 801C3EE0
  goto L_801C3EEC; // 801C3EE4
L_801C3EE8:;
  c->f[2]=c->f[0]; // 801C3EE8
L_801C3EEC:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801C3EEC
  c->r[30]=0u+0x00000000u; // 801C3EF0
  {uint32_t ea=c->r[2]+0xFFFFA780u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C3EF4
  cmps(c,0,(int32_t)c->r[0],0); // 801C3EF8
  {uint32_t ea=c->r[31]+0x00000184u; WF32(ea,c->f[2]);} // 801C3EFC
  W32(c->r[31]+0x0000017Cu,c->r[30]); // 801C3F00
  W32(c->r[31]+0x00000180u,c->r[30]); // 801C3F04
  {uint32_t ea=c->r[31]+0x00000188u; WF32(ea,c->f[0]);} // 801C3F08
  if (!crb(c,2)) { goto L_801C3F18; } // 801C3F0C
  c->r[3]=0u+0x00000001u; // 801C3F10
  goto L_801C3FA0; // 801C3F14
L_801C3F18:;
  c->r[3]=c->r[31]+0x00000044u; // 801C3F18
  c->lr=0x801C3F20u; f_801526D0(c); // 801C3F1C
  c->r[4]=R32(c->r[31]+0x00000010u); // 801C3F20
  c->r[0]=c->r[3]+0x00000087u; // 801C3F24
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C3F28
  cmps(c,0,(int32_t)c->r[4],0); // 801C3F2C
  if (!crb(c,2)) { goto L_801C3F38; } // 801C3F30
  goto L_801C3F40; // 801C3F34
L_801C3F38:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C3F38
  c->r[30]=c->r[0]-c->r[4]; // 801C3F3C
L_801C3F40:;
  cmpu(c,0,c->r[3],c->r[30]); // 801C3F40
  if (!crb(c,1)) { goto L_801C3F50; } // 801C3F44
  c->r[3]=0u+0x00000000u; // 801C3F48
  goto L_801C3FA0; // 801C3F4C
L_801C3F50:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C3F50
  if (crb(c,2)) { goto L_801C3F88; } // 801C3F54
  c->r[3]=c->r[31]+0x00000010u; // 801C3F58
  c->r[4]=c->r[1]+0x0000000Cu; // 801C3F5C
  c->r[5]=c->r[1]+0x00000008u; // 801C3F60
  c->lr=0x801C3F68u; f_801BA580(c); // 801C3F64
  c->r[3]=c->r[31]+0x00000044u; // 801C3F68
  c->lr=0x801C3F70u; f_80152900(c); // 801C3F6C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C3F70
  c->r[29]=c->r[3]|c->r[3]; // 801C3F74
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C3F78
  c->r[3]=c->r[31]+0x00000010u; // 801C3F7C
  c->lr=0x801C3F84u; f_801BA5E0(c); // 801C3F80
  goto L_801C3F94; // 801C3F84
L_801C3F88:;
  c->r[3]=c->r[31]+0x00000044u; // 801C3F88
  c->lr=0x801C3F90u; f_801529D0(c); // 801C3F8C
  c->r[29]=c->r[3]|c->r[3]; // 801C3F90
L_801C3F94:;
  c->r[0]=0u-c->r[29]; // 801C3F94
  c->r[0]=c->r[0]|c->r[29]; // 801C3F98
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C3F9C
L_801C3FA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3FA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3FA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C3FA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C3FAC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C3FB0
  c->lr=c->r[0]; // 801C3FB4
  c->r[1]=c->r[1]+0x00000020u; // 801C3FB8
  return; // 801C3FBC
}

// fn_801C3FC0
void f_801C3FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3FC0
  c->r[0]=c->lr; // 801C3FC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C3FC8
  c->r[11]=c->r[1]+0x00000030u; // 801C3FCC
  c->lr=0x801C3FD4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C3FD0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C3FD4
  c->r[31]=0u+0x803A0000u; // 801C3FD8
  c->r[27]=c->r[3]|c->r[3]; // 801C3FDC
  c->r[28]=c->r[5]|c->r[5]; // 801C3FE0
  cmps(c,0,(int32_t)c->r[0],0); // 801C3FE4
  c->r[29]=c->r[6]|c->r[6]; // 801C3FE8
  c->r[30]=c->r[7]|c->r[7]; // 801C3FEC
  c->r[31]=c->r[31]+0xFFFFE068u; // 801C3FF0
  if (crb(c,2)) { goto L_801C4078; } // 801C3FF4
  cmps(c,0,(int32_t)c->r[8],2); // 801C3FF8
  if (crb(c,2)) { goto L_801C4078; } // 801C3FFC
  cmps(c,0,(int32_t)c->r[4],3); // 801C4000
  if (!crb(c,0)) { goto L_801C401C; } // 801C4004
  c->r[3]=c->r[31]+0x00000000u; // 801C4008
  c->r[5]=c->r[31]+0x000002F4u; // 801C400C
  c->r[4]=0u+0x00000106u; // 801C4010
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4014
  c->lr=0x801C401Cu; f_80212260(c); // 801C4018
L_801C401C:;
  cmpu(c,0,c->r[29],0x00000180u); // 801C401C
  if (crb(c,2)) { goto L_801C4038; } // 801C4020
  c->r[3]=c->r[31]+0x00000000u; // 801C4024
  c->r[5]=c->r[31]+0x0000031Cu; // 801C4028
  c->r[4]=0u+0x00000107u; // 801C402C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4030
  c->lr=0x801C4038u; f_80212260(c); // 801C4034
L_801C4038:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C4038
  if (crb(c,2)) { goto L_801C4054; } // 801C403C
  c->r[3]=c->r[31]+0x00000000u; // 801C4040
  c->r[5]=c->r[31]+0x00000350u; // 801C4044
  c->r[4]=0u+0x00000108u; // 801C4048
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C404C
  c->lr=0x801C4054u; f_80212260(c); // 801C4050
L_801C4054:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801C4054
  c->r[3]=c->r[1]+0x00000008u; // 801C4058
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C405C
  c->r[4]=c->r[27]+0x00000044u; // 801C4060
  c->r[0]=R32(c->r[28]+0x00000004u); // 801C4064
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C4068
  c->r[0]=R32(c->r[28]+0x00000008u); // 801C406C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C4070
  c->lr=0x801C4078u; f_80152AF0(c); // 801C4074
L_801C4078:;
  c->r[11]=c->r[1]+0x00000030u; // 801C4078
  c->lr=0x801C4080u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C407C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C4080
  c->lr=c->r[0]; // 801C4084
  c->r[1]=c->r[1]+0x00000030u; // 801C4088
  return; // 801C408C
}

// fn_801C4090
void f_801C4090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4090
  c->r[0]=c->lr; // 801C4094
  c->r[5]=0u+0x803A0000u; // 801C4098
  {uint32_t ea=c->r[2]+0xFFFFA798u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C409C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C40A0
  c->r[6]=0u+0x00000000u; // 801C40A4
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C40A8
  c->r[5]=c->r[5]+0xFFFFE7FCu; // 801C40AC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C40B0
  c->r[0]=0u+0x00000005u; // 801C40B4
  {uint32_t ea=c->r[2]+0xFFFFA79Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C40B8
  c->r[31]=c->r[3]|c->r[3]; // 801C40BC
  {uint32_t ea=c->r[2]+0xFFFFA7A0u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C40C0
  c->r[4]=c->r[1]+0x00000008u; // 801C40C4
  {uint32_t ea=c->r[2]+0xFFFFA7A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C40C8
  {uint32_t ea=c->r[2]+0xFFFFA7A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C40CC
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C40D0
  W32(c->r[3]+0x00000004u,c->r[6]); // 801C40D4
  W32(c->r[3]+0x00000008u,c->r[6]); // 801C40D8
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C40DC
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801C40E0
  W32(c->r[3]+0x00000014u,c->r[6]); // 801C40E4
  W32(c->r[3]+0x00000018u,c->r[6]); // 801C40E8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[6]);} // 801C40EC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[5]);} // 801C40F0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[4]);} // 801C40F4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 801C40F8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[2]);} // 801C40FC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 801C4100
  W32(c->r[3]+0x00000034u,c->r[0]); // 801C4104
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[6]);} // 801C4108
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 801C410C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801C4110
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 801C4114
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 801C4118
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 801C411C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 801C4120
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 801C4124
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 801C4128
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801C412C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C4130
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 801C4134
  W32(c->r[1]+0x00000028u,c->r[6]); // 801C4138
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C413C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801C4140
  c->lr=0x801C4148u; f_801C43E0(c); // 801C4144
  c->r[3]=c->r[31]|c->r[31]; // 801C4148
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C414C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C4150
  c->lr=c->r[0]; // 801C4154
  c->r[1]=c->r[1]+0x00000040u; // 801C4158
  return; // 801C415C
}

// fn_801C4160
void f_801C4160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4160
  c->r[0]=c->lr; // 801C4164
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C416C
  c->r[31]=c->r[3]|c->r[3]; // 801C4170
  c->r[3]=c->r[3]+0x00000048u; // 801C4174
  c->lr=0x801C417Cu; f_801526D0(c); // 801C4178
  c->r[0]=c->r[3]+0x00000087u; // 801C417C
  c->r[3]=c->r[31]+0x00000190u; // 801C4180
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C4184
  c->lr=0x801C418Cu; f_80153720(c); // 801C4188
  c->r[0]=c->r[3]+0x00000087u; // 801C418C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C4190
  cmpu(c,0,c->r[3],c->r[31]); // 801C4194
  if (!crb(c,0)) { goto L_801C41A0; } // 801C4198
  c->r[3]=c->r[31]|c->r[31]; // 801C419C
L_801C41A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C41A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C41A4
  c->lr=c->r[0]; // 801C41A8
  c->r[1]=c->r[1]+0x00000010u; // 801C41AC
  return; // 801C41B0
}

// fn_801C41C0
void f_801C41C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C41C0
  f_801BA4C0(c); return; // 801C41C4
}

// fn_801C41D0
void f_801C41D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C41D0
  f_801BA530(c); return; // 801C41D4
}

// fn_801C41E0
void f_801C41E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C41E0
  c->r[0]=c->lr; // 801C41E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C41E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C41EC
  c->r[31]=c->r[3]|c->r[3]; // 801C41F0
  c->r[3]=c->r[3]+0x00000048u; // 801C41F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C41F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C41FC
  c->lr=0x801C4204u; f_801526D0(c); // 801C4200
  c->r[0]=c->r[3]+0x00000087u; // 801C4204
  c->r[3]=c->r[31]+0x00000190u; // 801C4208
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C420C
  c->lr=0x801C4214u; f_80153720(c); // 801C4210
  c->r[0]=c->r[3]+0x00000087u; // 801C4214
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C4218
  cmpu(c,0,c->r[3],c->r[30]); // 801C421C
  if (!crb(c,0)) { goto L_801C4228; } // 801C4220
  c->r[3]=c->r[30]|c->r[30]; // 801C4224
L_801C4228:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C4228
  cmps(c,0,(int32_t)c->r[4],0); // 801C422C
  if (!crb(c,2)) { goto L_801C423C; } // 801C4230
  c->r[0]=0u+0x00000000u; // 801C4234
  goto L_801C4244; // 801C4238
L_801C423C:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C423C
  c->r[0]=c->r[0]-c->r[4]; // 801C4240
L_801C4244:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C4244
  if (!crb(c,1)) { goto L_801C4254; } // 801C4248
  c->r[3]=0u+0x00000000u; // 801C424C
  goto L_801C4338; // 801C4250
L_801C4254:;
  c->lr=0x801C4258u; f_801B4F50(c); // 801C4254
  c->lr=0x801C425Cu; f_801B58C0(c); // 801C4258
  cmps(c,0,(int32_t)c->r[3],2); // 801C425C
  if (!crb(c,2)) { goto L_801C42B0; } // 801C4260
  c->r[0]=0u+0x00000001u; // 801C4264
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C4268
  c->r[3]=c->r[31]+0x00000014u; // 801C426C
  c->r[4]=c->r[1]+0x0000000Cu; // 801C4270
  c->r[5]=c->r[1]+0x00000008u; // 801C4274
  c->lr=0x801C427Cu; f_801BA580(c); // 801C4278
  c->r[3]=c->r[31]+0x00000190u; // 801C427C
  c->lr=0x801C4284u; f_801537B0(c); // 801C4280
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C4284
  c->r[30]=c->r[3]|c->r[3]; // 801C4288
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C428C
  c->r[3]=c->r[31]+0x00000014u; // 801C4290
  c->lr=0x801C4298u; f_801BA5E0(c); // 801C4294
  c->r[29]=c->r[3]|c->r[3]; // 801C4298
  c->r[3]=c->r[31]+0x00000190u; // 801C429C
  c->lr=0x801C42A4u; f_80153720(c); // 801C42A0
  c->r[0]=c->r[3]+0x00000087u; // 801C42A4
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C42A8
  goto L_801C42F8; // 801C42AC
L_801C42B0:;
  c->r[0]=0u+0x00000000u; // 801C42B0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C42B4
  c->r[3]=c->r[31]+0x00000014u; // 801C42B8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C42BC
  c->r[5]=c->r[1]+0x00000008u; // 801C42C0
  c->lr=0x801C42C8u; f_801BA580(c); // 801C42C4
  c->r[3]=c->r[31]+0x00000048u; // 801C42C8
  c->lr=0x801C42D0u; f_80152760(c); // 801C42CC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C42D0
  c->r[30]=c->r[3]|c->r[3]; // 801C42D4
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C42D8
  c->r[3]=c->r[31]+0x00000014u; // 801C42DC
  c->lr=0x801C42E4u; f_801BA5E0(c); // 801C42E0
  c->r[29]=c->r[3]|c->r[3]; // 801C42E4
  c->r[3]=c->r[31]+0x00000048u; // 801C42E8
  c->lr=0x801C42F0u; f_801526D0(c); // 801C42EC
  c->r[0]=c->r[3]+0x00000087u; // 801C42F0
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C42F4
L_801C42F8:;
  c->r[0]=c->r[29]+0x00000087u; // 801C42F8
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C42FC
  cmpu(c,0,c->r[7],c->r[6]); // 801C4300
  if (crb(c,2)) { goto L_801C4324; } // 801C4304
  c->r[3]=0u+0x803A0000u; // 801C4308
  c->r[5]=0u+0x803A0000u; // 801C430C
  c->r[3]=c->r[3]+0xFFFFE418u; // 801C4310
  c->r[4]=0u+0x000000B5u; // 801C4314
  c->r[5]=c->r[5]+0xFFFFE430u; // 801C4318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C431C
  c->lr=0x801C4324u; f_80212300(c); // 801C4320
L_801C4324:;
  c->r[0]=0u-c->r[30]; // 801C4324
  c->r[3]=0u+0x00000001u; // 801C4328
  c->r[0]=c->r[0]|c->r[30]; // 801C432C
  W8(c->r[31]+0x0000000Cu,c->r[3]); // 801C4330
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C4334
L_801C4338:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4338
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C433C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4340
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C4344
  c->lr=c->r[0]; // 801C4348
  c->r[1]=c->r[1]+0x00000020u; // 801C434C
  return; // 801C4350
}

// fn_801C4360
void f_801C4360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4360
  c->r[0]=c->lr; // 801C4364
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4368
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C436C
  c->r[31]=c->r[3]|c->r[3]; // 801C4370
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C4374
  cmps(c,0,(int32_t)c->r[0],0); // 801C4378
  if (crb(c,2)) { goto L_801C43C8; } // 801C437C
  c->r[0]=0u+0x00000000u; // 801C4380
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C4384
  c->r[3]=c->r[3]+0x00000014u; // 801C4388
  c->r[4]=c->r[1]+0x0000000Cu; // 801C438C
  c->r[5]=c->r[1]+0x00000008u; // 801C4390
  c->lr=0x801C4398u; f_801BA580(c); // 801C4394
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4398
  cmps(c,0,(int32_t)c->r[0],1); // 801C439C
  if (!crb(c,2)) { goto L_801C43B0; } // 801C43A0
  c->r[3]=c->r[31]+0x00000190u; // 801C43A4
  c->lr=0x801C43ACu; f_80153B00(c); // 801C43A8
  goto L_801C43B8; // 801C43AC
L_801C43B0:;
  c->r[3]=c->r[31]+0x00000048u; // 801C43B0
  c->lr=0x801C43B8u; f_80152A90(c); // 801C43B4
L_801C43B8:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C43B8
  c->r[3]=c->r[31]+0x00000014u; // 801C43BC
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C43C0
  c->lr=0x801C43C8u; f_801BA5E0(c); // 801C43C4
L_801C43C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C43C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C43CC
  c->lr=c->r[0]; // 801C43D0
  c->r[1]=c->r[1]+0x00000020u; // 801C43D4
  return; // 801C43D8
}

// fn_801C43E0
void f_801C43E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C43E0
  c->r[0]=c->lr; // 801C43E4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C43E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C43EC
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C43F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C43F4
  c->r[31]=c->r[3]|c->r[3]; // 801C43F8
  fcmp(c,0,c->f[1],c->f[0]); // 801C43FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4400
  c->r[30]=0u+0x803A0000u; // 801C4404
  c->r[30]=c->r[30]+0xFFFFE418u; // 801C4408
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C440C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C4410
  c->r[28]=c->r[4]|c->r[4]; // 801C4414
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4418
  if (crb(c,2)) { goto L_801C4434; } // 801C441C
  c->r[3]=c->r[30]+0x00000000u; // 801C4420
  c->r[5]=c->r[30]+0x0000005Cu; // 801C4424
  c->r[4]=0u+0x000000E3u; // 801C4428
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C442C
  c->lr=0x801C4434u; f_80212260(c); // 801C4430
L_801C4434:;
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4434
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4438
  fcmp(c,0,c->f[1],c->f[0]); // 801C443C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4440
  if (crb(c,2)) { goto L_801C445C; } // 801C4444
  c->r[3]=c->r[30]+0x00000000u; // 801C4448
  c->r[5]=c->r[30]+0x0000009Cu; // 801C444C
  c->r[4]=0u+0x000000E4u; // 801C4450
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4454
  c->lr=0x801C445Cu; f_80212260(c); // 801C4458
L_801C445C:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C445C
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4460
  fcmp(c,0,c->f[1],c->f[0]); // 801C4464
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4468
  if (crb(c,2)) { goto L_801C4484; } // 801C446C
  c->r[3]=c->r[30]+0x00000000u; // 801C4470
  c->r[5]=c->r[30]+0x000000E8u; // 801C4474
  c->r[4]=0u+0x000000E5u; // 801C4478
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C447C
  c->lr=0x801C4484u; f_80212260(c); // 801C4480
L_801C4484:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4484
  c->r[0]=0u+0x00000000u; // 801C4488
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C448C
  fcmp(c,0,c->f[1],c->f[0]); // 801C4490
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4494
  if (!crb(c,2)) { goto L_801C44B0; } // 801C4498
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C449C
  fcmp(c,0,c->f[1],c->f[0]); // 801C44A0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C44A4
  if (!crb(c,2)) { goto L_801C44B0; } // 801C44A8
  c->r[0]=0u+0x00000001u; // 801C44AC
L_801C44B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C44B0
  if (!crb(c,2)) { goto L_801C44D8; } // 801C44B4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C44B8
  c->r[3]=c->r[30]+0x00000000u; // 801C44BC
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[2]=RF64(ea);} // 801C44C0
  c->r[5]=c->r[30]+0x00000120u; // 801C44C4
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[3]=RF64(ea);} // 801C44C8
  c->r[4]=0u+0x000000E6u; // 801C44CC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C44D0
  c->lr=0x801C44D8u; f_80212260(c); // 801C44D4
L_801C44D8:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C44D8
  c->r[0]=0u+0x00000000u; // 801C44DC
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C44E0
  fcmp(c,0,c->f[1],c->f[0]); // 801C44E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C44E8
  if (!crb(c,2)) { goto L_801C4504; } // 801C44EC
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C44F0
  fcmp(c,0,c->f[1],c->f[0]); // 801C44F4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C44F8
  if (!crb(c,2)) { goto L_801C4504; } // 801C44FC
  c->r[0]=0u+0x00000001u; // 801C4500
L_801C4504:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4504
  if (!crb(c,2)) { goto L_801C452C; } // 801C4508
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C450C
  c->r[3]=c->r[30]+0x00000000u; // 801C4510
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[2]=RF64(ea);} // 801C4514
  c->r[5]=c->r[30]+0x00000174u; // 801C4518
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[3]=RF64(ea);} // 801C451C
  c->r[4]=0u+0x000000E7u; // 801C4520
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C4524
  c->lr=0x801C452Cu; f_80212260(c); // 801C4528
L_801C452C:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C452C
  c->r[0]=0u+0x00000000u; // 801C4530
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4534
  fcmp(c,0,c->f[1],c->f[0]); // 801C4538
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C453C
  if (!crb(c,2)) { goto L_801C4558; } // 801C4540
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4544
  fcmp(c,0,c->f[1],c->f[0]); // 801C4548
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C454C
  if (!crb(c,2)) { goto L_801C4558; } // 801C4550
  c->r[0]=0u+0x00000001u; // 801C4554
L_801C4558:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4558
  if (!crb(c,2)) { goto L_801C4580; } // 801C455C
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4560
  c->r[3]=c->r[30]+0x00000000u; // 801C4564
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[2]=RF64(ea);} // 801C4568
  c->r[5]=c->r[30]+0x000001C0u; // 801C456C
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[3]=RF64(ea);} // 801C4570
  c->r[4]=0u+0x000000E8u; // 801C4574
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C4578
  c->lr=0x801C4580u; f_80212260(c); // 801C457C
L_801C4580:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4580
  c->r[0]=0u+0x00000000u; // 801C4584
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4588
  fcmp(c,0,c->f[1],c->f[0]); // 801C458C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4590
  if (!crb(c,2)) { goto L_801C45AC; } // 801C4594
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4598
  fcmp(c,0,c->f[1],c->f[0]); // 801C459C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C45A0
  if (!crb(c,2)) { goto L_801C45AC; } // 801C45A4
  c->r[0]=0u+0x00000001u; // 801C45A8
L_801C45AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C45AC
  if (!crb(c,2)) { goto L_801C45D4; } // 801C45B0
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C45B4
  c->r[3]=c->r[30]+0x00000000u; // 801C45B8
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[2]=RF64(ea);} // 801C45BC
  c->r[5]=c->r[30]+0x00000210u; // 801C45C0
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[3]=RF64(ea);} // 801C45C4
  c->r[4]=0u+0x000000E9u; // 801C45C8
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C45CC
  c->lr=0x801C45D4u; f_80212260(c); // 801C45D0
L_801C45D4:;
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C45D4
  c->r[0]=0u+0x00000000u; // 801C45D8
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C45DC
  fcmp(c,0,c->f[1],c->f[0]); // 801C45E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C45E4
  if (!crb(c,2)) { goto L_801C4600; } // 801C45E8
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C45EC
  fcmp(c,0,c->f[1],c->f[0]); // 801C45F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C45F4
  if (!crb(c,2)) { goto L_801C4600; } // 801C45F8
  c->r[0]=0u+0x00000001u; // 801C45FC
L_801C4600:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4600
  if (!crb(c,2)) { goto L_801C4628; } // 801C4604
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4608
  c->r[3]=c->r[30]+0x00000000u; // 801C460C
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[2]=RF64(ea);} // 801C4610
  c->r[5]=c->r[30]+0x00000260u; // 801C4614
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[3]=RF64(ea);} // 801C4618
  c->r[4]=0u+0x000000EAu; // 801C461C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C4620
  c->lr=0x801C4628u; f_80212260(c); // 801C4624
L_801C4628:;
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4628
  c->r[0]=0u+0x00000000u; // 801C462C
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4630
  fcmp(c,0,c->f[1],c->f[0]); // 801C4634
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4638
  if (!crb(c,2)) { goto L_801C4654; } // 801C463C
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4640
  fcmp(c,0,c->f[1],c->f[0]); // 801C4644
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C4648
  if (!crb(c,2)) { goto L_801C4654; } // 801C464C
  c->r[0]=0u+0x00000001u; // 801C4650
L_801C4654:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4654
  if (!crb(c,2)) { goto L_801C467C; } // 801C4658
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C465C
  c->r[3]=c->r[30]+0x00000000u; // 801C4660
  {uint32_t ea=c->r[2]+0xFFFFA7B8u; c->f[2]=RF64(ea);} // 801C4664
  c->r[5]=c->r[30]+0x000002B0u; // 801C4668
  {uint32_t ea=c->r[2]+0xFFFFA7C0u; c->f[3]=RF64(ea);} // 801C466C
  c->r[4]=0u+0x000000EBu; // 801C4670
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C4674
  c->lr=0x801C467Cu; f_80212260(c); // 801C4678
L_801C467C:;
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C467C
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C4680
  {uint32_t ea=c->r[28]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C4684
  {uint32_t ea=c->r[28]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C4688
  fcmp(c,0,c->f[2],c->f[9]); // 801C468C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C4690
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4694
  {uint32_t ea=c->r[28]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4698
  {uint32_t ea=c->r[28]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C469C
  c->r[3]=R32(c->r[28]+0x00000018u); // 801C46A0
  c->r[0]=R32(c->r[28]+0x00000020u); // 801C46A4
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C46A8
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C46AC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[8]);} // 801C46B0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[7]);} // 801C46B4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[6]);} // 801C46B8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[5]);} // 801C46BC
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[4]);} // 801C46C0
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[3]);} // 801C46C4
  W32(c->r[31]+0x00000034u,c->r[3]); // 801C46C8
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[2]);} // 801C46CC
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 801C46D0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 801C46D4
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 801C46D8
  if (!crb(c,0)) { goto L_801C46E4; } // 801C46DC
  goto L_801C46E8; // 801C46E0
L_801C46E4:;
  c->f[9]=c->f[2]; // 801C46E4
L_801C46E8:;
  {uint32_t ea=c->r[31]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C46E8
  fcmp(c,0,c->f[9],c->f[0]); // 801C46EC
  c->r[0]=c->cr; // 801C46F0
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C46F4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C46F8
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801C46FC
  c->r[29]=c->r[0]^0x00000001u; // 801C4700
  c->r[0]=R32(c->r[28]+0x00000018u); // 801C4704
  fcmp(c,0,c->f[0],c->f[1]); // 801C4708
  W32(c->r[31]+0x000002D0u,c->r[0]); // 801C470C
  W32(c->r[31]+0x00000158u,c->r[0]); // 801C4710
  {uint32_t ea=c->r[31]+0x000002D4u; WF32(ea,c->f[9]);} // 801C4714
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[9]);} // 801C4718
  if (!crb(c,1)) { goto L_801C4724; } // 801C471C
  goto L_801C4738; // 801C4720
L_801C4724:;
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4724
  fcmp(c,0,c->f[0],c->f[1]); // 801C4728
  if (!crb(c,0)) { goto L_801C4734; } // 801C472C
  goto L_801C4738; // 801C4730
L_801C4734:;
  c->f[1]=c->f[0]; // 801C4734
L_801C4738:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4738
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C473C
  c->r[0]=R32(c->r[28]+0x00000020u); // 801C4740
  fcmp(c,0,c->f[0],c->f[2]); // 801C4744
  {uint32_t ea=c->r[31]+0x000002D8u; WF32(ea,c->f[1]);} // 801C4748
  {uint32_t ea=c->r[31]+0x00000160u; WF32(ea,c->f[1]);} // 801C474C
  W32(c->r[31]+0x000002DCu,c->r[0]); // 801C4750
  W32(c->r[31]+0x00000164u,c->r[0]); // 801C4754
  if (!crb(c,0)) { goto L_801C4760; } // 801C4758
  goto L_801C4764; // 801C475C
L_801C4760:;
  c->f[2]=c->f[0]; // 801C4760
L_801C4764:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4764
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4768
  {uint32_t ea=c->r[31]+0x000002E0u; WF32(ea,c->f[2]);} // 801C476C
  fcmp(c,0,c->f[0],c->f[1]); // 801C4770
  {uint32_t ea=c->r[31]+0x00000168u; WF32(ea,c->f[2]);} // 801C4774
  if (!crb(c,1)) { goto L_801C4780; } // 801C4778
  goto L_801C4794; // 801C477C
L_801C4780:;
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4780
  fcmp(c,0,c->f[0],c->f[1]); // 801C4784
  if (!crb(c,0)) { goto L_801C4790; } // 801C4788
  goto L_801C4794; // 801C478C
L_801C4790:;
  c->f[1]=c->f[0]; // 801C4790
L_801C4794:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4794
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4798
  {uint32_t ea=c->r[31]+0x000002E4u; WF32(ea,c->f[1]);} // 801C479C
  fcmp(c,0,c->f[0],c->f[2]); // 801C47A0
  {uint32_t ea=c->r[31]+0x0000016Cu; WF32(ea,c->f[1]);} // 801C47A4
  if (!crb(c,1)) { goto L_801C47B0; } // 801C47A8
  goto L_801C47C4; // 801C47AC
L_801C47B0:;
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C47B0
  fcmp(c,0,c->f[0],c->f[2]); // 801C47B4
  if (!crb(c,0)) { goto L_801C47C0; } // 801C47B8
  goto L_801C47C4; // 801C47BC
L_801C47C0:;
  c->f[2]=c->f[0]; // 801C47C0
L_801C47C4:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C47C4
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C47C8
  {uint32_t ea=c->r[31]+0x000002E8u; WF32(ea,c->f[2]);} // 801C47CC
  fcmp(c,0,c->f[0],c->f[1]); // 801C47D0
  {uint32_t ea=c->r[31]+0x00000170u; WF32(ea,c->f[2]);} // 801C47D4
  if (!crb(c,1)) { goto L_801C47E0; } // 801C47D8
  goto L_801C47F4; // 801C47DC
L_801C47E0:;
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C47E0
  fcmp(c,0,c->f[0],c->f[1]); // 801C47E4
  if (!crb(c,0)) { goto L_801C47F0; } // 801C47E8
  goto L_801C47F4; // 801C47EC
L_801C47F0:;
  c->f[1]=c->f[0]; // 801C47F0
L_801C47F4:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C47F4
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C47F8
  {uint32_t ea=c->r[31]+0x000002ECu; WF32(ea,c->f[1]);} // 801C47FC
  fcmp(c,0,c->f[0],c->f[2]); // 801C4800
  {uint32_t ea=c->r[31]+0x00000174u; WF32(ea,c->f[1]);} // 801C4804
  if (!crb(c,1)) { goto L_801C4810; } // 801C4808
  goto L_801C4824; // 801C480C
L_801C4810:;
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4810
  fcmp(c,0,c->f[0],c->f[2]); // 801C4814
  if (!crb(c,0)) { goto L_801C4820; } // 801C4818
  goto L_801C4824; // 801C481C
L_801C4820:;
  c->f[2]=c->f[0]; // 801C4820
L_801C4824:;
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4824
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4828
  {uint32_t ea=c->r[31]+0x000002F0u; WF32(ea,c->f[2]);} // 801C482C
  fcmp(c,0,c->f[0],c->f[1]); // 801C4830
  {uint32_t ea=c->r[31]+0x00000178u; WF32(ea,c->f[2]);} // 801C4834
  if (!crb(c,1)) { goto L_801C4840; } // 801C4838
  goto L_801C4854; // 801C483C
L_801C4840:;
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4840
  fcmp(c,0,c->f[0],c->f[1]); // 801C4844
  if (!crb(c,0)) { goto L_801C4850; } // 801C4848
  goto L_801C4854; // 801C484C
L_801C4850:;
  c->f[1]=c->f[0]; // 801C4850
L_801C4854:;
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4854
  {uint32_t ea=c->r[2]+0xFFFFA7ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4858
  {uint32_t ea=c->r[31]+0x000002F4u; WF32(ea,c->f[1]);} // 801C485C
  fcmp(c,0,c->f[0],c->f[2]); // 801C4860
  {uint32_t ea=c->r[31]+0x0000017Cu; WF32(ea,c->f[1]);} // 801C4864
  if (!crb(c,1)) { goto L_801C4870; } // 801C4868
  goto L_801C4884; // 801C486C
L_801C4870:;
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4870
  fcmp(c,0,c->f[0],c->f[2]); // 801C4874
  if (!crb(c,0)) { goto L_801C4880; } // 801C4878
  goto L_801C4884; // 801C487C
L_801C4880:;
  c->f[2]=c->f[0]; // 801C4880
L_801C4884:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801C4884
  c->r[3]=0u+0x00000000u; // 801C4888
  {uint32_t ea=c->r[2]+0xFFFFA7B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C488C
  cmps(c,0,(int32_t)c->r[0],0); // 801C4890
  {uint32_t ea=c->r[31]+0x00000300u; WF32(ea,c->f[2]);} // 801C4894
  {uint32_t ea=c->r[31]+0x00000188u; WF32(ea,c->f[2]);} // 801C4898
  W32(c->r[31]+0x00000180u,c->r[3]); // 801C489C
  W32(c->r[31]+0x00000184u,c->r[3]); // 801C48A0
  {uint32_t ea=c->r[31]+0x0000018Cu; WF32(ea,c->f[0]);} // 801C48A4
  W32(c->r[31]+0x000002F8u,c->r[3]); // 801C48A8
  W32(c->r[31]+0x000002FCu,c->r[3]); // 801C48AC
  {uint32_t ea=c->r[31]+0x00000304u; WF32(ea,c->f[0]);} // 801C48B0
  if (!crb(c,2)) { goto L_801C48C0; } // 801C48B4
  c->r[3]=0u+0x00000001u; // 801C48B8
  goto L_801C4998; // 801C48BC
L_801C48C0:;
  c->r[3]=c->r[31]+0x00000048u; // 801C48C0
  c->lr=0x801C48C8u; f_801526D0(c); // 801C48C4
  c->r[0]=c->r[3]+0x00000087u; // 801C48C8
  c->r[3]=c->r[31]+0x00000190u; // 801C48CC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C48D0
  c->lr=0x801C48D8u; f_80153720(c); // 801C48D4
  c->r[0]=c->r[3]+0x00000087u; // 801C48D8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C48DC
  cmpu(c,0,c->r[3],c->r[30]); // 801C48E0
  if (!crb(c,0)) { goto L_801C48EC; } // 801C48E4
  c->r[3]=c->r[30]|c->r[30]; // 801C48E8
L_801C48EC:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C48EC
  cmps(c,0,(int32_t)c->r[4],0); // 801C48F0
  if (!crb(c,2)) { goto L_801C4900; } // 801C48F4
  c->r[0]=0u+0x00000000u; // 801C48F8
  goto L_801C4908; // 801C48FC
L_801C4900:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C4900
  c->r[0]=c->r[0]-c->r[4]; // 801C4904
L_801C4908:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C4908
  if (!crb(c,1)) { goto L_801C4918; } // 801C490C
  c->r[3]=0u+0x00000000u; // 801C4910
  goto L_801C4998; // 801C4914
L_801C4918:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C4918
  if (crb(c,2)) { goto L_801C4968; } // 801C491C
  c->r[3]=c->r[31]+0x00000014u; // 801C4920
  c->r[4]=c->r[1]+0x0000000Cu; // 801C4924
  c->r[5]=c->r[1]+0x00000008u; // 801C4928
  c->lr=0x801C4930u; f_801BA580(c); // 801C492C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4930
  cmps(c,0,(int32_t)c->r[0],1); // 801C4934
  if (!crb(c,2)) { goto L_801C4948; } // 801C4938
  c->r[3]=c->r[31]+0x00000190u; // 801C493C
  c->lr=0x801C4944u; f_80153970(c); // 801C4940
  goto L_801C4950; // 801C4944
L_801C4948:;
  c->r[3]=c->r[31]+0x00000048u; // 801C4948
  c->lr=0x801C4950u; f_80152900(c); // 801C494C
L_801C4950:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C4950
  c->r[29]=c->r[3]|c->r[3]; // 801C4954
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C4958
  c->r[3]=c->r[31]+0x00000014u; // 801C495C
  c->lr=0x801C4964u; f_801BA5E0(c); // 801C4960
  goto L_801C498C; // 801C4964
L_801C4968:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4968
  cmps(c,0,(int32_t)c->r[0],1); // 801C496C
  if (!crb(c,2)) { goto L_801C4980; } // 801C4970
  c->r[3]=c->r[31]+0x00000190u; // 801C4974
  c->lr=0x801C497Cu; f_80153A40(c); // 801C4978
  goto L_801C4988; // 801C497C
L_801C4980:;
  c->r[3]=c->r[31]+0x00000048u; // 801C4980
  c->lr=0x801C4988u; f_801529D0(c); // 801C4984
L_801C4988:;
  c->r[29]=c->r[3]|c->r[3]; // 801C4988
L_801C498C:;
  c->r[0]=0u-c->r[29]; // 801C498C
  c->r[0]=c->r[0]|c->r[29]; // 801C4990
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C4994
L_801C4998:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4998
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C499C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C49A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C49A4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C49A8
  c->lr=c->r[0]; // 801C49AC
  c->r[1]=c->r[1]+0x00000020u; // 801C49B0
  return; // 801C49B4
}

// fn_801C49C0
void f_801C49C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C49C0
  c->r[0]=c->lr; // 801C49C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C49C8
  c->r[11]=c->r[1]+0x00000050u; // 801C49CC
  c->lr=0x801C49D4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C49D0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C49D4
  c->r[31]=0u+0x803A0000u; // 801C49D8
  c->r[25]=c->r[3]|c->r[3]; // 801C49DC
  c->r[26]=c->r[4]|c->r[4]; // 801C49E0
  cmps(c,0,(int32_t)c->r[0],0); // 801C49E4
  c->r[27]=c->r[5]|c->r[5]; // 801C49E8
  c->r[28]=c->r[6]|c->r[6]; // 801C49EC
  c->r[29]=c->r[7]|c->r[7]; // 801C49F0
  c->r[30]=c->r[8]|c->r[8]; // 801C49F4
  c->r[31]=c->r[31]+0xFFFFE418u; // 801C49F8
  if (crb(c,2)) { goto L_801C4B04; } // 801C49FC
  cmps(c,0,(int32_t)c->r[4],3); // 801C4A00
  if (!crb(c,0)) { goto L_801C4A1C; } // 801C4A04
  c->r[3]=c->r[31]+0x00000000u; // 801C4A08
  c->r[5]=c->r[31]+0x000002FCu; // 801C4A0C
  c->r[4]=0u+0x00000144u; // 801C4A10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4A14
  c->lr=0x801C4A1Cu; f_80212260(c); // 801C4A18
L_801C4A1C:;
  cmpu(c,0,c->r[28],0x00000180u); // 801C4A1C
  if (crb(c,2)) { goto L_801C4A38; } // 801C4A20
  c->r[3]=c->r[31]+0x00000000u; // 801C4A24
  c->r[5]=c->r[31]+0x00000324u; // 801C4A28
  c->r[4]=0u+0x00000145u; // 801C4A2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4A30
  c->lr=0x801C4A38u; f_80212260(c); // 801C4A34
L_801C4A38:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C4A38
  if (crb(c,2)) { goto L_801C4A54; } // 801C4A3C
  c->r[3]=c->r[31]+0x00000000u; // 801C4A40
  c->r[5]=c->r[31]+0x00000358u; // 801C4A44
  c->r[4]=0u+0x00000146u; // 801C4A48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4A4C
  c->lr=0x801C4A54u; f_80212260(c); // 801C4A50
L_801C4A54:;
  c->r[3]=c->r[30]+0xFFFFFFFEu; // 801C4A54
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C4A58
  c->r[3]=cntlz(c->r[3]); // 801C4A5C
  c->r[30]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C4A60
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C4A64
  if (crb(c,2)) { goto L_801C4A80; } // 801C4A68
  c->r[3]=c->r[31]+0x00000000u; // 801C4A6C
  c->r[5]=c->r[31]+0x00000390u; // 801C4A70
  c->r[4]=0u+0x00000148u; // 801C4A74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4A78
  c->lr=0x801C4A80u; f_80212260(c); // 801C4A7C
L_801C4A80:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C4A80
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C4A84
  if (!crb(c,2)) { goto L_801C4B04; } // 801C4A88
  cmps(c,0,(int32_t)c->r[0],1); // 801C4A8C
  if (!crb(c,2)) { goto L_801C4AE0; } // 801C4A90
  cmps(c,0,(int32_t)c->r[26],4); // 801C4A94
  if (!crb(c,0)) { goto L_801C4AB0; } // 801C4A98
  c->r[3]=c->r[31]+0x00000000u; // 801C4A9C
  c->r[5]=c->r[31]+0x000003BCu; // 801C4AA0
  c->r[4]=0u+0x0000014Du; // 801C4AA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4AA8
  c->lr=0x801C4AB0u; f_80212260(c); // 801C4AAC
L_801C4AB0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C4AB0
  c->r[3]=c->r[1]+0x00000018u; // 801C4AB4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C4AB8
  c->r[4]=c->r[25]+0x00000190u; // 801C4ABC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C4AC0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C4AC4
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C4AC8
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C4ACC
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801C4AD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4AD4
  c->lr=0x801C4ADCu; f_80153B60(c); // 801C4AD8
  goto L_801C4B04; // 801C4ADC
L_801C4AE0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C4AE0
  c->r[3]=c->r[1]+0x00000008u; // 801C4AE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C4AE8
  c->r[4]=c->r[25]+0x00000048u; // 801C4AEC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C4AF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C4AF4
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C4AF8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C4AFC
  c->lr=0x801C4B04u; f_80152AF0(c); // 801C4B00
L_801C4B04:;
  c->r[11]=c->r[1]+0x00000050u; // 801C4B04
  c->lr=0x801C4B0Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C4B08
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C4B0C
  c->lr=c->r[0]; // 801C4B10
  c->r[1]=c->r[1]+0x00000050u; // 801C4B14
  return; // 801C4B18
}

// fn_801C4B20
void f_801C4B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4B20
  c->r[0]=c->lr; // 801C4B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4B28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4B2C
  c->r[31]=c->r[3]|c->r[3]; // 801C4B30
  c->lr=0x801C4B38u; f_801B4F50(c); // 801C4B34
  c->lr=0x801C4B3Cu; f_801B58C0(c); // 801C4B38
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801C4B3C
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C4B40
  c->r[3]=cntlz(c->r[3]); // 801C4B44
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C4B48
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801C4B4C
  if (crb(c,2)) { goto L_801C4B7C; } // 801C4B50
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C4B54
  c->r[3]=c->r[31]|c->r[31]; // 801C4B58
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C4B5C
  c->ctr=c->r[12]; // 801C4B60
  if (true) { c->lr=0x801C4B68u; dispatch(c,c->ctr); } // 801C4B64
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C4B68
  c->r[3]=c->r[31]|c->r[31]; // 801C4B6C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C4B70
  c->ctr=c->r[12]; // 801C4B74
  if (true) { c->lr=0x801C4B7Cu; dispatch(c,c->ctr); } // 801C4B78
L_801C4B7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4B7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4B80
  c->lr=c->r[0]; // 801C4B84
  c->r[1]=c->r[1]+0x00000010u; // 801C4B88
  return; // 801C4B8C
}

// fn_801C4B90
void f_801C4B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4B90
  c->r[0]=c->lr; // 801C4B94
  c->r[5]=0u+0x803A0000u; // 801C4B98
  {uint32_t ea=c->r[2]+0xFFFFA7C8u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C4B9C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C4BA0
  c->r[6]=0u+0x00000000u; // 801C4BA4
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4BA8
  c->r[5]=c->r[5]+0xFFFFEB58u; // 801C4BAC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C4BB0
  c->r[0]=0u+0x00000005u; // 801C4BB4
  {uint32_t ea=c->r[2]+0xFFFFA7CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C4BB8
  c->r[31]=c->r[3]|c->r[3]; // 801C4BBC
  {uint32_t ea=c->r[2]+0xFFFFA7D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C4BC0
  c->r[4]=c->r[1]+0x00000008u; // 801C4BC4
  {uint32_t ea=c->r[2]+0xFFFFA7D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C4BC8
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4BCC
  W32(c->r[3]+0x00000004u,c->r[6]); // 801C4BD0
  W32(c->r[3]+0x00000008u,c->r[6]); // 801C4BD4
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C4BD8
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801C4BDC
  W32(c->r[3]+0x00000010u,c->r[6]); // 801C4BE0
  W32(c->r[3]+0x00000014u,c->r[6]); // 801C4BE4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 801C4BE8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[4]);} // 801C4BEC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[3]);} // 801C4BF0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 801C4BF4
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 801C4BF8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801C4BFC
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[5]);} // 801C4C00
  W32(c->r[3]+0x00000034u,c->r[6]); // 801C4C04
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801C4C08
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801C4C0C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 801C4C10
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C4C14
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801C4C18
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801C4C1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801C4C20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C4C24
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 801C4C28
  W32(c->r[1]+0x00000024u,c->r[6]); // 801C4C2C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801C4C30
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C4C34
  c->lr=0x801C4C3Cu; f_801C4E20(c); // 801C4C38
  c->r[3]=c->r[31]|c->r[31]; // 801C4C3C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C4C40
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C4C44
  c->lr=c->r[0]; // 801C4C48
  c->r[1]=c->r[1]+0x00000040u; // 801C4C4C
  return; // 801C4C50
}

// fn_801C4C60
void f_801C4C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4C60
  c->r[0]=c->lr; // 801C4C64
  c->r[3]=c->r[3]+0x00000040u; // 801C4C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4C6C
  c->lr=0x801C4C74u; f_80155BD0(c); // 801C4C70
  c->r[0]=c->r[3]+0x00000087u; // 801C4C74
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C4C78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4C7C
  c->lr=c->r[0]; // 801C4C80
  c->r[1]=c->r[1]+0x00000010u; // 801C4C84
  return; // 801C4C88
}

// fn_801C4C90
void f_801C4C90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C4C90
  f_801BA4C0(c); return; // 801C4C94
}

// fn_801C4CA0
void f_801C4CA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801C4CA0
  f_801BA530(c); return; // 801C4CA4
}

// fn_801C4CB0
void f_801C4CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4CB0
  c->r[0]=c->lr; // 801C4CB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4CB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4CBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4CC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C4CC4
  c->r[29]=c->r[3]|c->r[3]; // 801C4CC8
  c->r[3]=c->r[3]+0x00000040u; // 801C4CCC
  c->lr=0x801C4CD4u; f_80155BD0(c); // 801C4CD0
  c->r[4]=R32(c->r[29]+0x00000010u); // 801C4CD4
  c->r[0]=c->r[3]+0x00000087u; // 801C4CD8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C4CDC
  cmps(c,0,(int32_t)c->r[4],0); // 801C4CE0
  if (!crb(c,2)) { goto L_801C4CF0; } // 801C4CE4
  c->r[0]=0u+0x00000000u; // 801C4CE8
  goto L_801C4CF8; // 801C4CEC
L_801C4CF0:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C4CF0
  c->r[0]=c->r[0]-c->r[4]; // 801C4CF4
L_801C4CF8:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C4CF8
  if (!crb(c,1)) { goto L_801C4D08; } // 801C4CFC
  c->r[3]=0u+0x00000000u; // 801C4D00
  goto L_801C4D88; // 801C4D04
L_801C4D08:;
  c->r[3]=c->r[29]+0x00000010u; // 801C4D08
  c->r[4]=c->r[1]+0x0000000Cu; // 801C4D0C
  c->r[5]=c->r[1]+0x00000008u; // 801C4D10
  c->lr=0x801C4D18u; f_801BA580(c); // 801C4D14
  c->r[3]=c->r[29]+0x00000040u; // 801C4D18
  c->lr=0x801C4D20u; f_80155C30(c); // 801C4D1C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C4D20
  c->r[30]=c->r[3]|c->r[3]; // 801C4D24
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C4D28
  c->r[3]=c->r[29]+0x00000010u; // 801C4D2C
  c->lr=0x801C4D34u; f_801BA5E0(c); // 801C4D30
  c->r[31]=c->r[3]|c->r[3]; // 801C4D34
  c->r[3]=c->r[29]+0x00000040u; // 801C4D38
  c->lr=0x801C4D40u; f_80155BD0(c); // 801C4D3C
  c->r[3]=c->r[3]+0x00000087u; // 801C4D40
  c->r[0]=c->r[31]+0x00000087u; // 801C4D44
  c->r[7]=rotl(c->r[3],0)&0xFFFFFFE0u; // 801C4D48
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C4D4C
  cmpu(c,0,c->r[7],c->r[6]); // 801C4D50
  if (crb(c,2)) { goto L_801C4D74; } // 801C4D54
  c->r[3]=0u+0x803A0000u; // 801C4D58
  c->r[5]=0u+0x803A0000u; // 801C4D5C
  c->r[3]=c->r[3]+0xFFFFE820u; // 801C4D60
  c->r[4]=0u+0x0000008Du; // 801C4D64
  c->r[5]=c->r[5]+0xFFFFE834u; // 801C4D68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4D6C
  c->lr=0x801C4D74u; f_80212300(c); // 801C4D70
L_801C4D74:;
  c->r[0]=0u-c->r[30]; // 801C4D74
  c->r[3]=0u+0x00000001u; // 801C4D78
  c->r[0]=c->r[0]|c->r[30]; // 801C4D7C
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 801C4D80
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C4D84
L_801C4D88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4D88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4D8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4D90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C4D94
  c->lr=c->r[0]; // 801C4D98
  c->r[1]=c->r[1]+0x00000020u; // 801C4D9C
  return; // 801C4DA0
}

// fn_801C4DB0
void f_801C4DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4DB0
  c->r[0]=c->lr; // 801C4DB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4DB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4DBC
  c->r[31]=c->r[3]|c->r[3]; // 801C4DC0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C4DC4
  cmps(c,0,(int32_t)c->r[0],0); // 801C4DC8
  if (crb(c,2)) { goto L_801C4E00; } // 801C4DCC
  c->r[0]=0u+0x00000000u; // 801C4DD0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C4DD4
  c->r[3]=c->r[3]+0x00000010u; // 801C4DD8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C4DDC
  c->r[5]=c->r[1]+0x00000008u; // 801C4DE0
  c->lr=0x801C4DE8u; f_801BA580(c); // 801C4DE4
  c->r[3]=c->r[31]+0x00000040u; // 801C4DE8
  c->lr=0x801C4DF0u; f_80155F40(c); // 801C4DEC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C4DF0
  c->r[3]=c->r[31]+0x00000010u; // 801C4DF4
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C4DF8
  c->lr=0x801C4E00u; f_801BA5E0(c); // 801C4DFC
L_801C4E00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4E00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4E04
  c->lr=c->r[0]; // 801C4E08
  c->r[1]=c->r[1]+0x00000020u; // 801C4E0C
  return; // 801C4E10
}

// fn_801C4E20
void f_801C4E20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4E20
  c->r[0]=c->lr; // 801C4E24
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4E28
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4E2C
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4E30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4E34
  c->r[31]=c->r[3]|c->r[3]; // 801C4E38
  fcmp(c,0,c->f[1],c->f[0]); // 801C4E3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4E40
  c->r[30]=0u+0x803A0000u; // 801C4E44
  c->r[30]=c->r[30]+0xFFFFE820u; // 801C4E48
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C4E4C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C4E50
  c->r[28]=c->r[4]|c->r[4]; // 801C4E54
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4E58
  if (crb(c,2)) { goto L_801C4E74; } // 801C4E5C
  c->r[3]=c->r[30]+0x00000000u; // 801C4E60
  c->r[5]=c->r[30]+0x00000058u; // 801C4E64
  c->r[4]=0u+0x000000B4u; // 801C4E68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4E6C
  c->lr=0x801C4E74u; f_80212260(c); // 801C4E70
L_801C4E74:;
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4E74
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4E78
  fcmp(c,0,c->f[1],c->f[0]); // 801C4E7C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4E80
  if (crb(c,2)) { goto L_801C4E9C; } // 801C4E84
  c->r[3]=c->r[30]+0x00000000u; // 801C4E88
  c->r[5]=c->r[30]+0x00000098u; // 801C4E8C
  c->r[4]=0u+0x000000B5u; // 801C4E90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4E94
  c->lr=0x801C4E9Cu; f_80212260(c); // 801C4E98
L_801C4E9C:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4E9C
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4EA0
  fcmp(c,0,c->f[1],c->f[0]); // 801C4EA4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4EA8
  if (crb(c,2)) { goto L_801C4EC4; } // 801C4EAC
  c->r[3]=c->r[30]+0x00000000u; // 801C4EB0
  c->r[5]=c->r[30]+0x000000E0u; // 801C4EB4
  c->r[4]=0u+0x000000B6u; // 801C4EB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C4EBC
  c->lr=0x801C4EC4u; f_80212260(c); // 801C4EC0
L_801C4EC4:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4EC4
  c->r[0]=0u+0x00000000u; // 801C4EC8
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4ECC
  fcmp(c,0,c->f[1],c->f[0]); // 801C4ED0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4ED4
  if (!crb(c,2)) { goto L_801C4EF0; } // 801C4ED8
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4EDC
  fcmp(c,0,c->f[1],c->f[0]); // 801C4EE0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C4EE4
  if (!crb(c,2)) { goto L_801C4EF0; } // 801C4EE8
  c->r[0]=0u+0x00000001u; // 801C4EEC
L_801C4EF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4EF0
  if (!crb(c,2)) { goto L_801C4F18; } // 801C4EF4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4EF8
  c->r[3]=c->r[30]+0x00000000u; // 801C4EFC
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[2]=RF64(ea);} // 801C4F00
  c->r[5]=c->r[30]+0x00000118u; // 801C4F04
  {uint32_t ea=c->r[2]+0xFFFFA7E8u; c->f[3]=RF64(ea);} // 801C4F08
  c->r[4]=0u+0x000000B7u; // 801C4F0C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C4F10
  c->lr=0x801C4F18u; f_80212260(c); // 801C4F14
L_801C4F18:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4F18
  c->r[0]=0u+0x00000000u; // 801C4F1C
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4F20
  fcmp(c,0,c->f[1],c->f[0]); // 801C4F24
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4F28
  if (!crb(c,2)) { goto L_801C4F44; } // 801C4F2C
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4F30
  fcmp(c,0,c->f[1],c->f[0]); // 801C4F34
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C4F38
  if (!crb(c,2)) { goto L_801C4F44; } // 801C4F3C
  c->r[0]=0u+0x00000001u; // 801C4F40
L_801C4F44:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4F44
  if (!crb(c,2)) { goto L_801C4F6C; } // 801C4F48
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4F4C
  c->r[3]=c->r[30]+0x00000000u; // 801C4F50
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[2]=RF64(ea);} // 801C4F54
  c->r[5]=c->r[30]+0x0000016Cu; // 801C4F58
  {uint32_t ea=c->r[2]+0xFFFFA7E8u; c->f[3]=RF64(ea);} // 801C4F5C
  c->r[4]=0u+0x000000B8u; // 801C4F60
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C4F64
  c->lr=0x801C4F6Cu; f_80212260(c); // 801C4F68
L_801C4F6C:;
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4F6C
  c->r[0]=0u+0x00000000u; // 801C4F70
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4F74
  fcmp(c,0,c->f[1],c->f[0]); // 801C4F78
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4F7C
  if (!crb(c,2)) { goto L_801C4F98; } // 801C4F80
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4F84
  fcmp(c,0,c->f[1],c->f[0]); // 801C4F88
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C4F8C
  if (!crb(c,2)) { goto L_801C4F98; } // 801C4F90
  c->r[0]=0u+0x00000001u; // 801C4F94
L_801C4F98:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4F98
  if (!crb(c,2)) { goto L_801C4FC0; } // 801C4F9C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4FA0
  c->r[3]=c->r[30]+0x00000000u; // 801C4FA4
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[2]=RF64(ea);} // 801C4FA8
  c->r[5]=c->r[30]+0x000001B8u; // 801C4FAC
  {uint32_t ea=c->r[2]+0xFFFFA7E8u; c->f[3]=RF64(ea);} // 801C4FB0
  c->r[4]=0u+0x000000B9u; // 801C4FB4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C4FB8
  c->lr=0x801C4FC0u; f_80212260(c); // 801C4FBC
L_801C4FC0:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4FC0
  c->r[0]=0u+0x00000000u; // 801C4FC4
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4FC8
  fcmp(c,0,c->f[1],c->f[0]); // 801C4FCC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C4FD0
  if (!crb(c,2)) { goto L_801C4FEC; } // 801C4FD4
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C4FD8
  fcmp(c,0,c->f[1],c->f[0]); // 801C4FDC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C4FE0
  if (!crb(c,2)) { goto L_801C4FEC; } // 801C4FE4
  c->r[0]=0u+0x00000001u; // 801C4FE8
L_801C4FEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C4FEC
  if (!crb(c,2)) { goto L_801C5014; } // 801C4FF0
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C4FF4
  c->r[3]=c->r[30]+0x00000000u; // 801C4FF8
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[2]=RF64(ea);} // 801C4FFC
  c->r[5]=c->r[30]+0x00000208u; // 801C5000
  {uint32_t ea=c->r[2]+0xFFFFA7E8u; c->f[3]=RF64(ea);} // 801C5004
  c->r[4]=0u+0x000000BAu; // 801C5008
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C500C
  c->lr=0x801C5014u; f_80212260(c); // 801C5010
L_801C5014:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5014
  c->r[0]=0u+0x00000000u; // 801C5018
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C501C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5020
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5024
  if (!crb(c,2)) { goto L_801C5040; } // 801C5028
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C502C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5030
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C5034
  if (!crb(c,2)) { goto L_801C5040; } // 801C5038
  c->r[0]=0u+0x00000001u; // 801C503C
L_801C5040:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C5040
  if (!crb(c,2)) { goto L_801C5068; } // 801C5044
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5048
  c->r[3]=c->r[30]+0x00000000u; // 801C504C
  {uint32_t ea=c->r[2]+0xFFFFA7E0u; c->f[2]=RF64(ea);} // 801C5050
  c->r[5]=c->r[30]+0x00000258u; // 801C5054
  {uint32_t ea=c->r[2]+0xFFFFA7E8u; c->f[3]=RF64(ea);} // 801C5058
  c->r[4]=0u+0x000000BBu; // 801C505C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C5060
  c->lr=0x801C5068u; f_80212260(c); // 801C5064
L_801C5068:;
  {uint32_t ea=c->r[28]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5068
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[8]=c->ps1[8]=RF32(ea);} // 801C506C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C5070
  {uint32_t ea=c->r[28]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C5074
  fcmp(c,0,c->f[2],c->f[8]); // 801C5078
  {uint32_t ea=c->r[28]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C507C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C5080
  {uint32_t ea=c->r[28]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5084
  c->r[3]=R32(c->r[28]+0x00000014u); // 801C5088
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 801C508C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5090
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5094
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[7]);} // 801C5098
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[6]);} // 801C509C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[5]);} // 801C50A0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[4]);} // 801C50A4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[3]);} // 801C50A8
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801C50AC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 801C50B0
  W32(c->r[31]+0x00000034u,c->r[0]); // 801C50B4
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 801C50B8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 801C50BC
  if (!crb(c,0)) { goto L_801C50C8; } // 801C50C0
  goto L_801C50CC; // 801C50C4
L_801C50C8:;
  c->f[8]=c->f[2]; // 801C50C8
L_801C50CC:;
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C50CC
  fcmp(c,0,c->f[8],c->f[0]); // 801C50D0
  c->r[0]=c->cr; // 801C50D4
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C50D8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C50DC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801C50E0
  c->r[29]=c->r[0]^0x00000001u; // 801C50E4
  c->r[0]=R32(c->r[28]+0x00000014u); // 801C50E8
  fcmp(c,0,c->f[0],c->f[1]); // 801C50EC
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801C50F0
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[8]);} // 801C50F4
  if (!crb(c,1)) { goto L_801C5100; } // 801C50F8
  goto L_801C5114; // 801C50FC
L_801C5100:;
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5100
  fcmp(c,0,c->f[0],c->f[1]); // 801C5104
  if (!crb(c,0)) { goto L_801C5110; } // 801C5108
  goto L_801C5114; // 801C510C
L_801C5110:;
  c->f[1]=c->f[0]; // 801C5110
L_801C5114:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5114
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5118
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 801C511C
  fcmp(c,0,c->f[0],c->f[2]); // 801C5120
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[1]);} // 801C5124
  W32(c->r[31]+0x00000100u,c->r[0]); // 801C5128
  if (!crb(c,0)) { goto L_801C5134; } // 801C512C
  goto L_801C5138; // 801C5130
L_801C5134:;
  c->f[2]=c->f[0]; // 801C5134
L_801C5138:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5138
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C513C
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[2]);} // 801C5140
  fcmp(c,0,c->f[0],c->f[1]); // 801C5144
  if (!crb(c,1)) { goto L_801C5150; } // 801C5148
  goto L_801C5164; // 801C514C
L_801C5150:;
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5150
  fcmp(c,0,c->f[0],c->f[1]); // 801C5154
  if (!crb(c,0)) { goto L_801C5160; } // 801C5158
  goto L_801C5164; // 801C515C
L_801C5160:;
  c->f[1]=c->f[0]; // 801C5160
L_801C5164:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5164
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5168
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[1]);} // 801C516C
  fcmp(c,0,c->f[0],c->f[2]); // 801C5170
  if (!crb(c,1)) { goto L_801C517C; } // 801C5174
  goto L_801C5190; // 801C5178
L_801C517C:;
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C517C
  fcmp(c,0,c->f[0],c->f[2]); // 801C5180
  if (!crb(c,0)) { goto L_801C518C; } // 801C5184
  goto L_801C5190; // 801C5188
L_801C518C:;
  c->f[2]=c->f[0]; // 801C518C
L_801C5190:;
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5190
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5194
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[2]);} // 801C5198
  fcmp(c,0,c->f[0],c->f[1]); // 801C519C
  if (!crb(c,1)) { goto L_801C51A8; } // 801C51A0
  goto L_801C51BC; // 801C51A4
L_801C51A8:;
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C51A8
  fcmp(c,0,c->f[0],c->f[1]); // 801C51AC
  if (!crb(c,0)) { goto L_801C51B8; } // 801C51B0
  goto L_801C51BC; // 801C51B4
L_801C51B8:;
  c->f[1]=c->f[0]; // 801C51B8
L_801C51BC:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C51BC
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C51C0
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[1]);} // 801C51C4
  fcmp(c,0,c->f[0],c->f[2]); // 801C51C8
  if (!crb(c,1)) { goto L_801C51D4; } // 801C51CC
  goto L_801C51E8; // 801C51D0
L_801C51D4:;
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C51D4
  fcmp(c,0,c->f[0],c->f[2]); // 801C51D8
  if (!crb(c,0)) { goto L_801C51E4; } // 801C51DC
  goto L_801C51E8; // 801C51E0
L_801C51E4:;
  c->f[2]=c->f[0]; // 801C51E4
L_801C51E8:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C51E8
  {uint32_t ea=c->r[2]+0xFFFFA7D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C51EC
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[2]);} // 801C51F0
  fcmp(c,0,c->f[0],c->f[1]); // 801C51F4
  if (!crb(c,1)) { goto L_801C5200; } // 801C51F8
  goto L_801C5214; // 801C51FC
L_801C5200:;
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5200
  fcmp(c,0,c->f[0],c->f[1]); // 801C5204
  if (!crb(c,0)) { goto L_801C5210; } // 801C5208
  goto L_801C5214; // 801C520C
L_801C5210:;
  c->f[1]=c->f[0]; // 801C5210
L_801C5214:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801C5214
  c->r[30]=0u+0x00000000u; // 801C5218
  {uint32_t ea=c->r[2]+0xFFFFA7DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C521C
  cmps(c,0,(int32_t)c->r[0],0); // 801C5220
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[1]);} // 801C5224
  W32(c->r[31]+0x00000118u,c->r[30]); // 801C5228
  W32(c->r[31]+0x0000011Cu,c->r[30]); // 801C522C
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[0]);} // 801C5230
  if (!crb(c,2)) { goto L_801C5240; } // 801C5234
  c->r[3]=0u+0x00000001u; // 801C5238
  goto L_801C52C8; // 801C523C
L_801C5240:;
  c->r[3]=c->r[31]+0x00000040u; // 801C5240
  c->lr=0x801C5248u; f_80155BD0(c); // 801C5244
  c->r[4]=R32(c->r[31]+0x00000010u); // 801C5248
  c->r[0]=c->r[3]+0x00000087u; // 801C524C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C5250
  cmps(c,0,(int32_t)c->r[4],0); // 801C5254
  if (!crb(c,2)) { goto L_801C5260; } // 801C5258
  goto L_801C5268; // 801C525C
L_801C5260:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C5260
  c->r[30]=c->r[0]-c->r[4]; // 801C5264
L_801C5268:;
  cmpu(c,0,c->r[3],c->r[30]); // 801C5268
  if (!crb(c,1)) { goto L_801C5278; } // 801C526C
  c->r[3]=0u+0x00000000u; // 801C5270
  goto L_801C52C8; // 801C5274
L_801C5278:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C5278
  if (crb(c,2)) { goto L_801C52B0; } // 801C527C
  c->r[3]=c->r[31]+0x00000010u; // 801C5280
  c->r[4]=c->r[1]+0x0000000Cu; // 801C5284
  c->r[5]=c->r[1]+0x00000008u; // 801C5288
  c->lr=0x801C5290u; f_801BA580(c); // 801C528C
  c->r[3]=c->r[31]+0x00000040u; // 801C5290
  c->lr=0x801C5298u; f_80155DB0(c); // 801C5294
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C5298
  c->r[29]=c->r[3]|c->r[3]; // 801C529C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C52A0
  c->r[3]=c->r[31]+0x00000010u; // 801C52A4
  c->lr=0x801C52ACu; f_801BA5E0(c); // 801C52A8
  goto L_801C52BC; // 801C52AC
L_801C52B0:;
  c->r[3]=c->r[31]+0x00000040u; // 801C52B0
  c->lr=0x801C52B8u; f_80155E80(c); // 801C52B4
  c->r[29]=c->r[3]|c->r[3]; // 801C52B8
L_801C52BC:;
  c->r[0]=0u-c->r[29]; // 801C52BC
  c->r[0]=c->r[0]|c->r[29]; // 801C52C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C52C4
L_801C52C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C52C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C52CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C52D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C52D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C52D8
  c->lr=c->r[0]; // 801C52DC
  c->r[1]=c->r[1]+0x00000020u; // 801C52E0
  return; // 801C52E4
}

// fn_801C52F0
void f_801C52F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C52F0
  c->r[0]=c->lr; // 801C52F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C52F8
  c->r[11]=c->r[1]+0x00000030u; // 801C52FC
  c->lr=0x801C5304u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C5300
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C5304
  c->r[31]=0u+0x803A0000u; // 801C5308
  c->r[27]=c->r[3]|c->r[3]; // 801C530C
  c->r[28]=c->r[5]|c->r[5]; // 801C5310
  cmps(c,0,(int32_t)c->r[0],0); // 801C5314
  c->r[29]=c->r[6]|c->r[6]; // 801C5318
  c->r[30]=c->r[7]|c->r[7]; // 801C531C
  c->r[31]=c->r[31]+0xFFFFE820u; // 801C5320
  if (crb(c,2)) { goto L_801C53A8; } // 801C5324
  cmps(c,0,(int32_t)c->r[8],2); // 801C5328
  if (crb(c,2)) { goto L_801C53A8; } // 801C532C
  cmps(c,0,(int32_t)c->r[4],3); // 801C5330
  if (!crb(c,0)) { goto L_801C534C; } // 801C5334
  c->r[3]=c->r[31]+0x00000000u; // 801C5338
  c->r[5]=c->r[31]+0x000002A4u; // 801C533C
  c->r[4]=0u+0x00000110u; // 801C5340
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5344
  c->lr=0x801C534Cu; f_80212260(c); // 801C5348
L_801C534C:;
  cmpu(c,0,c->r[29],0x00000180u); // 801C534C
  if (crb(c,2)) { goto L_801C5368; } // 801C5350
  c->r[3]=c->r[31]+0x00000000u; // 801C5354
  c->r[5]=c->r[31]+0x000002CCu; // 801C5358
  c->r[4]=0u+0x00000111u; // 801C535C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5360
  c->lr=0x801C5368u; f_80212260(c); // 801C5364
L_801C5368:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C5368
  if (crb(c,2)) { goto L_801C5384; } // 801C536C
  c->r[3]=c->r[31]+0x00000000u; // 801C5370
  c->r[5]=c->r[31]+0x00000300u; // 801C5374
  c->r[4]=0u+0x00000112u; // 801C5378
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C537C
  c->lr=0x801C5384u; f_80212260(c); // 801C5380
L_801C5384:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801C5384
  c->r[3]=c->r[1]+0x00000008u; // 801C5388
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C538C
  c->r[4]=c->r[27]+0x00000040u; // 801C5390
  c->r[0]=R32(c->r[28]+0x00000004u); // 801C5394
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C5398
  c->r[0]=R32(c->r[28]+0x00000008u); // 801C539C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C53A0
  c->lr=0x801C53A8u; f_80155FA0(c); // 801C53A4
L_801C53A8:;
  c->r[11]=c->r[1]+0x00000030u; // 801C53A8
  c->lr=0x801C53B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C53AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C53B0
  c->lr=c->r[0]; // 801C53B4
  c->r[1]=c->r[1]+0x00000030u; // 801C53B8
  return; // 801C53BC
}

// fn_801C53C0
void f_801C53C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C53C0
  c->r[0]=c->lr; // 801C53C4
  c->r[5]=0u+0x803A0000u; // 801C53C8
  {uint32_t ea=c->r[2]+0xFFFFA7F0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C53CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C53D0
  c->r[6]=0u+0x00000000u; // 801C53D4
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C53D8
  c->r[5]=c->r[5]+0xFFFFEF14u; // 801C53DC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801C53E0
  c->r[0]=0u+0x00000005u; // 801C53E4
  {uint32_t ea=c->r[2]+0xFFFFA7F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C53E8
  c->r[31]=c->r[3]|c->r[3]; // 801C53EC
  {uint32_t ea=c->r[2]+0xFFFFA7F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C53F0
  c->r[4]=c->r[1]+0x00000008u; // 801C53F4
  {uint32_t ea=c->r[2]+0xFFFFA7FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C53F8
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C53FC
  W32(c->r[3]+0x00000004u,c->r[6]); // 801C5400
  W32(c->r[3]+0x00000008u,c->r[6]); // 801C5404
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C5408
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 801C540C
  W32(c->r[3]+0x00000014u,c->r[6]); // 801C5410
  W32(c->r[3]+0x00000018u,c->r[6]); // 801C5414
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[5]);} // 801C5418
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[4]);} // 801C541C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[3]);} // 801C5420
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[2]);} // 801C5424
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C5428
  W32(c->r[3]+0x00000030u,c->r[0]); // 801C542C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[5]);} // 801C5430
  W32(c->r[3]+0x00000038u,c->r[6]); // 801C5434
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[0]);} // 801C5438
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801C543C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[5]);} // 801C5440
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801C5444
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 801C5448
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801C544C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 801C5450
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C5454
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 801C5458
  W32(c->r[1]+0x00000024u,c->r[6]); // 801C545C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801C5460
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 801C5464
  c->lr=0x801C546Cu; f_801C5710(c); // 801C5468
  c->r[3]=c->r[31]|c->r[31]; // 801C546C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C5470
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C5474
  c->lr=c->r[0]; // 801C5478
  c->r[1]=c->r[1]+0x00000040u; // 801C547C
  return; // 801C5480
}

// fn_801C5490
void f_801C5490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5490
  c->r[0]=c->lr; // 801C5494
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C549C
  c->r[31]=c->r[3]|c->r[3]; // 801C54A0
  c->r[3]=c->r[3]+0x00000044u; // 801C54A4
  c->lr=0x801C54ACu; f_80155BD0(c); // 801C54A8
  c->r[0]=c->r[3]+0x00000087u; // 801C54AC
  c->r[3]=c->r[31]+0x0000012Cu; // 801C54B0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C54B4
  c->lr=0x801C54BCu; f_80156900(c); // 801C54B8
  c->r[0]=c->r[3]+0x00000087u; // 801C54BC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C54C0
  cmpu(c,0,c->r[3],c->r[31]); // 801C54C4
  if (!crb(c,0)) { goto L_801C54D0; } // 801C54C8
  c->r[3]=c->r[31]|c->r[31]; // 801C54CC
L_801C54D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C54D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C54D4
  c->lr=c->r[0]; // 801C54D8
  c->r[1]=c->r[1]+0x00000010u; // 801C54DC
  return; // 801C54E0
}

// fn_801C54F0
void f_801C54F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C54F0
  f_801BA4C0(c); return; // 801C54F4
}

// fn_801C5500
void f_801C5500(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000014u; // 801C5500
  f_801BA530(c); return; // 801C5504
}

// fn_801C5510
void f_801C5510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5510
  c->r[0]=c->lr; // 801C5514
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5518
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C551C
  c->r[31]=c->r[3]|c->r[3]; // 801C5520
  c->r[3]=c->r[3]+0x00000044u; // 801C5524
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5528
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C552C
  c->lr=0x801C5534u; f_80155BD0(c); // 801C5530
  c->r[0]=c->r[3]+0x00000087u; // 801C5534
  c->r[3]=c->r[31]+0x0000012Cu; // 801C5538
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C553C
  c->lr=0x801C5544u; f_80156900(c); // 801C5540
  c->r[0]=c->r[3]+0x00000087u; // 801C5544
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C5548
  cmpu(c,0,c->r[3],c->r[30]); // 801C554C
  if (!crb(c,0)) { goto L_801C5558; } // 801C5550
  c->r[3]=c->r[30]|c->r[30]; // 801C5554
L_801C5558:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C5558
  cmps(c,0,(int32_t)c->r[4],0); // 801C555C
  if (!crb(c,2)) { goto L_801C556C; } // 801C5560
  c->r[0]=0u+0x00000000u; // 801C5564
  goto L_801C5574; // 801C5568
L_801C556C:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C556C
  c->r[0]=c->r[0]-c->r[4]; // 801C5570
L_801C5574:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C5574
  if (!crb(c,1)) { goto L_801C5584; } // 801C5578
  c->r[3]=0u+0x00000000u; // 801C557C
  goto L_801C5668; // 801C5580
L_801C5584:;
  c->lr=0x801C5588u; f_801B4F50(c); // 801C5584
  c->lr=0x801C558Cu; f_801B58C0(c); // 801C5588
  cmps(c,0,(int32_t)c->r[3],2); // 801C558C
  if (!crb(c,2)) { goto L_801C55E0; } // 801C5590
  c->r[0]=0u+0x00000001u; // 801C5594
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C5598
  c->r[3]=c->r[31]+0x00000014u; // 801C559C
  c->r[4]=c->r[1]+0x0000000Cu; // 801C55A0
  c->r[5]=c->r[1]+0x00000008u; // 801C55A4
  c->lr=0x801C55ACu; f_801BA580(c); // 801C55A8
  c->r[3]=c->r[31]+0x0000012Cu; // 801C55AC
  c->lr=0x801C55B4u; f_80156960(c); // 801C55B0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C55B4
  c->r[30]=c->r[3]|c->r[3]; // 801C55B8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C55BC
  c->r[3]=c->r[31]+0x00000014u; // 801C55C0
  c->lr=0x801C55C8u; f_801BA5E0(c); // 801C55C4
  c->r[29]=c->r[3]|c->r[3]; // 801C55C8
  c->r[3]=c->r[31]+0x0000012Cu; // 801C55CC
  c->lr=0x801C55D4u; f_80156900(c); // 801C55D0
  c->r[0]=c->r[3]+0x00000087u; // 801C55D4
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C55D8
  goto L_801C5628; // 801C55DC
L_801C55E0:;
  c->r[0]=0u+0x00000000u; // 801C55E0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C55E4
  c->r[3]=c->r[31]+0x00000014u; // 801C55E8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C55EC
  c->r[5]=c->r[1]+0x00000008u; // 801C55F0
  c->lr=0x801C55F8u; f_801BA580(c); // 801C55F4
  c->r[3]=c->r[31]+0x00000044u; // 801C55F8
  c->lr=0x801C5600u; f_80155C30(c); // 801C55FC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C5600
  c->r[30]=c->r[3]|c->r[3]; // 801C5604
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C5608
  c->r[3]=c->r[31]+0x00000014u; // 801C560C
  c->lr=0x801C5614u; f_801BA5E0(c); // 801C5610
  c->r[29]=c->r[3]|c->r[3]; // 801C5614
  c->r[3]=c->r[31]+0x00000044u; // 801C5618
  c->lr=0x801C5620u; f_80155BD0(c); // 801C561C
  c->r[0]=c->r[3]+0x00000087u; // 801C5620
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C5624
L_801C5628:;
  c->r[0]=c->r[29]+0x00000087u; // 801C5628
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C562C
  cmpu(c,0,c->r[7],c->r[6]); // 801C5630
  if (crb(c,2)) { goto L_801C5654; } // 801C5634
  c->r[3]=0u+0x803A0000u; // 801C5638
  c->r[5]=0u+0x803A0000u; // 801C563C
  c->r[3]=c->r[3]+0xFFFFEB80u; // 801C5640
  c->r[4]=0u+0x000000B3u; // 801C5644
  c->r[5]=c->r[5]+0xFFFFEB98u; // 801C5648
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C564C
  c->lr=0x801C5654u; f_80212300(c); // 801C5650
L_801C5654:;
  c->r[0]=0u-c->r[30]; // 801C5654
  c->r[3]=0u+0x00000001u; // 801C5658
  c->r[0]=c->r[0]|c->r[30]; // 801C565C
  W8(c->r[31]+0x0000000Cu,c->r[3]); // 801C5660
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C5664
L_801C5668:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5668
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C566C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5670
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5674
  c->lr=c->r[0]; // 801C5678
  c->r[1]=c->r[1]+0x00000020u; // 801C567C
  return; // 801C5680
}

// fn_801C5690
void f_801C5690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5690
  c->r[0]=c->lr; // 801C5694
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C569C
  c->r[31]=c->r[3]|c->r[3]; // 801C56A0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C56A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C56A8
  if (crb(c,2)) { goto L_801C56F8; } // 801C56AC
  c->r[0]=0u+0x00000000u; // 801C56B0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801C56B4
  c->r[3]=c->r[3]+0x00000014u; // 801C56B8
  c->r[4]=c->r[1]+0x0000000Cu; // 801C56BC
  c->r[5]=c->r[1]+0x00000008u; // 801C56C0
  c->lr=0x801C56C8u; f_801BA580(c); // 801C56C4
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C56C8
  cmps(c,0,(int32_t)c->r[0],1); // 801C56CC
  if (!crb(c,2)) { goto L_801C56E0; } // 801C56D0
  c->r[3]=c->r[31]+0x0000012Cu; // 801C56D4
  c->lr=0x801C56DCu; f_80156C90(c); // 801C56D8
  goto L_801C56E8; // 801C56DC
L_801C56E0:;
  c->r[3]=c->r[31]+0x00000044u; // 801C56E0
  c->lr=0x801C56E8u; f_80155F40(c); // 801C56E4
L_801C56E8:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C56E8
  c->r[3]=c->r[31]+0x00000014u; // 801C56EC
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C56F0
  c->lr=0x801C56F8u; f_801BA5E0(c); // 801C56F4
L_801C56F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C56F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C56FC
  c->lr=c->r[0]; // 801C5700
  c->r[1]=c->r[1]+0x00000020u; // 801C5704
  return; // 801C5708
}

// fn_801C5710
void f_801C5710(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5710
  c->r[0]=c->lr; // 801C5714
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5718
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C571C
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5720
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5724
  c->r[31]=c->r[3]|c->r[3]; // 801C5728
  fcmp(c,0,c->f[1],c->f[0]); // 801C572C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5730
  c->r[30]=0u+0x803A0000u; // 801C5734
  c->r[30]=c->r[30]+0xFFFFEB80u; // 801C5738
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C573C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C5740
  c->r[28]=c->r[4]|c->r[4]; // 801C5744
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5748
  if (crb(c,2)) { goto L_801C5764; } // 801C574C
  c->r[3]=c->r[30]+0x00000000u; // 801C5750
  c->r[5]=c->r[30]+0x0000005Cu; // 801C5754
  c->r[4]=0u+0x000000E1u; // 801C5758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C575C
  c->lr=0x801C5764u; f_80212260(c); // 801C5760
L_801C5764:;
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5764
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5768
  fcmp(c,0,c->f[1],c->f[0]); // 801C576C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5770
  if (crb(c,2)) { goto L_801C578C; } // 801C5774
  c->r[3]=c->r[30]+0x00000000u; // 801C5778
  c->r[5]=c->r[30]+0x0000009Cu; // 801C577C
  c->r[4]=0u+0x000000E2u; // 801C5780
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5784
  c->lr=0x801C578Cu; f_80212260(c); // 801C5788
L_801C578C:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C578C
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5790
  fcmp(c,0,c->f[1],c->f[0]); // 801C5794
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5798
  if (crb(c,2)) { goto L_801C57B4; } // 801C579C
  c->r[3]=c->r[30]+0x00000000u; // 801C57A0
  c->r[5]=c->r[30]+0x000000E8u; // 801C57A4
  c->r[4]=0u+0x000000E3u; // 801C57A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C57AC
  c->lr=0x801C57B4u; f_80212260(c); // 801C57B0
L_801C57B4:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C57B4
  c->r[0]=0u+0x00000000u; // 801C57B8
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C57BC
  fcmp(c,0,c->f[1],c->f[0]); // 801C57C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C57C4
  if (!crb(c,2)) { goto L_801C57E0; } // 801C57C8
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C57CC
  fcmp(c,0,c->f[1],c->f[0]); // 801C57D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C57D4
  if (!crb(c,2)) { goto L_801C57E0; } // 801C57D8
  c->r[0]=0u+0x00000001u; // 801C57DC
L_801C57E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C57E0
  if (!crb(c,2)) { goto L_801C5808; } // 801C57E4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C57E8
  c->r[3]=c->r[30]+0x00000000u; // 801C57EC
  {uint32_t ea=c->r[2]+0xFFFFA808u; c->f[2]=RF64(ea);} // 801C57F0
  c->r[5]=c->r[30]+0x00000120u; // 801C57F4
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[3]=RF64(ea);} // 801C57F8
  c->r[4]=0u+0x000000E4u; // 801C57FC
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C5800
  c->lr=0x801C5808u; f_80212260(c); // 801C5804
L_801C5808:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5808
  c->r[0]=0u+0x00000000u; // 801C580C
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5810
  fcmp(c,0,c->f[1],c->f[0]); // 801C5814
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5818
  if (!crb(c,2)) { goto L_801C5834; } // 801C581C
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5820
  fcmp(c,0,c->f[1],c->f[0]); // 801C5824
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C5828
  if (!crb(c,2)) { goto L_801C5834; } // 801C582C
  c->r[0]=0u+0x00000001u; // 801C5830
L_801C5834:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C5834
  if (!crb(c,2)) { goto L_801C585C; } // 801C5838
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C583C
  c->r[3]=c->r[30]+0x00000000u; // 801C5840
  {uint32_t ea=c->r[2]+0xFFFFA808u; c->f[2]=RF64(ea);} // 801C5844
  c->r[5]=c->r[30]+0x00000174u; // 801C5848
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[3]=RF64(ea);} // 801C584C
  c->r[4]=0u+0x000000E5u; // 801C5850
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C5854
  c->lr=0x801C585Cu; f_80212260(c); // 801C5858
L_801C585C:;
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C585C
  c->r[0]=0u+0x00000000u; // 801C5860
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5864
  fcmp(c,0,c->f[1],c->f[0]); // 801C5868
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C586C
  if (!crb(c,2)) { goto L_801C5888; } // 801C5870
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5874
  fcmp(c,0,c->f[1],c->f[0]); // 801C5878
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C587C
  if (!crb(c,2)) { goto L_801C5888; } // 801C5880
  c->r[0]=0u+0x00000001u; // 801C5884
L_801C5888:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C5888
  if (!crb(c,2)) { goto L_801C58B0; } // 801C588C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5890
  c->r[3]=c->r[30]+0x00000000u; // 801C5894
  {uint32_t ea=c->r[2]+0xFFFFA808u; c->f[2]=RF64(ea);} // 801C5898
  c->r[5]=c->r[30]+0x000001C0u; // 801C589C
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[3]=RF64(ea);} // 801C58A0
  c->r[4]=0u+0x000000E6u; // 801C58A4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C58A8
  c->lr=0x801C58B0u; f_80212260(c); // 801C58AC
L_801C58B0:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C58B0
  c->r[0]=0u+0x00000000u; // 801C58B4
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C58B8
  fcmp(c,0,c->f[1],c->f[0]); // 801C58BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C58C0
  if (!crb(c,2)) { goto L_801C58DC; } // 801C58C4
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C58C8
  fcmp(c,0,c->f[1],c->f[0]); // 801C58CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C58D0
  if (!crb(c,2)) { goto L_801C58DC; } // 801C58D4
  c->r[0]=0u+0x00000001u; // 801C58D8
L_801C58DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C58DC
  if (!crb(c,2)) { goto L_801C5904; } // 801C58E0
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C58E4
  c->r[3]=c->r[30]+0x00000000u; // 801C58E8
  {uint32_t ea=c->r[2]+0xFFFFA808u; c->f[2]=RF64(ea);} // 801C58EC
  c->r[5]=c->r[30]+0x00000210u; // 801C58F0
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[3]=RF64(ea);} // 801C58F4
  c->r[4]=0u+0x000000E7u; // 801C58F8
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C58FC
  c->lr=0x801C5904u; f_80212260(c); // 801C5900
L_801C5904:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5904
  c->r[0]=0u+0x00000000u; // 801C5908
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C590C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5910
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C5914
  if (!crb(c,2)) { goto L_801C5930; } // 801C5918
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C591C
  fcmp(c,0,c->f[1],c->f[0]); // 801C5920
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801C5924
  if (!crb(c,2)) { goto L_801C5930; } // 801C5928
  c->r[0]=0u+0x00000001u; // 801C592C
L_801C5930:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C5930
  if (!crb(c,2)) { goto L_801C5958; } // 801C5934
  {uint32_t ea=c->r[28]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5938
  c->r[3]=c->r[30]+0x00000000u; // 801C593C
  {uint32_t ea=c->r[2]+0xFFFFA808u; c->f[2]=RF64(ea);} // 801C5940
  c->r[5]=c->r[30]+0x00000260u; // 801C5944
  {uint32_t ea=c->r[2]+0xFFFFA810u; c->f[3]=RF64(ea);} // 801C5948
  c->r[4]=0u+0x000000E8u; // 801C594C
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801C5950
  c->lr=0x801C5958u; f_80212260(c); // 801C5954
L_801C5958:;
  {uint32_t ea=c->r[28]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5958
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C595C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C5960
  {uint32_t ea=c->r[28]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C5964
  fcmp(c,0,c->f[2],c->f[8]); // 801C5968
  {uint32_t ea=c->r[28]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C596C
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C5970
  {uint32_t ea=c->r[28]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C5974
  c->r[3]=R32(c->r[28]+0x00000014u); // 801C5978
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 801C597C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5980
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5984
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[7]);} // 801C5988
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[6]);} // 801C598C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[5]);} // 801C5990
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[4]);} // 801C5994
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[3]);} // 801C5998
  W32(c->r[31]+0x00000030u,c->r[3]); // 801C599C
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 801C59A0
  W32(c->r[31]+0x00000038u,c->r[0]); // 801C59A4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 801C59A8
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 801C59AC
  if (!crb(c,0)) { goto L_801C59B8; } // 801C59B0
  goto L_801C59BC; // 801C59B4
L_801C59B8:;
  c->f[8]=c->f[2]; // 801C59B8
L_801C59BC:;
  {uint32_t ea=c->r[31]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C59BC
  fcmp(c,0,c->f[8],c->f[0]); // 801C59C0
  c->r[0]=c->cr; // 801C59C4
  {uint32_t ea=c->r[28]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C59C8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C59CC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 801C59D0
  c->r[29]=c->r[0]^0x00000001u; // 801C59D4
  c->r[0]=R32(c->r[28]+0x00000014u); // 801C59D8
  fcmp(c,0,c->f[0],c->f[1]); // 801C59DC
  W32(c->r[31]+0x000001FCu,c->r[0]); // 801C59E0
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801C59E4
  {uint32_t ea=c->r[31]+0x00000200u; WF32(ea,c->f[8]);} // 801C59E8
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[8]);} // 801C59EC
  if (!crb(c,1)) { goto L_801C59F8; } // 801C59F0
  goto L_801C5A0C; // 801C59F4
L_801C59F8:;
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C59F8
  fcmp(c,0,c->f[0],c->f[1]); // 801C59FC
  if (!crb(c,0)) { goto L_801C5A08; } // 801C5A00
  goto L_801C5A0C; // 801C5A04
L_801C5A08:;
  c->f[1]=c->f[0]; // 801C5A08
L_801C5A0C:;
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5A0C
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5A10
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 801C5A14
  fcmp(c,0,c->f[0],c->f[2]); // 801C5A18
  {uint32_t ea=c->r[31]+0x00000204u; WF32(ea,c->f[1]);} // 801C5A1C
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[1]);} // 801C5A20
  W32(c->r[31]+0x00000208u,c->r[0]); // 801C5A24
  W32(c->r[31]+0x00000104u,c->r[0]); // 801C5A28
  if (!crb(c,0)) { goto L_801C5A34; } // 801C5A2C
  goto L_801C5A38; // 801C5A30
L_801C5A34:;
  c->f[2]=c->f[0]; // 801C5A34
L_801C5A38:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5A38
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5A3C
  {uint32_t ea=c->r[31]+0x0000020Cu; WF32(ea,c->f[2]);} // 801C5A40
  fcmp(c,0,c->f[0],c->f[1]); // 801C5A44
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[2]);} // 801C5A48
  if (!crb(c,1)) { goto L_801C5A54; } // 801C5A4C
  goto L_801C5A68; // 801C5A50
L_801C5A54:;
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5A54
  fcmp(c,0,c->f[0],c->f[1]); // 801C5A58
  if (!crb(c,0)) { goto L_801C5A64; } // 801C5A5C
  goto L_801C5A68; // 801C5A60
L_801C5A64:;
  c->f[1]=c->f[0]; // 801C5A64
L_801C5A68:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5A68
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5A6C
  {uint32_t ea=c->r[31]+0x00000210u; WF32(ea,c->f[1]);} // 801C5A70
  fcmp(c,0,c->f[0],c->f[2]); // 801C5A74
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[1]);} // 801C5A78
  if (!crb(c,1)) { goto L_801C5A84; } // 801C5A7C
  goto L_801C5A98; // 801C5A80
L_801C5A84:;
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5A84
  fcmp(c,0,c->f[0],c->f[2]); // 801C5A88
  if (!crb(c,0)) { goto L_801C5A94; } // 801C5A8C
  goto L_801C5A98; // 801C5A90
L_801C5A94:;
  c->f[2]=c->f[0]; // 801C5A94
L_801C5A98:;
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5A98
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5A9C
  {uint32_t ea=c->r[31]+0x00000214u; WF32(ea,c->f[2]);} // 801C5AA0
  fcmp(c,0,c->f[0],c->f[1]); // 801C5AA4
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[2]);} // 801C5AA8
  if (!crb(c,1)) { goto L_801C5AB4; } // 801C5AAC
  goto L_801C5AC8; // 801C5AB0
L_801C5AB4:;
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5AB4
  fcmp(c,0,c->f[0],c->f[1]); // 801C5AB8
  if (!crb(c,0)) { goto L_801C5AC4; } // 801C5ABC
  goto L_801C5AC8; // 801C5AC0
L_801C5AC4:;
  c->f[1]=c->f[0]; // 801C5AC4
L_801C5AC8:;
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5AC8
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5ACC
  {uint32_t ea=c->r[31]+0x00000218u; WF32(ea,c->f[1]);} // 801C5AD0
  fcmp(c,0,c->f[0],c->f[2]); // 801C5AD4
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[1]);} // 801C5AD8
  if (!crb(c,1)) { goto L_801C5AE4; } // 801C5ADC
  goto L_801C5AF8; // 801C5AE0
L_801C5AE4:;
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C5AE4
  fcmp(c,0,c->f[0],c->f[2]); // 801C5AE8
  if (!crb(c,0)) { goto L_801C5AF4; } // 801C5AEC
  goto L_801C5AF8; // 801C5AF0
L_801C5AF4:;
  c->f[2]=c->f[0]; // 801C5AF4
L_801C5AF8:;
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5AF8
  {uint32_t ea=c->r[2]+0xFFFFA800u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5AFC
  {uint32_t ea=c->r[31]+0x0000021Cu; WF32(ea,c->f[2]);} // 801C5B00
  fcmp(c,0,c->f[0],c->f[1]); // 801C5B04
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[2]);} // 801C5B08
  if (!crb(c,1)) { goto L_801C5B14; } // 801C5B0C
  goto L_801C5B28; // 801C5B10
L_801C5B14:;
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C5B14
  fcmp(c,0,c->f[0],c->f[1]); // 801C5B18
  if (!crb(c,0)) { goto L_801C5B24; } // 801C5B1C
  goto L_801C5B28; // 801C5B20
L_801C5B24:;
  c->f[1]=c->f[0]; // 801C5B24
L_801C5B28:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801C5B28
  c->r[3]=0u+0x00000000u; // 801C5B2C
  {uint32_t ea=c->r[2]+0xFFFFA804u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C5B30
  cmps(c,0,(int32_t)c->r[0],0); // 801C5B34
  {uint32_t ea=c->r[31]+0x00000228u; WF32(ea,c->f[1]);} // 801C5B38
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[1]);} // 801C5B3C
  W32(c->r[31]+0x0000011Cu,c->r[3]); // 801C5B40
  W32(c->r[31]+0x00000120u,c->r[3]); // 801C5B44
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[0]);} // 801C5B48
  W32(c->r[31]+0x00000220u,c->r[3]); // 801C5B4C
  W32(c->r[31]+0x00000224u,c->r[3]); // 801C5B50
  {uint32_t ea=c->r[31]+0x0000022Cu; WF32(ea,c->f[0]);} // 801C5B54
  if (!crb(c,2)) { goto L_801C5B64; } // 801C5B58
  c->r[3]=0u+0x00000001u; // 801C5B5C
  goto L_801C5C3C; // 801C5B60
L_801C5B64:;
  c->r[3]=c->r[31]+0x00000044u; // 801C5B64
  c->lr=0x801C5B6Cu; f_80155BD0(c); // 801C5B68
  c->r[0]=c->r[3]+0x00000087u; // 801C5B6C
  c->r[3]=c->r[31]+0x0000012Cu; // 801C5B70
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C5B74
  c->lr=0x801C5B7Cu; f_80156900(c); // 801C5B78
  c->r[0]=c->r[3]+0x00000087u; // 801C5B7C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C5B80
  cmpu(c,0,c->r[3],c->r[30]); // 801C5B84
  if (!crb(c,0)) { goto L_801C5B90; } // 801C5B88
  c->r[3]=c->r[30]|c->r[30]; // 801C5B8C
L_801C5B90:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C5B90
  cmps(c,0,(int32_t)c->r[4],0); // 801C5B94
  if (!crb(c,2)) { goto L_801C5BA4; } // 801C5B98
  c->r[0]=0u+0x00000000u; // 801C5B9C
  goto L_801C5BAC; // 801C5BA0
L_801C5BA4:;
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801C5BA4
  c->r[0]=c->r[0]-c->r[4]; // 801C5BA8
L_801C5BAC:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C5BAC
  if (!crb(c,1)) { goto L_801C5BBC; } // 801C5BB0
  c->r[3]=0u+0x00000000u; // 801C5BB4
  goto L_801C5C3C; // 801C5BB8
L_801C5BBC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C5BBC
  if (crb(c,2)) { goto L_801C5C0C; } // 801C5BC0
  c->r[3]=c->r[31]+0x00000014u; // 801C5BC4
  c->r[4]=c->r[1]+0x0000000Cu; // 801C5BC8
  c->r[5]=c->r[1]+0x00000008u; // 801C5BCC
  c->lr=0x801C5BD4u; f_801BA580(c); // 801C5BD0
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C5BD4
  cmps(c,0,(int32_t)c->r[0],1); // 801C5BD8
  if (!crb(c,2)) { goto L_801C5BEC; } // 801C5BDC
  c->r[3]=c->r[31]+0x0000012Cu; // 801C5BE0
  c->lr=0x801C5BE8u; f_80156B00(c); // 801C5BE4
  goto L_801C5BF4; // 801C5BE8
L_801C5BEC:;
  c->r[3]=c->r[31]+0x00000044u; // 801C5BEC
  c->lr=0x801C5BF4u; f_80155DB0(c); // 801C5BF0
L_801C5BF4:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C5BF4
  c->r[29]=c->r[3]|c->r[3]; // 801C5BF8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801C5BFC
  c->r[3]=c->r[31]+0x00000014u; // 801C5C00
  c->lr=0x801C5C08u; f_801BA5E0(c); // 801C5C04
  goto L_801C5C30; // 801C5C08
L_801C5C0C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C5C0C
  cmps(c,0,(int32_t)c->r[0],1); // 801C5C10
  if (!crb(c,2)) { goto L_801C5C24; } // 801C5C14
  c->r[3]=c->r[31]+0x0000012Cu; // 801C5C18
  c->lr=0x801C5C20u; f_80156BD0(c); // 801C5C1C
  goto L_801C5C2C; // 801C5C20
L_801C5C24:;
  c->r[3]=c->r[31]+0x00000044u; // 801C5C24
  c->lr=0x801C5C2Cu; f_80155E80(c); // 801C5C28
L_801C5C2C:;
  c->r[29]=c->r[3]|c->r[3]; // 801C5C2C
L_801C5C30:;
  c->r[0]=0u-c->r[29]; // 801C5C30
  c->r[0]=c->r[0]|c->r[29]; // 801C5C34
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C5C38
L_801C5C3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5C3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5C40
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5C44
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5C48
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C5C4C
  c->lr=c->r[0]; // 801C5C50
  c->r[1]=c->r[1]+0x00000020u; // 801C5C54
  return; // 801C5C58
}

// fn_801C5C60
void f_801C5C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5C60
  c->r[0]=c->lr; // 801C5C64
  W32(c->r[1]+0x00000054u,c->r[0]); // 801C5C68
  c->r[11]=c->r[1]+0x00000050u; // 801C5C6C
  c->lr=0x801C5C74u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C5C70
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C5C74
  c->r[31]=0u+0x803A0000u; // 801C5C78
  c->r[25]=c->r[3]|c->r[3]; // 801C5C7C
  c->r[26]=c->r[4]|c->r[4]; // 801C5C80
  cmps(c,0,(int32_t)c->r[0],0); // 801C5C84
  c->r[27]=c->r[5]|c->r[5]; // 801C5C88
  c->r[28]=c->r[6]|c->r[6]; // 801C5C8C
  c->r[29]=c->r[7]|c->r[7]; // 801C5C90
  c->r[30]=c->r[8]|c->r[8]; // 801C5C94
  c->r[31]=c->r[31]+0xFFFFEB80u; // 801C5C98
  if (crb(c,2)) { goto L_801C5DA4; } // 801C5C9C
  cmps(c,0,(int32_t)c->r[4],3); // 801C5CA0
  if (!crb(c,0)) { goto L_801C5CBC; } // 801C5CA4
  c->r[3]=c->r[31]+0x00000000u; // 801C5CA8
  c->r[5]=c->r[31]+0x000002ACu; // 801C5CAC
  c->r[4]=0u+0x00000140u; // 801C5CB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5CB4
  c->lr=0x801C5CBCu; f_80212260(c); // 801C5CB8
L_801C5CBC:;
  cmpu(c,0,c->r[28],0x00000180u); // 801C5CBC
  if (crb(c,2)) { goto L_801C5CD8; } // 801C5CC0
  c->r[3]=c->r[31]+0x00000000u; // 801C5CC4
  c->r[5]=c->r[31]+0x000002D4u; // 801C5CC8
  c->r[4]=0u+0x00000141u; // 801C5CCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5CD0
  c->lr=0x801C5CD8u; f_80212260(c); // 801C5CD4
L_801C5CD8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C5CD8
  if (crb(c,2)) { goto L_801C5CF4; } // 801C5CDC
  c->r[3]=c->r[31]+0x00000000u; // 801C5CE0
  c->r[5]=c->r[31]+0x00000308u; // 801C5CE4
  c->r[4]=0u+0x00000142u; // 801C5CE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5CEC
  c->lr=0x801C5CF4u; f_80212260(c); // 801C5CF0
L_801C5CF4:;
  c->r[3]=c->r[30]+0xFFFFFFFEu; // 801C5CF4
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C5CF8
  c->r[3]=cntlz(c->r[3]); // 801C5CFC
  c->r[30]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C5D00
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C5D04
  if (crb(c,2)) { goto L_801C5D20; } // 801C5D08
  c->r[3]=c->r[31]+0x00000000u; // 801C5D0C
  c->r[5]=c->r[31]+0x00000340u; // 801C5D10
  c->r[4]=0u+0x00000144u; // 801C5D14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5D18
  c->lr=0x801C5D20u; f_80212260(c); // 801C5D1C
L_801C5D20:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 801C5D20
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801C5D24
  if (!crb(c,2)) { goto L_801C5DA4; } // 801C5D28
  cmps(c,0,(int32_t)c->r[0],1); // 801C5D2C
  if (!crb(c,2)) { goto L_801C5D80; } // 801C5D30
  cmps(c,0,(int32_t)c->r[26],4); // 801C5D34
  if (!crb(c,0)) { goto L_801C5D50; } // 801C5D38
  c->r[3]=c->r[31]+0x00000000u; // 801C5D3C
  c->r[5]=c->r[31]+0x0000036Cu; // 801C5D40
  c->r[4]=0u+0x00000149u; // 801C5D44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5D48
  c->lr=0x801C5D50u; f_80212260(c); // 801C5D4C
L_801C5D50:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C5D50
  c->r[3]=c->r[1]+0x00000018u; // 801C5D54
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C5D58
  c->r[4]=c->r[25]+0x0000012Cu; // 801C5D5C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C5D60
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C5D64
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C5D68
  W32(c->r[1]+0x00000020u,c->r[0]); // 801C5D6C
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801C5D70
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5D74
  c->lr=0x801C5D7Cu; f_80156CF0(c); // 801C5D78
  goto L_801C5DA4; // 801C5D7C
L_801C5D80:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 801C5D80
  c->r[3]=c->r[1]+0x00000008u; // 801C5D84
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C5D88
  c->r[4]=c->r[25]+0x00000044u; // 801C5D8C
  c->r[0]=R32(c->r[27]+0x00000004u); // 801C5D90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C5D94
  c->r[0]=R32(c->r[27]+0x00000008u); // 801C5D98
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C5D9C
  c->lr=0x801C5DA4u; f_80155FA0(c); // 801C5DA0
L_801C5DA4:;
  c->r[11]=c->r[1]+0x00000050u; // 801C5DA4
  c->lr=0x801C5DACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C5DA8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801C5DAC
  c->lr=c->r[0]; // 801C5DB0
  c->r[1]=c->r[1]+0x00000050u; // 801C5DB4
  return; // 801C5DB8
}

// fn_801C5DC0
void f_801C5DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5DC0
  c->r[0]=c->lr; // 801C5DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5DC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C5DCC
  c->r[31]=c->r[3]|c->r[3]; // 801C5DD0
  c->lr=0x801C5DD8u; f_801B4F50(c); // 801C5DD4
  c->lr=0x801C5DDCu; f_801B58C0(c); // 801C5DD8
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801C5DDC
  c->r[0]=R32(c->r[31]+0x00000010u); // 801C5DE0
  c->r[3]=cntlz(c->r[3]); // 801C5DE4
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801C5DE8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801C5DEC
  if (crb(c,2)) { goto L_801C5E1C; } // 801C5DF0
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C5DF4
  c->r[3]=c->r[31]|c->r[31]; // 801C5DF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C5DFC
  c->ctr=c->r[12]; // 801C5E00
  if (true) { c->lr=0x801C5E08u; dispatch(c,c->ctr); } // 801C5E04
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C5E08
  c->r[3]=c->r[31]|c->r[31]; // 801C5E0C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C5E10
  c->ctr=c->r[12]; // 801C5E14
  if (true) { c->lr=0x801C5E1Cu; dispatch(c,c->ctr); } // 801C5E18
L_801C5E1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5E1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C5E20
  c->lr=c->r[0]; // 801C5E24
  c->r[1]=c->r[1]+0x00000010u; // 801C5E28
  return; // 801C5E2C
}

// fn_801C5E30
void f_801C5E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5E30
  c->r[0]=c->lr; // 801C5E34
  cmps(c,0,(int32_t)c->r[4],0); // 801C5E38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5E3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5E40
  c->r[31]=c->r[3]|c->r[3]; // 801C5E44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5E48
  c->r[30]=c->r[6]|c->r[6]; // 801C5E4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5E50
  c->r[29]=c->r[5]|c->r[5]; // 801C5E54
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C5E58
  c->r[28]=c->r[4]|c->r[4]; // 801C5E5C
  if (!crb(c,2)) { goto L_801C5E80; } // 801C5E60
  c->r[3]=0u+0x803A0000u; // 801C5E64
  c->r[5]=0u+0x803A0000u; // 801C5E68
  c->r[3]=c->r[3]+0xFFFFEF38u; // 801C5E6C
  c->r[4]=0u+0x00000026u; // 801C5E70
  c->r[5]=c->r[5]+0xFFFFEF50u; // 801C5E74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5E78
  c->lr=0x801C5E80u; f_80212260(c); // 801C5E7C
L_801C5E80:;
  c->lr=0x801C5E84u; f_801251B0(c); // 801C5E80
  c->r[0]=c->r[28]+0x00000003u; // 801C5E84
  c->r[4]=c->r[30]+0x00000003u; // 801C5E88
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801C5E8C
  c->r[7]=0u+0x00000000u; // 801C5E90
  c->r[0]=c->r[6]-c->r[28]; // 801C5E94
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801C5E98
  c->r[0]=c->r[29]-c->r[0]; // 801C5E9C
  c->r[30]=divwu(c->r[0],c->r[4]); cr0(c,c->r[30]); // 801C5EA0
  if (crb(c,2)) { goto L_801C5F70; } // 801C5EA4
  cmpu(c,0,c->r[30],0x00000008u); // 801C5EA8
  c->r[5]=c->r[30]+0xFFFFFFF8u; // 801C5EAC
  if (!crb(c,1)) { goto L_801C5F4C; } // 801C5EB0
  c->r[0]=c->r[5]+0x00000007u; // 801C5EB4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801C5EB8
  c->ctr=c->r[0]; // 801C5EBC
  cmpu(c,0,c->r[5],0x00000000u); // 801C5EC0
  if (!crb(c,1)) { goto L_801C5F4C; } // 801C5EC4
L_801C5EC8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C5EC8
  c->r[8]=c->r[6]|c->r[6]; // 801C5ECC
  W32(c->r[6]+0x00000000u,c->r[0]); // 801C5ED0
  c->r[7]=c->r[7]+0x00000008u; // 801C5ED4
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5ED8
  c->r[6]=c->r[6]+c->r[4]; // 801C5EDC
  c->r[5]=c->r[6]|c->r[6]; // 801C5EE0
  W32(c->r[6]+0x00000000u,c->r[8]); // 801C5EE4
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5EE8
  c->r[6]=c->r[6]+c->r[4]; // 801C5EEC
  c->r[0]=c->r[6]|c->r[6]; // 801C5EF0
  W32(c->r[6]+0x00000000u,c->r[5]); // 801C5EF4
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5EF8
  c->r[6]=c->r[6]+c->r[4]; // 801C5EFC
  c->r[5]=c->r[6]|c->r[6]; // 801C5F00
  W32(c->r[6]+0x00000000u,c->r[0]); // 801C5F04
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5F08
  c->r[6]=c->r[6]+c->r[4]; // 801C5F0C
  c->r[0]=c->r[6]|c->r[6]; // 801C5F10
  W32(c->r[6]+0x00000000u,c->r[5]); // 801C5F14
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5F18
  c->r[6]=c->r[6]+c->r[4]; // 801C5F1C
  c->r[5]=c->r[6]|c->r[6]; // 801C5F20
  W32(c->r[6]+0x00000000u,c->r[0]); // 801C5F24
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5F28
  c->r[6]=c->r[6]+c->r[4]; // 801C5F2C
  c->r[0]=c->r[6]|c->r[6]; // 801C5F30
  W32(c->r[6]+0x00000000u,c->r[5]); // 801C5F34
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5F38
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[0]); c->r[6]=ea;} // 801C5F3C
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5F40
  c->r[6]=c->r[6]+c->r[4]; // 801C5F44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5EC8; } // 801C5F48
L_801C5F4C:;
  c->r[0]=c->r[30]-c->r[7]; // 801C5F4C
  c->ctr=c->r[0]; // 801C5F50
  cmpu(c,0,c->r[7],c->r[30]); // 801C5F54
  if (!crb(c,0)) { goto L_801C5F70; } // 801C5F58
L_801C5F5C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C5F5C
  W32(c->r[6]+0x00000000u,c->r[0]); // 801C5F60
  W32(c->r[31]+0x00000000u,c->r[6]); // 801C5F64
  c->r[6]=c->r[6]+c->r[4]; // 801C5F68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5F5C; } // 801C5F6C
L_801C5F70:;
  c->lr=0x801C5F74u; f_801251F0(c); // 801C5F70
  c->r[3]=c->r[30]|c->r[30]; // 801C5F74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5F78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5F7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5F80
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C5F84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C5F88
  c->lr=c->r[0]; // 801C5F8C
  c->r[1]=c->r[1]+0x00000020u; // 801C5F90
  return; // 801C5F94
}

// fn_801C5FA0
void f_801C5FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5FA0
  c->r[0]=c->lr; // 801C5FA4
  cmps(c,0,(int32_t)c->r[4],0); // 801C5FA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5FAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5FB0
  c->r[31]=c->r[5]|c->r[5]; // 801C5FB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C5FB8
  c->r[30]=c->r[4]|c->r[4]; // 801C5FBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C5FC0
  c->r[29]=c->r[3]|c->r[3]; // 801C5FC4
  if (!crb(c,2)) { goto L_801C5FE8; } // 801C5FC8
  c->r[3]=0u+0x803A0000u; // 801C5FCC
  c->r[5]=0u+0x803A0000u; // 801C5FD0
  c->r[3]=c->r[3]+0xFFFFEF38u; // 801C5FD4
  c->r[4]=0u+0x00000044u; // 801C5FD8
  c->r[5]=c->r[5]+0xFFFFEF50u; // 801C5FDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C5FE0
  c->lr=0x801C5FE8u; f_80212260(c); // 801C5FE4
L_801C5FE8:;
  c->lr=0x801C5FECu; f_801251B0(c); // 801C5FE8
  c->r[5]=R32(c->r[29]+0x00000000u); // 801C5FEC
  c->r[4]=c->r[30]+c->r[31]; // 801C5FF0
  goto L_801C601C; // 801C5FF4
L_801C5FF8:;
  cmpu(c,0,c->r[30],c->r[5]); // 801C5FF8
  if (crb(c,1)) { goto L_801C6014; } // 801C5FFC
  cmpu(c,0,c->r[5],c->r[4]); // 801C6000
  if (!crb(c,0)) { goto L_801C6014; } // 801C6004
  c->r[0]=R32(c->r[5]+0x00000000u); // 801C6008
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C600C
  goto L_801C6018; // 801C6010
L_801C6014:;
  c->r[29]=c->r[5]|c->r[5]; // 801C6014
L_801C6018:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 801C6018
L_801C601C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C601C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C5FF8; } // 801C6020
  c->lr=0x801C6028u; f_801251F0(c); // 801C6024
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6028
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C602C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6030
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6034
  c->lr=c->r[0]; // 801C6038
  c->r[1]=c->r[1]+0x00000020u; // 801C603C
  return; // 801C6040
}

// fn_801C6050
void f_801C6050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6050
  c->r[0]=c->lr; // 801C6054
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C605C
  c->r[31]=c->r[3]|c->r[3]; // 801C6060
  c->lr=0x801C6068u; f_801251B0(c); // 801C6064
  c->r[4]=R32(c->r[31]+0x00000000u); // 801C6068
  c->r[31]=0u+0x00000000u; // 801C606C
  goto L_801C6080; // 801C6070
  c->r[0]=c->r[0]|0x00000000u; // 801C6074
L_801C6078:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801C6078
  c->r[31]=c->r[31]+0x00000001u; // 801C607C
L_801C6080:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C6080
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6078; } // 801C6084
  c->lr=0x801C608Cu; f_801251F0(c); // 801C6088
  c->r[3]=c->r[31]|c->r[31]; // 801C608C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6090
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6094
  c->lr=c->r[0]; // 801C6098
  c->r[1]=c->r[1]+0x00000010u; // 801C609C
  return; // 801C60A0
}

// AllocImpl__Q44nw4r3snd6detail8PoolImplFv
void f_801C60B0(Ctx* __restrict c) {
  trace_call(0x801C60B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C60B0
  c->r[0]=c->lr; // 801C60B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C60B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C60BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C60C0
  c->r[30]=c->r[3]|c->r[3]; // 801C60C4
  c->lr=0x801C60CCu; f_801251B0(c); // 801C60C8
  c->r[31]=R32(c->r[30]+0x00000000u); // 801C60CC
  cmps(c,0,(int32_t)c->r[31],0); // 801C60D0
  if (!crb(c,2)) { goto L_801C60E4; } // 801C60D4
  c->lr=0x801C60DCu; f_801251F0(c); // 801C60D8
  c->r[3]=0u+0x00000000u; // 801C60DC
  goto L_801C60F4; // 801C60E0
L_801C60E4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C60E4
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C60E8
  c->lr=0x801C60F0u; f_801251F0(c); // 801C60EC
  c->r[3]=c->r[31]|c->r[31]; // 801C60F0
L_801C60F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C60F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C60F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C60FC
  c->lr=c->r[0]; // 801C6100
  c->r[1]=c->r[1]+0x00000010u; // 801C6104
  return; // 801C6108
}

// FreeImpl__Q44nw4r3snd6detail8PoolImplFPv
void f_801C6110(Ctx* __restrict c) {
  trace_call(0x801C6110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6110
  c->r[0]=c->lr; // 801C6114
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C611C
  c->r[31]=c->r[4]|c->r[4]; // 801C6120
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6124
  c->r[30]=c->r[3]|c->r[3]; // 801C6128
  c->lr=0x801C6130u; f_801251B0(c); // 801C612C
  c->r[0]=R32(c->r[30]+0x00000000u); // 801C6130
  W32(c->r[31]+0x00000000u,c->r[0]); // 801C6134
  W32(c->r[30]+0x00000000u,c->r[31]); // 801C6138
  c->lr=0x801C6140u; f_801251F0(c); // 801C613C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6144
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6148
  c->lr=c->r[0]; // 801C614C
  c->r[1]=c->r[1]+0x00000010u; // 801C6150
  return; // 801C6154
}

// Init__Q44nw4r3snd6detail8LfoParamFv
void f_801C6160(Ctx* __restrict c) {
  trace_call(0x801C6160u);
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6160
  c->r[4]=0u+0x00000001u; // 801C6164
  {uint32_t ea=c->r[2]+0xFFFFA81Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6168
  c->r[0]=0u+0x00000000u; // 801C616C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 801C6170
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801C6174
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801C6178
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C617C
  return; // 801C6180
}

// fn_801C6190
void f_801C6190(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6190
  c->r[0]=0u+0x00000000u; // 801C6194
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801C6198
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C619C
  return; // 801C61A0
}

// fn_801C61B0
void f_801C61B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C61B0
  c->r[6]=R32(c->r[3]+0x00000008u); // 801C61B4
  c->r[5]=R32(c->r[3]+0x00000010u); // 801C61B8
  cmpu(c,0,c->r[5],c->r[6]); // 801C61BC
  if (!crb(c,0)) { goto L_801C61E4; } // 801C61C0
  c->r[0]=c->r[5]+c->r[4]; // 801C61C4
  cmpu(c,0,c->r[0],c->r[6]); // 801C61C8
  if (crb(c,1)) { goto L_801C61D8; } // 801C61CC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C61D0
  goto L_801C6240; // 801C61D4
L_801C61D8:;
  c->r[0]=c->r[6]-c->r[5]; // 801C61D8
  W32(c->r[3]+0x00000010u,c->r[6]); // 801C61DC
  c->r[4]=c->r[4]-c->r[0]; // 801C61E0
L_801C61E4:;
  c->r[0]=0u+0x43300000u; // 801C61E4
  c->r[4]=c->r[4]^0x80000000u; // 801C61E8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801C61EC
  {uint32_t ea=c->r[2]+0xFFFFA828u; c->f[4]=RF64(ea);} // 801C61F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C61F4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C61F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C61FC
  {uint32_t ea=c->r[2]+0xFFFFA820u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6200
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801C6204
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6208
  W32(c->r[1]+0x00000018u,c->r[0]); // 801C620C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 801C6210
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801C6214
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801C6218
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801C621C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801C6220
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6224
  c->r[0]=c->r[0]^0x80000000u; // 801C6228
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C622C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801C6230
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801C6234
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801C6238
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801C623C
L_801C6240:;
  c->r[1]=c->r[1]+0x00000020u; // 801C6240
  return; // 801C6244
}

// fn_801C6250
void f_801C6250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6250
  c->r[0]=c->lr; // 801C6254
  {uint32_t ea=c->r[2]+0xFFFFA818u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6258
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C625C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6260
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C6264
  c->r[31]=c->r[3]|c->r[3]; // 801C6268
  fcmp(c,0,c->f[1],c->f[0]); // 801C626C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C6270
  if (!crb(c,2)) { goto L_801C627C; } // 801C6274
  goto L_801C63B4; // 801C6278
L_801C627C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 801C627C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C6280
  cmpu(c,0,c->r[4],c->r[0]); // 801C6284
  if (!crb(c,0)) { goto L_801C6290; } // 801C6288
  goto L_801C63B4; // 801C628C
L_801C6290:;
  {uint32_t ea=c->r[2]+0xFFFFA834u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C6290
  c->r[0]=0u+0x00000000u; // 801C6294
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C6298
  {uint32_t ea=c->r[2]+0xFFFFA830u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C629C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801C62A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C62A4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C62A8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801C62AC
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 801C62B0
  cmpu(c,0,c->r[30],0x0000007Fu); // 801C62B4
  if (crb(c,1)) { goto L_801C62C0; } // 801C62B8
  c->r[0]=0u+0x00000001u; // 801C62BC
L_801C62C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C62C0
  if (!crb(c,2)) { goto L_801C62F0; } // 801C62C4
  c->r[3]=0u+0x803A0000u; // 801C62C8
  c->r[5]=0u+0x803A0000u; // 801C62CC
  c->r[6]=c->r[30]|c->r[30]; // 801C62D0
  c->r[4]=0u+0x0000007Bu; // 801C62D4
  c->r[3]=c->r[3]+0xFFFFEF78u; // 801C62D8
  c->r[5]=c->r[5]+0xFFFFEF84u; // 801C62DC
  c->r[7]=0u+0x00000000u; // 801C62E0
  c->r[8]=0u+0x00000080u; // 801C62E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C62E8
  c->lr=0x801C62F0u; f_80212260(c); // 801C62EC
L_801C62F0:;
  cmps(c,0,(int32_t)c->r[30],32); // 801C62F0
  if (!crb(c,0)) { goto L_801C630C; } // 801C62F4
  c->r[3]=0u+0x80310000u; // 801C62F8
  c->r[3]=c->r[3]+0xFFFFB7A8u; // 801C62FC
  c->r[0]=R8(c->r[3]+c->r[30]); // 801C6300
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6304
  goto L_801C636C; // 801C6308
L_801C630C:;
  cmps(c,0,(int32_t)c->r[30],64); // 801C630C
  if (!crb(c,0)) { goto L_801C632C; } // 801C6310
  c->r[3]=0u+0x80310000u; // 801C6314
  c->r[0]=addc(c,~c->r[30],0x00000040u,1); // 801C6318
  c->r[3]=c->r[3]+0xFFFFB7A8u; // 801C631C
  c->r[0]=R8(c->r[3]+c->r[0]); // 801C6320
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6324
  goto L_801C636C; // 801C6328
L_801C632C:;
  cmps(c,0,(int32_t)c->r[30],96); // 801C632C
  if (!crb(c,0)) { goto L_801C6350; } // 801C6330
  c->r[3]=0u+0x80310000u; // 801C6334
  c->r[3]=c->r[3]+0xFFFFB7A8u; // 801C6338
  c->r[3]=c->r[30]+c->r[3]; // 801C633C
  c->r[0]=R8(c->r[3]+0xFFFFFFC0u); // 801C6340
  c->r[0]=0u-c->r[0]; // 801C6344
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6348
  goto L_801C636C; // 801C634C
L_801C6350:;
  c->r[0]=c->r[30]+0xFFFFFFA0u; // 801C6350
  c->r[3]=0u+0x80310000u; // 801C6354
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 801C6358
  c->r[3]=c->r[3]+0xFFFFB7A8u; // 801C635C
  c->r[0]=R8(c->r[3]+c->r[0]); // 801C6360
  c->r[0]=0u-c->r[0]; // 801C6364
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6368
L_801C636C:;
  c->r[3]=0u+0x43300000u; // 801C636C
  c->r[0]=c->r[0]^0x80000000u; // 801C6370
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C6374
  {uint32_t ea=c->r[2]+0xFFFFA828u; c->f[2]=RF64(ea);} // 801C6378
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C637C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801C6380
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801C6384
  {uint32_t ea=c->r[2]+0xFFFFA838u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6388
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C638C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6390
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C6394
  W32(c->r[1]+0x00000010u,c->r[3]); // 801C6398
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801C639C
  {uint32_t ea=c->r[2]+0xFFFFA840u; c->f[2]=RF64(ea);} // 801C63A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801C63A4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 801C63A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801C63AC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801C63B0
L_801C63B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C63B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C63B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C63BC
  c->lr=c->r[0]; // 801C63C0
  c->r[1]=c->r[1]+0x00000020u; // 801C63C4
  return; // 801C63C8
}

// fn_801C63D0
void f_801C63D0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801C63D0
  return; // 801C63D4
}

// fn_801C63E0
void f_801C63E0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801C63E0
  return; // 801C63E4
}

// fn_801C63F0
void f_801C63F0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801C63F0
  return; // 801C63F4
}

// fn_801C6400
void f_801C6400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6400
  c->r[0]=c->lr; // 801C6404
  cmps(c,0,(int32_t)c->r[3],0); // 801C6408
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C640C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6410
  c->r[31]=c->r[3]|c->r[3]; // 801C6414
  if (crb(c,2)) { goto L_801C6428; } // 801C6418
  cmps(c,0,(int32_t)c->r[4],0); // 801C641C
  if (!crb(c,1)) { goto L_801C6428; } // 801C6420
  c->lr=0x801C6428u; f_802E61AC(c); // 801C6424
L_801C6428:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6428
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C642C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6430
  c->lr=c->r[0]; // 801C6434
  c->r[1]=c->r[1]+0x00000010u; // 801C6438
  return; // 801C643C
}

// fn_801C6440
void f_801C6440(Ctx* __restrict c) {
  f_801CAA20(c); return; // 801C6440
}

// fn_801C6450
void f_801C6450(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6450
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C6454
  c->ctr=c->r[12]; // 801C6458
  if (true) { dispatch(c,c->ctr); return; } // 801C645C
}

// fn_801C6460
void f_801C6460(Ctx* __restrict c) {
  return; // 801C6460
}

// fn_801C6470
void f_801C6470(Ctx* __restrict c) {
  return; // 801C6470
}

// fn_801C6480
void f_801C6480(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CEu); // 801C6480
  return; // 801C6484
}

// fn_801C6490
void f_801C6490(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CDu); // 801C6490
  return; // 801C6494
}

// fn_801C64A0
void f_801C64A0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x000000CCu); // 801C64A0
  return; // 801C64A4
}

// fn_801C64B0
void f_801C64B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801C64B0
  f_801C6460(c); return; // 801C64B4
}

// fn_801C64C0
void f_801C64C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801C64C0
  f_801CA5F0(c); return; // 801C64C4
}

// fn_801C64D0
void f_801C64D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 801C64D0
  f_801C6450(c); return; // 801C64D4
}

// fn_801C64E0
void f_801C64E0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 801C64E0
  f_801C6440(c); return; // 801C64E4
}

// fn_801C64F0
void f_801C64F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C64F0
  c->r[0]=c->lr; // 801C64F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C64F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C64FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6500
  c->r[31]=c->r[3]|c->r[3]; // 801C6504
  if (crb(c,2)) { goto L_801C6518; } // 801C6508
  cmps(c,0,(int32_t)c->r[4],0); // 801C650C
  if (!crb(c,1)) { goto L_801C6518; } // 801C6510
  c->lr=0x801C6518u; f_802E61AC(c); // 801C6514
L_801C6518:;
  c->r[3]=c->r[31]|c->r[31]; // 801C6518
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C651C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6520
  c->lr=c->r[0]; // 801C6524
  c->r[1]=c->r[1]+0x00000010u; // 801C6528
  return; // 801C652C
}

// fn_801C6530
void f_801C6530(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6530
  c->r[0]=c->lr; // 801C6534
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6538
  c->r[11]=c->r[1]+0x00000030u; // 801C653C
  c->lr=0x801C6544u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6540
  cmps(c,0,(int32_t)c->r[4],0); // 801C6544
  c->r[31]=0u+0x803A0000u; // 801C6548
  c->r[22]=c->r[3]|c->r[3]; // 801C654C
  c->r[23]=c->r[4]|c->r[4]; // 801C6550
  c->r[24]=c->r[5]|c->r[5]; // 801C6554
  c->r[31]=c->r[31]+0xFFFFEFC0u; // 801C6558
  if (!crb(c,2)) { goto L_801C6574; } // 801C655C
  c->r[3]=c->r[31]+0x00000000u; // 801C6560
  c->r[5]=c->r[31]+0x00000014u; // 801C6564
  c->r[4]=0u+0x00000031u; // 801C6568
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C656C
  c->lr=0x801C6574u; f_80212260(c); // 801C6570
L_801C6574:;
  c->r[30]=R32(c->r[23]+0x000000C4u); // 801C6574
  cmps(c,0,(int32_t)c->r[30],0); // 801C6578
  if (!crb(c,2)) { goto L_801C6594; } // 801C657C
  c->r[3]=c->r[31]+0x00000000u; // 801C6580
  c->r[5]=c->r[31]+0x0000003Cu; // 801C6584
  c->r[4]=0u+0x00000033u; // 801C6588
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C658C
  c->lr=0x801C6594u; f_80212260(c); // 801C6590
L_801C6594:;
  c->r[3]=R32(c->r[23]+0x00000020u); // 801C6594
  c->r[27]=0u+0x00000000u; // 801C6598
  c->r[0]=0u+0x00000000u; // 801C659C
  c->r[26]=0u+0x00000001u; // 801C65A0
  c->r[5]=c->r[3]+0x00000001u; // 801C65A4
  W32(c->r[23]+0x00000020u,c->r[5]); // 801C65A8
  c->r[25]=R8(c->r[3]+0x00000000u); // 801C65AC
  cmpu(c,0,c->r[25],0x000000A2u); // 801C65B0
  if (!crb(c,2)) { goto L_801C65D4; } // 801C65B4
  c->r[4]=R8(c->r[23]+0x00000024u); // 801C65B8
  c->r[3]=c->r[5]+0x00000001u; // 801C65BC
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C65C0
  c->r[3]=0u-c->r[4]; // 801C65C4
  c->r[3]=c->r[3]|c->r[4]; // 801C65C8
  c->r[25]=R8(c->r[5]+0x00000000u); // 801C65CC
  c->r[26]=rotl(c->r[3],1)&0x00000001u; // 801C65D0
L_801C65D4:;
  cmpu(c,0,c->r[25],0x000000A3u); // 801C65D4
  if (!crb(c,2)) { goto L_801C65F4; } // 801C65D8
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C65DC
  c->r[27]=0u+0x00000002u; // 801C65E0
  c->r[3]=c->r[4]+0x00000001u; // 801C65E4
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C65E8
  c->r[25]=R8(c->r[4]+0x00000000u); // 801C65EC
  goto L_801C6630; // 801C65F0
L_801C65F4:;
  cmpu(c,0,c->r[25],0x000000A4u); // 801C65F4
  if (!crb(c,2)) { goto L_801C6614; } // 801C65F8
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C65FC
  c->r[27]=0u+0x00000004u; // 801C6600
  c->r[3]=c->r[4]+0x00000001u; // 801C6604
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C6608
  c->r[25]=R8(c->r[4]+0x00000000u); // 801C660C
  goto L_801C6630; // 801C6610
L_801C6614:;
  cmpu(c,0,c->r[25],0x000000A5u); // 801C6614
  if (!crb(c,2)) { goto L_801C6630; } // 801C6618
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C661C
  c->r[27]=0u+0x00000005u; // 801C6620
  c->r[3]=c->r[4]+0x00000001u; // 801C6624
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C6628
  c->r[25]=R8(c->r[4]+0x00000000u); // 801C662C
L_801C6630:;
  cmpu(c,0,c->r[25],0x000000A0u); // 801C6630
  if (!crb(c,2)) { goto L_801C6654; } // 801C6634
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C6638
  c->r[28]=0u+0x00000004u; // 801C663C
  c->r[0]=0u+0x00000001u; // 801C6640
  c->r[3]=c->r[4]+0x00000001u; // 801C6644
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C6648
  c->r[25]=R8(c->r[4]+0x00000000u); // 801C664C
  goto L_801C6674; // 801C6650
L_801C6654:;
  cmpu(c,0,c->r[25],0x000000A1u); // 801C6654
  if (!crb(c,2)) { goto L_801C6674; } // 801C6658
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C665C
  c->r[28]=0u+0x00000005u; // 801C6660
  c->r[0]=0u+0x00000001u; // 801C6664
  c->r[3]=c->r[4]+0x00000001u; // 801C6668
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C666C
  c->r[25]=R8(c->r[4]+0x00000000u); // 801C6670
L_801C6674:;
  c->r[3]=rotl(c->r[25],0)&0x00000080u; cr0(c,c->r[3]); // 801C6674
  if (!crb(c,2)) { goto L_801C6750; } // 801C6678
  c->r[7]=R32(c->r[23]+0x00000020u); // 801C667C
  cmps(c,0,(int32_t)c->r[0],0); // 801C6680
  c->r[3]=c->r[22]|c->r[22]; // 801C6684
  c->r[5]=c->r[30]|c->r[30]; // 801C6688
  c->r[0]=c->r[7]+0x00000001u; // 801C668C
  W32(c->r[23]+0x00000020u,c->r[0]); // 801C6690
  c->r[6]=c->r[23]|c->r[23]; // 801C6694
  c->r[4]=c->r[23]+0x00000020u; // 801C6698
  c->r[27]=R8(c->r[7]+0x00000000u); // 801C669C
  c->r[7]=0u+0x00000003u; // 801C66A0
  if (crb(c,2)) { goto L_801C66AC; } // 801C66A4
  c->r[7]=c->r[28]|c->r[28]; // 801C66A8
L_801C66AC:;
  c->lr=0x801C66B0u; f_801C7770(c); // 801C66AC
  c->r[0]=R8(c->r[23]+0x0000008Cu); // 801C66B0
  cmps(c,0,(int32_t)c->r[26],0); // 801C66B4
  c->r[26]=c->r[3]|c->r[3]; // 801C66B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C66BC
  c->r[3]=c->r[25]+c->r[0]; // 801C66C0
  if (!crb(c,2)) { goto L_801C66D0; } // 801C66C4
  c->r[3]=0u+0x00000000u; // 801C66C8
  goto L_801C6C40; // 801C66CC
L_801C66D0:;
  cmps(c,0,(int32_t)c->r[3],127); // 801C66D0
  if (!crb(c,1)) { goto L_801C66E0; } // 801C66D4
  c->r[5]=0u+0x0000007Fu; // 801C66D8
  goto L_801C66E8; // 801C66DC
L_801C66E0:;
  c->r[0]=sraw(c,c->r[3],31); // 801C66E0
  c->r[5]=c->r[3]&~c->r[0]; // 801C66E4
L_801C66E8:;
  c->r[0]=R8(c->r[23]+0x00000048u); // 801C66E8
  cmps(c,0,(int32_t)c->r[0],0); // 801C66EC
  if (!crb(c,2)) { goto L_801C672C; } // 801C66F0
  cmps(c,0,(int32_t)c->r[24],0); // 801C66F4
  if (crb(c,2)) { goto L_801C672C; } // 801C66F8
  cmps(c,0,(int32_t)c->r[26],0); // 801C66FC
  c->r[3]=c->r[22]|c->r[22]; // 801C6700
  c->r[4]=c->r[23]|c->r[23]; // 801C6704
  c->r[6]=c->r[27]|c->r[27]; // 801C6708
  c->r[7]=0u+0xFFFFFFFFu; // 801C670C
  if (!crb(c,1)) { goto L_801C6718; } // 801C6710
  c->r[7]=c->r[26]|c->r[26]; // 801C6714
L_801C6718:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6718
  c->r[8]=R8(c->r[23]+0x00000026u); // 801C671C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C6720
  c->ctr=c->r[12]; // 801C6724
  if (true) { c->lr=0x801C672Cu; dispatch(c,c->ctr); } // 801C6728
L_801C672C:;
  c->r[0]=R8(c->r[23]+0x00000025u); // 801C672C
  cmps(c,0,(int32_t)c->r[0],0); // 801C6730
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6734
  cmps(c,0,(int32_t)c->r[26],0); // 801C6738
  W32(c->r[23]+0x00000044u,c->r[26]); // 801C673C
  if (!crb(c,2)) { goto L_801C6C3C; } // 801C6740
  c->r[0]=0u+0x00000001u; // 801C6744
  W8(c->r[23]+0x0000004Au,c->r[0]); // 801C6748
  goto L_801C6C3C; // 801C674C
L_801C6750:;
  c->r[3]=rotl(c->r[25],0)&0x000000F0u; // 801C6750
  c->r[29]=0u+0x00000000u; // 801C6754
  cmps(c,0,(int32_t)c->r[3],192); // 801C6758
  c->r[24]=0u+0x00000000u; // 801C675C
  if (crb(c,2)) { goto L_801C6998; } // 801C6760
  if (!crb(c,0)) { goto L_801C6798; } // 801C6764
  cmps(c,0,(int32_t)c->r[3],160); // 801C6768
  if (crb(c,2)) { goto L_801C6C24; } // 801C676C
  if (!crb(c,0)) { goto L_801C678C; } // 801C6770
  cmps(c,0,(int32_t)c->r[3],144); // 801C6774
  if (crb(c,2)) { goto L_801C6A2C; } // 801C6778
  if (!crb(c,0)) { goto L_801C6C3C; } // 801C677C
  cmps(c,0,(int32_t)c->r[3],128); // 801C6780
  if (crb(c,2)) { goto L_801C67BC; } // 801C6784
  goto L_801C6C3C; // 801C6788
L_801C678C:;
  cmps(c,0,(int32_t)c->r[3],176); // 801C678C
  if (crb(c,2)) { goto L_801C6998; } // 801C6790
  goto L_801C6C3C; // 801C6794
L_801C6798:;
  cmps(c,0,(int32_t)c->r[3],224); // 801C6798
  if (crb(c,2)) { goto L_801C6A5C; } // 801C679C
  if (!crb(c,0)) { goto L_801C67B0; } // 801C67A0
  cmps(c,0,(int32_t)c->r[3],208); // 801C67A4
  if (crb(c,2)) { goto L_801C6998; } // 801C67A8
  goto L_801C6C3C; // 801C67AC
L_801C67B0:;
  cmps(c,0,(int32_t)c->r[3],240); // 801C67B0
  if (crb(c,2)) { goto L_801C6AB0; } // 801C67B4
  goto L_801C6C3C; // 801C67B8
L_801C67BC:;
  cmpu(c,0,c->r[25],0x00000080u); // 801C67BC
  if (crb(c,2)) { goto L_801C67E8; } // 801C67C0
  cmpu(c,0,c->r[25],0x00000081u); // 801C67C4
  if (crb(c,2)) { goto L_801C681C; } // 801C67C8
  cmpu(c,0,c->r[25],0x00000088u); // 801C67CC
  if (crb(c,2)) { goto L_801C6870; } // 801C67D0
  cmpu(c,0,c->r[25],0x00000089u); // 801C67D4
  if (crb(c,2)) { goto L_801C68D8; } // 801C67D8
  cmpu(c,0,c->r[25],0x0000008Au); // 801C67DC
  if (crb(c,2)) { goto L_801C6938; } // 801C67E0
  goto L_801C6C3C; // 801C67E4
L_801C67E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C67E8
  c->r[3]=c->r[22]|c->r[22]; // 801C67EC
  c->r[5]=c->r[30]|c->r[30]; // 801C67F0
  c->r[6]=c->r[23]|c->r[23]; // 801C67F4
  c->r[4]=c->r[23]+0x00000020u; // 801C67F8
  c->r[7]=0u+0x00000003u; // 801C67FC
  if (crb(c,2)) { goto L_801C6808; } // 801C6800
  c->r[7]=c->r[28]|c->r[28]; // 801C6804
L_801C6808:;
  c->lr=0x801C680Cu; f_801C7770(c); // 801C6808
  cmps(c,0,(int32_t)c->r[26],0); // 801C680C
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6810
  W32(c->r[23]+0x00000044u,c->r[3]); // 801C6814
  goto L_801C6C3C; // 801C6818
L_801C681C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C681C
  c->r[3]=c->r[22]|c->r[22]; // 801C6820
  c->r[5]=c->r[30]|c->r[30]; // 801C6824
  c->r[6]=c->r[23]|c->r[23]; // 801C6828
  c->r[4]=c->r[23]+0x00000020u; // 801C682C
  c->r[7]=0u+0x00000003u; // 801C6830
  if (crb(c,2)) { goto L_801C683C; } // 801C6834
  c->r[7]=c->r[28]|c->r[28]; // 801C6838
L_801C683C:;
  c->lr=0x801C6840u; f_801C7770(c); // 801C683C
  cmps(c,0,(int32_t)c->r[26],0); // 801C6840
  c->r[6]=c->r[3]|c->r[3]; // 801C6844
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6848
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C684C
  c->r[3]=c->r[22]|c->r[22]; // 801C6850
  c->r[4]=c->r[23]|c->r[23]; // 801C6854
  c->r[5]=c->r[25]|c->r[25]; // 801C6858
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C685C
  c->r[7]=0u+0x00000000u; // 801C6860
  c->ctr=c->r[12]; // 801C6864
  if (true) { c->lr=0x801C686Cu; dispatch(c,c->ctr); } // 801C6868
  goto L_801C6C3C; // 801C686C
L_801C6870:;
  c->r[3]=R32(c->r[23]+0x00000020u); // 801C6870
  cmps(c,0,(int32_t)c->r[26],0); // 801C6874
  c->r[4]=c->r[3]+0x00000001u; // 801C6878
  W32(c->r[23]+0x00000020u,c->r[4]); // 801C687C
  c->r[5]=c->r[4]+0x00000001u; // 801C6880
  c->r[6]=R8(c->r[3]+0x00000000u); // 801C6884
  c->r[3]=c->r[5]+0x00000001u; // 801C6888
  c->r[0]=c->r[3]+0x00000001u; // 801C688C
  W32(c->r[23]+0x00000020u,c->r[5]); // 801C6890
  c->r[4]=R8(c->r[4]+0x00000000u); // 801C6894
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C6898
  c->r[7]=R8(c->r[5]+0x00000000u); // 801C689C
  c->r[7]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801C68A0
  W32(c->r[23]+0x00000020u,c->r[0]); // 801C68A4
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 801C68A8
  c->r[0]=R8(c->r[5]+0x00000001u); // 801C68AC
  c->r[7]=c->r[7]|c->r[0]; // 801C68B0
  if (crb(c,2)) { goto L_801C6C3C; } // 801C68B4
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C68B8
  c->r[3]=c->r[22]|c->r[22]; // 801C68BC
  c->r[4]=c->r[23]|c->r[23]; // 801C68C0
  c->r[5]=c->r[25]|c->r[25]; // 801C68C4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C68C8
  c->ctr=c->r[12]; // 801C68CC
  if (true) { c->lr=0x801C68D4u; dispatch(c,c->ctr); } // 801C68D0
  goto L_801C6C3C; // 801C68D4
L_801C68D8:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C68D8
  cmps(c,0,(int32_t)c->r[26],0); // 801C68DC
  c->r[5]=c->r[4]+0x00000001u; // 801C68E0
  W32(c->r[23]+0x00000020u,c->r[5]); // 801C68E4
  c->r[3]=c->r[5]+0x00000001u; // 801C68E8
  c->r[4]=R8(c->r[4]+0x00000000u); // 801C68EC
  c->r[0]=c->r[3]+0x00000001u; // 801C68F0
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C68F4
  c->r[6]=R8(c->r[5]+0x00000000u); // 801C68F8
  c->r[6]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801C68FC
  W32(c->r[23]+0x00000020u,c->r[0]); // 801C6900
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 801C6904
  c->r[0]=R8(c->r[5]+0x00000001u); // 801C6908
  c->r[6]=c->r[6]|c->r[0]; // 801C690C
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6910
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C6914
  c->r[3]=c->r[22]|c->r[22]; // 801C6918
  c->r[4]=c->r[23]|c->r[23]; // 801C691C
  c->r[5]=c->r[25]|c->r[25]; // 801C6920
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6924
  c->r[7]=0u+0x00000000u; // 801C6928
  c->ctr=c->r[12]; // 801C692C
  if (true) { c->lr=0x801C6934u; dispatch(c,c->ctr); } // 801C6930
  goto L_801C6C3C; // 801C6934
L_801C6938:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C6938
  cmps(c,0,(int32_t)c->r[26],0); // 801C693C
  c->r[5]=c->r[4]+0x00000001u; // 801C6940
  W32(c->r[23]+0x00000020u,c->r[5]); // 801C6944
  c->r[3]=c->r[5]+0x00000001u; // 801C6948
  c->r[4]=R8(c->r[4]+0x00000000u); // 801C694C
  c->r[0]=c->r[3]+0x00000001u; // 801C6950
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C6954
  c->r[6]=R8(c->r[5]+0x00000000u); // 801C6958
  c->r[6]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 801C695C
  W32(c->r[23]+0x00000020u,c->r[0]); // 801C6960
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 801C6964
  c->r[0]=R8(c->r[5]+0x00000001u); // 801C6968
  c->r[6]=c->r[6]|c->r[0]; // 801C696C
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6970
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C6974
  c->r[3]=c->r[22]|c->r[22]; // 801C6978
  c->r[4]=c->r[23]|c->r[23]; // 801C697C
  c->r[5]=c->r[25]|c->r[25]; // 801C6980
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6984
  c->r[7]=0u+0x00000000u; // 801C6988
  c->ctr=c->r[12]; // 801C698C
  if (true) { c->lr=0x801C6994u; dispatch(c,c->ctr); } // 801C6990
  goto L_801C6C3C; // 801C6994
L_801C6998:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C6998
  c->r[3]=c->r[22]|c->r[22]; // 801C699C
  c->r[5]=c->r[30]|c->r[30]; // 801C69A0
  c->r[6]=c->r[23]|c->r[23]; // 801C69A4
  c->r[4]=c->r[23]+0x00000020u; // 801C69A8
  c->r[7]=0u+0x00000001u; // 801C69AC
  if (crb(c,2)) { goto L_801C69B8; } // 801C69B0
  c->r[7]=c->r[28]|c->r[28]; // 801C69B4
L_801C69B8:;
  c->lr=0x801C69BCu; f_801C7770(c); // 801C69B8
  cmps(c,0,(int32_t)c->r[27],0); // 801C69BC
  c->r[28]=c->r[3]|c->r[3]; // 801C69C0
  if (crb(c,2)) { goto L_801C69E4; } // 801C69C4
  c->r[3]=c->r[22]|c->r[22]; // 801C69C8
  c->r[5]=c->r[30]|c->r[30]; // 801C69CC
  c->r[6]=c->r[23]|c->r[23]; // 801C69D0
  c->r[7]=c->r[27]|c->r[27]; // 801C69D4
  c->r[4]=c->r[23]+0x00000020u; // 801C69D8
  c->lr=0x801C69E0u; f_801C7770(c); // 801C69DC
  c->r[24]=c->r[3]|c->r[3]; // 801C69E0
L_801C69E4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C69E4
  if (crb(c,2)) { goto L_801C6C3C; } // 801C69E8
  c->r[0]=c->r[25]+0xFFFFFF3Du; // 801C69EC
  c->r[3]=c->r[22]|c->r[22]; // 801C69F0
  cmpu(c,0,c->r[0],0x00000001u); // 801C69F4
  c->r[4]=c->r[23]|c->r[23]; // 801C69F8
  c->r[5]=c->r[25]|c->r[25]; // 801C69FC
  if (crb(c,1)) { goto L_801C6A10; } // 801C6A00
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801C6A04
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801C6A08
  goto L_801C6A14; // 801C6A0C
L_801C6A10:;
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801C6A10
L_801C6A14:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C6A14
  c->r[7]=c->r[24]|c->r[24]; // 801C6A18
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6A1C
  c->ctr=c->r[12]; // 801C6A20
  if (true) { c->lr=0x801C6A28u; dispatch(c,c->ctr); } // 801C6A24
  goto L_801C6C3C; // 801C6A28
L_801C6A2C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C6A2C
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6A30
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C6A34
  c->r[3]=c->r[22]|c->r[22]; // 801C6A38
  c->r[4]=c->r[23]|c->r[23]; // 801C6A3C
  c->r[5]=c->r[25]|c->r[25]; // 801C6A40
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6A44
  c->r[6]=0u+0x00000000u; // 801C6A48
  c->r[7]=0u+0x00000000u; // 801C6A4C
  c->ctr=c->r[12]; // 801C6A50
  if (true) { c->lr=0x801C6A58u; dispatch(c,c->ctr); } // 801C6A54
  goto L_801C6C3C; // 801C6A58
L_801C6A5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C6A5C
  c->r[3]=c->r[22]|c->r[22]; // 801C6A60
  c->r[5]=c->r[30]|c->r[30]; // 801C6A64
  c->r[6]=c->r[23]|c->r[23]; // 801C6A68
  c->r[4]=c->r[23]+0x00000020u; // 801C6A6C
  c->r[7]=0u+0x00000002u; // 801C6A70
  if (crb(c,2)) { goto L_801C6A7C; } // 801C6A74
  c->r[7]=c->r[28]|c->r[28]; // 801C6A78
L_801C6A7C:;
  c->lr=0x801C6A80u; f_801C7770(c); // 801C6A7C
  cmps(c,0,(int32_t)c->r[26],0); // 801C6A80
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801C6A84
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6A88
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C6A8C
  c->r[3]=c->r[22]|c->r[22]; // 801C6A90
  c->r[4]=c->r[23]|c->r[23]; // 801C6A94
  c->r[5]=c->r[25]|c->r[25]; // 801C6A98
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6A9C
  c->r[7]=0u+0x00000000u; // 801C6AA0
  c->ctr=c->r[12]; // 801C6AA4
  if (true) { c->lr=0x801C6AACu; dispatch(c,c->ctr); } // 801C6AA8
  goto L_801C6C3C; // 801C6AAC
L_801C6AB0:;
  cmpu(c,0,c->r[25],0x000000FEu); // 801C6AB0
  if (crb(c,2)) { goto L_801C6ACC; } // 801C6AB4
  cmpu(c,0,c->r[25],0x000000FFu); // 801C6AB8
  if (crb(c,2)) { goto L_801C6AF0; } // 801C6ABC
  cmpu(c,0,c->r[25],0x000000F0u); // 801C6AC0
  if (crb(c,2)) { goto L_801C6B00; } // 801C6AC4
  goto L_801C6BF4; // 801C6AC8
L_801C6ACC:;
  c->r[6]=R32(c->r[23]+0x00000020u); // 801C6ACC
  c->r[3]=c->r[31]+0x00000000u; // 801C6AD0
  c->r[5]=c->r[31]+0x00000064u; // 801C6AD4
  c->r[4]=0u+0x00000138u; // 801C6AD8
  c->r[0]=c->r[6]+0x00000002u; // 801C6ADC
  W32(c->r[23]+0x00000020u,c->r[0]); // 801C6AE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6AE4
  c->lr=0x801C6AECu; f_80212260(c); // 801C6AE8
  goto L_801C6C3C; // 801C6AEC
L_801C6AF0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C6AF0
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6AF4
  c->r[3]=0u+0x00000001u; // 801C6AF8
  goto L_801C6C40; // 801C6AFC
L_801C6B00:;
  c->r[4]=R32(c->r[23]+0x00000020u); // 801C6B00
  c->r[3]=c->r[4]+0x00000001u; // 801C6B04
  W32(c->r[23]+0x00000020u,c->r[3]); // 801C6B08
  c->r[27]=R8(c->r[4]+0x00000000u); // 801C6B0C
  c->r[3]=rotl(c->r[27],0)&0x000000F0u; // 801C6B10
  cmpu(c,0,c->r[3],0x000000E0u); // 801C6B14
  if (crb(c,2)) { goto L_801C6B30; } // 801C6B18
  cmpu(c,0,c->r[3],0x00000080u); // 801C6B1C
  if (crb(c,2)) { goto L_801C6B8C; } // 801C6B20
  cmpu(c,0,c->r[3],0x00000090u); // 801C6B24
  if (crb(c,2)) { goto L_801C6B8C; } // 801C6B28
  goto L_801C6BF4; // 801C6B2C
L_801C6B30:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C6B30
  c->r[3]=c->r[22]|c->r[22]; // 801C6B34
  c->r[5]=c->r[30]|c->r[30]; // 801C6B38
  c->r[6]=c->r[23]|c->r[23]; // 801C6B3C
  c->r[4]=c->r[23]+0x00000020u; // 801C6B40
  c->r[7]=0u+0x00000002u; // 801C6B44
  if (crb(c,2)) { goto L_801C6B50; } // 801C6B48
  c->r[7]=c->r[28]|c->r[28]; // 801C6B4C
L_801C6B50:;
  c->lr=0x801C6B54u; f_801C7770(c); // 801C6B50
  cmps(c,0,(int32_t)c->r[26],0); // 801C6B54
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 801C6B58
  if (crb(c,2)) { goto L_801C6BF4; } // 801C6B5C
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C6B60
  c->r[0]=rotl(c->r[25],8)&0xFFFFFF00u; // 801C6B64
  c->r[3]=c->r[22]|c->r[22]; // 801C6B68
  c->r[4]=c->r[23]|c->r[23]; // 801C6B6C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6B70
  c->r[6]=c->r[29]|c->r[29]; // 801C6B74
  c->r[5]=c->r[0]+c->r[27]; // 801C6B78
  c->r[7]=0u+0x00000000u; // 801C6B7C
  c->ctr=c->r[12]; // 801C6B80
  if (true) { c->lr=0x801C6B88u; dispatch(c,c->ctr); } // 801C6B84
  goto L_801C6BF4; // 801C6B88
L_801C6B8C:;
  c->r[7]=R32(c->r[23]+0x00000020u); // 801C6B8C
  cmps(c,0,(int32_t)c->r[0],0); // 801C6B90
  c->r[3]=c->r[22]|c->r[22]; // 801C6B94
  c->r[5]=c->r[30]|c->r[30]; // 801C6B98
  c->r[0]=c->r[7]+0x00000001u; // 801C6B9C
  W32(c->r[23]+0x00000020u,c->r[0]); // 801C6BA0
  c->r[6]=c->r[23]|c->r[23]; // 801C6BA4
  c->r[4]=c->r[23]+0x00000020u; // 801C6BA8
  c->r[29]=R8(c->r[7]+0x00000000u); // 801C6BAC
  c->r[7]=0u+0x00000002u; // 801C6BB0
  if (crb(c,2)) { goto L_801C6BBC; } // 801C6BB4
  c->r[7]=c->r[28]|c->r[28]; // 801C6BB8
L_801C6BBC:;
  c->lr=0x801C6BC0u; f_801C7770(c); // 801C6BBC
  cmps(c,0,(int32_t)c->r[26],0); // 801C6BC0
  c->r[24]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801C6BC4
  if (crb(c,2)) { goto L_801C6BF4; } // 801C6BC8
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C6BCC
  c->r[0]=rotl(c->r[25],8)&0xFFFFFF00u; // 801C6BD0
  c->r[3]=c->r[22]|c->r[22]; // 801C6BD4
  c->r[4]=c->r[23]|c->r[23]; // 801C6BD8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6BDC
  c->r[6]=c->r[29]|c->r[29]; // 801C6BE0
  c->r[7]=c->r[24]|c->r[24]; // 801C6BE4
  c->r[5]=c->r[0]+c->r[27]; // 801C6BE8
  c->ctr=c->r[12]; // 801C6BEC
  if (true) { c->lr=0x801C6BF4u; dispatch(c,c->ctr); } // 801C6BF0
L_801C6BF4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C6BF4
  if (crb(c,2)) { goto L_801C6C3C; } // 801C6BF8
  c->r[12]=R32(c->r[22]+0x00000000u); // 801C6BFC
  c->r[3]=c->r[22]|c->r[22]; // 801C6C00
  c->r[4]=c->r[23]|c->r[23]; // 801C6C04
  c->r[5]=c->r[25]|c->r[25]; // 801C6C08
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C6C0C
  c->r[6]=c->r[29]|c->r[29]; // 801C6C10
  c->r[7]=c->r[24]|c->r[24]; // 801C6C14
  c->ctr=c->r[12]; // 801C6C18
  if (true) { c->lr=0x801C6C20u; dispatch(c,c->ctr); } // 801C6C1C
  goto L_801C6C3C; // 801C6C20
L_801C6C24:;
  c->r[6]=c->r[25]|c->r[25]; // 801C6C24
  c->r[3]=c->r[31]+0x00000000u; // 801C6C28
  c->r[5]=c->r[31]+0x00000090u; // 801C6C2C
  c->r[4]=0u+0x00000188u; // 801C6C30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6C34
  c->lr=0x801C6C3Cu; f_80212260(c); // 801C6C38
L_801C6C3C:;
  c->r[3]=0u+0x00000000u; // 801C6C3C
L_801C6C40:;
  c->r[11]=c->r[1]+0x00000030u; // 801C6C40
  c->lr=0x801C6C48u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C6C44
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C6C48
  c->lr=c->r[0]; // 801C6C4C
  c->r[1]=c->r[1]+0x00000030u; // 801C6C50
  return; // 801C6C54
}

// fn_801C6C60
void f_801C6C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6C60
  c->r[0]=c->lr; // 801C6C64
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C6C68
  c->r[11]=c->r[1]+0x00000040u; // 801C6C6C
  c->lr=0x801C6C74u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C6C70
  cmps(c,0,(int32_t)c->r[4],0); // 801C6C74
  c->r[0]=0u+0x43300000u; // 801C6C78
  c->r[31]=0u+0x803A0000u; // 801C6C7C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C6C80
  c->r[26]=c->r[4]|c->r[4]; // 801C6C84
  c->r[24]=c->r[5]|c->r[5]; // 801C6C88
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C6C8C
  c->r[27]=c->r[6]|c->r[6]; // 801C6C90
  c->r[28]=c->r[7]|c->r[7]; // 801C6C94
  c->r[31]=c->r[31]+0xFFFFEFC0u; // 801C6C98
  if (!crb(c,2)) { goto L_801C6CB4; } // 801C6C9C
  c->r[3]=c->r[31]+0x00000000u; // 801C6CA0
  c->r[5]=c->r[31]+0x00000014u; // 801C6CA4
  c->r[4]=0u+0x000001A5u; // 801C6CA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6CAC
  c->lr=0x801C6CB4u; f_80212260(c); // 801C6CB0
L_801C6CB4:;
  c->r[25]=R32(c->r[26]+0x000000C4u); // 801C6CB4
  cmps(c,0,(int32_t)c->r[25],0); // 801C6CB8
  if (!crb(c,2)) { goto L_801C6CD4; } // 801C6CBC
  c->r[3]=c->r[31]+0x00000000u; // 801C6CC0
  c->r[5]=c->r[31]+0x0000003Cu; // 801C6CC4
  c->r[4]=0u+0x000001A7u; // 801C6CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6CCC
  c->lr=0x801C6CD4u; f_80212260(c); // 801C6CD0
L_801C6CD4:;
  cmpu(c,0,c->r[24],0x000000FFu); // 801C6CD4
  c->r[30]=c->r[26]+0x0000001Cu; // 801C6CD8
  if (crb(c,1)) { goto L_801C73F8; } // 801C6CDC
  c->r[0]=c->r[24]+0xFFFFFF7Fu; // 801C6CE0
  cmpu(c,0,c->r[0],0x0000007Cu); // 801C6CE4
  if (crb(c,1)) { goto L_801C7738; } // 801C6CE8
  c->r[3]=0u+0x803A0000u; // 801C6CEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C6CF0
  c->r[3]=c->r[3]+0xFFFFF28Cu; // 801C6CF4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801C6CF8
  c->ctr=c->r[3]; // 801C6CFC
  if (true) { switch (c->ctr) { case 0x801C6D04u: goto L_801C6D04; case 0x801C6D24u: goto L_801C6D24; case 0x801C6D2Cu: goto L_801C6D2C; case 0x801C6D60u: goto L_801C6D60; case 0x801C6D70u: goto L_801C6D70; case 0x801C6DBCu: goto L_801C6DBC; case 0x801C6DC4u: goto L_801C6DC4; case 0x801C6DCCu: goto L_801C6DCC; case 0x801C6DD4u: goto L_801C6DD4; case 0x801C6DDCu: goto L_801C6DDC; case 0x801C6E34u: goto L_801C6E34; case 0x801C6E3Cu: goto L_801C6E3C; case 0x801C6E98u: goto L_801C6E98; case 0x801C6EA4u: goto L_801C6EA4; case 0x801C6EFCu: goto L_801C6EFC; case 0x801C6F04u: goto L_801C6F04; case 0x801C6F18u: goto L_801C6F18; case 0x801C6F20u: goto L_801C6F20; case 0x801C6F44u: goto L_801C6F44; case 0x801C6F68u: goto L_801C6F68; case 0x801C6F70u: goto L_801C6F70; case 0x801C6F78u: goto L_801C6F78; case 0x801C6F88u: goto L_801C6F88; case 0x801C6FACu: goto L_801C6FAC; case 0x801C6FB4u: goto L_801C6FB4; case 0x801C6FBCu: goto L_801C6FBC; case 0x801C6FC4u: goto L_801C6FC4; case 0x801C6FCCu: goto L_801C6FCC; case 0x801C6FD8u: goto L_801C6FD8; case 0x801C6FF4u: goto L_801C6FF4; case 0x801C7018u: goto L_801C7018; case 0x801C7040u: goto L_801C7040; case 0x801C706Cu: goto L_801C706C; case 0x801C7084u: goto L_801C7084; case 0x801C7098u: goto L_801C7098; case 0x801C70C0u: goto L_801C70C0; case 0x801C70C8u: goto L_801C70C8; case 0x801C70ECu: goto L_801C70EC; case 0x801C70F4u: goto L_801C70F4; case 0x801C70FCu: goto L_801C70FC; case 0x801C7104u: goto L_801C7104; case 0x801C710Cu: goto L_801C710C; case 0x801C71E4u: goto L_801C71E4; case 0x801C7254u: goto L_801C7254; case 0x801C7264u: goto L_801C7264; case 0x801C72BCu: goto L_801C72BC; case 0x801C7324u: goto L_801C7324; case 0x801C7374u: goto L_801C7374; case 0x801C7738u: goto L_801C7738; default: break; } dispatch(c,c->ctr); return; } // 801C6D00
L_801C6D04:;
  cmps(c,0,(int32_t)c->r[27],1023); // 801C6D04
  if (!crb(c,1)) { goto L_801C6D14; } // 801C6D08
  c->r[0]=0u+0x000003FFu; // 801C6D0C
  goto L_801C6D1C; // 801C6D10
L_801C6D14:;
  c->r[0]=sraw(c,c->r[27],31); // 801C6D14
  c->r[0]=c->r[27]&~c->r[0]; // 801C6D18
L_801C6D1C:;
  W16(c->r[25]+0x000000ECu,c->r[0]); // 801C6D1C
  goto L_801C7738; // 801C6D20
L_801C6D24:;
  W8(c->r[25]+0x000000EAu,c->r[27]); // 801C6D24
  goto L_801C7738; // 801C6D28
L_801C6D2C:;
  c->r[0]=0u+0x00010000u; // 801C6D2C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801C6D30
  if (!crb(c,0)) { goto L_801C6D44; } // 801C6D34
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 801C6D38
  W32(c->r[30]+0x00000038u,c->r[0]); // 801C6D3C
  goto L_801C7738; // 801C6D40
L_801C6D44:;
  c->r[6]=c->r[27]|c->r[27]; // 801C6D44
  c->r[3]=c->r[31]+0x00000000u; // 801C6D48
  c->r[5]=c->r[31]+0x000000ACu; // 801C6D4C
  c->r[4]=0u+0x000001C1u; // 801C6D50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C6D54
  c->lr=0x801C6D5Cu; f_80212300(c); // 801C6D58
  goto L_801C7738; // 801C6D5C
L_801C6D60:;
  c->r[3]=c->r[26]|c->r[26]; // 801C6D60
  c->r[4]=c->r[27]|c->r[27]; // 801C6D64
  c->lr=0x801C6D6Cu; f_801CD1E0(c); // 801C6D68
  goto L_801C7738; // 801C6D6C
L_801C6D70:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000056u); // 801C6D70
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000058u); // 801C6D74
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801C6D78
  if (crb(c,0)) { goto L_801C6D88; } // 801C6D7C
  c->r[3]=R8(c->r[30]+0x00000055u); // 801C6D80
  goto L_801C6DA4; // 801C6D84
L_801C6D88:;
  c->r[5]=R8(c->r[30]+0x00000054u); // 801C6D88
  c->r[0]=R8(c->r[30]+0x00000055u); // 801C6D8C
  c->r[0]=c->r[0]-c->r[5]; // 801C6D90
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801C6D94
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801C6D98
  c->r[0]=c->r[5]+c->r[0]; // 801C6D9C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801C6DA0
L_801C6DA4:;
  c->r[0]=0u+0x00000000u; // 801C6DA4
  W8(c->r[30]+0x00000054u,c->r[3]); // 801C6DA8
  W8(c->r[30]+0x00000055u,c->r[27]); // 801C6DAC
  W16(c->r[30]+0x00000056u,c->r[28]); // 801C6DB0
  W16(c->r[30]+0x00000058u,c->r[0]); // 801C6DB4
  goto L_801C7738; // 801C6DB8
L_801C6DBC:;
  W8(c->r[30]+0x0000006Cu,c->r[27]); // 801C6DBC
  goto L_801C7738; // 801C6DC0
L_801C6DC4:;
  W8(c->r[30]+0x0000006Du,c->r[27]); // 801C6DC4
  goto L_801C7738; // 801C6DC8
L_801C6DCC:;
  W8(c->r[25]+0x000000E8u,c->r[27]); // 801C6DCC
  goto L_801C7738; // 801C6DD0
L_801C6DD4:;
  W8(c->r[30]+0x00000070u,c->r[27]); // 801C6DD4
  goto L_801C7738; // 801C6DD8
L_801C6DDC:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000068u); // 801C6DDC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Au); // 801C6DE0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801C6DE4
  if (crb(c,0)) { goto L_801C6DF8; } // 801C6DE8
  c->r[0]=R8(c->r[30]+0x00000067u); // 801C6DEC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6DF0
  goto L_801C6E1C; // 801C6DF4
L_801C6DF8:;
  c->r[6]=R8(c->r[30]+0x00000066u); // 801C6DF8
  c->r[0]=R8(c->r[30]+0x00000067u); // 801C6DFC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801C6E00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6E04
  c->r[0]=c->r[0]-c->r[3]; // 801C6E08
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C6E0C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801C6E10
  c->r[0]=c->r[6]+c->r[0]; // 801C6E14
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6E18
L_801C6E1C:;
  c->r[0]=0u+0x00000000u; // 801C6E1C
  W8(c->r[30]+0x00000066u,c->r[3]); // 801C6E20
  W8(c->r[30]+0x00000067u,c->r[27]); // 801C6E24
  W16(c->r[30]+0x00000068u,c->r[28]); // 801C6E28
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801C6E2C
  goto L_801C7738; // 801C6E30
L_801C6E34:;
  W8(c->r[30]+0x0000006Eu,c->r[27]); // 801C6E34
  goto L_801C7738; // 801C6E38
L_801C6E3C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000005Cu); // 801C6E3C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000005Eu); // 801C6E40
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801C6E44
  if (crb(c,0)) { goto L_801C6E58; } // 801C6E48
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 801C6E4C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6E50
  goto L_801C6E7C; // 801C6E54
L_801C6E58:;
  c->r[6]=R8(c->r[30]+0x0000005Au); // 801C6E58
  c->r[0]=R8(c->r[30]+0x0000005Bu); // 801C6E5C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801C6E60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6E64
  c->r[0]=c->r[0]-c->r[3]; // 801C6E68
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C6E6C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801C6E70
  c->r[0]=c->r[6]+c->r[0]; // 801C6E74
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6E78
L_801C6E7C:;
  c->r[3]=c->r[27]+0xFFFFFFC0u; // 801C6E7C
  c->r[0]=0u+0x00000000u; // 801C6E80
  W8(c->r[30]+0x0000005Au,c->r[4]); // 801C6E84
  W8(c->r[30]+0x0000005Bu,c->r[3]); // 801C6E88
  W16(c->r[30]+0x0000005Cu,c->r[28]); // 801C6E8C
  W16(c->r[30]+0x0000005Eu,c->r[0]); // 801C6E90
  goto L_801C7738; // 801C6E94
L_801C6E98:;
  c->r[0]=c->r[27]+0xFFFFFFC0u; // 801C6E98
  W8(c->r[30]+0x0000006Fu,c->r[0]); // 801C6E9C
  goto L_801C7738; // 801C6EA0
L_801C6EA4:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000062u); // 801C6EA4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000064u); // 801C6EA8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801C6EAC
  if (crb(c,0)) { goto L_801C6EC0; } // 801C6EB0
  c->r[0]=R8(c->r[30]+0x00000061u); // 801C6EB4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6EB8
  goto L_801C6EE4; // 801C6EBC
L_801C6EC0:;
  c->r[6]=R8(c->r[30]+0x00000060u); // 801C6EC0
  c->r[0]=R8(c->r[30]+0x00000061u); // 801C6EC4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801C6EC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6ECC
  c->r[0]=c->r[0]-c->r[3]; // 801C6ED0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C6ED4
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801C6ED8
  c->r[0]=c->r[6]+c->r[0]; // 801C6EDC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C6EE0
L_801C6EE4:;
  c->r[0]=0u+0x00000000u; // 801C6EE4
  W8(c->r[30]+0x00000060u,c->r[3]); // 801C6EE8
  W8(c->r[30]+0x00000061u,c->r[27]); // 801C6EEC
  W16(c->r[30]+0x00000062u,c->r[28]); // 801C6EF0
  W16(c->r[30]+0x00000064u,c->r[0]); // 801C6EF4
  goto L_801C7738; // 801C6EF8
L_801C6EFC:;
  W8(c->r[30]+0x00000071u,c->r[27]); // 801C6EFC
  goto L_801C7738; // 801C6F00
L_801C6F04:;
  c->r[0]=0u-c->r[27]; // 801C6F04
  c->r[0]=c->r[0]|c->r[27]; // 801C6F08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C6F0C
  W8(c->r[30]+0x00000009u,c->r[0]); // 801C6F10
  goto L_801C7738; // 801C6F14
L_801C6F18:;
  W8(c->r[30]+0x00000073u,c->r[27]); // 801C6F18
  goto L_801C7738; // 801C6F1C
L_801C6F20:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801C6F20
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C6F24
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 801C6F28
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801C6F2C
  {uint32_t ea=c->r[2]+0xFFFFA848u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6F30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C6F34
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C6F38
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 801C6F3C
  goto L_801C7738; // 801C6F40
L_801C6F44:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801C6F44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6F48
  {uint32_t ea=c->r[2]+0xFFFFA858u; c->f[2]=RF64(ea);} // 801C6F4C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C6F50
  {uint32_t ea=c->r[2]+0xFFFFA84Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6F54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C6F58
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C6F5C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 801C6F60
  goto L_801C7738; // 801C6F64
L_801C6F68:;
  W8(c->r[30]+0x0000004Cu,c->r[27]); // 801C6F68
  goto L_801C7738; // 801C6F6C
L_801C6F70:;
  W8(c->r[30]+0x00000048u,c->r[27]); // 801C6F70
  goto L_801C7738; // 801C6F74
L_801C6F78:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C6F78
  c->r[0]=c->r[0]+c->r[27]; // 801C6F7C
  W32(c->r[30]+0x00000044u,c->r[0]); // 801C6F80
  goto L_801C7738; // 801C6F84
L_801C6F88:;
  c->r[0]=c->r[27]^0x80000000u; // 801C6F88
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C6F8C
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=RF64(ea);} // 801C6F90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801C6F94
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C6F98
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C6F9C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C6FA0
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801C6FA4
  goto L_801C7738; // 801C6FA8
L_801C6FAC:;
  W8(c->r[30]+0x00000074u,c->r[27]); // 801C6FAC
  goto L_801C7738; // 801C6FB0
L_801C6FB4:;
  W8(c->r[30]+0x00000075u,c->r[27]); // 801C6FB4
  goto L_801C7738; // 801C6FB8
L_801C6FBC:;
  W8(c->r[30]+0x00000076u,c->r[27]); // 801C6FBC
  goto L_801C7738; // 801C6FC0
L_801C6FC4:;
  W8(c->r[30]+0x00000077u,c->r[27]); // 801C6FC4
  goto L_801C7738; // 801C6FC8
L_801C6FCC:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801C6FCC
  W16(c->r[30]+0x00000078u,c->r[0]); // 801C6FD0
  goto L_801C7738; // 801C6FD4
L_801C6FD8:;
  c->r[0]=0u+0x000000FFu; // 801C6FD8
  W8(c->r[30]+0x00000074u,c->r[0]); // 801C6FDC
  W8(c->r[30]+0x00000075u,c->r[0]); // 801C6FE0
  W8(c->r[30]+0x00000076u,c->r[0]); // 801C6FE4
  W8(c->r[30]+0x00000077u,c->r[0]); // 801C6FE8
  W16(c->r[30]+0x00000078u,c->r[0]); // 801C6FEC
  goto L_801C7738; // 801C6FF0
L_801C6FF4:;
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 801C6FF4
  c->r[3]=0u+0x00000040u; // 801C6FF8
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 801C6FFC
  c->r[3]=c->r[4]|~c->r[3]; // 801C7000
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801C7004
  c->r[0]=c->r[3]-c->r[0]; // 801C7008
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C700C
  W8(c->r[30]+0x00000030u,c->r[0]); // 801C7010
  goto L_801C7738; // 801C7014
L_801C7018:;
  c->r[0]=0u-c->r[27]; // 801C7018
  c->r[3]=c->r[26]|c->r[26]; // 801C701C
  c->r[0]=c->r[0]|c->r[27]; // 801C7020
  c->r[4]=0u+0xFFFFFFFFu; // 801C7024
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C7028
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801C702C
  c->lr=0x801C7034u; f_801CC8C0(c); // 801C7030
  c->r[3]=c->r[26]|c->r[26]; // 801C7034
  c->lr=0x801C703Cu; f_801CD010(c); // 801C7038
  goto L_801C7738; // 801C703C
L_801C7040:;
  c->r[0]=0u-c->r[27]; // 801C7040
  c->r[0]=c->r[0]|c->r[27]; // 801C7044
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801C7048
  W8(c->r[30]+0x0000000Bu,c->r[0]); // 801C704C
  if (crb(c,2)) { goto L_801C7738; } // 801C7050
  c->r[3]=c->r[26]|c->r[26]; // 801C7054
  c->r[4]=0u+0xFFFFFFFFu; // 801C7058
  c->lr=0x801C7060u; f_801CC8C0(c); // 801C705C
  c->r[3]=c->r[26]|c->r[26]; // 801C7060
  c->lr=0x801C7068u; f_801CD010(c); // 801C7064
  goto L_801C7738; // 801C7068
L_801C706C:;
  c->r[3]=R8(c->r[30]+0x00000070u); // 801C706C
  c->r[0]=0u+0x00000001u; // 801C7070
  W8(c->r[30]+0x0000002Fu,c->r[0]); // 801C7074
  c->r[0]=c->r[27]+c->r[3]; // 801C7078
  W8(c->r[30]+0x00000072u,c->r[0]); // 801C707C
  goto L_801C7738; // 801C7080
L_801C7084:;
  c->r[0]=0u-c->r[27]; // 801C7084
  c->r[0]=c->r[0]|c->r[27]; // 801C7088
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C708C
  W8(c->r[30]+0x0000002Fu,c->r[0]); // 801C7090
  goto L_801C7738; // 801C7094
L_801C7098:;
  c->r[0]=c->r[27]+0xFFFFFFC0u; // 801C7098
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=RF64(ea);} // 801C709C
  c->r[0]=c->r[0]^0x80000000u; // 801C70A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C70A4
  {uint32_t ea=c->r[2]+0xFFFFA850u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C70A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801C70AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C70B0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801C70B4
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 801C70B8
  goto L_801C7738; // 801C70BC
L_801C70C0:;
  W8(c->r[30]+0x0000007Eu,c->r[27]); // 801C70C0
  goto L_801C7738; // 801C70C4
L_801C70C8:;
  c->r[0]=c->r[27]^0x80000000u; // 801C70C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C70CC
  {uint32_t ea=c->r[2]+0xFFFFA860u; c->f[2]=RF64(ea);} // 801C70D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801C70D4
  {uint32_t ea=c->r[2]+0xFFFFA854u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C70D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C70DC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801C70E0
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 801C70E4
  goto L_801C7738; // 801C70E8
L_801C70EC:;
  W8(c->r[30]+0x0000007Bu,c->r[27]); // 801C70EC
  goto L_801C7738; // 801C70F0
L_801C70F4:;
  W8(c->r[30]+0x0000007Cu,c->r[27]); // 801C70F4
  goto L_801C7738; // 801C70F8
L_801C70FC:;
  W8(c->r[30]+0x0000007Du,c->r[27]); // 801C70FC
  goto L_801C7738; // 801C7100
L_801C7104:;
  W8(c->r[30]+0x0000007Au,c->r[27]); // 801C7104
  goto L_801C7738; // 801C7108
L_801C710C:;
  c->r[0]=R8(c->r[13]+0xFFFFC438u); // 801C710C
  cmps(c,0,(int32_t)c->r[0],0); // 801C7110
  if (crb(c,2)) { goto L_801C7738; } // 801C7114
  cmpu(c,0,c->r[27],0x00000030u); // 801C7118
  c->r[0]=0u+0x00000000u; // 801C711C
  if (crb(c,1)) { goto L_801C7128; } // 801C7120
  c->r[0]=0u+0x00000001u; // 801C7124
L_801C7128:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C7128
  if (!crb(c,2)) { goto L_801C7150; } // 801C712C
  c->r[6]=c->r[27]|c->r[27]; // 801C7130
  c->r[3]=c->r[31]+0x00000000u; // 801C7134
  c->r[5]=c->r[31]+0x000000D8u; // 801C7138
  c->r[4]=0u+0x000003F9u; // 801C713C
  c->r[7]=0u+0x00000000u; // 801C7140
  c->r[8]=0u+0x00000030u; // 801C7144
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7148
  c->lr=0x801C7150u; f_80212260(c); // 801C714C
L_801C7150:;
  cmps(c,0,(int32_t)c->r[27],32); // 801C7150
  if (!crb(c,0)) { goto L_801C7168; } // 801C7154
  c->r[3]=c->r[25]|c->r[25]; // 801C7158
  c->r[4]=c->r[27]|c->r[27]; // 801C715C
  c->lr=0x801C7164u; f_801CA970(c); // 801C7160
  goto L_801C7184; // 801C7164
L_801C7168:;
  cmps(c,0,(int32_t)c->r[27],48); // 801C7168
  if (!crb(c,0)) { goto L_801C7180; } // 801C716C
  c->r[3]=c->r[26]|c->r[26]; // 801C7170
  c->r[4]=c->r[27]+0xFFFFFFE0u; // 801C7174
  c->lr=0x801C717Cu; f_801CD560(c); // 801C7178
  goto L_801C7184; // 801C717C
L_801C7180:;
  c->r[3]=0u+0x00000000u; // 801C7180
L_801C7184:;
  cmps(c,0,(int32_t)c->r[27],32); // 801C7184
  if (crb(c,0)) { goto L_801C7194; } // 801C7188
  c->r[7]=c->r[27]+0xFFFFFFE0u; // 801C718C
  goto L_801C71A4; // 801C7190
L_801C7194:;
  cmps(c,0,(int32_t)c->r[27],16); // 801C7194
  c->r[7]=c->r[27]|c->r[27]; // 801C7198
  if (crb(c,0)) { goto L_801C71A4; } // 801C719C
  c->r[7]=c->r[27]+0xFFFFFFF0u; // 801C71A0
L_801C71A4:;
  cmps(c,0,(int32_t)c->r[27],32); // 801C71A4
  if (crb(c,0)) { goto L_801C71B4; } // 801C71A8
  c->r[6]=c->r[13]+0xFFFFAD58u; // 801C71AC
  goto L_801C71C4; // 801C71B0
L_801C71B4:;
  cmps(c,0,(int32_t)c->r[27],16); // 801C71B4
  c->r[6]=c->r[13]+0xFFFFAD60u; // 801C71B8
  if (crb(c,0)) { goto L_801C71C4; } // 801C71BC
  c->r[6]=c->r[13]+0xFFFFAD5Cu; // 801C71C0
L_801C71C4:;
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 801C71C4
  c->r[4]=c->r[25]|c->r[25]; // 801C71C8
  c->r[5]=R8(c->r[26]+0x00000004u); // 801C71CC
  c->r[8]=c->r[27]|c->r[27]; // 801C71D0
  c->r[3]=c->r[31]+0x00000114u; // 801C71D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C71D8
  c->lr=0x801C71E0u; f_80121B20(c); // 801C71DC
  goto L_801C7738; // 801C71E0
L_801C71E4:;
  c->r[3]=c->r[25]|c->r[25]; // 801C71E4
  c->r[4]=c->r[27]|c->r[27]; // 801C71E8
  c->lr=0x801C71F0u; f_801CA7E0(c); // 801C71EC
  cmps(c,0,(int32_t)c->r[3],0); // 801C71F0
  c->r[25]=c->r[3]|c->r[3]; // 801C71F4
  if (!crb(c,2)) { goto L_801C7214; } // 801C71F8
  c->r[3]=c->r[31]+0x00000000u; // 801C71FC
  c->r[5]=c->r[31]+0x00000140u; // 801C7200
  c->r[4]=0u+0x00000287u; // 801C7204
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7208
  c->lr=0x801C7210u; f_80212300(c); // 801C720C
  goto L_801C7738; // 801C7210
L_801C7214:;
  cmpu(c,0,c->r[3],c->r[26]); // 801C7214
  if (!crb(c,2)) { goto L_801C7234; } // 801C7218
  c->r[3]=c->r[31]+0x00000000u; // 801C721C
  c->r[5]=c->r[31]+0x00000178u; // 801C7220
  c->r[4]=0u+0x0000028Cu; // 801C7224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7228
  c->lr=0x801C7230u; f_80212300(c); // 801C722C
  goto L_801C7738; // 801C7230
L_801C7234:;
  c->lr=0x801C7238u; f_801CC590(c); // 801C7234
  c->r[4]=R32(c->r[30]+0x00000000u); // 801C7238
  c->r[3]=c->r[25]|c->r[25]; // 801C723C
  c->r[5]=c->r[28]|c->r[28]; // 801C7240
  c->lr=0x801C7248u; f_801CC560(c); // 801C7244
  c->r[3]=c->r[25]|c->r[25]; // 801C7248
  c->lr=0x801C7250u; f_801CC570(c); // 801C724C
  goto L_801C7738; // 801C7250
L_801C7254:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 801C7254
  c->r[0]=c->r[0]+c->r[27]; // 801C7258
  W32(c->r[30]+0x00000004u,c->r[0]); // 801C725C
  goto L_801C7738; // 801C7260
L_801C7264:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 801C7264
  cmpu(c,0,c->r[0],0x00000003u); // 801C7268
  if (crb(c,0)) { goto L_801C7288; } // 801C726C
  c->r[3]=c->r[31]+0x00000000u; // 801C7270
  c->r[5]=c->r[31]+0x000001A8u; // 801C7274
  c->r[4]=0u+0x0000029Cu; // 801C7278
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C727C
  c->lr=0x801C7284u; f_80212300(c); // 801C7280
  goto L_801C7738; // 801C7284
L_801C7288:;
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801C7288
  c->r[3]=R32(c->r[30]+0x00000004u); // 801C728C
  c->r[4]=c->r[30]+c->r[0]; // 801C7290
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C7294
  c->r[0]=0u+0x00000000u; // 801C7298
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 801C729C
  c->r[3]=R8(c->r[30]+0x00000024u); // 801C72A0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801C72A4
  c->r[3]=c->r[3]+0x00000001u; // 801C72A8
  W8(c->r[30]+0x00000024u,c->r[3]); // 801C72AC
  c->r[0]=c->r[0]+c->r[27]; // 801C72B0
  W32(c->r[30]+0x00000004u,c->r[0]); // 801C72B4
  goto L_801C7738; // 801C72B8
L_801C72BC:;
  c->r[4]=0u+0x00000000u; // 801C72BC
  goto L_801C72EC; // 801C72C0
L_801C72C4:;
  c->r[3]=R8(c->r[30]+0x00000024u); // 801C72C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801C72C8
  W8(c->r[30]+0x00000024u,c->r[0]); // 801C72CC
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801C72D0
  c->r[3]=c->r[30]+c->r[0]; // 801C72D4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->r[0]=R8(ea); c->r[3]=ea;} // 801C72D8
  cmps(c,0,(int32_t)c->r[0],0); // 801C72DC
  if (!crb(c,2)) { goto L_801C72EC; } // 801C72E0
  c->r[4]=c->r[3]|c->r[3]; // 801C72E4
  goto L_801C72F8; // 801C72E8
L_801C72EC:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 801C72EC
  cmps(c,0,(int32_t)c->r[0],0); // 801C72F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C72C4; } // 801C72F4
L_801C72F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C72F8
  if (!crb(c,2)) { goto L_801C7318; } // 801C72FC
  c->r[3]=c->r[31]+0x00000000u; // 801C7300
  c->r[5]=c->r[31]+0x000001E8u; // 801C7304
  c->r[4]=0u+0x000002B3u; // 801C7308
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C730C
  c->lr=0x801C7314u; f_80212300(c); // 801C7310
  goto L_801C7738; // 801C7314
L_801C7318:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801C7318
  W32(c->r[30]+0x00000004u,c->r[0]); // 801C731C
  goto L_801C7738; // 801C7320
L_801C7324:;
  c->r[0]=R8(c->r[30]+0x00000024u); // 801C7324
  cmpu(c,0,c->r[0],0x00000003u); // 801C7328
  if (crb(c,0)) { goto L_801C7348; } // 801C732C
  c->r[3]=c->r[31]+0x00000000u; // 801C7330
  c->r[5]=c->r[31]+0x00000220u; // 801C7334
  c->r[4]=0u+0x000002BDu; // 801C7338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C733C
  c->lr=0x801C7344u; f_80212300(c); // 801C7340
  goto L_801C7738; // 801C7344
L_801C7348:;
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801C7348
  c->r[3]=R32(c->r[30]+0x00000004u); // 801C734C
  c->r[4]=c->r[30]+c->r[0]; // 801C7350
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C7354
  c->r[0]=0u+0x00000001u; // 801C7358
  W8(c->r[4]+0x0000000Du,c->r[27]); // 801C735C
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 801C7360
  c->r[3]=R8(c->r[30]+0x00000024u); // 801C7364
  c->r[0]=c->r[3]+0x00000001u; // 801C7368
  W8(c->r[30]+0x00000024u,c->r[0]); // 801C736C
  goto L_801C7738; // 801C7370
L_801C7374:;
  c->r[3]=R8(c->r[30]+0x00000024u); // 801C7374
  cmps(c,0,(int32_t)c->r[3],0); // 801C7378
  if (!crb(c,2)) { goto L_801C7398; } // 801C737C
  c->r[3]=c->r[31]+0x00000000u; // 801C7380
  c->r[5]=c->r[31]+0x00000264u; // 801C7384
  c->r[4]=0u+0x000002CCu; // 801C7388
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C738C
  c->lr=0x801C7394u; f_80212300(c); // 801C7390
  goto L_801C7738; // 801C7394
L_801C7398:;
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801C7398
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801C739C
  c->r[3]=c->r[30]+c->r[0]; // 801C73A0
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801C73A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C73A8
  if (!crb(c,2)) { goto L_801C73C8; } // 801C73AC
  c->r[3]=c->r[31]+0x00000000u; // 801C73B0
  c->r[5]=c->r[31]+0x00000264u; // 801C73B4
  c->r[4]=0u+0x000002D2u; // 801C73B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C73BC
  c->lr=0x801C73C4u; f_80212300(c); // 801C73C0
  goto L_801C7738; // 801C73C4
L_801C73C8:;
  c->r[5]=R8(c->r[3]+0x0000000Du); // 801C73C8
  cmps(c,0,(int32_t)c->r[5],0); // 801C73CC
  if (crb(c,2)) { goto L_801C73E8; } // 801C73D0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801C73D4
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; cr0(c,c->r[0]); // 801C73D8
  if (!crb(c,2)) { goto L_801C73E8; } // 801C73DC
  W8(c->r[30]+0x00000024u,c->r[4]); // 801C73E0
  goto L_801C7738; // 801C73E4
L_801C73E8:;
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801C73E8
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C73EC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801C73F0
  goto L_801C7738; // 801C73F4
L_801C73F8:;
  cmpu(c,0,c->r[24],0x0000FFFFu); // 801C73F8
  if (crb(c,1)) { goto L_801C7738; } // 801C73FC
  c->r[0]=rotl(c->r[24],24)&0x00FFFFFFu; // 801C7400
  c->r[24]=rotl(c->r[24],0)&0x000000FFu; // 801C7404
  cmpu(c,0,c->r[0],0x000000F0u); // 801C7408
  if (crb(c,2)) { goto L_801C7424; } // 801C740C
  c->r[3]=c->r[31]+0x00000000u; // 801C7410
  c->r[5]=c->r[31]+0x000002A0u; // 801C7414
  c->r[4]=0u+0x000002E9u; // 801C7418
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C741C
  c->lr=0x801C7424u; f_80212260(c); // 801C7420
L_801C7424:;
  c->r[0]=rotl(c->r[24],0)&0x000000F0u; // 801C7424
  c->r[29]=0u+0x00000000u; // 801C7428
  cmpu(c,0,c->r[0],0x00000080u); // 801C742C
  if (crb(c,2)) { goto L_801C743C; } // 801C7430
  cmpu(c,0,c->r[0],0x00000090u); // 801C7434
  if (!crb(c,2)) { goto L_801C74B4; } // 801C7438
L_801C743C:;
  cmpu(c,0,c->r[27],0x00000030u); // 801C743C
  c->r[0]=0u+0x00000000u; // 801C7440
  if (crb(c,1)) { goto L_801C744C; } // 801C7444
  c->r[0]=0u+0x00000001u; // 801C7448
L_801C744C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C744C
  if (!crb(c,2)) { goto L_801C7474; } // 801C7450
  c->r[6]=c->r[27]|c->r[27]; // 801C7454
  c->r[3]=c->r[31]+0x00000000u; // 801C7458
  c->r[5]=c->r[31]+0x000000D8u; // 801C745C
  c->r[4]=0u+0x000003F9u; // 801C7460
  c->r[7]=0u+0x00000000u; // 801C7464
  c->r[8]=0u+0x00000030u; // 801C7468
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C746C
  c->lr=0x801C7474u; f_80212260(c); // 801C7470
L_801C7474:;
  cmps(c,0,(int32_t)c->r[27],32); // 801C7474
  if (!crb(c,0)) { goto L_801C748C; } // 801C7478
  c->r[3]=c->r[25]|c->r[25]; // 801C747C
  c->r[4]=c->r[27]|c->r[27]; // 801C7480
  c->lr=0x801C7488u; f_801CA970(c); // 801C7484
  goto L_801C74A8; // 801C7488
L_801C748C:;
  cmps(c,0,(int32_t)c->r[27],48); // 801C748C
  if (!crb(c,0)) { goto L_801C74A4; } // 801C7490
  c->r[3]=c->r[26]|c->r[26]; // 801C7494
  c->r[4]=c->r[27]+0xFFFFFFE0u; // 801C7498
  c->lr=0x801C74A0u; f_801CD560(c); // 801C749C
  goto L_801C74A8; // 801C74A0
L_801C74A4:;
  c->r[3]=0u+0x00000000u; // 801C74A4
L_801C74A8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C74A8
  c->r[29]=c->r[3]|c->r[3]; // 801C74AC
  if (crb(c,2)) { goto L_801C7738; } // 801C74B0
L_801C74B4:;
  cmps(c,0,(int32_t)c->r[24],138); // 801C74B4
  if (crb(c,2)) { goto L_801C764C; } // 801C74B8
  if (!crb(c,0)) { goto L_801C7514; } // 801C74BC
  cmps(c,0,(int32_t)c->r[24],132); // 801C74C0
  if (crb(c,2)) { goto L_801C7598; } // 801C74C4
  if (!crb(c,0)) { goto L_801C74F0; } // 801C74C8
  cmps(c,0,(int32_t)c->r[24],129); // 801C74CC
  if (crb(c,2)) { goto L_801C7568; } // 801C74D0
  if (!crb(c,0)) { goto L_801C74E4; } // 801C74D4
  cmps(c,0,(int32_t)c->r[24],128); // 801C74D8
  if (!crb(c,0)) { goto L_801C7560; } // 801C74DC
  goto L_801C7738; // 801C74E0
L_801C74E4:;
  cmps(c,0,(int32_t)c->r[24],131); // 801C74E4
  if (!crb(c,0)) { goto L_801C7588; } // 801C74E8
  goto L_801C7578; // 801C74EC
L_801C74F0:;
  cmps(c,0,(int32_t)c->r[24],135); // 801C74F0
  if (crb(c,2)) { goto L_801C761C; } // 801C74F4
  if (!crb(c,0)) { goto L_801C7508; } // 801C74F8
  cmps(c,0,(int32_t)c->r[24],134); // 801C74FC
  if (!crb(c,0)) { goto L_801C75DC; } // 801C7500
  goto L_801C75B0; // 801C7504
L_801C7508:;
  cmps(c,0,(int32_t)c->r[24],137); // 801C7508
  if (!crb(c,0)) { goto L_801C763C; } // 801C750C
  goto L_801C762C; // 801C7510
L_801C7514:;
  cmps(c,0,(int32_t)c->r[24],147); // 801C7514
  if (crb(c,2)) { goto L_801C76D0; } // 801C7518
  if (!crb(c,0)) { goto L_801C7544; } // 801C751C
  cmps(c,0,(int32_t)c->r[24],144); // 801C7520
  if (crb(c,2)) { goto L_801C767C; } // 801C7524
  if (!crb(c,0)) { goto L_801C7538; } // 801C7528
  cmps(c,0,(int32_t)c->r[24],140); // 801C752C
  if (!crb(c,0)) { goto L_801C7738; } // 801C7530
  goto L_801C765C; // 801C7534
L_801C7538:;
  cmps(c,0,(int32_t)c->r[24],146); // 801C7538
  if (!crb(c,0)) { goto L_801C76B0; } // 801C753C
  goto L_801C7694; // 801C7540
L_801C7544:;
  cmps(c,0,(int32_t)c->r[24],224); // 801C7544
  if (crb(c,2)) { goto L_801C7728; } // 801C7548
  if (!crb(c,0)) { goto L_801C7738; } // 801C754C
  cmps(c,0,(int32_t)c->r[24],149); // 801C7550
  if (crb(c,2)) { goto L_801C770C; } // 801C7554
  if (!crb(c,0)) { goto L_801C7738; } // 801C7558
  goto L_801C76EC; // 801C755C
L_801C7560:;
  W16(c->r[29]+0x00000000u,c->r[28]); // 801C7560
  goto L_801C7738; // 801C7564
L_801C7568:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C7568
  c->r[0]=c->r[0]+c->r[28]; // 801C756C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7570
  goto L_801C7738; // 801C7574
L_801C7578:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C7578
  c->r[0]=c->r[0]-c->r[28]; // 801C757C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7580
  goto L_801C7738; // 801C7584
L_801C7588:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C7588
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 801C758C
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7590
  goto L_801C7738; // 801C7594
L_801C7598:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C7598
  if (crb(c,2)) { goto L_801C7738; } // 801C759C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C75A0
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[28]); // 801C75A4
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C75A8
  goto L_801C7738; // 801C75AC
L_801C75B0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C75B0
  if (crb(c,0)) { goto L_801C75C8; } // 801C75B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C75B8
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 801C75BC
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C75C0
  goto L_801C7738; // 801C75C4
L_801C75C8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C75C8
  c->r[0]=0u-c->r[28]; // 801C75CC
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 801C75D0
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C75D4
  goto L_801C7738; // 801C75D8
L_801C75DC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C75DC
  c->r[24]=0u+0x00000000u; // 801C75E0
  if (!crb(c,0)) { goto L_801C75F4; } // 801C75E4
  c->r[0]=0u-c->r[28]; // 801C75E8
  c->r[24]=0u+0x00000001u; // 801C75EC
  c->r[28]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801C75F0
L_801C75F4:;
  c->lr=0x801C75F8u; f_801E1570(c); // 801C75F4
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801C75F8
  c->r[0]=c->r[28]+0x00000001u; // 801C75FC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801C7600
  cmps(c,0,(int32_t)c->r[24],0); // 801C7604
  c->r[3]=sraw(c,c->r[3],16); // 801C7608
  if (crb(c,2)) { goto L_801C7614; } // 801C760C
  c->r[3]=0u-c->r[3]; // 801C7610
L_801C7614:;
  W16(c->r[29]+0x00000000u,c->r[3]); // 801C7614
  goto L_801C7738; // 801C7618
L_801C761C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C761C
  c->r[0]=c->r[0]&c->r[28]; // 801C7620
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7624
  goto L_801C7738; // 801C7628
L_801C762C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C762C
  c->r[0]=c->r[0]|c->r[28]; // 801C7630
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7634
  goto L_801C7738; // 801C7638
L_801C763C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C763C
  c->r[0]=c->r[0]^c->r[28]; // 801C7640
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7644
  goto L_801C7738; // 801C7648
L_801C764C:;
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 801C764C
  c->r[0]=~(c->r[0]|c->r[0]); // 801C7650
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7654
  goto L_801C7738; // 801C7658
L_801C765C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C765C
  if (crb(c,2)) { goto L_801C7738; } // 801C7660
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C7664
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[28]); // 801C7668
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[28]); // 801C766C
  c->r[0]=c->r[3]-c->r[0]; // 801C7670
  W16(c->r[29]+0x00000000u,c->r[0]); // 801C7674
  goto L_801C7738; // 801C7678
L_801C767C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C767C
  c->r[0]=c->r[28]-c->r[0]; // 801C7680
  c->r[0]=cntlz(c->r[0]); // 801C7684
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C7688
  W8(c->r[30]+0x00000008u,c->r[0]); // 801C768C
  goto L_801C7738; // 801C7690
L_801C7694:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C7694
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 801C7698
  c->r[4]=sraw(c,c->r[0],31); // 801C769C
  c->r[0]=addc(c,~c->r[28],c->r[0],1); // 801C76A0
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C76A4
  W8(c->r[30]+0x00000008u,c->r[0]); // 801C76A8
  goto L_801C7738; // 801C76AC
L_801C76B0:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C76B0
  c->r[0]=c->r[4]^c->r[28]; // 801C76B4
  c->r[3]=sraw(c,c->r[0],1); // 801C76B8
  c->r[0]=c->r[0]&c->r[4]; // 801C76BC
  c->r[0]=c->r[3]-c->r[0]; // 801C76C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C76C4
  W8(c->r[30]+0x00000008u,c->r[0]); // 801C76C8
  goto L_801C7738; // 801C76CC
L_801C76D0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C76D0
  c->r[4]=sraw(c,c->r[28],31); // 801C76D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C76D8
  c->r[0]=addc(c,~c->r[0],c->r[28],1); // 801C76DC
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801C76E0
  W8(c->r[30]+0x00000008u,c->r[0]); // 801C76E4
  goto L_801C7738; // 801C76E8
L_801C76EC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C76EC
  c->r[0]=c->r[28]^c->r[0]; // 801C76F0
  c->r[3]=sraw(c,c->r[0],1); // 801C76F4
  c->r[0]=c->r[0]&c->r[28]; // 801C76F8
  c->r[0]=c->r[3]-c->r[0]; // 801C76FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C7700
  W8(c->r[30]+0x00000008u,c->r[0]); // 801C7704
  goto L_801C7738; // 801C7708
L_801C770C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 801C770C
  c->r[3]=c->r[28]-c->r[0]; // 801C7710
  c->r[0]=c->r[0]-c->r[28]; // 801C7714
  c->r[0]=c->r[3]|c->r[0]; // 801C7718
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C771C
  W8(c->r[30]+0x00000008u,c->r[0]); // 801C7720
  goto L_801C7738; // 801C7724
L_801C7728:;
  c->r[3]=c->r[25]|c->r[25]; // 801C7728
  c->r[5]=c->r[26]|c->r[26]; // 801C772C
  c->r[4]=rotl(c->r[27],0)&0x0000FFFFu; // 801C7730
  c->lr=0x801C7738u; f_801C9DA0(c); // 801C7734
L_801C7738:;
  c->r[11]=c->r[1]+0x00000040u; // 801C7738
  c->lr=0x801C7740u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C773C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C7740
  c->lr=c->r[0]; // 801C7744
  c->r[1]=c->r[1]+0x00000040u; // 801C7748
  return; // 801C774C
}

// fn_801C7750
void f_801C7750(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 801C7750
  c->r[4]=c->r[5]|c->r[5]; // 801C7754
  c->r[5]=c->r[6]|c->r[6]; // 801C7758
  c->r[6]=c->r[7]|c->r[7]; // 801C775C
  c->r[7]=c->r[8]|c->r[8]; // 801C7760
  f_801CD5F0(c); return; // 801C7764
}

// fn_801C7770
void f_801C7770(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7770
  c->r[0]=c->lr; // 801C7774
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7778
  c->r[11]=c->r[1]+0x00000020u; // 801C777C
  c->lr=0x801C7784u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C7780
  cmps(c,0,(int32_t)c->r[7],1); // 801C7784
  c->r[31]=0u+0x803A0000u; // 801C7788
  c->r[27]=c->r[4]|c->r[4]; // 801C778C
  c->r[28]=c->r[5]|c->r[5]; // 801C7790
  c->r[29]=c->r[6]|c->r[6]; // 801C7794
  c->r[31]=c->r[31]+0xFFFFEFC0u; // 801C7798
  if (crb(c,2)) { goto L_801C77C4; } // 801C779C
  cmps(c,0,(int32_t)c->r[7],2); // 801C77A0
  if (crb(c,2)) { goto L_801C77D8; } // 801C77A4
  cmps(c,0,(int32_t)c->r[7],3); // 801C77A8
  if (crb(c,2)) { goto L_801C77FC; } // 801C77AC
  cmps(c,0,(int32_t)c->r[7],5); // 801C77B0
  if (crb(c,2)) { goto L_801C7850; } // 801C77B4
  cmps(c,0,(int32_t)c->r[7],4); // 801C77B8
  if (crb(c,2)) { goto L_801C78DC; } // 801C77BC
  goto L_801C793C; // 801C77C0
L_801C77C4:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C77C4
  c->r[0]=c->r[3]+0x00000001u; // 801C77C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C77CC
  c->r[29]=R8(c->r[3]+0x00000000u); // 801C77D0
  goto L_801C793C; // 801C77D4
L_801C77D8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C77D8
  c->r[5]=c->r[3]+0x00000001u; // 801C77DC
  W32(c->r[4]+0x00000000u,c->r[5]); // 801C77E0
  c->r[0]=c->r[5]+0x00000001u; // 801C77E4
  c->r[3]=R8(c->r[3]+0x00000000u); // 801C77E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C77EC
  c->r[29]=R8(c->r[5]+0x00000000u); // 801C77F0
  c->r[29]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[29]&~0x0000FF00u); // 801C77F4
  goto L_801C793C; // 801C77F8
L_801C77FC:;
  c->r[29]=0u+0x00000000u; // 801C77FC
  c->r[30]=0u+0x00000000u; // 801C7800
L_801C7804:;
  cmps(c,0,(int32_t)c->r[30],4); // 801C7804
  if (crb(c,0)) { goto L_801C7820; } // 801C7808
  c->r[3]=c->r[31]+0x00000000u; // 801C780C
  c->r[5]=c->r[31]+0x000004C0u; // 801C7810
  c->r[4]=0u+0x000003AFu; // 801C7814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7818
  c->lr=0x801C7820u; f_80212260(c); // 801C781C
L_801C7820:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801C7820
  c->r[29]=rotl(c->r[29],7)&0xFFFFFF80u; // 801C7824
  c->r[0]=c->r[3]+0x00000001u; // 801C7828
  W32(c->r[27]+0x00000000u,c->r[0]); // 801C782C
  c->r[3]=R8(c->r[3]+0x00000000u); // 801C7830
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801C7834
  c->r[0]=rotl(c->r[3],0)&0x0000007Fu; // 801C7838
  c->r[29]=c->r[29]|c->r[0]; // 801C783C
  if (crb(c,2)) { goto L_801C793C; } // 801C7840
  c->r[30]=c->r[30]+0x00000001u; // 801C7844
  IRQCHK(c); goto L_801C7804; // 801C7848
  goto L_801C793C; // 801C784C
L_801C7850:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C7850
  c->r[5]=0u+0x00000000u; // 801C7854
  c->r[0]=c->r[3]+0x00000001u; // 801C7858
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C785C
  c->r[30]=R8(c->r[3]+0x00000000u); // 801C7860
  cmpu(c,0,c->r[30],0x00000030u); // 801C7864
  if (crb(c,1)) { goto L_801C7870; } // 801C7868
  c->r[5]=0u+0x00000001u; // 801C786C
L_801C7870:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C7870
  if (!crb(c,2)) { goto L_801C7898; } // 801C7874
  c->r[6]=c->r[30]|c->r[30]; // 801C7878
  c->r[3]=c->r[31]+0x00000000u; // 801C787C
  c->r[5]=c->r[31]+0x000000D8u; // 801C7880
  c->r[4]=0u+0x000003F9u; // 801C7884
  c->r[7]=0u+0x00000000u; // 801C7888
  c->r[8]=0u+0x00000030u; // 801C788C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7890
  c->lr=0x801C7898u; f_80212260(c); // 801C7894
L_801C7898:;
  cmps(c,0,(int32_t)c->r[30],32); // 801C7898
  if (!crb(c,0)) { goto L_801C78B0; } // 801C789C
  c->r[3]=c->r[28]|c->r[28]; // 801C78A0
  c->r[4]=c->r[30]|c->r[30]; // 801C78A4
  c->lr=0x801C78ACu; f_801CA970(c); // 801C78A8
  goto L_801C78CC; // 801C78AC
L_801C78B0:;
  cmps(c,0,(int32_t)c->r[30],48); // 801C78B0
  if (!crb(c,0)) { goto L_801C78C8; } // 801C78B4
  c->r[3]=c->r[29]|c->r[29]; // 801C78B8
  c->r[4]=c->r[30]+0xFFFFFFE0u; // 801C78BC
  c->lr=0x801C78C4u; f_801CD560(c); // 801C78C0
  goto L_801C78CC; // 801C78C4
L_801C78C8:;
  c->r[3]=0u+0x00000000u; // 801C78C8
L_801C78CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C78CC
  if (crb(c,2)) { goto L_801C793C; } // 801C78D0
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 801C78D4
  goto L_801C793C; // 801C78D8
L_801C78DC:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801C78DC
  c->r[7]=c->r[5]+0x00000001u; // 801C78E0
  W32(c->r[4]+0x00000000u,c->r[7]); // 801C78E4
  c->r[3]=c->r[7]+0x00000001u; // 801C78E8
  c->r[6]=R8(c->r[5]+0x00000000u); // 801C78EC
  c->r[5]=c->r[3]+0x00000001u; // 801C78F0
  c->r[0]=c->r[5]+0x00000001u; // 801C78F4
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C78F8
  c->r[7]=R8(c->r[7]+0x00000000u); // 801C78FC
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 801C7900
  W32(c->r[4]+0x00000000u,c->r[5]); // 801C7904
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 801C7908
  c->r[3]=R8(c->r[3]+0x00000000u); // 801C790C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C7910
  c->r[30]=R8(c->r[5]+0x00000000u); // 801C7914
  c->r[30]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 801C7918
  c->lr=0x801C7920u; f_801E1570(c); // 801C791C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801C7920
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801C7924
  c->r[3]=c->r[0]-c->r[29]; // 801C7928
  c->r[0]=c->r[3]+0x00000001u; // 801C792C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C7930
  c->r[4]=sraw(c,c->r[4],16); // 801C7934
  c->r[29]=c->r[4]+c->r[29]; // 801C7938
L_801C793C:;
  c->r[11]=c->r[1]+0x00000020u; // 801C793C
  c->r[3]=c->r[29]|c->r[29]; // 801C7940
  c->lr=0x801C7948u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C7944
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7948
  c->lr=c->r[0]; // 801C794C
  c->r[1]=c->r[1]+0x00000020u; // 801C7950
  return; // 801C7954
}

// fn_801C7960
void f_801C7960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7960
  c->r[0]=c->lr; // 801C7964
  cmps(c,0,(int32_t)c->r[3],0); // 801C7968
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C796C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7970
  c->r[31]=0u+0x803A0000u; // 801C7974
  c->r[31]=c->r[31]+0xFFFFEFC0u; // 801C7978
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C797C
  c->r[30]=c->r[5]|c->r[5]; // 801C7980
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7984
  c->r[29]=c->r[4]|c->r[4]; // 801C7988
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C798C
  c->r[28]=c->r[3]|c->r[3]; // 801C7990
  if (!crb(c,2)) { goto L_801C79AC; } // 801C7994
  c->r[3]=c->r[31]+0x00000000u; // 801C7998
  c->r[5]=c->r[31]+0x000004DCu; // 801C799C
  c->r[4]=0u+0x0000041Eu; // 801C79A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C79A4
  c->lr=0x801C79ACu; f_80212260(c); // 801C79A8
L_801C79AC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C79AC
  if (!crb(c,2)) { goto L_801C79C8; } // 801C79B0
  c->r[3]=c->r[31]+0x00000000u; // 801C79B4
  c->r[5]=c->r[31]+0x00000508u; // 801C79B8
  c->r[4]=0u+0x0000041Fu; // 801C79BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C79C0
  c->lr=0x801C79C8u; f_80212260(c); // 801C79C4
L_801C79C8:;
  c->r[0]=R8(c->r[29]+c->r[28]); // 801C79C8
  c->r[4]=c->r[29]+c->r[28]; // 801C79CC
  cmpu(c,0,c->r[0],0x000000FEu); // 801C79D0
  if (crb(c,2)) { goto L_801C79E8; } // 801C79D4
  c->r[0]=0u+0x00000001u; // 801C79D8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C79DC
  c->r[3]=c->r[29]|c->r[29]; // 801C79E0
  goto L_801C7A00; // 801C79E4
L_801C79E8:;
  c->r[5]=R8(c->r[4]+0x00000001u); // 801C79E8
  c->r[3]=c->r[29]+0x00000003u; // 801C79EC
  c->r[0]=R8(c->r[4]+0x00000002u); // 801C79F0
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 801C79F4
  c->r[5]=c->r[5]|c->r[0]; // 801C79F8
  W32(c->r[30]+0x00000000u,c->r[5]); // 801C79FC
L_801C7A00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7A00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7A04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7A08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7A0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C7A10
  c->lr=c->r[0]; // 801C7A14
  c->r[1]=c->r[1]+0x00000020u; // 801C7A18
  return; // 801C7A1C
}

// fn_801C7A20
void f_801C7A20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7A20
  c->r[0]=c->lr; // 801C7A24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7A28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7A2C
  c->r[31]=c->r[3]|c->r[3]; // 801C7A30
  c->lr=0x801C7A38u; f_801CC220(c); // 801C7A34
  c->r[4]=0u+0x803A0000u; // 801C7A38
  c->r[3]=c->r[31]|c->r[31]; // 801C7A3C
  c->r[4]=c->r[4]+0xFFFFF508u; // 801C7A40
  W32(c->r[31]+0x00000000u,c->r[4]); // 801C7A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7A48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7A4C
  c->lr=c->r[0]; // 801C7A50
  c->r[1]=c->r[1]+0x00000010u; // 801C7A54
  return; // 801C7A58
}

// fn_801C7A60
void f_801C7A60(Ctx* __restrict c) {
  c->r[0]=c->r[3]|c->r[3]; // 801C7A60
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801C7A64
  c->r[5]=c->r[4]|c->r[4]; // 801C7A68
  c->r[4]=c->r[0]|c->r[0]; // 801C7A6C
  f_801C6530(c); return; // 801C7A70
}

// fn_801C7A80
void f_801C7A80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7A80
  c->r[0]=c->lr; // 801C7A84
  cmps(c,0,(int32_t)c->r[3],0); // 801C7A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7A8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7A90
  c->r[31]=c->r[4]|c->r[4]; // 801C7A94
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7A98
  c->r[30]=c->r[3]|c->r[3]; // 801C7A9C
  if (crb(c,2)) { goto L_801C7ABC; } // 801C7AA0
  c->r[4]=0u+0x00000000u; // 801C7AA4
  c->lr=0x801C7AACu; f_801CC2C0(c); // 801C7AA8
  cmps(c,0,(int32_t)c->r[31],0); // 801C7AAC
  if (!crb(c,1)) { goto L_801C7ABC; } // 801C7AB0
  c->r[3]=c->r[30]|c->r[30]; // 801C7AB4
  c->lr=0x801C7ABCu; f_802E61AC(c); // 801C7AB8
L_801C7ABC:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7ABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7AC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7AC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7AC8
  c->lr=c->r[0]; // 801C7ACC
  c->r[1]=c->r[1]+0x00000010u; // 801C7AD0
  return; // 801C7AD4
}

// fn_801C7AE0
void f_801C7AE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7AE0
  c->r[0]=c->lr; // 801C7AE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7AE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7AEC
  c->r[31]=c->r[4]|c->r[4]; // 801C7AF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7AF4
  c->r[30]=c->r[3]|c->r[3]; // 801C7AF8
  c->r[3]=c->r[3]+0x00000008u; // 801C7AFC
  c->lr=0x801C7B04u; f_801C60B0(c); // 801C7B00
  cmps(c,0,(int32_t)c->r[3],0); // 801C7B04
  if (!crb(c,2)) { goto L_801C7B14; } // 801C7B08
  c->r[3]=0u+0x00000000u; // 801C7B0C
  goto L_801C7B1C; // 801C7B10
L_801C7B14:;
  if (crb(c,2)) { goto L_801C7B1C; } // 801C7B14
  c->lr=0x801C7B1Cu; f_801C7A20(c); // 801C7B18
L_801C7B1C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C7B1C
  if (crb(c,2)) { goto L_801C7B30; } // 801C7B20
  W32(c->r[3]+0x000000C4u,c->r[31]); // 801C7B24
  c->r[0]=R32(c->r[30]+0x00000004u); // 801C7B28
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801C7B2C
L_801C7B30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7B30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7B34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7B38
  c->lr=c->r[0]; // 801C7B3C
  c->r[1]=c->r[1]+0x00000010u; // 801C7B40
  return; // 801C7B44
}

// fn_801C7B50
void f_801C7B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7B50
  c->r[0]=c->lr; // 801C7B54
  cmps(c,0,(int32_t)c->r[4],0); // 801C7B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7B5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7B60
  c->r[31]=c->r[4]|c->r[4]; // 801C7B64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7B68
  c->r[30]=c->r[3]|c->r[3]; // 801C7B6C
  if (!crb(c,2)) { goto L_801C7B90; } // 801C7B70
  c->r[3]=0u+0x803A0000u; // 801C7B74
  c->r[5]=0u+0x803A0000u; // 801C7B78
  c->r[3]=c->r[3]+0xFFFFF518u; // 801C7B7C
  c->r[4]=0u+0x0000003Bu; // 801C7B80
  c->r[5]=c->r[5]+0xFFFFF538u; // 801C7B84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7B88
  c->lr=0x801C7B90u; f_80212260(c); // 801C7B8C
L_801C7B90:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C7B90
  c->r[0]=0u+0x00000000u; // 801C7B94
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801C7B98
  if (crb(c,2)) { goto L_801C7BC4; } // 801C7B9C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801C7BA0
  c->r[3]=c->r[31]|c->r[31]; // 801C7BA4
  c->r[4]=0u+0xFFFFFFFFu; // 801C7BA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801C7BAC
  c->ctr=c->r[12]; // 801C7BB0
  if (true) { c->lr=0x801C7BB8u; dispatch(c,c->ctr); } // 801C7BB4
  c->r[4]=c->r[31]|c->r[31]; // 801C7BB8
  c->r[3]=c->r[30]+0x00000008u; // 801C7BBC
  c->lr=0x801C7BC4u; f_801C6110(c); // 801C7BC0
L_801C7BC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7BC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7BC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7BCC
  c->lr=c->r[0]; // 801C7BD0
  c->r[1]=c->r[1]+0x00000010u; // 801C7BD4
  return; // 801C7BD8
}

// fn_801C7BE0
void f_801C7BE0(Ctx* __restrict c) {
  c->r[6]=0u+0x000000D0u; // 801C7BE0
  c->r[3]=c->r[3]+0x00000008u; // 801C7BE4
  f_801C5E30(c); return; // 801C7BE8
}

// fn_801C7BF0
void f_801C7BF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 801C7BF0
  f_801C6050(c); return; // 801C7BF4
}

// fn_801C7C00
void f_801C7C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7C00
  c->r[0]=c->lr; // 801C7C04
  cmps(c,0,(int32_t)c->r[3],0); // 801C7C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7C0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7C10
  c->r[31]=c->r[3]|c->r[3]; // 801C7C14
  if (crb(c,2)) { goto L_801C7C28; } // 801C7C18
  cmps(c,0,(int32_t)c->r[4],0); // 801C7C1C
  if (!crb(c,1)) { goto L_801C7C28; } // 801C7C20
  c->lr=0x801C7C28u; f_802E61AC(c); // 801C7C24
L_801C7C28:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7C28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7C30
  c->lr=c->r[0]; // 801C7C34
  c->r[1]=c->r[1]+0x00000010u; // 801C7C38
  return; // 801C7C3C
}

// fn_801C7C40
void f_801C7C40(Ctx* __restrict c) {
  c->r[4]=0u+0x803A0000u; // 801C7C40
  c->r[0]=0u+0x00000000u; // 801C7C44
  c->r[4]=c->r[4]+0xFFFFF678u; // 801C7C48
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C7C4C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C7C50
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C7C54
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C7C58
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C7C5C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C7C60
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C7C64
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801C7C68
  return; // 801C7C6C
}

// fn_801C7C70
void f_801C7C70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7C70
  c->r[0]=c->lr; // 801C7C74
  cmps(c,0,(int32_t)c->r[3],0); // 801C7C78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7C7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7C80
  c->r[31]=c->r[3]|c->r[3]; // 801C7C84
  if (crb(c,2)) { goto L_801C7C98; } // 801C7C88
  cmps(c,0,(int32_t)c->r[4],0); // 801C7C8C
  if (!crb(c,1)) { goto L_801C7C98; } // 801C7C90
  c->lr=0x801C7C98u; f_802E61AC(c); // 801C7C94
L_801C7C98:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7C98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7C9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7CA0
  c->lr=c->r[0]; // 801C7CA4
  c->r[1]=c->r[1]+0x00000010u; // 801C7CA8
  return; // 801C7CAC
}

// fn_801C7CB0
void f_801C7CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7CB0
  c->r[0]=c->lr; // 801C7CB4
  cmps(c,0,(int32_t)c->r[3],0); // 801C7CB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7CBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7CC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7CC4
  c->r[30]=c->r[4]|c->r[4]; // 801C7CC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7CCC
  c->r[29]=c->r[3]|c->r[3]; // 801C7CD0
  if (crb(c,2)) { goto L_801C7D54; } // 801C7CD4
  c->r[4]=0u+0x803A0000u; // 801C7CD8
  c->r[4]=c->r[4]+0xFFFFF678u; // 801C7CDC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C7CE0
  c->lr=0x801C7CE8u; f_801D76C0(c); // 801C7CE4
  c->r[3]=c->r[3]+0x00000354u; // 801C7CE8
  c->lr=0x801C7CF0u; f_80126DC0(c); // 801C7CEC
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801C7CF0
  c->lr=0x801C7CF8u; f_801BEEC0(c); // 801C7CF4
  c->r[0]=R32(c->r[29]+0x00000014u); // 801C7CF8
  c->r[4]=c->r[31]|c->r[31]; // 801C7CFC
  c->r[6]=0u+0x00000000u; // 801C7D00
  c->r[5]=c->r[0]-c->r[31]; // 801C7D04
  c->lr=0x801C7D0Cu; f_801BF0A0(c); // 801C7D08
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 801C7D0C
  c->lr=0x801C7D14u; f_801BEEC0(c); // 801C7D10
  c->r[0]=R32(c->r[29]+0x00000014u); // 801C7D14
  c->r[4]=c->r[31]|c->r[31]; // 801C7D18
  c->r[6]=0u+0x00000000u; // 801C7D1C
  c->r[5]=c->r[0]-c->r[31]; // 801C7D20
  c->lr=0x801C7D28u; f_801BF1F0(c); // 801C7D24
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801C7D28
  W32(c->r[29]+0x00000014u,c->r[0]); // 801C7D2C
  c->lr=0x801C7D34u; f_801D76C0(c); // 801C7D30
  c->r[3]=c->r[3]+0x00000354u; // 801C7D34
  c->lr=0x801C7D3Cu; f_80126EA0(c); // 801C7D38
  cmps(c,0,(int32_t)c->r[30],0); // 801C7D3C
  c->r[0]=0u+0x00000000u; // 801C7D40
  W32(c->r[29]+0x00000014u,c->r[0]); // 801C7D44
  if (!crb(c,1)) { goto L_801C7D54; } // 801C7D48
  c->r[3]=c->r[29]|c->r[29]; // 801C7D4C
  c->lr=0x801C7D54u; f_802E61AC(c); // 801C7D50
L_801C7D54:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7D54
  c->r[3]=c->r[29]|c->r[29]; // 801C7D58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7D5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7D60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7D64
  c->lr=c->r[0]; // 801C7D68
  c->r[1]=c->r[1]+0x00000020u; // 801C7D6C
  return; // 801C7D70
}

// Create__Q44nw4r3snd6detail10PlayerHeapFPvUl
void f_801C7D80(Ctx* __restrict c) {
  trace_call(0x801C7D80u);
  c->r[0]=c->r[4]+0x0000001Fu; // 801C7D80
  c->r[4]=c->r[5]+c->r[4]; // 801C7D84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C7D88
  cmpu(c,0,c->r[0],c->r[4]); // 801C7D8C
  if (!crb(c,1)) { goto L_801C7D9C; } // 801C7D90
  c->r[3]=0u+0x00000000u; // 801C7D94
  return; // 801C7D98
L_801C7D9C:;
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C7D9C
  W32(c->r[3]+0x00000010u,c->r[4]); // 801C7DA0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C7DA4
  c->r[3]=0u+0x00000001u; // 801C7DA8
  return; // 801C7DAC
}

// fn_801C7DB0
void f_801C7DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7DB0
  c->r[0]=c->lr; // 801C7DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7DBC
  c->r[31]=c->r[4]|c->r[4]; // 801C7DC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7DC4
  c->r[30]=c->r[3]|c->r[3]; // 801C7DC8
  c->r[6]=R32(c->r[3]+0x00000014u); // 801C7DCC
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801C7DD0
  if (crb(c,2)) { goto L_801C7DF4; } // 801C7DD4
  c->r[3]=0u+0x803A0000u; // 801C7DD8
  c->r[5]=0u+0x803A0000u; // 801C7DDC
  c->r[4]=0u+0x0000006Cu; // 801C7DE0
  c->r[3]=c->r[3]+0xFFFFF578u; // 801C7DE4
  c->r[5]=c->r[5]+0xFFFFF58Cu; // 801C7DE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7DEC
  c->lr=0x801C7DF4u; f_80212260(c); // 801C7DF0
L_801C7DF4:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801C7DF4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801C7DF8
  c->r[4]=c->r[31]+c->r[3]; // 801C7DFC
  cmpu(c,0,c->r[4],c->r[0]); // 801C7E00
  if (!crb(c,1)) { goto L_801C7E10; } // 801C7E04
  c->r[3]=0u+0x00000000u; // 801C7E08
  goto L_801C7E1C; // 801C7E0C
L_801C7E10:;
  c->r[0]=c->r[4]+0x0000001Fu; // 801C7E10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801C7E14
  W32(c->r[30]+0x00000014u,c->r[0]); // 801C7E18
L_801C7E1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7E1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7E20
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7E24
  c->lr=c->r[0]; // 801C7E28
  c->r[1]=c->r[1]+0x00000010u; // 801C7E2C
  return; // 801C7E30
}

// Clear__Q44nw4r3snd6detail10PlayerHeapFv
void f_801C7E40(Ctx* __restrict c) {
  trace_call(0x801C7E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7E40
  c->r[0]=c->lr; // 801C7E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7E4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7E50
  c->r[30]=c->r[3]|c->r[3]; // 801C7E54
  c->lr=0x801C7E5Cu; f_801D76C0(c); // 801C7E58
  c->r[3]=c->r[3]+0x00000354u; // 801C7E5C
  c->lr=0x801C7E64u; f_80126DC0(c); // 801C7E60
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 801C7E64
  c->lr=0x801C7E6Cu; f_801BEEC0(c); // 801C7E68
  c->r[0]=R32(c->r[30]+0x00000014u); // 801C7E6C
  c->r[4]=c->r[31]|c->r[31]; // 801C7E70
  c->r[6]=0u+0x00000000u; // 801C7E74
  c->r[5]=c->r[0]-c->r[31]; // 801C7E78
  c->lr=0x801C7E80u; f_801BF0A0(c); // 801C7E7C
  c->r[31]=R32(c->r[30]+0x0000000Cu); // 801C7E80
  c->lr=0x801C7E88u; f_801BEEC0(c); // 801C7E84
  c->r[0]=R32(c->r[30]+0x00000014u); // 801C7E88
  c->r[4]=c->r[31]|c->r[31]; // 801C7E8C
  c->r[6]=0u+0x00000000u; // 801C7E90
  c->r[5]=c->r[0]-c->r[31]; // 801C7E94
  c->lr=0x801C7E9Cu; f_801BF1F0(c); // 801C7E98
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801C7E9C
  W32(c->r[30]+0x00000014u,c->r[0]); // 801C7EA0
  c->lr=0x801C7EA8u; f_801D76C0(c); // 801C7EA4
  c->r[3]=c->r[3]+0x00000354u; // 801C7EA8
  c->lr=0x801C7EB0u; f_80126EA0(c); // 801C7EAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7EB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7EB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7EB8
  c->lr=c->r[0]; // 801C7EBC
  c->r[1]=c->r[1]+0x00000010u; // 801C7EC0
  return; // 801C7EC4
}

// fn_801C7ED0
void f_801C7ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7ED0
  c->r[0]=c->lr; // 801C7ED4
  c->r[4]=R32(c->r[3]+0x00000014u); // 801C7ED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7EDC
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C7EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7EE4
  c->r[31]=c->r[0]-c->r[4]; cr0(c,c->r[31]); // 801C7EE8
  if (!crb(c,0)) { goto L_801C7F0C; } // 801C7EEC
  c->r[3]=0u+0x803A0000u; // 801C7EF0
  c->r[5]=0u+0x803A0000u; // 801C7EF4
  c->r[3]=c->r[3]+0xFFFFF578u; // 801C7EF8
  c->r[4]=0u+0x0000009Du; // 801C7EFC
  c->r[5]=c->r[5]+0xFFFFF5DCu; // 801C7F00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7F04
  c->lr=0x801C7F0Cu; f_80212260(c); // 801C7F08
L_801C7F0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801C7F0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7F10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7F14
  c->lr=c->r[0]; // 801C7F18
  c->r[1]=c->r[1]+0x00000010u; // 801C7F1C
  return; // 801C7F20
}

// fn_801C7F30
void f_801C7F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7F30
  c->r[0]=c->lr; // 801C7F34
  cmps(c,0,(int32_t)c->r[4],0); // 801C7F38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7F3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7F40
  c->r[31]=0u+0x803A0000u; // 801C7F44
  c->r[31]=c->r[31]+0xFFFFF578u; // 801C7F48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7F4C
  c->r[30]=c->r[4]|c->r[4]; // 801C7F50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7F54
  c->r[29]=c->r[3]|c->r[3]; // 801C7F58
  if (!crb(c,2)) { goto L_801C7F74; } // 801C7F5C
  c->r[3]=c->r[31]+0x00000000u; // 801C7F60
  c->r[5]=c->r[31]+0x00000088u; // 801C7F64
  c->r[4]=0u+0x000000ACu; // 801C7F68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7F6C
  c->lr=0x801C7F74u; f_80212260(c); // 801C7F70
L_801C7F74:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C7F74
  cmps(c,0,(int32_t)c->r[0],0); // 801C7F78
  if (crb(c,2)) { goto L_801C7F94; } // 801C7F7C
  c->r[3]=c->r[31]+0x00000000u; // 801C7F80
  c->r[5]=c->r[31]+0x000000B0u; // 801C7F84
  c->r[4]=0u+0x000000ADu; // 801C7F88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7F8C
  c->lr=0x801C7F94u; f_80212260(c); // 801C7F90
L_801C7F94:;
  W32(c->r[29]+0x00000004u,c->r[30]); // 801C7F94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7F98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7F9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7FA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7FA4
  c->lr=c->r[0]; // 801C7FA8
  c->r[1]=c->r[1]+0x00000020u; // 801C7FAC
  return; // 801C7FB0
}

// fn_801C7FC0
void f_801C7FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7FC0
  c->r[0]=c->lr; // 801C7FC4
  cmps(c,0,(int32_t)c->r[4],0); // 801C7FC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7FCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7FD0
  c->r[31]=0u+0x803A0000u; // 801C7FD4
  c->r[31]=c->r[31]+0xFFFFF578u; // 801C7FD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7FDC
  c->r[30]=c->r[4]|c->r[4]; // 801C7FE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7FE4
  c->r[29]=c->r[3]|c->r[3]; // 801C7FE8
  if (!crb(c,2)) { goto L_801C8004; } // 801C7FEC
  c->r[3]=c->r[31]+0x00000000u; // 801C7FF0
  c->r[5]=c->r[31]+0x00000088u; // 801C7FF4
  c->r[4]=0u+0x000000BDu; // 801C7FF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C7FFC
  c->lr=0x801C8004u; f_80212260(c); // 801C8000
L_801C8004:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801C8004
  cmpu(c,0,c->r[30],c->r[0]); // 801C8008
  if (crb(c,2)) { goto L_801C8024; } // 801C800C
  c->r[3]=c->r[31]+0x00000000u; // 801C8010
  c->r[5]=c->r[31]+0x000000D8u; // 801C8014
  c->r[4]=0u+0x000000BEu; // 801C8018
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C801C
  c->lr=0x801C8024u; f_80212260(c); // 801C8020
L_801C8024:;
  c->r[0]=0u+0x00000000u; // 801C8024
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C8028
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C802C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8030
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8034
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8038
  c->lr=c->r[0]; // 801C803C
  c->r[1]=c->r[1]+0x00000020u; // 801C8040
  return; // 801C8044
}

// __ct__Q34nw4r3snd13RemoteSpeakerFv
void f_801C8050(Ctx* __restrict c) {
  trace_call(0x801C8050u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8050
  c->r[0]=c->lr; // 801C8054
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8058
  c->r[0]=0u+0x00000000u; // 801C805C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8060
  c->r[31]=c->r[3]|c->r[3]; // 801C8064
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C8068
  W8(c->r[3]+0x00000001u,c->r[0]); // 801C806C
  W8(c->r[3]+0x00000002u,c->r[0]); // 801C8070
  W8(c->r[3]+0x00000003u,c->r[0]); // 801C8074
  W8(c->r[3]+0x00000004u,c->r[0]); // 801C8078
  W8(c->r[3]+0x00000005u,c->r[0]); // 801C807C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C8080
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C8084
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C8088
  W32(c->r[3]+0x00000038u,c->r[0]); // 801C808C
  c->r[3]=c->r[3]+0x00000040u; // 801C8090
  c->lr=0x801C8098u; f_8011FAB0(c); // 801C8094
  c->r[4]=c->r[31]|c->r[31]; // 801C8098
  c->r[3]=c->r[31]+0x00000040u; // 801C809C
  c->lr=0x801C80A4u; f_80120240(c); // 801C80A0
  c->r[3]=c->r[31]+0x00000070u; // 801C80A4
  c->lr=0x801C80ACu; f_8011FAB0(c); // 801C80A8
  c->r[4]=c->r[31]|c->r[31]; // 801C80AC
  c->r[3]=c->r[31]+0x00000070u; // 801C80B0
  c->lr=0x801C80B8u; f_80120240(c); // 801C80B4
  c->r[3]=c->r[31]|c->r[31]; // 801C80B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C80BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C80C0
  c->lr=c->r[0]; // 801C80C4
  c->r[1]=c->r[1]+0x00000010u; // 801C80C8
  return; // 801C80CC
}

// fn_801C80D0
void f_801C80D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C80D0
  c->r[0]=c->lr; // 801C80D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C80D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C80DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C80E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C80E4
  c->r[29]=c->r[4]|c->r[4]; // 801C80E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C80EC
  c->r[28]=c->r[3]|c->r[3]; // 801C80F0
  c->lr=0x801C80F8u; f_801251B0(c); // 801C80F4
  c->r[30]=0u+0x00000000u; // 801C80F8
  W8(c->r[28]+0x00000001u,c->r[30]); // 801C80FC
  c->r[31]=c->r[3]|c->r[3]; // 801C8100
  c->r[3]=c->r[28]+0x00000040u; // 801C8104
  W8(c->r[28]+0x00000002u,c->r[30]); // 801C8108
  c->lr=0x801C8110u; f_8011FE10(c); // 801C810C
  W8(c->r[28]+0x00000006u,c->r[30]); // 801C8110
  c->r[3]=c->r[28]+0x00000070u; // 801C8114
  c->lr=0x801C811Cu; f_8011FE10(c); // 801C8118
  c->r[12]=R32(c->r[28]+0x00000038u); // 801C811C
  c->r[0]=0u+0x00000001u; // 801C8120
  W8(c->r[28]+0x00000007u,c->r[30]); // 801C8124
  cmps(c,0,(int32_t)c->r[12],0); // 801C8128
  W8(c->r[28]+0x00000006u,c->r[30]); // 801C812C
  W8(c->r[28]+0x00000001u,c->r[30]); // 801C8130
  W8(c->r[28]+0x00000002u,c->r[0]); // 801C8134
  W8(c->r[28]+0x00000007u,c->r[30]); // 801C8138
  if (crb(c,2)) { goto L_801C8154; } // 801C813C
  c->r[3]=R32(c->r[28]+0x00000034u); // 801C8140
  c->r[4]=0u+0x00000000u; // 801C8144
  c->ctr=c->r[12]; // 801C8148
  if (true) { c->lr=0x801C8150u; dispatch(c,c->ctr); } // 801C814C
  W8(c->r[28]+0x00000004u,c->r[30]); // 801C8150
L_801C8154:;
  c->r[0]=0u+0x00000001u; // 801C8154
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 801C8158
  c->r[3]=c->r[31]|c->r[31]; // 801C815C
  W32(c->r[28]+0x00000038u,c->r[29]); // 801C8160
  W8(c->r[28]+0x00000000u,c->r[0]); // 801C8164
  c->lr=0x801C816Cu; f_801251F0(c); // 801C8168
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C816C
  c->r[3]=0u+0x00000001u; // 801C8170
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8174
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8178
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C817C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8180
  c->lr=c->r[0]; // 801C8184
  c->r[1]=c->r[1]+0x00000020u; // 801C8188
  return; // 801C818C
}

// fn_801C8190
void f_801C8190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8190
  c->r[0]=c->lr; // 801C8194
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C819C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C81A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C81A4
  c->r[29]=c->r[4]|c->r[4]; // 801C81A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C81AC
  c->r[28]=c->r[3]|c->r[3]; // 801C81B0
  c->lr=0x801C81B8u; f_801251B0(c); // 801C81B4
  c->r[30]=0u+0x00000000u; // 801C81B8
  W8(c->r[28]+0x00000001u,c->r[30]); // 801C81BC
  c->r[31]=c->r[3]|c->r[3]; // 801C81C0
  c->r[3]=c->r[28]+0x00000040u; // 801C81C4
  W8(c->r[28]+0x00000002u,c->r[30]); // 801C81C8
  c->lr=0x801C81D0u; f_8011FE10(c); // 801C81CC
  W8(c->r[28]+0x00000006u,c->r[30]); // 801C81D0
  c->r[3]=c->r[28]+0x00000070u; // 801C81D4
  c->lr=0x801C81DCu; f_8011FE10(c); // 801C81D8
  c->r[12]=R32(c->r[28]+0x00000038u); // 801C81DC
  W8(c->r[28]+0x00000007u,c->r[30]); // 801C81E0
  cmps(c,0,(int32_t)c->r[12],0); // 801C81E4
  if (crb(c,2)) { goto L_801C8200; } // 801C81E8
  c->r[3]=R32(c->r[28]+0x00000034u); // 801C81EC
  c->r[4]=0u+0x00000000u; // 801C81F0
  c->ctr=c->r[12]; // 801C81F4
  if (true) { c->lr=0x801C81FCu; dispatch(c,c->ctr); } // 801C81F8
  W8(c->r[28]+0x00000004u,c->r[30]); // 801C81FC
L_801C8200:;
  c->r[3]=0u+0x00000003u; // 801C8200
  c->r[0]=0u+0x00000000u; // 801C8204
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 801C8208
  c->r[3]=c->r[31]|c->r[31]; // 801C820C
  W32(c->r[28]+0x00000038u,c->r[29]); // 801C8210
  W8(c->r[28]+0x00000000u,c->r[0]); // 801C8214
  c->lr=0x801C821Cu; f_801251F0(c); // 801C8218
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C821C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C8220
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8224
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8228
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C822C
  c->lr=c->r[0]; // 801C8230
  c->r[1]=c->r[1]+0x00000020u; // 801C8234
  return; // 801C8238
}

// fn_801C8240
void f_801C8240(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000005u); // 801C8240
  cmps(c,0,(int32_t)c->r[0],0); // 801C8244
  if (!crb(c,2)) return; // 801C8248
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801C824C
  cmps(c,0,(int32_t)c->r[4],0); // 801C8250
  if (crb(c,2)) { goto L_801C825C; } // 801C8254
  goto L_801C8260; // 801C8258
L_801C825C:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 801C825C
L_801C8260:;
  c->r[0]=0u+0x00000000u; // 801C8260
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C8264
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C8268
  f_801C8280(c); return; // 801C826C
  return; // 801C8270
}

// fn_801C8280
void f_801C8280(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801C8280
  if (crb(c,2)) return; // 801C8284
  cmps(c,0,(int32_t)c->r[4],1); // 801C8288
  if (crb(c,2)) { goto L_801C82A4; } // 801C828C
  cmps(c,0,(int32_t)c->r[4],2); // 801C8290
  if (crb(c,2)) { goto L_801C82C8; } // 801C8294
  cmps(c,0,(int32_t)c->r[4],3); // 801C8298
  if (crb(c,2)) { goto L_801C82F0; } // 801C829C
  goto L_801C8318; // 801C82A0
L_801C82A4:;
  c->r[0]=0u+0x00000001u; // 801C82A4
  c->r[5]=0u+0x801D0000u; // 801C82A8
  W8(c->r[3]+0x00000004u,c->r[0]); // 801C82AC
  c->r[5]=c->r[5]+0xFFFF86A0u; // 801C82B0
  c->r[4]=0u+0x00000001u; // 801C82B4
  W8(c->r[3]+0x00000005u,c->r[0]); // 801C82B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C82BC
  c->r[3]=R32(c->r[3]+0x00000034u); // 801C82C0
  f_8015E070(c); return; // 801C82C4
L_801C82C8:;
  c->r[6]=0u+0x00000001u; // 801C82C8
  c->r[0]=0u+0x00000003u; // 801C82CC
  c->r[5]=0u+0x801D0000u; // 801C82D0
  W8(c->r[3]+0x00000004u,c->r[6]); // 801C82D4
  c->r[5]=c->r[5]+0xFFFF87F0u; // 801C82D8
  c->r[4]=0u+0x00000004u; // 801C82DC
  W8(c->r[3]+0x00000005u,c->r[6]); // 801C82E0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C82E4
  c->r[3]=R32(c->r[3]+0x00000034u); // 801C82E8
  f_8015E070(c); return; // 801C82EC
L_801C82F0:;
  c->r[6]=0u+0x00000001u; // 801C82F0
  c->r[0]=0u+0x00000005u; // 801C82F4
  c->r[5]=0u+0x801D0000u; // 801C82F8
  W8(c->r[3]+0x00000004u,c->r[6]); // 801C82FC
  c->r[5]=c->r[5]+0xFFFF8910u; // 801C8300
  c->r[4]=0u+0x00000000u; // 801C8304
  W8(c->r[3]+0x00000005u,c->r[6]); // 801C8308
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C830C
  c->r[3]=R32(c->r[3]+0x00000034u); // 801C8310
  f_8015E070(c); return; // 801C8314
L_801C8318:;
  c->r[3]=0u+0x803A0000u; // 801C8318
  c->r[5]=0u+0x803A0000u; // 801C831C
  c->r[3]=c->r[3]+0xFFFFF698u; // 801C8320
  c->r[4]=0u+0x00000123u; // 801C8324
  c->r[5]=c->r[5]+0xFFFFF6B0u; // 801C8328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C832C
  f_80212260(c); return; // 801C8330
  return; // 801C8334
}

// fn_801C8340
void f_801C8340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8340
  c->r[0]=c->lr; // 801C8344
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C8348
  c->r[11]=c->r[1]+0x00000040u; // 801C834C
  c->lr=0x801C8354u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8350
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C8354
  c->r[26]=0u+0x803A0000u; // 801C8358
  c->r[28]=c->r[3]|c->r[3]; // 801C835C
  c->r[29]=c->r[4]|c->r[4]; // 801C8360
  cmps(c,0,(int32_t)c->r[0],4); // 801C8364
  c->r[26]=c->r[26]+0xFFFFF698u; // 801C8368
  if (crb(c,2)) { goto L_801C8384; } // 801C836C
  c->r[3]=c->r[26]+0x00000000u; // 801C8370
  c->r[5]=c->r[26]+0x0000002Cu; // 801C8374
  c->r[4]=0u+0x00000133u; // 801C8378
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C837C
  c->lr=0x801C8384u; f_80212260(c); // 801C8380
L_801C8384:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801C8384
  cmps(c,0,(int32_t)c->r[0],4); // 801C8388
  if (!crb(c,2)) { goto L_801C8680; } // 801C838C
  c->r[0]=R8(c->r[28]+0x00000002u); // 801C8390
  c->r[30]=0u+0x00000001u; // 801C8394
  cmps(c,0,(int32_t)c->r[0],0); // 801C8398
  if (crb(c,2)) { goto L_801C8490; } // 801C839C
  c->r[0]=0u+0x00000002u; // 801C83A0
  c->r[5]=c->r[29]|c->r[29]; // 801C83A4
  c->r[4]=0u+0x00000001u; // 801C83A8
  c->r[3]=0u+0x00000000u; // 801C83AC
  c->ctr=c->r[0]; // 801C83B0
  c->r[0]=c->r[0]|0x00000000u; // 801C83B4
L_801C83B8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801C83B8
  cmps(c,0,(int32_t)c->r[0],0); // 801C83BC
  if (crb(c,2)) { goto L_801C83CC; } // 801C83C0
  c->r[4]=0u+0x00000000u; // 801C83C4
  goto L_801C8494; // 801C83C8
L_801C83CC:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 801C83CC
  cmps(c,0,(int32_t)c->r[0],0); // 801C83D0
  if (crb(c,2)) { goto L_801C83E0; } // 801C83D4
  c->r[4]=0u+0x00000000u; // 801C83D8
  goto L_801C8494; // 801C83DC
L_801C83E0:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 801C83E0
  cmps(c,0,(int32_t)c->r[0],0); // 801C83E4
  if (crb(c,2)) { goto L_801C83F4; } // 801C83E8
  c->r[4]=0u+0x00000000u; // 801C83EC
  goto L_801C8494; // 801C83F0
L_801C83F4:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801C83F4
  cmps(c,0,(int32_t)c->r[0],0); // 801C83F8
  if (crb(c,2)) { goto L_801C8408; } // 801C83FC
  c->r[4]=0u+0x00000000u; // 801C8400
  goto L_801C8494; // 801C8404
L_801C8408:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 801C8408
  cmps(c,0,(int32_t)c->r[0],0); // 801C840C
  if (crb(c,2)) { goto L_801C841C; } // 801C8410
  c->r[4]=0u+0x00000000u; // 801C8414
  goto L_801C8494; // 801C8418
L_801C841C:;
  c->r[0]=R32(c->r[5]+0x00000014u); // 801C841C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8420
  if (crb(c,2)) { goto L_801C8430; } // 801C8424
  c->r[4]=0u+0x00000000u; // 801C8428
  goto L_801C8494; // 801C842C
L_801C8430:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 801C8430
  cmps(c,0,(int32_t)c->r[0],0); // 801C8434
  if (crb(c,2)) { goto L_801C8444; } // 801C8438
  c->r[4]=0u+0x00000000u; // 801C843C
  goto L_801C8494; // 801C8440
L_801C8444:;
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801C8444
  cmps(c,0,(int32_t)c->r[0],0); // 801C8448
  if (crb(c,2)) { goto L_801C8458; } // 801C844C
  c->r[4]=0u+0x00000000u; // 801C8450
  goto L_801C8494; // 801C8454
L_801C8458:;
  c->r[0]=R32(c->r[5]+0x00000020u); // 801C8458
  cmps(c,0,(int32_t)c->r[0],0); // 801C845C
  if (crb(c,2)) { goto L_801C846C; } // 801C8460
  c->r[4]=0u+0x00000000u; // 801C8464
  goto L_801C8494; // 801C8468
L_801C846C:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 801C846C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8470
  if (crb(c,2)) { goto L_801C8480; } // 801C8474
  c->r[4]=0u+0x00000000u; // 801C8478
  goto L_801C8494; // 801C847C
L_801C8480:;
  c->r[5]=c->r[5]+0x00000028u; // 801C8480
  c->r[3]=c->r[3]+0x00000009u; // 801C8484
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C83B8; } // 801C8488
  goto L_801C8494; // 801C848C
L_801C8490:;
  c->r[4]=0u+0x00000001u; // 801C8490
L_801C8494:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C8494
  if (crb(c,2)) { goto L_801C84A0; } // 801C8498
  c->r[30]=0u+0x00000000u; // 801C849C
L_801C84A0:;
  c->r[0]=R8(c->r[28]+0x00000001u); // 801C84A0
  c->r[25]=0u+0x00000000u; // 801C84A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C84A8
  if (!crb(c,2)) { goto L_801C84BC; } // 801C84AC
  cmps(c,0,(int32_t)c->r[30],0); // 801C84B0
  if (crb(c,2)) { goto L_801C84BC; } // 801C84B4
  c->r[25]=0u+0x00000001u; // 801C84B8
L_801C84BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C84BC
  c->r[31]=0u+0x00000000u; // 801C84C0
  if (crb(c,2)) { goto L_801C84D4; } // 801C84C4
  cmps(c,0,(int32_t)c->r[30],0); // 801C84C8
  if (!crb(c,2)) { goto L_801C84D4; } // 801C84CC
  c->r[31]=0u+0x00000001u; // 801C84D0
L_801C84D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C84D4
  if (crb(c,2)) { goto L_801C85B8; } // 801C84D8
  c->lr=0x801C84E0u; f_801251B0(c); // 801C84DC
  c->r[27]=c->r[3]|c->r[3]; // 801C84E0
  c->r[3]=R32(c->r[28]+0x00000034u); // 801C84E4
  c->lr=0x801C84ECu; f_8015F840(c); // 801C84E8
  cmps(c,0,(int32_t)c->r[3],0); // 801C84EC
  if (!crb(c,2)) { goto L_801C8500; } // 801C84F0
  c->r[3]=c->r[27]|c->r[27]; // 801C84F4
  c->lr=0x801C84FCu; f_801251F0(c); // 801C84F8
  goto L_801C8680; // 801C84FC
L_801C8500:;
  c->r[4]=R8(c->r[28]+0x00000003u); // 801C8500
  c->r[0]=0u+0x00000000u; // 801C8504
  c->r[5]=c->r[29]|c->r[29]; // 801C8508
  c->r[3]=c->r[28]+0x00000014u; // 801C850C
  c->r[4]=cntlz(c->r[4]); // 801C8510
  W8(c->r[28]+0x00000003u,c->r[0]); // 801C8514
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 801C8518
  c->r[7]=c->r[1]+0x00000008u; // 801C851C
  c->r[6]=0u+0x00000028u; // 801C8520
  c->lr=0x801C8528u; f_801B1A20(c); // 801C8524
  c->r[3]=R32(c->r[28]+0x00000034u); // 801C8528
  c->r[4]=c->r[1]+0x00000008u; // 801C852C
  c->r[5]=0u+0x00000014u; // 801C8530
  c->lr=0x801C8538u; f_8015F8D0(c); // 801C8534
  cmps(c,0,(int32_t)c->r[3],0); // 801C8538
  c->r[29]=c->r[3]|c->r[3]; // 801C853C
  if (crb(c,2)) { goto L_801C855C; } // 801C8540
  c->r[6]=c->r[29]|c->r[29]; // 801C8544
  c->r[3]=c->r[26]+0x00000000u; // 801C8548
  c->r[5]=c->r[26]+0x00000050u; // 801C854C
  c->r[4]=0u+0x00000166u; // 801C8550
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8554
  c->lr=0x801C855Cu; f_80212300(c); // 801C8558
L_801C855C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C855C
  if (crb(c,2)) { goto L_801C85B0; } // 801C8560
  c->r[29]=0u+0x00000000u; // 801C8564
  c->r[30]=0u+0x00000001u; // 801C8568
  W32(c->r[28]+0x00000010u,c->r[30]); // 801C856C
  c->r[3]=c->r[28]+0x00000040u; // 801C8570
  W32(c->r[28]+0x00000008u,c->r[29]); // 801C8574
  W8(c->r[28]+0x00000001u,c->r[29]); // 801C8578
  W8(c->r[28]+0x00000002u,c->r[29]); // 801C857C
  c->lr=0x801C8584u; f_8011FE10(c); // 801C8580
  W8(c->r[28]+0x00000006u,c->r[29]); // 801C8584
  c->r[3]=c->r[28]+0x00000070u; // 801C8588
  c->lr=0x801C8590u; f_8011FE10(c); // 801C858C
  W8(c->r[28]+0x00000007u,c->r[29]); // 801C8590
  c->r[3]=c->r[27]|c->r[27]; // 801C8594
  W8(c->r[28]+0x00000006u,c->r[29]); // 801C8598
  W8(c->r[28]+0x00000001u,c->r[29]); // 801C859C
  W8(c->r[28]+0x00000002u,c->r[30]); // 801C85A0
  W8(c->r[28]+0x00000007u,c->r[29]); // 801C85A4
  c->lr=0x801C85ACu; f_801251F0(c); // 801C85A8
  goto L_801C8680; // 801C85AC
L_801C85B0:;
  c->r[3]=c->r[27]|c->r[27]; // 801C85B0
  c->lr=0x801C85B8u; f_801251F0(c); // 801C85B4
L_801C85B8:;
  cmps(c,0,(int32_t)c->r[25],0); // 801C85B8
  if (crb(c,2)) { goto L_801C8634; } // 801C85BC
  c->lr=0x801C85C4u; f_801251B0(c); // 801C85C0
  c->r[0]=R8(c->r[28]+0x00000006u); // 801C85C4
  c->r[27]=c->r[3]|c->r[3]; // 801C85C8
  cmps(c,0,(int32_t)c->r[0],0); // 801C85CC
  if (!crb(c,2)) { goto L_801C861C; } // 801C85D0
  c->r[3]=0u+0x80000000u; // 801C85D4
  c->r[7]=0u+0x801D0000u; // 801C85D8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801C85DC
  c->r[4]=0u+0x000001E0u; // 801C85E0
  c->r[5]=0u+0x00000000u; // 801C85E4
  c->r[3]=c->r[28]+0x00000040u; // 801C85E8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C85EC
  c->r[7]=c->r[7]+0xFFFF8A30u; // 801C85F0
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[4])>>32); // 801C85F4
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 801C85F8
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)480); // 801C85FC
  c->r[5]=c->r[0]+c->r[4]; // 801C8600
  c->lr=0x801C8608u; f_8011FD10(c); // 801C8604
  c->lr=0x801C860Cu; f_8012AB70(c); // 801C8608
  c->r[0]=0u+0x00000001u; // 801C860C
  W32(c->r[28]+0x000000A4u,c->r[4]); // 801C8610
  W32(c->r[28]+0x000000A0u,c->r[3]); // 801C8614
  W8(c->r[28]+0x00000006u,c->r[0]); // 801C8618
L_801C861C:;
  c->r[3]=c->r[28]+0x00000070u; // 801C861C
  c->lr=0x801C8624u; f_8011FE10(c); // 801C8620
  c->r[0]=0u+0x00000000u; // 801C8624
  W8(c->r[28]+0x00000007u,c->r[0]); // 801C8628
  c->r[3]=c->r[27]|c->r[27]; // 801C862C
  c->lr=0x801C8634u; f_801251F0(c); // 801C8630
L_801C8634:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C8634
  if (crb(c,2)) { goto L_801C867C; } // 801C8638
  c->lr=0x801C8640u; f_801251B0(c); // 801C863C
  c->r[0]=0u+0x00000001u; // 801C8640
  W8(c->r[28]+0x00000007u,c->r[0]); // 801C8644
  c->r[27]=c->r[3]|c->r[3]; // 801C8648
  c->r[3]=c->r[28]+0x00000070u; // 801C864C
  c->lr=0x801C8654u; f_8011FE10(c); // 801C8650
  c->r[3]=0u+0x80000000u; // 801C8654
  c->r[7]=0u+0x801D0000u; // 801C8658
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801C865C
  c->r[3]=c->r[28]+0x00000070u; // 801C8660
  c->r[7]=c->r[7]+0xFFFF8A80u; // 801C8664
  c->r[5]=0u+0x00000000u; // 801C8668
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C866C
  c->lr=0x801C8674u; f_8011FD10(c); // 801C8670
  c->r[3]=c->r[27]|c->r[27]; // 801C8674
  c->lr=0x801C867Cu; f_801251F0(c); // 801C8678
L_801C867C:;
  W8(c->r[28]+0x00000001u,c->r[30]); // 801C867C
L_801C8680:;
  c->r[11]=c->r[1]+0x00000040u; // 801C8680
  c->lr=0x801C8688u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8684
  c->r[0]=R32(c->r[1]+0x00000044u); // 801C8688
  c->lr=c->r[0]; // 801C868C
  c->r[1]=c->r[1]+0x00000040u; // 801C8690
  return; // 801C8694
}

// fn_801C86A0
void f_801C86A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C86A0
  c->r[0]=c->lr; // 801C86A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C86A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C86AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C86B0
  c->r[30]=0u+0x803A0000u; // 801C86B4
  c->r[30]=c->r[30]+0xFFFFF698u; // 801C86B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C86BC
  c->r[29]=c->r[4]|c->r[4]; // 801C86C0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C86C4
  c->r[28]=c->r[3]|c->r[3]; // 801C86C8
  c->lr=0x801C86D0u; f_801C8AF0(c); // 801C86CC
  c->r[4]=c->r[28]|c->r[28]; // 801C86D0
  c->lr=0x801C86D8u; f_801C8B90(c); // 801C86D4
  cmps(c,0,(int32_t)c->r[29],0); // 801C86D8
  c->r[31]=c->r[3]|c->r[3]; // 801C86DC
  if (crb(c,2)) { goto L_801C8700; } // 801C86E0
  cmps(c,0,(int32_t)c->r[29],-2); // 801C86E4
  if (crb(c,2)) { goto L_801C8728; } // 801C86E8
  cmps(c,0,(int32_t)c->r[29],-3); // 801C86EC
  if (crb(c,2)) { goto L_801C8734; } // 801C86F0
  cmps(c,0,(int32_t)c->r[29],-1); // 801C86F4
  if (crb(c,2)) { goto L_801C8754; } // 801C86F8
  goto L_801C8760; // 801C86FC
L_801C8700:;
  c->r[0]=0u+0x00000001u; // 801C8700
  W8(c->r[3]+0x00000003u,c->r[0]); // 801C8704
  c->r[4]=0u+0x00000000u; // 801C8708
  c->r[5]=0u+0x00000020u; // 801C870C
  c->r[3]=c->r[3]+0x00000014u; // 801C8710
  c->lr=0x801C8718u; f_80004714(c); // 801C8714
  c->r[0]=0u+0x00000002u; // 801C8718
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C871C
  W32(c->r[31]+0x00000010u,c->r[0]); // 801C8720
  goto L_801C877C; // 801C8724
L_801C8728:;
  c->r[0]=0u+0x00000001u; // 801C8728
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C872C
  goto L_801C877C; // 801C8730
L_801C8734:;
  c->r[3]=c->r[30]+0x00000000u; // 801C8734
  c->r[5]=c->r[30]+0x00000070u; // 801C8738
  c->r[4]=0u+0x000001CCu; // 801C873C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8740
  c->lr=0x801C8748u; f_80212300(c); // 801C8744
  c->r[0]=0u+0x00000000u; // 801C8748
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C874C
  goto L_801C877C; // 801C8750
L_801C8754:;
  c->r[0]=0u+0x00000000u; // 801C8754
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C8758
  goto L_801C877C; // 801C875C
L_801C8760:;
  c->r[3]=c->r[30]+0x00000000u; // 801C8760
  c->r[5]=c->r[30]+0x00000088u; // 801C8764
  c->r[4]=0u+0x000001D3u; // 801C8768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C876C
  c->lr=0x801C8774u; f_80212260(c); // 801C8770
  c->r[0]=0u+0x00000000u; // 801C8774
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C8778
L_801C877C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C877C
  if (crb(c,2)) { goto L_801C87BC; } // 801C8780
  cmps(c,0,(int32_t)c->r[29],-2); // 801C8784
  if (crb(c,2)) { goto L_801C87BC; } // 801C8788
  c->r[0]=R8(c->r[31]+0x00000004u); // 801C878C
  cmps(c,0,(int32_t)c->r[0],0); // 801C8790
  if (crb(c,2)) { goto L_801C87BC; } // 801C8794
  c->r[12]=R32(c->r[31]+0x00000038u); // 801C8798
  cmps(c,0,(int32_t)c->r[12],0); // 801C879C
  if (crb(c,2)) { goto L_801C87BC; } // 801C87A0
  c->r[3]=c->r[28]|c->r[28]; // 801C87A4
  c->r[4]=c->r[29]|c->r[29]; // 801C87A8
  c->ctr=c->r[12]; // 801C87AC
  if (true) { c->lr=0x801C87B4u; dispatch(c,c->ctr); } // 801C87B0
  c->r[0]=0u+0x00000000u; // 801C87B4
  W32(c->r[31]+0x00000038u,c->r[0]); // 801C87B8
L_801C87BC:;
  c->r[0]=0u+0x00000000u; // 801C87BC
  W8(c->r[31]+0x00000005u,c->r[0]); // 801C87C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C87C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C87C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C87CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C87D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C87D4
  c->lr=c->r[0]; // 801C87D8
  c->r[1]=c->r[1]+0x00000020u; // 801C87DC
  return; // 801C87E0
}

// fn_801C87F0
void f_801C87F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C87F0
  c->r[0]=c->lr; // 801C87F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C87F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C87FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8800
  c->r[30]=0u+0x803A0000u; // 801C8804
  c->r[30]=c->r[30]+0xFFFFF698u; // 801C8808
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C880C
  c->r[29]=c->r[4]|c->r[4]; // 801C8810
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C8814
  c->r[28]=c->r[3]|c->r[3]; // 801C8818
  c->lr=0x801C8820u; f_801C8AF0(c); // 801C881C
  c->r[4]=c->r[28]|c->r[28]; // 801C8820
  c->lr=0x801C8828u; f_801C8B90(c); // 801C8824
  cmps(c,0,(int32_t)c->r[29],0); // 801C8828
  c->r[31]=c->r[3]|c->r[3]; // 801C882C
  if (crb(c,2)) { goto L_801C8850; } // 801C8830
  cmps(c,0,(int32_t)c->r[29],-2); // 801C8834
  if (crb(c,2)) { goto L_801C885C; } // 801C8838
  cmps(c,0,(int32_t)c->r[29],-3); // 801C883C
  if (crb(c,2)) { goto L_801C8868; } // 801C8840
  cmps(c,0,(int32_t)c->r[29],-1); // 801C8844
  if (crb(c,2)) { goto L_801C8888; } // 801C8848
  goto L_801C8894; // 801C884C
L_801C8850:;
  c->r[0]=0u+0x00000004u; // 801C8850
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C8854
  goto L_801C88B0; // 801C8858
L_801C885C:;
  c->r[0]=0u+0x00000002u; // 801C885C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C8860
  goto L_801C88B0; // 801C8864
L_801C8868:;
  c->r[3]=c->r[30]+0x00000000u; // 801C8868
  c->r[5]=c->r[30]+0x000000ACu; // 801C886C
  c->r[4]=0u+0x000001F9u; // 801C8870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8874
  c->lr=0x801C887Cu; f_80212300(c); // 801C8878
  c->r[0]=0u+0x00000000u; // 801C887C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C8880
  goto L_801C88B0; // 801C8884
L_801C8888:;
  c->r[0]=0u+0x00000000u; // 801C8888
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C888C
  goto L_801C88B0; // 801C8890
L_801C8894:;
  c->r[3]=c->r[30]+0x00000000u; // 801C8894
  c->r[5]=c->r[30]+0x00000088u; // 801C8898
  c->r[4]=0u+0x00000200u; // 801C889C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C88A0
  c->lr=0x801C88A8u; f_80212260(c); // 801C88A4
  c->r[0]=0u+0x00000000u; // 801C88A8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C88AC
L_801C88B0:;
  cmps(c,0,(int32_t)c->r[29],-2); // 801C88B0
  if (crb(c,2)) { goto L_801C88E8; } // 801C88B4
  c->r[0]=R8(c->r[31]+0x00000004u); // 801C88B8
  cmps(c,0,(int32_t)c->r[0],0); // 801C88BC
  if (crb(c,2)) { goto L_801C88E8; } // 801C88C0
  c->r[12]=R32(c->r[31]+0x00000038u); // 801C88C4
  cmps(c,0,(int32_t)c->r[12],0); // 801C88C8
  if (crb(c,2)) { goto L_801C88E8; } // 801C88CC
  c->r[3]=c->r[28]|c->r[28]; // 801C88D0
  c->r[4]=c->r[29]|c->r[29]; // 801C88D4
  c->ctr=c->r[12]; // 801C88D8
  if (true) { c->lr=0x801C88E0u; dispatch(c,c->ctr); } // 801C88DC
  c->r[0]=0u+0x00000000u; // 801C88E0
  W32(c->r[31]+0x00000038u,c->r[0]); // 801C88E4
L_801C88E8:;
  c->r[0]=0u+0x00000000u; // 801C88E8
  W8(c->r[31]+0x00000005u,c->r[0]); // 801C88EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C88F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C88F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C88F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C88FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8900
  c->lr=c->r[0]; // 801C8904
  c->r[1]=c->r[1]+0x00000020u; // 801C8908
  return; // 801C890C
}

// fn_801C8910
void f_801C8910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8910
  c->r[0]=c->lr; // 801C8914
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8918
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C891C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8920
  c->r[30]=0u+0x803A0000u; // 801C8924
  c->r[30]=c->r[30]+0xFFFFF698u; // 801C8928
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C892C
  c->r[29]=c->r[4]|c->r[4]; // 801C8930
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C8934
  c->r[28]=c->r[3]|c->r[3]; // 801C8938
  c->lr=0x801C8940u; f_801C8AF0(c); // 801C893C
  c->r[4]=c->r[28]|c->r[28]; // 801C8940
  c->lr=0x801C8948u; f_801C8B90(c); // 801C8944
  cmps(c,0,(int32_t)c->r[29],0); // 801C8948
  c->r[31]=c->r[3]|c->r[3]; // 801C894C
  if (crb(c,2)) { goto L_801C8970; } // 801C8950
  cmps(c,0,(int32_t)c->r[29],-2); // 801C8954
  if (crb(c,2)) { goto L_801C897C; } // 801C8958
  cmps(c,0,(int32_t)c->r[29],-3); // 801C895C
  if (crb(c,2)) { goto L_801C8988; } // 801C8960
  cmps(c,0,(int32_t)c->r[29],-1); // 801C8964
  if (crb(c,2)) { goto L_801C89A8; } // 801C8968
  goto L_801C89B4; // 801C896C
L_801C8970:;
  c->r[0]=0u+0x00000006u; // 801C8970
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C8974
  goto L_801C89D0; // 801C8978
L_801C897C:;
  c->r[0]=0u+0x00000003u; // 801C897C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C8980
  goto L_801C89D0; // 801C8984
L_801C8988:;
  c->r[3]=c->r[30]+0x00000000u; // 801C8988
  c->r[5]=c->r[30]+0x000000C8u; // 801C898C
  c->r[4]=0u+0x00000226u; // 801C8990
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8994
  c->lr=0x801C899Cu; f_80212300(c); // 801C8998
  c->r[0]=0u+0x00000000u; // 801C899C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C89A0
  goto L_801C89D0; // 801C89A4
L_801C89A8:;
  c->r[0]=0u+0x00000000u; // 801C89A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C89AC
  goto L_801C89D0; // 801C89B0
L_801C89B4:;
  c->r[3]=c->r[30]+0x00000000u; // 801C89B4
  c->r[5]=c->r[30]+0x00000088u; // 801C89B8
  c->r[4]=0u+0x0000022Du; // 801C89BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C89C0
  c->lr=0x801C89C8u; f_80212260(c); // 801C89C4
  c->r[0]=0u+0x00000000u; // 801C89C8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C89CC
L_801C89D0:;
  cmps(c,0,(int32_t)c->r[29],-2); // 801C89D0
  if (crb(c,2)) { goto L_801C8A08; } // 801C89D4
  c->r[0]=R8(c->r[31]+0x00000004u); // 801C89D8
  cmps(c,0,(int32_t)c->r[0],0); // 801C89DC
  if (crb(c,2)) { goto L_801C8A08; } // 801C89E0
  c->r[12]=R32(c->r[31]+0x00000038u); // 801C89E4
  cmps(c,0,(int32_t)c->r[12],0); // 801C89E8
  if (crb(c,2)) { goto L_801C8A08; } // 801C89EC
  c->r[3]=c->r[28]|c->r[28]; // 801C89F0
  c->r[4]=c->r[29]|c->r[29]; // 801C89F4
  c->ctr=c->r[12]; // 801C89F8
  if (true) { c->lr=0x801C8A00u; dispatch(c,c->ctr); } // 801C89FC
  c->r[0]=0u+0x00000000u; // 801C8A00
  W32(c->r[31]+0x00000038u,c->r[0]); // 801C8A04
L_801C8A08:;
  c->r[0]=0u+0x00000000u; // 801C8A08
  W8(c->r[31]+0x00000005u,c->r[0]); // 801C8A0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C8A10
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8A14
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8A18
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C8A1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8A20
  c->lr=c->r[0]; // 801C8A24
  c->r[1]=c->r[1]+0x00000020u; // 801C8A28
  return; // 801C8A2C
}

// fn_801C8A30
void f_801C8A30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8A30
  c->r[0]=c->lr; // 801C8A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8A3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C8A40
  c->r[30]=c->r[3]|c->r[3]; // 801C8A44
  c->lr=0x801C8A4Cu; f_801251B0(c); // 801C8A48
  c->r[31]=c->r[3]|c->r[3]; // 801C8A4C
  c->r[3]=c->r[30]|c->r[30]; // 801C8A50
  c->lr=0x801C8A58u; f_80120250(c); // 801C8A54
  c->r[3]=c->r[31]|c->r[31]; // 801C8A58
  c->lr=0x801C8A60u; f_801251F0(c); // 801C8A5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8A60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8A64
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C8A68
  c->lr=c->r[0]; // 801C8A6C
  c->r[1]=c->r[1]+0x00000010u; // 801C8A70
  return; // 801C8A74
}

// fn_801C8A80
void f_801C8A80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8A80
  c->r[0]=c->lr; // 801C8A84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8A88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8A8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C8A90
  c->r[30]=c->r[3]|c->r[3]; // 801C8A94
  c->lr=0x801C8A9Cu; f_801251B0(c); // 801C8A98
  c->r[31]=c->r[3]|c->r[3]; // 801C8A9C
  c->r[3]=c->r[30]|c->r[30]; // 801C8AA0
  c->lr=0x801C8AA8u; f_80120250(c); // 801C8AA4
  c->r[0]=R8(c->r[3]+0x00000007u); // 801C8AA8
  c->r[30]=c->r[3]|c->r[3]; // 801C8AAC
  cmps(c,0,(int32_t)c->r[0],0); // 801C8AB0
  if (crb(c,2)) { goto L_801C8AC8; } // 801C8AB4
  c->r[3]=c->r[3]+0x00000040u; // 801C8AB8
  c->lr=0x801C8AC0u; f_8011FE10(c); // 801C8ABC
  c->r[0]=0u+0x00000000u; // 801C8AC0
  W8(c->r[30]+0x00000006u,c->r[0]); // 801C8AC4
L_801C8AC8:;
  c->r[0]=0u+0x00000000u; // 801C8AC8
  W8(c->r[30]+0x00000007u,c->r[0]); // 801C8ACC
  c->r[3]=c->r[31]|c->r[31]; // 801C8AD0
  c->lr=0x801C8AD8u; f_801251F0(c); // 801C8AD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8AD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8ADC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C8AE0
  c->lr=c->r[0]; // 801C8AE4
  c->r[1]=c->r[1]+0x00000010u; // 801C8AE8
  return; // 801C8AEC
}

// GetInstance__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_801C8AF0(Ctx* __restrict c) {
  trace_call(0x801C8AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8AF0
  c->r[0]=c->lr; // 801C8AF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8AF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8AFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8B00
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C8B04
  c->r[0]=R8(c->r[13]+0xFFFFC440u); // 801C8B08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C8B0C
  if (!crb(c,2)) { goto L_801C8B64; } // 801C8B10
  c->r[3]=0u+0x805B0000u; // 801C8B14
  c->r[0]=0u+0x00000000u; // 801C8B18
  c->r[30]=c->r[3]+0xFFFFC690u; // 801C8B1C
  W8(c->r[3]+0xFFFFC690u,c->r[0]); // 801C8B20
  c->r[29]=c->r[30]+0x00000038u; // 801C8B24
  c->r[31]=c->r[30]+0x000002D8u; // 801C8B28
L_801C8B2C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C8B2C
  c->lr=0x801C8B34u; f_801C8050(c); // 801C8B30
  c->r[29]=c->r[29]+0x000000A8u; // 801C8B34
  cmpu(c,0,c->r[29],c->r[31]); // 801C8B38
  if (crb(c,0)) { IRQCHK(c); goto L_801C8B2C; } // 801C8B3C
  c->r[4]=0u+0x00000001u; // 801C8B40
  c->r[5]=0u+0x00000000u; // 801C8B44
  c->r[3]=0u+0x00000002u; // 801C8B48
  c->r[0]=0u+0x00000003u; // 801C8B4C
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 801C8B50
  W32(c->r[30]+0x00000114u,c->r[4]); // 801C8B54
  W32(c->r[30]+0x000001BCu,c->r[3]); // 801C8B58
  W32(c->r[30]+0x00000264u,c->r[0]); // 801C8B5C
  W8(c->r[13]+0xFFFFC440u,c->r[4]); // 801C8B60
L_801C8B64:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C8B64
  c->r[3]=0u+0x805B0000u; // 801C8B68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8B6C
  c->r[3]=c->r[3]+0xFFFFC690u; // 801C8B70
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8B74
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8B78
  c->lr=c->r[0]; // 801C8B7C
  c->r[1]=c->r[1]+0x00000020u; // 801C8B80
  return; // 801C8B84
}

// fn_801C8B90
void f_801C8B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8B90
  c->r[0]=c->lr; // 801C8B94
  cmpu(c,0,c->r[4],0x00000003u); // 801C8B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8B9C
  c->r[0]=0u+0x00000000u; // 801C8BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8BA4
  c->r[31]=c->r[4]|c->r[4]; // 801C8BA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C8BAC
  c->r[30]=c->r[3]|c->r[3]; // 801C8BB0
  if (crb(c,1)) { goto L_801C8BBC; } // 801C8BB4
  c->r[0]=0u+0x00000001u; // 801C8BB8
L_801C8BBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C8BBC
  if (!crb(c,2)) { goto L_801C8BEC; } // 801C8BC0
  c->r[3]=0u+0x803A0000u; // 801C8BC4
  c->r[5]=0u+0x803A0000u; // 801C8BC8
  c->r[6]=c->r[31]|c->r[31]; // 801C8BCC
  c->r[4]=0u+0x00000047u; // 801C8BD0
  c->r[3]=c->r[3]+0xFFFFF778u; // 801C8BD4
  c->r[5]=c->r[5]+0xFFFFF798u; // 801C8BD8
  c->r[7]=0u+0x00000000u; // 801C8BDC
  c->r[8]=0u+0x00000004u; // 801C8BE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8BE4
  c->lr=0x801C8BECu; f_80212260(c); // 801C8BE8
L_801C8BEC:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)168); // 801C8BEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8BF0
  c->r[3]=c->r[30]+c->r[0]; // 801C8BF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C8BF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8BFC
  c->r[3]=c->r[3]+0x00000038u; // 801C8C00
  c->lr=c->r[0]; // 801C8C04
  c->r[1]=c->r[1]+0x00000010u; // 801C8C08
  return; // 801C8C0C
}

// Setup__Q44nw4r3snd6detail20RemoteSpeakerManagerFv
void f_801C8C10(Ctx* __restrict c) {
  trace_call(0x801C8C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8C10
  c->r[0]=c->lr; // 801C8C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8C18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8C1C
  c->r[31]=c->r[3]|c->r[3]; // 801C8C20
  c->r[0]=R8(c->r[3]+0x00000000u); // 801C8C24
  cmps(c,0,(int32_t)c->r[0],0); // 801C8C28
  if (!crb(c,2)) { goto L_801C8C98; } // 801C8C2C
  c->r[3]=c->r[3]+0x00000008u; // 801C8C30
  c->lr=0x801C8C38u; f_8011FAB0(c); // 801C8C34
  c->lr=0x801C8C3Cu; f_8012AB70(c); // 801C8C38
  c->r[6]=0u+0x80000000u; // 801C8C3C
  c->r[5]=0u+0x431C0000u; // 801C8C40
  c->r[0]=R32(c->r[6]+0x000000F8u); // 801C8C44
  c->r[6]=0u+0x10620000u; // 801C8C48
  c->r[10]=c->r[6]+0x00004DD3u; // 801C8C4C
  c->r[9]=0u+0x801D0000u; // 801C8C50
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C8C54
  c->r[5]=c->r[5]+0xFFFFDE83u; // 801C8C58
  c->r[8]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801C8C5C
  c->r[7]=0u+0x00660000u; // 801C8C60
  c->r[6]=c->r[4]|c->r[4]; // 801C8C64
  c->r[0]=c->r[7]+0xFFFFB9ABu; // 801C8C68
  c->r[5]=c->r[3]|c->r[3]; // 801C8C6C
  c->r[3]=c->r[31]+0x00000008u; // 801C8C70
  c->r[4]=rotl(c->r[8],17)&0x0001FFFFu; // 801C8C74
  c->r[9]=c->r[9]+0xFFFF8CB0u; // 801C8C78
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C8C7C
  c->r[7]=0u+0x00000000u; // 801C8C80
  c->r[0]=(uint32_t)(((uint64_t)c->r[10]*(uint64_t)c->r[0])>>32); // 801C8C84
  c->r[8]=rotl(c->r[0],23)&0x007FFFFFu; // 801C8C88
  c->lr=0x801C8C90u; f_8011FD80(c); // 801C8C8C
  c->r[0]=0u+0x00000001u; // 801C8C90
  W8(c->r[31]+0x00000000u,c->r[0]); // 801C8C94
L_801C8C98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8C98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8C9C
  c->lr=c->r[0]; // 801C8CA0
  c->r[1]=c->r[1]+0x00000010u; // 801C8CA4
  return; // 801C8CA8
}

// fn_801C8CB0
void f_801C8CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8CB0
  c->r[0]=c->lr; // 801C8CB4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801C8CB8
  c->r[11]=c->r[1]+0x00000070u; // 801C8CBC
  c->lr=0x801C8CC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8CC0
  c->r[0]=R8(c->r[13]+0xFFFFC440u); // 801C8CC4
  c->r[29]=0u+0x803A0000u; // 801C8CC8
  c->r[27]=c->r[3]|c->r[3]; // 801C8CCC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C8CD0
  c->r[29]=c->r[29]+0xFFFFF778u; // 801C8CD4
  if (!crb(c,2)) { goto L_801C8D2C; } // 801C8CD8
  c->r[3]=0u+0x805B0000u; // 801C8CDC
  c->r[0]=0u+0x00000000u; // 801C8CE0
  c->r[30]=c->r[3]+0xFFFFC690u; // 801C8CE4
  W8(c->r[3]+0xFFFFC690u,c->r[0]); // 801C8CE8
  c->r[28]=c->r[30]+0x00000038u; // 801C8CEC
  c->r[31]=c->r[30]+0x000002D8u; // 801C8CF0
L_801C8CF4:;
  c->r[3]=c->r[28]|c->r[28]; // 801C8CF4
  c->lr=0x801C8CFCu; f_801C8050(c); // 801C8CF8
  c->r[28]=c->r[28]+0x000000A8u; // 801C8CFC
  cmpu(c,0,c->r[28],c->r[31]); // 801C8D00
  if (crb(c,0)) { IRQCHK(c); goto L_801C8CF4; } // 801C8D04
  c->r[4]=0u+0x00000001u; // 801C8D08
  c->r[5]=0u+0x00000000u; // 801C8D0C
  c->r[3]=0u+0x00000002u; // 801C8D10
  c->r[0]=0u+0x00000003u; // 801C8D14
  W32(c->r[30]+0x0000006Cu,c->r[5]); // 801C8D18
  W32(c->r[30]+0x00000114u,c->r[4]); // 801C8D1C
  W32(c->r[30]+0x000001BCu,c->r[3]); // 801C8D20
  W32(c->r[30]+0x00000264u,c->r[0]); // 801C8D24
  W8(c->r[13]+0xFFFFC440u,c->r[4]); // 801C8D28
L_801C8D2C:;
  c->r[30]=0u+0x805B0000u; // 801C8D2C
  c->r[30]=c->r[30]+0xFFFFC690u; // 801C8D30
  c->r[0]=c->r[30]+0x00000008u; // 801C8D34
  cmpu(c,0,c->r[0],c->r[27]); // 801C8D38
  if (crb(c,2)) { goto L_801C8D54; } // 801C8D3C
  c->r[3]=c->r[29]+0x00000000u; // 801C8D40
  c->r[5]=c->r[29]+0x0000006Cu; // 801C8D44
  c->r[4]=0u+0x00000089u; // 801C8D48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8D4C
  c->lr=0x801C8D54u; f_80212260(c); // 801C8D50
L_801C8D54:;
  c->lr=0x801C8D58u; f_80151290(c); // 801C8D54
  cmps(c,0,(int32_t)c->r[3],40); // 801C8D58
  if (crb(c,0)) { goto L_801C8DD0; } // 801C8D5C
  c->r[28]=c->r[30]+0x00000038u; // 801C8D60
  c->r[31]=0u+0x00000000u; // 801C8D64
L_801C8D68:;
  c->r[0]=R32(c->r[30]+0x00000040u); // 801C8D68
  cmps(c,0,(int32_t)c->r[0],4); // 801C8D6C
  if (!crb(c,2)) { goto L_801C8DAC; } // 801C8D70
  c->r[3]=c->r[31]|c->r[31]; // 801C8D74
  c->r[4]=c->r[1]+0x00000008u; // 801C8D78
  c->r[5]=0u+0x00000028u; // 801C8D7C
  c->lr=0x801C8D84u; f_801512C0(c); // 801C8D80
  cmps(c,0,(int32_t)c->r[3],40); // 801C8D84
  if (crb(c,2)) { goto L_801C8DA0; } // 801C8D88
  c->r[3]=c->r[29]+0x00000000u; // 801C8D8C
  c->r[5]=c->r[29]+0x000000A8u; // 801C8D90
  c->r[4]=0u+0x00000099u; // 801C8D94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8D98
  c->lr=0x801C8DA0u; f_80212300(c); // 801C8D9C
L_801C8DA0:;
  c->r[3]=c->r[28]|c->r[28]; // 801C8DA0
  c->r[4]=c->r[1]+0x00000008u; // 801C8DA4
  c->lr=0x801C8DACu; f_801C8340(c); // 801C8DA8
L_801C8DAC:;
  c->r[3]=c->r[28]|c->r[28]; // 801C8DAC
  c->lr=0x801C8DB4u; f_801C8240(c); // 801C8DB0
  c->r[31]=c->r[31]+0x00000001u; // 801C8DB4
  c->r[28]=c->r[28]+0x000000A8u; // 801C8DB8
  cmps(c,0,(int32_t)c->r[31],4); // 801C8DBC
  c->r[30]=c->r[30]+0x000000A8u; // 801C8DC0
  if (crb(c,0)) { IRQCHK(c); goto L_801C8D68; } // 801C8DC4
  c->r[3]=0u+0x00000028u; // 801C8DC8
  c->lr=0x801C8DD0u; f_80151390(c); // 801C8DCC
L_801C8DD0:;
  c->r[11]=c->r[1]+0x00000070u; // 801C8DD0
  c->lr=0x801C8DD8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C8DD4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801C8DD8
  c->lr=c->r[0]; // 801C8DDC
  c->r[1]=c->r[1]+0x00000070u; // 801C8DE0
  return; // 801C8DE4
}

// fn_801C8DF0
void f_801C8DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8DF0
  c->r[0]=c->lr; // 801C8DF4
  cmps(c,0,(int32_t)c->r[4],0); // 801C8DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8DFC
  c->r[0]=0u+0x00000000u; // 801C8E00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8E04
  c->r[31]=0u+0x803A0000u; // 801C8E08
  c->r[31]=c->r[31]+0xFFFFF840u; // 801C8E0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8E10
  c->r[30]=c->r[3]|c->r[3]; // 801C8E14
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C8E18
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C8E1C
  c->r[28]=c->r[4]|c->r[4]; // 801C8E20
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C8E24
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C8E28
  if (!crb(c,2)) { goto L_801C8E44; } // 801C8E2C
  c->r[3]=c->r[31]+0x00000000u; // 801C8E30
  c->r[5]=c->r[31]+0x000000A0u; // 801C8E34
  c->r[4]=0u+0x0000004Eu; // 801C8E38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8E3C
  c->lr=0x801C8E44u; f_80212260(c); // 801C8E40
L_801C8E44:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C8E44
  c->r[0]=c->r[3]+0xADAD0000u; // 801C8E48
  cmpu(c,0,c->r[0],0x00004551u); // 801C8E4C
  if (crb(c,2)) { goto L_801C8E68; } // 801C8E50
  c->r[3]=c->r[31]+0x00000000u; // 801C8E54
  c->r[5]=c->r[31]+0x00000010u; // 801C8E58
  c->r[4]=0u+0x0000002Bu; // 801C8E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8E60
  c->lr=0x801C8E68u; f_80212260(c); // 801C8E64
L_801C8E68:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801C8E68
  c->r[0]=c->r[3]+0xADAD0000u; // 801C8E6C
  cmpu(c,0,c->r[0],0x00004551u); // 801C8E70
  if (crb(c,2)) { goto L_801C8E80; } // 801C8E74
  c->r[0]=0u+0x00000000u; // 801C8E78
  goto L_801C8EE4; // 801C8E7C
L_801C8E80:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801C8E80
  cmpu(c,0,c->r[0],0x00000100u); // 801C8E84
  if (!crb(c,0)) { goto L_801C8EA0; } // 801C8E88
  c->r[3]=c->r[31]+0x00000000u; // 801C8E8C
  c->r[5]=c->r[31]+0x00000044u; // 801C8E90
  c->r[4]=0u+0x00000033u; // 801C8E94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8E98
  c->lr=0x801C8EA0u; f_80212260(c); // 801C8E9C
L_801C8EA0:;
  c->r[29]=R16(c->r[28]+0x00000006u); // 801C8EA0
  cmpu(c,0,c->r[29],0x00000100u); // 801C8EA4
  if (!crb(c,0)) { goto L_801C8EB4; } // 801C8EA8
  c->r[0]=0u+0x00000000u; // 801C8EAC
  goto L_801C8EE4; // 801C8EB0
L_801C8EB4:;
  if (!crb(c,1)) { goto L_801C8ECC; } // 801C8EB4
  c->r[3]=c->r[31]+0x00000000u; // 801C8EB8
  c->r[5]=c->r[31]+0x00000044u; // 801C8EBC
  c->r[4]=0u+0x0000003Bu; // 801C8EC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8EC4
  c->lr=0x801C8ECCu; f_80212260(c); // 801C8EC8
L_801C8ECC:;
  c->r[0]=addc(c,~c->r[29],0x00000100u,1); // 801C8ECC
  c->r[3]=0u+0x00000100u; // 801C8ED0
  c->r[3]=c->r[3]|~c->r[29]; // 801C8ED4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801C8ED8
  c->r[0]=c->r[3]-c->r[0]; // 801C8EDC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C8EE0
L_801C8EE4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C8EE4
  if (!crb(c,2)) { goto L_801C8EF4; } // 801C8EE8
  c->r[3]=c->r[30]|c->r[30]; // 801C8EEC
  goto L_801C8F2C; // 801C8EF0
L_801C8EF4:;
  W32(c->r[30]+0x00000000u,c->r[28]); // 801C8EF4
  c->r[0]=R32(c->r[28]+0x00000010u); // 801C8EF8
  c->r[3]=c->r[0]+c->r[28]; // 801C8EFC
  W32(c->r[30]+0x00000004u,c->r[3]); // 801C8F00
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C8F04
  c->r[0]=c->r[3]+0xBBBF0000u; // 801C8F08
  cmpu(c,0,c->r[0],0x00005441u); // 801C8F0C
  if (crb(c,2)) { goto L_801C8F28; } // 801C8F10
  c->r[3]=c->r[31]+0x00000000u; // 801C8F14
  c->r[5]=c->r[31]+0x000000C8u; // 801C8F18
  c->r[4]=0u+0x00000057u; // 801C8F1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8F20
  c->lr=0x801C8F28u; f_80212260(c); // 801C8F24
L_801C8F28:;
  c->r[3]=c->r[30]|c->r[30]; // 801C8F28
L_801C8F2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8F2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C8F30
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8F34
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8F38
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C8F3C
  c->lr=c->r[0]; // 801C8F40
  c->r[1]=c->r[1]+0x00000020u; // 801C8F44
  return; // 801C8F48
}

// fn_801C8F50
void f_801C8F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8F50
  c->r[0]=c->lr; // 801C8F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8F58
  c->r[0]=R32(c->r[3]+0x00000000u); // 801C8F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8F60
  c->r[31]=c->r[3]|c->r[3]; // 801C8F64
  cmps(c,0,(int32_t)c->r[0],0); // 801C8F68
  if (!crb(c,2)) { goto L_801C8F8C; } // 801C8F6C
  c->r[3]=0u+0x803A0000u; // 801C8F70
  c->r[5]=0u+0x803A0000u; // 801C8F74
  c->r[3]=c->r[3]+0xFFFFF840u; // 801C8F78
  c->r[4]=0u+0x00000065u; // 801C8F7C
  c->r[5]=c->r[5]+0xFFFFF960u; // 801C8F80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8F84
  c->lr=0x801C8F8Cu; f_80212260(c); // 801C8F88
L_801C8F8C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801C8F8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8F90
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C8F94
  c->r[3]=c->r[0]+c->r[3]; // 801C8F98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8F9C
  c->lr=c->r[0]; // 801C8FA0
  c->r[1]=c->r[1]+0x00000010u; // 801C8FA4
  return; // 801C8FA8
}

// fn_801C8FB0
void f_801C8FB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8FB0
  c->r[0]=c->lr; // 801C8FB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8FB8
  c->r[11]=c->r[1]+0x00000030u; // 801C8FBC
  c->lr=0x801C8FC4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C8FC0
  cmps(c,0,(int32_t)c->r[5],0); // 801C8FC4
  c->r[31]=0u+0x803A0000u; // 801C8FC8
  c->r[26]=c->r[3]|c->r[3]; // 801C8FCC
  c->r[24]=c->r[4]|c->r[4]; // 801C8FD0
  c->r[25]=c->r[5]|c->r[5]; // 801C8FD4
  c->r[31]=c->r[31]+0xFFFFF840u; // 801C8FD8
  if (!crb(c,2)) { goto L_801C8FF4; } // 801C8FDC
  c->r[3]=c->r[31]+0x00000000u; // 801C8FE0
  c->r[5]=c->r[31]+0x00000148u; // 801C8FE4
  c->r[4]=0u+0x00000075u; // 801C8FE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C8FEC
  c->lr=0x801C8FF4u; f_80212260(c); // 801C8FF0
L_801C8FF4:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801C8FF4
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C8FF8
  c->r[29]=c->r[0]+c->r[3]; cr0(c,c->r[29]); // 801C8FFC
  if (!crb(c,2)) { goto L_801C900C; } // 801C9000
  c->r[3]=0u+0x00000000u; // 801C9004
  goto L_801C9094; // 801C9008
L_801C900C:;
  c->r[3]=c->r[24]|c->r[24]; // 801C900C
  c->lr=0x801C9014u; f_802E5F80(c); // 801C9010
  c->r[28]=c->r[3]|c->r[3]; // 801C9014
  c->r[30]=c->r[29]|c->r[29]; // 801C9018
  c->r[27]=0u+0x00000000u; // 801C901C
  goto L_801C9084; // 801C9020
L_801C9024:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801C9024
  c->r[0]=c->r[29]+c->r[0]; // 801C9028
  c->r[26]=addc(c,c->r[0],0x00000008u,0); cr0(c,c->r[26]); // 801C902C
  if (!crb(c,2)) { goto L_801C9048; } // 801C9030
  c->r[3]=c->r[31]+0x00000000u; // 801C9034
  c->r[5]=c->r[31]+0x00000174u; // 801C9038
  c->r[4]=0u+0x00000085u; // 801C903C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9040
  c->lr=0x801C9048u; f_80212260(c); // 801C9044
L_801C9048:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 801C9048
  cmpu(c,0,c->r[28],c->r[0]); // 801C904C
  if (!crb(c,2)) { goto L_801C907C; } // 801C9050
  c->r[3]=c->r[24]|c->r[24]; // 801C9054
  c->r[5]=c->r[28]|c->r[28]; // 801C9058
  c->r[4]=c->r[26]+0x00000008u; // 801C905C
  c->lr=0x801C9064u; f_802EEAA0(c); // 801C9060
  cmps(c,0,(int32_t)c->r[3],0); // 801C9064
  if (!crb(c,2)) { goto L_801C907C; } // 801C9068
  c->r[0]=R32(c->r[26]+0x00000000u); // 801C906C
  c->r[3]=0u+0x00000001u; // 801C9070
  W32(c->r[25]+0x00000000u,c->r[0]); // 801C9074
  goto L_801C9094; // 801C9078
L_801C907C:;
  c->r[30]=c->r[30]+0x00000004u; // 801C907C
  c->r[27]=c->r[27]+0x00000001u; // 801C9080
L_801C9084:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801C9084
  cmpu(c,0,c->r[27],c->r[0]); // 801C9088
  if (crb(c,0)) { IRQCHK(c); goto L_801C9024; } // 801C908C
  c->r[3]=0u+0x00000000u; // 801C9090
L_801C9094:;
  c->r[11]=c->r[1]+0x00000030u; // 801C9094
  c->lr=0x801C909Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9098
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C909C
  c->lr=c->r[0]; // 801C90A0
  c->r[1]=c->r[1]+0x00000030u; // 801C90A4
  return; // 801C90A8
}

// fn_801C90B0
void f_801C90B0(Ctx* __restrict c) {
  c->r[3]=0u+0x805B0000u; // 801C90B0
  c->r[0]=0u+0xFFFFFFFFu; // 801C90B4
  {uint32_t ea=c->r[3]+0xFFFFC968u; W16(ea,c->r[0]); c->r[3]=ea;} // 801C90B8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801C90BC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801C90C0
  W16(c->r[3]+0x00000006u,c->r[0]); // 801C90C4
  W16(c->r[3]+0x00000008u,c->r[0]); // 801C90C8
  W16(c->r[3]+0x0000000Au,c->r[0]); // 801C90CC
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 801C90D0
  W16(c->r[3]+0x0000000Eu,c->r[0]); // 801C90D4
  W16(c->r[3]+0x00000010u,c->r[0]); // 801C90D8
  W16(c->r[3]+0x00000012u,c->r[0]); // 801C90DC
  W16(c->r[3]+0x00000014u,c->r[0]); // 801C90E0
  W16(c->r[3]+0x00000016u,c->r[0]); // 801C90E4
  W16(c->r[3]+0x00000018u,c->r[0]); // 801C90E8
  W16(c->r[3]+0x0000001Au,c->r[0]); // 801C90EC
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 801C90F0
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 801C90F4
  return; // 801C90F8
}

// fn_801C9100
void f_801C9100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9100
  c->r[0]=c->lr; // 801C9104
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C910C
  c->r[31]=c->r[3]|c->r[3]; // 801C9110
  c->lr=0x801C9118u; f_801BB440(c); // 801C9114
  c->r[9]=0u+0x803A0000u; // 801C9118
  c->r[10]=0u+0x00000000u; // 801C911C
  c->r[9]=c->r[9]+0xFFFFFC90u; // 801C9120
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9124
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9128
  c->r[8]=c->r[9]+0x00000024u; // 801C912C
  c->r[7]=c->r[9]+0x00000038u; // 801C9130
  c->r[6]=0u+0x00000078u; // 801C9134
  c->r[5]=0u+0x00000030u; // 801C9138
  c->r[4]=0u+0x0000007Fu; // 801C913C
  c->r[3]=0u+0x00000040u; // 801C9140
  W32(c->r[31]+0x000000B4u,c->r[10]); // 801C9144
  c->r[0]=0u+0xFFFFFFFFu; // 801C9148
  W32(c->r[31]+0x000000B8u,c->r[10]); // 801C914C
  W32(c->r[31]+0x000000C0u,c->r[10]); // 801C9150
  W32(c->r[31]+0x000000C4u,c->r[10]); // 801C9154
  W32(c->r[31]+0x00000000u,c->r[9]); // 801C9158
  W32(c->r[31]+0x000000BCu,c->r[8]); // 801C915C
  W32(c->r[31]+0x000000C8u,c->r[7]); // 801C9160
  W8(c->r[31]+0x000000CCu,c->r[10]); // 801C9164
  W8(c->r[31]+0x000000CDu,c->r[10]); // 801C9168
  W8(c->r[31]+0x000000CEu,c->r[10]); // 801C916C
  W8(c->r[31]+0x000000CFu,c->r[10]); // 801C9170
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 801C9174
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 801C9178
  W32(c->r[31]+0x000000DCu,c->r[10]); // 801C917C
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[0]);} // 801C9180
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[1]);} // 801C9184
  W32(c->r[31]+0x00000160u,c->r[10]); // 801C9188
  W32(c->r[31]+0x000000E4u,c->r[10]); // 801C918C
  W32(c->r[31]+0x000000F8u,c->r[10]); // 801C9190
  W32(c->r[31]+0x000000FCu,c->r[10]); // 801C9194
  W16(c->r[31]+0x000000ECu,c->r[6]); // 801C9198
  W8(c->r[31]+0x000000EAu,c->r[5]); // 801C919C
  W8(c->r[31]+0x000000E8u,c->r[4]); // 801C91A0
  W8(c->r[31]+0x000000E9u,c->r[3]); // 801C91A4
  W32(c->r[31]+0x000000F0u,c->r[10]); // 801C91A8
  W16(c->r[31]+0x00000140u,c->r[0]); // 801C91AC
  W16(c->r[31]+0x00000142u,c->r[0]); // 801C91B0
  W16(c->r[31]+0x00000144u,c->r[0]); // 801C91B4
  W16(c->r[31]+0x00000146u,c->r[0]); // 801C91B8
  W16(c->r[31]+0x00000148u,c->r[0]); // 801C91BC
  W16(c->r[31]+0x0000014Au,c->r[0]); // 801C91C0
  W16(c->r[31]+0x0000014Cu,c->r[0]); // 801C91C4
  W16(c->r[31]+0x0000014Eu,c->r[0]); // 801C91C8
  W16(c->r[31]+0x00000150u,c->r[0]); // 801C91CC
  W16(c->r[31]+0x00000152u,c->r[0]); // 801C91D0
  W16(c->r[31]+0x00000154u,c->r[0]); // 801C91D4
  W16(c->r[31]+0x00000156u,c->r[0]); // 801C91D8
  W16(c->r[31]+0x00000158u,c->r[0]); // 801C91DC
  W16(c->r[31]+0x0000015Au,c->r[0]); // 801C91E0
  W16(c->r[31]+0x0000015Cu,c->r[0]); // 801C91E4
  W16(c->r[31]+0x0000015Eu,c->r[0]); // 801C91E8
  c->r[0]=0u+0x00000000u; // 801C91EC
  W32(c->r[31]+0x00000100u,c->r[0]); // 801C91F0
  c->r[3]=c->r[31]|c->r[31]; // 801C91F4
  W32(c->r[31]+0x00000104u,c->r[0]); // 801C91F8
  W32(c->r[31]+0x00000108u,c->r[0]); // 801C91FC
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 801C9200
  W32(c->r[31]+0x00000110u,c->r[0]); // 801C9204
  W32(c->r[31]+0x00000114u,c->r[0]); // 801C9208
  W32(c->r[31]+0x00000118u,c->r[0]); // 801C920C
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 801C9210
  W32(c->r[31]+0x00000120u,c->r[0]); // 801C9214
  W32(c->r[31]+0x00000124u,c->r[0]); // 801C9218
  W32(c->r[31]+0x00000128u,c->r[0]); // 801C921C
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 801C9220
  W32(c->r[31]+0x00000130u,c->r[0]); // 801C9224
  W32(c->r[31]+0x00000134u,c->r[0]); // 801C9228
  W32(c->r[31]+0x00000138u,c->r[0]); // 801C922C
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 801C9230
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9234
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9238
  c->lr=c->r[0]; // 801C923C
  c->r[1]=c->r[1]+0x00000010u; // 801C9240
  return; // 801C9244
}

// fn_801C9250
void f_801C9250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9250
  c->r[0]=c->lr; // 801C9254
  cmps(c,0,(int32_t)c->r[3],0); // 801C9258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C925C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9260
  c->r[31]=c->r[3]|c->r[3]; // 801C9264
  if (crb(c,2)) { goto L_801C9278; } // 801C9268
  cmps(c,0,(int32_t)c->r[4],0); // 801C926C
  if (!crb(c,1)) { goto L_801C9278; } // 801C9270
  c->lr=0x801C9278u; f_802E61AC(c); // 801C9274
L_801C9278:;
  c->r[3]=c->r[31]|c->r[31]; // 801C9278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C927C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9280
  c->lr=c->r[0]; // 801C9284
  c->r[1]=c->r[1]+0x00000010u; // 801C9288
  return; // 801C928C
}

// fn_801C9290
void f_801C9290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9290
  c->r[0]=c->lr; // 801C9294
  cmps(c,0,(int32_t)c->r[3],0); // 801C9298
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C929C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C92A0
  c->r[31]=c->r[3]|c->r[3]; // 801C92A4
  if (crb(c,2)) { goto L_801C92B8; } // 801C92A8
  cmps(c,0,(int32_t)c->r[4],0); // 801C92AC
  if (!crb(c,1)) { goto L_801C92B8; } // 801C92B0
  c->lr=0x801C92B8u; f_802E61AC(c); // 801C92B4
L_801C92B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801C92B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C92BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C92C0
  c->lr=c->r[0]; // 801C92C4
  c->r[1]=c->r[1]+0x00000010u; // 801C92C8
  return; // 801C92CC
}

// fn_801C92D0
void f_801C92D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C92D0
  c->r[0]=c->lr; // 801C92D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C92D8
  c->r[11]=c->r[1]+0x00000030u; // 801C92DC
  c->lr=0x801C92E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C92E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C92E4
  c->r[30]=c->r[3]|c->r[3]; // 801C92E8
  c->r[31]=c->r[4]|c->r[4]; // 801C92EC
  if (crb(c,2)) { goto L_801C947C; } // 801C92F0
  c->r[5]=0u+0x803A0000u; // 801C92F4
  c->r[5]=c->r[5]+0xFFFFFC90u; // 801C92F8
  W32(c->r[3]+0x00000000u,c->r[5]); // 801C92FC
  c->r[4]=c->r[5]+0x00000024u; // 801C9300
  c->r[0]=c->r[5]+0x00000038u; // 801C9304
  W32(c->r[3]+0x000000BCu,c->r[4]); // 801C9308
  W32(c->r[3]+0x000000C8u,c->r[0]); // 801C930C
  c->lr=0x801C9314u; f_801D76C0(c); // 801C9310
  c->r[3]=c->r[3]+0x00000354u; // 801C9314
  c->lr=0x801C931Cu; f_80126DC0(c); // 801C9318
  c->lr=0x801C9320u; f_801D76C0(c); // 801C931C
  c->r[3]=c->r[3]+0x00000354u; // 801C9320
  c->lr=0x801C9328u; f_80126DC0(c); // 801C9324
  c->r[0]=R8(c->r[30]+0x000000CDu); // 801C9328
  cmps(c,0,(int32_t)c->r[0],0); // 801C932C
  if (crb(c,2)) { goto L_801C9358; } // 801C9330
  cmps(c,0,(int32_t)c->r[30],0); // 801C9334
  c->r[26]=c->r[30]|c->r[30]; // 801C9338
  if (crb(c,2)) { goto L_801C9344; } // 801C933C
  c->r[26]=c->r[30]+0x000000C0u; // 801C9340
L_801C9344:;
  c->lr=0x801C9348u; f_801D76C0(c); // 801C9344
  c->r[4]=c->r[26]|c->r[26]; // 801C9348
  c->lr=0x801C9350u; f_801D7C80(c); // 801C934C
  c->r[0]=0u+0x00000000u; // 801C9350
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801C9354
L_801C9358:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801C9358
  cmps(c,0,(int32_t)c->r[0],0); // 801C935C
  if (crb(c,2)) { goto L_801C9388; } // 801C9360
  cmps(c,0,(int32_t)c->r[30],0); // 801C9364
  c->r[26]=c->r[30]|c->r[30]; // 801C9368
  if (crb(c,2)) { goto L_801C9374; } // 801C936C
  c->r[26]=c->r[30]+0x000000B4u; // 801C9370
L_801C9374:;
  c->lr=0x801C9378u; f_801BEEC0(c); // 801C9374
  c->r[4]=c->r[26]|c->r[26]; // 801C9378
  c->lr=0x801C9380u; f_801BF030(c); // 801C937C
  c->r[0]=0u+0x00000000u; // 801C9380
  W8(c->r[30]+0x000000CCu,c->r[0]); // 801C9384
L_801C9388:;
  c->r[26]=0u+0x00000000u; // 801C9388
  c->r[25]=0u+0x00000000u; // 801C938C
  c->r[27]=0u+0x803A0000u; // 801C9390
  c->r[28]=0u+0x803A0000u; // 801C9394
  c->r[29]=0u+0x00000000u; // 801C9398
L_801C939C:;
  c->lr=0x801C93A0u; f_801D76C0(c); // 801C939C
  c->r[3]=c->r[3]+0x00000354u; // 801C93A0
  c->lr=0x801C93A8u; f_80126DC0(c); // 801C93A4
  cmpu(c,0,c->r[26],0x0000000Fu); // 801C93A8
  c->r[0]=0u+0x00000000u; // 801C93AC
  if (crb(c,1)) { goto L_801C93B8; } // 801C93B0
  c->r[0]=0u+0x00000001u; // 801C93B4
L_801C93B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C93B8
  if (!crb(c,2)) { goto L_801C93E0; } // 801C93BC
  c->r[6]=c->r[26]|c->r[26]; // 801C93C0
  c->r[3]=c->r[27]+0xFFFFF9E0u; // 801C93C4
  c->r[5]=c->r[28]+0xFFFFF9F4u; // 801C93C8
  c->r[4]=0u+0x00000261u; // 801C93CC
  c->r[7]=0u+0x00000000u; // 801C93D0
  c->r[8]=0u+0x00000010u; // 801C93D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C93D8
  c->lr=0x801C93E0u; f_80212260(c); // 801C93DC
L_801C93E0:;
  cmps(c,0,(int32_t)c->r[26],15); // 801C93E0
  if (!crb(c,1)) { goto L_801C93F0; } // 801C93E4
  c->r[3]=0u+0x00000000u; // 801C93E8
  goto L_801C93F8; // 801C93EC
L_801C93F0:;
  c->r[3]=c->r[30]+c->r[25]; // 801C93F0
  c->r[3]=R32(c->r[3]+0x00000100u); // 801C93F4
L_801C93F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C93F8
  if (!crb(c,2)) { goto L_801C9410; } // 801C93FC
  c->lr=0x801C9404u; f_801D76C0(c); // 801C9400
  c->r[3]=c->r[3]+0x00000354u; // 801C9404
  c->lr=0x801C940Cu; f_80126EA0(c); // 801C9408
  goto L_801C9444; // 801C940C
L_801C9410:;
  c->lr=0x801C9414u; f_801CC590(c); // 801C9410
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801C9414
  c->r[4]=c->r[30]+c->r[25]; // 801C9418
  c->r[4]=R32(c->r[4]+0x00000100u); // 801C941C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9420
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C9424
  c->ctr=c->r[12]; // 801C9428
  if (true) { c->lr=0x801C9430u; dispatch(c,c->ctr); } // 801C942C
  c->r[3]=c->r[30]+c->r[25]; // 801C9430
  W32(c->r[3]+0x00000100u,c->r[29]); // 801C9434
  c->lr=0x801C943Cu; f_801D76C0(c); // 801C9438
  c->r[3]=c->r[3]+0x00000354u; // 801C943C
  c->lr=0x801C9444u; f_80126EA0(c); // 801C9440
L_801C9444:;
  c->r[26]=c->r[26]+0x00000001u; // 801C9444
  c->r[25]=c->r[25]+0x00000004u; // 801C9448
  cmps(c,0,(int32_t)c->r[26],16); // 801C944C
  if (crb(c,0)) { IRQCHK(c); goto L_801C939C; } // 801C9450
  c->lr=0x801C9458u; f_801D76C0(c); // 801C9454
  c->r[3]=c->r[3]+0x00000354u; // 801C9458
  c->lr=0x801C9460u; f_80126EA0(c); // 801C945C
  c->lr=0x801C9464u; f_801D76C0(c); // 801C9460
  c->r[3]=c->r[3]+0x00000354u; // 801C9464
  c->lr=0x801C946Cu; f_80126EA0(c); // 801C9468
  cmps(c,0,(int32_t)c->r[31],0); // 801C946C
  if (!crb(c,1)) { goto L_801C947C; } // 801C9470
  c->r[3]=c->r[30]|c->r[30]; // 801C9474
  c->lr=0x801C947Cu; f_802E61AC(c); // 801C9478
L_801C947C:;
  c->r[11]=c->r[1]+0x00000030u; // 801C947C
  c->r[3]=c->r[30]|c->r[30]; // 801C9480
  c->lr=0x801C9488u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9484
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C9488
  c->lr=c->r[0]; // 801C948C
  c->r[1]=c->r[1]+0x00000030u; // 801C9490
  return; // 801C9494
}

// InitParam__Q44nw4r3snd6detail9SeqPlayerFiPQ44nw4r3snd6detail14NoteOnCallback
void f_801C94A0(Ctx* __restrict c) {
  trace_call(0x801C94A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C94A0
  c->r[0]=c->lr; // 801C94A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C94A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C94AC
  c->r[31]=c->r[5]|c->r[5]; // 801C94B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C94B4
  c->r[30]=c->r[4]|c->r[4]; // 801C94B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C94BC
  c->r[29]=c->r[3]|c->r[3]; // 801C94C0
  c->lr=0x801C94C8u; f_801BB500(c); // 801C94C4
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C94C8
  c->r[7]=0u+0x00000000u; // 801C94CC
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C94D0
  c->r[6]=0u+0x00000078u; // 801C94D4
  c->r[5]=0u+0x00000030u; // 801C94D8
  c->r[4]=0u+0x0000007Fu; // 801C94DC
  c->r[3]=0u+0x00000040u; // 801C94E0
  W8(c->r[29]+0x000000CDu,c->r[7]); // 801C94E4
  c->r[0]=0u+0xFFFFFFFFu; // 801C94E8
  W8(c->r[29]+0x000000CEu,c->r[7]); // 801C94EC
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[1]);} // 801C94F0
  W32(c->r[29]+0x000000DCu,c->r[7]); // 801C94F4
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 801C94F8
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[1]);} // 801C94FC
  W32(c->r[29]+0x00000160u,c->r[7]); // 801C9500
  W32(c->r[29]+0x000000E4u,c->r[30]); // 801C9504
  W16(c->r[29]+0x000000ECu,c->r[6]); // 801C9508
  W8(c->r[29]+0x000000EAu,c->r[5]); // 801C950C
  W8(c->r[29]+0x000000E8u,c->r[4]); // 801C9510
  W8(c->r[29]+0x000000E9u,c->r[3]); // 801C9514
  W32(c->r[29]+0x000000F0u,c->r[31]); // 801C9518
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[0]);} // 801C951C
  W16(c->r[29]+0x00000140u,c->r[0]); // 801C9520
  W16(c->r[29]+0x00000142u,c->r[0]); // 801C9524
  W16(c->r[29]+0x00000144u,c->r[0]); // 801C9528
  W16(c->r[29]+0x00000146u,c->r[0]); // 801C952C
  W16(c->r[29]+0x00000148u,c->r[0]); // 801C9530
  W16(c->r[29]+0x0000014Au,c->r[0]); // 801C9534
  W16(c->r[29]+0x0000014Cu,c->r[0]); // 801C9538
  W16(c->r[29]+0x0000014Eu,c->r[0]); // 801C953C
  W16(c->r[29]+0x00000150u,c->r[0]); // 801C9540
  W16(c->r[29]+0x00000152u,c->r[0]); // 801C9544
  W16(c->r[29]+0x00000154u,c->r[0]); // 801C9548
  W16(c->r[29]+0x00000156u,c->r[0]); // 801C954C
  W16(c->r[29]+0x00000158u,c->r[0]); // 801C9550
  W16(c->r[29]+0x0000015Au,c->r[0]); // 801C9554
  W16(c->r[29]+0x0000015Cu,c->r[0]); // 801C9558
  W16(c->r[29]+0x0000015Eu,c->r[0]); // 801C955C
  c->r[0]=0u+0x00000000u; // 801C9560
  W32(c->r[29]+0x00000100u,c->r[0]); // 801C9564
  W32(c->r[29]+0x00000104u,c->r[0]); // 801C9568
  W32(c->r[29]+0x00000108u,c->r[0]); // 801C956C
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 801C9570
  W32(c->r[29]+0x00000110u,c->r[0]); // 801C9574
  W32(c->r[29]+0x00000114u,c->r[0]); // 801C9578
  W32(c->r[29]+0x00000118u,c->r[0]); // 801C957C
  W32(c->r[29]+0x0000011Cu,c->r[0]); // 801C9580
  W32(c->r[29]+0x00000120u,c->r[0]); // 801C9584
  W32(c->r[29]+0x00000124u,c->r[0]); // 801C9588
  W32(c->r[29]+0x00000128u,c->r[0]); // 801C958C
  W32(c->r[29]+0x0000012Cu,c->r[0]); // 801C9590
  W32(c->r[29]+0x00000130u,c->r[0]); // 801C9594
  W32(c->r[29]+0x00000134u,c->r[0]); // 801C9598
  W32(c->r[29]+0x00000138u,c->r[0]); // 801C959C
  W32(c->r[29]+0x0000013Cu,c->r[0]); // 801C95A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C95A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C95A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C95AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C95B0
  c->lr=c->r[0]; // 801C95B4
  c->r[1]=c->r[1]+0x00000020u; // 801C95B8
  return; // 801C95BC
}

// fn_801C95C0
void f_801C95C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C95C0
  c->r[0]=c->lr; // 801C95C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C95C8
  c->r[11]=c->r[1]+0x00000030u; // 801C95CC
  c->lr=0x801C95D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C95D0
  c->r[27]=0u+0x803A0000u; // 801C95D4
  c->r[29]=c->r[3]|c->r[3]; // 801C95D8
  c->r[30]=c->r[4]|c->r[4]; // 801C95DC
  c->r[31]=c->r[5]|c->r[5]; // 801C95E0
  c->r[23]=c->r[6]|c->r[6]; // 801C95E4
  c->r[24]=c->r[7]|c->r[7]; // 801C95E8
  c->r[27]=c->r[27]+0xFFFFF9E0u; // 801C95EC
  c->lr=0x801C95F4u; f_801D76C0(c); // 801C95F0
  c->r[3]=c->r[3]+0x00000354u; // 801C95F4
  c->lr=0x801C95FCu; f_80126DC0(c); // 801C95F8
  c->lr=0x801C9600u; f_801D76C0(c); // 801C95FC
  c->r[3]=c->r[3]+0x00000354u; // 801C9600
  c->lr=0x801C9608u; f_80126DC0(c); // 801C9604
  c->lr=0x801C960Cu; f_801D76C0(c); // 801C9608
  c->r[3]=c->r[3]+0x00000354u; // 801C960C
  c->lr=0x801C9614u; f_80126DC0(c); // 801C9610
  c->r[0]=R8(c->r[29]+0x000000CDu); // 801C9614
  cmps(c,0,(int32_t)c->r[0],0); // 801C9618
  if (crb(c,2)) { goto L_801C9644; } // 801C961C
  cmps(c,0,(int32_t)c->r[29],0); // 801C9620
  c->r[26]=c->r[29]|c->r[29]; // 801C9624
  if (crb(c,2)) { goto L_801C9630; } // 801C9628
  c->r[26]=c->r[29]+0x000000C0u; // 801C962C
L_801C9630:;
  c->lr=0x801C9634u; f_801D76C0(c); // 801C9630
  c->r[4]=c->r[26]|c->r[26]; // 801C9634
  c->lr=0x801C963Cu; f_801D7C80(c); // 801C9638
  c->r[0]=0u+0x00000000u; // 801C963C
  W8(c->r[29]+0x000000CDu,c->r[0]); // 801C9640
L_801C9644:;
  c->r[0]=R8(c->r[29]+0x000000CCu); // 801C9644
  cmps(c,0,(int32_t)c->r[0],0); // 801C9648
  if (crb(c,2)) { goto L_801C9674; } // 801C964C
  cmps(c,0,(int32_t)c->r[29],0); // 801C9650
  c->r[26]=c->r[29]|c->r[29]; // 801C9654
  if (crb(c,2)) { goto L_801C9660; } // 801C9658
  c->r[26]=c->r[29]+0x000000B4u; // 801C965C
L_801C9660:;
  c->lr=0x801C9664u; f_801BEEC0(c); // 801C9660
  c->r[4]=c->r[26]|c->r[26]; // 801C9664
  c->lr=0x801C966Cu; f_801BF030(c); // 801C9668
  c->r[0]=0u+0x00000000u; // 801C966C
  W8(c->r[29]+0x000000CCu,c->r[0]); // 801C9670
L_801C9674:;
  c->r[25]=c->r[29]|c->r[29]; // 801C9674
  c->r[26]=0u+0x00000000u; // 801C9678
  c->r[28]=0u+0x00000000u; // 801C967C
L_801C9680:;
  c->lr=0x801C9684u; f_801D76C0(c); // 801C9680
  c->r[3]=c->r[3]+0x00000354u; // 801C9684
  c->lr=0x801C968Cu; f_80126DC0(c); // 801C9688
  cmpu(c,0,c->r[26],0x0000000Fu); // 801C968C
  c->r[0]=0u+0x00000000u; // 801C9690
  if (crb(c,1)) { goto L_801C969C; } // 801C9694
  c->r[0]=0u+0x00000001u; // 801C9698
L_801C969C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C969C
  if (!crb(c,2)) { goto L_801C96C4; } // 801C96A0
  c->r[6]=c->r[26]|c->r[26]; // 801C96A4
  c->r[3]=c->r[27]+0x00000000u; // 801C96A8
  c->r[5]=c->r[27]+0x00000014u; // 801C96AC
  c->r[4]=0u+0x00000261u; // 801C96B0
  c->r[7]=0u+0x00000000u; // 801C96B4
  c->r[8]=0u+0x00000010u; // 801C96B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C96BC
  c->lr=0x801C96C4u; f_80212260(c); // 801C96C0
L_801C96C4:;
  cmps(c,0,(int32_t)c->r[26],15); // 801C96C4
  if (!crb(c,1)) { goto L_801C96D4; } // 801C96C8
  c->r[3]=0u+0x00000000u; // 801C96CC
  goto L_801C96D8; // 801C96D0
L_801C96D4:;
  c->r[3]=R32(c->r[25]+0x00000100u); // 801C96D4
L_801C96D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C96D8
  if (!crb(c,2)) { goto L_801C96F0; } // 801C96DC
  c->lr=0x801C96E4u; f_801D76C0(c); // 801C96E0
  c->r[3]=c->r[3]+0x00000354u; // 801C96E4
  c->lr=0x801C96ECu; f_80126EA0(c); // 801C96E8
  goto L_801C971C; // 801C96EC
L_801C96F0:;
  c->lr=0x801C96F4u; f_801CC590(c); // 801C96F0
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801C96F4
  c->r[4]=R32(c->r[25]+0x00000100u); // 801C96F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C96FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C9700
  c->ctr=c->r[12]; // 801C9704
  if (true) { c->lr=0x801C970Cu; dispatch(c,c->ctr); } // 801C9708
  W32(c->r[25]+0x00000100u,c->r[28]); // 801C970C
  c->lr=0x801C9714u; f_801D76C0(c); // 801C9710
  c->r[3]=c->r[3]+0x00000354u; // 801C9714
  c->lr=0x801C971Cu; f_80126EA0(c); // 801C9718
L_801C971C:;
  c->r[26]=c->r[26]+0x00000001u; // 801C971C
  c->r[25]=c->r[25]+0x00000004u; // 801C9720
  cmps(c,0,(int32_t)c->r[26],16); // 801C9724
  if (crb(c,0)) { IRQCHK(c); goto L_801C9680; } // 801C9728
  c->lr=0x801C9730u; f_801D76C0(c); // 801C972C
  c->r[3]=c->r[3]+0x00000354u; // 801C9730
  c->lr=0x801C9738u; f_80126EA0(c); // 801C9734
  c->lr=0x801C973Cu; f_801D76C0(c); // 801C9738
  c->r[3]=c->r[3]+0x00000354u; // 801C973C
  c->lr=0x801C9744u; f_80126EA0(c); // 801C9740
  c->r[3]=c->r[29]|c->r[29]; // 801C9744
  c->r[4]=c->r[23]|c->r[23]; // 801C9748
  c->r[5]=c->r[24]|c->r[24]; // 801C974C
  c->lr=0x801C9754u; f_801C94A0(c); // 801C9750
  c->lr=0x801C9758u; f_801251B0(c); // 801C9754
  c->r[28]=c->r[3]|c->r[3]; // 801C9758
  c->r[3]=c->r[31]|c->r[31]; // 801C975C
  c->r[25]=0u+0x00000000u; // 801C9760
  goto L_801C9778; // 801C9764
L_801C9768:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801C9768
  if (crb(c,2)) { goto L_801C9774; } // 801C976C
  c->r[25]=c->r[25]+0x00000001u; // 801C9770
L_801C9774:;
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801C9774
L_801C9778:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C9778
  if (!crb(c,2)) { IRQCHK(c); goto L_801C9768; } // 801C977C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C9780
  c->r[3]=c->r[30]|c->r[30]; // 801C9784
  c->r[12]=R32(c->r[12]+0x00000014u); // 801C9788
  c->ctr=c->r[12]; // 801C978C
  if (true) { c->lr=0x801C9794u; dispatch(c,c->ctr); } // 801C9790
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[3]); // 801C9794
  if (!crb(c,1)) { goto L_801C97B8; } // 801C9798
  c->r[3]=c->r[28]|c->r[28]; // 801C979C
  c->lr=0x801C97A4u; f_801251F0(c); // 801C97A0
  c->lr=0x801C97A8u; f_801D76C0(c); // 801C97A4
  c->r[3]=c->r[3]+0x00000354u; // 801C97A8
  c->lr=0x801C97B0u; f_80126EA0(c); // 801C97AC
  c->r[3]=0u+0x00000001u; // 801C97B0
  goto L_801C9898; // 801C97B4
L_801C97B8:;
  c->r[26]=c->r[29]|c->r[29]; // 801C97B8
  c->r[25]=0u+0x00000000u; // 801C97BC
  goto L_801C9850; // 801C97C0
L_801C97C4:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801C97C4
  if (crb(c,2)) { goto L_801C9844; } // 801C97C8
  c->r[12]=R32(c->r[30]+0x00000000u); // 801C97CC
  c->r[3]=c->r[30]|c->r[30]; // 801C97D0
  c->r[4]=c->r[29]|c->r[29]; // 801C97D4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801C97D8
  c->ctr=c->r[12]; // 801C97DC
  if (true) { c->lr=0x801C97E4u; dispatch(c,c->ctr); } // 801C97E0
  cmps(c,0,(int32_t)c->r[3],0); // 801C97E4
  c->r[24]=c->r[3]|c->r[3]; // 801C97E8
  if (!crb(c,2)) { goto L_801C9804; } // 801C97EC
  c->r[3]=c->r[27]+0x00000000u; // 801C97F0
  c->r[5]=c->r[27]+0x00000054u; // 801C97F4
  c->r[4]=0u+0x000000C7u; // 801C97F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C97FC
  c->lr=0x801C9804u; f_80212260(c); // 801C9800
L_801C9804:;
  c->lr=0x801C9808u; f_801D76C0(c); // 801C9804
  c->r[3]=c->r[3]+0x00000354u; // 801C9808
  c->lr=0x801C9810u; f_80126DC0(c); // 801C980C
  cmps(c,0,(int32_t)c->r[25],15); // 801C9810
  if (!crb(c,1)) { goto L_801C9828; } // 801C9814
  c->lr=0x801C981Cu; f_801D76C0(c); // 801C9818
  c->r[3]=c->r[3]+0x00000354u; // 801C981C
  c->lr=0x801C9824u; f_80126EA0(c); // 801C9820
  goto L_801C9844; // 801C9824
L_801C9828:;
  W32(c->r[26]+0x00000100u,c->r[24]); // 801C9828
  c->r[3]=c->r[24]|c->r[24]; // 801C982C
  c->r[4]=c->r[25]|c->r[25]; // 801C9830
  c->lr=0x801C9838u; f_801CC1A0(c); // 801C9834
  c->lr=0x801C983Cu; f_801D76C0(c); // 801C9838
  c->r[3]=c->r[3]+0x00000354u; // 801C983C
  c->lr=0x801C9844u; f_80126EA0(c); // 801C9840
L_801C9844:;
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801C9844
  c->r[26]=c->r[26]+0x00000004u; // 801C9848
  c->r[25]=c->r[25]+0x00000001u; // 801C984C
L_801C9850:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C9850
  if (!crb(c,2)) { IRQCHK(c); goto L_801C97C4; } // 801C9854
  c->r[3]=c->r[28]|c->r[28]; // 801C9858
  c->lr=0x801C9860u; f_801251F0(c); // 801C985C
  cmps(c,0,(int32_t)c->r[29],0); // 801C9860
  c->r[26]=c->r[29]|c->r[29]; // 801C9864
  if (crb(c,2)) { goto L_801C9870; } // 801C9868
  c->r[26]=c->r[29]+0x000000B4u; // 801C986C
L_801C9870:;
  c->lr=0x801C9874u; f_801BEEC0(c); // 801C9870
  c->r[4]=c->r[26]|c->r[26]; // 801C9874
  c->lr=0x801C987Cu; f_801BEFB0(c); // 801C9878
  c->r[0]=0u+0x00000001u; // 801C987C
  W32(c->r[29]+0x000000F4u,c->r[30]); // 801C9880
  W8(c->r[29]+0x000000CCu,c->r[0]); // 801C9884
  c->lr=0x801C988Cu; f_801D76C0(c); // 801C9888
  c->r[3]=c->r[3]+0x00000354u; // 801C988C
  c->lr=0x801C9894u; f_80126EA0(c); // 801C9890
  c->r[3]=0u+0x00000000u; // 801C9894
L_801C9898:;
  c->r[11]=c->r[1]+0x00000030u; // 801C9898
  c->lr=0x801C98A0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C989C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C98A0
  c->lr=c->r[0]; // 801C98A4
  c->r[1]=c->r[1]+0x00000030u; // 801C98A8
  return; // 801C98AC
}

// fn_801C98B0
void f_801C98B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C98B0
  c->r[0]=c->lr; // 801C98B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C98B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C98BC
  c->r[31]=c->r[3]|c->r[3]; // 801C98C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C98C4
  c->r[30]=c->r[5]|c->r[5]; // 801C98C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C98CC
  c->r[29]=c->r[4]|c->r[4]; // 801C98D0
  c->lr=0x801C98D8u; f_801D76C0(c); // 801C98D4
  c->r[3]=c->r[3]+0x00000354u; // 801C98D8
  c->lr=0x801C98E0u; f_80126DC0(c); // 801C98DC
  c->r[31]=R32(c->r[31]+0x00000100u); // 801C98E0
  cmps(c,0,(int32_t)c->r[31],0); // 801C98E4
  if (!crb(c,2)) { goto L_801C9908; } // 801C98E8
  c->r[3]=0u+0x803A0000u; // 801C98EC
  c->r[5]=0u+0x803A0000u; // 801C98F0
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801C98F4
  c->r[4]=0u+0x000000F5u; // 801C98F8
  c->r[5]=c->r[5]+0xFFFFFA5Cu; // 801C98FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9900
  c->lr=0x801C9908u; f_80212260(c); // 801C9904
L_801C9908:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C9908
  if (crb(c,2)) { goto L_801C9928; } // 801C990C
  c->r[3]=c->r[31]|c->r[31]; // 801C9910
  c->r[4]=c->r[29]|c->r[29]; // 801C9914
  c->r[5]=c->r[30]|c->r[30]; // 801C9918
  c->lr=0x801C9920u; f_801CC560(c); // 801C991C
  c->r[3]=c->r[31]|c->r[31]; // 801C9920
  c->lr=0x801C9928u; f_801CC570(c); // 801C9924
L_801C9928:;
  c->lr=0x801C992Cu; f_801D76C0(c); // 801C9928
  c->r[3]=c->r[3]+0x00000354u; // 801C992C
  c->lr=0x801C9934u; f_80126EA0(c); // 801C9930
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9934
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9938
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C993C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9940
  c->lr=c->r[0]; // 801C9944
  c->r[1]=c->r[1]+0x00000020u; // 801C9948
  return; // 801C994C
}

// fn_801C9950
void f_801C9950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9950
  c->r[0]=c->lr; // 801C9954
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9958
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C995C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9960
  c->r[30]=c->r[3]|c->r[3]; // 801C9964
  c->lr=0x801C996Cu; f_801D76C0(c); // 801C9968
  c->r[3]=c->r[3]+0x00000354u; // 801C996C
  c->lr=0x801C9974u; f_80126DC0(c); // 801C9970
  cmps(c,0,(int32_t)c->r[30],0); // 801C9974
  c->r[31]=c->r[30]|c->r[30]; // 801C9978
  if (crb(c,2)) { goto L_801C9984; } // 801C997C
  c->r[31]=c->r[30]+0x000000C0u; // 801C9980
L_801C9984:;
  c->lr=0x801C9988u; f_801D76C0(c); // 801C9984
  c->r[4]=c->r[31]|c->r[31]; // 801C9988
  c->lr=0x801C9990u; f_801D7BE0(c); // 801C998C
  c->r[0]=0u+0x00000001u; // 801C9990
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801C9994
  c->lr=0x801C999Cu; f_801D76C0(c); // 801C9998
  c->r[3]=c->r[3]+0x00000354u; // 801C999C
  c->lr=0x801C99A4u; f_80126EA0(c); // 801C99A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C99A4
  c->r[3]=0u+0x00000001u; // 801C99A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C99AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C99B0
  c->lr=c->r[0]; // 801C99B4
  c->r[1]=c->r[1]+0x00000010u; // 801C99B8
  return; // 801C99BC
}

// fn_801C99C0
void f_801C99C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C99C0
  c->r[0]=c->lr; // 801C99C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C99C8
  c->r[11]=c->r[1]+0x00000020u; // 801C99CC
  c->lr=0x801C99D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801C99D0
  c->r[26]=c->r[3]|c->r[3]; // 801C99D4
  c->lr=0x801C99DCu; f_801D76C0(c); // 801C99D8
  c->r[3]=c->r[3]+0x00000354u; // 801C99DC
  c->lr=0x801C99E4u; f_80126DC0(c); // 801C99E0
  c->lr=0x801C99E8u; f_801D76C0(c); // 801C99E4
  c->r[3]=c->r[3]+0x00000354u; // 801C99E8
  c->lr=0x801C99F0u; f_80126DC0(c); // 801C99EC
  c->r[0]=R8(c->r[26]+0x000000CDu); // 801C99F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C99F4
  if (crb(c,2)) { goto L_801C9A20; } // 801C99F8
  cmps(c,0,(int32_t)c->r[26],0); // 801C99FC
  c->r[28]=c->r[26]|c->r[26]; // 801C9A00
  if (crb(c,2)) { goto L_801C9A0C; } // 801C9A04
  c->r[28]=c->r[26]+0x000000C0u; // 801C9A08
L_801C9A0C:;
  c->lr=0x801C9A10u; f_801D76C0(c); // 801C9A0C
  c->r[4]=c->r[28]|c->r[28]; // 801C9A10
  c->lr=0x801C9A18u; f_801D7C80(c); // 801C9A14
  c->r[0]=0u+0x00000000u; // 801C9A18
  W8(c->r[26]+0x000000CDu,c->r[0]); // 801C9A1C
L_801C9A20:;
  c->r[0]=R8(c->r[26]+0x000000CCu); // 801C9A20
  cmps(c,0,(int32_t)c->r[0],0); // 801C9A24
  if (crb(c,2)) { goto L_801C9A50; } // 801C9A28
  cmps(c,0,(int32_t)c->r[26],0); // 801C9A2C
  c->r[28]=c->r[26]|c->r[26]; // 801C9A30
  if (crb(c,2)) { goto L_801C9A3C; } // 801C9A34
  c->r[28]=c->r[26]+0x000000B4u; // 801C9A38
L_801C9A3C:;
  c->lr=0x801C9A40u; f_801BEEC0(c); // 801C9A3C
  c->r[4]=c->r[28]|c->r[28]; // 801C9A40
  c->lr=0x801C9A48u; f_801BF030(c); // 801C9A44
  c->r[0]=0u+0x00000000u; // 801C9A48
  W8(c->r[26]+0x000000CCu,c->r[0]); // 801C9A4C
L_801C9A50:;
  c->r[27]=c->r[26]|c->r[26]; // 801C9A50
  c->r[28]=0u+0x00000000u; // 801C9A54
  c->r[29]=0u+0x803A0000u; // 801C9A58
  c->r[30]=0u+0x803A0000u; // 801C9A5C
  c->r[31]=0u+0x00000000u; // 801C9A60
L_801C9A64:;
  c->lr=0x801C9A68u; f_801D76C0(c); // 801C9A64
  c->r[3]=c->r[3]+0x00000354u; // 801C9A68
  c->lr=0x801C9A70u; f_80126DC0(c); // 801C9A6C
  cmpu(c,0,c->r[28],0x0000000Fu); // 801C9A70
  c->r[0]=0u+0x00000000u; // 801C9A74
  if (crb(c,1)) { goto L_801C9A80; } // 801C9A78
  c->r[0]=0u+0x00000001u; // 801C9A7C
L_801C9A80:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C9A80
  if (!crb(c,2)) { goto L_801C9AA8; } // 801C9A84
  c->r[6]=c->r[28]|c->r[28]; // 801C9A88
  c->r[3]=c->r[29]+0xFFFFF9E0u; // 801C9A8C
  c->r[5]=c->r[30]+0xFFFFF9F4u; // 801C9A90
  c->r[4]=0u+0x00000261u; // 801C9A94
  c->r[7]=0u+0x00000000u; // 801C9A98
  c->r[8]=0u+0x00000010u; // 801C9A9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9AA0
  c->lr=0x801C9AA8u; f_80212260(c); // 801C9AA4
L_801C9AA8:;
  cmps(c,0,(int32_t)c->r[28],15); // 801C9AA8
  if (!crb(c,1)) { goto L_801C9AB8; } // 801C9AAC
  c->r[3]=0u+0x00000000u; // 801C9AB0
  goto L_801C9ABC; // 801C9AB4
L_801C9AB8:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 801C9AB8
L_801C9ABC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C9ABC
  if (!crb(c,2)) { goto L_801C9AD4; } // 801C9AC0
  c->lr=0x801C9AC8u; f_801D76C0(c); // 801C9AC4
  c->r[3]=c->r[3]+0x00000354u; // 801C9AC8
  c->lr=0x801C9AD0u; f_80126EA0(c); // 801C9ACC
  goto L_801C9B00; // 801C9AD0
L_801C9AD4:;
  c->lr=0x801C9AD8u; f_801CC590(c); // 801C9AD4
  c->r[3]=R32(c->r[26]+0x000000F4u); // 801C9AD8
  c->r[4]=R32(c->r[27]+0x00000100u); // 801C9ADC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801C9AE0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801C9AE4
  c->ctr=c->r[12]; // 801C9AE8
  if (true) { c->lr=0x801C9AF0u; dispatch(c,c->ctr); } // 801C9AEC
  W32(c->r[27]+0x00000100u,c->r[31]); // 801C9AF0
  c->lr=0x801C9AF8u; f_801D76C0(c); // 801C9AF4
  c->r[3]=c->r[3]+0x00000354u; // 801C9AF8
  c->lr=0x801C9B00u; f_80126EA0(c); // 801C9AFC
L_801C9B00:;
  c->r[28]=c->r[28]+0x00000001u; // 801C9B00
  c->r[27]=c->r[27]+0x00000004u; // 801C9B04
  cmps(c,0,(int32_t)c->r[28],16); // 801C9B08
  if (crb(c,0)) { IRQCHK(c); goto L_801C9A64; } // 801C9B0C
  c->lr=0x801C9B14u; f_801D76C0(c); // 801C9B10
  c->r[3]=c->r[3]+0x00000354u; // 801C9B14
  c->lr=0x801C9B1Cu; f_80126EA0(c); // 801C9B18
  c->lr=0x801C9B20u; f_801D76C0(c); // 801C9B1C
  c->r[3]=c->r[3]+0x00000354u; // 801C9B20
  c->lr=0x801C9B28u; f_80126EA0(c); // 801C9B24
  c->r[11]=c->r[1]+0x00000020u; // 801C9B28
  c->lr=0x801C9B30u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801C9B2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9B30
  c->lr=c->r[0]; // 801C9B34
  c->r[1]=c->r[1]+0x00000020u; // 801C9B38
  return; // 801C9B3C
}

// fn_801C9B40
void f_801C9B40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9B40
  c->r[0]=c->lr; // 801C9B44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9B48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9B4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9B50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9B54
  c->r[29]=c->r[4]|c->r[4]; // 801C9B58
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C9B5C
  c->r[28]=c->r[3]|c->r[3]; // 801C9B60
  c->lr=0x801C9B68u; f_801D76C0(c); // 801C9B64
  c->r[3]=c->r[3]+0x00000354u; // 801C9B68
  c->lr=0x801C9B70u; f_80126DC0(c); // 801C9B6C
  W8(c->r[28]+0x000000CEu,c->r[29]); // 801C9B70
  c->r[30]=0u+0x00000000u; // 801C9B74
  c->r[31]=0u+0x00000000u; // 801C9B78
L_801C9B7C:;
  c->r[3]=c->r[28]+c->r[31]; // 801C9B7C
  c->r[3]=R32(c->r[3]+0x00000100u); // 801C9B80
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B84
  if (crb(c,2)) { goto L_801C9B94; } // 801C9B88
  c->r[4]=c->r[29]|c->r[29]; // 801C9B8C
  c->lr=0x801C9B94u; f_801CC9A0(c); // 801C9B90
L_801C9B94:;
  c->r[30]=c->r[30]+0x00000001u; // 801C9B94
  c->r[31]=c->r[31]+0x00000004u; // 801C9B98
  cmps(c,0,(int32_t)c->r[30],16); // 801C9B9C
  if (crb(c,0)) { IRQCHK(c); goto L_801C9B7C; } // 801C9BA0
  c->lr=0x801C9BA8u; f_801D76C0(c); // 801C9BA4
  c->r[3]=c->r[3]+0x00000354u; // 801C9BA8
  c->lr=0x801C9BB0u; f_80126EA0(c); // 801C9BAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9BB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9BB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9BB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9BBC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C9BC0
  c->lr=c->r[0]; // 801C9BC4
  c->r[1]=c->r[1]+0x00000020u; // 801C9BC8
  return; // 801C9BCC
}

// fn_801C9BD0
void f_801C9BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9BD0
  c->r[0]=c->lr; // 801C9BD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9BD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9BDC
  c->r[31]=c->r[5]|c->r[5]; // 801C9BE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9BE4
  c->r[30]=c->r[4]|c->r[4]; // 801C9BE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9BEC
  c->r[29]=c->r[3]|c->r[3]; // 801C9BF0
  c->lr=0x801C9BF8u; f_801D76C0(c); // 801C9BF4
  c->r[3]=c->r[3]+0x00000354u; // 801C9BF8
  c->lr=0x801C9C00u; f_80126DC0(c); // 801C9BFC
  c->r[0]=R8(c->r[29]+0x000000CCu); // 801C9C00
  cmps(c,0,(int32_t)c->r[0],0); // 801C9C04
  if (!crb(c,2)) { goto L_801C9C1C; } // 801C9C08
  c->lr=0x801C9C10u; f_801D76C0(c); // 801C9C0C
  c->r[3]=c->r[3]+0x00000354u; // 801C9C10
  c->lr=0x801C9C18u; f_80126EA0(c); // 801C9C14
  goto L_801C9C74; // 801C9C18
L_801C9C1C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C9C1C
  if (crb(c,2)) { goto L_801C9C30; } // 801C9C20
  cmps(c,0,(int32_t)c->r[30],1); // 801C9C24
  if (crb(c,2)) { goto L_801C9C40; } // 801C9C28
  goto L_801C9C68; // 801C9C2C
L_801C9C30:;
  c->r[0]=R32(c->r[29]+0x000000DCu); // 801C9C30
  c->r[0]=c->r[0]+c->r[31]; // 801C9C34
  W32(c->r[29]+0x000000DCu,c->r[0]); // 801C9C38
  goto L_801C9C68; // 801C9C3C
L_801C9C40:;
  c->r[3]=c->r[31]^0x80000000u; // 801C9C40
  c->r[0]=0u+0x43300000u; // 801C9C44
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C9C48
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[2]=RF64(ea);} // 801C9C4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C9C50
  {uint32_t ea=c->r[29]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9C54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801C9C58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801C9C5C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801C9C60
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 801C9C64
L_801C9C68:;
  c->lr=0x801C9C6Cu; f_801D76C0(c); // 801C9C68
  c->r[3]=c->r[3]+0x00000354u; // 801C9C6C
  c->lr=0x801C9C74u; f_80126EA0(c); // 801C9C70
L_801C9C74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9C74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9C78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9C7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9C80
  c->lr=c->r[0]; // 801C9C84
  c->r[1]=c->r[1]+0x00000020u; // 801C9C88
  return; // 801C9C8C
}

// fn_801C9C90
void f_801C9C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9C90
  c->r[0]=c->lr; // 801C9C94
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9C98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9C9C
  fcmp(c,0,c->f[1],c->f[0]); // 801C9CA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801C9CA4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801C9CA8
  c->f[31]=c->f[1]; // 801C9CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9CB0
  c->r[31]=c->r[3]|c->r[3]; // 801C9CB4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801C9CB8
  if (crb(c,2)) { goto L_801C9CDC; } // 801C9CBC
  c->r[3]=0u+0x803A0000u; // 801C9CC0
  c->r[5]=0u+0x803A0000u; // 801C9CC4
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801C9CC8
  c->r[4]=0u+0x0000015Bu; // 801C9CCC
  c->r[5]=c->r[5]+0xFFFFFA88u; // 801C9CD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9CD4
  c->lr=0x801C9CDCu; f_80212260(c); // 801C9CD8
L_801C9CDC:;
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[31]);} // 801C9CDC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801C9CE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801C9CE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9CE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9CEC
  c->lr=c->r[0]; // 801C9CF0
  c->r[1]=c->r[1]+0x00000020u; // 801C9CF4
  return; // 801C9CF8
}

// fn_801C9D00
void f_801C9D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9D00
  c->r[0]=c->lr; // 801C9D04
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C9D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9D0C
  c->r[0]=0u+0x00000000u; // 801C9D10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9D14
  c->r[31]=c->r[4]|c->r[4]; // 801C9D18
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9D1C
  c->r[30]=c->r[3]|c->r[3]; // 801C9D20
  if (crb(c,1)) { goto L_801C9D2C; } // 801C9D24
  c->r[0]=0u+0x00000001u; // 801C9D28
L_801C9D2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C9D2C
  if (!crb(c,2)) { goto L_801C9D5C; } // 801C9D30
  c->r[3]=0u+0x803A0000u; // 801C9D34
  c->r[5]=0u+0x803A0000u; // 801C9D38
  c->r[6]=c->r[31]|c->r[31]; // 801C9D3C
  c->r[4]=0u+0x00000166u; // 801C9D40
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801C9D44
  c->r[5]=c->r[5]+0xFFFFFAB4u; // 801C9D48
  c->r[7]=0u+0x00000000u; // 801C9D4C
  c->r[8]=0u+0x0000007Fu; // 801C9D50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9D54
  c->lr=0x801C9D5Cu; f_80212260(c); // 801C9D58
L_801C9D5C:;
  W8(c->r[30]+0x000000E9u,c->r[31]); // 801C9D5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9D60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9D64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9D68
  c->lr=c->r[0]; // 801C9D6C
  c->r[1]=c->r[1]+0x00000010u; // 801C9D70
  return; // 801C9D74
}

// fn_801C9D80
void f_801C9D80(Ctx* __restrict c) {
  W8(c->r[3]+0x000000CFu,c->r[4]); // 801C9D80
  return; // 801C9D84
}

// fn_801C9D90
void f_801C9D90(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F8u,c->r[4]); // 801C9D90
  W32(c->r[3]+0x000000FCu,c->r[5]); // 801C9D94
  return; // 801C9D98
}

// fn_801C9DA0
void f_801C9DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9DA0
  c->r[0]=c->lr; // 801C9DA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C9DA8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C9DAC
  c->r[31]=c->r[5]|c->r[5]; // 801C9DB0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C9DB4
  c->r[30]=c->r[4]|c->r[4]; // 801C9DB8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C9DBC
  c->r[29]=c->r[3]|c->r[3]; // 801C9DC0
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801C9DC4
  cmps(c,0,(int32_t)c->r[0],0); // 801C9DC8
  if (crb(c,2)) { goto L_801C9E40; } // 801C9DCC
  cmps(c,0,(int32_t)c->r[5],0); // 801C9DD0
  if (!crb(c,2)) { goto L_801C9DF4; } // 801C9DD4
  c->r[3]=0u+0x803A0000u; // 801C9DD8
  c->r[5]=0u+0x803A0000u; // 801C9DDC
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801C9DE0
  c->r[4]=0u+0x00000179u; // 801C9DE4
  c->r[5]=c->r[5]+0xFFFFFA34u; // 801C9DE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9DEC
  c->lr=0x801C9DF4u; f_80212260(c); // 801C9DF0
L_801C9DF4:;
  c->r[5]=0u+0x805B0000u; // 801C9DF4
  c->r[0]=c->r[29]+0x00000140u; // 801C9DF8
  c->r[5]=c->r[5]+0xFFFFC968u; // 801C9DFC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C9E00
  c->r[3]=c->r[31]|c->r[31]; // 801C9E04
  c->r[4]=0u+0x00000000u; // 801C9E08
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C9E0C
  c->lr=0x801C9E14u; f_801CD560(c); // 801C9E10
  W32(c->r[1]+0x00000010u,c->r[3]); // 801C9E14
  c->r[3]=c->r[30]|c->r[30]; // 801C9E18
  c->r[4]=c->r[1]+0x00000008u; // 801C9E1C
  c->r[0]=R8(c->r[31]+0x00000024u); // 801C9E20
  W8(c->r[1]+0x00000014u,c->r[0]); // 801C9E24
  c->r[12]=R32(c->r[29]+0x000000F8u); // 801C9E28
  c->r[5]=R32(c->r[29]+0x000000FCu); // 801C9E2C
  c->ctr=c->r[12]; // 801C9E30
  if (true) { c->lr=0x801C9E38u; dispatch(c,c->ctr); } // 801C9E34
  c->r[0]=R8(c->r[1]+0x00000014u); // 801C9E38
  W8(c->r[31]+0x00000024u,c->r[0]); // 801C9E3C
L_801C9E40:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C9E40
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C9E44
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C9E48
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C9E4C
  c->lr=c->r[0]; // 801C9E50
  c->r[1]=c->r[1]+0x00000030u; // 801C9E54
  return; // 801C9E58
}

// fn_801C9E60
void f_801C9E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9E60
  c->r[0]=c->lr; // 801C9E64
  cmpu(c,0,c->r[4],0x0000000Fu); // 801C9E68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9E6C
  c->r[0]=0u+0x00000000u; // 801C9E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9E74
  c->r[31]=c->r[4]|c->r[4]; // 801C9E78
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9E7C
  c->r[30]=c->r[3]|c->r[3]; // 801C9E80
  if (crb(c,1)) { goto L_801C9E8C; } // 801C9E84
  c->r[0]=0u+0x00000001u; // 801C9E88
L_801C9E8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C9E8C
  if (!crb(c,2)) { goto L_801C9EBC; } // 801C9E90
  c->r[3]=0u+0x803A0000u; // 801C9E94
  c->r[5]=0u+0x803A0000u; // 801C9E98
  c->r[6]=c->r[31]|c->r[31]; // 801C9E9C
  c->r[4]=0u+0x00000199u; // 801C9EA0
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801C9EA4
  c->r[5]=c->r[5]+0xFFFFFAF8u; // 801C9EA8
  c->r[7]=0u+0x00000000u; // 801C9EAC
  c->r[8]=0u+0x00000010u; // 801C9EB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9EB4
  c->lr=0x801C9EBCu; f_80212260(c); // 801C9EB8
L_801C9EBC:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801C9EBC
  c->r[3]=c->r[30]+c->r[0]; // 801C9EC0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000140u); // 801C9EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9EC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9ECC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9ED0
  c->lr=c->r[0]; // 801C9ED4
  c->r[1]=c->r[1]+0x00000010u; // 801C9ED8
  return; // 801C9EDC
}

// fn_801C9EE0
void f_801C9EE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9EE0
  c->r[0]=c->lr; // 801C9EE4
  cmpu(c,0,c->r[3],0x0000000Fu); // 801C9EE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9EEC
  c->r[0]=0u+0x00000000u; // 801C9EF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9EF4
  c->r[31]=c->r[3]|c->r[3]; // 801C9EF8
  if (crb(c,1)) { goto L_801C9F04; } // 801C9EFC
  c->r[0]=0u+0x00000001u; // 801C9F00
L_801C9F04:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C9F04
  if (!crb(c,2)) { goto L_801C9F34; } // 801C9F08
  c->r[3]=0u+0x803A0000u; // 801C9F0C
  c->r[5]=0u+0x803A0000u; // 801C9F10
  c->r[6]=c->r[31]|c->r[31]; // 801C9F14
  c->r[4]=0u+0x000001A9u; // 801C9F18
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801C9F1C
  c->r[5]=c->r[5]+0xFFFFFAF8u; // 801C9F20
  c->r[7]=0u+0x00000000u; // 801C9F24
  c->r[8]=0u+0x00000010u; // 801C9F28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9F2C
  c->lr=0x801C9F34u; f_80212260(c); // 801C9F30
L_801C9F34:;
  c->r[3]=0u+0x805B0000u; // 801C9F34
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801C9F38
  c->r[3]=c->r[3]+0xFFFFC968u; // 801C9F3C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[0]); // 801C9F40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9F44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9F48
  c->lr=c->r[0]; // 801C9F4C
  c->r[1]=c->r[1]+0x00000010u; // 801C9F50
  return; // 801C9F54
}

// fn_801C9F60
void f_801C9F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9F60
  c->r[0]=c->lr; // 801C9F64
  cmpu(c,0,c->r[4],0x0000000Fu); // 801C9F68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9F6C
  c->r[0]=0u+0x00000000u; // 801C9F70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9F74
  c->r[31]=c->r[5]|c->r[5]; // 801C9F78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9F7C
  c->r[30]=c->r[4]|c->r[4]; // 801C9F80
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9F84
  c->r[29]=c->r[3]|c->r[3]; // 801C9F88
  if (crb(c,1)) { goto L_801C9F94; } // 801C9F8C
  c->r[0]=0u+0x00000001u; // 801C9F90
L_801C9F94:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C9F94
  if (!crb(c,2)) { goto L_801C9FC4; } // 801C9F98
  c->r[3]=0u+0x803A0000u; // 801C9F9C
  c->r[5]=0u+0x803A0000u; // 801C9FA0
  c->r[6]=c->r[30]|c->r[30]; // 801C9FA4
  c->r[4]=0u+0x000001BBu; // 801C9FA8
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801C9FAC
  c->r[5]=c->r[5]+0xFFFFFAF8u; // 801C9FB0
  c->r[7]=0u+0x00000000u; // 801C9FB4
  c->r[8]=0u+0x00000010u; // 801C9FB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C9FBC
  c->lr=0x801C9FC4u; f_80212260(c); // 801C9FC0
L_801C9FC4:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801C9FC4
  c->r[3]=c->r[29]+c->r[0]; // 801C9FC8
  W16(c->r[3]+0x00000140u,c->r[31]); // 801C9FCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9FD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9FD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9FD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9FDC
  c->lr=c->r[0]; // 801C9FE0
  c->r[1]=c->r[1]+0x00000020u; // 801C9FE4
  return; // 801C9FE8
}

// fn_801C9FF0
void f_801C9FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9FF0
  c->r[0]=c->lr; // 801C9FF4
  cmpu(c,0,c->r[3],0x0000000Fu); // 801C9FF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9FFC
  c->r[0]=0u+0x00000000u; // 801CA000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA004
  c->r[31]=c->r[4]|c->r[4]; // 801CA008
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CA00C
  c->r[30]=c->r[3]|c->r[3]; // 801CA010
  if (crb(c,1)) { goto L_801CA01C; } // 801CA014
  c->r[0]=0u+0x00000001u; // 801CA018
L_801CA01C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA01C
  if (!crb(c,2)) { goto L_801CA04C; } // 801CA020
  c->r[3]=0u+0x803A0000u; // 801CA024
  c->r[5]=0u+0x803A0000u; // 801CA028
  c->r[6]=c->r[30]|c->r[30]; // 801CA02C
  c->r[4]=0u+0x000001CCu; // 801CA030
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801CA034
  c->r[5]=c->r[5]+0xFFFFFAF8u; // 801CA038
  c->r[7]=0u+0x00000000u; // 801CA03C
  c->r[8]=0u+0x00000010u; // 801CA040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CA044
  c->lr=0x801CA04Cu; f_80212260(c); // 801CA048
L_801CA04C:;
  c->r[3]=0u+0x805B0000u; // 801CA04C
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801CA050
  c->r[3]=c->r[3]+0xFFFFC968u; // 801CA054
  W16(c->r[3]+c->r[0],c->r[31]); // 801CA058
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA05C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA060
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CA064
  c->lr=c->r[0]; // 801CA068
  c->r[1]=c->r[1]+0x00000010u; // 801CA06C
  return; // 801CA070
}

// fn_801CA080
void f_801CA080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA080
  c->r[0]=c->lr; // 801CA084
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CA088
  c->r[11]=c->r[1]+0x00000030u; // 801CA08C
  c->lr=0x801CA094u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CA090
  c->r[6]=0u+0x803A0000u; // 801CA094
  c->r[30]=c->r[4]|c->r[4]; // 801CA098
  {uint32_t ea=c->r[6]+0xFFFFFB34u; c->r[4]=R32(ea); c->r[6]=ea;} // 801CA09C
  c->r[27]=c->r[3]|c->r[3]; // 801CA0A0
  W32(c->r[1]+0x00000008u,c->r[4]); // 801CA0A4
  c->r[28]=c->r[5]|c->r[5]; // 801CA0A8
  c->r[3]=R32(c->r[6]+0x00000004u); // 801CA0AC
  c->r[0]=R32(c->r[6]+0x00000008u); // 801CA0B0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CA0B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CA0B8
  c->lr=0x801CA0C0u; f_801251B0(c); // 801CA0BC
  c->r[31]=c->r[3]|c->r[3]; // 801CA0C0
  c->r[29]=0u+0x00000000u; // 801CA0C4
  goto L_801CA10C; // 801CA0C8
L_801CA0CC:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801CA0CC
  if (crb(c,2)) { goto L_801CA100; } // 801CA0D0
  cmps(c,0,(int32_t)c->r[29],15); // 801CA0D4
  if (!crb(c,1)) { goto L_801CA0E4; } // 801CA0D8
  c->r[3]=0u+0x00000000u; // 801CA0DC
  goto L_801CA0E8; // 801CA0E0
L_801CA0E4:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 801CA0E4
L_801CA0E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA0E8
  if (crb(c,2)) { goto L_801CA100; } // 801CA0EC
  c->r[4]=c->r[28]|c->r[28]; // 801CA0F0
  c->r[12]=c->r[1]+0x00000008u; // 801CA0F4
  c->lr=0x801CA0FCu; f_802E687C(c); // 801CA0F8
  c->r[0]=c->r[0]|0x00000000u; // 801CA0FC
L_801CA100:;
  c->r[30]=rotl(c->r[30],31)&0x7FFFFFFFu; // 801CA100
  c->r[27]=c->r[27]+0x00000004u; // 801CA104
  c->r[29]=c->r[29]+0x00000001u; // 801CA108
L_801CA10C:;
  cmps(c,0,(int32_t)c->r[29],16); // 801CA10C
  if (!crb(c,0)) { goto L_801CA11C; } // 801CA110
  cmps(c,0,(int32_t)c->r[30],0); // 801CA114
  if (!crb(c,2)) { IRQCHK(c); goto L_801CA0CC; } // 801CA118
L_801CA11C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA11C
  c->lr=0x801CA124u; f_801251F0(c); // 801CA120
  c->r[11]=c->r[1]+0x00000030u; // 801CA124
  c->lr=0x801CA12Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA128
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA12C
  c->lr=c->r[0]; // 801CA130
  c->r[1]=c->r[1]+0x00000030u; // 801CA134
  return; // 801CA138
}

// fn_801CA140
void f_801CA140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA140
  c->r[0]=c->lr; // 801CA144
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CA148
  c->r[11]=c->r[1]+0x00000030u; // 801CA14C
  c->lr=0x801CA154u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CA150
  c->r[7]=0u+0x803A0000u; // 801CA154
  c->r[30]=c->r[4]|c->r[4]; // 801CA158
  {uint32_t ea=c->r[7]+0xFFFFFB40u; c->r[4]=R32(ea); c->r[7]=ea;} // 801CA15C
  c->r[26]=c->r[3]|c->r[3]; // 801CA160
  W32(c->r[1]+0x00000008u,c->r[4]); // 801CA164
  c->r[27]=c->r[5]|c->r[5]; // 801CA168
  c->r[3]=R32(c->r[7]+0x00000004u); // 801CA16C
  c->r[28]=c->r[6]|c->r[6]; // 801CA170
  c->r[0]=R32(c->r[7]+0x00000008u); // 801CA174
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CA178
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CA17C
  c->lr=0x801CA184u; f_801251B0(c); // 801CA180
  c->r[31]=c->r[3]|c->r[3]; // 801CA184
  c->r[29]=0u+0x00000000u; // 801CA188
  goto L_801CA1D4; // 801CA18C
L_801CA190:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801CA190
  if (crb(c,2)) { goto L_801CA1C8; } // 801CA194
  cmps(c,0,(int32_t)c->r[29],15); // 801CA198
  if (!crb(c,1)) { goto L_801CA1A8; } // 801CA19C
  c->r[3]=0u+0x00000000u; // 801CA1A0
  goto L_801CA1AC; // 801CA1A4
L_801CA1A8:;
  c->r[3]=R32(c->r[26]+0x00000100u); // 801CA1A8
L_801CA1AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA1AC
  if (crb(c,2)) { goto L_801CA1C8; } // 801CA1B0
  c->r[4]=c->r[27]|c->r[27]; // 801CA1B4
  c->r[5]=c->r[28]|c->r[28]; // 801CA1B8
  c->r[12]=c->r[1]+0x00000008u; // 801CA1BC
  c->lr=0x801CA1C4u; f_802E687C(c); // 801CA1C0
  c->r[0]=c->r[0]|0x00000000u; // 801CA1C4
L_801CA1C8:;
  c->r[30]=rotl(c->r[30],31)&0x7FFFFFFFu; // 801CA1C8
  c->r[26]=c->r[26]+0x00000004u; // 801CA1CC
  c->r[29]=c->r[29]+0x00000001u; // 801CA1D0
L_801CA1D4:;
  cmps(c,0,(int32_t)c->r[29],16); // 801CA1D4
  if (!crb(c,0)) { goto L_801CA1E4; } // 801CA1D8
  cmps(c,0,(int32_t)c->r[30],0); // 801CA1DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CA190; } // 801CA1E0
L_801CA1E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA1E4
  c->lr=0x801CA1ECu; f_801251F0(c); // 801CA1E8
  c->r[11]=c->r[1]+0x00000030u; // 801CA1EC
  c->lr=0x801CA1F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA1F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA1F4
  c->lr=c->r[0]; // 801CA1F8
  c->r[1]=c->r[1]+0x00000030u; // 801CA1FC
  return; // 801CA200
}

// fn_801CA210
void f_801CA210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA210
  c->r[0]=c->lr; // 801CA214
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA218
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CA21C
  fcmp(c,0,c->f[1],c->f[0]); // 801CA220
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CA224
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CA228
  c->f[31]=c->f[1]; // 801CA22C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CA230
  c->r[31]=0u+0x803A0000u; // 801CA234
  c->r[31]=c->r[31]+0xFFFFF9E0u; // 801CA238
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CA23C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CA240
  c->r[29]=c->r[4]|c->r[4]; // 801CA244
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CA248
  c->r[28]=c->r[3]|c->r[3]; // 801CA24C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA250
  if (crb(c,2)) { goto L_801CA26C; } // 801CA254
  c->r[3]=c->r[31]+0x00000000u; // 801CA258
  c->r[5]=c->r[31]+0x00000178u; // 801CA25C
  c->r[4]=0u+0x000001E7u; // 801CA260
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CA264
  c->lr=0x801CA26Cu; f_80212260(c); // 801CA268
L_801CA26C:;
  c->r[3]=c->r[31]+0x0000016Cu; // 801CA26C
  c->r[5]=R32(c->r[31]+0x0000016Cu); // 801CA270
  c->r[4]=R32(c->r[3]+0x00000004u); // 801CA274
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CA278
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CA27C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CA280
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CA284
  c->lr=0x801CA28Cu; f_801251B0(c); // 801CA288
  c->r[31]=c->r[3]|c->r[3]; // 801CA28C
  c->r[30]=0u+0x00000000u; // 801CA290
  goto L_801CA2D8; // 801CA294
L_801CA298:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801CA298
  if (crb(c,2)) { goto L_801CA2CC; } // 801CA29C
  cmps(c,0,(int32_t)c->r[30],15); // 801CA2A0
  if (!crb(c,1)) { goto L_801CA2B0; } // 801CA2A4
  c->r[3]=0u+0x00000000u; // 801CA2A8
  goto L_801CA2B4; // 801CA2AC
L_801CA2B0:;
  c->r[3]=R32(c->r[28]+0x00000100u); // 801CA2B0
L_801CA2B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA2B4
  if (crb(c,2)) { goto L_801CA2CC; } // 801CA2B8
  c->f[1]=c->f[31]; // 801CA2BC
  c->r[12]=c->r[1]+0x00000008u; // 801CA2C0
  c->lr=0x801CA2C8u; f_802E687C(c); // 801CA2C4
  c->r[0]=c->r[0]|0x00000000u; // 801CA2C8
L_801CA2CC:;
  c->r[29]=rotl(c->r[29],31)&0x7FFFFFFFu; // 801CA2CC
  c->r[28]=c->r[28]+0x00000004u; // 801CA2D0
  c->r[30]=c->r[30]+0x00000001u; // 801CA2D4
L_801CA2D8:;
  cmps(c,0,(int32_t)c->r[30],16); // 801CA2D8
  if (!crb(c,0)) { goto L_801CA2E8; } // 801CA2DC
  cmps(c,0,(int32_t)c->r[29],0); // 801CA2E0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CA298; } // 801CA2E4
L_801CA2E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA2E8
  c->lr=0x801CA2F0u; f_801251F0(c); // 801CA2EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CA2F0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CA2F4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CA2F8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CA2FC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CA300
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CA304
  c->r[28]=R32(c->r[1]+0x00000020u); // 801CA308
  c->lr=c->r[0]; // 801CA30C
  c->r[1]=c->r[1]+0x00000040u; // 801CA310
  return; // 801CA314
}

// fn_801CA320
void f_801CA320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA320
  c->r[0]=c->lr; // 801CA324
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA328
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CA32C
  fcmp(c,0,c->f[1],c->f[0]); // 801CA330
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CA334
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CA338
  c->f[31]=c->f[1]; // 801CA33C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CA340
  c->r[31]=0u+0x803A0000u; // 801CA344
  c->r[31]=c->r[31]+0xFFFFF9E0u; // 801CA348
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CA34C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CA350
  c->r[29]=c->r[4]|c->r[4]; // 801CA354
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CA358
  c->r[28]=c->r[3]|c->r[3]; // 801CA35C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CA360
  if (crb(c,2)) { goto L_801CA37C; } // 801CA364
  c->r[3]=c->r[31]+0x00000000u; // 801CA368
  c->r[5]=c->r[31]+0x000001ACu; // 801CA36C
  c->r[4]=0u+0x000001EDu; // 801CA370
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CA374
  c->lr=0x801CA37Cu; f_80212260(c); // 801CA378
L_801CA37C:;
  c->r[3]=c->r[31]+0x000001A0u; // 801CA37C
  c->r[5]=R32(c->r[31]+0x000001A0u); // 801CA380
  c->r[4]=R32(c->r[3]+0x00000004u); // 801CA384
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CA388
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CA38C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CA390
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CA394
  c->lr=0x801CA39Cu; f_801251B0(c); // 801CA398
  c->r[31]=c->r[3]|c->r[3]; // 801CA39C
  c->r[30]=0u+0x00000000u; // 801CA3A0
  goto L_801CA3E8; // 801CA3A4
L_801CA3A8:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801CA3A8
  if (crb(c,2)) { goto L_801CA3DC; } // 801CA3AC
  cmps(c,0,(int32_t)c->r[30],15); // 801CA3B0
  if (!crb(c,1)) { goto L_801CA3C0; } // 801CA3B4
  c->r[3]=0u+0x00000000u; // 801CA3B8
  goto L_801CA3C4; // 801CA3BC
L_801CA3C0:;
  c->r[3]=R32(c->r[28]+0x00000100u); // 801CA3C0
L_801CA3C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA3C4
  if (crb(c,2)) { goto L_801CA3DC; } // 801CA3C8
  c->f[1]=c->f[31]; // 801CA3CC
  c->r[12]=c->r[1]+0x00000008u; // 801CA3D0
  c->lr=0x801CA3D8u; f_802E687C(c); // 801CA3D4
  c->r[0]=c->r[0]|0x00000000u; // 801CA3D8
L_801CA3DC:;
  c->r[29]=rotl(c->r[29],31)&0x7FFFFFFFu; // 801CA3DC
  c->r[28]=c->r[28]+0x00000004u; // 801CA3E0
  c->r[30]=c->r[30]+0x00000001u; // 801CA3E4
L_801CA3E8:;
  cmps(c,0,(int32_t)c->r[30],16); // 801CA3E8
  if (!crb(c,0)) { goto L_801CA3F8; } // 801CA3EC
  cmps(c,0,(int32_t)c->r[29],0); // 801CA3F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CA3A8; } // 801CA3F4
L_801CA3F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA3F8
  c->lr=0x801CA400u; f_801251F0(c); // 801CA3FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CA400
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801CA404
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CA408
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CA40C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CA410
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CA414
  c->r[28]=R32(c->r[1]+0x00000020u); // 801CA418
  c->lr=c->r[0]; // 801CA41C
  c->r[1]=c->r[1]+0x00000040u; // 801CA420
  return; // 801CA424
}

// fn_801CA430
void f_801CA430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA430
  c->r[0]=c->lr; // 801CA434
  c->r[6]=0u+0x803A0000u; // 801CA438
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CA43C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801CA440
  c->f[31]=c->f[1]; // 801CA444
  W32(c->r[1]+0x00000024u,c->r[31]); // 801CA448
  W32(c->r[1]+0x00000020u,c->r[30]); // 801CA44C
  c->r[30]=c->r[4]|c->r[4]; // 801CA450
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 801CA454
  W32(c->r[1]+0x00000018u,c->r[28]); // 801CA458
  c->r[28]=c->r[3]|c->r[3]; // 801CA45C
  {uint32_t ea=c->r[6]+0xFFFFFBB0u; c->r[5]=R32(ea); c->r[6]=ea;} // 801CA460
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CA464
  c->r[3]=R32(c->r[6]+0x00000004u); // 801CA468
  c->r[0]=R32(c->r[6]+0x00000008u); // 801CA46C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CA470
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CA474
  c->lr=0x801CA47Cu; f_801251B0(c); // 801CA478
  c->r[31]=c->r[3]|c->r[3]; // 801CA47C
  c->r[29]=0u+0x00000000u; // 801CA480
  goto L_801CA4C8; // 801CA484
L_801CA488:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801CA488
  if (crb(c,2)) { goto L_801CA4BC; } // 801CA48C
  cmps(c,0,(int32_t)c->r[29],15); // 801CA490
  if (!crb(c,1)) { goto L_801CA4A0; } // 801CA494
  c->r[3]=0u+0x00000000u; // 801CA498
  goto L_801CA4A4; // 801CA49C
L_801CA4A0:;
  c->r[3]=R32(c->r[28]+0x00000100u); // 801CA4A0
L_801CA4A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA4A4
  if (crb(c,2)) { goto L_801CA4BC; } // 801CA4A8
  c->f[1]=c->f[31]; // 801CA4AC
  c->r[12]=c->r[1]+0x00000008u; // 801CA4B0
  c->lr=0x801CA4B8u; f_802E687C(c); // 801CA4B4
  c->r[0]=c->r[0]|0x00000000u; // 801CA4B8
L_801CA4BC:;
  c->r[30]=rotl(c->r[30],31)&0x7FFFFFFFu; // 801CA4BC
  c->r[28]=c->r[28]+0x00000004u; // 801CA4C0
  c->r[29]=c->r[29]+0x00000001u; // 801CA4C4
L_801CA4C8:;
  cmps(c,0,(int32_t)c->r[29],16); // 801CA4C8
  if (!crb(c,0)) { goto L_801CA4D8; } // 801CA4CC
  cmps(c,0,(int32_t)c->r[30],0); // 801CA4D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CA488; } // 801CA4D4
L_801CA4D8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA4D8
  c->lr=0x801CA4E0u; f_801251F0(c); // 801CA4DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA4E0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801CA4E4
  c->r[31]=R32(c->r[1]+0x00000024u); // 801CA4E8
  c->r[30]=R32(c->r[1]+0x00000020u); // 801CA4EC
  c->r[29]=R32(c->r[1]+0x0000001Cu); // 801CA4F0
  c->r[28]=R32(c->r[1]+0x00000018u); // 801CA4F4
  c->lr=c->r[0]; // 801CA4F8
  c->r[1]=c->r[1]+0x00000030u; // 801CA4FC
  return; // 801CA500
}

// fn_801CA510
void f_801CA510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA510
  c->r[0]=c->lr; // 801CA514
  c->r[6]=0u+0x803A0000u; // 801CA518
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CA51C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 801CA520
  c->f[31]=c->f[1]; // 801CA524
  W32(c->r[1]+0x00000024u,c->r[31]); // 801CA528
  W32(c->r[1]+0x00000020u,c->r[30]); // 801CA52C
  c->r[30]=c->r[4]|c->r[4]; // 801CA530
  W32(c->r[1]+0x0000001Cu,c->r[29]); // 801CA534
  W32(c->r[1]+0x00000018u,c->r[28]); // 801CA538
  c->r[28]=c->r[3]|c->r[3]; // 801CA53C
  {uint32_t ea=c->r[6]+0xFFFFFBBCu; c->r[5]=R32(ea); c->r[6]=ea;} // 801CA540
  W32(c->r[1]+0x00000008u,c->r[5]); // 801CA544
  c->r[3]=R32(c->r[6]+0x00000004u); // 801CA548
  c->r[0]=R32(c->r[6]+0x00000008u); // 801CA54C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CA550
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CA554
  c->lr=0x801CA55Cu; f_801251B0(c); // 801CA558
  c->r[31]=c->r[3]|c->r[3]; // 801CA55C
  c->r[29]=0u+0x00000000u; // 801CA560
  goto L_801CA5A8; // 801CA564
L_801CA568:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801CA568
  if (crb(c,2)) { goto L_801CA59C; } // 801CA56C
  cmps(c,0,(int32_t)c->r[29],15); // 801CA570
  if (!crb(c,1)) { goto L_801CA580; } // 801CA574
  c->r[3]=0u+0x00000000u; // 801CA578
  goto L_801CA584; // 801CA57C
L_801CA580:;
  c->r[3]=R32(c->r[28]+0x00000100u); // 801CA580
L_801CA584:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA584
  if (crb(c,2)) { goto L_801CA59C; } // 801CA588
  c->f[1]=c->f[31]; // 801CA58C
  c->r[12]=c->r[1]+0x00000008u; // 801CA590
  c->lr=0x801CA598u; f_802E687C(c); // 801CA594
  c->r[0]=c->r[0]|0x00000000u; // 801CA598
L_801CA59C:;
  c->r[30]=rotl(c->r[30],31)&0x7FFFFFFFu; // 801CA59C
  c->r[28]=c->r[28]+0x00000004u; // 801CA5A0
  c->r[29]=c->r[29]+0x00000001u; // 801CA5A4
L_801CA5A8:;
  cmps(c,0,(int32_t)c->r[29],16); // 801CA5A8
  if (!crb(c,0)) { goto L_801CA5B8; } // 801CA5AC
  cmps(c,0,(int32_t)c->r[30],0); // 801CA5B0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CA568; } // 801CA5B4
L_801CA5B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA5B8
  c->lr=0x801CA5C0u; f_801251F0(c); // 801CA5BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA5C0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 801CA5C4
  c->r[31]=R32(c->r[1]+0x00000024u); // 801CA5C8
  c->r[30]=R32(c->r[1]+0x00000020u); // 801CA5CC
  c->r[29]=R32(c->r[1]+0x0000001Cu); // 801CA5D0
  c->r[28]=R32(c->r[1]+0x00000018u); // 801CA5D4
  c->lr=c->r[0]; // 801CA5D8
  c->r[1]=c->r[1]+0x00000030u; // 801CA5DC
  return; // 801CA5E0
}

// fn_801CA5F0
void f_801CA5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA5F0
  c->r[0]=c->lr; // 801CA5F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA5F8
  c->r[11]=c->r[1]+0x00000020u; // 801CA5FC
  c->lr=0x801CA604u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CA600
  c->r[31]=c->r[3]|c->r[3]; // 801CA604
  c->r[27]=c->r[4]|c->r[4]; // 801CA608
  c->r[26]=c->r[5]|c->r[5]; // 801CA60C
  c->lr=0x801CA614u; f_801D76C0(c); // 801CA610
  c->r[3]=c->r[3]+0x00000354u; // 801CA614
  c->lr=0x801CA61Cu; f_80126DC0(c); // 801CA618
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801CA61C
  cmps(c,0,(int32_t)c->r[0],0); // 801CA620
  if (crb(c,2)) { goto L_801CA7B8; } // 801CA624
  c->r[0]=0u+0x00000010u; // 801CA628
  c->r[3]=0u+0x00000000u; // 801CA62C
  c->ctr=c->r[0]; // 801CA630
  c->r[0]=c->r[0]|0x00000000u; // 801CA634
L_801CA638:;
  c->r[4]=c->r[31]+c->r[3]; // 801CA638
  c->r[4]=R32(c->r[4]+0x00000100u); // 801CA63C
  cmps(c,0,(int32_t)c->r[4],0); // 801CA640
  if (crb(c,2)) { goto L_801CA7B0; } // 801CA644
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801CA648
  cmpu(c,0,c->r[27],c->r[0]); // 801CA64C
  if (crb(c,1)) { goto L_801CA7B0; } // 801CA650
  cmpu(c,0,c->r[0],c->r[26]); // 801CA654
  if (crb(c,1)) { goto L_801CA7B0; } // 801CA658
  c->lr=0x801CA660u; f_801D76C0(c); // 801CA65C
  c->r[3]=c->r[3]+0x00000354u; // 801CA660
  c->lr=0x801CA668u; f_80126DC0(c); // 801CA664
  c->lr=0x801CA66Cu; f_801D76C0(c); // 801CA668
  c->r[3]=c->r[3]+0x00000354u; // 801CA66C
  c->lr=0x801CA674u; f_80126DC0(c); // 801CA670
  c->r[0]=R8(c->r[31]+0x000000CDu); // 801CA674
  cmps(c,0,(int32_t)c->r[0],0); // 801CA678
  if (crb(c,2)) { goto L_801CA6A4; } // 801CA67C
  cmps(c,0,(int32_t)c->r[31],0); // 801CA680
  c->r[27]=c->r[31]|c->r[31]; // 801CA684
  if (crb(c,2)) { goto L_801CA690; } // 801CA688
  c->r[27]=c->r[31]+0x000000C0u; // 801CA68C
L_801CA690:;
  c->lr=0x801CA694u; f_801D76C0(c); // 801CA690
  c->r[4]=c->r[27]|c->r[27]; // 801CA694
  c->lr=0x801CA69Cu; f_801D7C80(c); // 801CA698
  c->r[0]=0u+0x00000000u; // 801CA69C
  W8(c->r[31]+0x000000CDu,c->r[0]); // 801CA6A0
L_801CA6A4:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801CA6A4
  cmps(c,0,(int32_t)c->r[0],0); // 801CA6A8
  if (crb(c,2)) { goto L_801CA6D4; } // 801CA6AC
  cmps(c,0,(int32_t)c->r[31],0); // 801CA6B0
  c->r[27]=c->r[31]|c->r[31]; // 801CA6B4
  if (crb(c,2)) { goto L_801CA6C0; } // 801CA6B8
  c->r[27]=c->r[31]+0x000000B4u; // 801CA6BC
L_801CA6C0:;
  c->lr=0x801CA6C4u; f_801BEEC0(c); // 801CA6C0
  c->r[4]=c->r[27]|c->r[27]; // 801CA6C4
  c->lr=0x801CA6CCu; f_801BF030(c); // 801CA6C8
  c->r[0]=0u+0x00000000u; // 801CA6CC
  W8(c->r[31]+0x000000CCu,c->r[0]); // 801CA6D0
L_801CA6D4:;
  c->r[26]=c->r[31]|c->r[31]; // 801CA6D4
  c->r[27]=0u+0x00000000u; // 801CA6D8
  c->r[28]=0u+0x803A0000u; // 801CA6DC
  c->r[29]=0u+0x803A0000u; // 801CA6E0
  c->r[30]=0u+0x00000000u; // 801CA6E4
L_801CA6E8:;
  c->lr=0x801CA6ECu; f_801D76C0(c); // 801CA6E8
  c->r[3]=c->r[3]+0x00000354u; // 801CA6EC
  c->lr=0x801CA6F4u; f_80126DC0(c); // 801CA6F0
  cmpu(c,0,c->r[27],0x0000000Fu); // 801CA6F4
  c->r[0]=0u+0x00000000u; // 801CA6F8
  if (crb(c,1)) { goto L_801CA704; } // 801CA6FC
  c->r[0]=0u+0x00000001u; // 801CA700
L_801CA704:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA704
  if (!crb(c,2)) { goto L_801CA72C; } // 801CA708
  c->r[6]=c->r[27]|c->r[27]; // 801CA70C
  c->r[3]=c->r[28]+0xFFFFF9E0u; // 801CA710
  c->r[5]=c->r[29]+0xFFFFF9F4u; // 801CA714
  c->r[4]=0u+0x00000261u; // 801CA718
  c->r[7]=0u+0x00000000u; // 801CA71C
  c->r[8]=0u+0x00000010u; // 801CA720
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CA724
  c->lr=0x801CA72Cu; f_80212260(c); // 801CA728
L_801CA72C:;
  cmps(c,0,(int32_t)c->r[27],15); // 801CA72C
  if (!crb(c,1)) { goto L_801CA73C; } // 801CA730
  c->r[3]=0u+0x00000000u; // 801CA734
  goto L_801CA740; // 801CA738
L_801CA73C:;
  c->r[3]=R32(c->r[26]+0x00000100u); // 801CA73C
L_801CA740:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA740
  if (!crb(c,2)) { goto L_801CA758; } // 801CA744
  c->lr=0x801CA74Cu; f_801D76C0(c); // 801CA748
  c->r[3]=c->r[3]+0x00000354u; // 801CA74C
  c->lr=0x801CA754u; f_80126EA0(c); // 801CA750
  goto L_801CA784; // 801CA754
L_801CA758:;
  c->lr=0x801CA75Cu; f_801CC590(c); // 801CA758
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801CA75C
  c->r[4]=R32(c->r[26]+0x00000100u); // 801CA760
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CA764
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CA768
  c->ctr=c->r[12]; // 801CA76C
  if (true) { c->lr=0x801CA774u; dispatch(c,c->ctr); } // 801CA770
  W32(c->r[26]+0x00000100u,c->r[30]); // 801CA774
  c->lr=0x801CA77Cu; f_801D76C0(c); // 801CA778
  c->r[3]=c->r[3]+0x00000354u; // 801CA77C
  c->lr=0x801CA784u; f_80126EA0(c); // 801CA780
L_801CA784:;
  c->r[27]=c->r[27]+0x00000001u; // 801CA784
  c->r[26]=c->r[26]+0x00000004u; // 801CA788
  cmps(c,0,(int32_t)c->r[27],16); // 801CA78C
  if (crb(c,0)) { IRQCHK(c); goto L_801CA6E8; } // 801CA790
  c->lr=0x801CA798u; f_801D76C0(c); // 801CA794
  c->r[3]=c->r[3]+0x00000354u; // 801CA798
  c->lr=0x801CA7A0u; f_80126EA0(c); // 801CA79C
  c->lr=0x801CA7A4u; f_801D76C0(c); // 801CA7A0
  c->r[3]=c->r[3]+0x00000354u; // 801CA7A4
  c->lr=0x801CA7ACu; f_80126EA0(c); // 801CA7A8
  goto L_801CA7B8; // 801CA7AC
L_801CA7B0:;
  c->r[3]=c->r[3]+0x00000004u; // 801CA7B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA638; } // 801CA7B4
L_801CA7B8:;
  c->lr=0x801CA7BCu; f_801D76C0(c); // 801CA7B8
  c->r[3]=c->r[3]+0x00000354u; // 801CA7BC
  c->lr=0x801CA7C4u; f_80126EA0(c); // 801CA7C0
  c->r[11]=c->r[1]+0x00000020u; // 801CA7C4
  c->lr=0x801CA7CCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA7C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA7CC
  c->lr=c->r[0]; // 801CA7D0
  c->r[1]=c->r[1]+0x00000020u; // 801CA7D4
  return; // 801CA7D8
}

// GetPlayerTrack__Q44nw4r3snd6detail9SeqPlayerFi
void f_801CA7E0(Ctx* __restrict c) {
  trace_call(0x801CA7E0u);
  cmps(c,0,(int32_t)c->r[4],15); // 801CA7E0
  if (!crb(c,1)) { goto L_801CA7F0; } // 801CA7E4
  c->r[3]=0u+0x00000000u; // 801CA7E8
  return; // 801CA7EC
L_801CA7F0:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CA7F0
  c->r[3]=c->r[3]+c->r[0]; // 801CA7F4
  c->r[3]=R32(c->r[3]+0x00000100u); // 801CA7F8
  return; // 801CA7FC
}

// fn_801CA800
void f_801CA800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA800
  c->r[0]=c->lr; // 801CA804
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CA808
  c->r[11]=c->r[1]+0x00000030u; // 801CA80C
  c->lr=0x801CA814u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CA810
  c->r[22]=c->r[3]|c->r[3]; // 801CA814
  c->r[23]=c->r[4]|c->r[4]; // 801CA818
  c->lr=0x801CA820u; f_801D76C0(c); // 801CA81C
  c->r[3]=c->r[3]+0x00000354u; // 801CA820
  c->lr=0x801CA828u; f_80126DC0(c); // 801CA824
  c->r[25]=0u+0x00000000u; // 801CA828
  c->r[24]=0u+0x00000000u; // 801CA82C
  c->r[30]=c->r[25]|c->r[25]; // 801CA830
  c->r[31]=0u+0x00000000u; // 801CA834
  c->r[28]=0u+0x803A0000u; // 801CA838
  c->r[29]=0u+0x803A0000u; // 801CA83C
L_801CA840:;
  c->r[27]=c->r[22]+c->r[31]; // 801CA840
  c->r[26]=R32(c->r[27]+0x00000100u); // 801CA844
  cmps(c,0,(int32_t)c->r[26],0); // 801CA848
  if (crb(c,2)) { goto L_801CA918; } // 801CA84C
  c->r[3]=c->r[26]|c->r[26]; // 801CA850
  c->lr=0x801CA858u; f_801CC660(c); // 801CA854
  c->r[3]=c->r[26]|c->r[26]; // 801CA858
  c->r[4]=c->r[23]|c->r[23]; // 801CA85C
  c->lr=0x801CA864u; f_801CC730(c); // 801CA860
  cmps(c,0,(int32_t)c->r[3],0); // 801CA864
  if (!crb(c,0)) { goto L_801CA908; } // 801CA868
  c->lr=0x801CA870u; f_801D76C0(c); // 801CA86C
  c->r[3]=c->r[3]+0x00000354u; // 801CA870
  c->lr=0x801CA878u; f_80126DC0(c); // 801CA874
  cmpu(c,0,c->r[24],0x0000000Fu); // 801CA878
  c->r[0]=0u+0x00000000u; // 801CA87C
  if (crb(c,1)) { goto L_801CA888; } // 801CA880
  c->r[0]=0u+0x00000001u; // 801CA884
L_801CA888:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA888
  if (!crb(c,2)) { goto L_801CA8B0; } // 801CA88C
  c->r[6]=c->r[24]|c->r[24]; // 801CA890
  c->r[3]=c->r[28]+0xFFFFF9E0u; // 801CA894
  c->r[5]=c->r[29]+0xFFFFF9F4u; // 801CA898
  c->r[4]=0u+0x00000261u; // 801CA89C
  c->r[7]=0u+0x00000000u; // 801CA8A0
  c->r[8]=0u+0x00000010u; // 801CA8A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CA8A8
  c->lr=0x801CA8B0u; f_80212260(c); // 801CA8AC
L_801CA8B0:;
  cmps(c,0,(int32_t)c->r[24],15); // 801CA8B0
  if (!crb(c,1)) { goto L_801CA8C0; } // 801CA8B4
  c->r[3]=0u+0x00000000u; // 801CA8B8
  goto L_801CA8C4; // 801CA8BC
L_801CA8C0:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 801CA8C0
L_801CA8C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CA8C4
  if (!crb(c,2)) { goto L_801CA8DC; } // 801CA8C8
  c->lr=0x801CA8D0u; f_801D76C0(c); // 801CA8CC
  c->r[3]=c->r[3]+0x00000354u; // 801CA8D0
  c->lr=0x801CA8D8u; f_80126EA0(c); // 801CA8D4
  goto L_801CA908; // 801CA8D8
L_801CA8DC:;
  c->lr=0x801CA8E0u; f_801CC590(c); // 801CA8DC
  c->r[3]=R32(c->r[22]+0x000000F4u); // 801CA8E0
  c->r[4]=R32(c->r[27]+0x00000100u); // 801CA8E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CA8E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CA8EC
  c->ctr=c->r[12]; // 801CA8F0
  if (true) { c->lr=0x801CA8F8u; dispatch(c,c->ctr); } // 801CA8F4
  W32(c->r[27]+0x00000100u,c->r[30]); // 801CA8F8
  c->lr=0x801CA900u; f_801D76C0(c); // 801CA8FC
  c->r[3]=c->r[3]+0x00000354u; // 801CA900
  c->lr=0x801CA908u; f_80126EA0(c); // 801CA904
L_801CA908:;
  c->r[0]=R8(c->r[26]+0x00000005u); // 801CA908
  cmps(c,0,(int32_t)c->r[0],0); // 801CA90C
  if (crb(c,2)) { goto L_801CA918; } // 801CA910
  c->r[25]=0u+0x00000001u; // 801CA914
L_801CA918:;
  c->r[24]=c->r[24]+0x00000001u; // 801CA918
  c->r[31]=c->r[31]+0x00000004u; // 801CA91C
  cmps(c,0,(int32_t)c->r[24],16); // 801CA920
  if (crb(c,0)) { IRQCHK(c); goto L_801CA840; } // 801CA924
  cmps(c,0,(int32_t)c->r[25],0); // 801CA928
  if (!crb(c,2)) { goto L_801CA944; } // 801CA92C
  c->lr=0x801CA934u; f_801D76C0(c); // 801CA930
  c->r[3]=c->r[3]+0x00000354u; // 801CA934
  c->lr=0x801CA93Cu; f_80126EA0(c); // 801CA938
  c->r[3]=0u+0x00000001u; // 801CA93C
  goto L_801CA954; // 801CA940
L_801CA944:;
  c->lr=0x801CA948u; f_801D76C0(c); // 801CA944
  c->r[3]=c->r[3]+0x00000354u; // 801CA948
  c->lr=0x801CA950u; f_80126EA0(c); // 801CA94C
  c->r[3]=0u+0x00000000u; // 801CA950
L_801CA954:;
  c->r[11]=c->r[1]+0x00000030u; // 801CA954
  c->lr=0x801CA95Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CA958
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA95C
  c->lr=c->r[0]; // 801CA960
  c->r[1]=c->r[1]+0x00000030u; // 801CA964
  return; // 801CA968
}

// fn_801CA970
void f_801CA970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA970
  c->r[0]=c->lr; // 801CA974
  cmpu(c,0,c->r[4],0x00000020u); // 801CA978
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA97C
  c->r[0]=0u+0x00000000u; // 801CA980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA984
  c->r[31]=c->r[4]|c->r[4]; // 801CA988
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CA98C
  c->r[30]=c->r[3]|c->r[3]; // 801CA990
  if (crb(c,1)) { goto L_801CA99C; } // 801CA994
  c->r[0]=0u+0x00000001u; // 801CA998
L_801CA99C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CA99C
  if (!crb(c,2)) { goto L_801CA9CC; } // 801CA9A0
  c->r[3]=0u+0x803A0000u; // 801CA9A4
  c->r[5]=0u+0x803A0000u; // 801CA9A8
  c->r[6]=c->r[31]|c->r[31]; // 801CA9AC
  c->r[4]=0u+0x000002EAu; // 801CA9B0
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801CA9B4
  c->r[5]=c->r[5]+0xFFFFFC04u; // 801CA9B8
  c->r[7]=0u+0x00000000u; // 801CA9BC
  c->r[8]=0u+0x00000020u; // 801CA9C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CA9C4
  c->lr=0x801CA9CCu; f_80212260(c); // 801CA9C8
L_801CA9CC:;
  cmps(c,0,(int32_t)c->r[31],16); // 801CA9CC
  if (!crb(c,0)) { goto L_801CA9E4; } // 801CA9D0
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801CA9D4
  c->r[3]=c->r[30]+c->r[0]; // 801CA9D8
  c->r[3]=c->r[3]+0x00000140u; // 801CA9DC
  goto L_801CAA04; // 801CA9E0
L_801CA9E4:;
  cmps(c,0,(int32_t)c->r[31],32); // 801CA9E4
  c->r[3]=0u+0x00000000u; // 801CA9E8
  if (!crb(c,0)) { goto L_801CAA04; } // 801CA9EC
  c->r[0]=c->r[31]+0xFFFFFFF0u; // 801CA9F0
  c->r[3]=0u+0x805B0000u; // 801CA9F4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CA9F8
  c->r[3]=c->r[3]+0xFFFFC968u; // 801CA9FC
  c->r[3]=c->r[3]+c->r[0]; // 801CAA00
L_801CAA04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAA04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAA08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAA0C
  c->lr=c->r[0]; // 801CAA10
  c->r[1]=c->r[1]+0x00000010u; // 801CAA14
  return; // 801CAA18
}

// fn_801CAA20
void f_801CAA20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAA20
  c->r[0]=c->lr; // 801CAA24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAA28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAA2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAA30
  c->r[30]=c->r[3]|c->r[3]; // 801CAA34
  c->lr=0x801CAA3Cu; f_801D76C0(c); // 801CAA38
  c->r[3]=c->r[3]+0x00000354u; // 801CAA3C
  c->lr=0x801CAA44u; f_80126DC0(c); // 801CAA40
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801CAA44
  cmps(c,0,(int32_t)c->r[0],0); // 801CAA48
  if (!crb(c,2)) { goto L_801CAA6C; } // 801CAA4C
  c->r[3]=0u+0x803A0000u; // 801CAA50
  c->r[5]=0u+0x803A0000u; // 801CAA54
  c->r[3]=c->r[3]+0xFFFFF9E0u; // 801CAA58
  c->r[4]=0u+0x00000304u; // 801CAA5C
  c->r[5]=c->r[5]+0xFFFFFC40u; // 801CAA60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CAA64
  c->lr=0x801CAA6Cu; f_80212260(c); // 801CAA68
L_801CAA6C:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801CAA6C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAA70
  if (!crb(c,2)) { goto L_801CAA88; } // 801CAA74
  c->lr=0x801CAA7Cu; f_801D76C0(c); // 801CAA78
  c->r[3]=c->r[3]+0x00000354u; // 801CAA7C
  c->lr=0x801CAA84u; f_80126EA0(c); // 801CAA80
  goto L_801CAB3C; // 801CAA84
L_801CAA88:;
  c->r[0]=R8(c->r[30]+0x000000CDu); // 801CAA88
  cmps(c,0,(int32_t)c->r[0],0); // 801CAA8C
  if (!crb(c,2)) { goto L_801CAAA4; } // 801CAA90
  c->lr=0x801CAA98u; f_801D76C0(c); // 801CAA94
  c->r[3]=c->r[3]+0x00000354u; // 801CAA98
  c->lr=0x801CAAA0u; f_80126EA0(c); // 801CAA9C
  goto L_801CAB3C; // 801CAAA0
L_801CAAA4:;
  c->r[0]=R32(c->r[30]+0x000000DCu); // 801CAAA4
  cmps(c,0,(int32_t)c->r[0],0); // 801CAAA8
  if (!crb(c,2)) { goto L_801CAAC0; } // 801CAAAC
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CAAB0
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAAB4
  fcmp(c,0,c->f[1],c->f[0]); // 801CAAB8
  if (!crb(c,1)) { goto L_801CAACC; } // 801CAABC
L_801CAAC0:;
  c->r[3]=c->r[30]|c->r[30]; // 801CAAC0
  c->lr=0x801CAAC8u; f_801CAE00(c); // 801CAAC4
  goto L_801CAAE4; // 801CAAC8
L_801CAACC:;
  c->r[0]=R8(c->r[30]+0x000000CEu); // 801CAACC
  cmps(c,0,(int32_t)c->r[0],0); // 801CAAD0
  if (!crb(c,2)) { goto L_801CAAE4; } // 801CAAD4
  c->r[3]=c->r[30]|c->r[30]; // 801CAAD8
  c->r[4]=0u+0x00000003u; // 801CAADC
  c->lr=0x801CAAE4u; f_801CAB60(c); // 801CAAE0
L_801CAAE4:;
  c->lr=0x801CAAE8u; f_801D76C0(c); // 801CAAE4
  c->r[3]=c->r[3]+0x00000354u; // 801CAAE8
  c->lr=0x801CAAF0u; f_80126DC0(c); // 801CAAEC
  c->r[31]=0u+0x00000000u; // 801CAAF0
L_801CAAF4:;
  cmps(c,0,(int32_t)c->r[31],15); // 801CAAF4
  if (!crb(c,1)) { goto L_801CAB04; } // 801CAAF8
  c->r[3]=0u+0x00000000u; // 801CAAFC
  goto L_801CAB08; // 801CAB00
L_801CAB04:;
  c->r[3]=R32(c->r[30]+0x00000100u); // 801CAB04
L_801CAB08:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CAB08
  if (crb(c,2)) { goto L_801CAB14; } // 801CAB0C
  c->lr=0x801CAB14u; f_801CCA40(c); // 801CAB10
L_801CAB14:;
  c->r[31]=c->r[31]+0x00000001u; // 801CAB14
  c->r[30]=c->r[30]+0x00000004u; // 801CAB18
  cmps(c,0,(int32_t)c->r[31],16); // 801CAB1C
  if (crb(c,0)) { IRQCHK(c); goto L_801CAAF4; } // 801CAB20
  c->lr=0x801CAB28u; f_801D76C0(c); // 801CAB24
  c->r[3]=c->r[3]+0x00000354u; // 801CAB28
  c->lr=0x801CAB30u; f_80126EA0(c); // 801CAB2C
  c->lr=0x801CAB34u; f_801D76C0(c); // 801CAB30
  c->r[3]=c->r[3]+0x00000354u; // 801CAB34
  c->lr=0x801CAB3Cu; f_80126EA0(c); // 801CAB38
L_801CAB3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAB3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAB40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAB44
  c->lr=c->r[0]; // 801CAB48
  c->r[1]=c->r[1]+0x00000010u; // 801CAB4C
  return; // 801CAB50
}

// fn_801CAB60
void f_801CAB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAB60
  c->r[0]=c->lr; // 801CAB64
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CAB68
  c->r[11]=c->r[1]+0x00000030u; // 801CAB6C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CAB70
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CAB74
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801CAB78
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801CAB7C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801CAB80
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801CAB84
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801CAB88
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801CAB8C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801CAB90
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801CAB94
  c->lr=0x801CAB9Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CAB98
  c->r[5]=R8(c->r[3]+0x000000EAu); // 801CAB9C
  c->r[28]=0u+0x43300000u; // 801CABA0
  c->r[0]=R16(c->r[3]+0x000000ECu); // 801CABA4
  c->r[31]=c->r[3]|c->r[3]; // 801CABA8
  W32(c->r[1]+0x00000008u,c->r[28]); // 801CABAC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801CABB0
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[28]=RF64(ea);} // 801CABB4
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CABB8
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CABBC
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 801CABC0
  c->r[0]=c->r[0]^0x80000000u; // 801CABC4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CABC8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CABCC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 801CABD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CABD4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 801CABD8
  fcmp(c,0,c->f[30],c->f[1]); // 801CABDC
  if (crb(c,2)) { goto L_801CADB4; } // 801CABE0
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CABE4
  c->r[0]=c->r[4]^0x80000000u; // 801CABE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CABEC
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 801CABF0
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CABF4
  W32(c->r[1]+0x00000008u,c->r[28]); // 801CABF8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CABFC
  c->f[27]=c->ps1[27]=S(c->f[0]-c->f[28]); // 801CAC00
  goto L_801CADA0; // 801CAC04
L_801CAC08:;
  c->f[27]=c->ps1[27]=S(c->f[27]-c->f[2]); // 801CAC08
  c->r[3]=c->r[31]|c->r[31]; // 801CAC0C
  c->r[4]=0u+0x00000001u; // 801CAC10
  c->lr=0x801CAC18u; f_801CA800(c); // 801CAC14
  cmps(c,0,(int32_t)c->r[3],0); // 801CAC18
  if (crb(c,2)) { goto L_801CAD5C; } // 801CAC1C
  c->lr=0x801CAC24u; f_801D76C0(c); // 801CAC20
  c->r[3]=c->r[3]+0x00000354u; // 801CAC24
  c->lr=0x801CAC2Cu; f_80126DC0(c); // 801CAC28
  c->r[0]=R8(c->r[31]+0x000000CDu); // 801CAC2C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAC30
  if (crb(c,2)) { goto L_801CAC5C; } // 801CAC34
  cmps(c,0,(int32_t)c->r[31],0); // 801CAC38
  c->r[27]=c->r[31]|c->r[31]; // 801CAC3C
  if (crb(c,2)) { goto L_801CAC48; } // 801CAC40
  c->r[27]=c->r[31]+0x000000C0u; // 801CAC44
L_801CAC48:;
  c->lr=0x801CAC4Cu; f_801D76C0(c); // 801CAC48
  c->r[4]=c->r[27]|c->r[27]; // 801CAC4C
  c->lr=0x801CAC54u; f_801D7C80(c); // 801CAC50
  c->r[0]=0u+0x00000000u; // 801CAC54
  W8(c->r[31]+0x000000CDu,c->r[0]); // 801CAC58
L_801CAC5C:;
  c->r[0]=R8(c->r[31]+0x000000CCu); // 801CAC5C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAC60
  if (crb(c,2)) { goto L_801CAC8C; } // 801CAC64
  cmps(c,0,(int32_t)c->r[31],0); // 801CAC68
  c->r[27]=c->r[31]|c->r[31]; // 801CAC6C
  if (crb(c,2)) { goto L_801CAC78; } // 801CAC70
  c->r[27]=c->r[31]+0x000000B4u; // 801CAC74
L_801CAC78:;
  c->lr=0x801CAC7Cu; f_801BEEC0(c); // 801CAC78
  c->r[4]=c->r[27]|c->r[27]; // 801CAC7C
  c->lr=0x801CAC84u; f_801BF030(c); // 801CAC80
  c->r[0]=0u+0x00000000u; // 801CAC84
  W8(c->r[31]+0x000000CCu,c->r[0]); // 801CAC88
L_801CAC8C:;
  c->r[26]=c->r[31]|c->r[31]; // 801CAC8C
  c->r[27]=0u+0x00000000u; // 801CAC90
  c->r[28]=0u+0x803A0000u; // 801CAC94
  c->r[29]=0u+0x803A0000u; // 801CAC98
  c->r[30]=0u+0x00000000u; // 801CAC9C
L_801CACA0:;
  c->lr=0x801CACA4u; f_801D76C0(c); // 801CACA0
  c->r[3]=c->r[3]+0x00000354u; // 801CACA4
  c->lr=0x801CACACu; f_80126DC0(c); // 801CACA8
  cmpu(c,0,c->r[27],0x0000000Fu); // 801CACAC
  c->r[0]=0u+0x00000000u; // 801CACB0
  if (crb(c,1)) { goto L_801CACBC; } // 801CACB4
  c->r[0]=0u+0x00000001u; // 801CACB8
L_801CACBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CACBC
  if (!crb(c,2)) { goto L_801CACE4; } // 801CACC0
  c->r[6]=c->r[27]|c->r[27]; // 801CACC4
  c->r[3]=c->r[28]+0xFFFFF9E0u; // 801CACC8
  c->r[5]=c->r[29]+0xFFFFF9F4u; // 801CACCC
  c->r[4]=0u+0x00000261u; // 801CACD0
  c->r[7]=0u+0x00000000u; // 801CACD4
  c->r[8]=0u+0x00000010u; // 801CACD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CACDC
  c->lr=0x801CACE4u; f_80212260(c); // 801CACE0
L_801CACE4:;
  cmps(c,0,(int32_t)c->r[27],15); // 801CACE4
  if (!crb(c,1)) { goto L_801CACF4; } // 801CACE8
  c->r[3]=0u+0x00000000u; // 801CACEC
  goto L_801CACF8; // 801CACF0
L_801CACF4:;
  c->r[3]=R32(c->r[26]+0x00000100u); // 801CACF4
L_801CACF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CACF8
  if (!crb(c,2)) { goto L_801CAD10; } // 801CACFC
  c->lr=0x801CAD04u; f_801D76C0(c); // 801CAD00
  c->r[3]=c->r[3]+0x00000354u; // 801CAD04
  c->lr=0x801CAD0Cu; f_80126EA0(c); // 801CAD08
  goto L_801CAD3C; // 801CAD0C
L_801CAD10:;
  c->lr=0x801CAD14u; f_801CC590(c); // 801CAD10
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801CAD14
  c->r[4]=R32(c->r[26]+0x00000100u); // 801CAD18
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CAD1C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CAD20
  c->ctr=c->r[12]; // 801CAD24
  if (true) { c->lr=0x801CAD2Cu; dispatch(c,c->ctr); } // 801CAD28
  W32(c->r[26]+0x00000100u,c->r[30]); // 801CAD2C
  c->lr=0x801CAD34u; f_801D76C0(c); // 801CAD30
  c->r[3]=c->r[3]+0x00000354u; // 801CAD34
  c->lr=0x801CAD3Cu; f_80126EA0(c); // 801CAD38
L_801CAD3C:;
  c->r[27]=c->r[27]+0x00000001u; // 801CAD3C
  c->r[26]=c->r[26]+0x00000004u; // 801CAD40
  cmps(c,0,(int32_t)c->r[27],16); // 801CAD44
  if (crb(c,0)) { IRQCHK(c); goto L_801CACA0; } // 801CAD48
  c->lr=0x801CAD50u; f_801D76C0(c); // 801CAD4C
  c->r[3]=c->r[3]+0x00000354u; // 801CAD50
  c->lr=0x801CAD58u; f_80126EA0(c); // 801CAD54
  goto L_801CADB4; // 801CAD58
L_801CAD5C:;
  c->r[3]=R8(c->r[31]+0x000000EAu); // 801CAD5C
  c->r[0]=R16(c->r[31]+0x000000ECu); // 801CAD60
  W32(c->r[1]+0x00000008u,c->r[28]); // 801CAD64
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801CAD68
  c->r[4]=R32(c->r[31]+0x00000160u); // 801CAD6C
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAD70
  c->r[3]=c->r[4]+0x00000001u; // 801CAD74
  W32(c->r[31]+0x00000160u,c->r[3]); // 801CAD78
  c->r[0]=c->r[0]^0x80000000u; // 801CAD7C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CAD80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CAD84
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[28]); // 801CAD88
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CAD8C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[29]); // 801CAD90
  fcmp(c,0,c->f[30],c->f[1]); // 801CAD94
  if (crb(c,2)) { goto L_801CADB4; } // 801CAD98
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[1]); // 801CAD9C
L_801CADA0:;
  fcmp(c,0,c->f[2],c->f[27]); // 801CADA0
  if (crb(c,0)) { IRQCHK(c); goto L_801CAC08; } // 801CADA4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[27]); // 801CADA8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 801CADAC
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 801CADB0
L_801CADB4:;
  c->r[11]=c->r[1]+0x00000030u; // 801CADB4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801CADB8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CADBC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801CADC0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801CADC4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801CADC8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801CADCC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801CADD0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801CADD4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801CADD8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801CADDC
  c->lr=0x801CADE4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CADE0
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CADE4
  c->lr=c->r[0]; // 801CADE8
  c->r[1]=c->r[1]+0x00000080u; // 801CADEC
  return; // 801CADF0
}

// fn_801CAE00
void f_801CAE00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAE00
  c->r[0]=c->lr; // 801CAE04
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CAE08
  c->r[11]=c->r[1]+0x00000030u; // 801CAE0C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CAE10
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CAE14
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801CAE18
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801CAE1C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801CAE20
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801CAE24
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801CAE28
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801CAE2C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801CAE30
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801CAE34
  c->lr=0x801CAE3Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CAE38
  c->r[31]=0u+0x803A0000u; // 801CAE3C
  c->r[30]=c->r[3]|c->r[3]; // 801CAE40
  c->r[31]=c->r[31]+0xFFFFF9E0u; // 801CAE44
  c->r[27]=0u+0x00000000u; // 801CAE48
  c->r[29]=0u+0x00000000u; // 801CAE4C
L_801CAE50:;
  c->r[3]=c->r[30]+c->r[29]; // 801CAE50
  c->r[28]=R32(c->r[3]+0x00000100u); // 801CAE54
  cmps(c,0,(int32_t)c->r[28],0); // 801CAE58
  if (crb(c,2)) { goto L_801CAE74; } // 801CAE5C
  c->r[3]=c->r[28]|c->r[28]; // 801CAE60
  c->r[4]=0u+0x0000007Fu; // 801CAE64
  c->lr=0x801CAE6Cu; f_801CC8C0(c); // 801CAE68
  c->r[3]=c->r[28]|c->r[28]; // 801CAE6C
  c->lr=0x801CAE74u; f_801CD010(c); // 801CAE70
L_801CAE74:;
  c->r[27]=c->r[27]+0x00000001u; // 801CAE74
  c->r[29]=c->r[29]+0x00000004u; // 801CAE78
  cmps(c,0,(int32_t)c->r[27],16); // 801CAE7C
  if (crb(c,0)) { IRQCHK(c); goto L_801CAE50; } // 801CAE80
  {uint32_t ea=c->r[2]+0xFFFFA870u; c->f[29]=RF64(ea);} // 801CAE84
  c->r[27]=0u+0x00000000u; // 801CAE88
  {uint32_t ea=c->r[2]+0xFFFFA878u; c->f[30]=c->ps1[30]=RF32(ea);} // 801CAE8C
  c->r[29]=0u+0x43300000u; // 801CAE90
  {uint32_t ea=c->r[2]+0xFFFFA868u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CAE94
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801CAE98
  goto L_801CB070; // 801CAE9C
L_801CAEA0:;
  cmps(c,0,(int32_t)c->r[27],768); // 801CAEA0
  if (!crb(c,0)) { goto L_801CB0C4; } // 801CAEA4
  cmps(c,0,(int32_t)c->r[4],0); // 801CAEA8
  if (crb(c,2)) { goto L_801CAEC0; } // 801CAEAC
  c->r[3]=R32(c->r[30]+0x000000DCu); // 801CAEB0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CAEB4
  W32(c->r[30]+0x000000DCu,c->r[0]); // 801CAEB8
  goto L_801CAF18; // 801CAEBC
L_801CAEC0:;
  c->r[3]=R8(c->r[30]+0x000000EAu); // 801CAEC0
  c->r[0]=R16(c->r[30]+0x000000ECu); // 801CAEC4
  W32(c->r[1]+0x00000008u,c->r[29]); // 801CAEC8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801CAECC
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAED0
  c->r[0]=c->r[0]^0x80000000u; // 801CAED4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CAED8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801CAEDC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 801CAEE0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CAEE4
  c->f[27]=c->ps1[27]=S(c->f[0]/c->f[30]); // 801CAEE8
  fcmp(c,0,c->f[27],c->f[28]); // 801CAEEC
  if (crb(c,1)) { goto L_801CAF08; } // 801CAEF0
  c->r[3]=c->r[31]+0x00000000u; // 801CAEF4
  c->r[5]=c->r[31]+0x00000284u; // 801CAEF8
  c->r[4]=0u+0x00000358u; // 801CAEFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CAF00
  c->lr=0x801CAF08u; f_80212260(c); // 801CAF04
L_801CAF08:;
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[27]); // 801CAF08
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CAF0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CAF10
  {uint32_t ea=c->r[30]+0x000000E0u; WF32(ea,c->f[0]);} // 801CAF14
L_801CAF18:;
  c->r[3]=c->r[30]|c->r[30]; // 801CAF18
  c->r[4]=0u+0x00000000u; // 801CAF1C
  c->lr=0x801CAF24u; f_801CA800(c); // 801CAF20
  cmps(c,0,(int32_t)c->r[3],0); // 801CAF24
  if (crb(c,2)) { goto L_801CB060; } // 801CAF28
  c->lr=0x801CAF30u; f_801D76C0(c); // 801CAF2C
  c->r[3]=c->r[3]+0x00000354u; // 801CAF30
  c->lr=0x801CAF38u; f_80126DC0(c); // 801CAF34
  c->r[0]=R8(c->r[30]+0x000000CDu); // 801CAF38
  cmps(c,0,(int32_t)c->r[0],0); // 801CAF3C
  if (crb(c,2)) { goto L_801CAF68; } // 801CAF40
  cmps(c,0,(int32_t)c->r[30],0); // 801CAF44
  c->r[28]=c->r[30]|c->r[30]; // 801CAF48
  if (crb(c,2)) { goto L_801CAF54; } // 801CAF4C
  c->r[28]=c->r[30]+0x000000C0u; // 801CAF50
L_801CAF54:;
  c->lr=0x801CAF58u; f_801D76C0(c); // 801CAF54
  c->r[4]=c->r[28]|c->r[28]; // 801CAF58
  c->lr=0x801CAF60u; f_801D7C80(c); // 801CAF5C
  c->r[0]=0u+0x00000000u; // 801CAF60
  W8(c->r[30]+0x000000CDu,c->r[0]); // 801CAF64
L_801CAF68:;
  c->r[0]=R8(c->r[30]+0x000000CCu); // 801CAF68
  cmps(c,0,(int32_t)c->r[0],0); // 801CAF6C
  if (crb(c,2)) { goto L_801CAF98; } // 801CAF70
  cmps(c,0,(int32_t)c->r[30],0); // 801CAF74
  c->r[28]=c->r[30]|c->r[30]; // 801CAF78
  if (crb(c,2)) { goto L_801CAF84; } // 801CAF7C
  c->r[28]=c->r[30]+0x000000B4u; // 801CAF80
L_801CAF84:;
  c->lr=0x801CAF88u; f_801BEEC0(c); // 801CAF84
  c->r[4]=c->r[28]|c->r[28]; // 801CAF88
  c->lr=0x801CAF90u; f_801BF030(c); // 801CAF8C
  c->r[0]=0u+0x00000000u; // 801CAF90
  W8(c->r[30]+0x000000CCu,c->r[0]); // 801CAF94
L_801CAF98:;
  c->r[27]=c->r[30]|c->r[30]; // 801CAF98
  c->r[28]=0u+0x00000000u; // 801CAF9C
  c->r[29]=0u+0x00000000u; // 801CAFA0
L_801CAFA4:;
  c->lr=0x801CAFA8u; f_801D76C0(c); // 801CAFA4
  c->r[3]=c->r[3]+0x00000354u; // 801CAFA8
  c->lr=0x801CAFB0u; f_80126DC0(c); // 801CAFAC
  cmpu(c,0,c->r[28],0x0000000Fu); // 801CAFB0
  c->r[0]=0u+0x00000000u; // 801CAFB4
  if (crb(c,1)) { goto L_801CAFC0; } // 801CAFB8
  c->r[0]=0u+0x00000001u; // 801CAFBC
L_801CAFC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CAFC0
  if (!crb(c,2)) { goto L_801CAFE8; } // 801CAFC4
  c->r[6]=c->r[28]|c->r[28]; // 801CAFC8
  c->r[3]=c->r[31]+0x00000000u; // 801CAFCC
  c->r[5]=c->r[31]+0x00000014u; // 801CAFD0
  c->r[4]=0u+0x00000261u; // 801CAFD4
  c->r[7]=0u+0x00000000u; // 801CAFD8
  c->r[8]=0u+0x00000010u; // 801CAFDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CAFE0
  c->lr=0x801CAFE8u; f_80212260(c); // 801CAFE4
L_801CAFE8:;
  cmps(c,0,(int32_t)c->r[28],15); // 801CAFE8
  if (!crb(c,1)) { goto L_801CAFF8; } // 801CAFEC
  c->r[3]=0u+0x00000000u; // 801CAFF0
  goto L_801CAFFC; // 801CAFF4
L_801CAFF8:;
  c->r[3]=R32(c->r[27]+0x00000100u); // 801CAFF8
L_801CAFFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CAFFC
  if (!crb(c,2)) { goto L_801CB014; } // 801CB000
  c->lr=0x801CB008u; f_801D76C0(c); // 801CB004
  c->r[3]=c->r[3]+0x00000354u; // 801CB008
  c->lr=0x801CB010u; f_80126EA0(c); // 801CB00C
  goto L_801CB040; // 801CB010
L_801CB014:;
  c->lr=0x801CB018u; f_801CC590(c); // 801CB014
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801CB018
  c->r[4]=R32(c->r[27]+0x00000100u); // 801CB01C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB020
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CB024
  c->ctr=c->r[12]; // 801CB028
  if (true) { c->lr=0x801CB030u; dispatch(c,c->ctr); } // 801CB02C
  W32(c->r[27]+0x00000100u,c->r[29]); // 801CB030
  c->lr=0x801CB038u; f_801D76C0(c); // 801CB034
  c->r[3]=c->r[3]+0x00000354u; // 801CB038
  c->lr=0x801CB040u; f_80126EA0(c); // 801CB03C
L_801CB040:;
  c->r[28]=c->r[28]+0x00000001u; // 801CB040
  c->r[27]=c->r[27]+0x00000004u; // 801CB044
  cmps(c,0,(int32_t)c->r[28],16); // 801CB048
  if (crb(c,0)) { IRQCHK(c); goto L_801CAFA4; } // 801CB04C
  c->lr=0x801CB054u; f_801D76C0(c); // 801CB050
  c->r[3]=c->r[3]+0x00000354u; // 801CB054
  c->lr=0x801CB05Cu; f_80126EA0(c); // 801CB058
  goto L_801CB0C4; // 801CB05C
L_801CB060:;
  c->r[3]=R32(c->r[30]+0x00000160u); // 801CB060
  c->r[27]=c->r[27]+0x00000001u; // 801CB064
  c->r[0]=c->r[3]+0x00000001u; // 801CB068
  W32(c->r[30]+0x00000160u,c->r[0]); // 801CB06C
L_801CB070:;
  c->r[4]=R32(c->r[30]+0x000000DCu); // 801CB070
  cmps(c,0,(int32_t)c->r[4],0); // 801CB074
  if (!crb(c,2)) { IRQCHK(c); goto L_801CAEA0; } // 801CB078
  c->r[3]=R8(c->r[30]+0x000000EAu); // 801CB07C
  c->r[0]=R16(c->r[30]+0x000000ECu); // 801CB080
  W32(c->r[1]+0x00000008u,c->r[29]); // 801CB084
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801CB088
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB08C
  {uint32_t ea=c->r[30]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB090
  c->r[0]=c->r[0]^0x80000000u; // 801CB094
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CB098
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801CB09C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[29]); // 801CB0A0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801CB0A4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 801CB0A8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CB0AC
  fcmp(c,0,c->f[0],c->f[31]); // 801CB0B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CB0B4
  if (crb(c,2)) { IRQCHK(c); goto L_801CAEA0; } // 801CB0B8
  {uint32_t ea=c->r[2]+0xFFFFA86Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB0BC
  {uint32_t ea=c->r[30]+0x000000E0u; WF32(ea,c->f[0]);} // 801CB0C0
L_801CB0C4:;
  c->r[11]=c->r[1]+0x00000030u; // 801CB0C4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801CB0C8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CB0CC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801CB0D0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801CB0D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801CB0D8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801CB0DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801CB0E0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801CB0E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 801CB0E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801CB0EC
  c->lr=0x801CB0F4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB0F0
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CB0F4
  c->lr=c->r[0]; // 801CB0F8
  c->r[1]=c->r[1]+0x00000080u; // 801CB0FC
  return; // 801CB100
}

// NoteOn__Q44nw4r3snd6detail9SeqPlayerFiRCQ44nw4r3snd6detail10NoteOnInfo
void f_801CB110(Ctx* __restrict c) {
  trace_call(0x801CB110u);
  c->r[7]=c->r[3]|c->r[3]; // 801CB110
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CB114
  c->r[0]=c->r[4]|c->r[4]; // 801CB118
  c->r[6]=c->r[5]|c->r[5]; // 801CB11C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB120
  c->r[4]=c->r[7]|c->r[7]; // 801CB124
  c->r[5]=c->r[0]|c->r[0]; // 801CB128
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CB12C
  c->ctr=c->r[12]; // 801CB130
  if (true) { dispatch(c,c->ctr); return; } // 801CB134
}

// fn_801CB140
void f_801CB140(Ctx* __restrict c) {
  return; // 801CB140
}

// fn_801CB150
void f_801CB150(Ctx* __restrict c) {
  return; // 801CB150
}

// fn_801CB160
void f_801CB160(Ctx* __restrict c) {
  return; // 801CB160
}

// fn_801CB170
void f_801CB170(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801CB170
  f_801C92D0(c); return; // 801CB174
}

// fn_801CB180
void f_801CB180(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF40u; // 801CB180
  f_801C92D0(c); return; // 801CB184
}

// fn_801CB190
void f_801CB190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB190
  c->r[0]=c->lr; // 801CB194
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB19C
  c->r[31]=c->r[4]|c->r[4]; // 801CB1A0
  c->r[4]=c->r[5]|c->r[5]; // 801CB1A4
  c->r[5]=c->r[6]|c->r[6]; // 801CB1A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB1AC
  c->r[30]=c->r[3]|c->r[3]; // 801CB1B0
  c->lr=0x801CB1B8u; f_801BB8E0(c); // 801CB1B4
  c->r[4]=0u+0x803A0000u; // 801CB1B8
  c->r[3]=c->r[30]+0x00000110u; // 801CB1BC
  c->r[4]=c->r[4]+0xFFFFFF38u; // 801CB1C0
  W32(c->r[30]+0x00000000u,c->r[4]); // 801CB1C4
  c->lr=0x801CB1CCu; f_801C9100(c); // 801CB1C8
  c->r[4]=0u+0x803A0000u; // 801CB1CC
  c->r[0]=0u+0x00000000u; // 801CB1D0
  W8(c->r[30]+0x00000288u,c->r[0]); // 801CB1D4
  c->r[4]=c->r[4]+0xFFFFFF70u; // 801CB1D8
  c->r[3]=c->r[30]|c->r[30]; // 801CB1DC
  W8(c->r[30]+0x00000289u,c->r[0]); // 801CB1E0
  W32(c->r[30]+0x00000274u,c->r[0]); // 801CB1E4
  W32(c->r[30]+0x00000278u,c->r[31]); // 801CB1E8
  W32(c->r[30]+0x00000284u,c->r[0]); // 801CB1EC
  W32(c->r[30]+0x0000028Cu,c->r[0]); // 801CB1F0
  W32(c->r[30]+0x00000494u,c->r[0]); // 801CB1F4
  W32(c->r[30]+0x00000498u,c->r[0]); // 801CB1F8
  W8(c->r[30]+0x0000049Cu,c->r[0]); // 801CB1FC
  W32(c->r[30]+0x00000490u,c->r[4]); // 801CB200
  W32(c->r[30]+0x000004A0u,c->r[0]); // 801CB204
  W32(c->r[30]+0x000004A4u,c->r[0]); // 801CB208
  W32(c->r[30]+0x000004ACu,c->r[0]); // 801CB20C
  W32(c->r[30]+0x000004B0u,c->r[0]); // 801CB210
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB214
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB218
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB21C
  c->lr=c->r[0]; // 801CB220
  c->r[1]=c->r[1]+0x00000010u; // 801CB224
  return; // 801CB228
}

