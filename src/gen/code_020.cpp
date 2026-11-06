#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801CB230
void f_801CB230(Ctx* __restrict c) {
  trace_call(0x801CB230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB230
  c->r[0]=c->lr; // 801CB234
  cmps(c,0,(int32_t)c->r[3],0); // 801CB238
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB23C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB240
  c->r[31]=c->r[4]|c->r[4]; // 801CB244
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB248
  c->r[30]=c->r[3]|c->r[3]; // 801CB24C
  if (crb(c,2)) { goto L_801CB26C; } // 801CB250
  c->r[4]=0u+0x00000000u; // 801CB254
  c->lr=0x801CB25Cu; f_801DC9B0(c); // 801CB258
  cmps(c,0,(int32_t)c->r[31],0); // 801CB25C
  if (!crb(c,1)) { goto L_801CB26C; } // 801CB260
  c->r[3]=c->r[30]|c->r[30]; // 801CB264
  c->lr=0x801CB26Cu; f_802E61AC(c); // 801CB268
L_801CB26C:;
  c->r[3]=c->r[30]|c->r[30]; // 801CB26C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB270
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB274
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB278
  c->lr=c->r[0]; // 801CB27C
  c->r[1]=c->r[1]+0x00000010u; // 801CB280
  return; // 801CB284
}

// fn_801CB290
void f_801CB290(Ctx* __restrict c) {
  trace_call(0x801CB290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB290
  c->r[0]=c->lr; // 801CB294
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB29C
  c->r[31]=c->r[3]|c->r[3]; // 801CB2A0
  c->lr=0x801CB2A8u; f_801BBA50(c); // 801CB2A4
  c->r[0]=0u+0x00000000u; // 801CB2A8
  W32(c->r[31]+0x00000284u,c->r[0]); // 801CB2AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB2B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB2B4
  c->lr=c->r[0]; // 801CB2B8
  c->r[1]=c->r[1]+0x00000010u; // 801CB2BC
  return; // 801CB2C0
}

// fn_801CB2D0
void f_801CB2D0(Ctx* __restrict c) {
  trace_call(0x801CB2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB2D0
  c->r[0]=c->lr; // 801CB2D4
  cmps(c,0,(int32_t)c->r[6],0); // 801CB2D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB2DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB2E0
  c->r[31]=c->r[6]|c->r[6]; // 801CB2E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB2E8
  c->r[30]=c->r[5]|c->r[5]; // 801CB2EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB2F0
  c->r[29]=c->r[4]|c->r[4]; // 801CB2F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CB2F8
  c->r[28]=c->r[3]|c->r[3]; // 801CB2FC
  if (!crb(c,2)) { goto L_801CB320; } // 801CB300
  c->r[3]=0u+0x803A0000u; // 801CB304
  c->r[5]=0u+0x803A0000u; // 801CB308
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CB30C
  c->r[4]=0u+0x0000005Fu; // 801CB310
  c->r[5]=c->r[5]+0xFFFFFD3Cu; // 801CB314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB318
  c->lr=0x801CB320u; f_80212260(c); // 801CB31C
L_801CB320:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801CB320
  c->r[3]=c->r[28]|c->r[28]; // 801CB324
  c->r[12]=R32(c->r[12]+0x00000020u); // 801CB328
  c->ctr=c->r[12]; // 801CB32C
  if (true) { c->lr=0x801CB334u; dispatch(c,c->ctr); } // 801CB330
  c->r[3]=c->r[28]|c->r[28]; // 801CB334
  c->lr=0x801CB33Cu; f_801BD130(c); // 801CB338
  c->r[6]=c->r[3]|c->r[3]; // 801CB33C
  c->r[4]=c->r[29]|c->r[29]; // 801CB340
  c->r[5]=c->r[30]|c->r[30]; // 801CB344
  c->r[7]=c->r[31]|c->r[31]; // 801CB348
  c->r[3]=c->r[28]+0x00000110u; // 801CB34C
  c->lr=0x801CB354u; f_801C95C0(c); // 801CB350
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB358
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB35C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB360
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CB364
  c->lr=c->r[0]; // 801CB368
  c->r[1]=c->r[1]+0x00000020u; // 801CB36C
  return; // 801CB370
}

// fn_801CB380
void f_801CB380(Ctx* __restrict c) {
  trace_call(0x801CB380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB380
  c->r[0]=c->lr; // 801CB384
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB388
  c->r[11]=c->r[1]+0x00000020u; // 801CB38C
  c->lr=0x801CB394u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB390
  cmps(c,0,(int32_t)c->r[4],0); // 801CB394
  c->r[27]=c->r[3]|c->r[3]; // 801CB398
  c->r[28]=c->r[4]|c->r[4]; // 801CB39C
  c->r[29]=c->r[5]|c->r[5]; // 801CB3A0
  c->r[30]=c->r[6]|c->r[6]; // 801CB3A4
  c->r[31]=c->r[7]|c->r[7]; // 801CB3A8
  if (!crb(c,2)) { goto L_801CB3CC; } // 801CB3AC
  c->r[3]=0u+0x803A0000u; // 801CB3B0
  c->r[5]=0u+0x803A0000u; // 801CB3B4
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CB3B8
  c->r[4]=0u+0x0000007Cu; // 801CB3BC
  c->r[5]=c->r[5]+0xFFFFFD68u; // 801CB3C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB3C4
  c->lr=0x801CB3CCu; f_80212260(c); // 801CB3C8
L_801CB3CC:;
  c->r[4]=c->r[28]|c->r[28]; // 801CB3CC
  c->r[5]=c->r[29]|c->r[29]; // 801CB3D0
  c->r[3]=c->r[27]+0x00000110u; // 801CB3D4
  c->lr=0x801CB3DCu; f_801C98B0(c); // 801CB3D8
  cmps(c,0,(int32_t)c->r[31],0); // 801CB3DC
  if (!crb(c,1)) { goto L_801CB3F4; } // 801CB3E0
  c->r[4]=c->r[30]|c->r[30]; // 801CB3E4
  c->r[5]=c->r[31]|c->r[31]; // 801CB3E8
  c->r[3]=c->r[27]+0x00000110u; // 801CB3EC
  c->lr=0x801CB3F4u; f_801C9BD0(c); // 801CB3F0
L_801CB3F4:;
  c->r[0]=0u+0x00000001u; // 801CB3F4
  W8(c->r[27]+0x00000289u,c->r[0]); // 801CB3F8
  c->r[11]=c->r[1]+0x00000020u; // 801CB3FC
  c->lr=0x801CB404u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB400
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB404
  c->lr=c->r[0]; // 801CB408
  c->r[1]=c->r[1]+0x00000020u; // 801CB40C
  return; // 801CB410
}

// fn_801CB420
void f_801CB420(Ctx* __restrict c) {
  trace_call(0x801CB420u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB420
  c->r[0]=c->lr; // 801CB424
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB428
  c->r[0]=0u+0x00000001u; // 801CB42C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB430
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB434
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB438
  c->r[29]=c->r[3]|c->r[3]; // 801CB43C
  c->r[30]=R32(c->r[3]+0x00000004u); // 801CB440
  W32(c->r[3]+0x0000028Cu,c->r[4]); // 801CB444
  cmps(c,0,(int32_t)c->r[30],0); // 801CB448
  W32(c->r[3]+0x0000027Cu,c->r[5]); // 801CB44C
  W32(c->r[3]+0x00000280u,c->r[6]); // 801CB450
  W32(c->r[3]+0x00000284u,c->r[7]); // 801CB454
  W8(c->r[3]+0x00000288u,c->r[0]); // 801CB458
  if (!crb(c,2)) { goto L_801CB468; } // 801CB45C
  c->r[0]=0u+0x00000000u; // 801CB460
  goto L_801CB4DC; // 801CB464
L_801CB468:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CB468
  c->r[3]=c->r[4]|c->r[4]; // 801CB46C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CB470
  c->ctr=c->r[12]; // 801CB474
  if (true) { c->lr=0x801CB47Cu; dispatch(c,c->ctr); } // 801CB478
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CB47C
  c->r[31]=c->r[3]|c->r[3]; // 801CB480
  c->r[3]=c->r[30]|c->r[30]; // 801CB484
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CB488
  c->r[4]=c->r[31]|c->r[31]; // 801CB48C
  c->ctr=c->r[12]; // 801CB490
  if (true) { c->lr=0x801CB498u; dispatch(c,c->ctr); } // 801CB494
  cmps(c,0,(int32_t)c->r[3],0); // 801CB498
  if (!crb(c,2)) { goto L_801CB4A8; } // 801CB49C
  c->r[0]=0u+0x00000000u; // 801CB4A0
  goto L_801CB4DC; // 801CB4A4
L_801CB4A8:;
  c->r[0]=R32(c->r[29]+0x0000028Cu); // 801CB4A8
  c->r[4]=0u+0x801D0000u; // 801CB4AC
  c->r[4]=c->r[4]+0xFFFFB520u; // 801CB4B0
  W32(c->r[29]+0x000004A0u,c->r[0]); // 801CB4B4
  W32(c->r[29]+0x000004A4u,c->r[3]); // 801CB4B8
  W32(c->r[29]+0x000004A8u,c->r[31]); // 801CB4BC
  W32(c->r[29]+0x000004ACu,c->r[4]); // 801CB4C0
  W32(c->r[29]+0x000004B0u,c->r[29]); // 801CB4C4
  c->lr=0x801CB4CCu; f_801DCA40(c); // 801CB4C8
  c->r[4]=c->r[29]+0x00000490u; // 801CB4CC
  c->r[5]=0u+0x00000001u; // 801CB4D0
  c->lr=0x801CB4D8u; f_801DCBD0(c); // 801CB4D4
  c->r[0]=0u+0x00000001u; // 801CB4D8
L_801CB4DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CB4DC
  if (!crb(c,2)) { goto L_801CB4F8; } // 801CB4E0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CB4E4
  c->r[3]=c->r[29]|c->r[29]; // 801CB4E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CB4EC
  c->ctr=c->r[12]; // 801CB4F0
  if (true) { c->lr=0x801CB4F8u; dispatch(c,c->ctr); } // 801CB4F4
L_801CB4F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB4F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB4FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB500
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB504
  c->lr=c->r[0]; // 801CB508
  c->r[1]=c->r[1]+0x00000020u; // 801CB50C
  return; // 801CB510
}

// fn_801CB520
void f_801CB520(Ctx* __restrict c) {
  trace_call(0x801CB520u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB520
  c->r[0]=c->lr; // 801CB524
  cmps(c,0,(int32_t)c->r[5],0); // 801CB528
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB52C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB530
  c->r[31]=0u+0x803A0000u; // 801CB534
  c->r[31]=c->r[31]+0xFFFFFD28u; // 801CB538
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB53C
  c->r[30]=c->r[5]|c->r[5]; // 801CB540
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB544
  c->r[29]=c->r[4]|c->r[4]; // 801CB548
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CB54C
  c->r[28]=c->r[3]|c->r[3]; // 801CB550
  if (!crb(c,2)) { goto L_801CB56C; } // 801CB554
  c->r[3]=c->r[31]+0x00000000u; // 801CB558
  c->r[5]=c->r[31]+0x00000068u; // 801CB55C
  c->r[4]=0u+0x000000B2u; // 801CB560
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB564
  c->lr=0x801CB56Cu; f_80212260(c); // 801CB568
L_801CB56C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CB56C
  c->r[0]=0u+0x00000000u; // 801CB570
  W8(c->r[30]+0x00000288u,c->r[0]); // 801CB574
  if (!crb(c,2)) { goto L_801CB58C; } // 801CB578
  c->r[3]=c->r[30]|c->r[30]; // 801CB57C
  c->r[4]=0u+0x00000000u; // 801CB580
  c->lr=0x801CB588u; f_801BBBD0(c); // 801CB584
  goto L_801CB5D8; // 801CB588
L_801CB58C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CB58C
  if (!crb(c,2)) { goto L_801CB5A8; } // 801CB590
  c->r[3]=c->r[31]+0x00000000u; // 801CB594
  c->r[5]=c->r[31]+0x00000040u; // 801CB598
  c->r[4]=0u+0x000000BDu; // 801CB59C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB5A0
  c->lr=0x801CB5A8u; f_80212260(c); // 801CB5A4
L_801CB5A8:;
  c->r[5]=R32(c->r[30]+0x0000027Cu); // 801CB5A8
  c->r[4]=c->r[29]|c->r[29]; // 801CB5AC
  c->r[3]=c->r[30]+0x00000110u; // 801CB5B0
  c->lr=0x801CB5B8u; f_801C98B0(c); // 801CB5B4
  c->r[5]=R32(c->r[30]+0x00000284u); // 801CB5B8
  cmps(c,0,(int32_t)c->r[5],0); // 801CB5BC
  if (!crb(c,1)) { goto L_801CB5D0; } // 801CB5C0
  c->r[4]=R32(c->r[30]+0x00000280u); // 801CB5C4
  c->r[3]=c->r[30]+0x00000110u; // 801CB5C8
  c->lr=0x801CB5D0u; f_801C9BD0(c); // 801CB5CC
L_801CB5D0:;
  c->r[0]=0u+0x00000001u; // 801CB5D0
  W8(c->r[30]+0x00000289u,c->r[0]); // 801CB5D4
L_801CB5D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB5D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB5DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB5E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB5E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CB5E8
  c->lr=c->r[0]; // 801CB5EC
  c->r[1]=c->r[1]+0x00000020u; // 801CB5F0
  return; // 801CB5F4
}

// fn_801CB600
void f_801CB600(Ctx* __restrict c) {
  trace_call(0x801CB600u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB600
  c->r[0]=c->lr; // 801CB604
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB608
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB60C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB610
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB614
  c->r[29]=c->r[3]|c->r[3]; // 801CB618
  c->r[0]=R8(c->r[3]+0x00000288u); // 801CB61C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB620
  if (crb(c,2)) { goto L_801CB634; } // 801CB624
  c->lr=0x801CB62Cu; f_801DCA40(c); // 801CB628
  c->r[4]=c->r[29]+0x00000490u; // 801CB62C
  c->lr=0x801CB634u; f_801DD230(c); // 801CB630
L_801CB634:;
  c->r[3]=R32(c->r[29]+0x0000028Cu); // 801CB634
  cmps(c,0,(int32_t)c->r[3],0); // 801CB638
  if (crb(c,2)) { goto L_801CB658; } // 801CB63C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CB640
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CB644
  c->ctr=c->r[12]; // 801CB648
  if (true) { c->lr=0x801CB650u; dispatch(c,c->ctr); } // 801CB64C
  c->r[0]=0u+0x00000000u; // 801CB650
  W32(c->r[29]+0x0000028Cu,c->r[0]); // 801CB654
L_801CB658:;
  c->r[3]=c->r[29]|c->r[29]; // 801CB658
  c->lr=0x801CB660u; f_801BCB40(c); // 801CB65C
  cmps(c,0,(int32_t)c->r[29],0); // 801CB660
  c->r[30]=R32(c->r[29]+0x00000278u); // 801CB664
  if (!crb(c,2)) { goto L_801CB688; } // 801CB668
  c->r[3]=0u+0x803A0000u; // 801CB66C
  c->r[5]=0u+0x803A0000u; // 801CB670
  c->r[3]=c->r[3]+0x00000010u; // 801CB674
  c->r[4]=0u+0x0000009Eu; // 801CB678
  c->r[5]=c->r[5]+0xFFFFFFE8u; // 801CB67C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB680
  c->lr=0x801CB688u; f_80212260(c); // 801CB684
L_801CB688:;
  c->r[31]=c->r[30]+0x00000010u; // 801CB688
  c->r[3]=c->r[31]|c->r[31]; // 801CB68C
  c->lr=0x801CB694u; f_80126DC0(c); // 801CB690
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CB694
  cmps(c,0,(int32_t)c->r[0],0); // 801CB698
  if (!crb(c,2)) { goto L_801CB6AC; } // 801CB69C
  c->r[3]=c->r[31]|c->r[31]; // 801CB6A0
  c->lr=0x801CB6A8u; f_80126EA0(c); // 801CB6A4
  goto L_801CB708; // 801CB6A8
L_801CB6AC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CB6AC
  if (!crb(c,2)) { goto L_801CB6D0; } // 801CB6B0
  c->r[3]=0u+0x803A0000u; // 801CB6B4
  c->r[5]=0u+0x803A0000u; // 801CB6B8
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801CB6BC
  c->r[4]=0u+0x00000233u; // 801CB6C0
  c->r[5]=c->r[5]+0xFFFFFFB8u; // 801CB6C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB6C8
  c->lr=0x801CB6D0u; f_80212260(c); // 801CB6CC
L_801CB6D0:;
  c->r[3]=c->r[30]+0x00000004u; // 801CB6D0
  c->r[4]=c->r[29]+0x000000F0u; // 801CB6D4
  c->lr=0x801CB6DCu; f_801E45B0(c); // 801CB6D8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CB6DC
  c->r[3]=c->r[29]|c->r[29]; // 801CB6E0
  c->r[4]=0u+0xFFFFFFFFu; // 801CB6E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CB6E8
  c->ctr=c->r[12]; // 801CB6EC
  if (true) { c->lr=0x801CB6F4u; dispatch(c,c->ctr); } // 801CB6F0
  c->r[3]=c->r[30]|c->r[30]; // 801CB6F4
  c->r[4]=c->r[29]|c->r[29]; // 801CB6F8
  c->lr=0x801CB700u; f_801C6110(c); // 801CB6FC
  c->r[3]=c->r[31]|c->r[31]; // 801CB700
  c->lr=0x801CB708u; f_80126EA0(c); // 801CB704
L_801CB708:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB708
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB70C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB710
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB714
  c->lr=c->r[0]; // 801CB718
  c->r[1]=c->r[1]+0x00000020u; // 801CB71C
  return; // 801CB720
}

// __dt__Q44nw4r3snd6detail8SeqSoundFv
void f_801CB730(Ctx* __restrict c) {
  trace_call(0x801CB730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB730
  c->r[0]=c->lr; // 801CB734
  cmps(c,0,(int32_t)c->r[3],0); // 801CB738
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB73C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB740
  c->r[31]=c->r[4]|c->r[4]; // 801CB744
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB748
  c->r[30]=c->r[3]|c->r[3]; // 801CB74C
  if (crb(c,2)) { goto L_801CB780; } // 801CB750
  c->r[3]=addc(c,c->r[3],0x00000490u,0); cr0(c,c->r[3]); // 801CB754
  if (crb(c,2)) { goto L_801CB764; } // 801CB758
  c->r[4]=0u+0x00000000u; // 801CB75C
  c->lr=0x801CB764u; f_801DC9B0(c); // 801CB760
L_801CB764:;
  c->r[3]=c->r[30]+0x00000110u; // 801CB764
  c->r[4]=0u+0xFFFFFFFFu; // 801CB768
  c->lr=0x801CB770u; f_801C92D0(c); // 801CB76C
  cmps(c,0,(int32_t)c->r[31],0); // 801CB770
  if (!crb(c,1)) { goto L_801CB780; } // 801CB774
  c->r[3]=c->r[30]|c->r[30]; // 801CB778
  c->lr=0x801CB780u; f_802E61AC(c); // 801CB77C
L_801CB780:;
  c->r[3]=c->r[30]|c->r[30]; // 801CB780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB784
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB788
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB78C
  c->lr=c->r[0]; // 801CB790
  c->r[1]=c->r[1]+0x00000010u; // 801CB794
  return; // 801CB798
}

// fn_801CB7A0
void f_801CB7A0(Ctx* __restrict c) {
  trace_call(0x801CB7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB7A0
  c->r[0]=c->lr; // 801CB7A4
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CB7A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB7AC
  fcmp(c,0,c->f[1],c->f[0]); // 801CB7B0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CB7B4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CB7B8
  c->f[31]=c->f[1]; // 801CB7BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB7C0
  c->r[31]=c->r[3]|c->r[3]; // 801CB7C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CB7C8
  if (crb(c,2)) { goto L_801CB7EC; } // 801CB7CC
  c->r[3]=0u+0x803A0000u; // 801CB7D0
  c->r[5]=0u+0x803A0000u; // 801CB7D4
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CB7D8
  c->r[4]=0u+0x000000FBu; // 801CB7DC
  c->r[5]=c->r[5]+0xFFFFFDB8u; // 801CB7E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB7E4
  c->lr=0x801CB7ECu; f_80212260(c); // 801CB7E8
L_801CB7EC:;
  c->f[1]=c->f[31]; // 801CB7EC
  c->r[3]=c->r[31]+0x00000110u; // 801CB7F0
  c->lr=0x801CB7F8u; f_801C9C90(c); // 801CB7F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB7F8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CB7FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CB800
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB804
  c->lr=c->r[0]; // 801CB808
  c->r[1]=c->r[1]+0x00000020u; // 801CB80C
  return; // 801CB810
}

// fn_801CB820
void f_801CB820(Ctx* __restrict c) {
  trace_call(0x801CB820u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB820
  c->r[0]=c->lr; // 801CB824
  cmpu(c,0,c->r[4],0x0000007Fu); // 801CB828
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB82C
  c->r[0]=0u+0x00000000u; // 801CB830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB834
  c->r[31]=c->r[4]|c->r[4]; // 801CB838
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB83C
  c->r[30]=c->r[3]|c->r[3]; // 801CB840
  if (crb(c,1)) { goto L_801CB84C; } // 801CB844
  c->r[0]=0u+0x00000001u; // 801CB848
L_801CB84C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CB84C
  if (!crb(c,2)) { goto L_801CB87C; } // 801CB850
  c->r[3]=0u+0x803A0000u; // 801CB854
  c->r[5]=0u+0x803A0000u; // 801CB858
  c->r[6]=c->r[31]|c->r[31]; // 801CB85C
  c->r[4]=0u+0x0000010Au; // 801CB860
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CB864
  c->r[5]=c->r[5]+0xFFFFFDE4u; // 801CB868
  c->r[7]=0u+0x00000000u; // 801CB86C
  c->r[8]=0u+0x0000007Fu; // 801CB870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB874
  c->lr=0x801CB87Cu; f_80212260(c); // 801CB878
L_801CB87C:;
  c->r[4]=c->r[31]|c->r[31]; // 801CB87C
  c->r[3]=c->r[30]+0x00000110u; // 801CB880
  c->lr=0x801CB888u; f_801C9D00(c); // 801CB884
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB88C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB890
  c->lr=c->r[0]; // 801CB894
  c->r[1]=c->r[1]+0x00000010u; // 801CB898
  return; // 801CB89C
}

// fn_801CB8A0
void f_801CB8A0(Ctx* __restrict c) {
  trace_call(0x801CB8A0u);
  c->r[3]=c->r[3]+0x00000110u; // 801CB8A0
  f_801C9D80(c); return; // 801CB8A4
}

// fn_801CB8B0
void f_801CB8B0(Ctx* __restrict c) {
  trace_call(0x801CB8B0u);
  c->r[3]=c->r[3]+0x00000110u; // 801CB8B0
  f_801C9D90(c); return; // 801CB8B4
}

// fn_801CB8C0
void f_801CB8C0(Ctx* __restrict c) {
  trace_call(0x801CB8C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB8C0
  c->r[0]=c->lr; // 801CB8C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CB8C8
  c->r[11]=c->r[1]+0x00000040u; // 801CB8CC
  c->lr=0x801CB8D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CB8D0
  c->r[4]=R8(c->r[3]+0x00000098u); // 801CB8D4
  c->r[31]=c->r[3]|c->r[3]; // 801CB8D8
  c->r[0]=R32(c->r[3]+0x00000050u); // 801CB8DC
  c->r[4]=c->r[4]+c->r[0]; // 801CB8E0
  cmps(c,0,(int32_t)c->r[4],127); // 801CB8E4
  if (!crb(c,1)) { goto L_801CB8F4; } // 801CB8E8
  c->r[24]=0u+0x0000007Fu; // 801CB8EC
  goto L_801CB8FC; // 801CB8F0
L_801CB8F4:;
  c->r[0]=sraw(c,c->r[4],31); // 801CB8F4
  c->r[24]=c->r[4]&~c->r[0]; // 801CB8F8
L_801CB8FC:;
  c->r[25]=R32(c->r[3]+0x00000278u); // 801CB8FC
  c->r[26]=c->r[25]+0x00000010u; // 801CB900
  c->r[3]=c->r[26]|c->r[26]; // 801CB904
  c->lr=0x801CB90Cu; f_80126DC0(c); // 801CB908
  cmps(c,0,(int32_t)c->r[31],0); // 801CB90C
  if (!crb(c,2)) { goto L_801CB930; } // 801CB910
  c->r[3]=0u+0x803A0000u; // 801CB914
  c->r[5]=0u+0x803A0000u; // 801CB918
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801CB91C
  c->r[4]=0u+0x00000233u; // 801CB920
  c->r[5]=c->r[5]+0xFFFFFFB8u; // 801CB924
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB928
  c->lr=0x801CB930u; f_80212260(c); // 801CB92C
L_801CB930:;
  c->r[23]=c->r[31]+0x000000F0u; // 801CB930
  c->r[3]=c->r[25]+0x00000004u; // 801CB934
  c->r[4]=c->r[23]|c->r[23]; // 801CB938
  c->lr=0x801CB940u; f_801E45B0(c); // 801CB93C
  c->r[30]=R32(c->r[25]+0x00000008u); // 801CB940
  c->r[29]=c->r[25]+0x00000008u; // 801CB944
  c->r[27]=0u+0x803A0000u; // 801CB948
  c->r[28]=0u+0x803A0000u; // 801CB94C
  goto L_801CB9A0; // 801CB950
L_801CB954:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CB954
  if (!crb(c,2)) { goto L_801CB970; } // 801CB958
  c->r[3]=c->r[27]+0xFFFFFFACu; // 801CB95C
  c->r[5]=c->r[28]+0xFFFFFF88u; // 801CB960
  c->r[4]=0u+0x0000023Du; // 801CB964
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB968
  c->lr=0x801CB970u; f_80212260(c); // 801CB96C
L_801CB970:;
  c->r[3]=R8(c->r[30]+0xFFFFFFA8u); // 801CB970
  c->r[0]=R32(c->r[30]+0xFFFFFF60u); // 801CB974
  c->r[3]=c->r[3]+c->r[0]; // 801CB978
  cmps(c,0,(int32_t)c->r[3],127); // 801CB97C
  if (!crb(c,1)) { goto L_801CB98C; } // 801CB980
  c->r[0]=0u+0x0000007Fu; // 801CB984
  goto L_801CB994; // 801CB988
L_801CB98C:;
  c->r[0]=sraw(c,c->r[3],31); // 801CB98C
  c->r[0]=c->r[3]&~c->r[0]; // 801CB990
L_801CB994:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801CB994
  if (crb(c,0)) { goto L_801CB9A8; } // 801CB998
  c->r[30]=R32(c->r[30]+0x00000000u); // 801CB99C
L_801CB9A0:;
  cmpu(c,0,c->r[30],c->r[29]); // 801CB9A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CB954; } // 801CB9A4
L_801CB9A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CB9A8
  if (!crb(c,2)) { goto L_801CB9CC; } // 801CB9AC
  c->r[3]=0u+0x803A0000u; // 801CB9B0
  c->r[5]=0u+0x803A0000u; // 801CB9B4
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801CB9B8
  c->r[4]=0u+0x00000233u; // 801CB9BC
  c->r[5]=c->r[5]+0xFFFFFFB8u; // 801CB9C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CB9C4
  c->lr=0x801CB9CCu; f_80212260(c); // 801CB9C8
L_801CB9CC:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB9CC
  c->r[5]=c->r[23]|c->r[23]; // 801CB9D0
  c->r[3]=c->r[25]+0x00000004u; // 801CB9D4
  c->r[4]=c->r[1]+0x00000008u; // 801CB9D8
  c->lr=0x801CB9E0u; f_801E44B0(c); // 801CB9DC
  c->r[3]=c->r[26]|c->r[26]; // 801CB9E0
  c->lr=0x801CB9E8u; f_80126EA0(c); // 801CB9E4
  c->r[11]=c->r[1]+0x00000040u; // 801CB9E8
  c->lr=0x801CB9F0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CB9EC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CB9F0
  c->lr=c->r[0]; // 801CB9F4
  c->r[1]=c->r[1]+0x00000040u; // 801CB9F8
  return; // 801CB9FC
}

// fn_801CBA00
void f_801CBA00(Ctx* __restrict c) {
  trace_call(0x801CBA00u);
  cmps(c,0,(int32_t)c->r[5],0); // 801CBA00
  c->r[5]=0u+0x00000000u; // 801CBA04
  c->r[3]=c->r[3]+0x00000110u; // 801CBA08
  if (crb(c,2)) { goto L_801CBA14; } // 801CBA0C
  c->r[5]=0u+0x00000003u; // 801CBA10
L_801CBA14:;
  f_801CA080(c); return; // 801CBA14
}

// fn_801CBA20
void f_801CBA20(Ctx* __restrict c) {
  trace_call(0x801CBA20u);
  c->r[3]=c->r[3]+0x00000110u; // 801CBA20
  f_801CA140(c); return; // 801CBA24
}

// fn_801CBA30
void f_801CBA30(Ctx* __restrict c) {
  trace_call(0x801CBA30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBA30
  c->r[0]=c->lr; // 801CBA34
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBA38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBA3C
  fcmp(c,0,c->f[1],c->f[0]); // 801CBA40
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CBA44
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CBA48
  c->f[31]=c->f[1]; // 801CBA4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBA50
  c->r[31]=c->r[4]|c->r[4]; // 801CBA54
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CBA58
  c->r[30]=c->r[3]|c->r[3]; // 801CBA5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CBA60
  if (crb(c,2)) { goto L_801CBA84; } // 801CBA64
  c->r[3]=0u+0x803A0000u; // 801CBA68
  c->r[5]=0u+0x803A0000u; // 801CBA6C
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CBA70
  c->r[4]=0u+0x00000173u; // 801CBA74
  c->r[5]=c->r[5]+0xFFFFFE28u; // 801CBA78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBA7C
  c->lr=0x801CBA84u; f_80212260(c); // 801CBA80
L_801CBA84:;
  c->f[1]=c->f[31]; // 801CBA84
  c->r[4]=c->r[31]|c->r[31]; // 801CBA88
  c->r[3]=c->r[30]+0x00000110u; // 801CBA8C
  c->lr=0x801CBA94u; f_801CA210(c); // 801CBA90
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBA94
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CBA98
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CBA9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBAA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBAA4
  c->lr=c->r[0]; // 801CBAA8
  c->r[1]=c->r[1]+0x00000020u; // 801CBAAC
  return; // 801CBAB0
}

// fn_801CBAC0
void f_801CBAC0(Ctx* __restrict c) {
  trace_call(0x801CBAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBAC0
  c->r[0]=c->lr; // 801CBAC4
  {uint32_t ea=c->r[2]+0xFFFFA880u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBAC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBACC
  fcmp(c,0,c->f[1],c->f[0]); // 801CBAD0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CBAD4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CBAD8
  c->f[31]=c->f[1]; // 801CBADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBAE0
  c->r[31]=c->r[4]|c->r[4]; // 801CBAE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CBAE8
  c->r[30]=c->r[3]|c->r[3]; // 801CBAEC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CBAF0
  if (crb(c,2)) { goto L_801CBB14; } // 801CBAF4
  c->r[3]=0u+0x803A0000u; // 801CBAF8
  c->r[5]=0u+0x803A0000u; // 801CBAFC
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CBB00
  c->r[4]=0u+0x00000183u; // 801CBB04
  c->r[5]=c->r[5]+0xFFFFFE50u; // 801CBB08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBB0C
  c->lr=0x801CBB14u; f_80212260(c); // 801CBB10
L_801CBB14:;
  c->f[1]=c->f[31]; // 801CBB14
  c->r[4]=c->r[31]|c->r[31]; // 801CBB18
  c->r[3]=c->r[30]+0x00000110u; // 801CBB1C
  c->lr=0x801CBB24u; f_801CA320(c); // 801CBB20
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBB24
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CBB28
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CBB2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBB30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBB34
  c->lr=c->r[0]; // 801CBB38
  c->r[1]=c->r[1]+0x00000020u; // 801CBB3C
  return; // 801CBB40
}

// fn_801CBB50
void f_801CBB50(Ctx* __restrict c) {
  trace_call(0x801CBB50u);
  c->r[3]=c->r[3]+0x00000110u; // 801CBB50
  f_801CA430(c); return; // 801CBB54
}

// fn_801CBB60
void f_801CBB60(Ctx* __restrict c) {
  trace_call(0x801CBB60u);
  c->r[3]=c->r[3]+0x00000110u; // 801CBB60
  f_801CA510(c); return; // 801CBB64
}

// fn_801CBB70
void f_801CBB70(Ctx* __restrict c) {
  trace_call(0x801CBB70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBB70
  c->r[0]=c->lr; // 801CBB74
  cmps(c,0,(int32_t)c->r[5],0); // 801CBB78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBB7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBB80
  c->r[31]=0u+0x803A0000u; // 801CBB84
  c->r[31]=c->r[31]+0xFFFFFD28u; // 801CBB88
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBB8C
  c->r[30]=c->r[5]|c->r[5]; // 801CBB90
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBB94
  c->r[29]=c->r[4]|c->r[4]; // 801CBB98
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CBB9C
  c->r[28]=c->r[3]|c->r[3]; // 801CBBA0
  if (!crb(c,2)) { goto L_801CBBBC; } // 801CBBA4
  c->r[3]=c->r[31]+0x00000000u; // 801CBBA8
  c->r[5]=c->r[31]+0x0000014Cu; // 801CBBAC
  c->r[4]=0u+0x000001FDu; // 801CBBB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBBB4
  c->lr=0x801CBBBCu; f_80212260(c); // 801CBBB8
L_801CBBBC:;
  cmpu(c,0,c->r[29],0x0000000Fu); // 801CBBBC
  c->r[0]=0u+0x00000000u; // 801CBBC0
  if (crb(c,1)) { goto L_801CBBCC; } // 801CBBC4
  c->r[0]=0u+0x00000001u; // 801CBBC8
L_801CBBCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CBBCC
  if (!crb(c,2)) { goto L_801CBBF4; } // 801CBBD0
  c->r[6]=c->r[29]|c->r[29]; // 801CBBD4
  c->r[3]=c->r[31]+0x00000000u; // 801CBBD8
  c->r[5]=c->r[31]+0x00000170u; // 801CBBDC
  c->r[4]=0u+0x000001FEu; // 801CBBE0
  c->r[7]=0u+0x00000000u; // 801CBBE4
  c->r[8]=0u+0x00000010u; // 801CBBE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBBEC
  c->lr=0x801CBBF4u; f_80212260(c); // 801CBBF0
L_801CBBF4:;
  c->r[0]=R8(c->r[28]+0x00000085u); // 801CBBF4
  cmps(c,0,(int32_t)c->r[0],0); // 801CBBF8
  if (!crb(c,2)) { goto L_801CBC0C; } // 801CBBFC
  c->r[0]=0u+0xFFFFFFFFu; // 801CBC00
  W16(c->r[30]+0x00000000u,c->r[0]); // 801CBC04
  goto L_801CBC1C; // 801CBC08
L_801CBC0C:;
  c->r[4]=c->r[29]|c->r[29]; // 801CBC0C
  c->r[3]=c->r[28]+0x00000110u; // 801CBC10
  c->lr=0x801CBC18u; f_801C9E60(c); // 801CBC14
  W16(c->r[30]+0x00000000u,c->r[3]); // 801CBC18
L_801CBC1C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBC1C
  c->r[3]=0u+0x00000001u; // 801CBC20
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CBC24
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CBC28
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CBC2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBC30
  c->lr=c->r[0]; // 801CBC34
  c->r[1]=c->r[1]+0x00000020u; // 801CBC38
  return; // 801CBC3C
}

// fn_801CBC40
void f_801CBC40(Ctx* __restrict c) {
  trace_call(0x801CBC40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBC40
  c->r[0]=c->lr; // 801CBC44
  cmps(c,0,(int32_t)c->r[4],0); // 801CBC48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBC4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBC50
  c->r[31]=0u+0x803A0000u; // 801CBC54
  c->r[31]=c->r[31]+0xFFFFFD28u; // 801CBC58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBC5C
  c->r[30]=c->r[4]|c->r[4]; // 801CBC60
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBC64
  c->r[29]=c->r[3]|c->r[3]; // 801CBC68
  if (!crb(c,2)) { goto L_801CBC84; } // 801CBC6C
  c->r[3]=c->r[31]+0x00000000u; // 801CBC70
  c->r[5]=c->r[31]+0x0000014Cu; // 801CBC74
  c->r[4]=0u+0x00000217u; // 801CBC78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBC7C
  c->lr=0x801CBC84u; f_80212260(c); // 801CBC80
L_801CBC84:;
  cmpu(c,0,c->r[29],0x0000000Fu); // 801CBC84
  c->r[0]=0u+0x00000000u; // 801CBC88
  if (crb(c,1)) { goto L_801CBC94; } // 801CBC8C
  c->r[0]=0u+0x00000001u; // 801CBC90
L_801CBC94:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CBC94
  if (!crb(c,2)) { goto L_801CBCBC; } // 801CBC98
  c->r[6]=c->r[29]|c->r[29]; // 801CBC9C
  c->r[3]=c->r[31]+0x00000000u; // 801CBCA0
  c->r[5]=c->r[31]+0x00000170u; // 801CBCA4
  c->r[4]=0u+0x00000218u; // 801CBCA8
  c->r[7]=0u+0x00000000u; // 801CBCAC
  c->r[8]=0u+0x00000010u; // 801CBCB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBCB4
  c->lr=0x801CBCBCu; f_80212260(c); // 801CBCB8
L_801CBCBC:;
  c->r[3]=c->r[29]|c->r[29]; // 801CBCBC
  c->lr=0x801CBCC4u; f_801C9EE0(c); // 801CBCC0
  W16(c->r[30]+0x00000000u,c->r[3]); // 801CBCC4
  c->r[3]=0u+0x00000001u; // 801CBCC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBCCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CBCD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CBCD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBCD8
  c->lr=c->r[0]; // 801CBCDC
  c->r[1]=c->r[1]+0x00000020u; // 801CBCE0
  return; // 801CBCE4
}

// fn_801CBCF0
void f_801CBCF0(Ctx* __restrict c) {
  trace_call(0x801CBCF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBCF0
  c->r[0]=c->lr; // 801CBCF4
  cmpu(c,0,c->r[4],0x0000000Fu); // 801CBCF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBCFC
  c->r[0]=0u+0x00000000u; // 801CBD00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBD04
  c->r[31]=c->r[5]|c->r[5]; // 801CBD08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBD0C
  c->r[30]=c->r[4]|c->r[4]; // 801CBD10
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBD14
  c->r[29]=c->r[3]|c->r[3]; // 801CBD18
  if (crb(c,1)) { goto L_801CBD24; } // 801CBD1C
  c->r[0]=0u+0x00000001u; // 801CBD20
L_801CBD24:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CBD24
  if (!crb(c,2)) { goto L_801CBD54; } // 801CBD28
  c->r[3]=0u+0x803A0000u; // 801CBD2C
  c->r[5]=0u+0x803A0000u; // 801CBD30
  c->r[6]=c->r[30]|c->r[30]; // 801CBD34
  c->r[4]=0u+0x00000247u; // 801CBD38
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CBD3C
  c->r[5]=c->r[5]+0xFFFFFE98u; // 801CBD40
  c->r[7]=0u+0x00000000u; // 801CBD44
  c->r[8]=0u+0x00000010u; // 801CBD48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBD4C
  c->lr=0x801CBD54u; f_80212260(c); // 801CBD50
L_801CBD54:;
  c->r[4]=c->r[30]|c->r[30]; // 801CBD54
  c->r[5]=c->r[31]|c->r[31]; // 801CBD58
  c->r[3]=c->r[29]+0x00000110u; // 801CBD5C
  c->lr=0x801CBD64u; f_801C9F60(c); // 801CBD60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBD64
  c->r[3]=0u+0x00000001u; // 801CBD68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CBD6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CBD70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBD74
  c->lr=c->r[0]; // 801CBD78
  c->r[1]=c->r[1]+0x00000020u; // 801CBD7C
  return; // 801CBD80
}

// fn_801CBD90
void f_801CBD90(Ctx* __restrict c) {
  trace_call(0x801CBD90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBD90
  c->r[0]=c->lr; // 801CBD94
  cmpu(c,0,c->r[3],0x0000000Fu); // 801CBD98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBD9C
  c->r[0]=0u+0x00000000u; // 801CBDA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBDA4
  c->r[31]=c->r[4]|c->r[4]; // 801CBDA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CBDAC
  c->r[30]=c->r[3]|c->r[3]; // 801CBDB0
  if (crb(c,1)) { goto L_801CBDBC; } // 801CBDB4
  c->r[0]=0u+0x00000001u; // 801CBDB8
L_801CBDBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CBDBC
  if (!crb(c,2)) { goto L_801CBDEC; } // 801CBDC0
  c->r[3]=0u+0x803A0000u; // 801CBDC4
  c->r[5]=0u+0x803A0000u; // 801CBDC8
  c->r[6]=c->r[30]|c->r[30]; // 801CBDCC
  c->r[4]=0u+0x00000258u; // 801CBDD0
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CBDD4
  c->r[5]=c->r[5]+0xFFFFFE98u; // 801CBDD8
  c->r[7]=0u+0x00000000u; // 801CBDDC
  c->r[8]=0u+0x00000010u; // 801CBDE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBDE4
  c->lr=0x801CBDECu; f_80212260(c); // 801CBDE8
L_801CBDEC:;
  c->r[3]=c->r[30]|c->r[30]; // 801CBDEC
  c->r[4]=c->r[31]|c->r[31]; // 801CBDF0
  c->lr=0x801CBDF8u; f_801C9FF0(c); // 801CBDF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBDF8
  c->r[3]=0u+0x00000001u; // 801CBDFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBE00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBE04
  c->lr=c->r[0]; // 801CBE08
  c->r[1]=c->r[1]+0x00000010u; // 801CBE0C
  return; // 801CBE10
}

// fn_801CBE20
void f_801CBE20(Ctx* __restrict c) {
  trace_call(0x801CBE20u);
  c->r[0]=R8(c->r[3]+0x00000085u); // 801CBE20
  cmps(c,0,(int32_t)c->r[0],0); // 801CBE24
  if (!crb(c,2)) { goto L_801CBE34; } // 801CBE28
  c->r[3]=0u+0x00000000u; // 801CBE2C
  return; // 801CBE30
L_801CBE34:;
  c->r[3]=R32(c->r[3]+0x00000270u); // 801CBE34
  return; // 801CBE38
}

// fn_801CBE40
void f_801CBE40(Ctx* __restrict c) {
  trace_call(0x801CBE40u);
  c->r[3]=R32(c->r[3]+0x00000274u); // 801CBE40
  c->r[0]=0u-c->r[3]; // 801CBE44
  c->r[0]=c->r[0]|c->r[3]; // 801CBE48
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CBE4C
  return; // 801CBE50
}

// fn_801CBE60
void f_801CBE60(Ctx* __restrict c) {
  trace_call(0x801CBE60u);
  c->r[3]=R32(c->r[3]+0x00000274u); // 801CBE60
  f_801CC160(c); return; // 801CBE64
}

// fn_801CBE70
void f_801CBE70(Ctx* __restrict c) {
  trace_call(0x801CBE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBE70
  c->r[0]=c->lr; // 801CBE74
  c->r[4]=0u+0x00000000u; // 801CBE78
  c->r[5]=0u+0x00000000u; // 801CBE7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBE80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBE84
  c->r[31]=c->r[3]|c->r[3]; // 801CBE88
  c->r[3]=R32(c->r[3]+0x00000010u); // 801CBE8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CBE90
  c->r[12]=R32(c->r[12]+0x00000044u); // 801CBE94
  c->ctr=c->r[12]; // 801CBE98
  if (true) { c->lr=0x801CBEA0u; dispatch(c,c->ctr); } // 801CBE9C
  c->r[3]=R32(c->r[31]+0x00000010u); // 801CBEA0
  c->r[4]=R32(c->r[31]+0x00000014u); // 801CBEA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CBEA8
  c->r[5]=R32(c->r[31]+0x00000018u); // 801CBEAC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CBEB0
  c->ctr=c->r[12]; // 801CBEB4
  if (true) { c->lr=0x801CBEBCu; dispatch(c,c->ctr); } // 801CBEB8
  cmps(c,0,(int32_t)c->r[3],-3); // 801CBEBC
  c->r[0]=0u+0x00000000u; // 801CBEC0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801CBEC4
  if (!crb(c,2)) { goto L_801CBEF0; } // 801CBEC8
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801CBECC
  cmps(c,0,(int32_t)c->r[12],0); // 801CBED0
  if (crb(c,2)) { goto L_801CBF78; } // 801CBED4
  c->r[5]=R32(c->r[31]+0x00000020u); // 801CBED8
  c->r[3]=0u+0x00000000u; // 801CBEDC
  c->r[4]=0u+0x00000000u; // 801CBEE0
  c->ctr=c->r[12]; // 801CBEE4
  if (true) { c->lr=0x801CBEECu; dispatch(c,c->ctr); } // 801CBEE8
  goto L_801CBF78; // 801CBEEC
L_801CBEF0:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 801CBEF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CBEF4
  if (crb(c,2)) { goto L_801CBF44; } // 801CBEF8
  cmps(c,0,(int32_t)c->r[3],0); // 801CBEFC
  if (!crb(c,2)) { goto L_801CBF20; } // 801CBF00
  c->r[3]=0u+0x803A0000u; // 801CBF04
  c->r[5]=0u+0x803A0000u; // 801CBF08
  c->r[3]=c->r[3]+0xFFFFFD28u; // 801CBF0C
  c->r[4]=0u+0x000002CCu; // 801CBF10
  c->r[5]=c->r[5]+0xFFFFFF14u; // 801CBF14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CBF18
  c->lr=0x801CBF20u; f_80212300(c); // 801CBF1C
L_801CBF20:;
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801CBF20
  cmps(c,0,(int32_t)c->r[12],0); // 801CBF24
  if (crb(c,2)) { goto L_801CBF78; } // 801CBF28
  c->r[5]=R32(c->r[31]+0x00000020u); // 801CBF2C
  c->r[3]=0u+0x00000000u; // 801CBF30
  c->r[4]=0u+0x00000000u; // 801CBF34
  c->ctr=c->r[12]; // 801CBF38
  if (true) { c->lr=0x801CBF40u; dispatch(c,c->ctr); } // 801CBF3C
  goto L_801CBF78; // 801CBF40
L_801CBF44:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 801CBF44
  c->r[3]=c->r[1]+0x00000008u; // 801CBF48
  c->lr=0x801CBF50u; f_801C8DF0(c); // 801CBF4C
  c->r[3]=c->r[1]+0x00000008u; // 801CBF50
  c->lr=0x801CBF58u; f_801C8F50(c); // 801CBF54
  c->r[12]=R32(c->r[31]+0x0000001Cu); // 801CBF58
  cmps(c,0,(int32_t)c->r[12],0); // 801CBF5C
  if (crb(c,2)) { goto L_801CBF78; } // 801CBF60
  c->r[4]=c->r[3]|c->r[3]; // 801CBF64
  c->r[5]=R32(c->r[31]+0x00000020u); // 801CBF68
  c->r[3]=0u+0x00000001u; // 801CBF6C
  c->ctr=c->r[12]; // 801CBF70
  if (true) { c->lr=0x801CBF78u; dispatch(c,c->ctr); } // 801CBF74
L_801CBF78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBF78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBF7C
  c->lr=c->r[0]; // 801CBF80
  c->r[1]=c->r[1]+0x00000020u; // 801CBF84
  return; // 801CBF88
}

// fn_801CBF90
void f_801CBF90(Ctx* __restrict c) {
  trace_call(0x801CBF90u);
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 801CBF90
  cmps(c,0,(int32_t)c->r[12],0); // 801CBF94
  if (crb(c,2)) return; // 801CBF98
  c->r[5]=R32(c->r[3]+0x00000020u); // 801CBF9C
  c->r[3]=0u+0x00000000u; // 801CBFA0
  c->r[4]=0u+0x00000000u; // 801CBFA4
  c->ctr=c->r[12]; // 801CBFA8
  if (true) { dispatch(c,c->ctr); return; } // 801CBFAC
  return; // 801CBFB0
}

// fn_801CBFC0
void f_801CBFC0(Ctx* __restrict c) {
  trace_call(0x801CBFC0u);
  c->r[4]=R32(c->r[3]+0x00000010u); // 801CBFC0
  c->r[0]=0u+0x00000000u; // 801CBFC4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801CBFC8
  cmps(c,0,(int32_t)c->r[4],0); // 801CBFCC
  if (crb(c,2)) return; // 801CBFD0
  c->r[12]=R32(c->r[4]+0x00000000u); // 801CBFD4
  c->r[3]=c->r[4]|c->r[4]; // 801CBFD8
  c->r[12]=R32(c->r[12]+0x00000048u); // 801CBFDC
  c->ctr=c->r[12]; // 801CBFE0
  if (true) { dispatch(c,c->ctr); return; } // 801CBFE4
  return; // 801CBFE8
}

// fn_801CBFF0
void f_801CBFF0(Ctx* __restrict c) {
  trace_call(0x801CBFF0u);
  c->r[3]=c->r[3]+0x00000110u; // 801CBFF0
  return; // 801CBFF4
}

// fn_801CC000
void f_801CC000(Ctx* __restrict c) {
  trace_call(0x801CC000u);
  c->r[3]=c->r[3]+0x00000110u; // 801CC000
  return; // 801CC004
}

// fn_801CC010
void f_801CC010(Ctx* __restrict c) {
  trace_call(0x801CC010u);
  c->r[3]=R8(c->r[3]+0x00000289u); // 801CC010
  return; // 801CC014
}

// fn_801CC020
void f_801CC020(Ctx* __restrict c) {
  trace_call(0x801CC020u);
  c->r[3]=c->r[13]+0xFFFFC448u; // 801CC020
  return; // 801CC024
}

// fn_801CC030
void f_801CC030(Ctx* __restrict c) {
  trace_call(0x801CC030u);
  c->r[0]=c->r[13]+0xFFFFC420u; // 801CC030
  W32(c->r[13]+0xFFFFC448u,c->r[0]); // 801CC034
  return; // 801CC038
}

// fn_801CC040
void f_801CC040(Ctx* __restrict c) {
  trace_call(0x801CC040u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC040
  c->r[0]=c->lr; // 801CC044
  cmps(c,0,(int32_t)c->r[4],0); // 801CC048
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC04C
  c->r[0]=0u+0x00000000u; // 801CC050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC054
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC058
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC05C
  c->r[29]=c->r[3]|c->r[3]; // 801CC060
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CC064
  if (!crb(c,2)) { goto L_801CC070; } // 801CC068
  goto L_801CC138; // 801CC06C
L_801CC070:;
  c->r[30]=R32(c->r[4]+0x00000000u); // 801CC070
  cmps(c,0,(int32_t)c->r[30],0); // 801CC074
  if (!crb(c,2)) { goto L_801CC080; } // 801CC078
  goto L_801CC138; // 801CC07C
L_801CC080:;
  c->r[31]=c->r[13]+0xFFFFC448u; // 801CC080
  if (crb(c,2)) { goto L_801CC0CC; } // 801CC084
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CC088
  c->r[3]=c->r[30]|c->r[30]; // 801CC08C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CC090
  c->ctr=c->r[12]; // 801CC094
  if (true) { c->lr=0x801CC09Cu; dispatch(c,c->ctr); } // 801CC098
  goto L_801CC0B4; // 801CC09C
L_801CC0A0:;
  cmpu(c,0,c->r[3],c->r[31]); // 801CC0A0
  if (!crb(c,2)) { goto L_801CC0B0; } // 801CC0A4
  c->r[0]=0u+0x00000001u; // 801CC0A8
  goto L_801CC0C0; // 801CC0AC
L_801CC0B0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CC0B0
L_801CC0B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CC0B4
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC0A0; } // 801CC0B8
  c->r[0]=0u+0x00000000u; // 801CC0BC
L_801CC0C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CC0C0
  if (crb(c,2)) { goto L_801CC0CC; } // 801CC0C4
  goto L_801CC0D0; // 801CC0C8
L_801CC0CC:;
  c->r[30]=0u+0x00000000u; // 801CC0CC
L_801CC0D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CC0D0
  if (crb(c,2)) { goto L_801CC134; } // 801CC0D4
  if (!crb(c,2)) { goto L_801CC0F8; } // 801CC0D8
  c->r[3]=0u+0x803A0000u; // 801CC0DC
  c->r[5]=0u+0x803A0000u; // 801CC0E0
  c->r[3]=c->r[3]+0x00000028u; // 801CC0E4
  c->r[4]=0u+0x0000003Bu; // 801CC0E8
  c->r[5]=c->r[5]+0x00000040u; // 801CC0EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC0F0
  c->lr=0x801CC0F8u; f_80212260(c); // 801CC0F4
L_801CC0F8:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801CC0F8
  c->r[3]=c->r[30]|c->r[30]; // 801CC0FC
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CC100
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CC104
  c->ctr=c->r[12]; // 801CC108
  if (true) { c->lr=0x801CC110u; dispatch(c,c->ctr); } // 801CC10C
  cmps(c,0,(int32_t)c->r[3],0); // 801CC110
  if (crb(c,2)) { goto L_801CC12C; } // 801CC114
  c->r[3]=R32(c->r[29]+0x00000000u); // 801CC118
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CC11C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801CC120
  c->ctr=c->r[12]; // 801CC124
  if (true) { c->lr=0x801CC12Cu; dispatch(c,c->ctr); } // 801CC128
L_801CC12C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801CC12C
  W32(c->r[3]+0x00000274u,c->r[29]); // 801CC130
L_801CC134:;
  c->r[3]=c->r[29]|c->r[29]; // 801CC134
L_801CC138:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC138
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC13C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC140
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC144
  c->lr=c->r[0]; // 801CC148
  c->r[1]=c->r[1]+0x00000020u; // 801CC14C
  return; // 801CC150
}

// fn_801CC160
void f_801CC160(Ctx* __restrict c) {
  trace_call(0x801CC160u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 801CC160
  cmps(c,0,(int32_t)c->r[4],0); // 801CC164
  if (crb(c,2)) { goto L_801CC180; } // 801CC168
  c->r[0]=R32(c->r[4]+0x00000274u); // 801CC16C
  cmpu(c,0,c->r[0],c->r[3]); // 801CC170
  if (!crb(c,2)) { goto L_801CC180; } // 801CC174
  c->r[0]=0u+0x00000000u; // 801CC178
  W32(c->r[4]+0x00000274u,c->r[0]); // 801CC17C
L_801CC180:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CC180
  cmps(c,0,(int32_t)c->r[0],0); // 801CC184
  if (crb(c,2)) return; // 801CC188
  c->r[0]=0u+0x00000000u; // 801CC18C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CC190
  return; // 801CC194
}

// fn_801CC1A0
void f_801CC1A0(Ctx* __restrict c) {
  trace_call(0x801CC1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC1A0
  c->r[0]=c->lr; // 801CC1A4
  cmpu(c,0,c->r[4],0x00000010u); // 801CC1A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC1AC
  c->r[0]=0u+0x00000000u; // 801CC1B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC1B4
  c->r[31]=c->r[4]|c->r[4]; // 801CC1B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC1BC
  c->r[30]=c->r[3]|c->r[3]; // 801CC1C0
  if (crb(c,1)) { goto L_801CC1CC; } // 801CC1C4
  c->r[0]=0u+0x00000001u; // 801CC1C8
L_801CC1CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CC1CC
  if (!crb(c,2)) { goto L_801CC1FC; } // 801CC1D0
  c->r[3]=0u+0x803A0000u; // 801CC1D4
  c->r[5]=0u+0x803A0000u; // 801CC1D8
  c->r[6]=c->r[31]|c->r[31]; // 801CC1DC
  c->r[4]=0u+0x00000026u; // 801CC1E0
  c->r[3]=c->r[3]+0x00000068u; // 801CC1E4
  c->r[5]=c->r[5]+0x0000007Cu; // 801CC1E8
  c->r[7]=0u+0x00000000u; // 801CC1EC
  c->r[8]=0u+0x00000010u; // 801CC1F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC1F4
  c->lr=0x801CC1FCu; f_80212260(c); // 801CC1F8
L_801CC1FC:;
  W8(c->r[30]+0x00000004u,c->r[31]); // 801CC1FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC200
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC204
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC208
  c->lr=c->r[0]; // 801CC20C
  c->r[1]=c->r[1]+0x00000010u; // 801CC210
  return; // 801CC214
}

// __ct__Q44nw4r3snd6detail8SeqTrackFv
void f_801CC220(Ctx* __restrict c) {
  trace_call(0x801CC220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC220
  c->r[0]=c->lr; // 801CC224
  c->r[4]=0u+0x803A0000u; // 801CC228
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC22C
  c->r[4]=c->r[4]+0x000002D8u; // 801CC230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC234
  c->r[31]=0u+0x00000000u; // 801CC238
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC23C
  c->r[30]=c->r[3]|c->r[3]; // 801CC240
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CC244
  W8(c->r[3]+0x00000005u,c->r[31]); // 801CC248
  c->r[3]=c->r[3]+0x00000058u; // 801CC24C
  c->lr=0x801CC254u; f_801C6160(c); // 801CC250
  W8(c->r[30]+0x00000070u,c->r[31]); // 801CC254
  c->r[3]=c->r[30]|c->r[30]; // 801CC258
  W8(c->r[30]+0x00000071u,c->r[31]); // 801CC25C
  W16(c->r[30]+0x00000072u,c->r[31]); // 801CC260
  W16(c->r[30]+0x00000074u,c->r[31]); // 801CC264
  W8(c->r[30]+0x00000076u,c->r[31]); // 801CC268
  W8(c->r[30]+0x00000077u,c->r[31]); // 801CC26C
  W16(c->r[30]+0x00000078u,c->r[31]); // 801CC270
  W16(c->r[30]+0x0000007Au,c->r[31]); // 801CC274
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 801CC278
  W8(c->r[30]+0x0000007Du,c->r[31]); // 801CC27C
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 801CC280
  W16(c->r[30]+0x00000080u,c->r[31]); // 801CC284
  W8(c->r[30]+0x00000082u,c->r[31]); // 801CC288
  W8(c->r[30]+0x00000083u,c->r[31]); // 801CC28C
  W16(c->r[30]+0x00000084u,c->r[31]); // 801CC290
  W16(c->r[30]+0x00000086u,c->r[31]); // 801CC294
  W32(c->r[30]+0x000000C4u,c->r[31]); // 801CC298
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801CC29C
  c->lr=0x801CC2A4u; f_801CC3D0(c); // 801CC2A0
  c->r[3]=c->r[30]|c->r[30]; // 801CC2A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC2A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC2AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC2B0
  c->lr=c->r[0]; // 801CC2B4
  c->r[1]=c->r[1]+0x00000010u; // 801CC2B8
  return; // 801CC2BC
}

// fn_801CC2C0
void f_801CC2C0(Ctx* __restrict c) {
  trace_call(0x801CC2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC2C0
  c->r[0]=c->lr; // 801CC2C4
  cmps(c,0,(int32_t)c->r[3],0); // 801CC2C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC2CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC2D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC2D4
  c->r[30]=c->r[4]|c->r[4]; // 801CC2D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC2DC
  c->r[29]=c->r[3]|c->r[3]; // 801CC2E0
  if (crb(c,2)) { goto L_801CC3A4; } // 801CC2E4
  c->r[4]=0u+0x803A0000u; // 801CC2E8
  c->r[4]=c->r[4]+0x000002D8u; // 801CC2EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CC2F0
  c->lr=0x801CC2F8u; f_801D76C0(c); // 801CC2F4
  c->r[3]=c->r[3]+0x00000354u; // 801CC2F8
  c->lr=0x801CC300u; f_80126DC0(c); // 801CC2FC
  c->lr=0x801CC304u; f_801D76C0(c); // 801CC300
  c->r[3]=c->r[3]+0x00000354u; // 801CC304
  c->lr=0x801CC30Cu; f_80126DC0(c); // 801CC308
  c->r[3]=c->r[29]|c->r[29]; // 801CC30C
  c->lr=0x801CC314u; f_801CCA40(c); // 801CC310
  c->r[31]=R32(c->r[29]+0x000000C8u); // 801CC314
  goto L_801CC334; // 801CC318
L_801CC31C:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801CC31C
  cmps(c,0,(int32_t)c->r[0],0); // 801CC320
  if (crb(c,2)) { goto L_801CC330; } // 801CC324
  c->r[3]=c->r[31]|c->r[31]; // 801CC328
  c->lr=0x801CC330u; f_801BE7E0(c); // 801CC32C
L_801CC330:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CC330
L_801CC334:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC334
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC31C; } // 801CC338
  c->lr=0x801CC340u; f_801D76C0(c); // 801CC33C
  c->r[3]=c->r[3]+0x00000354u; // 801CC340
  c->lr=0x801CC348u; f_80126EA0(c); // 801CC344
  c->lr=0x801CC34Cu; f_801D76C0(c); // 801CC348
  c->r[3]=c->r[3]+0x00000354u; // 801CC34C
  c->lr=0x801CC354u; f_80126DC0(c); // 801CC350
  c->r[31]=R32(c->r[29]+0x000000C8u); // 801CC354
  goto L_801CC368; // 801CC358
L_801CC35C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC35C
  c->lr=0x801CC364u; f_801BEEA0(c); // 801CC360
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CC364
L_801CC368:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC368
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC35C; } // 801CC36C
  c->r[31]=0u+0x00000000u; // 801CC370
  W32(c->r[29]+0x000000C8u,c->r[31]); // 801CC374
  c->lr=0x801CC37Cu; f_801D76C0(c); // 801CC378
  c->r[3]=c->r[3]+0x00000354u; // 801CC37C
  c->lr=0x801CC384u; f_80126EA0(c); // 801CC380
  W8(c->r[29]+0x00000005u,c->r[31]); // 801CC384
  c->lr=0x801CC38Cu; f_801D76C0(c); // 801CC388
  c->r[3]=c->r[3]+0x00000354u; // 801CC38C
  c->lr=0x801CC394u; f_80126EA0(c); // 801CC390
  cmps(c,0,(int32_t)c->r[30],0); // 801CC394
  if (!crb(c,1)) { goto L_801CC3A4; } // 801CC398
  c->r[3]=c->r[29]|c->r[29]; // 801CC39C
  c->lr=0x801CC3A4u; f_802E61AC(c); // 801CC3A0
L_801CC3A4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC3A4
  c->r[3]=c->r[29]|c->r[29]; // 801CC3A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC3AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC3B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC3B4
  c->lr=c->r[0]; // 801CC3B8
  c->r[1]=c->r[1]+0x00000020u; // 801CC3BC
  return; // 801CC3C0
}

// InitParam__Q44nw4r3snd6detail8SeqTrackFv
void f_801CC3D0(Ctx* __restrict c) {
  trace_call(0x801CC3D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC3D0
  c->r[0]=c->lr; // 801CC3D4
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CC3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC3DC
  c->r[0]=0u+0x00000001u; // 801CC3E0
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CC3E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC3E8
  c->r[31]=0u+0x00000000u; // 801CC3EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC3F0
  c->r[30]=c->r[3]|c->r[3]; // 801CC3F4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801CC3F8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CC3FC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801CC400
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 801CC404
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801CC408
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801CC40C
  W32(c->r[3]+0x00000020u,c->r[31]); // 801CC410
  W8(c->r[3]+0x00000024u,c->r[0]); // 801CC414
  W8(c->r[3]+0x00000025u,c->r[0]); // 801CC418
  W8(c->r[3]+0x00000026u,c->r[31]); // 801CC41C
  W8(c->r[3]+0x00000027u,c->r[31]); // 801CC420
  W8(c->r[3]+0x00000040u,c->r[31]); // 801CC424
  W32(c->r[3]+0x00000044u,c->r[31]); // 801CC428
  W8(c->r[3]+0x00000048u,c->r[31]); // 801CC42C
  W8(c->r[3]+0x00000049u,c->r[31]); // 801CC430
  W8(c->r[3]+0x0000004Au,c->r[31]); // 801CC434
  W8(c->r[3]+0x0000004Bu,c->r[31]); // 801CC438
  W8(c->r[3]+0x0000004Cu,c->r[31]); // 801CC43C
  W32(c->r[3]+0x00000050u,c->r[31]); // 801CC440
  W32(c->r[3]+0x00000054u,c->r[31]); // 801CC444
  c->r[3]=c->r[3]+0x00000058u; // 801CC448
  c->lr=0x801CC450u; f_801C6160(c); // 801CC44C
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CC450
  c->r[7]=0u+0x0000007Fu; // 801CC454
  c->r[3]=0u+0x000000FFu; // 801CC458
  c->r[6]=0u+0x00000002u; // 801CC45C
  c->r[5]=0u+0x00000040u; // 801CC460
  c->r[4]=0u+0x0000003Cu; // 801CC464
  W8(c->r[30]+0x00000068u,c->r[31]); // 801CC468
  c->r[0]=0u+0xFFFFFFFFu; // 801CC46C
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 801CC470
  W8(c->r[30]+0x00000070u,c->r[7]); // 801CC474
  W8(c->r[30]+0x00000071u,c->r[7]); // 801CC478
  W16(c->r[30]+0x00000072u,c->r[31]); // 801CC47C
  W16(c->r[30]+0x00000074u,c->r[31]); // 801CC480
  W8(c->r[30]+0x00000076u,c->r[31]); // 801CC484
  W8(c->r[30]+0x00000077u,c->r[31]); // 801CC488
  W16(c->r[30]+0x00000078u,c->r[31]); // 801CC48C
  W16(c->r[30]+0x0000007Au,c->r[31]); // 801CC490
  W8(c->r[30]+0x0000007Cu,c->r[31]); // 801CC494
  W8(c->r[30]+0x0000007Du,c->r[31]); // 801CC498
  W16(c->r[30]+0x0000007Eu,c->r[31]); // 801CC49C
  W16(c->r[30]+0x00000080u,c->r[31]); // 801CC4A0
  W8(c->r[30]+0x00000088u,c->r[7]); // 801CC4A4
  W8(c->r[30]+0x00000089u,c->r[7]); // 801CC4A8
  W8(c->r[30]+0x00000082u,c->r[31]); // 801CC4AC
  W8(c->r[30]+0x00000083u,c->r[31]); // 801CC4B0
  W16(c->r[30]+0x00000084u,c->r[31]); // 801CC4B4
  W16(c->r[30]+0x00000086u,c->r[31]); // 801CC4B8
  W8(c->r[30]+0x0000008Au,c->r[6]); // 801CC4BC
  W8(c->r[30]+0x0000008Bu,c->r[31]); // 801CC4C0
  W8(c->r[30]+0x0000008Cu,c->r[31]); // 801CC4C4
  W8(c->r[30]+0x0000008Du,c->r[5]); // 801CC4C8
  W8(c->r[30]+0x0000008Eu,c->r[4]); // 801CC4CC
  W8(c->r[30]+0x0000008Fu,c->r[31]); // 801CC4D0
  W8(c->r[30]+0x00000090u,c->r[3]); // 801CC4D4
  W8(c->r[30]+0x00000091u,c->r[3]); // 801CC4D8
  W8(c->r[30]+0x00000092u,c->r[3]); // 801CC4DC
  W8(c->r[30]+0x00000093u,c->r[3]); // 801CC4E0
  W16(c->r[30]+0x00000094u,c->r[3]); // 801CC4E4
  W8(c->r[30]+0x00000096u,c->r[7]); // 801CC4E8
  W8(c->r[30]+0x00000097u,c->r[31]); // 801CC4EC
  W8(c->r[30]+0x00000098u,c->r[31]); // 801CC4F0
  W8(c->r[30]+0x00000099u,c->r[31]); // 801CC4F4
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[0]);} // 801CC4F8
  W8(c->r[30]+0x0000009Au,c->r[31]); // 801CC4FC
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 801CC500
  W16(c->r[30]+0x000000A4u,c->r[0]); // 801CC504
  W16(c->r[30]+0x000000A6u,c->r[0]); // 801CC508
  W16(c->r[30]+0x000000A8u,c->r[0]); // 801CC50C
  W16(c->r[30]+0x000000AAu,c->r[0]); // 801CC510
  W16(c->r[30]+0x000000ACu,c->r[0]); // 801CC514
  W16(c->r[30]+0x000000AEu,c->r[0]); // 801CC518
  W16(c->r[30]+0x000000B0u,c->r[0]); // 801CC51C
  W16(c->r[30]+0x000000B2u,c->r[0]); // 801CC520
  W16(c->r[30]+0x000000B4u,c->r[0]); // 801CC524
  W16(c->r[30]+0x000000B6u,c->r[0]); // 801CC528
  W16(c->r[30]+0x000000B8u,c->r[0]); // 801CC52C
  W16(c->r[30]+0x000000BAu,c->r[0]); // 801CC530
  W16(c->r[30]+0x000000BCu,c->r[0]); // 801CC534
  W16(c->r[30]+0x000000BEu,c->r[0]); // 801CC538
  W16(c->r[30]+0x000000C0u,c->r[0]); // 801CC53C
  W16(c->r[30]+0x000000C2u,c->r[0]); // 801CC540
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC544
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC548
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC54C
  c->lr=c->r[0]; // 801CC550
  c->r[1]=c->r[1]+0x00000010u; // 801CC554
  return; // 801CC558
}

// fn_801CC560
void f_801CC560(Ctx* __restrict c) {
  trace_call(0x801CC560u);
  c->r[0]=c->r[4]+c->r[5]; // 801CC560
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 801CC564
  W32(c->r[3]+0x00000020u,c->r[0]); // 801CC568
  return; // 801CC56C
}

// fn_801CC570
void f_801CC570(Ctx* __restrict c) {
  trace_call(0x801CC570u);
  c->r[4]=0u+0x00000000u; // 801CC570
  c->r[0]=0u+0x00000001u; // 801CC574
  W8(c->r[3]+0x0000004Au,c->r[4]); // 801CC578
  W8(c->r[3]+0x00000040u,c->r[4]); // 801CC57C
  W32(c->r[3]+0x00000044u,c->r[4]); // 801CC580
  W8(c->r[3]+0x00000005u,c->r[0]); // 801CC584
  return; // 801CC588
}

// fn_801CC590
void f_801CC590(Ctx* __restrict c) {
  trace_call(0x801CC590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC590
  c->r[0]=c->lr; // 801CC594
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC59C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC5A0
  c->r[30]=c->r[3]|c->r[3]; // 801CC5A4
  c->lr=0x801CC5ACu; f_801D76C0(c); // 801CC5A8
  c->r[3]=c->r[3]+0x00000354u; // 801CC5AC
  c->lr=0x801CC5B4u; f_80126DC0(c); // 801CC5B0
  c->lr=0x801CC5B8u; f_801D76C0(c); // 801CC5B4
  c->r[3]=c->r[3]+0x00000354u; // 801CC5B8
  c->lr=0x801CC5C0u; f_80126DC0(c); // 801CC5BC
  c->r[3]=c->r[30]|c->r[30]; // 801CC5C0
  c->lr=0x801CC5C8u; f_801CCA40(c); // 801CC5C4
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801CC5C8
  goto L_801CC5E8; // 801CC5CC
L_801CC5D0:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801CC5D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CC5D4
  if (crb(c,2)) { goto L_801CC5E4; } // 801CC5D8
  c->r[3]=c->r[31]|c->r[31]; // 801CC5DC
  c->lr=0x801CC5E4u; f_801BE7E0(c); // 801CC5E0
L_801CC5E4:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CC5E4
L_801CC5E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC5E8
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC5D0; } // 801CC5EC
  c->lr=0x801CC5F4u; f_801D76C0(c); // 801CC5F0
  c->r[3]=c->r[3]+0x00000354u; // 801CC5F4
  c->lr=0x801CC5FCu; f_80126EA0(c); // 801CC5F8
  c->lr=0x801CC600u; f_801D76C0(c); // 801CC5FC
  c->r[3]=c->r[3]+0x00000354u; // 801CC600
  c->lr=0x801CC608u; f_80126DC0(c); // 801CC604
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801CC608
  goto L_801CC61C; // 801CC60C
L_801CC610:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC610
  c->lr=0x801CC618u; f_801BEEA0(c); // 801CC614
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CC618
L_801CC61C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC61C
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC610; } // 801CC620
  c->r[31]=0u+0x00000000u; // 801CC624
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801CC628
  c->lr=0x801CC630u; f_801D76C0(c); // 801CC62C
  c->r[3]=c->r[3]+0x00000354u; // 801CC630
  c->lr=0x801CC638u; f_80126EA0(c); // 801CC634
  W8(c->r[30]+0x00000005u,c->r[31]); // 801CC638
  c->lr=0x801CC640u; f_801D76C0(c); // 801CC63C
  c->r[3]=c->r[3]+0x00000354u; // 801CC640
  c->lr=0x801CC648u; f_80126EA0(c); // 801CC644
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC648
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC64C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC650
  c->lr=c->r[0]; // 801CC654
  c->r[1]=c->r[1]+0x00000010u; // 801CC658
  return; // 801CC65C
}

// fn_801CC660
void f_801CC660(Ctx* __restrict c) {
  trace_call(0x801CC660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC660
  c->r[0]=c->lr; // 801CC664
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC66C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC670
  c->r[30]=c->r[3]|c->r[3]; // 801CC674
  c->lr=0x801CC67Cu; f_801D76C0(c); // 801CC678
  c->r[3]=c->r[3]+0x00000354u; // 801CC67C
  c->lr=0x801CC684u; f_80126DC0(c); // 801CC680
  c->r[0]=R8(c->r[30]+0x00000005u); // 801CC684
  cmps(c,0,(int32_t)c->r[0],0); // 801CC688
  if (!crb(c,2)) { goto L_801CC6A0; } // 801CC68C
  c->lr=0x801CC694u; f_801D76C0(c); // 801CC690
  c->r[3]=c->r[3]+0x00000354u; // 801CC694
  c->lr=0x801CC69Cu; f_80126EA0(c); // 801CC698
  goto L_801CC718; // 801CC69C
L_801CC6A0:;
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801CC6A0
  goto L_801CC704; // 801CC6A4
L_801CC6A8:;
  c->r[3]=R32(c->r[31]+0x000000B0u); // 801CC6A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC6AC
  if (!crb(c,1)) { goto L_801CC6BC; } // 801CC6B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC6B4
  W32(c->r[31]+0x000000B0u,c->r[0]); // 801CC6B8
L_801CC6BC:;
  c->r[0]=R32(c->r[31]+0x000000B0u); // 801CC6BC
  cmps(c,0,(int32_t)c->r[0],0); // 801CC6C0
  if (!crb(c,2)) { goto L_801CC6E8; } // 801CC6C4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CC6C8
  cmps(c,0,(int32_t)c->r[0],4); // 801CC6CC
  if (crb(c,2)) { goto L_801CC6E8; } // 801CC6D0
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 801CC6D4
  cmps(c,0,(int32_t)c->r[0],0); // 801CC6D8
  if (!crb(c,2)) { goto L_801CC6E8; } // 801CC6DC
  c->r[3]=c->r[31]|c->r[31]; // 801CC6E0
  c->lr=0x801CC6E8u; f_801BE850(c); // 801CC6E4
L_801CC6E8:;
  c->r[0]=R8(c->r[31]+0x00000038u); // 801CC6E8
  cmps(c,0,(int32_t)c->r[0],0); // 801CC6EC
  if (!crb(c,2)) { goto L_801CC700; } // 801CC6F0
  c->r[3]=c->r[31]|c->r[31]; // 801CC6F4
  c->r[4]=0u+0x00000001u; // 801CC6F8
  c->lr=0x801CC700u; f_801BEA20(c); // 801CC6FC
L_801CC700:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CC700
L_801CC704:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CC704
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC6A8; } // 801CC708
  c->lr=0x801CC710u; f_801D76C0(c); // 801CC70C
  c->r[3]=c->r[3]+0x00000354u; // 801CC710
  c->lr=0x801CC718u; f_80126EA0(c); // 801CC714
L_801CC718:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC71C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC720
  c->lr=c->r[0]; // 801CC724
  c->r[1]=c->r[1]+0x00000010u; // 801CC728
  return; // 801CC72C
}

// ParseNextTick__Q44nw4r3snd6detail8SeqTrackFb
void f_801CC730(Ctx* __restrict c) {
  trace_call(0x801CC730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC730
  c->r[0]=c->lr; // 801CC734
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC73C
  c->r[31]=c->r[4]|c->r[4]; // 801CC740
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC744
  c->r[30]=c->r[3]|c->r[3]; // 801CC748
  c->lr=0x801CC750u; f_801D76C0(c); // 801CC74C
  c->r[3]=c->r[3]+0x00000354u; // 801CC750
  c->lr=0x801CC758u; f_80126DC0(c); // 801CC754
  c->r[0]=R8(c->r[30]+0x00000005u); // 801CC758
  cmps(c,0,(int32_t)c->r[0],0); // 801CC75C
  if (!crb(c,2)) { goto L_801CC778; } // 801CC760
  c->lr=0x801CC768u; f_801D76C0(c); // 801CC764
  c->r[3]=c->r[3]+0x00000354u; // 801CC768
  c->lr=0x801CC770u; f_80126EA0(c); // 801CC76C
  c->r[3]=0u+0x00000000u; // 801CC770
  goto L_801CC8A4; // 801CC774
L_801CC778:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000074u); // 801CC778
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000072u); // 801CC77C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CC780
  if (!crb(c,0)) { goto L_801CC790; } // 801CC784
  c->r[0]=c->r[3]+0x00000001u; // 801CC788
  W16(c->r[30]+0x00000074u,c->r[0]); // 801CC78C
L_801CC790:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Au); // 801CC790
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000078u); // 801CC794
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CC798
  if (!crb(c,0)) { goto L_801CC7A8; } // 801CC79C
  c->r[0]=c->r[3]+0x00000001u; // 801CC7A0
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801CC7A4
L_801CC7A8:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000080u); // 801CC7A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000007Eu); // 801CC7AC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CC7B0
  if (!crb(c,0)) { goto L_801CC7C0; } // 801CC7B4
  c->r[0]=c->r[3]+0x00000001u; // 801CC7B8
  W16(c->r[30]+0x00000080u,c->r[0]); // 801CC7BC
L_801CC7C0:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000086u); // 801CC7C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000084u); // 801CC7C4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CC7C8
  if (!crb(c,0)) { goto L_801CC7D8; } // 801CC7CC
  c->r[0]=c->r[3]+0x00000001u; // 801CC7D0
  W16(c->r[30]+0x00000086u,c->r[0]); // 801CC7D4
L_801CC7D8:;
  c->r[0]=R8(c->r[30]+0x0000004Au); // 801CC7D8
  cmps(c,0,(int32_t)c->r[0],0); // 801CC7DC
  if (crb(c,2)) { goto L_801CC80C; } // 801CC7E0
  c->r[0]=R32(c->r[30]+0x000000C8u); // 801CC7E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CC7E8
  if (crb(c,2)) { goto L_801CC804; } // 801CC7EC
  c->lr=0x801CC7F4u; f_801D76C0(c); // 801CC7F0
  c->r[3]=c->r[3]+0x00000354u; // 801CC7F4
  c->lr=0x801CC7FCu; f_80126EA0(c); // 801CC7F8
  c->r[3]=0u+0x00000001u; // 801CC7FC
  goto L_801CC8A4; // 801CC800
L_801CC804:;
  c->r[0]=0u+0x00000000u; // 801CC804
  W8(c->r[30]+0x0000004Au,c->r[0]); // 801CC808
L_801CC80C:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 801CC80C
  cmps(c,0,(int32_t)c->r[3],0); // 801CC810
  if (!crb(c,1)) { goto L_801CC838; } // 801CC814
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801CC818
  W32(c->r[30]+0x00000044u,c->r[0]); // 801CC81C
  if (!crb(c,1)) { goto L_801CC838; } // 801CC820
  c->lr=0x801CC828u; f_801D76C0(c); // 801CC824
  c->r[3]=c->r[3]+0x00000354u; // 801CC828
  c->lr=0x801CC830u; f_80126EA0(c); // 801CC82C
  c->r[3]=0u+0x00000001u; // 801CC830
  goto L_801CC8A4; // 801CC834
L_801CC838:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 801CC838
  cmps(c,0,(int32_t)c->r[0],0); // 801CC83C
  if (crb(c,2)) { goto L_801CC894; } // 801CC840
  goto L_801CC87C; // 801CC844
L_801CC848:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801CC848
  c->r[3]=c->r[30]|c->r[30]; // 801CC84C
  c->r[4]=c->r[31]|c->r[31]; // 801CC850
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CC854
  c->ctr=c->r[12]; // 801CC858
  if (true) { c->lr=0x801CC860u; dispatch(c,c->ctr); } // 801CC85C
  cmps(c,0,(int32_t)c->r[3],1); // 801CC860
  if (!crb(c,2)) { goto L_801CC87C; } // 801CC864
  c->lr=0x801CC86Cu; f_801D76C0(c); // 801CC868
  c->r[3]=c->r[3]+0x00000354u; // 801CC86C
  c->lr=0x801CC874u; f_80126EA0(c); // 801CC870
  c->r[3]=0u+0xFFFFFFFFu; // 801CC874
  goto L_801CC8A4; // 801CC878
L_801CC87C:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 801CC87C
  cmps(c,0,(int32_t)c->r[0],0); // 801CC880
  if (!crb(c,2)) { goto L_801CC894; } // 801CC884
  c->r[0]=R8(c->r[30]+0x0000004Au); // 801CC888
  cmps(c,0,(int32_t)c->r[0],0); // 801CC88C
  if (crb(c,2)) { IRQCHK(c); goto L_801CC848; } // 801CC890
L_801CC894:;
  c->lr=0x801CC898u; f_801D76C0(c); // 801CC894
  c->r[3]=c->r[3]+0x00000354u; // 801CC898
  c->lr=0x801CC8A0u; f_80126EA0(c); // 801CC89C
  c->r[3]=0u+0x00000001u; // 801CC8A0
L_801CC8A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC8A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC8A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC8AC
  c->lr=c->r[0]; // 801CC8B0
  c->r[1]=c->r[1]+0x00000010u; // 801CC8B4
  return; // 801CC8B8
}

// fn_801CC8C0
void f_801CC8C0(Ctx* __restrict c) {
  trace_call(0x801CC8C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC8C0
  c->r[0]=c->lr; // 801CC8C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC8C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC8CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC8D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC8D4
  c->r[29]=c->r[3]|c->r[3]; // 801CC8D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CC8DC
  c->r[28]=c->r[4]|c->r[4]; // 801CC8E0
  c->lr=0x801CC8E8u; f_801D76C0(c); // 801CC8E4
  c->r[3]=c->r[3]+0x00000354u; // 801CC8E8
  c->lr=0x801CC8F0u; f_80126DC0(c); // 801CC8EC
  c->r[3]=c->r[29]|c->r[29]; // 801CC8F0
  c->lr=0x801CC8F8u; f_801CCA40(c); // 801CC8F4
  c->r[29]=R32(c->r[29]+0x000000C8u); // 801CC8F8
  c->r[30]=0u+0x803A0000u; // 801CC8FC
  c->r[31]=0u+0x803A0000u; // 801CC900
  goto L_801CC96C; // 801CC904
L_801CC908:;
  c->r[0]=R8(c->r[29]+0x00000036u); // 801CC908
  cmps(c,0,(int32_t)c->r[0],0); // 801CC90C
  if (crb(c,2)) { goto L_801CC968; } // 801CC910
  cmps(c,0,(int32_t)c->r[28],0); // 801CC914
  if (crb(c,0)) { goto L_801CC960; } // 801CC918
  cmpu(c,0,c->r[28],0x0000007Fu); // 801CC91C
  c->r[0]=0u+0x00000000u; // 801CC920
  if (crb(c,1)) { goto L_801CC92C; } // 801CC924
  c->r[0]=0u+0x00000001u; // 801CC928
L_801CC92C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CC92C
  if (!crb(c,2)) { goto L_801CC954; } // 801CC930
  c->r[6]=c->r[28]|c->r[28]; // 801CC934
  c->r[3]=c->r[30]+0x00000068u; // 801CC938
  c->r[5]=c->r[31]+0x000000C8u; // 801CC93C
  c->r[4]=0u+0x0000014Au; // 801CC940
  c->r[7]=0u+0x00000000u; // 801CC944
  c->r[8]=0u+0x0000007Fu; // 801CC948
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC94C
  c->lr=0x801CC954u; f_80212260(c); // 801CC950
L_801CC954:;
  c->r[3]=c->r[29]|c->r[29]; // 801CC954
  c->r[4]=rotl(c->r[28],0)&0x000000FFu; // 801CC958
  c->lr=0x801CC960u; f_801C0350(c); // 801CC95C
L_801CC960:;
  c->r[3]=c->r[29]|c->r[29]; // 801CC960
  c->lr=0x801CC968u; f_801BE7E0(c); // 801CC964
L_801CC968:;
  c->r[29]=R32(c->r[29]+0x000000D4u); // 801CC968
L_801CC96C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CC96C
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC908; } // 801CC970
  c->lr=0x801CC978u; f_801D76C0(c); // 801CC974
  c->r[3]=c->r[3]+0x00000354u; // 801CC978
  c->lr=0x801CC980u; f_80126EA0(c); // 801CC97C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC980
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC984
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC988
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC98C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CC990
  c->lr=c->r[0]; // 801CC994
  c->r[1]=c->r[1]+0x00000020u; // 801CC998
  return; // 801CC99C
}

// fn_801CC9A0
void f_801CC9A0(Ctx* __restrict c) {
  trace_call(0x801CC9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC9A0
  c->r[0]=c->lr; // 801CC9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC9A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC9AC
  c->r[31]=c->r[3]|c->r[3]; // 801CC9B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC9B4
  c->r[30]=c->r[4]|c->r[4]; // 801CC9B8
  c->lr=0x801CC9C0u; f_801D76C0(c); // 801CC9BC
  c->r[3]=c->r[3]+0x00000354u; // 801CC9C0
  c->lr=0x801CC9C8u; f_80126DC0(c); // 801CC9C4
  c->r[31]=R32(c->r[31]+0x000000C8u); // 801CC9C8
  goto L_801CCA08; // 801CC9CC
L_801CC9D0:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801CC9D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CC9D4
  if (crb(c,2)) { goto L_801CCA04; } // 801CC9D8
  c->r[3]=R8(c->r[31]+0x00000035u); // 801CC9DC
  c->r[0]=0u-c->r[3]; // 801CC9E0
  c->r[0]=c->r[0]|c->r[3]; // 801CC9E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CC9E8
  cmpu(c,0,c->r[30],c->r[0]); // 801CC9EC
  if (crb(c,2)) { goto L_801CCA04; } // 801CC9F0
  W8(c->r[31]+0x00000035u,c->r[30]); // 801CC9F4
  c->r[4]=c->r[30]|c->r[30]; // 801CC9F8
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CC9FC
  c->lr=0x801CCA04u; f_801DE6F0(c); // 801CCA00
L_801CCA04:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CCA04
L_801CCA08:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CCA08
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC9D0; } // 801CCA0C
  c->lr=0x801CCA14u; f_801D76C0(c); // 801CCA10
  c->r[3]=c->r[3]+0x00000354u; // 801CCA14
  c->lr=0x801CCA1Cu; f_80126EA0(c); // 801CCA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCA1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCA20
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CCA24
  c->lr=c->r[0]; // 801CCA28
  c->r[1]=c->r[1]+0x00000010u; // 801CCA2C
  return; // 801CCA30
}

// fn_801CCA40
void f_801CCA40(Ctx* __restrict c) {
  trace_call(0x801CCA40u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCA40
  c->r[0]=c->lr; // 801CCA44
  W32(c->r[1]+0x00000114u,c->r[0]); // 801CCA48
  c->r[11]=c->r[1]+0x00000050u; // 801CCA4C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 801CCA50
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 801CCA54
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 801CCA58
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 801CCA5C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 801CCA60
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 801CCA64
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 801CCA68
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 801CCA6C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[27]);} // 801CCA70
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,27,ea,0,0);} // 801CCA74
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[26]);} // 801CCA78
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,26,ea,0,0);} // 801CCA7C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[25]);} // 801CCA80
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,25,ea,0,0);} // 801CCA84
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[24]);} // 801CCA88
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,24,ea,0,0);} // 801CCA8C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[23]);} // 801CCA90
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,23,ea,0,0);} // 801CCA94
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[22]);} // 801CCA98
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,22,ea,0,0);} // 801CCA9C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[21]);} // 801CCAA0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,21,ea,0,0);} // 801CCAA4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[20]);} // 801CCAA8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,20,ea,0,0);} // 801CCAAC
  c->lr=0x801CCAB4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CCAB0
  c->r[0]=0u+0x43300000u; // 801CCAB4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CCAB8
  c->r[29]=c->r[3]|c->r[3]; // 801CCABC
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CCAC0
  c->lr=0x801CCAC8u; f_801D76C0(c); // 801CCAC4
  c->r[3]=c->r[3]+0x00000354u; // 801CCAC8
  c->lr=0x801CCAD0u; f_80126DC0(c); // 801CCACC
  c->r[0]=R8(c->r[29]+0x00000005u); // 801CCAD0
  cmps(c,0,(int32_t)c->r[0],0); // 801CCAD4
  if (!crb(c,2)) { goto L_801CCAEC; } // 801CCAD8
  c->lr=0x801CCAE0u; f_801D76C0(c); // 801CCADC
  c->r[3]=c->r[3]+0x00000354u; // 801CCAE0
  c->lr=0x801CCAE8u; f_80126EA0(c); // 801CCAE4
  goto L_801CCF94; // 801CCAE8
L_801CCAEC:;
  c->r[0]=R32(c->r[29]+0x000000C8u); // 801CCAEC
  cmps(c,0,(int32_t)c->r[0],0); // 801CCAF0
  if (!crb(c,2)) { goto L_801CCB08; } // 801CCAF4
  c->lr=0x801CCAFCu; f_801D76C0(c); // 801CCAF8
  c->r[3]=c->r[3]+0x00000354u; // 801CCAFC
  c->lr=0x801CCB04u; f_80126EA0(c); // 801CCB00
  goto L_801CCF94; // 801CCB04
L_801CCB08:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000072u); // 801CCB08
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000074u); // 801CCB0C
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CCB10
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801CCB14
  if (crb(c,0)) { goto L_801CCB24; } // 801CCB18
  c->r[0]=R8(c->r[29]+0x00000071u); // 801CCB1C
  goto L_801CCB40; // 801CCB20
L_801CCB24:;
  c->r[5]=R8(c->r[29]+0x00000070u); // 801CCB24
  c->r[0]=R8(c->r[29]+0x00000071u); // 801CCB28
  c->r[0]=c->r[0]-c->r[5]; // 801CCB2C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801CCB30
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801CCB34
  c->r[0]=c->r[5]+c->r[0]; // 801CCB38
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801CCB3C
L_801CCB40:;
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CCB40
  c->r[0]=R8(c->r[29]+0x00000088u); // 801CCB44
  {uint32_t ea=c->r[2]+0xFFFFA8A8u; c->f[3]=RF64(ea);} // 801CCB48
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CCB4C
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CCB50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCB54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 801CCB58
  c->r[0]=R8(c->r[3]+0x000000E8u); // 801CCB5C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801CCB60
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CCB64
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801CCB68
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CCB6C
  c->f[6]=c->ps1[6]=S(c->f[1]/c->f[4]); // 801CCB70
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCB74
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CCB78
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 801CCB7C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000084u); // 801CCB80
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000086u); // 801CCB84
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[3]); // 801CCB88
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801CCB8C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[4]); // 801CCB90
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[6]); // 801CCB94
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 801CCB98
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801CCB9C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 801CCBA0
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[3]); // 801CCBA4
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[2]); // 801CCBA8
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[1]); // 801CCBAC
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[0]); // 801CCBB0
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[5]); // 801CCBB4
  if (crb(c,0)) { goto L_801CCBC8; } // 801CCBB8
  c->r[0]=R8(c->r[29]+0x00000083u); // 801CCBBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCBC0
  goto L_801CCBEC; // 801CCBC4
L_801CCBC8:;
  c->r[7]=R8(c->r[29]+0x00000082u); // 801CCBC8
  c->r[0]=R8(c->r[29]+0x00000083u); // 801CCBCC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801CCBD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCBD4
  c->r[0]=c->r[0]-c->r[4]; // 801CCBD8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801CCBDC
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 801CCBE0
  c->r[0]=c->r[7]+c->r[0]; // 801CCBE4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCBE8
L_801CCBEC:;
  c->r[0]=c->r[0]^0x80000000u; // 801CCBEC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CCBF0
  c->r[0]=R8(c->r[29]+0x0000008Au); // 801CCBF4
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[1]=RF64(ea);} // 801CCBF8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801CCBFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCC00
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801CCC04
  {uint32_t ea=c->r[2]+0xFFFFA894u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCC08
  {uint32_t ea=c->r[2]+0xFFFFA8A8u; c->f[3]=RF64(ea);} // 801CCC0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801CCC10
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801CCC14
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[27]=c->ps1[27]=RF32(ea);} // 801CCC18
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CCC1C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801CCC20
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCC24
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[4]); // 801CCC28
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000078u); // 801CCC2C
  c->f[28]=c->ps1[28]=S(c->f[2]*c->f[1]); // 801CCC30
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Au); // 801CCC34
  c->f[27]=c->ps1[27]=S(c->f[27]*c->f[0]); // 801CCC38
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 801CCC3C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801CCC40
  if (crb(c,0)) { goto L_801CCC54; } // 801CCC44
  c->r[0]=R8(c->r[29]+0x00000077u); // 801CCC48
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCC4C
  goto L_801CCC78; // 801CCC50
L_801CCC54:;
  c->r[7]=R8(c->r[29]+0x00000076u); // 801CCC54
  c->r[0]=R8(c->r[29]+0x00000077u); // 801CCC58
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801CCC5C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCC60
  c->r[0]=c->r[0]-c->r[4]; // 801CCC64
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801CCC68
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 801CCC6C
  c->r[0]=c->r[7]+c->r[0]; // 801CCC70
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCC74
L_801CCC78:;
  c->r[0]=c->r[0]^0x80000000u; // 801CCC78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCC7C
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=RF64(ea);} // 801CCC80
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 801CCC84
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCC88
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CCC8C
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCC90
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CCC94
  fcmp(c,0,c->f[0],c->f[2]); // 801CCC98
  if (!crb(c,1)) { goto L_801CCCA4; } // 801CCC9C
  goto L_801CCCB8; // 801CCCA0
L_801CCCA4:;
  {uint32_t ea=c->r[2]+0xFFFFA89Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCCA4
  fcmp(c,0,c->f[0],c->f[2]); // 801CCCA8
  if (!crb(c,0)) { goto L_801CCCB4; } // 801CCCAC
  goto L_801CCCB8; // 801CCCB0
L_801CCCB4:;
  c->f[2]=c->f[0]; // 801CCCB4
L_801CCCB8:;
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[2]); // 801CCCB8
  {uint32_t ea=c->r[29]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCCBC
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCCC0
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCCC4
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[1]); // 801CCCC8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCCCC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000007Eu); // 801CCCD0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000080u); // 801CCCD4
  c->f[26]=c->ps1[26]=S(c->f[26]*c->f[2]); // 801CCCD8
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 801CCCDC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801CCCE0
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 801CCCE4
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 801CCCE8
  if (crb(c,0)) { goto L_801CCCFC; } // 801CCCEC
  c->r[0]=R8(c->r[29]+0x0000007Du); // 801CCCF0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCCF4
  goto L_801CCD20; // 801CCCF8
L_801CCCFC:;
  c->r[7]=R8(c->r[29]+0x0000007Cu); // 801CCCFC
  c->r[0]=R8(c->r[29]+0x0000007Du); // 801CCD00
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801CCD04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCD08
  c->r[0]=c->r[0]-c->r[4]; // 801CCD0C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801CCD10
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[6]); // 801CCD14
  c->r[0]=c->r[7]+c->r[0]; // 801CCD18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CCD1C
L_801CCD20:;
  c->r[0]=c->r[0]^0x80000000u; // 801CCD20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CCD24
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=RF64(ea);} // 801CCD28
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CCD2C
  {uint32_t ea=c->r[2]+0xFFFFA898u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCD30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CCD34
  {uint32_t ea=c->r[2]+0xFFFFA8A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCD38
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CCD3C
  fcmp(c,0,c->f[0],c->f[2]); // 801CCD40
  if (!crb(c,1)) { goto L_801CCD4C; } // 801CCD44
  goto L_801CCD60; // 801CCD48
L_801CCD4C:;
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCD4C
  fcmp(c,0,c->f[0],c->f[2]); // 801CCD50
  if (!crb(c,0)) { goto L_801CCD5C; } // 801CCD54
  goto L_801CCD60; // 801CCD58
L_801CCD5C:;
  c->f[2]=c->f[0]; // 801CCD5C
L_801CCD60:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[2]); // 801CCD60
  {uint32_t ea=c->r[29]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCD64
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 801CCD68
  {uint32_t ea=c->r[29]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCD6C
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 801CCD70
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CCD74
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801CCD78
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 801CCD7C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCD80
  cmps(c,0,(int32_t)c->r[0],0); // 801CCD84
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[1]); // 801CCD88
  c->r[31]=R8(c->r[29]+0x0000009Au); // 801CCD8C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801CCD90
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[23]=c->ps1[23]=RF32(ea);} // 801CCD94
  if (crb(c,2)) { goto L_801CCDA4; } // 801CCD98
  {uint32_t ea=c->r[3]+0x00000018u; c->f[23]=c->ps1[23]=RF32(ea);} // 801CCD9C
  c->r[31]=c->r[0]|c->r[0]; // 801CCDA0
L_801CCDA4:;
  c->r[0]=R8(c->r[29]+0x00000096u); // 801CCDA4
  c->r[25]=c->r[1]+0x00000008u; // 801CCDA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCDAC
  c->r[27]=0u+0x00000000u; // 801CCDB0
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[22]=c->ps1[22]=RF32(ea);} // 801CCDB4
  {uint32_t ea=c->r[2]+0xFFFFA8A8u; c->f[30]=RF64(ea);} // 801CCDB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801CCDBC
  c->f[21]=c->f[22]; // 801CCDC0
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CCDC4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 801CCDC8
  {uint32_t ea=c->r[2]+0xFFFFA888u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCDCC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CCDD0
  c->r[26]=R8(c->r[3]+0x0000001Du); // 801CCDD4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801CCDD8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CCDDC
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[0]); // 801CCDE0
  c->f[22]=c->ps1[22]=S(c->f[22]+c->f[2]); // 801CCDE4
L_801CCDE8:;
  c->r[3]=c->r[29]+c->r[27]; // 801CCDE8
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[21]);} // 801CCDEC
  c->r[0]=R8(c->r[3]+0x00000097u); // 801CCDF0
  c->r[4]=c->r[27]|c->r[27]; // 801CCDF4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CCDF8
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCDFC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CCE00
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CCE04
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 801CCE08
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[31]); // 801CCE0C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801CCE10
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801CCE14
  c->lr=0x801CCE1Cu; f_801BB5A0(c); // 801CCE18
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCE1C
  c->r[27]=c->r[27]+0x00000001u; // 801CCE20
  cmps(c,0,(int32_t)c->r[27],3); // 801CCE24
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801CCE28
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 801CCE2C
  c->r[25]=c->r[25]+0x00000004u; // 801CCE30
  if (crb(c,0)) { IRQCHK(c); goto L_801CCDE8; } // 801CCE34
  c->r[30]=R32(c->r[29]+0x000000C8u); // 801CCE38
  c->r[27]=0u+0x803A0000u; // 801CCE3C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[21]=c->ps1[21]=RF32(ea);} // 801CCE40
  c->r[28]=0u+0x803A0000u; // 801CCE44
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[20]=c->ps1[20]=RF32(ea);} // 801CCE48
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CCE4C
  goto L_801CCF80; // 801CCE50
L_801CCE54:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[29]);} // 801CCE54
  c->f[1]=c->f[23]; // 801CCE58
  c->r[3]=c->r[30]|c->r[30]; // 801CCE5C
  c->r[4]=c->r[31]|c->r[31]; // 801CCE60
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[28]);} // 801CCE64
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[27]);} // 801CCE68
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[26]);} // 801CCE6C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[25]);} // 801CCE70
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[24]);} // 801CCE74
  c->lr=0x801CCE7Cu; f_801BEA60(c); // 801CCE78
  W8(c->r[30]+0x0000003Cu,c->r[26]); // 801CCE7C
  c->r[25]=c->r[30]|c->r[30]; // 801CCE80
  c->r[24]=0u+0x00000000u; // 801CCE84
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CCE88
  c->r[0]=R32(c->r[3]+0x00000020u); // 801CCE8C
  W32(c->r[30]+0x00000058u,c->r[0]); // 801CCE90
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CCE94
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCE98
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 801CCE9C
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[22]);} // 801CCEA0
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[21]);} // 801CCEA4
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[20]);} // 801CCEA8
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[31]);} // 801CCEAC
L_801CCEB0:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CCEB0
  c->r[4]=c->r[24]|c->r[24]; // 801CCEB4
  c->lr=0x801CCEBCu; f_801BB820(c); // 801CCEB8
  c->f[30]=c->f[1]; // 801CCEBC
  cmpu(c,0,c->r[24],0x00000003u); // 801CCEC0
  c->r[0]=0u+0x00000000u; // 801CCEC4
  if (crb(c,1)) { goto L_801CCED0; } // 801CCEC8
  c->r[0]=0u+0x00000001u; // 801CCECC
L_801CCED0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CCED0
  if (!crb(c,2)) { goto L_801CCEF8; } // 801CCED4
  c->r[6]=c->r[24]|c->r[24]; // 801CCED8
  c->r[3]=c->r[27]+0x00000380u; // 801CCEDC
  c->r[5]=c->r[28]+0x00000338u; // 801CCEE0
  c->r[4]=0u+0x000000BAu; // 801CCEE4
  c->r[7]=0u+0x00000000u; // 801CCEE8
  c->r[8]=0u+0x00000004u; // 801CCEEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCEF0
  c->lr=0x801CCEF8u; f_80212260(c); // 801CCEF4
L_801CCEF8:;
  c->r[24]=c->r[24]+0x00000001u; // 801CCEF8
  {uint32_t ea=c->r[25]+0x00000070u; WF32(ea,c->f[30]);} // 801CCEFC
  cmps(c,0,(int32_t)c->r[24],4); // 801CCF00
  c->r[25]=c->r[25]+0x00000004u; // 801CCF04
  if (crb(c,0)) { IRQCHK(c); goto L_801CCEB0; } // 801CCF08
  c->r[24]=0u+0x00000000u; // 801CCF0C
  c->r[25]=0u+0x00000000u; // 801CCF10
  goto L_801CCF34; // 801CCF14
L_801CCF18:;
  c->r[5]=c->r[3]+c->r[25]; // 801CCF18
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801CCF1C
  c->r[4]=c->r[24]|c->r[24]; // 801CCF20
  c->r[5]=c->r[5]+0x00000050u; // 801CCF24
  c->lr=0x801CCF2Cu; f_801DEC30(c); // 801CCF28
  c->r[25]=c->r[25]+0x00000018u; // 801CCF2C
  c->r[24]=c->r[24]+0x00000001u; // 801CCF30
L_801CCF34:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CCF34
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801CCF38
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801CCF3C
  if (crb(c,0)) { IRQCHK(c); goto L_801CCF18; } // 801CCF40
  {uint32_t ea=c->r[29]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCF44
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CCF48
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CCF4C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 801CCF50
  c->r[0]=R32(c->r[29]+0x00000060u); // 801CCF54
  W32(c->r[30]+0x00000024u,c->r[0]); // 801CCF58
  c->r[0]=R8(c->r[29]+0x00000064u); // 801CCF5C
  W8(c->r[30]+0x00000028u,c->r[0]); // 801CCF60
  c->r[0]=R16(c->r[29]+0x00000065u); // 801CCF64
  W16(c->r[30]+0x00000029u,c->r[0]); // 801CCF68
  c->r[0]=R8(c->r[29]+0x00000067u); // 801CCF6C
  W8(c->r[30]+0x0000002Bu,c->r[0]); // 801CCF70
  c->r[0]=R8(c->r[29]+0x00000068u); // 801CCF74
  W8(c->r[30]+0x00000034u,c->r[0]); // 801CCF78
  c->r[30]=R32(c->r[30]+0x000000D4u); // 801CCF7C
L_801CCF80:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CCF80
  if (!crb(c,2)) { IRQCHK(c); goto L_801CCE54; } // 801CCF84
  c->lr=0x801CCF8Cu; f_801D76C0(c); // 801CCF88
  c->r[3]=c->r[3]+0x00000354u; // 801CCF8C
  c->lr=0x801CCF94u; f_80126EA0(c); // 801CCF90
L_801CCF94:;
  c->r[11]=c->r[1]+0x00000050u; // 801CCF94
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 801CCF98
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 801CCF9C
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 801CCFA0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 801CCFA4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 801CCFA8
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 801CCFAC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,28,ea,0,0);} // 801CCFB0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 801CCFB4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,27,ea,0,0);} // 801CCFB8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[27]=RF64(ea);} // 801CCFBC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,26,ea,0,0);} // 801CCFC0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[26]=RF64(ea);} // 801CCFC4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,25,ea,0,0);} // 801CCFC8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[25]=RF64(ea);} // 801CCFCC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,24,ea,0,0);} // 801CCFD0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[24]=RF64(ea);} // 801CCFD4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,23,ea,0,0);} // 801CCFD8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[23]=RF64(ea);} // 801CCFDC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,22,ea,0,0);} // 801CCFE0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[22]=RF64(ea);} // 801CCFE4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,21,ea,0,0);} // 801CCFE8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[21]=RF64(ea);} // 801CCFEC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,20,ea,0,0);} // 801CCFF0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[20]=RF64(ea);} // 801CCFF4
  c->lr=0x801CCFFCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CCFF8
  c->r[0]=R32(c->r[1]+0x00000114u); // 801CCFFC
  c->lr=c->r[0]; // 801CD000
  c->r[1]=c->r[1]+0x00000110u; // 801CD004
  return; // 801CD008
}

// fn_801CD010
void f_801CD010(Ctx* __restrict c) {
  trace_call(0x801CD010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD010
  c->r[0]=c->lr; // 801CD014
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD01C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD020
  c->r[30]=c->r[3]|c->r[3]; // 801CD024
  c->lr=0x801CD02Cu; f_801D76C0(c); // 801CD028
  c->r[3]=c->r[3]+0x00000354u; // 801CD02C
  c->lr=0x801CD034u; f_80126DC0(c); // 801CD030
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801CD034
  goto L_801CD048; // 801CD038
L_801CD03C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD03C
  c->lr=0x801CD044u; f_801BEEA0(c); // 801CD040
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CD044
L_801CD048:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CD048
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD03C; } // 801CD04C
  c->r[0]=0u+0x00000000u; // 801CD050
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801CD054
  c->lr=0x801CD05Cu; f_801D76C0(c); // 801CD058
  c->r[3]=c->r[3]+0x00000354u; // 801CD05C
  c->lr=0x801CD064u; f_80126EA0(c); // 801CD060
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD068
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD06C
  c->lr=c->r[0]; // 801CD070
  c->r[1]=c->r[1]+0x00000010u; // 801CD074
  return; // 801CD078
}

// fn_801CD080
void f_801CD080(Ctx* __restrict c) {
  trace_call(0x801CD080u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD080
  c->r[0]=c->lr; // 801CD084
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD088
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD08C
  c->r[31]=0u+0x803A0000u; // 801CD090
  c->r[31]=c->r[31]+0x00000068u; // 801CD094
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD098
  c->r[30]=c->r[4]|c->r[4]; // 801CD09C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD0A0
  c->r[29]=c->r[5]|c->r[5]; // 801CD0A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CD0A8
  c->r[28]=c->r[3]|c->r[3]; // 801CD0AC
  c->lr=0x801CD0B4u; f_801D76C0(c); // 801CD0B0
  c->r[3]=c->r[3]+0x00000354u; // 801CD0B4
  c->lr=0x801CD0BCu; f_80126DC0(c); // 801CD0B8
  cmps(c,0,(int32_t)c->r[28],0); // 801CD0BC
  if (!crb(c,2)) { goto L_801CD0D8; } // 801CD0C0
  c->r[3]=c->r[31]+0x00000000u; // 801CD0C4
  c->r[5]=c->r[31]+0x000000A0u; // 801CD0C8
  c->r[4]=0u+0x0000023Bu; // 801CD0CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD0D0
  c->lr=0x801CD0D8u; f_80212260(c); // 801CD0D4
L_801CD0D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CD0D8
  if (!crb(c,2)) { goto L_801CD0F4; } // 801CD0DC
  c->r[3]=c->r[31]+0x00000000u; // 801CD0E0
  c->r[5]=c->r[31]+0x000000CCu; // 801CD0E4
  c->r[4]=0u+0x0000023Cu; // 801CD0E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD0EC
  c->lr=0x801CD0F4u; f_80212260(c); // 801CD0F0
L_801CD0F4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CD0F4
  if (crb(c,2)) { goto L_801CD104; } // 801CD0F8
  cmps(c,0,(int32_t)c->r[30],2); // 801CD0FC
  if (!crb(c,2)) { goto L_801CD10C; } // 801CD100
L_801CD104:;
  c->r[3]=c->r[28]|c->r[28]; // 801CD104
  c->lr=0x801CD10Cu; f_801BEEA0(c); // 801CD108
L_801CD10C:;
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CD10C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD110
  if (crb(c,2)) { goto L_801CD12C; } // 801CD114
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD118
  c->r[4]=c->r[28]|c->r[28]; // 801CD11C
  c->r[12]=R32(c->r[12]+0x00000058u); // 801CD120
  c->ctr=c->r[12]; // 801CD124
  if (true) { c->lr=0x801CD12Cu; dispatch(c,c->ctr); } // 801CD128
L_801CD12C:;
  c->r[30]=R32(c->r[29]+0x000000C8u); // 801CD12C
  cmpu(c,0,c->r[30],c->r[28]); // 801CD130
  if (!crb(c,2)) { goto L_801CD150; } // 801CD134
  c->r[0]=R32(c->r[28]+0x000000D4u); // 801CD138
  W32(c->r[29]+0x000000C8u,c->r[0]); // 801CD13C
  c->lr=0x801CD144u; f_801D76C0(c); // 801CD140
  c->r[3]=c->r[3]+0x00000354u; // 801CD144
  c->lr=0x801CD14Cu; f_80126EA0(c); // 801CD148
  goto L_801CD1C0; // 801CD14C
L_801CD150:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CD150
  if (!crb(c,2)) { goto L_801CD194; } // 801CD154
  c->r[3]=c->r[31]+0x00000000u; // 801CD158
  c->r[5]=c->r[31]+0x000000F8u; // 801CD15C
  c->r[4]=0u+0x00000251u; // 801CD160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD164
  c->lr=0x801CD16Cu; f_80212260(c); // 801CD168
  goto L_801CD194; // 801CD16C
L_801CD170:;
  cmpu(c,0,c->r[0],c->r[28]); // 801CD170
  if (!crb(c,2)) { goto L_801CD190; } // 801CD174
  c->r[0]=R32(c->r[28]+0x000000D4u); // 801CD178
  W32(c->r[30]+0x000000D4u,c->r[0]); // 801CD17C
  c->lr=0x801CD184u; f_801D76C0(c); // 801CD180
  c->r[3]=c->r[3]+0x00000354u; // 801CD184
  c->lr=0x801CD18Cu; f_80126EA0(c); // 801CD188
  goto L_801CD1C0; // 801CD18C
L_801CD190:;
  c->r[30]=c->r[0]|c->r[0]; // 801CD190
L_801CD194:;
  c->r[0]=R32(c->r[30]+0x000000D4u); // 801CD194
  cmps(c,0,(int32_t)c->r[0],0); // 801CD198
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD170; } // 801CD19C
  c->r[3]=c->r[31]+0x00000000u; // 801CD1A0
  c->r[5]=c->r[31]+0x00000120u; // 801CD1A4
  c->r[4]=0u+0x0000025Au; // 801CD1A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD1AC
  c->lr=0x801CD1B4u; f_80212260(c); // 801CD1B0
  c->lr=0x801CD1B8u; f_801D76C0(c); // 801CD1B4
  c->r[3]=c->r[3]+0x00000354u; // 801CD1B8
  c->lr=0x801CD1C0u; f_80126EA0(c); // 801CD1BC
L_801CD1C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD1C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD1C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD1C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD1CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD1D0
  c->lr=c->r[0]; // 801CD1D4
  c->r[1]=c->r[1]+0x00000020u; // 801CD1D8
  return; // 801CD1DC
}

// fn_801CD1E0
void f_801CD1E0(Ctx* __restrict c) {
  trace_call(0x801CD1E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD1E0
  c->r[0]=c->lr; // 801CD1E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD1E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD1EC
  c->r[31]=c->r[4]|c->r[4]; // 801CD1F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD1F4
  c->r[30]=c->r[3]|c->r[3]; // 801CD1F8
  c->lr=0x801CD200u; f_801D76C0(c); // 801CD1FC
  c->r[3]=c->r[3]+0x00000354u; // 801CD200
  c->lr=0x801CD208u; f_80126DC0(c); // 801CD204
  cmps(c,0,(int32_t)c->r[31],0); // 801CD208
  if (crb(c,2)) { goto L_801CD22C; } // 801CD20C
  cmps(c,0,(int32_t)c->r[31],3); // 801CD210
  if (crb(c,2)) { goto L_801CD238; } // 801CD214
  cmps(c,0,(int32_t)c->r[31],2); // 801CD218
  if (crb(c,2)) { goto L_801CD288; } // 801CD21C
  cmps(c,0,(int32_t)c->r[31],1); // 801CD220
  if (crb(c,2)) { goto L_801CD318; } // 801CD224
  goto L_801CD320; // 801CD228
L_801CD22C:;
  c->r[0]=0u+0x00000000u; // 801CD22C
  W8(c->r[30]+0x00000048u,c->r[0]); // 801CD230
  goto L_801CD320; // 801CD234
L_801CD238:;
  c->lr=0x801CD23Cu; f_801D76C0(c); // 801CD238
  c->r[3]=c->r[3]+0x00000354u; // 801CD23C
  c->lr=0x801CD244u; f_80126DC0(c); // 801CD240
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801CD244
  goto L_801CD260; // 801CD248
L_801CD24C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD24C
  c->lr=0x801CD254u; f_801BEEA0(c); // 801CD250
  c->r[3]=c->r[31]|c->r[31]; // 801CD254
  c->lr=0x801CD25Cu; f_801BE8D0(c); // 801CD258
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CD25C
L_801CD260:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CD260
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD24C; } // 801CD264
  c->r[0]=0u+0x00000000u; // 801CD268
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801CD26C
  c->lr=0x801CD274u; f_801D76C0(c); // 801CD270
  c->r[3]=c->r[3]+0x00000354u; // 801CD274
  c->lr=0x801CD27Cu; f_80126EA0(c); // 801CD278
  c->r[0]=0u+0x00000001u; // 801CD27C
  W8(c->r[30]+0x00000048u,c->r[0]); // 801CD280
  goto L_801CD320; // 801CD284
L_801CD288:;
  c->lr=0x801CD28Cu; f_801D76C0(c); // 801CD288
  c->r[3]=c->r[3]+0x00000354u; // 801CD28C
  c->lr=0x801CD294u; f_80126DC0(c); // 801CD290
  c->r[3]=c->r[30]|c->r[30]; // 801CD294
  c->lr=0x801CD29Cu; f_801CCA40(c); // 801CD298
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801CD29C
  goto L_801CD2BC; // 801CD2A0
L_801CD2A4:;
  c->r[0]=R8(c->r[31]+0x00000036u); // 801CD2A4
  cmps(c,0,(int32_t)c->r[0],0); // 801CD2A8
  if (crb(c,2)) { goto L_801CD2B8; } // 801CD2AC
  c->r[3]=c->r[31]|c->r[31]; // 801CD2B0
  c->lr=0x801CD2B8u; f_801BE7E0(c); // 801CD2B4
L_801CD2B8:;
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CD2B8
L_801CD2BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CD2BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD2A4; } // 801CD2C0
  c->lr=0x801CD2C8u; f_801D76C0(c); // 801CD2C4
  c->r[3]=c->r[3]+0x00000354u; // 801CD2C8
  c->lr=0x801CD2D0u; f_80126EA0(c); // 801CD2CC
  c->lr=0x801CD2D4u; f_801D76C0(c); // 801CD2D0
  c->r[3]=c->r[3]+0x00000354u; // 801CD2D4
  c->lr=0x801CD2DCu; f_80126DC0(c); // 801CD2D8
  c->r[31]=R32(c->r[30]+0x000000C8u); // 801CD2DC
  goto L_801CD2F0; // 801CD2E0
L_801CD2E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CD2E4
  c->lr=0x801CD2ECu; f_801BEEA0(c); // 801CD2E8
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CD2EC
L_801CD2F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CD2F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD2E4; } // 801CD2F4
  c->r[0]=0u+0x00000000u; // 801CD2F8
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801CD2FC
  c->lr=0x801CD304u; f_801D76C0(c); // 801CD300
  c->r[3]=c->r[3]+0x00000354u; // 801CD304
  c->lr=0x801CD30Cu; f_80126EA0(c); // 801CD308
  c->r[0]=0u+0x00000001u; // 801CD30C
  W8(c->r[30]+0x00000048u,c->r[0]); // 801CD310
  goto L_801CD320; // 801CD314
L_801CD318:;
  c->r[0]=0u+0x00000001u; // 801CD318
  W8(c->r[30]+0x00000048u,c->r[0]); // 801CD31C
L_801CD320:;
  c->lr=0x801CD324u; f_801D76C0(c); // 801CD320
  c->r[3]=c->r[3]+0x00000354u; // 801CD324
  c->lr=0x801CD32Cu; f_80126EA0(c); // 801CD328
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD32C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD330
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD334
  c->lr=c->r[0]; // 801CD338
  c->r[1]=c->r[1]+0x00000010u; // 801CD33C
  return; // 801CD340
}

// fn_801CD350
void f_801CD350(Ctx* __restrict c) {
  trace_call(0x801CD350u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD350
  c->r[0]=c->lr; // 801CD354
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD358
  c->r[11]=c->r[1]+0x00000030u; // 801CD35C
  c->lr=0x801CD364u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD360
  c->r[26]=c->r[3]|c->r[3]; // 801CD364
  c->r[25]=c->r[4]|c->r[4]; // 801CD368
  c->r[24]=c->r[5]|c->r[5]; // 801CD36C
  c->lr=0x801CD374u; f_801D76C0(c); // 801CD370
  c->r[3]=c->r[3]+0x00000354u; // 801CD374
  c->lr=0x801CD37Cu; f_80126DC0(c); // 801CD378
  c->r[3]=0u+0x55550000u; // 801CD37C
  c->r[0]=0u-c->r[25]; // 801CD380
  c->r[4]=c->r[24]+0x00000002u; // 801CD384
  W8(c->r[26]+0x00000049u,c->r[25]); // 801CD388
  c->r[3]=c->r[3]+0x00005556u; // 801CD38C
  c->r[31]=R32(c->r[26]+0x000000C8u); // 801CD390
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[4])>>32); // 801CD394
  c->r[28]=c->r[0]|c->r[25]; // 801CD398
  c->r[25]=0u+0x803A0000u; // 801CD39C
  c->r[26]=0u+0x803A0000u; // 801CD3A0
  c->r[27]=0u+0x00010000u; // 801CD3A4
  c->r[29]=0u+0x000000FFu; // 801CD3A8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801CD3AC
  c->r[30]=0u+0x00000000u; // 801CD3B0
  c->r[24]=c->r[3]+c->r[0]; // 801CD3B4
  goto L_801CD444; // 801CD3B8
L_801CD3BC:;
  cmpu(c,0,c->r[24],0x0000FFFFu); // 801CD3BC
  c->r[0]=0u+0x00000000u; // 801CD3C0
  if (crb(c,1)) { goto L_801CD3CC; } // 801CD3C4
  c->r[0]=0u+0x00000001u; // 801CD3C8
L_801CD3CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CD3CC
  if (!crb(c,2)) { goto L_801CD3F4; } // 801CD3D0
  c->r[6]=c->r[24]|c->r[24]; // 801CD3D4
  c->r[3]=c->r[25]+0x0000032Cu; // 801CD3D8
  c->r[5]=c->r[26]+0x000002E8u; // 801CD3DC
  c->r[8]=c->r[27]+0xFFFFFFFFu; // 801CD3E0
  c->r[4]=0u+0x0000008Au; // 801CD3E4
  c->r[7]=0u+0x00000000u; // 801CD3E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD3EC
  c->lr=0x801CD3F4u; f_80212260(c); // 801CD3F0
L_801CD3F4:;
  c->r[4]=R16(c->r[31]+0x000000A2u); // 801CD3F4
  c->r[5]=R16(c->r[31]+0x000000A4u); // 801CD3F8
  cmpu(c,0,c->r[5],c->r[4]); // 801CD3FC
  if (crb(c,0)) { goto L_801CD40C; } // 801CD400
  c->r[0]=R8(c->r[31]+0x000000A1u); // 801CD404
  goto L_801CD428; // 801CD408
L_801CD40C:;
  c->r[3]=R8(c->r[31]+0x000000A0u); // 801CD40C
  c->r[0]=R8(c->r[31]+0x000000A1u); // 801CD410
  c->r[0]=c->r[0]-c->r[3]; // 801CD414
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801CD418
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[4]); // 801CD41C
  c->r[0]=c->r[3]+c->r[0]; // 801CD420
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801CD424
L_801CD428:;
  W8(c->r[31]+0x000000A0u,c->r[0]); // 801CD428
  c->r[0]=sraw(c,c->r[28],31); // 801CD42C
  c->r[0]=c->r[29]&~c->r[0]; // 801CD430
  W8(c->r[31]+0x000000A1u,c->r[0]); // 801CD434
  W16(c->r[31]+0x000000A2u,c->r[24]); // 801CD438
  W16(c->r[31]+0x000000A4u,c->r[30]); // 801CD43C
  c->r[31]=R32(c->r[31]+0x000000D4u); // 801CD440
L_801CD444:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CD444
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD3BC; } // 801CD448
  c->lr=0x801CD450u; f_801D76C0(c); // 801CD44C
  c->r[3]=c->r[3]+0x00000354u; // 801CD450
  c->lr=0x801CD458u; f_80126EA0(c); // 801CD454
  c->r[11]=c->r[1]+0x00000030u; // 801CD458
  c->lr=0x801CD460u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CD45C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CD460
  c->lr=c->r[0]; // 801CD464
  c->r[1]=c->r[1]+0x00000030u; // 801CD468
  return; // 801CD46C
}

// fn_801CD470
void f_801CD470(Ctx* __restrict c) {
  trace_call(0x801CD470u);
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 801CD470
  return; // 801CD474
}

// fn_801CD480
void f_801CD480(Ctx* __restrict c) {
  trace_call(0x801CD480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD480
  c->r[0]=c->lr; // 801CD484
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD488
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD48C
  fcmp(c,0,c->f[1],c->f[0]); // 801CD490
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CD494
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CD498
  c->f[31]=c->f[1]; // 801CD49C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD4A0
  c->r[31]=c->r[3]|c->r[3]; // 801CD4A4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CD4A8
  if (crb(c,2)) { goto L_801CD4CC; } // 801CD4AC
  c->r[3]=0u+0x803A0000u; // 801CD4B0
  c->r[5]=0u+0x803A0000u; // 801CD4B4
  c->r[3]=c->r[3]+0x00000068u; // 801CD4B8
  c->r[4]=0u+0x0000028Du; // 801CD4BC
  c->r[5]=c->r[5]+0x000001A4u; // 801CD4C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD4C4
  c->lr=0x801CD4CCu; f_80212260(c); // 801CD4C8
L_801CD4CC:;
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[31]);} // 801CD4CC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CD4D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CD4D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD4D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD4DC
  c->lr=c->r[0]; // 801CD4E0
  c->r[1]=c->r[1]+0x00000020u; // 801CD4E4
  return; // 801CD4E8
}

// fn_801CD4F0
void f_801CD4F0(Ctx* __restrict c) {
  trace_call(0x801CD4F0u);
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 801CD4F0
  return; // 801CD4F4
}

// fn_801CD500
void f_801CD500(Ctx* __restrict c) {
  trace_call(0x801CD500u);
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 801CD500
  return; // 801CD504
}

// fn_801CD510
void f_801CD510(Ctx* __restrict c) {
  trace_call(0x801CD510u);
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 801CD510
  return; // 801CD514
}

// fn_801CD520
void f_801CD520(Ctx* __restrict c) {
  trace_call(0x801CD520u);
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 801CD520
  return; // 801CD524
}

// fn_801CD530
void f_801CD530(Ctx* __restrict c) {
  trace_call(0x801CD530u);
  W8(c->r[3]+0x0000009Au,c->r[4]); // 801CD530
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[1]);} // 801CD534
  return; // 801CD538
}

// fn_801CD540
void f_801CD540(Ctx* __restrict c) {
  trace_call(0x801CD540u);
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[1]);} // 801CD540
  return; // 801CD544
}

// fn_801CD550
void f_801CD550(Ctx* __restrict c) {
  trace_call(0x801CD550u);
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 801CD550
  return; // 801CD554
}

// fn_801CD560
void f_801CD560(Ctx* __restrict c) {
  trace_call(0x801CD560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD560
  c->r[0]=c->lr; // 801CD564
  cmpu(c,0,c->r[4],0x00000010u); // 801CD568
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD56C
  c->r[0]=0u+0x00000000u; // 801CD570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD574
  c->r[31]=c->r[4]|c->r[4]; // 801CD578
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD57C
  c->r[30]=c->r[3]|c->r[3]; // 801CD580
  if (crb(c,1)) { goto L_801CD58C; } // 801CD584
  c->r[0]=0u+0x00000001u; // 801CD588
L_801CD58C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CD58C
  if (!crb(c,2)) { goto L_801CD5BC; } // 801CD590
  c->r[3]=0u+0x803A0000u; // 801CD594
  c->r[5]=0u+0x803A0000u; // 801CD598
  c->r[6]=c->r[31]|c->r[31]; // 801CD59C
  c->r[4]=0u+0x000002E3u; // 801CD5A0
  c->r[3]=c->r[3]+0x00000068u; // 801CD5A4
  c->r[5]=c->r[5]+0x00000204u; // 801CD5A8
  c->r[7]=0u+0x00000000u; // 801CD5AC
  c->r[8]=0u+0x00000010u; // 801CD5B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD5B4
  c->lr=0x801CD5BCu; f_80212260(c); // 801CD5B8
L_801CD5BC:;
  cmps(c,0,(int32_t)c->r[31],16); // 801CD5BC
  if (!crb(c,0)) { goto L_801CD5D4; } // 801CD5C0
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 801CD5C4
  c->r[3]=c->r[30]+c->r[0]; // 801CD5C8
  c->r[3]=c->r[3]+0x000000A4u; // 801CD5CC
  goto L_801CD5D8; // 801CD5D0
L_801CD5D4:;
  c->r[3]=0u+0x00000000u; // 801CD5D4
L_801CD5D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD5D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD5DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD5E0
  c->lr=c->r[0]; // 801CD5E4
  c->r[1]=c->r[1]+0x00000010u; // 801CD5E8
  return; // 801CD5EC
}

// fn_801CD5F0
void f_801CD5F0(Ctx* __restrict c) {
  trace_call(0x801CD5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD5F0
  c->r[0]=c->lr; // 801CD5F4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CD5F8
  c->r[11]=c->r[1]+0x00000070u; // 801CD5FC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CD600
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CD604
  c->lr=0x801CD60Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD608
  c->r[0]=0u+0x43300000u; // 801CD60C
  c->r[30]=0u+0x803A0000u; // 801CD610
  W32(c->r[1]+0x00000030u,c->r[0]); // 801CD614
  c->r[24]=c->r[3]|c->r[3]; // 801CD618
  c->r[25]=c->r[4]|c->r[4]; // 801CD61C
  c->r[26]=c->r[5]|c->r[5]; // 801CD620
  W32(c->r[1]+0x00000038u,c->r[0]); // 801CD624
  c->r[27]=c->r[6]|c->r[6]; // 801CD628
  c->r[28]=c->r[7]|c->r[7]; // 801CD62C
  c->r[30]=c->r[30]+0x00000068u; // 801CD630
  c->lr=0x801CD638u; f_801D76C0(c); // 801CD634
  c->r[3]=c->r[3]+0x00000354u; // 801CD638
  c->lr=0x801CD640u; f_80126DC0(c); // 801CD63C
  cmpu(c,0,c->r[25],0x0000007Fu); // 801CD640
  c->r[0]=0u+0x00000000u; // 801CD644
  if (crb(c,1)) { goto L_801CD650; } // 801CD648
  c->r[0]=0u+0x00000001u; // 801CD64C
L_801CD650:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CD650
  if (!crb(c,2)) { goto L_801CD678; } // 801CD654
  c->r[6]=c->r[25]|c->r[25]; // 801CD658
  c->r[3]=c->r[30]+0x00000000u; // 801CD65C
  c->r[5]=c->r[30]+0x000001D8u; // 801CD660
  c->r[4]=0u+0x00000304u; // 801CD664
  c->r[7]=0u+0x00000000u; // 801CD668
  c->r[8]=0u+0x0000007Fu; // 801CD66C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD670
  c->lr=0x801CD678u; f_80212260(c); // 801CD674
L_801CD678:;
  cmpu(c,0,c->r[26],0x0000007Fu); // 801CD678
  c->r[0]=0u+0x00000000u; // 801CD67C
  if (crb(c,1)) { goto L_801CD688; } // 801CD680
  c->r[0]=0u+0x00000001u; // 801CD684
L_801CD688:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CD688
  if (!crb(c,2)) { goto L_801CD6B0; } // 801CD68C
  c->r[6]=c->r[26]|c->r[26]; // 801CD690
  c->r[3]=c->r[30]+0x00000000u; // 801CD694
  c->r[5]=c->r[30]+0x00000210u; // 801CD698
  c->r[4]=0u+0x00000305u; // 801CD69C
  c->r[7]=0u+0x00000000u; // 801CD6A0
  c->r[8]=0u+0x0000007Fu; // 801CD6A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD6A8
  c->lr=0x801CD6B0u; f_80212260(c); // 801CD6AC
L_801CD6B0:;
  c->r[0]=R8(c->r[24]+0x00000089u); // 801CD6B0
  c->r[3]=0u+0x81020000u; // 801CD6B4
  c->r[3]=c->r[3]+0x00000409u; // 801CD6B8
  cmps(c,0,(int32_t)c->r[28],0); // 801CD6BC
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[0]); // 801CD6C0
  c->r[31]=R32(c->r[24]+0x000000C4u); // 801CD6C4
  c->r[29]=0u+0x00000000u; // 801CD6C8
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801CD6CC
  c->r[0]=c->r[3]+c->r[0]; // 801CD6D0
  c->r[0]=sraw(c,c->r[0],6); // 801CD6D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CD6D8
  c->r[26]=c->r[0]+c->r[3]; // 801CD6DC
  if (crb(c,2)) { goto L_801CD71C; } // 801CD6E0
  c->r[29]=R32(c->r[24]+0x000000C8u); // 801CD6E4
  cmps(c,0,(int32_t)c->r[29],0); // 801CD6E8
  if (crb(c,2)) { goto L_801CD71C; } // 801CD6EC
  c->r[0]=c->r[26]^0x80000000u; // 801CD6F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD6F4
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 801CD6F8
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=RF64(ea);} // 801CD6FC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 801CD700
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD704
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CD708
  W32(c->r[29]+0x000000A8u,c->r[0]); // 801CD70C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CD710
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CD714
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 801CD718
L_801CD71C:;
  c->r[0]=R8(c->r[24]+0x00000027u); // 801CD71C
  cmps(c,0,(int32_t)c->r[0],0); // 801CD720
  if (crb(c,2)) { goto L_801CD780; } // 801CD724
  c->r[29]=R32(c->r[24]+0x000000C8u); // 801CD728
  cmps(c,0,(int32_t)c->r[29],0); // 801CD72C
  if (crb(c,2)) { goto L_801CD780; } // 801CD730
  c->r[0]=R32(c->r[29]+0x00000000u); // 801CD734
  cmps(c,0,(int32_t)c->r[0],4); // 801CD738
  if (!crb(c,2)) { goto L_801CD750; } // 801CD73C
  c->r[3]=c->r[29]|c->r[29]; // 801CD740
  c->lr=0x801CD748u; f_801BE8D0(c); // 801CD744
  c->r[29]=0u+0x00000000u; // 801CD748
  goto L_801CD780; // 801CD74C
L_801CD750:;
  c->r[0]=c->r[26]^0x80000000u; // 801CD750
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CD754
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 801CD758
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=RF64(ea);} // 801CD75C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 801CD760
  {uint32_t ea=c->r[2]+0xFFFFA890u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD764
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CD768
  W32(c->r[29]+0x000000A8u,c->r[0]); // 801CD76C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CD770
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 801CD774
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[0]);} // 801CD778
  W32(c->r[29]+0x000000B0u,c->r[27]); // 801CD77C
L_801CD780:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CD780
  if (!crb(c,2)) { goto L_801CD8AC; } // 801CD784
  c->r[3]=0u+0x80310000u; // 801CD788
  {uint32_t ea=c->r[3]+0xFFFFB7D0u; c->r[11]=R32(ea); c->r[3]=ea;} // 801CD78C
  W32(c->r[1]+0x00000008u,c->r[11]); // 801CD790
  cmps(c,0,(int32_t)c->r[28],0); // 801CD794
  c->r[10]=R32(c->r[3]+0x00000004u); // 801CD798
  c->r[0]=0u+0xFFFFFFFFu; // 801CD79C
  c->r[9]=R32(c->r[3]+0x00000008u); // 801CD7A0
  c->r[8]=R32(c->r[3]+0x0000000Cu); // 801CD7A4
  c->r[7]=R32(c->r[3]+0x00000010u); // 801CD7A8
  c->r[6]=R32(c->r[3]+0x00000014u); // 801CD7AC
  c->r[5]=R32(c->r[3]+0x00000018u); // 801CD7B0
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801CD7B4
  c->r[3]=R32(c->r[3]+0x00000020u); // 801CD7B8
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 801CD7BC
  W32(c->r[1]+0x00000010u,c->r[9]); // 801CD7C0
  W32(c->r[1]+0x00000014u,c->r[8]); // 801CD7C4
  W32(c->r[1]+0x00000018u,c->r[7]); // 801CD7C8
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 801CD7CC
  W32(c->r[1]+0x00000020u,c->r[5]); // 801CD7D0
  W32(c->r[1]+0x00000024u,c->r[4]); // 801CD7D4
  W32(c->r[1]+0x00000028u,c->r[3]); // 801CD7D8
  c->r[3]=R32(c->r[24]+0x00000054u); // 801CD7DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CD7E0
  W32(c->r[1]+0x0000000Cu,c->r[25]); // 801CD7E4
  W32(c->r[1]+0x00000010u,c->r[26]); // 801CD7E8
  if (!crb(c,2)) { goto L_801CD7F4; } // 801CD7EC
  c->r[0]=c->r[27]|c->r[27]; // 801CD7F0
L_801CD7F4:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD7F4
  c->r[5]=c->r[1]+0x00000008u; // 801CD7F8
  c->r[0]=R8(c->r[24]+0x0000008Bu); // 801CD7FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801CD800
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CD804
  c->r[3]=R8(c->r[31]+0x000000E9u); // 801CD808
  c->r[0]=R8(c->r[24]+0x0000008Du); // 801CD80C
  c->r[0]=c->r[3]+c->r[0]; // 801CD810
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CD814
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801CD818
  c->r[0]=R32(c->r[3]+0x000000E4u); // 801CD81C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CD820
  W32(c->r[1]+0x00000028u,c->r[24]); // 801CD824
  c->r[4]=R32(c->r[24]+0x00000050u); // 801CD828
  c->lr=0x801CD830u; f_801CB110(c); // 801CD82C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD830
  c->r[29]=c->r[3]|c->r[3]; // 801CD834
  if (!crb(c,2)) { goto L_801CD850; } // 801CD838
  c->lr=0x801CD840u; f_801D76C0(c); // 801CD83C
  c->r[3]=c->r[3]+0x00000354u; // 801CD840
  c->lr=0x801CD848u; f_80126EA0(c); // 801CD844
  c->r[3]=0u+0x00000000u; // 801CD848
  goto L_801CDA84; // 801CD84C
L_801CD850:;
  c->r[0]=R32(c->r[3]+0x000000BCu); // 801CD850
  cmps(c,0,(int32_t)c->r[0],0); // 801CD854
  if (!crb(c,1)) { goto L_801CD888; } // 801CD858
  c->r[26]=R32(c->r[24]+0x000000C8u); // 801CD85C
  goto L_801CD880; // 801CD860
L_801CD864:;
  c->r[3]=R32(c->r[26]+0x000000BCu); // 801CD864
  c->r[0]=R32(c->r[29]+0x000000BCu); // 801CD868
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CD86C
  if (!crb(c,2)) { goto L_801CD87C; } // 801CD870
  c->r[3]=c->r[26]|c->r[26]; // 801CD874
  c->lr=0x801CD87Cu; f_801BE7E0(c); // 801CD878
L_801CD87C:;
  c->r[26]=R32(c->r[26]+0x000000D4u); // 801CD87C
L_801CD880:;
  cmps(c,0,(int32_t)c->r[26],0); // 801CD880
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD864; } // 801CD884
L_801CD888:;
  c->lr=0x801CD88Cu; f_801D76C0(c); // 801CD888
  c->r[3]=c->r[3]+0x00000354u; // 801CD88C
  c->lr=0x801CD894u; f_80126DC0(c); // 801CD890
  c->r[0]=R32(c->r[24]+0x000000C8u); // 801CD894
  W32(c->r[29]+0x000000D4u,c->r[0]); // 801CD898
  W32(c->r[24]+0x000000C8u,c->r[29]); // 801CD89C
  c->lr=0x801CD8A4u; f_801D76C0(c); // 801CD8A0
  c->r[3]=c->r[3]+0x00000354u; // 801CD8A4
  c->lr=0x801CD8ACu; f_80126EA0(c); // 801CD8A8
L_801CD8AC:;
  c->r[4]=R8(c->r[24]+0x00000090u); // 801CD8AC
  cmpu(c,0,c->r[4],0x0000007Fu); // 801CD8B0
  if (crb(c,1)) { goto L_801CD8C0; } // 801CD8B4
  c->r[3]=c->r[29]|c->r[29]; // 801CD8B8
  c->lr=0x801CD8C0u; f_801C0060(c); // 801CD8BC
L_801CD8C0:;
  c->r[4]=R8(c->r[24]+0x00000091u); // 801CD8C0
  cmpu(c,0,c->r[4],0x0000007Fu); // 801CD8C4
  if (crb(c,1)) { goto L_801CD8D4; } // 801CD8C8
  c->r[3]=c->r[29]|c->r[29]; // 801CD8CC
  c->lr=0x801CD8D4u; f_801C0180(c); // 801CD8D0
L_801CD8D4:;
  c->r[4]=R8(c->r[24]+0x00000092u); // 801CD8D4
  cmpu(c,0,c->r[4],0x0000007Fu); // 801CD8D8
  if (crb(c,1)) { goto L_801CD8E8; } // 801CD8DC
  c->r[3]=c->r[29]|c->r[29]; // 801CD8E0
  c->lr=0x801CD8E8u; f_801C02D0(c); // 801CD8E4
L_801CD8E8:;
  c->r[4]=R8(c->r[24]+0x00000093u); // 801CD8E8
  cmpu(c,0,c->r[4],0x0000007Fu); // 801CD8EC
  if (crb(c,1)) { goto L_801CD8FC; } // 801CD8F0
  c->r[3]=c->r[29]|c->r[29]; // 801CD8F4
  c->lr=0x801CD8FCu; f_801C0350(c); // 801CD8F8
L_801CD8FC:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[24]+0x00000094u); // 801CD8FC
  cmps(c,0,(int32_t)c->r[4],127); // 801CD900
  if (crb(c,1)) { goto L_801CD910; } // 801CD904
  c->r[3]=c->r[29]|c->r[29]; // 801CD908
  c->lr=0x801CD910u; f_801C00F0(c); // 801CD90C
L_801CD910:;
  c->r[0]=R8(c->r[24]+0x0000004Bu); // 801CD910
  {uint32_t ea=c->r[24]+0x0000006Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CD914
  cmps(c,0,(int32_t)c->r[0],0); // 801CD918
  if (crb(c,2)) { goto L_801CD940; } // 801CD91C
  c->r[0]=R8(c->r[24]+0x0000008Eu); // 801CD920
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[1]=RF64(ea);} // 801CD924
  c->r[0]=c->r[0]-c->r[25]; // 801CD928
  c->r[0]=c->r[0]^0x80000000u; // 801CD92C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD930
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801CD934
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CD938
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 801CD93C
L_801CD940:;
  c->r[0]=R8(c->r[24]+0x0000008Fu); // 801CD940
  cmps(c,0,(int32_t)c->r[0],0); // 801CD944
  if (!crb(c,2)) { goto L_801CD980; } // 801CD948
  cmps(c,0,(int32_t)c->r[27],0); // 801CD94C
  if (!crb(c,2)) { goto L_801CD968; } // 801CD950
  c->r[3]=c->r[30]+0x00000000u; // 801CD954
  c->r[5]=c->r[30]+0x00000254u; // 801CD958
  c->r[4]=0u+0x0000037Au; // 801CD95C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD960
  c->lr=0x801CD968u; f_80212300(c); // 801CD964
L_801CD968:;
  c->f[1]=c->f[31]; // 801CD968
  c->r[3]=c->r[29]|c->r[29]; // 801CD96C
  c->r[4]=c->r[27]|c->r[27]; // 801CD970
  c->r[5]=0u+0x00000000u; // 801CD974
  c->lr=0x801CD97Cu; f_801BEA40(c); // 801CD978
  goto L_801CD9E0; // 801CD97C
L_801CD980:;
  {uint32_t ea=c->r[2]+0xFFFFA88Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CD980
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[0]); // 801CD984
  fcmp(c,0,c->f[31],c->f[0]); // 801CD988
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CD98C
  if (!crb(c,2)) { goto L_801CD99C; } // 801CD990
  c->f[3]=c->f[31]; // 801CD994
  goto L_801CD9A0; // 801CD998
L_801CD99C:;
  c->f[3]=-c->f[31]; // 801CD99C
L_801CD9A0:;
  c->r[0]=c->r[0]^0x80000000u; // 801CD9A0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801CD9A4
  {uint32_t ea=c->r[2]+0xFFFFA8B0u; c->f[2]=RF64(ea);} // 801CD9A8
  c->f[1]=c->f[31]; // 801CD9AC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 801CD9B0
  c->r[3]=c->r[29]|c->r[29]; // 801CD9B4
  c->r[5]=0u+0x00000001u; // 801CD9B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CD9BC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 801CD9C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801CD9C4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 801CD9C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CD9CC
  c->r[4]=sraw(c,c->r[0],5); // 801CD9D0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801CD9D4
  c->r[4]=c->r[0]+c->r[4]; // 801CD9D8
  c->lr=0x801CD9E0u; f_801BEA40(c); // 801CD9DC
L_801CD9E0:;
  W8(c->r[24]+0x0000008Eu,c->r[25]); // 801CD9E0
  c->r[3]=R8(c->r[24]+0x00000049u); // 801CD9E4
  c->r[5]=R16(c->r[29]+0x000000A2u); // 801CD9E8
  c->r[4]=R16(c->r[29]+0x000000A4u); // 801CD9EC
  c->r[0]=0u-c->r[3]; // 801CD9F0
  c->r[0]=c->r[0]|c->r[3]; // 801CD9F4
  cmpu(c,0,c->r[4],c->r[5]); // 801CD9F8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CD9FC
  if (crb(c,0)) { goto L_801CDA0C; } // 801CDA00
  c->r[4]=R8(c->r[29]+0x000000A1u); // 801CDA04
  goto L_801CDA28; // 801CDA08
L_801CDA0C:;
  c->r[6]=R8(c->r[29]+0x000000A0u); // 801CDA0C
  c->r[0]=R8(c->r[29]+0x000000A1u); // 801CDA10
  c->r[0]=c->r[0]-c->r[6]; // 801CDA14
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801CDA18
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[5]); // 801CDA1C
  c->r[0]=c->r[6]+c->r[0]; // 801CDA20
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801CDA24
L_801CDA28:;
  c->r[0]=0u-c->r[3]; // 801CDA28
  W8(c->r[29]+0x000000A0u,c->r[4]); // 801CDA2C
  c->r[0]=c->r[0]|c->r[3]; // 801CDA30
  c->r[3]=0u+0x000000FFu; // 801CDA34
  c->r[4]=sraw(c,c->r[0],31); // 801CDA38
  c->r[3]=c->r[3]&~c->r[4]; // 801CDA3C
  W8(c->r[29]+0x000000A1u,c->r[3]); // 801CDA40
  c->r[0]=0u+0x00000000u; // 801CDA44
  W16(c->r[29]+0x000000A2u,c->r[0]); // 801CDA48
  W16(c->r[29]+0x000000A4u,c->r[0]); // 801CDA4C
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801CDA50
  c->r[0]=R8(c->r[3]+0x000000CFu); // 801CDA54
  W8(c->r[29]+0x00000039u,c->r[0]); // 801CDA58
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801CDA5C
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801CDA60
  W32(c->r[29]+0x000000B4u,c->r[0]); // 801CDA64
  c->r[3]=R32(c->r[24]+0x000000C4u); // 801CDA68
  c->r[0]=R32(c->r[3]+0x00000030u); // 801CDA6C
  W32(c->r[29]+0x000000B8u,c->r[0]); // 801CDA70
  c->lr=0x801CDA78u; f_801D76C0(c); // 801CDA74
  c->r[3]=c->r[3]+0x00000354u; // 801CDA78
  c->lr=0x801CDA80u; f_80126EA0(c); // 801CDA7C
  c->r[3]=c->r[29]|c->r[29]; // 801CDA80
L_801CDA84:;
  c->r[11]=c->r[1]+0x00000070u; // 801CDA84
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801CDA88
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CDA8C
  c->lr=0x801CDA94u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CDA90
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CDA94
  c->lr=c->r[0]; // 801CDA98
  c->r[1]=c->r[1]+0x00000080u; // 801CDA9C
  return; // 801CDAA0
}

// fn_801CDAB0
void f_801CDAB0(Ctx* __restrict c) {
  trace_call(0x801CDAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDAB0
  c->r[0]=c->lr; // 801CDAB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDAB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CDABC
  c->r[31]=c->r[5]|c->r[5]; // 801CDAC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CDAC4
  c->r[30]=c->r[4]|c->r[4]; // 801CDAC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CDACC
  c->r[29]=c->r[3]|c->r[3]; // 801CDAD0
  c->lr=0x801CDAD8u; f_801CF990(c); // 801CDAD4
  c->r[3]=0u+0x803A0000u; // 801CDAD8
  {uint32_t ea=c->r[2]+0xFFFFA8B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDADC
  c->r[3]=c->r[3]+0x00000390u; // 801CDAE0
  c->r[4]=0u+0x00000000u; // 801CDAE4
  c->r[5]=c->r[3]+0x0000001Cu; // 801CDAE8
  c->r[0]=0u+0x00000001u; // 801CDAEC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801CDAF0
  c->r[3]=c->r[29]|c->r[29]; // 801CDAF4
  W32(c->r[29]+0x00000054u,c->r[5]); // 801CDAF8
  W32(c->r[29]+0x00000058u,c->r[31]); // 801CDAFC
  W32(c->r[29]+0x0000005Cu,c->r[30]); // 801CDB00
  W32(c->r[29]+0x00000060u,c->r[4]); // 801CDB04
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 801CDB08
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 801CDB0C
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 801CDB10
  {uint32_t ea=c->r[29]+0x00000070u; WF32(ea,c->f[0]);} // 801CDB14
  {uint32_t ea=c->r[29]+0x00000074u; WF32(ea,c->f[0]);} // 801CDB18
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 801CDB1C
  W8(c->r[29]+0x0000007Cu,c->r[0]); // 801CDB20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CDB24
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CDB28
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CDB2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CDB30
  c->lr=c->r[0]; // 801CDB34
  c->r[1]=c->r[1]+0x00000020u; // 801CDB38
  return; // 801CDB3C
}

// fn_801CDB40
void f_801CDB40(Ctx* __restrict c) {
  trace_call(0x801CDB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDB40
  c->r[0]=c->lr; // 801CDB44
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CDB48
  c->r[11]=c->r[1]+0x00000040u; // 801CDB4C
  c->lr=0x801CDB54u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CDB50
  cmps(c,0,(int32_t)c->r[3],0); // 801CDB54
  c->r[20]=c->r[3]|c->r[3]; // 801CDB58
  c->r[21]=c->r[4]|c->r[4]; // 801CDB5C
  if (crb(c,2)) { goto L_801CDC3C; } // 801CDB60
  c->r[4]=0u+0x803A0000u; // 801CDB64
  c->r[23]=0u+0x00000000u; // 801CDB68
  c->r[4]=c->r[4]+0x00000390u; // 801CDB6C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CDB70
  c->r[0]=c->r[4]+0x0000001Cu; // 801CDB74
  c->r[22]=0u+0x00000000u; // 801CDB78
  W32(c->r[3]+0x00000054u,c->r[0]); // 801CDB7C
  c->r[26]=0u+0x803A0000u; // 801CDB80
  c->r[27]=0u+0x803A0000u; // 801CDB84
  c->r[25]=0u+0x00000000u; // 801CDB88
  c->r[28]=0u+0x803A0000u; // 801CDB8C
  c->r[29]=0u+0x803A0000u; // 801CDB90
L_801CDB94:;
  c->r[3]=c->r[20]+c->r[22]; // 801CDB94
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 801CDB98
  c->r[30]=c->r[3]+0x0000000Cu; // 801CDB9C
  goto L_801CDC08; // 801CDBA0
L_801CDBA4:;
  c->r[24]=c->r[31]|c->r[31]; cr0(c,c->r[24]); // 801CDBA4
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CDBA8
  W32(c->r[1]+0x00000008u,c->r[25]); // 801CDBAC
  if (!crb(c,2)) { goto L_801CDBC8; } // 801CDBB0
  c->r[3]=c->r[26]+0xFFFFD2E4u; // 801CDBB4
  c->r[5]=c->r[27]+0xFFFFD2C0u; // 801CDBB8
  c->r[4]=0u+0x0000023Du; // 801CDBBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDBC0
  c->lr=0x801CDBC8u; f_80212260(c); // 801CDBC4
L_801CDBC8:;
  c->r[24]=addc(c,c->r[24],0xFFFFFEF8u,0); cr0(c,c->r[24]); // 801CDBC8
  if (!crb(c,2)) { goto L_801CDBE4; } // 801CDBCC
  c->r[3]=c->r[28]+0xFFFFD284u; // 801CDBD0
  c->r[5]=c->r[29]+0xFFFFD260u; // 801CDBD4
  c->r[4]=0u+0x00000193u; // 801CDBD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDBDC
  c->lr=0x801CDBE4u; f_80212260(c); // 801CDBE0
L_801CDBE4:;
  c->r[4]=c->r[24]|c->r[24]; // 801CDBE4
  c->r[3]=c->r[1]+0x00000008u; // 801CDBE8
  c->lr=0x801CDBF0u; f_801D5DA0(c); // 801CDBEC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801CDBF0
  cmps(c,0,(int32_t)c->r[3],0); // 801CDBF4
  if (crb(c,2)) { goto L_801CDC00; } // 801CDBF8
  W32(c->r[3]+0x00000020u,c->r[25]); // 801CDBFC
L_801CDC00:;
  c->r[3]=c->r[1]+0x00000008u; // 801CDC00
  c->lr=0x801CDC08u; f_801D5EA0(c); // 801CDC04
L_801CDC08:;
  cmpu(c,0,c->r[31],c->r[30]); // 801CDC08
  if (!crb(c,2)) { IRQCHK(c); goto L_801CDBA4; } // 801CDC0C
  c->r[23]=c->r[23]+0x00000001u; // 801CDC10
  c->r[22]=c->r[22]+0x00000010u; // 801CDC14
  cmps(c,0,(int32_t)c->r[23],4); // 801CDC18
  if (crb(c,0)) { IRQCHK(c); goto L_801CDB94; } // 801CDC1C
  c->r[3]=c->r[20]|c->r[20]; // 801CDC20
  c->r[4]=0u+0x00000000u; // 801CDC24
  c->lr=0x801CDC2Cu; f_801CFA50(c); // 801CDC28
  cmps(c,0,(int32_t)c->r[21],0); // 801CDC2C
  if (!crb(c,1)) { goto L_801CDC3C; } // 801CDC30
  c->r[3]=c->r[20]|c->r[20]; // 801CDC34
  c->lr=0x801CDC3Cu; f_802E61AC(c); // 801CDC38
L_801CDC3C:;
  c->r[11]=c->r[1]+0x00000040u; // 801CDC3C
  c->r[3]=c->r[20]|c->r[20]; // 801CDC40
  c->lr=0x801CDC48u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CDC44
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CDC48
  c->lr=c->r[0]; // 801CDC4C
  c->r[1]=c->r[1]+0x00000040u; // 801CDC50
  return; // 801CDC54
}

// fn_801CDC60
void f_801CDC60(Ctx* __restrict c) {
  trace_call(0x801CDC60u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDC60
  c->r[0]=c->lr; // 801CDC64
  W32(c->r[1]+0x00000074u,c->r[0]); // 801CDC68
  c->r[11]=c->r[1]+0x00000070u; // 801CDC6C
  c->lr=0x801CDC74u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CDC70
  c->r[27]=c->r[3]|c->r[3]; // 801CDC74
  c->r[28]=c->r[4]|c->r[4]; // 801CDC78
  c->r[29]=c->r[5]|c->r[5]; // 801CDC7C
  c->r[30]=c->r[6]|c->r[6]; // 801CDC80
  c->r[31]=c->r[7]|c->r[7]; // 801CDC84
  c->r[3]=c->r[1]+0x00000028u; // 801CDC88
  c->lr=0x801CDC90u; f_801CF920(c); // 801CDC8C
  {uint32_t ea=c->r[27]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDC90
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801CDC94
  {uint32_t ea=c->r[27]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDC98
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801CDC9C
  {uint32_t ea=c->r[27]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDCA0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801CDCA4
  {uint32_t ea=c->r[27]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDCA8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801CDCAC
  {uint32_t ea=c->r[27]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDCB0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801CDCB4
  {uint32_t ea=c->r[27]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDCB8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801CDCBC
  c->r[0]=R32(c->r[27]+0x00000060u); // 801CDCC0
  W32(c->r[1]+0x00000048u,c->r[0]); // 801CDCC4
  c->r[3]=R32(c->r[27]+0x0000005Cu); // 801CDCC8
  cmps(c,0,(int32_t)c->r[3],0); // 801CDCCC
  if (crb(c,2)) { goto L_801CDD50; } // 801CDCD0
  c->lr=0x801CDCD8u; f_801D3AF0(c); // 801CDCD4
  c->r[26]=c->r[3]|c->r[3]; // 801CDCD8
  c->r[4]=c->r[29]|c->r[29]; // 801CDCDC
  c->r[5]=c->r[1]+0x00000008u; // 801CDCE0
  c->lr=0x801CDCE8u; f_801CFEB0(c); // 801CDCE4
  cmps(c,0,(int32_t)c->r[3],0); // 801CDCE8
  if (crb(c,2)) { goto L_801CDD40; } // 801CDCEC
  c->r[5]=R8(c->r[1]+0x0000000Cu); // 801CDCF0
  c->r[4]=R32(c->r[1]+0x00000008u); // 801CDCF4
  c->r[3]=R8(c->r[1]+0x0000000Du); // 801CDCF8
  cmps(c,0,(int32_t)c->r[5],1); // 801CDCFC
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801CDD00
  W32(c->r[1]+0x00000040u,c->r[4]); // 801CDD04
  W8(c->r[1]+0x00000045u,c->r[3]); // 801CDD08
  W8(c->r[1]+0x00000046u,c->r[0]); // 801CDD0C
  if (crb(c,2)) { goto L_801CDD20; } // 801CDD10
  cmps(c,0,(int32_t)c->r[5],2); // 801CDD14
  if (crb(c,2)) { goto L_801CDD2C; } // 801CDD18
  goto L_801CDD38; // 801CDD1C
L_801CDD20:;
  c->r[0]=0u+0x00000001u; // 801CDD20
  W8(c->r[1]+0x00000044u,c->r[0]); // 801CDD24
  goto L_801CDD40; // 801CDD28
L_801CDD2C:;
  c->r[0]=0u+0x00000002u; // 801CDD2C
  W8(c->r[1]+0x00000044u,c->r[0]); // 801CDD30
  goto L_801CDD40; // 801CDD34
L_801CDD38:;
  c->r[0]=0u+0x00000001u; // 801CDD38
  W8(c->r[1]+0x00000044u,c->r[0]); // 801CDD3C
L_801CDD40:;
  c->r[3]=c->r[26]|c->r[26]; // 801CDD40
  c->r[4]=c->r[29]|c->r[29]; // 801CDD44
  c->lr=0x801CDD4Cu; f_801CFE30(c); // 801CDD48
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 801CDD4C
L_801CDD50:;
  c->r[7]=0u+0x80310000u; // 801CDD50
  {uint32_t ea=c->r[7]+0xFFFFB7F8u; c->r[6]=R32(ea); c->r[7]=ea;} // 801CDD54
  W32(c->r[1]+0x00000010u,c->r[6]); // 801CDD58
  cmps(c,0,(int32_t)c->r[27],0); // 801CDD5C
  c->r[5]=R32(c->r[7]+0x00000004u); // 801CDD60
  c->r[8]=c->r[27]|c->r[27]; // 801CDD64
  c->r[4]=R32(c->r[7]+0x00000008u); // 801CDD68
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 801CDD6C
  c->r[0]=R32(c->r[7]+0x00000010u); // 801CDD70
  W32(c->r[1]+0x00000014u,c->r[5]); // 801CDD74
  W32(c->r[1]+0x00000018u,c->r[4]); // 801CDD78
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801CDD7C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801CDD80
  c->r[0]=R32(c->r[27]+0x00000058u); // 801CDD84
  W32(c->r[1]+0x00000010u,c->r[0]); // 801CDD88
  if (crb(c,2)) { goto L_801CDD94; } // 801CDD8C
  c->r[8]=c->r[27]+0x00000054u; // 801CDD90
L_801CDD94:;
  W32(c->r[1]+0x00000014u,c->r[8]); // 801CDD94
  c->r[3]=R32(c->r[27]+0x00000058u); // 801CDD98
  cmps(c,0,(int32_t)c->r[3],0); // 801CDD9C
  if (crb(c,2)) { goto L_801CDDA8; } // 801CDDA0
  c->r[3]=c->r[3]+0x00000004u; // 801CDDA4
L_801CDDA8:;
  c->r[0]=c->r[1]+0x00000028u; // 801CDDA8
  W32(c->r[1]+0x00000018u,c->r[3]); // 801CDDAC
  c->r[3]=c->r[27]|c->r[27]; // 801CDDB0
  c->r[4]=c->r[28]|c->r[28]; // 801CDDB4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801CDDB8
  c->r[5]=c->r[29]|c->r[29]; // 801CDDBC
  c->r[6]=c->r[30]|c->r[30]; // 801CDDC0
  c->r[8]=c->r[31]|c->r[31]; // 801CDDC4
  c->r[7]=c->r[1]+0x00000010u; // 801CDDC8
  c->lr=0x801CDDD0u; f_801CFB90(c); // 801CDDCC
  c->r[0]=R32(c->r[28]+0x00000000u); // 801CDDD0
  c->r[26]=c->r[3]|c->r[3]; // 801CDDD4
  cmps(c,0,(int32_t)c->r[0],0); // 801CDDD8
  if (crb(c,2)) { goto L_801CDDEC; } // 801CDDDC
  c->r[3]=c->r[0]|c->r[0]; // 801CDDE0
  c->r[4]=0u+0x00000003u; // 801CDDE4
  c->lr=0x801CDDECu; f_801BD620(c); // 801CDDE8
L_801CDDEC:;
  c->r[11]=c->r[1]+0x00000070u; // 801CDDEC
  c->r[3]=c->r[26]|c->r[26]; // 801CDDF0
  c->lr=0x801CDDF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CDDF4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801CDDF8
  c->lr=c->r[0]; // 801CDDFC
  c->r[1]=c->r[1]+0x00000070u; // 801CDE00
  return; // 801CDE04
}

// fn_801CDE10
void f_801CDE10(Ctx* __restrict c) {
  trace_call(0x801CDE10u);
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 801CDE10
  cmps(c,0,(int32_t)c->r[0],0); // 801CDE14
  if (!crb(c,2)) { goto L_801CDE3C; } // 801CDE18
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 801CDE1C
  {uint32_t ea=c->r[3]+0x00000064u; psq_load(c,1,ea,0,0);} // 801CDE20
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CDE24
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 801CDE28
  {uint32_t ea=c->r[3]+0x0000006Cu; psq_load(c,1,ea,1,0);} // 801CDE2C
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 801CDE30
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CDE34
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,1,0);} // 801CDE38
L_801CDE3C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDE3C
  c->r[0]=0u+0x00000000u; // 801CDE40
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDE44
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE48
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[2]);} // 801CDE4C
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 801CDE50
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801CDE54
  W8(c->r[3]+0x0000007Cu,c->r[0]); // 801CDE58
  return; // 801CDE5C
}

// fn_801CDE60
void f_801CDE60(Ctx* __restrict c) {
  trace_call(0x801CDE60u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CDE60
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDE64
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE68
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 801CDE6C
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 801CDE70
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 801CDE74
  return; // 801CDE78
}

// fn_801CDE80
void f_801CDE80(Ctx* __restrict c) {
  trace_call(0x801CDE80u);
  {uint32_t ea=c->r[3]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE80
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801CDE84
  {uint32_t ea=c->r[3]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE88
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 801CDE8C
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE90
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801CDE94
  {uint32_t ea=c->r[3]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDE98
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CDE9C
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDEA0
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 801CDEA4
  {uint32_t ea=c->r[3]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDEA8
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 801CDEAC
  c->r[0]=R32(c->r[3]+0x00000060u); // 801CDEB0
  W32(c->r[4]+0x00000020u,c->r[0]); // 801CDEB4
  return; // 801CDEB8
}

// fn_801CDEC0
void f_801CDEC0(Ctx* __restrict c) {
  trace_call(0x801CDEC0u);
  c->r[3]=c->r[3]+0xFFFFFFACu; // 801CDEC0
  f_801CDB40(c); return; // 801CDEC4
}

// fn_801CDED0
void f_801CDED0(Ctx* __restrict c) {
  trace_call(0x801CDED0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDED0
  c->r[0]=c->lr; // 801CDED4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CDED8
  c->r[11]=c->r[1]+0x00000040u; // 801CDEDC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CDEE0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CDEE4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801CDEE8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801CDEEC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801CDEF0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801CDEF4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801CDEF8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801CDEFC
  c->lr=0x801CDF04u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CDF00
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,2,ea,0,0);} // 801CDF04
  c->r[31]=0u+0x803A0000u; // 801CDF08
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,1,ea,0,0);} // 801CDF0C
  c->r[8]=c->r[1]+0x00000008u; // 801CDF10
  c->r[26]=c->r[3]|c->r[3]; // 801CDF14
  c->r[29]=c->r[4]|c->r[4]; // 801CDF18
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CDF1C
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,2,ea,1,0);} // 801CDF20
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,1,ea,1,0);} // 801CDF24
  c->r[30]=c->r[5]|c->r[5]; // 801CDF28
  {uint32_t ea=c->r[8]+0x00000000u; psq_store(c,0,ea,0,0);} // 801CDF2C
  c->r[27]=c->r[6]|c->r[6]; // 801CDF30
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CDF34
  c->r[28]=c->r[7]|c->r[7]; // 801CDF38
  c->r[3]=c->r[8]|c->r[8]; // 801CDF3C
  c->r[31]=c->r[31]+0x000003C0u; // 801CDF40
  {uint32_t ea=c->r[8]+0x00000008u; psq_store(c,0,ea,1,0);} // 801CDF44
  c->lr=0x801CDF4Cu; f_8012EBA0(c); // 801CDF48
  c->r[3]=R8(c->r[30]+0x0000001Du); // 801CDF4C
  c->r[0]=0u+0x43300000u; // 801CDF50
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801CDF54
  c->f[31]=c->f[1]; // 801CDF58
  {uint32_t ea=c->r[2]+0xFFFFA8D0u; c->f[2]=RF64(ea);} // 801CDF5C
  cmps(c,0,(int32_t)c->r[27],0); // 801CDF60
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CDF64
  {uint32_t ea=c->r[2]+0xFFFFA8C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDF68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CDF6C
  {uint32_t ea=c->r[29]+0x00000050u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CDF70
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CDF74
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801CDF78
  c->r[29]=R32(c->r[26]+0x0000001Cu); // 801CDF7C
  c->r[30]=R8(c->r[30]+0x0000001Cu); // 801CDF80
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[0]); // 801CDF84
  if (!crb(c,2)) { goto L_801CDFA0; } // 801CDF88
  c->r[3]=c->r[31]+0x00000000u; // 801CDF8C
  c->r[5]=c->r[31]+0x0000001Cu; // 801CDF90
  c->r[4]=0u+0x00000101u; // 801CDF94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDF98
  c->lr=0x801CDFA0u; f_80212260(c); // 801CDF9C
L_801CDFA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CDFA0
  if (!crb(c,2)) { goto L_801CDFBC; } // 801CDFA4
  c->r[3]=c->r[31]+0x00000000u; // 801CDFA8
  c->r[5]=c->r[31]+0x00000048u; // 801CDFAC
  c->r[4]=0u+0x00000102u; // 801CDFB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDFB4
  c->lr=0x801CDFBCu; f_80212260(c); // 801CDFB8
L_801CDFBC:;
  fcmp(c,0,c->f[31],c->f[28]); // 801CDFBC
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CDFC0
  if (!crb(c,1)) { goto L_801CE018; } // 801CDFC4
  cmps(c,0,(int32_t)c->r[30],1); // 801CDFC8
  if (crb(c,2)) { goto L_801CDFDC; } // 801CDFCC
  cmps(c,0,(int32_t)c->r[30],2); // 801CDFD0
  if (crb(c,2)) { goto L_801CDFF4; } // 801CDFD4
  goto L_801CE018; // 801CDFD8
L_801CDFDC:;
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[28]); // 801CDFDC
  c->f[1]=c->f[30]; // 801CDFE0
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[29]); // 801CDFE4
  c->lr=0x801CDFECu; f_802F6C2C(c); // 801CDFE8
  c->f[3]=c->ps1[3]=S(c->f[1]); // 801CDFEC
  goto L_801CE018; // 801CDFF0
L_801CDFF4:;
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[28]); // 801CDFF4
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CDFF8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[30]); // 801CDFFC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[29]); // 801CE000
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CE004
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 801CE008
  fcmp(c,0,c->f[3],c->f[0]); // 801CE00C
  if (!crb(c,0)) { goto L_801CE018; } // 801CE010
  c->f[3]=c->f[0]; // 801CE014
L_801CE018:;
  c->r[3]=c->r[29]^0x80000000u; // 801CE018
  c->r[0]=0u+0x43300000u; // 801CE01C
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE020
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801CE024
  {uint32_t ea=c->r[2]+0xFFFFA8D8u; c->f[1]=RF64(ea);} // 801CE028
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 801CE02C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CE030
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801CE034
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[3]);} // 801CE038
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801CE03C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801CE040
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801CE044
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801CE048
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE04C
  c->r[0]=0u-c->r[0]; // 801CE050
  W32(c->r[28]+0x00000000u,c->r[0]); // 801CE054
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 801CE058
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CE05C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 801CE060
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801CE064
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 801CE068
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801CE06C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 801CE070
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801CE074
  c->r[11]=c->r[1]+0x00000040u; // 801CE078
  c->lr=0x801CE080u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE07C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CE080
  c->lr=c->r[0]; // 801CE084
  c->r[1]=c->r[1]+0x00000080u; // 801CE088
  return; // 801CE08C
}

// fn_801CE090
void f_801CE090(Ctx* __restrict c) {
  trace_call(0x801CE090u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE090
  c->r[0]=c->lr; // 801CE094
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801CE098
  c->r[11]=c->r[1]+0x00000030u; // 801CE09C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801CE0A0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801CE0A4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801CE0A8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801CE0AC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 801CE0B0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 801CE0B4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 801CE0B8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 801CE0BC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[27]);} // 801CE0C0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,27,ea,0,0);} // 801CE0C4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[26]);} // 801CE0C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,26,ea,0,0);} // 801CE0CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[25]);} // 801CE0D0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,25,ea,0,0);} // 801CE0D4
  c->lr=0x801CE0DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CE0D8
  c->r[28]=c->r[4]|c->r[4]; // 801CE0DC
  c->r[27]=c->r[3]|c->r[3]; // 801CE0E0
  c->r[4]=c->r[5]|c->r[5]; // 801CE0E4
  c->r[29]=c->r[6]|c->r[6]; // 801CE0E8
  c->r[30]=c->r[7]|c->r[7]; // 801CE0EC
  c->r[31]=c->r[8]|c->r[8]; // 801CE0F0
  c->r[3]=c->r[28]|c->r[28]; // 801CE0F4
  c->r[5]=c->r[1]+0x00000008u; // 801CE0F8
  c->lr=0x801CE100u; f_8012E2C0(c); // 801CE0FC
  c->r[3]=c->r[1]+0x00000008u; // 801CE100
  c->lr=0x801CE108u; f_8012EBA0(c); // 801CE104
  c->f[25]=c->f[1]; // 801CE108
  {uint32_t ea=c->r[27]+0x00000020u; c->f[27]=c->ps1[27]=RF32(ea);} // 801CE10C
  {uint32_t ea=c->r[28]+0x00000048u; c->f[26]=c->ps1[26]=RF32(ea);} // 801CE110
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801CE114
  {uint32_t ea=c->r[29]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 801CE118
  {uint32_t ea=c->r[29]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 801CE11C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE120
  c->lr=0x801CE128u; f_801B4F50(c); // 801CE124
  c->lr=0x801CE12Cu; f_801B58C0(c); // 801CE128
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CE12C
  cmpu(c,0,c->r[0],0x00000001u); // 801CE130
  if (!crb(c,1)) { goto L_801CE144; } // 801CE134
  cmps(c,0,(int32_t)c->r[3],0); // 801CE138
  if (crb(c,2)) { goto L_801CE170; } // 801CE13C
  goto L_801CE194; // 801CE140
L_801CE144:;
  c->f[1]=c->f[26]; // 801CE144
  c->r[4]=c->r[30]|c->r[30]; // 801CE148
  c->f[2]=c->f[25]; // 801CE14C
  c->r[5]=c->r[31]|c->r[31]; // 801CE150
  c->f[3]=c->f[27]; // 801CE154
  c->r[3]=c->r[1]+0x00000008u; // 801CE158
  c->f[4]=c->f[30]; // 801CE15C
  c->f[5]=c->f[29]; // 801CE160
  c->f[6]=c->f[28]; // 801CE164
  c->lr=0x801CE16Cu; f_801CE4A0(c); // 801CE168
  goto L_801CE1A0; // 801CE16C
L_801CE170:;
  c->f[1]=c->f[26]; // 801CE170
  c->r[4]=c->r[30]|c->r[30]; // 801CE174
  c->f[2]=c->f[25]; // 801CE178
  c->r[5]=c->r[31]|c->r[31]; // 801CE17C
  c->f[3]=c->f[27]; // 801CE180
  c->r[3]=c->r[1]+0x00000008u; // 801CE184
  c->f[4]=c->f[31]; // 801CE188
  c->lr=0x801CE190u; f_801CE8E0(c); // 801CE18C
  goto L_801CE1A0; // 801CE190
L_801CE194:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE194
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801CE198
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 801CE19C
L_801CE1A0:;
  c->r[11]=c->r[1]+0x00000030u; // 801CE1A0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 801CE1A4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801CE1A8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 801CE1AC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801CE1B0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 801CE1B4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 801CE1B8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 801CE1BC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 801CE1C0
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,27,ea,0,0);} // 801CE1C4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[27]=RF64(ea);} // 801CE1C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,26,ea,0,0);} // 801CE1CC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[26]=RF64(ea);} // 801CE1D0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,25,ea,0,0);} // 801CE1D4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[25]=RF64(ea);} // 801CE1D8
  c->lr=0x801CE1E0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CE1DC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801CE1E0
  c->lr=c->r[0]; // 801CE1E4
  c->r[1]=c->r[1]+0x000000A0u; // 801CE1E8
  return; // 801CE1EC
}

// fn_801CE1F0
void f_801CE1F0(Ctx* __restrict c) {
  trace_call(0x801CE1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE1F0
  c->r[0]=c->lr; // 801CE1F4
  cmps(c,0,(int32_t)c->r[6],0); // 801CE1F8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CE1FC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801CE200
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801CE204
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801CE208
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801CE20C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801CE210
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801CE214
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CE218
  c->r[31]=c->r[3]|c->r[3]; // 801CE21C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CE220
  c->r[30]=c->r[6]|c->r[6]; // 801CE224
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CE228
  c->r[29]=c->r[5]|c->r[5]; // 801CE22C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CE230
  c->r[28]=c->r[4]|c->r[4]; // 801CE234
  if (!crb(c,2)) { goto L_801CE258; } // 801CE238
  c->r[3]=0u+0x803A0000u; // 801CE23C
  c->r[5]=0u+0x803A0000u; // 801CE240
  c->r[3]=c->r[3]+0x000003C0u; // 801CE244
  c->r[4]=0u+0x00000094u; // 801CE248
  c->r[5]=c->r[5]+0x00000434u; // 801CE24C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE250
  c->lr=0x801CE258u; f_80212260(c); // 801CE254
L_801CE258:;
  {uint32_t ea=c->r[31]+0x00000024u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE258
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE25C
  fcmp(c,0,c->f[0],c->f[31]); // 801CE260
  if (!crb(c,2)) { goto L_801CE274; } // 801CE264
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE268
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801CE26C
  goto L_801CE390; // 801CE270
L_801CE274:;
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,1,ea,0,0);} // 801CE274
  c->r[31]=c->r[1]+0x00000008u; // 801CE278
  {uint32_t ea=c->r[28]+0x00000030u; psq_load(c,0,ea,0,0);} // 801CE27C
  c->r[3]=c->r[31]|c->r[31]; // 801CE280
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801CE284
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 801CE288
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,1,ea,1,0);} // 801CE28C
  {uint32_t ea=c->r[28]+0x00000038u; psq_load(c,0,ea,1,0);} // 801CE290
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 801CE294
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,0,ea,1,0);} // 801CE298
  c->lr=0x801CE2A0u; f_8012EBA0(c); // 801CE29C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE2A0
  fcmp(c,0,c->f[1],c->f[0]); // 801CE2A4
  if (!crb(c,1)) { goto L_801CE2CC; } // 801CE2A8
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE2AC
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,0,0);} // 801CE2B0
  c->f[3]=c->ps1[3]=S(c->f[0]/c->f[1]); // 801CE2B4
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 801CE2B8
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,2,ea,1,0);} // 801CE2BC
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,0,ea,0,0);} // 801CE2C0
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 801CE2C4
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,0,ea,1,0);} // 801CE2C8
L_801CE2CC:;
  c->r[3]=R8(c->r[29]+0x0000001Eu); // 801CE2CC
  c->r[0]=0u+0x43300000u; // 801CE2D0
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE2D4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801CE2D8
  fcmp(c,0,c->f[1],c->f[0]); // 801CE2DC
  {uint32_t ea=c->r[2]+0xFFFFA8D0u; c->f[2]=RF64(ea);} // 801CE2E0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801CE2E4
  {uint32_t ea=c->r[2]+0xFFFFA8E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE2E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801CE2EC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801CE2F0
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[0]); // 801CE2F4
  if (!crb(c,1)) { goto L_801CE340; } // 801CE2F8
  c->r[3]=c->r[1]+0x00000008u; // 801CE2FC
  {uint32_t ea=c->r[29]+0x00000010u; psq_load(c,1,ea,0,0);} // 801CE300
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 801CE304
  {uint32_t ea=c->r[28]+0x00000040u; psq_load(c,3,ea,0,0);} // 801CE308
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 801CE30C
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,0);} // 801CE310
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 801CE314
  {uint32_t ea=c->r[29]+0x0000000Cu; psq_load(c,1,ea,1,0);} // 801CE318
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 801CE31C
  {uint32_t ea=c->r[28]+0x0000003Cu; psq_load(c,3,ea,1,0);} // 801CE320
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 801CE324
  {double t0=S(std::fma(c->f[0],c->f[3],c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[3],c->ps1[4])); c->f[3]=t0; c->ps1[3]=t1;} // 801CE328
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 801CE32C
  {double t0=S(c->f[3]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 801CE330
  c->f[29]=-c->f[0]; // 801CE334
  c->f[1]=-c->f[1]; // 801CE338
  goto L_801CE354; // 801CE33C
L_801CE340:;
  c->r[3]=c->r[29]+0x0000000Cu; // 801CE340
  c->lr=0x801CE348u; f_8012EBA0(c); // 801CE344
  c->f[29]=-c->f[1]; // 801CE348
  c->r[3]=c->r[28]+0x0000003Cu; // 801CE34C
  c->lr=0x801CE354u; f_8012EBA0(c); // 801CE350
L_801CE354:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[30]); // 801CE354
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[30]); // 801CE358
  fcmp(c,0,c->f[1],c->f[31]); // 801CE35C
  if (!crb(c,1)) { goto L_801CE36C; } // 801CE360
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE364
  goto L_801CE38C; // 801CE368
L_801CE36C:;
  fcmp(c,0,c->f[29],c->f[31]); // 801CE36C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE370
  if (!crb(c,2)) { goto L_801CE380; } // 801CE374
  {uint32_t ea=c->r[2]+0xFFFFA8E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE378
  goto L_801CE38C; // 801CE37C
L_801CE380:;
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 801CE380
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[29]); // 801CE384
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801CE388
L_801CE38C:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801CE38C
L_801CE390:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CE390
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801CE394
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801CE398
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801CE39C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801CE3A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801CE3A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801CE3A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CE3AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CE3B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CE3B4
  c->r[28]=R32(c->r[1]+0x00000020u); // 801CE3B8
  c->lr=c->r[0]; // 801CE3BC
  c->r[1]=c->r[1]+0x00000060u; // 801CE3C0
  return; // 801CE3C4
}

// fn_801CE3D0
void f_801CE3D0(Ctx* __restrict c) {
  trace_call(0x801CE3D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE3D0
  c->r[0]=c->lr; // 801CE3D4
  cmps(c,0,(int32_t)c->r[6],0); // 801CE3D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CE3DC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CE3E0
  c->r[31]=c->r[6]|c->r[6]; // 801CE3E4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CE3E8
  c->r[30]=c->r[5]|c->r[5]; // 801CE3EC
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CE3F0
  c->r[29]=c->r[4]|c->r[4]; // 801CE3F4
  if (!crb(c,2)) { goto L_801CE418; } // 801CE3F8
  c->r[3]=0u+0x803A0000u; // 801CE3FC
  c->r[5]=0u+0x803A0000u; // 801CE400
  c->r[3]=c->r[3]+0x000003C0u; // 801CE404
  c->r[4]=0u+0x000000D7u; // 801CE408
  c->r[5]=c->r[5]+0x00000460u; // 801CE40C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE410
  c->lr=0x801CE418u; f_80212260(c); // 801CE414
L_801CE418:;
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,0,0);} // 801CE418
  c->r[3]=c->r[1]+0x00000008u; // 801CE41C
  {uint32_t ea=c->r[29]+0x00000030u; psq_load(c,1,ea,0,0);} // 801CE420
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CE424
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,2,ea,1,0);} // 801CE428
  {uint32_t ea=c->r[29]+0x00000038u; psq_load(c,1,ea,1,0);} // 801CE42C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 801CE430
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CE434
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 801CE438
  c->lr=0x801CE440u; f_8012EBA0(c); // 801CE43C
  {uint32_t ea=c->r[29]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE440
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE444
  fcmp(c,0,c->f[1],c->f[0]); // 801CE448
  {uint32_t ea=c->r[29]+0x00000060u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE44C
  if (!crb(c,1)) { goto L_801CE474; } // 801CE450
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CE454
  {uint32_t ea=c->r[29]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE458
  {uint32_t ea=c->r[29]+0x0000005Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE45C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801CE460
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801CE464
  fcmp(c,0,c->f[3],c->f[2]); // 801CE468
  if (!crb(c,1)) { goto L_801CE474; } // 801CE46C
  c->f[3]=c->f[2]; // 801CE470
L_801CE474:;
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[3]);} // 801CE474
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CE478
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CE47C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CE480
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CE484
  c->lr=c->r[0]; // 801CE488
  c->r[1]=c->r[1]+0x00000030u; // 801CE48C
  return; // 801CE490
}

// fn_801CE4A0
void f_801CE4A0(Ctx* __restrict c) {
  trace_call(0x801CE4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE4A0
  c->r[0]=c->lr; // 801CE4A4
  cmps(c,0,(int32_t)c->r[4],0); // 801CE4A8
  W32(c->r[1]+0x00000094u,c->r[0]); // 801CE4AC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801CE4B0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801CE4B4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 801CE4B8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 801CE4BC
  c->f[30]=c->f[6]; // 801CE4C0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 801CE4C4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 801CE4C8
  c->f[29]=c->f[5]; // 801CE4CC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 801CE4D0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 801CE4D4
  c->f[28]=c->f[4]; // 801CE4D8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 801CE4DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 801CE4E0
  c->f[27]=c->f[3]; // 801CE4E4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[26]);} // 801CE4E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,26,ea,0,0);} // 801CE4EC
  c->f[26]=c->f[1]; // 801CE4F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[25]);} // 801CE4F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,25,ea,0,0);} // 801CE4F8
  c->f[25]=c->f[2]; // 801CE4FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE500
  c->r[31]=0u+0x803A0000u; // 801CE504
  c->r[31]=c->r[31]+0x000003C0u; // 801CE508
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE50C
  c->r[30]=c->r[5]|c->r[5]; // 801CE510
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE514
  c->r[29]=c->r[4]|c->r[4]; // 801CE518
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CE51C
  c->r[28]=c->r[3]|c->r[3]; // 801CE520
  if (!crb(c,2)) { goto L_801CE53C; } // 801CE524
  c->r[3]=c->r[31]+0x00000000u; // 801CE528
  c->r[5]=c->r[31]+0x000000D8u; // 801CE52C
  c->r[4]=0u+0x00000155u; // 801CE530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE534
  c->lr=0x801CE53Cu; f_80212260(c); // 801CE538
L_801CE53C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CE53C
  if (!crb(c,2)) { goto L_801CE558; } // 801CE540
  c->r[3]=c->r[31]+0x00000000u; // 801CE544
  c->r[5]=c->r[31]+0x00000100u; // 801CE548
  c->r[4]=0u+0x00000156u; // 801CE54C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE550
  c->lr=0x801CE558u; f_80212260(c); // 801CE554
L_801CE558:;
  c->f[1]=c->f[25]; // 801CE558
  c->r[3]=c->r[28]|c->r[28]; // 801CE55C
  c->f[2]=c->f[26]; // 801CE560
  c->r[4]=c->r[1]+0x0000000Cu; // 801CE564
  c->r[5]=c->r[1]+0x00000008u; // 801CE568
  c->lr=0x801CE570u; f_801CEB30(c); // 801CE56C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE570
  c->r[0]=0u+0x00000000u; // 801CE574
  fcmp(c,0,c->f[28],c->f[0]); // 801CE578
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE57C
  if (!crb(c,2)) { goto L_801CE598; } // 801CE580
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE584
  fcmp(c,0,c->f[28],c->f[0]); // 801CE588
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE58C
  if (!crb(c,2)) { goto L_801CE598; } // 801CE590
  c->r[0]=0u+0x00000001u; // 801CE594
L_801CE598:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CE598
  if (!crb(c,2)) { goto L_801CE5C0; } // 801CE59C
  c->f[1]=c->f[28]; // 801CE5A0
  {uint32_t ea=c->r[2]+0xFFFFA8F0u; c->f[2]=RF64(ea);} // 801CE5A4
  {uint32_t ea=c->r[2]+0xFFFFA8F8u; c->f[3]=RF64(ea);} // 801CE5A8
  c->r[3]=c->r[31]+0x00000000u; // 801CE5AC
  c->r[5]=c->r[31]+0x00000130u; // 801CE5B0
  c->r[4]=0u+0x00000163u; // 801CE5B4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801CE5B8
  c->lr=0x801CE5C0u; f_80212260(c); // 801CE5BC
L_801CE5C0:;
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE5C0
  c->r[0]=0u+0x00000000u; // 801CE5C4
  fcmp(c,0,c->f[29],c->f[0]); // 801CE5C8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE5CC
  if (!crb(c,2)) { goto L_801CE5E8; } // 801CE5D0
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE5D4
  fcmp(c,0,c->f[29],c->f[0]); // 801CE5D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE5DC
  if (!crb(c,2)) { goto L_801CE5E8; } // 801CE5E0
  c->r[0]=0u+0x00000001u; // 801CE5E4
L_801CE5E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CE5E8
  if (!crb(c,2)) { goto L_801CE610; } // 801CE5EC
  c->f[1]=c->f[29]; // 801CE5F0
  {uint32_t ea=c->r[2]+0xFFFFA8F8u; c->f[2]=RF64(ea);} // 801CE5F4
  {uint32_t ea=c->r[2]+0xFFFFA908u; c->f[3]=RF64(ea);} // 801CE5F8
  c->r[3]=c->r[31]+0x00000000u; // 801CE5FC
  c->r[5]=c->r[31]+0x0000018Cu; // 801CE600
  c->r[4]=0u+0x00000164u; // 801CE604
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801CE608
  c->lr=0x801CE610u; f_80212260(c); // 801CE60C
L_801CE610:;
  c->f[5]=-c->f[29]; // 801CE610
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE614
  c->f[6]=-c->f[28]; // 801CE618
  fcmp(c,0,c->f[0],c->f[5]); // 801CE61C
  if (!crb(c,0)) { goto L_801CE668; } // 801CE620
  {uint32_t ea=c->r[2]+0xFFFFA910u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE624
  fcmp(c,0,c->f[2],c->f[5]); // 801CE628
  if (!crb(c,2)) { goto L_801CE638; } // 801CE62C
  {uint32_t ea=c->r[2]+0xFFFFA914u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE630
  goto L_801CE660; // 801CE634
L_801CE638:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE638
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[5]); // 801CE63C
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE640
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 801CE644
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE648
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801CE64C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 801CE650
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[4]); // 801CE654
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CE658
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 801CE65C
L_801CE660:;
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[25]=c->ps1[25]=RF32(ea);} // 801CE660
  goto L_801CE80C; // 801CE664
L_801CE668:;
  {uint32_t ea=c->r[2]+0xFFFFA918u; c->f[4]=c->ps1[4]=RF32(ea);} // 801CE668
  fcmp(c,0,c->f[0],c->f[4]); // 801CE66C
  if (!crb(c,0)) { goto L_801CE6B0; } // 801CE670
  fcmp(c,0,c->f[5],c->f[4]); // 801CE674
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE678
  if (!crb(c,2)) { goto L_801CE688; } // 801CE67C
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[25]=c->ps1[25]=RF32(ea);} // 801CE680
  goto L_801CE80C; // 801CE684
L_801CE688:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE688
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 801CE68C
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE690
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 801CE694
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801CE698
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 801CE69C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 801CE6A0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 801CE6A4
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 801CE6A8
  goto L_801CE80C; // 801CE6AC
L_801CE6B0:;
  fcmp(c,0,c->f[0],c->f[6]); // 801CE6B0
  if (!crb(c,0)) { goto L_801CE6F8; } // 801CE6B4
  fcmp(c,0,c->f[4],c->f[6]); // 801CE6B8
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE6BC
  if (!crb(c,2)) { goto L_801CE6CC; } // 801CE6C0
  {uint32_t ea=c->r[2]+0xFFFFA914u; c->f[25]=c->ps1[25]=RF32(ea);} // 801CE6C4
  goto L_801CE80C; // 801CE6C8
L_801CE6CC:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE6CC
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[6]); // 801CE6D0
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE6D4
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[1]); // 801CE6D8
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE6DC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801CE6E0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 801CE6E4
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[4]); // 801CE6E8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CE6EC
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 801CE6F0
  goto L_801CE80C; // 801CE6F4
L_801CE6F8:;
  fcmp(c,0,c->f[0],c->f[28]); // 801CE6F8
  if (!crb(c,0)) { goto L_801CE744; } // 801CE6FC
  fcmp(c,0,c->f[6],c->f[28]); // 801CE700
  if (!crb(c,2)) { goto L_801CE710; } // 801CE704
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE708
  goto L_801CE73C; // 801CE70C
L_801CE710:;
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE710
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[28]); // 801CE714
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE718
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 801CE71C
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE720
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 801CE724
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 801CE728
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[1]); // 801CE72C
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[4]); // 801CE730
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CE734
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 801CE738
L_801CE73C:;
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 801CE73C
  goto L_801CE80C; // 801CE740
L_801CE744:;
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE744
  fcmp(c,0,c->f[0],c->f[3]); // 801CE748
  if (!crb(c,0)) { goto L_801CE78C; } // 801CE74C
  fcmp(c,0,c->f[28],c->f[3]); // 801CE750
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE754
  if (!crb(c,2)) { goto L_801CE764; } // 801CE758
  {uint32_t ea=c->r[2]+0xFFFFA914u; c->f[25]=c->ps1[25]=RF32(ea);} // 801CE75C
  goto L_801CE80C; // 801CE760
L_801CE764:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE764
  c->f[3]=c->ps1[3]=S(c->f[28]-c->f[3]); // 801CE768
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE76C
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 801CE770
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801CE774
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[4]); // 801CE778
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[3]); // 801CE77C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 801CE780
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 801CE784
  goto L_801CE80C; // 801CE788
L_801CE78C:;
  fcmp(c,0,c->f[0],c->f[29]); // 801CE78C
  if (!crb(c,0)) { goto L_801CE7D0; } // 801CE790
  fcmp(c,0,c->f[3],c->f[29]); // 801CE794
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE798
  if (!crb(c,2)) { goto L_801CE7A8; } // 801CE79C
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[25]=c->ps1[25]=RF32(ea);} // 801CE7A0
  goto L_801CE80C; // 801CE7A4
L_801CE7A8:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE7A8
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[29]); // 801CE7AC
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE7B0
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 801CE7B4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801CE7B8
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 801CE7BC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 801CE7C0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CE7C4
  c->f[25]=c->ps1[25]=S(c->f[1]+c->f[0]); // 801CE7C8
  goto L_801CE80C; // 801CE7CC
L_801CE7D0:;
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE7D0
  fcmp(c,0,c->f[29],c->f[3]); // 801CE7D4
  if (!crb(c,2)) { goto L_801CE7E4; } // 801CE7D8
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CE7DC
  goto L_801CE808; // 801CE7E0
L_801CE7E4:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE7E4
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[3]); // 801CE7E8
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE7EC
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 801CE7F0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 801CE7F4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 801CE7F8
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 801CE7FC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CE800
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[0]); // 801CE804
L_801CE808:;
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[25]=c->ps1[25]=RF32(ea);} // 801CE808
L_801CE80C:;
  c->f[1]=c->f[29]; // 801CE80C
  c->lr=0x801CE814u; f_802F65C4(c); // 801CE810
  c->f[26]=c->ps1[26]=S(c->f[1]); // 801CE814
  c->f[1]=c->f[28]; // 801CE818
  c->lr=0x801CE820u; f_802F65C4(c); // 801CE81C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801CE820
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE824
  c->f[1]=c->f[29]; // 801CE828
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[26]); // 801CE82C
  c->f[26]=c->ps1[26]=S(c->f[2]*c->f[0]); // 801CE830
  c->lr=0x801CE838u; f_802F65C4(c); // 801CE834
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801CE838
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE83C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[27]); // 801CE840
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE844
  c->f[25]=c->ps1[25]=S(c->f[25]*c->f[27]); // 801CE848
  c->f[2]=-c->f[2]; // 801CE84C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801CE850
  c->f[3]=c->ps1[3]=S(c->f[26]+c->f[2]); // 801CE854
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801CE858
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE85C
  c->f[3]=c->ps1[3]=S(c->f[26]/c->f[3]); // 801CE860
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 801CE864
  c->f[2]=c->ps1[2]=S(c->f[25]*c->f[2]); // 801CE868
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801CE86C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801CE870
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CE874
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 801CE878
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801CE87C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801CE880
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801CE884
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 801CE888
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 801CE88C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 801CE890
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 801CE894
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 801CE898
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 801CE89C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 801CE8A0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 801CE8A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,26,ea,0,0);} // 801CE8A8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[26]=RF64(ea);} // 801CE8AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,25,ea,0,0);} // 801CE8B0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[25]=RF64(ea);} // 801CE8B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE8B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE8BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE8C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CE8C4
  c->r[0]=R32(c->r[1]+0x00000094u); // 801CE8C8
  c->lr=c->r[0]; // 801CE8CC
  c->r[1]=c->r[1]+0x00000090u; // 801CE8D0
  return; // 801CE8D4
}

// fn_801CE8E0
void f_801CE8E0(Ctx* __restrict c) {
  trace_call(0x801CE8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE8E0
  c->r[0]=c->lr; // 801CE8E4
  cmps(c,0,(int32_t)c->r[4],0); // 801CE8E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CE8EC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801CE8F0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801CE8F4
  c->f[31]=c->f[3]; // 801CE8F8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801CE8FC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801CE900
  c->f[30]=c->f[4]; // 801CE904
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801CE908
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801CE90C
  c->f[29]=c->f[2]; // 801CE910
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 801CE914
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 801CE918
  c->f[28]=c->f[1]; // 801CE91C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE920
  c->r[31]=0u+0x803A0000u; // 801CE924
  c->r[31]=c->r[31]+0x000003C0u; // 801CE928
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE92C
  c->r[30]=c->r[5]|c->r[5]; // 801CE930
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE934
  c->r[29]=c->r[4]|c->r[4]; // 801CE938
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CE93C
  c->r[28]=c->r[3]|c->r[3]; // 801CE940
  if (!crb(c,2)) { goto L_801CE95C; } // 801CE944
  c->r[3]=c->r[31]+0x00000000u; // 801CE948
  c->r[5]=c->r[31]+0x000000D8u; // 801CE94C
  c->r[4]=0u+0x000001ABu; // 801CE950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE954
  c->lr=0x801CE95Cu; f_80212260(c); // 801CE958
L_801CE95C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CE95C
  if (!crb(c,2)) { goto L_801CE978; } // 801CE960
  c->r[3]=c->r[31]+0x00000000u; // 801CE964
  c->r[5]=c->r[31]+0x00000100u; // 801CE968
  c->r[4]=0u+0x000001ACu; // 801CE96C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CE970
  c->lr=0x801CE978u; f_80212260(c); // 801CE974
L_801CE978:;
  c->f[1]=c->f[29]; // 801CE978
  c->r[3]=c->r[28]|c->r[28]; // 801CE97C
  c->f[2]=c->f[28]; // 801CE980
  c->r[4]=c->r[1]+0x0000000Cu; // 801CE984
  c->r[5]=c->r[1]+0x00000008u; // 801CE988
  c->lr=0x801CE990u; f_801CEB30(c); // 801CE98C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE990
  c->r[0]=0u+0x00000000u; // 801CE994
  fcmp(c,0,c->f[30],c->f[0]); // 801CE998
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CE99C
  if (!crb(c,2)) { goto L_801CE9B8; } // 801CE9A0
  {uint32_t ea=c->r[2]+0xFFFFA8E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CE9A4
  fcmp(c,0,c->f[30],c->f[0]); // 801CE9A8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801CE9AC
  if (!crb(c,2)) { goto L_801CE9B8; } // 801CE9B0
  c->r[0]=0u+0x00000001u; // 801CE9B4
L_801CE9B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801CE9B8
  if (!crb(c,2)) { goto L_801CE9E0; } // 801CE9BC
  c->f[1]=c->f[30]; // 801CE9C0
  {uint32_t ea=c->r[2]+0xFFFFA8F0u; c->f[2]=RF64(ea);} // 801CE9C4
  {uint32_t ea=c->r[2]+0xFFFFA8F8u; c->f[3]=RF64(ea);} // 801CE9C8
  c->r[3]=c->r[31]+0x00000000u; // 801CE9CC
  c->r[5]=c->r[31]+0x000001E8u; // 801CE9D0
  c->r[4]=0u+0x000001B9u; // 801CE9D4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 801CE9D8
  c->lr=0x801CE9E0u; f_80212260(c); // 801CE9DC
L_801CE9E0:;
  {uint32_t ea=c->r[2]+0xFFFFA910u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CE9E0
  c->f[6]=-c->f[30]; // 801CE9E4
  {uint32_t ea=c->r[2]+0xFFFFA900u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CE9E8
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[30]); // 801CE9EC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801CE9F0
  c->f[7]=c->ps1[7]=S(c->f[2]-c->f[30]); // 801CE9F4
  fcmp(c,0,c->f[3],c->f[5]); // 801CE9F8
  if (!crb(c,0)) { goto L_801CEA38; } // 801CE9FC
  fcmp(c,0,c->f[1],c->f[5]); // 801CEA00
  if (!crb(c,2)) { goto L_801CEA10; } // 801CEA04
  {uint32_t ea=c->r[2]+0xFFFFA914u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEA08
  goto L_801CEAD4; // 801CEA0C
L_801CEA10:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA10
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[5]); // 801CEA14
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEA18
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 801CEA1C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801CEA20
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 801CEA24
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 801CEA28
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CEA2C
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 801CEA30
  goto L_801CEAD4; // 801CEA34
L_801CEA38:;
  fcmp(c,0,c->f[3],c->f[6]); // 801CEA38
  if (!crb(c,0)) { goto L_801CEA48; } // 801CEA3C
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEA40
  goto L_801CEAD4; // 801CEA44
L_801CEA48:;
  fcmp(c,0,c->f[3],c->f[30]); // 801CEA48
  if (!crb(c,0)) { goto L_801CEA90; } // 801CEA4C
  fcmp(c,0,c->f[6],c->f[30]); // 801CEA50
  if (!crb(c,2)) { goto L_801CEA60; } // 801CEA54
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEA58
  goto L_801CEAD4; // 801CEA5C
L_801CEA60:;
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEA60
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[30]); // 801CEA64
  {uint32_t ea=c->r[2]+0xFFFFA91Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEA68
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 801CEA6C
  {uint32_t ea=c->r[2]+0xFFFFA924u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEA70
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 801CEA74
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 801CEA78
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801CEA7C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[4]); // 801CEA80
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CEA84
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 801CEA88
  goto L_801CEAD4; // 801CEA8C
L_801CEA90:;
  fcmp(c,0,c->f[3],c->f[7]); // 801CEA90
  if (!crb(c,0)) { goto L_801CEAA0; } // 801CEA94
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEA98
  goto L_801CEAD4; // 801CEA9C
L_801CEAA0:;
  fcmp(c,0,c->f[7],c->f[2]); // 801CEAA0
  if (!crb(c,2)) { goto L_801CEAB0; } // 801CEAA4
  {uint32_t ea=c->r[2]+0xFFFFA920u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEAA8
  goto L_801CEAD4; // 801CEAAC
L_801CEAB0:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEAB0
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[2]); // 801CEAB4
  {uint32_t ea=c->r[2]+0xFFFFA8C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEAB8
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 801CEABC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 801CEAC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801CEAC4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[4]); // 801CEAC8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801CEACC
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 801CEAD0
L_801CEAD4:;
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 801CEAD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEAD8
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEADC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 801CEAE0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[1]);} // 801CEAE4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801CEAE8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801CEAEC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801CEAF0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801CEAF4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801CEAF8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801CEAFC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801CEB00
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 801CEB04
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 801CEB08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEB0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CEB10
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CEB14
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CEB18
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CEB1C
  c->lr=c->r[0]; // 801CEB20
  c->r[1]=c->r[1]+0x00000060u; // 801CEB24
  return; // 801CEB28
}

// fn_801CEB30
void f_801CEB30(Ctx* __restrict c) {
  trace_call(0x801CEB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEB30
  c->r[0]=c->lr; // 801CEB34
  cmps(c,0,(int32_t)c->r[4],0); // 801CEB38
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CEB3C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801CEB40
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801CEB44
  c->f[31]=c->f[2]; // 801CEB48
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801CEB4C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801CEB50
  c->f[30]=c->f[1]; // 801CEB54
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CEB58
  c->r[31]=0u+0x803A0000u; // 801CEB5C
  c->r[31]=c->r[31]+0x000003C0u; // 801CEB60
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CEB64
  c->r[30]=c->r[5]|c->r[5]; // 801CEB68
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CEB6C
  c->r[29]=c->r[4]|c->r[4]; // 801CEB70
  W32(c->r[1]+0x00000020u,c->r[28]); // 801CEB74
  c->r[28]=c->r[3]|c->r[3]; // 801CEB78
  if (!crb(c,2)) { goto L_801CEB94; } // 801CEB7C
  c->r[3]=c->r[31]+0x00000000u; // 801CEB80
  c->r[5]=c->r[31]+0x00000240u; // 801CEB84
  c->r[4]=0u+0x000001E5u; // 801CEB88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEB8C
  c->lr=0x801CEB94u; f_80212260(c); // 801CEB90
L_801CEB94:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CEB94
  if (!crb(c,2)) { goto L_801CEBB0; } // 801CEB98
  c->r[3]=c->r[31]+0x00000000u; // 801CEB9C
  c->r[5]=c->r[31]+0x0000026Cu; // 801CEBA0
  c->r[4]=0u+0x000001E6u; // 801CEBA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEBA8
  c->lr=0x801CEBB0u; f_80212260(c); // 801CEBAC
L_801CEBB0:;
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEBB0
  fcmp(c,0,c->f[0],c->f[30]); // 801CEBB4
  if (!crb(c,2)) { goto L_801CEBCC; } // 801CEBB8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CEBBC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801CEBC0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801CEBC4
  goto L_801CEC3C; // 801CEBC8
L_801CEBCC:;
  {uint32_t ea=c->r[28]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEBCC
  c->r[3]=c->r[1]+0x00000008u; // 801CEBD0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEBD4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CEBD8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CEBDC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 801CEBE0
  c->lr=0x801CEBE8u; f_8012EBA0(c); // 801CEBE4
  fcmp(c,0,c->f[1],c->f[31]); // 801CEBE8
  if (!crb(c,1)) { goto L_801CEC0C; } // 801CEBEC
  c->f[2]=c->ps1[2]=S(c->f[31]/c->f[1]); // 801CEBF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEBF4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEBF8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801CEBFC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 801CEC00
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CEC04
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801CEC08
L_801CEC0C:;
  c->r[3]=c->r[1]+0x00000008u; // 801CEC0C
  c->lr=0x801CEC14u; f_8012EBA0(c); // 801CEC10
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEC14
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC18
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 801CEC1C
  {uint32_t ea=c->r[2]+0xFFFFA8C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CEC20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801CEC24
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 801CEC28
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[30]); // 801CEC2C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 801CEC30
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 801CEC34
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CEC38
L_801CEC3C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEC3C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEC40
  c->f[2]=-c->f[0]; // 801CEC44
  c->lr=0x801CEC4Cu; f_802F6C18(c); // 801CEC48
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801CEC4C
  c->r[3]=c->r[1]+0x00000014u; // 801CEC50
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 801CEC54
  c->lr=0x801CEC5Cu; f_8012EBA0(c); // 801CEC58
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[31]); // 801CEC5C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801CEC60
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801CEC64
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801CEC68
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801CEC6C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801CEC70
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CEC74
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CEC78
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CEC7C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801CEC80
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CEC84
  c->lr=c->r[0]; // 801CEC88
  c->r[1]=c->r[1]+0x00000050u; // 801CEC8C
  return; // 801CEC90
}

// fn_801CECA0
void f_801CECA0(Ctx* __restrict c) {
  trace_call(0x801CECA0u);
  {uint32_t ea=c->r[2]+0xFFFFA928u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CECA0
  c->r[4]=0u+0x803A0000u; // 801CECA4
  {uint32_t ea=c->r[2]+0xFFFFA92Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CECA8
  c->r[4]=c->r[4]+0x00000700u; // 801CECAC
  {uint32_t ea=c->r[2]+0xFFFFA930u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CECB0
  {uint32_t ea=c->r[2]+0xFFFFA934u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CECB4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CECB8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[3]);} // 801CECBC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 801CECC0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CECC4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 801CECC8
  return; // 801CECCC
}

// fn_801CECD0
void f_801CECD0(Ctx* __restrict c) {
  trace_call(0x801CECD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CECD0
  c->r[0]=c->lr; // 801CECD4
  cmps(c,0,(int32_t)c->r[3],0); // 801CECD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CECDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CECE0
  c->r[31]=c->r[3]|c->r[3]; // 801CECE4
  if (crb(c,2)) { goto L_801CECF8; } // 801CECE8
  cmps(c,0,(int32_t)c->r[4],0); // 801CECEC
  if (!crb(c,1)) { goto L_801CECF8; } // 801CECF0
  c->lr=0x801CECF8u; f_802E61AC(c); // 801CECF4
L_801CECF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CECF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CECFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CED00
  c->lr=c->r[0]; // 801CED04
  c->r[1]=c->r[1]+0x00000010u; // 801CED08
  return; // 801CED0C
}

// fn_801CED10
void f_801CED10(Ctx* __restrict c) {
  trace_call(0x801CED10u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CED10
  c->r[0]=c->lr; // 801CED14
  W32(c->r[1]+0x00000074u,c->r[0]); // 801CED18
  c->r[11]=c->r[1]+0x00000070u; // 801CED1C
  c->lr=0x801CED24u; f_802E6998(c); // 801CED20
  cmps(c,0,(int32_t)c->r[4],0); // 801CED24
  c->r[19]=0u+0x803A0000u; // 801CED28
  c->r[15]=c->r[3]|c->r[3]; // 801CED2C
  c->r[16]=c->r[4]|c->r[4]; // 801CED30
  c->r[17]=c->r[5]|c->r[5]; // 801CED34
  c->r[14]=c->r[7]|c->r[7]; // 801CED38
  c->r[18]=c->r[8]|c->r[8]; // 801CED3C
  c->r[19]=c->r[19]+0x00000658u; // 801CED40
  if (!crb(c,2)) { goto L_801CED5C; } // 801CED44
  c->r[3]=c->r[19]+0x00000000u; // 801CED48
  c->r[5]=c->r[19]+0x00000018u; // 801CED4C
  c->r[4]=0u+0x00000031u; // 801CED50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CED54
  c->lr=0x801CED5Cu; f_80212260(c); // 801CED58
L_801CED5C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801CED5C
  if (!crb(c,2)) { goto L_801CED78; } // 801CED60
  c->r[3]=c->r[19]+0x00000000u; // 801CED64
  c->r[5]=c->r[19]+0x00000048u; // 801CED68
  c->r[4]=0u+0x00000032u; // 801CED6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CED70
  c->lr=0x801CED78u; f_80212260(c); // 801CED74
L_801CED78:;
  cmps(c,0,(int32_t)c->r[18],0); // 801CED78
  if (!crb(c,2)) { goto L_801CED94; } // 801CED7C
  c->r[3]=c->r[19]+0x00000000u; // 801CED80
  c->r[5]=c->r[19]+0x00000078u; // 801CED84
  c->r[4]=0u+0x00000033u; // 801CED88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CED8C
  c->lr=0x801CED94u; f_80212260(c); // 801CED90
L_801CED94:;
  c->r[0]=rotl(c->r[14],0)&0x00000001u; cr0(c,c->r[0]); // 801CED94
  if (crb(c,2)) { goto L_801CEDA4; } // 801CED98
  {uint32_t ea=c->r[2]+0xFFFFA934u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CED9C
  {uint32_t ea=c->r[18]+0x00000000u; WF32(ea,c->f[0]);} // 801CEDA0
L_801CEDA4:;
  c->r[0]=rotl(c->r[14],0)&0x00000008u; cr0(c,c->r[0]); // 801CEDA4
  if (crb(c,2)) { goto L_801CEDB8; } // 801CEDA8
  c->r[0]=R32(c->r[16]+0x0000001Cu); // 801CEDAC
  c->r[0]=0u-c->r[0]; // 801CEDB0
  W32(c->r[18]+0x00000020u,c->r[0]); // 801CEDB4
L_801CEDB8:;
  c->r[0]=R32(c->r[16]+0x0000000Cu); // 801CEDB8
  cmpu(c,0,c->r[0],0x00000001u); // 801CEDBC
  if (!crb(c,1)) { goto L_801CEDCC; } // 801CEDC0
  c->r[0]=0u+0xFFFFFFE9u; // 801CEDC4
  c->r[14]=c->r[14]&c->r[0]; // 801CEDC8
L_801CEDCC:;
  c->r[27]=c->r[14]&0x00000009u; cr0(c,c->r[27]); // 801CEDCC
  c->r[31]=R32(c->r[16]+0x00000010u); // 801CEDD0
  c->r[19]=c->r[16]+0x00000010u; // 801CEDD4
  c->r[26]=rotl(c->r[14],0)&0x00000001u; // 801CEDD8
  c->r[25]=rotl(c->r[14],0)&0x00000008u; // 801CEDDC
  c->r[24]=rotl(c->r[14],0)&0x00000006u; // 801CEDE0
  c->r[23]=rotl(c->r[14],0)&0x00000002u; // 801CEDE4
  c->r[22]=rotl(c->r[14],0)&0x00000004u; // 801CEDE8
  c->r[21]=rotl(c->r[14],0)&0x00000010u; // 801CEDEC
  c->r[20]=rotl(c->r[14],0)&0x00000020u; // 801CEDF0
  c->r[29]=0u+0x803A0000u; // 801CEDF4
  c->r[30]=0u+0x803A0000u; // 801CEDF8
  c->r[14]=0u+0x803A0000u; // 801CEDFC
  goto L_801CEF50; // 801CEE00
L_801CEE04:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CEE04
  if (!crb(c,2)) { goto L_801CEE20; } // 801CEE08
  c->r[3]=c->r[29]+0x0000075Cu; // 801CEE0C
  c->r[5]=c->r[30]+0x00000738u; // 801CEE10
  c->r[4]=0u+0x00000242u; // 801CEE14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE18
  c->lr=0x801CEE20u; f_80212260(c); // 801CEE1C
L_801CEE20:;
  c->r[28]=addc(c,c->r[31],0xFFFFFF9Cu,0); cr0(c,c->r[28]); // 801CEE20
  if (!crb(c,2)) { goto L_801CEE40; } // 801CEE24
  c->r[4]=0u+0x803A0000u; // 801CEE28
  c->r[3]=c->r[14]+0x0000078Cu; // 801CEE2C
  c->r[5]=c->r[4]+0x00000768u; // 801CEE30
  c->r[4]=0u+0x000001BFu; // 801CEE34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEE38
  c->lr=0x801CEE40u; f_80212260(c); // 801CEE3C
L_801CEE40:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CEE40
  if (crb(c,2)) { goto L_801CEEA4; } // 801CEE44
  c->r[3]=c->r[16]|c->r[16]; // 801CEE48
  c->r[4]=c->r[28]|c->r[28]; // 801CEE4C
  c->r[5]=c->r[17]|c->r[17]; // 801CEE50
  c->r[6]=c->r[1]+0x0000001Cu; // 801CEE54
  c->r[7]=c->r[1]+0x00000018u; // 801CEE58
  c->lr=0x801CEE60u; f_801CDED0(c); // 801CEE5C
  cmps(c,0,(int32_t)c->r[26],0); // 801CEE60
  if (crb(c,2)) { goto L_801CEE84; } // 801CEE64
  {uint32_t ea=c->r[18]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEE68
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEE6C
  fcmp(c,0,c->f[0],c->f[1]); // 801CEE70
  if (!crb(c,0)) { goto L_801CEE7C; } // 801CEE74
  goto L_801CEE80; // 801CEE78
L_801CEE7C:;
  c->f[1]=c->f[0]; // 801CEE7C
L_801CEE80:;
  {uint32_t ea=c->r[18]+0x00000000u; WF32(ea,c->f[1]);} // 801CEE80
L_801CEE84:;
  cmps(c,0,(int32_t)c->r[25],0); // 801CEE84
  if (crb(c,2)) { goto L_801CEEA4; } // 801CEE88
  c->r[3]=R32(c->r[1]+0x00000018u); // 801CEE8C
  c->r[0]=R32(c->r[18]+0x00000020u); // 801CEE90
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801CEE94
  if (!crb(c,0)) { goto L_801CEEA0; } // 801CEE98
  c->r[3]=c->r[0]|c->r[0]; // 801CEE9C
L_801CEEA0:;
  W32(c->r[18]+0x00000020u,c->r[3]); // 801CEEA0
L_801CEEA4:;
  cmps(c,0,(int32_t)c->r[24],0); // 801CEEA4
  if (crb(c,2)) { goto L_801CEEE8; } // 801CEEA8
  c->r[3]=c->r[16]|c->r[16]; // 801CEEAC
  c->r[4]=c->r[28]|c->r[28]; // 801CEEB0
  c->r[5]=c->r[17]|c->r[17]; // 801CEEB4
  c->r[6]=c->r[15]+0x00000004u; // 801CEEB8
  c->r[7]=c->r[1]+0x00000014u; // 801CEEBC
  c->r[8]=c->r[1]+0x00000010u; // 801CEEC0
  c->lr=0x801CEEC8u; f_801CE090(c); // 801CEEC4
  cmps(c,0,(int32_t)c->r[23],0); // 801CEEC8
  if (crb(c,2)) { goto L_801CEED8; } // 801CEECC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEED0
  {uint32_t ea=c->r[18]+0x00000008u; WF32(ea,c->f[0]);} // 801CEED4
L_801CEED8:;
  cmps(c,0,(int32_t)c->r[22],0); // 801CEED8
  if (crb(c,2)) { goto L_801CEEE8; } // 801CEEDC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEEE0
  {uint32_t ea=c->r[18]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CEEE4
L_801CEEE8:;
  cmps(c,0,(int32_t)c->r[21],0); // 801CEEE8
  if (crb(c,2)) { goto L_801CEF0C; } // 801CEEEC
  c->r[3]=c->r[16]|c->r[16]; // 801CEEF0
  c->r[4]=c->r[28]|c->r[28]; // 801CEEF4
  c->r[5]=c->r[17]|c->r[17]; // 801CEEF8
  c->r[6]=c->r[1]+0x0000000Cu; // 801CEEFC
  c->lr=0x801CEF04u; f_801CE1F0(c); // 801CEF00
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEF04
  {uint32_t ea=c->r[18]+0x00000004u; WF32(ea,c->f[0]);} // 801CEF08
L_801CEF0C:;
  cmps(c,0,(int32_t)c->r[20],0); // 801CEF0C
  if (crb(c,2)) { goto L_801CEF4C; } // 801CEF10
  c->r[3]=c->r[16]|c->r[16]; // 801CEF14
  c->r[4]=c->r[28]|c->r[28]; // 801CEF18
  c->r[5]=c->r[17]|c->r[17]; // 801CEF1C
  c->r[6]=c->r[1]+0x00000008u; // 801CEF20
  c->lr=0x801CEF28u; f_801CE3D0(c); // 801CEF24
  c->r[0]=R32(c->r[16]+0x00000028u); // 801CEF28
  W32(c->r[18]+0x0000001Cu,c->r[0]); // 801CEF2C
  {uint32_t ea=c->r[18]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CEF30
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CEF34
  fcmp(c,0,c->f[0],c->f[1]); // 801CEF38
  if (!crb(c,1)) { goto L_801CEF44; } // 801CEF3C
  goto L_801CEF48; // 801CEF40
L_801CEF44:;
  c->f[1]=c->f[0]; // 801CEF44
L_801CEF48:;
  {uint32_t ea=c->r[18]+0x00000018u; WF32(ea,c->f[1]);} // 801CEF48
L_801CEF4C:;
  c->r[31]=R32(c->r[31]+0x00000000u); // 801CEF4C
L_801CEF50:;
  cmpu(c,0,c->r[31],c->r[19]); // 801CEF50
  if (!crb(c,2)) { IRQCHK(c); goto L_801CEE04; } // 801CEF54
  c->r[11]=c->r[1]+0x00000070u; // 801CEF58
  c->lr=0x801CEF60u; f_802E69E4(c); // 801CEF5C
  c->r[0]=R32(c->r[1]+0x00000074u); // 801CEF60
  c->lr=c->r[0]; // 801CEF64
  c->r[1]=c->r[1]+0x00000070u; // 801CEF68
  return; // 801CEF6C
}

// fn_801CEF70
void f_801CEF70(Ctx* __restrict c) {
  trace_call(0x801CEF70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEF70
  c->r[0]=c->lr; // 801CEF74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CEF78
  c->r[11]=c->r[1]+0x00000020u; // 801CEF7C
  c->lr=0x801CEF84u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CEF80
  cmps(c,0,(int32_t)c->r[4],0); // 801CEF84
  c->r[31]=0u+0x803A0000u; // 801CEF88
  c->r[26]=c->r[3]|c->r[3]; // 801CEF8C
  c->r[27]=c->r[4]|c->r[4]; // 801CEF90
  c->r[28]=c->r[5]|c->r[5]; // 801CEF94
  c->r[29]=c->r[6]|c->r[6]; // 801CEF98
  c->r[30]=c->r[8]|c->r[8]; // 801CEF9C
  c->r[31]=c->r[31]+0x00000658u; // 801CEFA0
  if (!crb(c,2)) { goto L_801CEFBC; } // 801CEFA4
  c->r[3]=c->r[31]+0x00000000u; // 801CEFA8
  c->r[5]=c->r[31]+0x00000018u; // 801CEFAC
  c->r[4]=0u+0x0000009Bu; // 801CEFB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEFB4
  c->lr=0x801CEFBCu; f_80212260(c); // 801CEFB8
L_801CEFBC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CEFBC
  if (!crb(c,2)) { goto L_801CEFD8; } // 801CEFC0
  c->r[3]=c->r[31]+0x00000000u; // 801CEFC4
  c->r[5]=c->r[31]+0x00000048u; // 801CEFC8
  c->r[4]=0u+0x0000009Cu; // 801CEFCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEFD0
  c->lr=0x801CEFD8u; f_80212260(c); // 801CEFD4
L_801CEFD8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CEFD8
  if (!crb(c,2)) { goto L_801CEFF4; } // 801CEFDC
  c->r[3]=c->r[31]+0x00000000u; // 801CEFE0
  c->r[5]=c->r[31]+0x00000078u; // 801CEFE4
  c->r[4]=0u+0x0000009Du; // 801CEFE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CEFEC
  c->lr=0x801CEFF4u; f_80212260(c); // 801CEFF0
L_801CEFF4:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 801CEFF4
  c->r[7]=0u+0x0000001Fu; // 801CEFF8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CEFFC
  if (crb(c,2)) { goto L_801CF008; } // 801CF000
  c->r[7]=0u+0x0000001Eu; // 801CF004
L_801CF008:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801CF008
  if (crb(c,2)) { goto L_801CF014; } // 801CF00C
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFFDu; // 801CF010
L_801CF014:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801CF014
  if (crb(c,2)) { goto L_801CF020; } // 801CF018
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFFBu; // 801CF01C
L_801CF020:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801CF020
  if (crb(c,2)) { goto L_801CF02C; } // 801CF024
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFF7u; // 801CF028
L_801CF02C:;
  c->r[0]=R8(c->r[28]+0x0000001Eu); // 801CF02C
  cmps(c,0,(int32_t)c->r[0],0); // 801CF030
  if (!crb(c,2)) { goto L_801CF03C; } // 801CF034
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFEFu; // 801CF038
L_801CF03C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801CF03C
  if (crb(c,2)) { goto L_801CF048; } // 801CF040
  c->r[7]=c->r[7]|0x00000020u; // 801CF044
L_801CF048:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 801CF048
  c->r[3]=c->r[26]|c->r[26]; // 801CF04C
  c->r[4]=c->r[27]|c->r[27]; // 801CF050
  c->r[5]=c->r[28]|c->r[28]; // 801CF054
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CF058
  c->r[6]=c->r[29]|c->r[29]; // 801CF05C
  c->r[8]=c->r[30]|c->r[30]; // 801CF060
  c->ctr=c->r[12]; // 801CF064
  if (true) { c->lr=0x801CF06Cu; dispatch(c,c->ctr); } // 801CF068
  c->r[11]=c->r[1]+0x00000020u; // 801CF06C
  c->lr=0x801CF074u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF070
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF074
  c->lr=c->r[0]; // 801CF078
  c->r[1]=c->r[1]+0x00000020u; // 801CF07C
  return; // 801CF080
}

// fn_801CF090
void f_801CF090(Ctx* __restrict c) {
  trace_call(0x801CF090u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF090
  c->r[0]=c->lr; // 801CF094
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801CF098
  c->r[11]=c->r[1]+0x000000B0u; // 801CF09C
  c->lr=0x801CF0A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF0A0
  cmps(c,0,(int32_t)c->r[4],0); // 801CF0A4
  c->r[31]=0u+0x803A0000u; // 801CF0A8
  c->r[27]=c->r[3]|c->r[3]; // 801CF0AC
  c->r[28]=c->r[4]|c->r[4]; // 801CF0B0
  c->r[29]=c->r[5]|c->r[5]; // 801CF0B4
  c->r[30]=c->r[6]|c->r[6]; // 801CF0B8
  c->r[31]=c->r[31]+0x00000658u; // 801CF0BC
  if (!crb(c,2)) { goto L_801CF0D8; } // 801CF0C0
  c->r[3]=c->r[31]+0x00000000u; // 801CF0C4
  c->r[5]=c->r[31]+0x00000018u; // 801CF0C8
  c->r[4]=0u+0x000000D2u; // 801CF0CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF0D0
  c->lr=0x801CF0D8u; f_80212260(c); // 801CF0D4
L_801CF0D8:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CF0D8
  if (!crb(c,2)) { goto L_801CF0F4; } // 801CF0DC
  c->r[3]=c->r[31]+0x00000000u; // 801CF0E0
  c->r[5]=c->r[31]+0x00000048u; // 801CF0E4
  c->r[4]=0u+0x000000D3u; // 801CF0E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF0EC
  c->lr=0x801CF0F4u; f_80212260(c); // 801CF0F0
L_801CF0F4:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 801CF0F4
  c->r[3]=0u+0x01000000u; // 801CF0F8
  c->r[7]=c->r[3]+0x00000008u; // 801CF0FC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801CF100
  if (crb(c,2)) { goto L_801CF10C; } // 801CF104
  c->r[7]=rotl(c->r[7],0)&0xFFFFFFF7u; // 801CF108
L_801CF10C:;
  c->r[4]=c->r[1]+0x00000048u; // 801CF10C
  c->r[3]=c->r[1]+0x00000090u; // 801CF110
  {uint32_t ea=c->r[2]+0xFFFFA934u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF114
  cmpu(c,0,c->r[4],c->r[3]); // 801CF118
  {uint32_t ea=c->r[2]+0xFFFFA938u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF11C
  c->r[0]=0u+0x00000000u; // 801CF120
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801CF124
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801CF128
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801CF12C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801CF130
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801CF134
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 801CF138
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801CF13C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF140
  W32(c->r[1]+0x00000028u,c->r[0]); // 801CF144
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801CF148
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 801CF14C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 801CF150
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 801CF154
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801CF158
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801CF15C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801CF160
  if (!crb(c,0)) { goto L_801CF1A0; } // 801CF164
  c->r[3]=c->r[3]+0x00000017u; // 801CF168
  c->r[0]=0u+0x00000018u; // 801CF16C
  c->r[3]=c->r[3]-c->r[4]; // 801CF170
  c->r[3]=divwu(c->r[3],c->r[0]); // 801CF174
  c->ctr=c->r[3]; // 801CF178
  if (!crb(c,0)) { goto L_801CF1A0; } // 801CF17C
L_801CF180:;
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 801CF180
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 801CF184
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801CF188
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 801CF18C
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[0]);} // 801CF190
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 801CF194
  c->r[4]=c->r[4]+0x00000018u; // 801CF198
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CF180; } // 801CF19C
L_801CF1A0:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801CF1A0
  c->r[3]=c->r[27]|c->r[27]; // 801CF1A4
  c->r[4]=c->r[28]|c->r[28]; // 801CF1A8
  c->r[5]=c->r[29]|c->r[29]; // 801CF1AC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801CF1B0
  c->r[6]=c->r[30]|c->r[30]; // 801CF1B4
  c->r[8]=c->r[1]+0x00000008u; // 801CF1B8
  c->ctr=c->r[12]; // 801CF1BC
  if (true) { c->lr=0x801CF1C4u; dispatch(c,c->ctr); } // 801CF1C0
  c->r[11]=c->r[1]+0x000000B0u; // 801CF1C4
  c->r[3]=R32(c->r[1]+0x00000028u); // 801CF1C8
  c->lr=0x801CF1D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF1CC
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801CF1D0
  c->lr=c->r[0]; // 801CF1D4
  c->r[1]=c->r[1]+0x000000B0u; // 801CF1D8
  return; // 801CF1DC
}

// fn_801CF1E0
void f_801CF1E0(Ctx* __restrict c) {
  trace_call(0x801CF1E0u);
  c->r[3]=0u+0x00000001u; // 801CF1E0
  return; // 801CF1E4
}

// fn_801CF1F0
void f_801CF1F0(Ctx* __restrict c) {
  trace_call(0x801CF1F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF1F0
  c->r[0]=c->lr; // 801CF1F4
  cmps(c,0,(int32_t)c->r[3],0); // 801CF1F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF1FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF200
  c->r[31]=c->r[3]|c->r[3]; // 801CF204
  if (crb(c,2)) { goto L_801CF218; } // 801CF208
  cmps(c,0,(int32_t)c->r[4],0); // 801CF20C
  if (!crb(c,1)) { goto L_801CF218; } // 801CF210
  c->lr=0x801CF218u; f_802E61AC(c); // 801CF214
L_801CF218:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF218
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF21C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF220
  c->lr=c->r[0]; // 801CF224
  c->r[1]=c->r[1]+0x00000010u; // 801CF228
  return; // 801CF22C
}

// fn_801CF230
void f_801CF230(Ctx* __restrict c) {
  trace_call(0x801CF230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF230
  c->r[0]=c->lr; // 801CF234
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF238
  c->r[4]=0u+0x00000000u; // 801CF23C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF240
  c->r[0]=0u+0x00000001u; // 801CF244
  {uint32_t ea=c->r[2]+0xFFFFA944u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF24C
  c->r[31]=c->r[3]|c->r[3]; // 801CF250
  {uint32_t ea=c->r[2]+0xFFFFA948u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF254
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[2]);} // 801CF258
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[2]);} // 801CF25C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 801CF260
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 801CF264
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[2]);} // 801CF268
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 801CF26C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801CF270
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 801CF274
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801CF278
  W32(c->r[3]+0x00000054u,c->r[4]); // 801CF27C
  W8(c->r[3]+0x00000058u,c->r[0]); // 801CF280
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801CF284
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 801CF288
  W32(c->r[3]+0x00000064u,c->r[4]); // 801CF28C
  W32(c->r[3]+0x00000068u,c->r[4]); // 801CF290
  c->lr=0x801CF298u; f_80212CB0(c); // 801CF294
  c->r[3]=c->r[31]|c->r[31]; // 801CF298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF29C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF2A0
  c->lr=c->r[0]; // 801CF2A4
  c->r[1]=c->r[1]+0x00000010u; // 801CF2A8
  return; // 801CF2AC
}

// fn_801CF2B0
void f_801CF2B0(Ctx* __restrict c) {
  trace_call(0x801CF2B0u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF2B0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF2B4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF2B8
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 801CF2BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF2C0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[2]); // 801CF2C4
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF2C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 801CF2CC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CF2D0
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801CF2D4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF2D8
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[5]); // 801CF2DC
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF2E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 801CF2E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CF2E8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[5]); // 801CF2EC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 801CF2F0
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 801CF2F4
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 801CF2F8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 801CF2FC
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 801CF300
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF304
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 801CF308
  W32(c->r[1]+0x00000028u,c->r[30]); // 801CF30C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[9]); // 801CF310
  W32(c->r[1]+0x00000024u,c->r[29]); // 801CF314
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801CF318
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 801CF31C
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[3]); // 801CF320
  c->r[0]=R8(c->r[3]+0x00000058u); // 801CF324
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[6]); // 801CF328
  c->r[7]=R32(c->r[3]+0x00000030u); // 801CF32C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801CF330
  c->r[6]=R32(c->r[3]+0x00000034u); // 801CF334
  c->r[5]=R32(c->r[3]+0x00000038u); // 801CF338
  c->f[3]=-c->f[4]; // 801CF33C
  c->f[1]=-c->f[1]; // 801CF340
  cmps(c,0,(int32_t)c->r[0],0); // 801CF344
  c->f[0]=-c->f[0]; // 801CF348
  W32(c->r[1]+0x00000008u,c->r[7]); // 801CF34C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801CF350
  W32(c->r[1]+0x00000010u,c->r[5]); // 801CF354
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[3]);} // 801CF358
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 801CF35C
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801CF360
  if (crb(c,2)) { goto L_801CF3D4; } // 801CF364
  c->r[31]=R32(c->r[4]+0x00000000u); // 801CF368
  c->r[0]=0u+0x00000000u; // 801CF36C
  c->r[30]=R32(c->r[4]+0x00000004u); // 801CF370
  c->r[29]=R32(c->r[4]+0x00000008u); // 801CF374
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 801CF378
  c->r[11]=R32(c->r[4]+0x00000010u); // 801CF37C
  c->r[10]=R32(c->r[4]+0x00000014u); // 801CF380
  c->r[9]=R32(c->r[4]+0x00000018u); // 801CF384
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801CF388
  c->r[7]=R32(c->r[4]+0x00000020u); // 801CF38C
  c->r[6]=R32(c->r[4]+0x00000024u); // 801CF390
  c->r[5]=R32(c->r[4]+0x00000028u); // 801CF394
  c->r[4]=R32(c->r[4]+0x0000002Cu); // 801CF398
  W32(c->r[3]+0x00000000u,c->r[31]); // 801CF39C
  W32(c->r[3]+0x00000004u,c->r[30]); // 801CF3A0
  W32(c->r[3]+0x00000008u,c->r[29]); // 801CF3A4
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 801CF3A8
  W32(c->r[3]+0x00000010u,c->r[11]); // 801CF3AC
  W32(c->r[3]+0x00000014u,c->r[10]); // 801CF3B0
  W32(c->r[3]+0x00000018u,c->r[9]); // 801CF3B4
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 801CF3B8
  W32(c->r[3]+0x00000020u,c->r[7]); // 801CF3BC
  W32(c->r[3]+0x00000024u,c->r[6]); // 801CF3C0
  W32(c->r[3]+0x00000028u,c->r[5]); // 801CF3C4
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801CF3C8
  W8(c->r[3]+0x00000058u,c->r[0]); // 801CF3CC
  goto L_801CF458; // 801CF3D0
L_801CF3D4:;
  c->r[5]=c->r[1]+0x00000008u; // 801CF3D4
  c->r[29]=R32(c->r[4]+0x00000000u); // 801CF3D8
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,2,ea,0,0);} // 801CF3DC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,1,ea,0,0);} // 801CF3E0
  c->r[30]=R32(c->r[4]+0x00000004u); // 801CF3E4
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CF3E8
  {uint32_t ea=c->r[5]+0x00000008u; psq_load(c,1,ea,1,0);} // 801CF3EC
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,2,ea,1,0);} // 801CF3F0
  {uint32_t ea=c->r[3]+0x0000003Cu; psq_store(c,0,ea,0,0);} // 801CF3F4
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 801CF3F8
  c->r[31]=R32(c->r[4]+0x00000008u); // 801CF3FC
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 801CF400
  c->r[11]=R32(c->r[4]+0x00000010u); // 801CF404
  c->r[10]=R32(c->r[4]+0x00000014u); // 801CF408
  c->r[9]=R32(c->r[4]+0x00000018u); // 801CF40C
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801CF410
  c->r[7]=R32(c->r[4]+0x00000020u); // 801CF414
  c->r[6]=R32(c->r[4]+0x00000024u); // 801CF418
  c->r[5]=R32(c->r[4]+0x00000028u); // 801CF41C
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 801CF420
  W32(c->r[3]+0x00000000u,c->r[29]); // 801CF424
  W32(c->r[3]+0x00000004u,c->r[30]); // 801CF428
  W32(c->r[3]+0x00000008u,c->r[31]); // 801CF42C
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 801CF430
  W32(c->r[3]+0x00000010u,c->r[11]); // 801CF434
  W32(c->r[3]+0x00000014u,c->r[10]); // 801CF438
  W32(c->r[3]+0x00000018u,c->r[9]); // 801CF43C
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 801CF440
  W32(c->r[3]+0x00000020u,c->r[7]); // 801CF444
  W32(c->r[3]+0x00000024u,c->r[6]); // 801CF448
  W32(c->r[3]+0x00000028u,c->r[5]); // 801CF44C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801CF450
  {uint32_t ea=c->r[3]+0x00000044u; psq_store(c,0,ea,1,0);} // 801CF454
L_801CF458:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CF458
  c->r[30]=R32(c->r[1]+0x00000028u); // 801CF45C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801CF460
  c->r[1]=c->r[1]+0x00000030u; // 801CF464
  return; // 801CF468
}

// fn_801CF470
void f_801CF470(Ctx* __restrict c) {
  trace_call(0x801CF470u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CF470
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF474
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF478
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 801CF47C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801CF480
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801CF484
  return; // 801CF488
}

// fn_801CF490
void f_801CF490(Ctx* __restrict c) {
  trace_call(0x801CF490u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF490
  c->r[0]=c->lr; // 801CF494
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF498
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF49C
  fcmp(c,0,c->f[1],c->f[0]); // 801CF4A0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CF4A4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CF4A8
  c->f[31]=c->f[1]; // 801CF4AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF4B0
  c->r[31]=c->r[3]|c->r[3]; // 801CF4B4
  if (crb(c,1)) { goto L_801CF4D8; } // 801CF4B8
  c->r[3]=0u+0x803A0000u; // 801CF4BC
  c->r[5]=0u+0x803A0000u; // 801CF4C0
  c->r[3]=c->r[3]+0x00000798u; // 801CF4C4
  c->r[4]=0u+0x00000050u; // 801CF4C8
  c->r[5]=c->r[5]+0x000007B0u; // 801CF4CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF4D0
  c->lr=0x801CF4D8u; f_80212260(c); // 801CF4D4
L_801CF4D8:;
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[31]);} // 801CF4D8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CF4DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CF4E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF4E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF4E8
  c->lr=c->r[0]; // 801CF4EC
  c->r[1]=c->r[1]+0x00000020u; // 801CF4F0
  return; // 801CF4F4
}

// fn_801CF500
void f_801CF500(Ctx* __restrict c) {
  trace_call(0x801CF500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF500
  c->r[0]=c->lr; // 801CF504
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF508
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF50C
  fcmp(c,0,c->f[1],c->f[0]); // 801CF510
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CF514
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CF518
  c->f[31]=c->f[1]; // 801CF51C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF520
  c->r[31]=c->r[3]|c->r[3]; // 801CF524
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801CF528
  if (crb(c,2)) { goto L_801CF54C; } // 801CF52C
  c->r[3]=0u+0x803A0000u; // 801CF530
  c->r[5]=0u+0x803A0000u; // 801CF534
  c->r[3]=c->r[3]+0x00000798u; // 801CF538
  c->r[4]=0u+0x00000056u; // 801CF53C
  c->r[5]=c->r[5]+0x000007E0u; // 801CF540
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF544
  c->lr=0x801CF54Cu; f_80212260(c); // 801CF548
L_801CF54C:;
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[31]);} // 801CF54C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CF550
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CF554
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF558
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF55C
  c->lr=c->r[0]; // 801CF560
  c->r[1]=c->r[1]+0x00000020u; // 801CF564
  return; // 801CF568
}

// fn_801CF570
void f_801CF570(Ctx* __restrict c) {
  trace_call(0x801CF570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF570
  c->r[0]=c->lr; // 801CF574
  {uint32_t ea=c->r[2]+0xFFFFA940u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF578
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF57C
  fcmp(c,0,c->f[1],c->f[0]); // 801CF580
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801CF584
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801CF588
  c->f[31]=c->f[1]; // 801CF58C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF590
  c->r[31]=c->r[3]|c->r[3]; // 801CF594
  if (crb(c,1)) { goto L_801CF5B8; } // 801CF598
  c->r[3]=0u+0x803A0000u; // 801CF59C
  c->r[5]=0u+0x803A0000u; // 801CF5A0
  c->r[3]=c->r[3]+0x00000798u; // 801CF5A4
  c->r[4]=0u+0x0000005Cu; // 801CF5A8
  c->r[5]=c->r[5]+0x00000810u; // 801CF5AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF5B0
  c->lr=0x801CF5B8u; f_80212260(c); // 801CF5B4
L_801CF5B8:;
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[31]);} // 801CF5B8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801CF5BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801CF5C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF5C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF5C8
  c->lr=c->r[0]; // 801CF5CC
  c->r[1]=c->r[1]+0x00000020u; // 801CF5D0
  return; // 801CF5D4
}

// fn_801CF5E0
void f_801CF5E0(Ctx* __restrict c) {
  trace_call(0x801CF5E0u);
  c->r[7]=0u+0x803A0000u; // 801CF5E0
  c->r[5]=0u+0x00000000u; // 801CF5E4
  c->r[7]=c->r[7]+0x0000091Cu; // 801CF5E8
  {uint32_t ea=c->r[2]+0xFFFFA950u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF5EC
  c->r[8]=c->r[3]+0x00000010u; // 801CF5F0
  {uint32_t ea=c->r[2]+0xFFFFA954u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF5F4
  c->r[4]=0u+0x805B0000u; // 801CF5F8
  c->r[6]=c->r[7]+0x00000018u; // 801CF5FC
  c->r[4]=c->r[4]+0xFFFFC988u; // 801CF600
  c->r[0]=0u+0x00000020u; // 801CF604
  W32(c->r[3]+0x00000000u,c->r[7]); // 801CF608
  W32(c->r[3]+0x00000004u,c->r[6]); // 801CF60C
  W32(c->r[3]+0x00000008u,c->r[5]); // 801CF610
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801CF614
  W32(c->r[3]+0x00000010u,c->r[8]); // 801CF618
  W32(c->r[3]+0x00000014u,c->r[8]); // 801CF61C
  W32(c->r[3]+0x00000018u,c->r[4]); // 801CF620
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801CF624
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 801CF628
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801CF62C
  W32(c->r[3]+0x00000028u,c->r[5]); // 801CF630
  return; // 801CF634
}

// fn_801CF640
void f_801CF640(Ctx* __restrict c) {
  trace_call(0x801CF640u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF640
  c->r[0]=c->lr; // 801CF644
  cmps(c,0,(int32_t)c->r[4],0); // 801CF648
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CF64C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801CF650
  c->r[31]=c->r[4]|c->r[4]; // 801CF654
  if (!crb(c,2)) { goto L_801CF678; } // 801CF658
  c->r[3]=0u+0x803A0000u; // 801CF65C
  c->r[5]=0u+0x803A0000u; // 801CF660
  c->r[3]=c->r[3]+0x00000840u; // 801CF664
  c->r[4]=0u+0x00000046u; // 801CF668
  c->r[5]=c->r[5]+0x00000858u; // 801CF66C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF670
  c->lr=0x801CF678u; f_80212260(c); // 801CF674
L_801CF678:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF678
  c->r[4]=c->r[1]+0x00000008u; // 801CF67C
  c->r[31]=0u+0x00000000u; // 801CF680
  c->lr=0x801CF688u; f_801CFEA0(c); // 801CF684
  cmps(c,0,(int32_t)c->r[3],0); // 801CF688
  if (crb(c,2)) { goto L_801CF6A4; } // 801CF68C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801CF690
  c->r[3]=R32(c->r[1]+0x00000010u); // 801CF694
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CF698
  c->r[31]=c->r[4]+c->r[3]; // 801CF69C
  c->r[31]=c->r[31]+c->r[0]; // 801CF6A0
L_801CF6A4:;
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)40); // 801CF6A4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801CF6A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CF6AC
  c->lr=c->r[0]; // 801CF6B0
  c->r[1]=c->r[1]+0x00000030u; // 801CF6B4
  return; // 801CF6B8
}

// fn_801CF6C0
void f_801CF6C0(Ctx* __restrict c) {
  trace_call(0x801CF6C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF6C0
  c->r[0]=c->lr; // 801CF6C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CF6C8
  c->r[11]=c->r[1]+0x00000040u; // 801CF6CC
  c->lr=0x801CF6D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CF6D0
  cmps(c,0,(int32_t)c->r[4],0); // 801CF6D4
  c->r[31]=0u+0x803A0000u; // 801CF6D8
  c->r[27]=c->r[3]|c->r[3]; // 801CF6DC
  c->r[30]=c->r[4]|c->r[4]; // 801CF6E0
  c->r[28]=c->r[5]|c->r[5]; // 801CF6E4
  c->r[29]=c->r[6]|c->r[6]; // 801CF6E8
  c->r[31]=c->r[31]+0x00000840u; // 801CF6EC
  if (!crb(c,2)) { goto L_801CF708; } // 801CF6F0
  c->r[3]=c->r[31]+0x00000000u; // 801CF6F4
  c->r[5]=c->r[31]+0x00000018u; // 801CF6F8
  c->r[4]=0u+0x00000068u; // 801CF6FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF700
  c->lr=0x801CF708u; f_80212260(c); // 801CF704
L_801CF708:;
  cmps(c,0,(int32_t)c->r[28],0); // 801CF708
  if (!crb(c,2)) { goto L_801CF724; } // 801CF70C
  c->r[3]=c->r[31]+0x00000000u; // 801CF710
  c->r[5]=c->r[31]+0x0000003Cu; // 801CF714
  c->r[4]=0u+0x00000069u; // 801CF718
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF71C
  c->lr=0x801CF724u; f_80212260(c); // 801CF720
L_801CF724:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CF724
  if (!crb(c,2)) { goto L_801CF740; } // 801CF728
  c->r[3]=c->r[31]+0x00000000u; // 801CF72C
  c->r[5]=c->r[31]+0x00000018u; // 801CF730
  c->r[4]=0u+0x00000046u; // 801CF734
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF738
  c->lr=0x801CF740u; f_80212260(c); // 801CF73C
L_801CF740:;
  c->r[3]=c->r[30]|c->r[30]; // 801CF740
  c->r[4]=c->r[1]+0x00000008u; // 801CF744
  c->r[30]=0u+0x00000000u; // 801CF748
  c->lr=0x801CF750u; f_801CFEA0(c); // 801CF74C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF750
  if (crb(c,2)) { goto L_801CF76C; } // 801CF754
  c->r[4]=R32(c->r[1]+0x00000008u); // 801CF758
  c->r[3]=R32(c->r[1]+0x00000010u); // 801CF75C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801CF760
  c->r[30]=c->r[4]+c->r[3]; // 801CF764
  c->r[30]=c->r[30]+c->r[0]; // 801CF768
L_801CF76C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)40); // 801CF76C
  cmpu(c,0,c->r[29],c->r[0]); // 801CF770
  if (!crb(c,0)) { goto L_801CF78C; } // 801CF774
  c->r[3]=c->r[31]+0x00000000u; // 801CF778
  c->r[5]=c->r[31]+0x00000068u; // 801CF77C
  c->r[4]=0u+0x0000006Au; // 801CF780
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CF784
  c->lr=0x801CF78Cu; f_80212260(c); // 801CF788
L_801CF78C:;
  c->r[4]=c->r[28]|c->r[28]; // 801CF78C
  c->r[5]=c->r[29]|c->r[29]; // 801CF790
  c->r[3]=c->r[27]+0x00000008u; // 801CF794
  c->r[6]=0u+0x00000028u; // 801CF798
  c->lr=0x801CF7A0u; f_801C5E30(c); // 801CF79C
  c->r[11]=c->r[1]+0x00000040u; // 801CF7A0
  c->r[3]=0u+0x00000001u; // 801CF7A4
  c->lr=0x801CF7ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CF7A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CF7AC
  c->lr=c->r[0]; // 801CF7B0
  c->r[1]=c->r[1]+0x00000040u; // 801CF7B4
  return; // 801CF7B8
}

// fn_801CF7C0
void f_801CF7C0(Ctx* __restrict c) {
  trace_call(0x801CF7C0u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801CF7C0
  c->r[12]=c->r[3]|c->r[3]; // 801CF7C4
  c->r[9]=c->r[4]|c->r[4]; // 801CF7C8
  c->r[11]=c->r[5]|c->r[5]; // 801CF7CC
  cmps(c,0,(int32_t)c->r[0],0); // 801CF7D0
  c->r[10]=c->r[6]|c->r[6]; // 801CF7D4
  c->r[8]=c->r[7]|c->r[7]; // 801CF7D8
  if (crb(c,2)) return; // 801CF7DC
  c->r[3]=c->r[0]|c->r[0]; // 801CF7E0
  c->r[4]=c->r[12]|c->r[12]; // 801CF7E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CF7E8
  c->r[5]=c->r[9]|c->r[9]; // 801CF7EC
  c->r[6]=c->r[11]|c->r[11]; // 801CF7F0
  c->r[7]=c->r[10]|c->r[10]; // 801CF7F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801CF7F8
  c->ctr=c->r[12]; // 801CF7FC
  if (true) { dispatch(c,c->ctr); return; } // 801CF800
  return; // 801CF804
}

// fn_801CF810
void f_801CF810(Ctx* __restrict c) {
  trace_call(0x801CF810u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801CF810
  c->r[8]=c->r[3]|c->r[3]; // 801CF814
  c->r[7]=c->r[4]|c->r[4]; // 801CF818
  c->r[6]=c->r[5]|c->r[5]; // 801CF81C
  cmps(c,0,(int32_t)c->r[0],0); // 801CF820
  c->r[3]=0u+0x00000000u; // 801CF824
  if (crb(c,2)) return; // 801CF828
  c->r[3]=c->r[0]|c->r[0]; // 801CF82C
  c->r[4]=c->r[8]|c->r[8]; // 801CF830
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CF834
  c->r[5]=c->r[7]|c->r[7]; // 801CF838
  c->r[12]=R32(c->r[12]+0x00000010u); // 801CF83C
  c->ctr=c->r[12]; // 801CF840
  if (true) { dispatch(c,c->ctr); return; } // 801CF844
  return; // 801CF848
}

// fn_801CF850
void f_801CF850(Ctx* __restrict c) {
  trace_call(0x801CF850u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801CF850
  c->r[8]=c->r[3]|c->r[3]; // 801CF854
  c->r[7]=c->r[4]|c->r[4]; // 801CF858
  c->r[6]=c->r[5]|c->r[5]; // 801CF85C
  cmps(c,0,(int32_t)c->r[0],0); // 801CF860
  c->r[3]=0u+0x00000001u; // 801CF864
  if (crb(c,2)) return; // 801CF868
  c->r[3]=c->r[0]|c->r[0]; // 801CF86C
  c->r[4]=c->r[8]|c->r[8]; // 801CF870
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CF874
  c->r[5]=c->r[7]|c->r[7]; // 801CF878
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CF87C
  c->ctr=c->r[12]; // 801CF880
  if (true) { dispatch(c,c->ctr); return; } // 801CF884
  return; // 801CF888
}

// fn_801CF890
void f_801CF890(Ctx* __restrict c) {
  trace_call(0x801CF890u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF890
  c->r[0]=c->lr; // 801CF894
  cmpu(c,0,c->r[4],0x00000028u); // 801CF898
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF89C
  if (crb(c,2)) { goto L_801CF8AC; } // 801CF8A0
  c->r[3]=0u+0x00000000u; // 801CF8A4
  goto L_801CF8EC; // 801CF8A8
L_801CF8AC:;
  c->r[3]=c->r[3]+0x00000008u; // 801CF8AC
  c->lr=0x801CF8B4u; f_801C60B0(c); // 801CF8B0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF8B4
  if (!crb(c,2)) { goto L_801CF8C4; } // 801CF8B8
  c->r[3]=0u+0x00000000u; // 801CF8BC
  goto L_801CF8EC; // 801CF8C0
L_801CF8C4:;
  if (crb(c,2)) { goto L_801CF8EC; } // 801CF8C4
  c->r[5]=0u+0x00000000u; // 801CF8C8
  W32(c->r[3]+0x00000018u,c->r[5]); // 801CF8CC
  c->r[4]=0u+0x00000001u; // 801CF8D0
  c->r[0]=0u+0x00000080u; // 801CF8D4
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 801CF8D8
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801CF8DC
  W8(c->r[3]+0x0000001Eu,c->r[5]); // 801CF8E0
  W32(c->r[3]+0x00000020u,c->r[5]); // 801CF8E4
  W32(c->r[3]+0x00000024u,c->r[5]); // 801CF8E8
L_801CF8EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF8EC
  c->lr=c->r[0]; // 801CF8F0
  c->r[1]=c->r[1]+0x00000010u; // 801CF8F4
  return; // 801CF8F8
}

// fn_801CF900
void f_801CF900(Ctx* __restrict c) {
  trace_call(0x801CF900u);
  cmps(c,0,(int32_t)c->r[4],0); // 801CF900
  if (crb(c,2)) return; // 801CF904
  c->r[3]=c->r[3]+0x00000008u; // 801CF908
  f_801C6110(c); return; // 801CF90C
  return; // 801CF910
}

// fn_801CF920
void f_801CF920(Ctx* __restrict c) {
  trace_call(0x801CF920u);
  c->r[5]=0u+0x00000000u; // 801CF920
  c->r[4]=0u+0x00000001u; // 801CF924
  c->r[0]=0u+0x00000080u; // 801CF928
  W32(c->r[3]+0x00000018u,c->r[5]); // 801CF92C
  W8(c->r[3]+0x0000001Cu,c->r[4]); // 801CF930
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801CF934
  W8(c->r[3]+0x0000001Eu,c->r[5]); // 801CF938
  W32(c->r[3]+0x00000020u,c->r[5]); // 801CF93C
  W32(c->r[3]+0x00000024u,c->r[5]); // 801CF940
  return; // 801CF944
}

// fn_801CF950
void f_801CF950(Ctx* __restrict c) {
  trace_call(0x801CF950u);
  c->r[3]=0u+0x805B0000u; // 801CF950
  c->r[3]=c->r[3]+0xFFFFC988u; // 801CF954
  f_801CECA0(c); return; // 801CF958
}

// fn_801CF960
void f_801CF960(Ctx* __restrict c) {
  trace_call(0x801CF960u);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 801CF960
  f_801CF900(c); return; // 801CF964
}

// fn_801CF970
void f_801CF970(Ctx* __restrict c) {
  trace_call(0x801CF970u);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 801CF970
  f_801CF890(c); return; // 801CF974
}

// fn_801CF980
void f_801CF980(Ctx* __restrict c) {
  trace_call(0x801CF980u);
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 801CF980
  f_8003DC00(c); return; // 801CF984
}

// fn_801CF990
void f_801CF990(Ctx* __restrict c) {
  trace_call(0x801CF990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF990
  c->r[0]=c->lr; // 801CF994
  c->r[6]=0u+0x803A0000u; // 801CF998
  c->r[5]=0u+0x801C0000u; // 801CF99C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF9A0
  c->r[6]=c->r[6]+0x000009C0u; // 801CF9A4
  c->r[5]=c->r[5]+0x000004C0u; // 801CF9A8
  c->r[7]=0u+0x00000004u; // 801CF9AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF9B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF9B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF9B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CF9BC
  c->r[28]=c->r[3]|c->r[3]; // 801CF9C0
  W32(c->r[3]+0x00000000u,c->r[6]); // 801CF9C4
  c->r[6]=0u+0x801C0000u; // 801CF9C8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CF9CC
  c->r[4]=c->r[6]+0x000004A0u; // 801CF9D0
  c->r[6]=0u+0x00000010u; // 801CF9D4
  c->r[3]=c->r[3]+0x00000008u; // 801CF9D8
  c->lr=0x801CF9E0u; f_802E66A0(c); // 801CF9DC
  {uint32_t ea=c->r[2]+0xFFFFA958u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CF9E0
  c->r[29]=0u+0x00000000u; // 801CF9E4
  {uint32_t ea=c->r[2]+0xFFFFA95Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CF9E8
  c->r[30]=0u+0x00000000u; // 801CF9EC
  {uint32_t ea=c->r[28]+0x00000048u; WF32(ea,c->f[1]);} // 801CF9F0
  c->r[31]=0u+0x80000000u; // 801CF9F4
  {uint32_t ea=c->r[28]+0x0000004Cu; WF32(ea,c->f[1]);} // 801CF9F8
  {uint32_t ea=c->r[28]+0x00000050u; WF32(ea,c->f[0]);} // 801CF9FC
L_801CFA00:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CFA00
  c->r[3]=c->r[28]+c->r[30]; // 801CFA04
  c->r[3]=c->r[3]+0x00000008u; // 801CFA08
  c->r[4]=0u+0x00000001u; // 801CFA0C
  if (!crb(c,2)) { goto L_801CFA18; } // 801CFA10
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 801CFA14
L_801CFA18:;
  c->lr=0x801CFA1Cu; f_801C0830(c); // 801CFA18
  c->r[29]=c->r[29]+0x00000001u; // 801CFA1C
  c->r[30]=c->r[30]+0x00000010u; // 801CFA20
  cmps(c,0,(int32_t)c->r[29],4); // 801CFA24
  if (crb(c,0)) { IRQCHK(c); goto L_801CFA00; } // 801CFA28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFA2C
  c->r[3]=c->r[28]|c->r[28]; // 801CFA30
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFA34
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFA38
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CFA3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFA40
  c->lr=c->r[0]; // 801CFA44
  c->r[1]=c->r[1]+0x00000020u; // 801CFA48
  return; // 801CFA4C
}

// fn_801CFA50
void f_801CFA50(Ctx* __restrict c) {
  trace_call(0x801CFA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFA50
  c->r[0]=c->lr; // 801CFA54
  cmps(c,0,(int32_t)c->r[3],0); // 801CFA58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFA5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFA60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFA64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFA68
  c->r[29]=c->r[4]|c->r[4]; // 801CFA6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CFA70
  c->r[28]=c->r[3]|c->r[3]; // 801CFA74
  if (crb(c,2)) { goto L_801CFAD8; } // 801CFA78
  c->r[4]=0u+0x803A0000u; // 801CFA7C
  c->r[30]=0u+0x00000000u; // 801CFA80
  c->r[4]=c->r[4]+0x000009C0u; // 801CFA84
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CFA88
  c->r[31]=0u+0x00000000u; // 801CFA8C
L_801CFA90:;
  c->r[3]=c->r[28]+c->r[31]; // 801CFA90
  c->r[4]=c->r[28]|c->r[28]; // 801CFA94
  c->r[3]=c->r[3]+0x00000008u; // 801CFA98
  c->lr=0x801CFAA0u; f_801C0570(c); // 801CFA9C
  c->r[30]=c->r[30]+0x00000001u; // 801CFAA0
  c->r[31]=c->r[31]+0x00000010u; // 801CFAA4
  cmps(c,0,(int32_t)c->r[30],4); // 801CFAA8
  if (crb(c,0)) { IRQCHK(c); goto L_801CFA90; } // 801CFAAC
  c->r[4]=0u+0x801C0000u; // 801CFAB0
  c->r[3]=c->r[28]+0x00000008u; // 801CFAB4
  c->r[4]=c->r[4]+0x000004C0u; // 801CFAB8
  c->r[5]=0u+0x00000010u; // 801CFABC
  c->r[6]=0u+0x00000004u; // 801CFAC0
  c->lr=0x801CFAC8u; f_802E6798(c); // 801CFAC4
  cmps(c,0,(int32_t)c->r[29],0); // 801CFAC8
  if (!crb(c,1)) { goto L_801CFAD8; } // 801CFACC
  c->r[3]=c->r[28]|c->r[28]; // 801CFAD0
  c->lr=0x801CFAD8u; f_802E61AC(c); // 801CFAD4
L_801CFAD8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFAD8
  c->r[3]=c->r[28]|c->r[28]; // 801CFADC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFAE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFAE4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CFAE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFAEC
  c->lr=c->r[0]; // 801CFAF0
  c->r[1]=c->r[1]+0x00000020u; // 801CFAF4
  return; // 801CFAF8
}

// fn_801CFB00
void f_801CFB00(Ctx* __restrict c) {
  trace_call(0x801CFB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB00
  c->r[0]=c->lr; // 801CFB04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFB08
  c->r[11]=c->r[1]+0x00000020u; // 801CFB0C
  c->lr=0x801CFB14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFB10
  cmps(c,0,(int32_t)c->r[7],0); // 801CFB14
  c->r[27]=c->r[3]|c->r[3]; // 801CFB18
  c->r[28]=c->r[4]|c->r[4]; // 801CFB1C
  c->r[29]=c->r[5]|c->r[5]; // 801CFB20
  c->r[30]=c->r[6]|c->r[6]; // 801CFB24
  c->r[31]=c->r[7]|c->r[7]; // 801CFB28
  if (!crb(c,2)) { goto L_801CFB4C; } // 801CFB2C
  c->r[3]=0u+0x803A0000u; // 801CFB30
  c->r[5]=0u+0x803A0000u; // 801CFB34
  c->r[3]=c->r[3]+0x00000980u; // 801CFB38
  c->r[4]=0u+0x000000A0u; // 801CFB3C
  c->r[5]=c->r[5]+0x00000994u; // 801CFB40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CFB44
  c->lr=0x801CFB4Cu; f_80212260(c); // 801CFB48
L_801CFB4C:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 801CFB4C
  c->r[4]=c->r[28]|c->r[28]; // 801CFB50
  c->r[8]=R8(c->r[31]+0x00000000u); // 801CFB54
  c->r[5]=c->r[29]|c->r[29]; // 801CFB58
  c->r[7]=c->r[27]|c->r[27]; // 801CFB5C
  c->r[9]=c->r[30]|c->r[30]; // 801CFB60
  c->r[6]=0u+0x00000000u; // 801CFB64
  c->lr=0x801CFB6Cu; f_801D3EF0(c); // 801CFB68
  c->r[11]=c->r[1]+0x00000020u; // 801CFB6C
  c->lr=0x801CFB74u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFB70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFB74
  c->lr=c->r[0]; // 801CFB78
  c->r[1]=c->r[1]+0x00000020u; // 801CFB7C
  return; // 801CFB80
}

// fn_801CFB90
void f_801CFB90(Ctx* __restrict c) {
  trace_call(0x801CFB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB90
  c->r[0]=c->lr; // 801CFB94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFB98
  c->r[11]=c->r[1]+0x00000020u; // 801CFB9C
  c->lr=0x801CFBA4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFBA0
  cmps(c,0,(int32_t)c->r[8],0); // 801CFBA4
  c->r[26]=c->r[3]|c->r[3]; // 801CFBA8
  c->r[27]=c->r[4]|c->r[4]; // 801CFBAC
  c->r[28]=c->r[5]|c->r[5]; // 801CFBB0
  c->r[29]=c->r[6]|c->r[6]; // 801CFBB4
  c->r[30]=c->r[7]|c->r[7]; // 801CFBB8
  c->r[31]=c->r[8]|c->r[8]; // 801CFBBC
  if (!crb(c,2)) { goto L_801CFBE0; } // 801CFBC0
  c->r[3]=0u+0x803A0000u; // 801CFBC4
  c->r[5]=0u+0x803A0000u; // 801CFBC8
  c->r[3]=c->r[3]+0x00000980u; // 801CFBCC
  c->r[4]=0u+0x000000B8u; // 801CFBD0
  c->r[5]=c->r[5]+0x00000994u; // 801CFBD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CFBD8
  c->lr=0x801CFBE0u; f_80212260(c); // 801CFBDC
L_801CFBE0:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 801CFBE0
  c->r[4]=c->r[27]|c->r[27]; // 801CFBE4
  c->r[8]=R8(c->r[31]+0x00000000u); // 801CFBE8
  c->r[5]=c->r[28]|c->r[28]; // 801CFBEC
  c->r[6]=c->r[30]|c->r[30]; // 801CFBF0
  c->r[7]=c->r[26]|c->r[26]; // 801CFBF4
  c->r[9]=c->r[29]|c->r[29]; // 801CFBF8
  c->lr=0x801CFC00u; f_801D3EF0(c); // 801CFBFC
  c->r[11]=c->r[1]+0x00000020u; // 801CFC00
  c->lr=0x801CFC08u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CFC04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFC08
  c->lr=c->r[0]; // 801CFC0C
  c->r[1]=c->r[1]+0x00000020u; // 801CFC10
  return; // 801CFC14
}

// fn_801CFC20
void f_801CFC20(Ctx* __restrict c) {
  trace_call(0x801CFC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC20
  c->r[0]=c->lr; // 801CFC24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC28
  W8(c->r[1]+0x00000008u,c->r[6]); // 801CFC2C
  c->r[6]=c->r[7]|c->r[7]; // 801CFC30
  c->r[7]=c->r[1]+0x00000008u; // 801CFC34
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CFC38
  c->r[12]=R32(c->r[12]+0x00000014u); // 801CFC3C
  c->ctr=c->r[12]; // 801CFC40
  if (true) { c->lr=0x801CFC48u; dispatch(c,c->ctr); } // 801CFC44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFC48
  c->lr=c->r[0]; // 801CFC4C
  c->r[1]=c->r[1]+0x00000010u; // 801CFC50
  return; // 801CFC54
}

// fn_801CFC60
void f_801CFC60(Ctx* __restrict c) {
  trace_call(0x801CFC60u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFC60
  c->r[12]=R32(c->r[3]+0x00000008u); // 801CFC64
  c->r[12]=R32(c->r[12]+0x00000028u); // 801CFC68
  c->ctr=c->r[12]; // 801CFC6C
  if (true) { dispatch(c,c->ctr); return; } // 801CFC70
}

// fn_801CFC80
void f_801CFC80(Ctx* __restrict c) {
  trace_call(0x801CFC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC80
  c->r[0]=c->lr; // 801CFC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFC8C
  c->r[31]=c->r[4]|c->r[4]; // 801CFC90
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFC94
  c->r[30]=c->r[3]|c->r[3]; // 801CFC98
  c->r[0]=R32(c->r[3]+0x00000010u); // 801CFC9C
  cmps(c,0,(int32_t)c->r[0],0); // 801CFCA0
  if (!crb(c,2)) { goto L_801CFCC4; } // 801CFCA4
  c->r[3]=0u+0x803A0000u; // 801CFCA8
  c->r[5]=0u+0x803A0000u; // 801CFCAC
  c->r[3]=c->r[3]+0x00000A0Cu; // 801CFCB0
  c->r[4]=0u+0x000000C2u; // 801CFCB4
  c->r[5]=c->r[5]+0x000009DCu; // 801CFCB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CFCBC
  c->lr=0x801CFCC4u; f_80212260(c); // 801CFCC0
L_801CFCC4:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801CFCC4
  c->r[4]=c->r[31]|c->r[31]; // 801CFCC8
  c->lr=0x801CFCD0u; f_801CFE20(c); // 801CFCCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFCD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFCD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFCD8
  c->lr=c->r[0]; // 801CFCDC
  c->r[1]=c->r[1]+0x00000010u; // 801CFCE0
  return; // 801CFCE4
}

// fn_801CFCF0
void f_801CFCF0(Ctx* __restrict c) {
  trace_call(0x801CFCF0u);
  c->r[5]=0u+0x803A0000u; // 801CFCF0
  c->r[4]=0u+0x00000000u; // 801CFCF4
  c->r[5]=c->r[5]+0x00000AB8u; // 801CFCF8
  c->r[0]=0u+0x0000002Fu; // 801CFCFC
  W32(c->r[3]+0x00000000u,c->r[5]); // 801CFD00
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CFD04
  W8(c->r[3]+0x00000008u,c->r[0]); // 801CFD08
  W8(c->r[3]+0x00000009u,c->r[4]); // 801CFD0C
  return; // 801CFD10
}

// fn_801CFD20
void f_801CFD20(Ctx* __restrict c) {
  trace_call(0x801CFD20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFD20
  c->r[0]=c->lr; // 801CFD24
  cmps(c,0,(int32_t)c->r[3],0); // 801CFD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFD2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFD30
  c->r[31]=c->r[3]|c->r[3]; // 801CFD34
  if (crb(c,2)) { goto L_801CFD48; } // 801CFD38
  cmps(c,0,(int32_t)c->r[4],0); // 801CFD3C
  if (!crb(c,1)) { goto L_801CFD48; } // 801CFD40
  c->lr=0x801CFD48u; f_802E61AC(c); // 801CFD44
L_801CFD48:;
  c->r[3]=c->r[31]|c->r[31]; // 801CFD48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFD4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFD50
  c->lr=c->r[0]; // 801CFD54
  c->r[1]=c->r[1]+0x00000010u; // 801CFD58
  return; // 801CFD5C
}

// fn_801CFD60
void f_801CFD60(Ctx* __restrict c) {
  trace_call(0x801CFD60u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFD60
  c->r[0]=0u-c->r[3]; // 801CFD64
  c->r[0]=c->r[0]|c->r[3]; // 801CFD68
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CFD6C
  return; // 801CFD70
}

// fn_801CFD80
void f_801CFD80(Ctx* __restrict c) {
  trace_call(0x801CFD80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFD80
  c->r[0]=c->lr; // 801CFD84
  cmps(c,0,(int32_t)c->r[4],0); // 801CFD88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFD8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFD90
  c->r[31]=c->r[4]|c->r[4]; // 801CFD94
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CFD98
  c->r[30]=c->r[3]|c->r[3]; // 801CFD9C
  if (!crb(c,2)) { goto L_801CFDC0; } // 801CFDA0
  c->r[3]=0u+0x803A0000u; // 801CFDA4
  c->r[5]=0u+0x803A0000u; // 801CFDA8
  c->r[3]=c->r[3]+0x00000A28u; // 801CFDAC
  c->r[4]=0u+0x00000046u; // 801CFDB0
  c->r[5]=c->r[5]+0x00000A40u; // 801CFDB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CFDB8
  c->lr=0x801CFDC0u; f_80212260(c); // 801CFDBC
L_801CFDC0:;
  W32(c->r[30]+0x00000004u,c->r[31]); // 801CFDC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFDC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFDC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFDCC
  c->lr=c->r[0]; // 801CFDD0
  c->r[1]=c->r[1]+0x00000010u; // 801CFDD4
  return; // 801CFDD8
}

// fn_801CFDE0
void f_801CFDE0(Ctx* __restrict c) {
  trace_call(0x801CFDE0u);
  c->r[4]=0u+0x00000000u; // 801CFDE0
  c->r[0]=0u+0x0000002Fu; // 801CFDE4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CFDE8
  W8(c->r[3]+0x00000008u,c->r[0]); // 801CFDEC
  W8(c->r[3]+0x00000009u,c->r[4]); // 801CFDF0
  return; // 801CFDF4
}

// fn_801CFE00
void f_801CFE00(Ctx* __restrict c) {
  trace_call(0x801CFE00u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE00
  f_801D14E0(c); return; // 801CFE04
}

// fn_801CFE10
void f_801CFE10(Ctx* __restrict c) {
  trace_call(0x801CFE10u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE10
  f_801D1550(c); return; // 801CFE14
}

// fn_801CFE20
void f_801CFE20(Ctx* __restrict c) {
  trace_call(0x801CFE20u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE20
  c->r[5]=c->r[4]|c->r[4]; // 801CFE24
  c->r[4]=R32(c->r[3]+0x00000034u); // 801CFE28
  f_801D1AC0(c); return; // 801CFE2C
}

// fn_801CFE30
void f_801CFE30(Ctx* __restrict c) {
  trace_call(0x801CFE30u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE30
  f_801D15D0(c); return; // 801CFE34
}

// fn_801CFE40
void f_801CFE40(Ctx* __restrict c) {
  trace_call(0x801CFE40u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE40
  f_801D06F0(c); return; // 801CFE44
}

// fn_801CFE50
void f_801CFE50(Ctx* __restrict c) {
  trace_call(0x801CFE50u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE50
  f_801D0840(c); return; // 801CFE54
}

// fn_801CFE60
void f_801CFE60(Ctx* __restrict c) {
  trace_call(0x801CFE60u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE60
  f_801D0B40(c); return; // 801CFE64
}

// fn_801CFE70
void f_801CFE70(Ctx* __restrict c) {
  trace_call(0x801CFE70u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE70
  f_801D0C50(c); return; // 801CFE74
}

// fn_801CFE80
void f_801CFE80(Ctx* __restrict c) {
  trace_call(0x801CFE80u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE80
  f_801D0D80(c); return; // 801CFE84
}

// fn_801CFE90
void f_801CFE90(Ctx* __restrict c) {
  trace_call(0x801CFE90u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFE90
  f_801D0F80(c); return; // 801CFE94
}

// fn_801CFEA0
void f_801CFEA0(Ctx* __restrict c) {
  trace_call(0x801CFEA0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFEA0
  f_801D1420(c); return; // 801CFEA4
}

// fn_801CFEB0
void f_801CFEB0(Ctx* __restrict c) {
  trace_call(0x801CFEB0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFEB0
  f_801D09C0(c); return; // 801CFEB4
}

// fn_801CFEC0
void f_801CFEC0(Ctx* __restrict c) {
  trace_call(0x801CFEC0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFEC0
  f_801D0E80(c); return; // 801CFEC4
}

// fn_801CFED0
void f_801CFED0(Ctx* __restrict c) {
  trace_call(0x801CFED0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFED0
  f_801D1090(c); return; // 801CFED4
}

// fn_801CFEE0
void f_801CFEE0(Ctx* __restrict c) {
  trace_call(0x801CFEE0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFEE0
  f_801D1240(c); return; // 801CFEE4
}

// fn_801CFEF0
void f_801CFEF0(Ctx* __restrict c) {
  trace_call(0x801CFEF0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFEF0
  f_801D16F0(c); return; // 801CFEF4
}

// fn_801CFF00
void f_801CFF00(Ctx* __restrict c) {
  trace_call(0x801CFF00u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFF00
  f_801D1760(c); return; // 801CFF04
}

// fn_801CFF10
void f_801CFF10(Ctx* __restrict c) {
  trace_call(0x801CFF10u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFF10
  f_801D1900(c); return; // 801CFF14
}

// fn_801CFF20
void f_801CFF20(Ctx* __restrict c) {
  trace_call(0x801CFF20u);
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFF20
  c->r[0]=c->lr; // 801CFF24
  W32(c->r[1]+0x00000274u,c->r[0]); // 801CFF28
  c->r[11]=c->r[1]+0x00000270u; // 801CFF2C
  c->lr=0x801CFF34u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CFF30
  c->r[29]=c->r[3]|c->r[3]; // 801CFF34
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CFF38
  c->r[30]=c->r[5]|c->r[5]; // 801CFF3C
  c->r[25]=c->r[4]|c->r[4]; // 801CFF40
  c->r[31]=c->r[6]|c->r[6]; // 801CFF44
  c->r[5]=c->r[1]+0x00000010u; // 801CFF48
  c->lr=0x801CFF50u; f_801D1760(c); // 801CFF4C
  cmps(c,0,(int32_t)c->r[3],0); // 801CFF50
  if (!crb(c,2)) { goto L_801CFF60; } // 801CFF54
  c->r[3]=0u+0x00000000u; // 801CFF58
  goto L_801D0178; // 801CFF5C
L_801CFF60:;
  c->r[26]=R32(c->r[1]+0x00000018u); // 801CFF60
  cmps(c,0,(int32_t)c->r[26],0); // 801CFF64
  if (crb(c,2)) { goto L_801D0020; } // 801CFF68
  c->r[0]=R8(c->r[26]+0x00000000u); // 801CFF6C
  c->r[27]=R32(c->r[1]+0x00000010u); // 801CFF70
  cmps(c,0,(int32_t)c->r[0],47); // 801CFF74
  if (!crb(c,2)) { goto L_801CFF80; } // 801CFF78
  goto L_801CFFF4; // 801CFF7C
L_801CFF80:;
  c->r[3]=c->r[26]|c->r[26]; // 801CFF80
  c->lr=0x801CFF88u; f_802E5F80(c); // 801CFF84
  c->r[28]=c->r[3]|c->r[3]; // 801CFF88
  c->r[3]=c->r[29]+0x00000008u; // 801CFF8C
  c->lr=0x801CFF94u; f_802E5F80(c); // 801CFF90
  c->r[0]=c->r[28]+c->r[3]; // 801CFF94
  c->r[5]=c->r[3]|c->r[3]; // 801CFF98
  cmpu(c,0,c->r[0],0x00000100u); // 801CFF9C
  if (crb(c,0)) { goto L_801CFFD0; } // 801CFFA0
  c->r[3]=0u+0x803A0000u; // 801CFFA4
  c->r[5]=0u+0x803A0000u; // 801CFFA8
  c->r[7]=c->r[26]|c->r[26]; // 801CFFAC
  c->r[6]=c->r[29]+0x00000008u; // 801CFFB0
  c->r[3]=c->r[3]+0x00000A28u; // 801CFFB4
  c->r[5]=c->r[5]+0x00000A6Cu; // 801CFFB8
  c->r[4]=0u+0x0000015Du; // 801CFFBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CFFC0
  c->lr=0x801CFFC8u; f_80212300(c); // 801CFFC4
  c->r[3]=0u+0x00000000u; // 801CFFC8
  goto L_801D0178; // 801CFFCC
L_801CFFD0:;
  c->r[3]=c->r[1]+0x00000150u; // 801CFFD0
  c->r[4]=c->r[29]+0x00000008u; // 801CFFD4
  c->r[5]=c->r[5]+0x00000001u; // 801CFFD8
  c->lr=0x801CFFE0u; f_802EE8C8(c); // 801CFFDC
  c->r[4]=c->r[26]|c->r[26]; // 801CFFE0
  c->r[3]=c->r[1]+0x00000150u; // 801CFFE4
  c->r[5]=c->r[28]+0x00000001u; // 801CFFE8
  c->lr=0x801CFFF0u; f_802EE938(c); // 801CFFEC
  c->r[26]=c->r[1]+0x00000150u; // 801CFFF0
L_801CFFF4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801CFFF4
  c->r[3]=c->r[29]|c->r[29]; // 801CFFF8
  c->r[4]=c->r[30]|c->r[30]; // 801CFFFC
  c->r[5]=c->r[31]|c->r[31]; // 801D0000
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D0004
  c->r[6]=c->r[26]|c->r[26]; // 801D0008
  c->r[8]=c->r[27]|c->r[27]; // 801D000C
  c->r[7]=0u+0x00000000u; // 801D0010
  c->ctr=c->r[12]; // 801D0014
  if (true) { c->lr=0x801D001Cu; dispatch(c,c->ctr); } // 801D0018
  goto L_801D0178; // 801D001C
L_801D0020:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801D0020
  c->r[4]=c->r[25]|c->r[25]; // 801D0024
  c->r[6]=c->r[1]+0x00000008u; // 801D0028
  c->r[5]=0u+0x00000000u; // 801D002C
  c->lr=0x801D0034u; f_801D1900(c); // 801D0030
  cmps(c,0,(int32_t)c->r[3],0); // 801D0034
  if (!crb(c,2)) { goto L_801D0044; } // 801D0038
  c->r[3]=0u+0x00000000u; // 801D003C
  goto L_801D0178; // 801D0040
L_801D0044:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801D0044
  c->r[5]=c->r[1]+0x00000038u; // 801D0048
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D004C
  c->lr=0x801D0054u; f_801D1090(c); // 801D0050
  cmps(c,0,(int32_t)c->r[3],0); // 801D0054
  if (!crb(c,2)) { goto L_801D0064; } // 801D0058
  c->r[3]=0u+0x00000000u; // 801D005C
  goto L_801D0178; // 801D0060
L_801D0064:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801D0064
  c->r[6]=c->r[1]+0x00000020u; // 801D0068
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D006C
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801D0070
  c->lr=0x801D0078u; f_801D1240(c); // 801D0074
  cmps(c,0,(int32_t)c->r[3],0); // 801D0078
  if (!crb(c,2)) { goto L_801D0088; } // 801D007C
  c->r[3]=0u+0x00000000u; // 801D0080
  goto L_801D0178; // 801D0084
L_801D0088:;
  c->r[26]=R32(c->r[1]+0x0000003Cu); // 801D0088
  c->r[3]=R32(c->r[1]+0x00000040u); // 801D008C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0090
  cmps(c,0,(int32_t)c->r[26],0); // 801D0094
  c->r[25]=R32(c->r[1]+0x00000028u); // 801D0098
  c->r[27]=c->r[3]+c->r[0]; // 801D009C
  if (crb(c,2)) { goto L_801D0154; } // 801D00A0
  c->r[0]=R8(c->r[26]+0x00000000u); // 801D00A4
  cmps(c,0,(int32_t)c->r[0],47); // 801D00A8
  if (!crb(c,2)) { goto L_801D00B4; } // 801D00AC
  goto L_801D0128; // 801D00B0
L_801D00B4:;
  c->r[3]=c->r[26]|c->r[26]; // 801D00B4
  c->lr=0x801D00BCu; f_802E5F80(c); // 801D00B8
  c->r[28]=c->r[3]|c->r[3]; // 801D00BC
  c->r[3]=c->r[29]+0x00000008u; // 801D00C0
  c->lr=0x801D00C8u; f_802E5F80(c); // 801D00C4
  c->r[0]=c->r[28]+c->r[3]; // 801D00C8
  c->r[5]=c->r[3]|c->r[3]; // 801D00CC
  cmpu(c,0,c->r[0],0x00000100u); // 801D00D0
  if (crb(c,0)) { goto L_801D0104; } // 801D00D4
  c->r[3]=0u+0x803A0000u; // 801D00D8
  c->r[5]=0u+0x803A0000u; // 801D00DC
  c->r[7]=c->r[26]|c->r[26]; // 801D00E0
  c->r[6]=c->r[29]+0x00000008u; // 801D00E4
  c->r[3]=c->r[3]+0x00000A28u; // 801D00E8
  c->r[5]=c->r[5]+0x00000A6Cu; // 801D00EC
  c->r[4]=0u+0x0000015Du; // 801D00F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D00F4
  c->lr=0x801D00FCu; f_80212300(c); // 801D00F8
  c->r[3]=0u+0x00000000u; // 801D00FC
  goto L_801D0178; // 801D0100
L_801D0104:;
  c->r[3]=c->r[1]+0x00000050u; // 801D0104
  c->r[4]=c->r[29]+0x00000008u; // 801D0108
  c->r[5]=c->r[5]+0x00000001u; // 801D010C
  c->lr=0x801D0114u; f_802EE8C8(c); // 801D0110
  c->r[4]=c->r[26]|c->r[26]; // 801D0114
  c->r[3]=c->r[1]+0x00000050u; // 801D0118
  c->r[5]=c->r[28]+0x00000001u; // 801D011C
  c->lr=0x801D0124u; f_802EE938(c); // 801D0120
  c->r[26]=c->r[1]+0x00000050u; // 801D0124
L_801D0128:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D0128
  c->r[3]=c->r[29]|c->r[29]; // 801D012C
  c->r[4]=c->r[30]|c->r[30]; // 801D0130
  c->r[5]=c->r[31]|c->r[31]; // 801D0134
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D0138
  c->r[6]=c->r[26]|c->r[26]; // 801D013C
  c->r[7]=c->r[27]|c->r[27]; // 801D0140
  c->r[8]=c->r[25]|c->r[25]; // 801D0144
  c->ctr=c->r[12]; // 801D0148
  if (true) { c->lr=0x801D0150u; dispatch(c,c->ctr); } // 801D014C
  goto L_801D0178; // 801D0150
L_801D0154:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D0154
  c->r[3]=c->r[29]|c->r[29]; // 801D0158
  c->r[4]=c->r[30]|c->r[30]; // 801D015C
  c->r[5]=c->r[31]|c->r[31]; // 801D0160
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D0164
  c->r[6]=c->r[27]|c->r[27]; // 801D0168
  c->r[7]=c->r[25]|c->r[25]; // 801D016C
  c->ctr=c->r[12]; // 801D0170
  if (true) { c->lr=0x801D0178u; dispatch(c,c->ctr); } // 801D0174
L_801D0178:;
  c->r[11]=c->r[1]+0x00000270u; // 801D0178
  c->lr=0x801D0180u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D017C
  c->r[0]=R32(c->r[1]+0x00000274u); // 801D0180
  c->lr=c->r[0]; // 801D0184
  c->r[1]=c->r[1]+0x00000270u; // 801D0188
  return; // 801D018C
}

// fn_801D0190
void f_801D0190(Ctx* __restrict c) {
  trace_call(0x801D0190u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0190
  c->r[0]=c->lr; // 801D0194
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D0198
  c->r[11]=c->r[1]+0x00000140u; // 801D019C
  c->lr=0x801D01A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D01A0
  c->r[25]=c->r[3]|c->r[3]; // 801D01A4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D01A8
  c->r[26]=c->r[5]|c->r[5]; // 801D01AC
  c->r[27]=c->r[6]|c->r[6]; // 801D01B0
  c->r[5]=c->r[1]+0x00000008u; // 801D01B4
  c->lr=0x801D01BCu; f_801D1090(c); // 801D01B8
  cmps(c,0,(int32_t)c->r[3],0); // 801D01BC
  if (!crb(c,2)) { goto L_801D01CC; } // 801D01C0
  c->r[3]=0u+0x00000000u; // 801D01C4
  goto L_801D02B4; // 801D01C8
L_801D01CC:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 801D01CC
  cmps(c,0,(int32_t)c->r[28],0); // 801D01D0
  if (crb(c,2)) { goto L_801D0290; } // 801D01D4
  c->r[0]=R8(c->r[28]+0x00000000u); // 801D01D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D01DC
  cmps(c,0,(int32_t)c->r[0],47); // 801D01E0
  c->r[30]=R32(c->r[1]+0x00000010u); // 801D01E4
  if (!crb(c,2)) { goto L_801D01F0; } // 801D01E8
  goto L_801D0264; // 801D01EC
L_801D01F0:;
  c->r[3]=c->r[28]|c->r[28]; // 801D01F0
  c->lr=0x801D01F8u; f_802E5F80(c); // 801D01F4
  c->r[31]=c->r[3]|c->r[3]; // 801D01F8
  c->r[3]=c->r[25]+0x00000008u; // 801D01FC
  c->lr=0x801D0204u; f_802E5F80(c); // 801D0200
  c->r[0]=c->r[31]+c->r[3]; // 801D0204
  c->r[5]=c->r[3]|c->r[3]; // 801D0208
  cmpu(c,0,c->r[0],0x00000100u); // 801D020C
  if (crb(c,0)) { goto L_801D0240; } // 801D0210
  c->r[3]=0u+0x803A0000u; // 801D0214
  c->r[5]=0u+0x803A0000u; // 801D0218
  c->r[7]=c->r[28]|c->r[28]; // 801D021C
  c->r[6]=c->r[25]+0x00000008u; // 801D0220
  c->r[3]=c->r[3]+0x00000A28u; // 801D0224
  c->r[5]=c->r[5]+0x00000A6Cu; // 801D0228
  c->r[4]=0u+0x0000015Du; // 801D022C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0230
  c->lr=0x801D0238u; f_80212300(c); // 801D0234
  c->r[3]=0u+0x00000000u; // 801D0238
  goto L_801D02B4; // 801D023C
L_801D0240:;
  c->r[3]=c->r[1]+0x00000020u; // 801D0240
  c->r[4]=c->r[25]+0x00000008u; // 801D0244
  c->r[5]=c->r[5]+0x00000001u; // 801D0248
  c->lr=0x801D0250u; f_802EE8C8(c); // 801D024C
  c->r[4]=c->r[28]|c->r[28]; // 801D0250
  c->r[3]=c->r[1]+0x00000020u; // 801D0254
  c->r[5]=c->r[31]+0x00000001u; // 801D0258
  c->lr=0x801D0260u; f_802EE938(c); // 801D025C
  c->r[28]=c->r[1]+0x00000020u; // 801D0260
L_801D0264:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D0264
  c->r[3]=c->r[25]|c->r[25]; // 801D0268
  c->r[4]=c->r[26]|c->r[26]; // 801D026C
  c->r[5]=c->r[27]|c->r[27]; // 801D0270
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D0274
  c->r[6]=c->r[28]|c->r[28]; // 801D0278
  c->r[7]=c->r[30]|c->r[30]; // 801D027C
  c->r[8]=c->r[29]|c->r[29]; // 801D0280
  c->ctr=c->r[12]; // 801D0284
  if (true) { c->lr=0x801D028Cu; dispatch(c,c->ctr); } // 801D0288
  goto L_801D02B4; // 801D028C
L_801D0290:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D0290
  c->r[3]=c->r[25]|c->r[25]; // 801D0294
  c->r[4]=c->r[26]|c->r[26]; // 801D0298
  c->r[5]=c->r[27]|c->r[27]; // 801D029C
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D02A0
  c->r[6]=R32(c->r[1]+0x00000010u); // 801D02A4
  c->r[7]=R32(c->r[1]+0x00000014u); // 801D02A8
  c->ctr=c->r[12]; // 801D02AC
  if (true) { c->lr=0x801D02B4u; dispatch(c,c->ctr); } // 801D02B0
L_801D02B4:;
  c->r[11]=c->r[1]+0x00000140u; // 801D02B4
  c->lr=0x801D02BCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D02B8
  c->r[0]=R32(c->r[1]+0x00000144u); // 801D02BC
  c->lr=c->r[0]; // 801D02C0
  c->r[1]=c->r[1]+0x00000140u; // 801D02C4
  return; // 801D02C8
}

// fn_801D02D0
void f_801D02D0(Ctx* __restrict c) {
  trace_call(0x801D02D0u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D02D0
  c->r[0]=c->lr; // 801D02D4
  W32(c->r[1]+0x00000144u,c->r[0]); // 801D02D8
  c->r[11]=c->r[1]+0x00000140u; // 801D02DC
  c->lr=0x801D02E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D02E0
  c->r[25]=c->r[3]|c->r[3]; // 801D02E4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D02E8
  c->r[26]=c->r[5]|c->r[5]; // 801D02EC
  c->r[27]=c->r[6]|c->r[6]; // 801D02F0
  c->r[5]=c->r[1]+0x00000008u; // 801D02F4
  c->lr=0x801D02FCu; f_801D1090(c); // 801D02F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D02FC
  if (!crb(c,2)) { goto L_801D030C; } // 801D0300
  c->r[3]=0u+0x00000000u; // 801D0304
  goto L_801D03F4; // 801D0308
L_801D030C:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 801D030C
  cmps(c,0,(int32_t)c->r[28],0); // 801D0310
  if (crb(c,2)) { goto L_801D03D0; } // 801D0314
  c->r[0]=R8(c->r[28]+0x00000000u); // 801D0318
  c->r[29]=R32(c->r[1]+0x0000001Cu); // 801D031C
  cmps(c,0,(int32_t)c->r[0],47); // 801D0320
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0324
  if (!crb(c,2)) { goto L_801D0330; } // 801D0328
  goto L_801D03A4; // 801D032C
L_801D0330:;
  c->r[3]=c->r[28]|c->r[28]; // 801D0330
  c->lr=0x801D0338u; f_802E5F80(c); // 801D0334
  c->r[31]=c->r[3]|c->r[3]; // 801D0338
  c->r[3]=c->r[25]+0x00000008u; // 801D033C
  c->lr=0x801D0344u; f_802E5F80(c); // 801D0340
  c->r[0]=c->r[31]+c->r[3]; // 801D0344
  c->r[5]=c->r[3]|c->r[3]; // 801D0348
  cmpu(c,0,c->r[0],0x00000100u); // 801D034C
  if (crb(c,0)) { goto L_801D0380; } // 801D0350
  c->r[3]=0u+0x803A0000u; // 801D0354
  c->r[5]=0u+0x803A0000u; // 801D0358
  c->r[7]=c->r[28]|c->r[28]; // 801D035C
  c->r[6]=c->r[25]+0x00000008u; // 801D0360
  c->r[3]=c->r[3]+0x00000A28u; // 801D0364
  c->r[5]=c->r[5]+0x00000A6Cu; // 801D0368
  c->r[4]=0u+0x0000015Du; // 801D036C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0370
  c->lr=0x801D0378u; f_80212300(c); // 801D0374
  c->r[3]=0u+0x00000000u; // 801D0378
  goto L_801D03F4; // 801D037C
L_801D0380:;
  c->r[3]=c->r[1]+0x00000020u; // 801D0380
  c->r[4]=c->r[25]+0x00000008u; // 801D0384
  c->r[5]=c->r[5]+0x00000001u; // 801D0388
  c->lr=0x801D0390u; f_802EE8C8(c); // 801D038C
  c->r[4]=c->r[28]|c->r[28]; // 801D0390
  c->r[3]=c->r[1]+0x00000020u; // 801D0394
  c->r[5]=c->r[31]+0x00000001u; // 801D0398
  c->lr=0x801D03A0u; f_802EE938(c); // 801D039C
  c->r[28]=c->r[1]+0x00000020u; // 801D03A0
L_801D03A4:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D03A4
  c->r[3]=c->r[25]|c->r[25]; // 801D03A8
  c->r[4]=c->r[26]|c->r[26]; // 801D03AC
  c->r[5]=c->r[27]|c->r[27]; // 801D03B0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801D03B4
  c->r[6]=c->r[28]|c->r[28]; // 801D03B8
  c->r[7]=c->r[30]|c->r[30]; // 801D03BC
  c->r[8]=c->r[29]|c->r[29]; // 801D03C0
  c->ctr=c->r[12]; // 801D03C4
  if (true) { c->lr=0x801D03CCu; dispatch(c,c->ctr); } // 801D03C8
  goto L_801D03F4; // 801D03CC
L_801D03D0:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D03D0
  c->r[3]=c->r[25]|c->r[25]; // 801D03D4
  c->r[4]=c->r[26]|c->r[26]; // 801D03D8
  c->r[5]=c->r[27]|c->r[27]; // 801D03DC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801D03E0
  c->r[6]=R32(c->r[1]+0x00000018u); // 801D03E4
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 801D03E8
  c->ctr=c->r[12]; // 801D03EC
  if (true) { c->lr=0x801D03F4u; dispatch(c,c->ctr); } // 801D03F0
L_801D03F4:;
  c->r[11]=c->r[1]+0x00000140u; // 801D03F4
  c->lr=0x801D03FCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D03F8
  c->r[0]=R32(c->r[1]+0x00000144u); // 801D03FC
  c->lr=c->r[0]; // 801D0400
  c->r[1]=c->r[1]+0x00000140u; // 801D0404
  return; // 801D0408
}

// fn_801D0410
void f_801D0410(Ctx* __restrict c) {
  trace_call(0x801D0410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0410
  c->r[0]=c->lr; // 801D0414
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0418
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D041C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0420
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0424
  c->r[29]=c->r[4]|c->r[4]; // 801D0428
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D042C
  c->r[28]=c->r[3]|c->r[3]; // 801D0430
  c->r[3]=c->r[29]|c->r[29]; // 801D0434
  c->lr=0x801D043Cu; f_802E5F80(c); // 801D0438
  c->r[4]=c->r[29]+c->r[3]; // 801D043C
  c->r[31]=c->r[3]|c->r[3]; // 801D0440
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 801D0444
  c->r[30]=c->r[31]|c->r[31]; // 801D0448
  cmps(c,0,(int32_t)c->r[0],47); // 801D044C
  if (crb(c,2)) { goto L_801D0464; } // 801D0450
  c->r[4]=c->r[28]+c->r[3]; // 801D0454
  c->r[0]=0u+0x0000002Fu; // 801D0458
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D045C
  c->r[30]=c->r[3]+0x00000001u; // 801D0460
L_801D0464:;
  cmpu(c,0,c->r[30],0x00000100u); // 801D0464
  if (crb(c,0)) { goto L_801D0488; } // 801D0468
  c->r[3]=0u+0x803A0000u; // 801D046C
  c->r[5]=0u+0x803A0000u; // 801D0470
  c->r[3]=c->r[3]+0x00000A28u; // 801D0474
  c->r[4]=0u+0x00000173u; // 801D0478
  c->r[5]=c->r[5]+0x00000A88u; // 801D047C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0480
  c->lr=0x801D0488u; f_80212260(c); // 801D0484
L_801D0488:;
  c->r[3]=c->r[28]+c->r[30]; // 801D0488
  c->r[0]=0u+0x00000000u; // 801D048C
  W8(c->r[3]+0x00000008u,c->r[0]); // 801D0490
  c->r[4]=c->r[29]|c->r[29]; // 801D0494
  c->r[5]=c->r[31]|c->r[31]; // 801D0498
  c->r[3]=c->r[28]+0x00000008u; // 801D049C
  c->lr=0x801D04A4u; f_802EE8C8(c); // 801D04A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D04A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D04A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D04AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D04B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D04B4
  c->lr=c->r[0]; // 801D04B8
  c->r[1]=c->r[1]+0x00000020u; // 801D04BC
  return; // 801D04C0
}

// fn_801D04D0
void f_801D04D0(Ctx* __restrict c) {
  trace_call(0x801D04D0u);
  c->r[0]=0u+0x00000000u; // 801D04D0
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D04D4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801D04D8
  W32(c->r[3]+0x00000030u,c->r[0]); // 801D04DC
  W32(c->r[3]+0x00000034u,c->r[0]); // 801D04E0
  W32(c->r[3]+0x00000038u,c->r[0]); // 801D04E4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801D04E8
  W32(c->r[3]+0x00000040u,c->r[0]); // 801D04EC
  return; // 801D04F0
}

// fn_801D0500
void f_801D0500(Ctx* __restrict c) {
  trace_call(0x801D0500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0500
  c->r[0]=c->lr; // 801D0504
  cmps(c,0,(int32_t)c->r[4],0); // 801D0508
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D050C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0510
  c->r[31]=c->r[4]|c->r[4]; // 801D0514
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0518
  c->r[30]=c->r[3]|c->r[3]; // 801D051C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0520
  c->r[29]=0u+0x803A0000u; // 801D0524
  c->r[29]=c->r[29]+0x00000AD8u; // 801D0528
  if (!crb(c,2)) { goto L_801D0544; } // 801D052C
  c->r[3]=c->r[29]+0x00000000u; // 801D0530
  c->r[5]=c->r[29]+0x0000001Cu; // 801D0534
  c->r[4]=0u+0x00000032u; // 801D0538
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D053C
  c->lr=0x801D0544u; f_80212260(c); // 801D0540
L_801D0544:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0544
  c->r[0]=c->r[3]+0xADAD0000u; // 801D0548
  cmpu(c,0,c->r[0],0x00004152u); // 801D054C
  if (crb(c,2)) { goto L_801D0568; } // 801D0550
  c->r[3]=c->r[29]+0x00000000u; // 801D0554
  c->r[5]=c->r[29]+0x00000050u; // 801D0558
  c->r[4]=0u+0x0000004Bu; // 801D055C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0560
  c->lr=0x801D0568u; f_80212260(c); // 801D0564
L_801D0568:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D0568
  c->r[0]=c->r[3]+0xADAD0000u; // 801D056C
  cmpu(c,0,c->r[0],0x00004152u); // 801D0570
  if (crb(c,2)) { goto L_801D0580; } // 801D0574
  c->r[0]=0u+0x00000000u; // 801D0578
  goto L_801D05EC; // 801D057C
L_801D0580:;
  c->r[0]=R16(c->r[31]+0x00000006u); // 801D0580
  cmpu(c,0,c->r[0],0x00000100u); // 801D0584
  if (!crb(c,0)) { goto L_801D05A0; } // 801D0588
  c->r[3]=c->r[29]+0x00000000u; // 801D058C
  c->r[5]=c->r[29]+0x00000090u; // 801D0590
  c->r[4]=0u+0x00000053u; // 801D0594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0598
  c->lr=0x801D05A0u; f_80212260(c); // 801D059C
L_801D05A0:;
  c->r[0]=R16(c->r[31]+0x00000006u); // 801D05A0
  cmpu(c,0,c->r[0],0x00000100u); // 801D05A4
  if (!crb(c,0)) { goto L_801D05B4; } // 801D05A8
  c->r[0]=0u+0x00000000u; // 801D05AC
  goto L_801D05EC; // 801D05B0
L_801D05B4:;
  cmpu(c,0,c->r[0],0x00000104u); // 801D05B4
  if (!crb(c,1)) { goto L_801D05D0; } // 801D05B8
  c->r[3]=c->r[29]+0x00000000u; // 801D05BC
  c->r[5]=c->r[29]+0x00000090u; // 801D05C0
  c->r[4]=0u+0x00000059u; // 801D05C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D05C8
  c->lr=0x801D05D0u; f_80212260(c); // 801D05CC
L_801D05D0:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 801D05D0
  c->r[3]=0u+0x00000104u; // 801D05D4
  c->r[0]=addc(c,~c->r[4],0x00000104u,1); // 801D05D8
  c->r[3]=c->r[3]|~c->r[4]; // 801D05DC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D05E0
  c->r[0]=c->r[3]-c->r[0]; // 801D05E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D05E8
L_801D05EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D05EC
  if (crb(c,2)) { goto L_801D0644; } // 801D05F0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D05F4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D05F8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D05FC
  W32(c->r[30]+0x00000000u,c->r[3]); // 801D0600
  c->r[3]=R32(c->r[31]+0x00000008u); // 801D0604
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801D0608
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D060C
  W32(c->r[30]+0x00000008u,c->r[3]); // 801D0610
  c->r[0]=R32(c->r[31]+0x00000010u); // 801D0614
  W32(c->r[30]+0x00000010u,c->r[0]); // 801D0618
  c->r[0]=R32(c->r[31]+0x00000014u); // 801D061C
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D0620
  c->r[0]=R32(c->r[31]+0x00000018u); // 801D0624
  W32(c->r[30]+0x00000018u,c->r[0]); // 801D0628
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801D062C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D0630
  c->r[0]=R32(c->r[31]+0x00000020u); // 801D0634
  W32(c->r[30]+0x00000020u,c->r[0]); // 801D0638
  c->r[0]=R32(c->r[31]+0x00000024u); // 801D063C
  W32(c->r[30]+0x00000024u,c->r[0]); // 801D0640
L_801D0644:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0644
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0648
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D064C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0650
  c->lr=c->r[0]; // 801D0654
  c->r[1]=c->r[1]+0x00000020u; // 801D0658
  return; // 801D065C
}

// fn_801D0660
void f_801D0660(Ctx* __restrict c) {
  trace_call(0x801D0660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0660
  c->r[0]=c->lr; // 801D0664
  cmps(c,0,(int32_t)c->r[4],0); // 801D0668
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D066C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0670
  c->r[31]=0u+0x803A0000u; // 801D0674
  c->r[31]=c->r[31]+0x00000AD8u; // 801D0678
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D067C
  c->r[30]=c->r[4]|c->r[4]; // 801D0680
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0684
  c->r[29]=c->r[3]|c->r[3]; // 801D0688
  if (!crb(c,2)) { goto L_801D06A4; } // 801D068C
  c->r[3]=c->r[31]+0x00000000u; // 801D0690
  c->r[5]=c->r[31]+0x0000017Cu; // 801D0694
  c->r[4]=0u+0x0000007Bu; // 801D0698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D069C
  c->lr=0x801D06A4u; f_80212260(c); // 801D06A0
L_801D06A4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D06A4
  c->r[0]=c->r[3]+0xB6B20000u; // 801D06A8
  cmpu(c,0,c->r[0],0x0000464Fu); // 801D06AC
  if (crb(c,2)) { goto L_801D06C8; } // 801D06B0
  c->r[3]=c->r[31]+0x00000000u; // 801D06B4
  c->r[5]=c->r[31]+0x000001A8u; // 801D06B8
  c->r[4]=0u+0x0000007Eu; // 801D06BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D06C0
  c->lr=0x801D06C8u; f_80212260(c); // 801D06C4
L_801D06C8:;
  c->r[0]=c->r[30]+0x00000008u; // 801D06C8
  W32(c->r[29]+0x00000028u,c->r[0]); // 801D06CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D06D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D06D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D06D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D06DC
  c->lr=c->r[0]; // 801D06E0
  c->r[1]=c->r[1]+0x00000020u; // 801D06E4
  return; // 801D06E8
}

// fn_801D06F0
void f_801D06F0(Ctx* __restrict c) {
  trace_call(0x801D06F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D06F0
  c->r[0]=c->lr; // 801D06F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D06F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D06FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0700
  c->r[30]=R32(c->r[3]+0x00000028u); // 801D0704
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0708
  c->r[29]=c->r[4]|c->r[4]; // 801D070C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D0710
  c->r[28]=c->r[3]|c->r[3]; // 801D0714
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D0718
  cmps(c,0,(int32_t)c->r[0],0); // 801D071C
  if (crb(c,2)) { goto L_801D073C; } // 801D0720
  c->r[5]=0u+0x803A0000u; // 801D0724
  c->r[3]=c->r[13]+0xFFFFADF0u; // 801D0728
  c->r[5]=c->r[5]+0x00000FE8u; // 801D072C
  c->r[4]=0u+0x0000008Du; // 801D0730
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0734
  c->lr=0x801D073Cu; f_80212260(c); // 801D0738
L_801D073C:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801D073C
  c->r[5]=c->r[30]|c->r[30]; // 801D0740
  c->r[4]=R32(c->r[30]+0x00000004u); // 801D0744
  c->lr=0x801D074Cu; f_801E15A0(c); // 801D0748
  cmps(c,0,(int32_t)c->r[3],0); // 801D074C
  c->r[31]=c->r[3]|c->r[3]; // 801D0750
  if (!crb(c,2)) { goto L_801D0760; } // 801D0754
  c->r[3]=0u+0x00000000u; // 801D0758
  goto L_801D0820; // 801D075C
L_801D0760:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0760
  cmpu(c,0,c->r[29],c->r[0]); // 801D0764
  if (crb(c,0)) { goto L_801D0774; } // 801D0768
  c->r[3]=0u+0x00000000u; // 801D076C
  goto L_801D0820; // 801D0770
L_801D0774:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801D0774
  cmpu(c,0,c->r[0],0x00000101u); // 801D0778
  if (crb(c,0)) { goto L_801D07DC; } // 801D077C
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801D0780
  c->r[30]=R32(c->r[28]+0x00000028u); // 801D0784
  c->r[3]=c->r[3]+c->r[29]; // 801D0788
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D078C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0790
  if (crb(c,2)) { goto L_801D07B0; } // 801D0794
  c->r[5]=0u+0x803A0000u; // 801D0798
  c->r[3]=c->r[13]+0xFFFFADF8u; // 801D079C
  c->r[5]=c->r[5]+0x00001010u; // 801D07A0
  c->r[4]=0u+0x0000008Du; // 801D07A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D07A8
  c->lr=0x801D07B0u; f_80212260(c); // 801D07AC
L_801D07B0:;
  c->r[4]=c->r[31]+c->r[29]; // 801D07B0
  c->r[5]=c->r[30]|c->r[30]; // 801D07B4
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D07B8
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D07BC
  c->lr=0x801D07C4u; f_801E15A0(c); // 801D07C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D07C4
  if (!crb(c,2)) { goto L_801D07D4; } // 801D07C8
  c->r[3]=0u+0x00000000u; // 801D07CC
  goto L_801D0820; // 801D07D0
L_801D07D4:;
  c->r[0]=R8(c->r[3]+0x00000016u); // 801D07D4
  goto L_801D07E8; // 801D07D8
L_801D07DC:;
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801D07DC
  c->r[3]=c->r[3]+c->r[0]; // 801D07E0
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D07E4
L_801D07E8:;
  cmps(c,0,(int32_t)c->r[0],1); // 801D07E8
  if (crb(c,2)) { goto L_801D0804; } // 801D07EC
  cmps(c,0,(int32_t)c->r[0],2); // 801D07F0
  if (crb(c,2)) { goto L_801D080C; } // 801D07F4
  cmps(c,0,(int32_t)c->r[0],3); // 801D07F8
  if (crb(c,2)) { goto L_801D0814; } // 801D07FC
  goto L_801D081C; // 801D0800
L_801D0804:;
  c->r[3]=0u+0x00000001u; // 801D0804
  goto L_801D0820; // 801D0808
L_801D080C:;
  c->r[3]=0u+0x00000002u; // 801D080C
  goto L_801D0820; // 801D0810
L_801D0814:;
  c->r[3]=0u+0x00000003u; // 801D0814
  goto L_801D0820; // 801D0818
L_801D081C:;
  c->r[3]=0u+0x00000000u; // 801D081C
L_801D0820:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0820
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0824
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0828
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D082C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D0830
  c->lr=c->r[0]; // 801D0834
  c->r[1]=c->r[1]+0x00000020u; // 801D0838
  return; // 801D083C
}

// fn_801D0840
void f_801D0840(Ctx* __restrict c) {
  trace_call(0x801D0840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0840
  c->r[0]=c->lr; // 801D0844
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0848
  c->r[11]=c->r[1]+0x00000020u; // 801D084C
  c->lr=0x801D0854u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0850
  c->r[28]=R32(c->r[3]+0x00000028u); // 801D0854
  c->r[30]=c->r[3]|c->r[3]; // 801D0858
  c->r[27]=c->r[4]|c->r[4]; // 801D085C
  c->r[31]=c->r[5]|c->r[5]; // 801D0860
  c->r[0]=R8(c->r[28]+0x00000001u); // 801D0864
  cmps(c,0,(int32_t)c->r[0],0); // 801D0868
  if (crb(c,2)) { goto L_801D0888; } // 801D086C
  c->r[5]=0u+0x803A0000u; // 801D0870
  c->r[3]=c->r[13]+0xFFFFADF0u; // 801D0874
  c->r[5]=c->r[5]+0x00000FE8u; // 801D0878
  c->r[4]=0u+0x0000008Du; // 801D087C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0880
  c->lr=0x801D0888u; f_80212260(c); // 801D0884
L_801D0888:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 801D0888
  c->r[5]=c->r[28]|c->r[28]; // 801D088C
  c->r[4]=R32(c->r[28]+0x00000004u); // 801D0890
  c->lr=0x801D0898u; f_801E15A0(c); // 801D0894
  cmps(c,0,(int32_t)c->r[3],0); // 801D0898
  c->r[29]=c->r[3]|c->r[3]; // 801D089C
  if (!crb(c,2)) { goto L_801D08AC; } // 801D08A0
  c->r[3]=0u+0x00000000u; // 801D08A4
  goto L_801D0928; // 801D08A8
L_801D08AC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D08AC
  cmpu(c,0,c->r[27],c->r[0]); // 801D08B0
  if (crb(c,0)) { goto L_801D08C0; } // 801D08B4
  c->r[3]=0u+0x00000000u; // 801D08B8
  goto L_801D0928; // 801D08BC
L_801D08C0:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D08C0
  cmpu(c,0,c->r[0],0x00000101u); // 801D08C4
  if (crb(c,0)) { goto L_801D0914; } // 801D08C8
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D08CC
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D08D0
  c->r[3]=c->r[3]+c->r[27]; // 801D08D4
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D08D8
  cmps(c,0,(int32_t)c->r[0],0); // 801D08DC
  if (crb(c,2)) { goto L_801D08FC; } // 801D08E0
  c->r[5]=0u+0x803A0000u; // 801D08E4
  c->r[3]=c->r[13]+0xFFFFADF8u; // 801D08E8
  c->r[5]=c->r[5]+0x00001010u; // 801D08EC
  c->r[4]=0u+0x0000008Du; // 801D08F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D08F4
  c->lr=0x801D08FCu; f_80212260(c); // 801D08F8
L_801D08FC:;
  c->r[4]=c->r[29]+c->r[27]; // 801D08FC
  c->r[5]=c->r[28]|c->r[28]; // 801D0900
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D0904
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D0908
  c->lr=0x801D0910u; f_801E15A0(c); // 801D090C
  goto L_801D0928; // 801D0910
L_801D0914:;
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D0914
  c->r[0]=R32(c->r[30]+0x00000028u); // 801D0918
  c->r[3]=c->r[3]+c->r[4]; // 801D091C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D0920
  c->r[3]=c->r[3]+c->r[0]; // 801D0924
L_801D0928:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0928
  if (!crb(c,2)) { goto L_801D0938; } // 801D092C
  c->r[3]=0u+0x00000000u; // 801D0930
  goto L_801D099C; // 801D0934
L_801D0938:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D0938
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D093C
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D0940
  c->r[4]=R32(c->r[3]+0x00000008u); // 801D0944
  W32(c->r[31]+0x00000004u,c->r[4]); // 801D0948
  cmpu(c,0,c->r[0],0x00000102u); // 801D094C
  c->r[0]=R8(c->r[3]+0x0000002Au); // 801D0950
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D0954
  c->r[0]=R8(c->r[3]+0x00000015u); // 801D0958
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D095C
  c->r[0]=R8(c->r[3]+0x00000014u); // 801D0960
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D0964
  c->r[0]=R8(c->r[3]+0x00000017u); // 801D0968
  W32(c->r[31]+0x00000014u,c->r[0]); // 801D096C
  if (crb(c,0)) { goto L_801D0988; } // 801D0970
  c->r[0]=R8(c->r[3]+0x00000028u); // 801D0974
  W32(c->r[31]+0x00000018u,c->r[0]); // 801D0978
  c->r[0]=R8(c->r[3]+0x00000029u); // 801D097C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801D0980
  goto L_801D0998; // 801D0984
L_801D0988:;
  c->r[3]=0u+0x00000001u; // 801D0988
  c->r[0]=0u+0x00000000u; // 801D098C
  W32(c->r[31]+0x00000018u,c->r[3]); // 801D0990
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 801D0994
L_801D0998:;
  c->r[3]=0u+0x00000001u; // 801D0998
L_801D099C:;
  c->r[11]=c->r[1]+0x00000020u; // 801D099C
  c->lr=0x801D09A4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D09A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D09A4
  c->lr=c->r[0]; // 801D09A8
  c->r[1]=c->r[1]+0x00000020u; // 801D09AC
  return; // 801D09B0
}

// fn_801D09C0
void f_801D09C0(Ctx* __restrict c) {
  trace_call(0x801D09C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D09C0
  c->r[0]=c->lr; // 801D09C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D09C8
  c->r[11]=c->r[1]+0x00000020u; // 801D09CC
  c->lr=0x801D09D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D09D0
  c->r[28]=R32(c->r[3]+0x00000028u); // 801D09D4
  c->r[30]=c->r[3]|c->r[3]; // 801D09D8
  c->r[27]=c->r[4]|c->r[4]; // 801D09DC
  c->r[31]=c->r[5]|c->r[5]; // 801D09E0
  c->r[0]=R8(c->r[28]+0x00000001u); // 801D09E4
  cmps(c,0,(int32_t)c->r[0],0); // 801D09E8
  if (crb(c,2)) { goto L_801D0A08; } // 801D09EC
  c->r[5]=0u+0x803A0000u; // 801D09F0
  c->r[3]=c->r[13]+0xFFFFADF0u; // 801D09F4
  c->r[5]=c->r[5]+0x00000FE8u; // 801D09F8
  c->r[4]=0u+0x0000008Du; // 801D09FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0A00
  c->lr=0x801D0A08u; f_80212260(c); // 801D0A04
L_801D0A08:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 801D0A08
  c->r[5]=c->r[28]|c->r[28]; // 801D0A0C
  c->r[4]=R32(c->r[28]+0x00000004u); // 801D0A10
  c->lr=0x801D0A18u; f_801E15A0(c); // 801D0A14
  cmps(c,0,(int32_t)c->r[3],0); // 801D0A18
  c->r[29]=c->r[3]|c->r[3]; // 801D0A1C
  if (!crb(c,2)) { goto L_801D0A2C; } // 801D0A20
  c->r[29]=0u+0x00000000u; // 801D0A24
  goto L_801D0AAC; // 801D0A28
L_801D0A2C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0A2C
  cmpu(c,0,c->r[27],c->r[0]); // 801D0A30
  if (crb(c,0)) { goto L_801D0A40; } // 801D0A34
  c->r[29]=0u+0x00000000u; // 801D0A38
  goto L_801D0AAC; // 801D0A3C
L_801D0A40:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D0A40
  cmpu(c,0,c->r[0],0x00000101u); // 801D0A44
  if (crb(c,0)) { goto L_801D0A98; } // 801D0A48
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D0A4C
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D0A50
  c->r[3]=c->r[3]+c->r[27]; // 801D0A54
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D0A58
  cmps(c,0,(int32_t)c->r[0],0); // 801D0A5C
  if (crb(c,2)) { goto L_801D0A7C; } // 801D0A60
  c->r[5]=0u+0x803A0000u; // 801D0A64
  c->r[3]=c->r[13]+0xFFFFADF8u; // 801D0A68
  c->r[5]=c->r[5]+0x00001010u; // 801D0A6C
  c->r[4]=0u+0x0000008Du; // 801D0A70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0A74
  c->lr=0x801D0A7Cu; f_80212260(c); // 801D0A78
L_801D0A7C:;
  c->r[4]=c->r[29]+c->r[27]; // 801D0A7C
  c->r[5]=c->r[28]|c->r[28]; // 801D0A80
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D0A84
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D0A88
  c->lr=0x801D0A90u; f_801E15A0(c); // 801D0A8C
  c->r[29]=c->r[3]|c->r[3]; // 801D0A90
  goto L_801D0AAC; // 801D0A94
L_801D0A98:;
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D0A98
  c->r[0]=R32(c->r[30]+0x00000028u); // 801D0A9C
  c->r[3]=c->r[3]+c->r[4]; // 801D0AA0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D0AA4
  c->r[29]=c->r[3]+c->r[0]; // 801D0AA8
L_801D0AAC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D0AAC
  if (!crb(c,2)) { goto L_801D0ABC; } // 801D0AB0
  c->r[3]=0u+0x00000000u; // 801D0AB4
  goto L_801D0B28; // 801D0AB8
L_801D0ABC:;
  c->r[0]=R8(c->r[29]+0x0000000Du); // 801D0ABC
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D0AC0
  cmps(c,0,(int32_t)c->r[0],0); // 801D0AC4
  if (crb(c,2)) { goto L_801D0AE4; } // 801D0AC8
  c->r[5]=0u+0x803A0000u; // 801D0ACC
  c->r[3]=c->r[13]+0xFFFFADE8u; // 801D0AD0
  c->r[5]=c->r[5]+0x00000FC0u; // 801D0AD4
  c->r[4]=0u+0x0000008Du; // 801D0AD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0ADC
  c->lr=0x801D0AE4u; f_80212260(c); // 801D0AE0
L_801D0AE4:;
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 801D0AE4
  c->r[5]=c->r[28]|c->r[28]; // 801D0AE8
  c->r[4]=R32(c->r[29]+0x00000010u); // 801D0AEC
  c->lr=0x801D0AF4u; f_801E15A0(c); // 801D0AF0
  cmps(c,0,(int32_t)c->r[3],0); // 801D0AF4
  if (!crb(c,2)) { goto L_801D0B04; } // 801D0AF8
  c->r[3]=0u+0x00000000u; // 801D0AFC
  goto L_801D0B28; // 801D0B00
L_801D0B04:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0B04
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D0B08
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D0B0C
  W8(c->r[31]+0x00000004u,c->r[0]); // 801D0B10
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D0B14
  W8(c->r[31]+0x00000005u,c->r[0]); // 801D0B18
  c->r[0]=R8(c->r[3]+0x00000006u); // 801D0B1C
  c->r[3]=0u+0x00000001u; // 801D0B20
  W8(c->r[31]+0x00000006u,c->r[0]); // 801D0B24
L_801D0B28:;
  c->r[11]=c->r[1]+0x00000020u; // 801D0B28
  c->lr=0x801D0B30u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0B2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0B30
  c->lr=c->r[0]; // 801D0B34
  c->r[1]=c->r[1]+0x00000020u; // 801D0B38
  return; // 801D0B3C
}

// fn_801D0B40
void f_801D0B40(Ctx* __restrict c) {
  trace_call(0x801D0B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0B40
  c->r[0]=c->lr; // 801D0B44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0B48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0B4C
  c->r[31]=c->r[4]|c->r[4]; // 801D0B50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0B54
  c->r[30]=c->r[5]|c->r[5]; // 801D0B58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0B5C
  c->r[29]=c->r[3]|c->r[3]; // 801D0B60
  c->lr=0x801D0B68u; f_801D06F0(c); // 801D0B64
  cmps(c,0,(int32_t)c->r[3],1); // 801D0B68
  if (crb(c,2)) { goto L_801D0B78; } // 801D0B6C
  c->r[3]=0u+0x00000000u; // 801D0B70
  goto L_801D0BD0; // 801D0B74
L_801D0B78:;
  c->r[3]=c->r[29]|c->r[29]; // 801D0B78
  c->r[4]=c->r[31]|c->r[31]; // 801D0B7C
  c->r[5]=c->r[1]+0x00000008u; // 801D0B80
  c->lr=0x801D0B88u; f_801D1C40(c); // 801D0B84
  cmps(c,0,(int32_t)c->r[3],0); // 801D0B88
  if (!crb(c,2)) { goto L_801D0B98; } // 801D0B8C
  c->r[3]=0u+0x00000000u; // 801D0B90
  goto L_801D0BD0; // 801D0B94
L_801D0B98:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801D0B98
  c->r[31]=R32(c->r[29]+0x00000028u); // 801D0B9C
  cmpu(c,0,c->r[0],0x00000001u); // 801D0BA0
  if (crb(c,2)) { goto L_801D0BC0; } // 801D0BA4
  c->r[5]=0u+0x803A0000u; // 801D0BA8
  c->r[3]=c->r[13]+0xFFFFAD90u; // 801D0BAC
  c->r[5]=c->r[5]+0x00000DE0u; // 801D0BB0
  c->r[4]=0u+0x0000008Eu; // 801D0BB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0BB8
  c->lr=0x801D0BC0u; f_80212260(c); // 801D0BBC
L_801D0BC0:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801D0BC0
  c->r[5]=c->r[31]|c->r[31]; // 801D0BC4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801D0BC8
  c->lr=0x801D0BD0u; f_801E15A0(c); // 801D0BCC
L_801D0BD0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0BD0
  if (!crb(c,2)) { goto L_801D0BE0; } // 801D0BD4
  c->r[3]=0u+0x00000000u; // 801D0BD8
  goto L_801D0C30; // 801D0BDC
L_801D0BE0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0BE0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D0BE4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D0BE8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D0BEC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D0BF0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D0BF4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D0BF8
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D0BFC
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D0C00
  cmpu(c,0,c->r[0],0x00000103u); // 801D0C04
  if (crb(c,0)) { goto L_801D0C24; } // 801D0C08
  c->r[3]=R8(c->r[3]+0x0000000Du); // 801D0C0C
  c->r[0]=0u-c->r[3]; // 801D0C10
  c->r[0]=c->r[0]|c->r[3]; // 801D0C14
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D0C18
  W8(c->r[30]+0x00000010u,c->r[0]); // 801D0C1C
  goto L_801D0C2C; // 801D0C20
L_801D0C24:;
  c->r[0]=0u+0x00000000u; // 801D0C24
  W8(c->r[30]+0x00000010u,c->r[0]); // 801D0C28
L_801D0C2C:;
  c->r[3]=0u+0x00000001u; // 801D0C2C
L_801D0C30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0C30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0C34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0C38
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0C3C
  c->lr=c->r[0]; // 801D0C40
  c->r[1]=c->r[1]+0x00000020u; // 801D0C44
  return; // 801D0C48
}

// fn_801D0C50
void f_801D0C50(Ctx* __restrict c) {
  trace_call(0x801D0C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0C50
  c->r[0]=c->lr; // 801D0C54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0C58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0C5C
  c->r[31]=c->r[4]|c->r[4]; // 801D0C60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0C64
  c->r[30]=c->r[5]|c->r[5]; // 801D0C68
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0C6C
  c->r[29]=c->r[3]|c->r[3]; // 801D0C70
  c->lr=0x801D0C78u; f_801D06F0(c); // 801D0C74
  cmps(c,0,(int32_t)c->r[3],2); // 801D0C78
  if (crb(c,2)) { goto L_801D0C88; } // 801D0C7C
  c->r[3]=0u+0x00000000u; // 801D0C80
  goto L_801D0CE0; // 801D0C84
L_801D0C88:;
  c->r[3]=c->r[29]|c->r[29]; // 801D0C88
  c->r[4]=c->r[31]|c->r[31]; // 801D0C8C
  c->r[5]=c->r[1]+0x00000008u; // 801D0C90
  c->lr=0x801D0C98u; f_801D1C40(c); // 801D0C94
  cmps(c,0,(int32_t)c->r[3],0); // 801D0C98
  if (!crb(c,2)) { goto L_801D0CA8; } // 801D0C9C
  c->r[3]=0u+0x00000000u; // 801D0CA0
  goto L_801D0CE0; // 801D0CA4
L_801D0CA8:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801D0CA8
  c->r[31]=R32(c->r[29]+0x00000028u); // 801D0CAC
  cmpu(c,0,c->r[0],0x00000002u); // 801D0CB0
  if (crb(c,2)) { goto L_801D0CD0; } // 801D0CB4
  c->r[5]=0u+0x803A0000u; // 801D0CB8
  c->r[3]=c->r[13]+0xFFFFAD88u; // 801D0CBC
  c->r[5]=c->r[5]+0x00000DB8u; // 801D0CC0
  c->r[4]=0u+0x0000008Fu; // 801D0CC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0CC8
  c->lr=0x801D0CD0u; f_80212260(c); // 801D0CCC
L_801D0CD0:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801D0CD0
  c->r[5]=c->r[31]|c->r[31]; // 801D0CD4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801D0CD8
  c->lr=0x801D0CE0u; f_801E15A0(c); // 801D0CDC
L_801D0CE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0CE0
  if (!crb(c,2)) { goto L_801D0CF0; } // 801D0CE4
  c->r[3]=0u+0x00000000u; // 801D0CE8
  goto L_801D0D60; // 801D0CEC
L_801D0CF0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0CF0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D0CF4
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D0CF8
  W16(c->r[30]+0x00000006u,c->r[0]); // 801D0CFC
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D0D00
  cmpu(c,0,c->r[0],0x00000104u); // 801D0D04
  if (crb(c,0)) { goto L_801D0D18; } // 801D0D08
  c->r[0]=R16(c->r[3]+0x00000004u); // 801D0D0C
  W16(c->r[30]+0x00000004u,c->r[0]); // 801D0D10
  goto L_801D0D5C; // 801D0D14
L_801D0D18:;
  c->r[0]=0u+0x00000000u; // 801D0D18
  W16(c->r[30]+0x00000004u,c->r[0]); // 801D0D1C
  c->r[4]=R16(c->r[3]+0x00000004u); // 801D0D20
  goto L_801D0D54; // 801D0D24
L_801D0D28:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801D0D28
  if (crb(c,2)) { goto L_801D0D40; } // 801D0D2C
  c->r[3]=R16(c->r[30]+0x00000004u); // 801D0D30
  c->r[0]=c->r[3]+0x00000001u; // 801D0D34
  W16(c->r[30]+0x00000004u,c->r[0]); // 801D0D38
  goto L_801D0D50; // 801D0D3C
L_801D0D40:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D0D40
  if (crb(c,2)) { goto L_801D0D50; } // 801D0D44
  c->r[3]=0u+0x00000000u; // 801D0D48
  goto L_801D0D60; // 801D0D4C
L_801D0D50:;
  c->r[4]=rotl(c->r[4],31)&0x00007FFFu; // 801D0D50
L_801D0D54:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D0D54
  if (!crb(c,2)) { IRQCHK(c); goto L_801D0D28; } // 801D0D58
L_801D0D5C:;
  c->r[3]=0u+0x00000001u; // 801D0D5C
L_801D0D60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0D60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0D64
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0D68
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0D6C
  c->lr=c->r[0]; // 801D0D70
  c->r[1]=c->r[1]+0x00000020u; // 801D0D74
  return; // 801D0D78
}

// fn_801D0D80
void f_801D0D80(Ctx* __restrict c) {
  trace_call(0x801D0D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0D80
  c->r[0]=c->lr; // 801D0D84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0D88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0D8C
  c->r[31]=c->r[4]|c->r[4]; // 801D0D90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0D94
  c->r[30]=c->r[5]|c->r[5]; // 801D0D98
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0D9C
  c->r[29]=c->r[3]|c->r[3]; // 801D0DA0
  c->lr=0x801D0DA8u; f_801D06F0(c); // 801D0DA4
  cmps(c,0,(int32_t)c->r[3],3); // 801D0DA8
  if (crb(c,2)) { goto L_801D0DB8; } // 801D0DAC
  c->r[3]=0u+0x00000000u; // 801D0DB0
  goto L_801D0E10; // 801D0DB4
L_801D0DB8:;
  c->r[3]=c->r[29]|c->r[29]; // 801D0DB8
  c->r[4]=c->r[31]|c->r[31]; // 801D0DBC
  c->r[5]=c->r[1]+0x00000008u; // 801D0DC0
  c->lr=0x801D0DC8u; f_801D1C40(c); // 801D0DC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D0DC8
  if (!crb(c,2)) { goto L_801D0DD8; } // 801D0DCC
  c->r[3]=0u+0x00000000u; // 801D0DD0
  goto L_801D0E10; // 801D0DD4
L_801D0DD8:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801D0DD8
  c->r[31]=R32(c->r[29]+0x00000028u); // 801D0DDC
  cmpu(c,0,c->r[0],0x00000003u); // 801D0DE0
  if (crb(c,2)) { goto L_801D0E00; } // 801D0DE4
  c->r[5]=0u+0x803A0000u; // 801D0DE8
  c->r[3]=c->r[13]+0xFFFFAD80u; // 801D0DEC
  c->r[5]=c->r[5]+0x00000D90u; // 801D0DF0
  c->r[4]=0u+0x00000090u; // 801D0DF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0DF8
  c->lr=0x801D0E00u; f_80212260(c); // 801D0DFC
L_801D0E00:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801D0E00
  c->r[5]=c->r[31]|c->r[31]; // 801D0E04
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801D0E08
  c->lr=0x801D0E10u; f_801E15A0(c); // 801D0E0C
L_801D0E10:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0E10
  if (!crb(c,2)) { goto L_801D0E20; } // 801D0E14
  c->r[3]=0u+0x00000000u; // 801D0E18
  goto L_801D0E60; // 801D0E1C
L_801D0E20:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0E20
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D0E24
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D0E28
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D0E2C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D0E30
  cmpu(c,0,c->r[0],0x00000103u); // 801D0E34
  if (crb(c,0)) { goto L_801D0E54; } // 801D0E38
  c->r[3]=R8(c->r[3]+0x00000009u); // 801D0E3C
  c->r[0]=0u-c->r[3]; // 801D0E40
  c->r[0]=c->r[0]|c->r[3]; // 801D0E44
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D0E48
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D0E4C
  goto L_801D0E5C; // 801D0E50
L_801D0E54:;
  c->r[0]=0u+0x00000000u; // 801D0E54
  W8(c->r[30]+0x00000008u,c->r[0]); // 801D0E58
L_801D0E5C:;
  c->r[3]=0u+0x00000001u; // 801D0E5C
L_801D0E60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0E60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0E64
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0E68
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0E6C
  c->lr=c->r[0]; // 801D0E70
  c->r[1]=c->r[1]+0x00000020u; // 801D0E74
  return; // 801D0E78
}

// fn_801D0E80
void f_801D0E80(Ctx* __restrict c) {
  trace_call(0x801D0E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0E80
  c->r[0]=c->lr; // 801D0E84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0E88
  c->r[11]=c->r[1]+0x00000020u; // 801D0E8C
  c->lr=0x801D0E94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0E90
  c->r[30]=R32(c->r[3]+0x00000028u); // 801D0E94
  c->r[27]=c->r[3]|c->r[3]; // 801D0E98
  c->r[29]=c->r[4]|c->r[4]; // 801D0E9C
  c->r[28]=c->r[5]|c->r[5]; // 801D0EA0
  c->r[0]=R8(c->r[30]+0x00000009u); // 801D0EA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D0EA8
  if (crb(c,2)) { goto L_801D0EC8; } // 801D0EAC
  c->r[5]=0u+0x803A0000u; // 801D0EB0
  c->r[3]=c->r[13]+0xFFFFADB8u; // 801D0EB4
  c->r[5]=c->r[5]+0x00000EA8u; // 801D0EB8
  c->r[4]=0u+0x0000008Du; // 801D0EBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0EC0
  c->lr=0x801D0EC8u; f_80212260(c); // 801D0EC4
L_801D0EC8:;
  c->r[3]=R8(c->r[30]+0x00000008u); // 801D0EC8
  c->r[5]=c->r[30]|c->r[30]; // 801D0ECC
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801D0ED0
  c->lr=0x801D0ED8u; f_801E15A0(c); // 801D0ED4
  cmps(c,0,(int32_t)c->r[3],0); // 801D0ED8
  c->r[31]=c->r[3]|c->r[3]; // 801D0EDC
  if (!crb(c,2)) { goto L_801D0EEC; } // 801D0EE0
  c->r[3]=0u+0x00000000u; // 801D0EE4
  goto L_801D0F44; // 801D0EE8
L_801D0EEC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0EEC
  cmpu(c,0,c->r[29],c->r[0]); // 801D0EF0
  if (crb(c,0)) { goto L_801D0F00; } // 801D0EF4
  c->r[3]=0u+0x00000000u; // 801D0EF8
  goto L_801D0F44; // 801D0EFC
L_801D0F00:;
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801D0F00
  c->r[30]=R32(c->r[27]+0x00000028u); // 801D0F04
  c->r[3]=c->r[3]+c->r[29]; // 801D0F08
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D0F0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D0F10
  if (crb(c,2)) { goto L_801D0F30; } // 801D0F14
  c->r[5]=0u+0x803A0000u; // 801D0F18
  c->r[3]=c->r[13]+0xFFFFAD78u; // 801D0F1C
  c->r[5]=c->r[5]+0x00000D68u; // 801D0F20
  c->r[4]=0u+0x0000008Du; // 801D0F24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0F28
  c->lr=0x801D0F30u; f_80212260(c); // 801D0F2C
L_801D0F30:;
  c->r[4]=c->r[31]+c->r[29]; // 801D0F30
  c->r[5]=c->r[30]|c->r[30]; // 801D0F34
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D0F38
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D0F3C
  c->lr=0x801D0F44u; f_801E15A0(c); // 801D0F40
L_801D0F44:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F44
  if (!crb(c,2)) { goto L_801D0F54; } // 801D0F48
  c->r[3]=0u+0x00000000u; // 801D0F4C
  goto L_801D0F60; // 801D0F50
L_801D0F54:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D0F54
  c->r[3]=0u+0x00000001u; // 801D0F58
  W32(c->r[28]+0x00000000u,c->r[0]); // 801D0F5C
L_801D0F60:;
  c->r[11]=c->r[1]+0x00000020u; // 801D0F60
  c->lr=0x801D0F68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D0F64
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0F68
  c->lr=c->r[0]; // 801D0F6C
  c->r[1]=c->r[1]+0x00000020u; // 801D0F70
  return; // 801D0F74
}

// fn_801D0F80
void f_801D0F80(Ctx* __restrict c) {
  trace_call(0x801D0F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0F80
  c->r[0]=c->lr; // 801D0F84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0F88
  c->r[11]=c->r[1]+0x00000020u; // 801D0F8C
  c->lr=0x801D0F94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D0F90
  c->r[30]=R32(c->r[3]+0x00000028u); // 801D0F94
  c->r[27]=c->r[3]|c->r[3]; // 801D0F98
  c->r[29]=c->r[4]|c->r[4]; // 801D0F9C
  c->r[28]=c->r[5]|c->r[5]; // 801D0FA0
  c->r[0]=R8(c->r[30]+0x00000011u); // 801D0FA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D0FA8
  if (crb(c,2)) { goto L_801D0FC8; } // 801D0FAC
  c->r[5]=0u+0x803A0000u; // 801D0FB0
  c->r[3]=c->r[13]+0xFFFFADC8u; // 801D0FB4
  c->r[5]=c->r[5]+0x00000EF8u; // 801D0FB8
  c->r[4]=0u+0x0000008Du; // 801D0FBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D0FC0
  c->lr=0x801D0FC8u; f_80212260(c); // 801D0FC4
L_801D0FC8:;
  c->r[3]=R8(c->r[30]+0x00000010u); // 801D0FC8
  c->r[5]=c->r[30]|c->r[30]; // 801D0FCC
  c->r[4]=R32(c->r[30]+0x00000014u); // 801D0FD0
  c->lr=0x801D0FD8u; f_801E15A0(c); // 801D0FD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D0FD8
  c->r[31]=c->r[3]|c->r[3]; // 801D0FDC
  if (!crb(c,2)) { goto L_801D0FEC; } // 801D0FE0
  c->r[4]=0u+0x00000000u; // 801D0FE4
  goto L_801D1048; // 801D0FE8
L_801D0FEC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D0FEC
  cmpu(c,0,c->r[29],c->r[0]); // 801D0FF0
  if (crb(c,0)) { goto L_801D1000; } // 801D0FF4
  c->r[4]=0u+0x00000000u; // 801D0FF8
  goto L_801D1048; // 801D0FFC
L_801D1000:;
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801D1000
  c->r[30]=R32(c->r[27]+0x00000028u); // 801D1004
  c->r[3]=c->r[3]+c->r[29]; // 801D1008
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D100C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1010
  if (crb(c,2)) { goto L_801D1030; } // 801D1014
  c->r[5]=0u+0x803A0000u; // 801D1018
  c->r[3]=c->r[13]+0xFFFFAD70u; // 801D101C
  c->r[5]=c->r[5]+0x00000D40u; // 801D1020
  c->r[4]=0u+0x0000008Du; // 801D1024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1028
  c->lr=0x801D1030u; f_80212260(c); // 801D102C
L_801D1030:;
  c->r[4]=c->r[31]+c->r[29]; // 801D1030
  c->r[5]=c->r[30]|c->r[30]; // 801D1034
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D1038
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D103C
  c->lr=0x801D1044u; f_801E15A0(c); // 801D1040
  c->r[4]=c->r[3]|c->r[3]; // 801D1044
L_801D1048:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D1048
  if (!crb(c,2)) { goto L_801D1058; } // 801D104C
  c->r[3]=0u+0x00000000u; // 801D1050
  goto L_801D106C; // 801D1054
L_801D1058:;
  c->r[0]=R8(c->r[4]+0x00000004u); // 801D1058
  c->r[3]=0u+0x00000001u; // 801D105C
  W32(c->r[28]+0x00000000u,c->r[0]); // 801D1060
  c->r[0]=R32(c->r[4]+0x00000008u); // 801D1064
  W32(c->r[28]+0x00000004u,c->r[0]); // 801D1068
L_801D106C:;
  c->r[11]=c->r[1]+0x00000020u; // 801D106C
  c->lr=0x801D1074u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1070
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1074
  c->lr=c->r[0]; // 801D1078
  c->r[1]=c->r[1]+0x00000020u; // 801D107C
  return; // 801D1080
}

// fn_801D1090
void f_801D1090(Ctx* __restrict c) {
  trace_call(0x801D1090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1090
  c->r[0]=c->lr; // 801D1094
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1098
  c->r[11]=c->r[1]+0x00000020u; // 801D109C
  c->lr=0x801D10A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D10A0
  c->r[28]=R32(c->r[3]+0x00000028u); // 801D10A4
  c->r[27]=c->r[3]|c->r[3]; // 801D10A8
  c->r[29]=c->r[4]|c->r[4]; // 801D10AC
  c->r[31]=c->r[5]|c->r[5]; // 801D10B0
  c->r[0]=R8(c->r[28]+0x00000021u); // 801D10B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D10B8
  if (crb(c,2)) { goto L_801D10D8; } // 801D10BC
  c->r[5]=0u+0x803A0000u; // 801D10C0
  c->r[3]=c->r[13]+0xFFFFADC0u; // 801D10C4
  c->r[5]=c->r[5]+0x00000ED0u; // 801D10C8
  c->r[4]=0u+0x0000008Du; // 801D10CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D10D0
  c->lr=0x801D10D8u; f_80212260(c); // 801D10D4
L_801D10D8:;
  c->r[3]=R8(c->r[28]+0x00000020u); // 801D10D8
  c->r[5]=c->r[28]|c->r[28]; // 801D10DC
  c->r[4]=R32(c->r[28]+0x00000024u); // 801D10E0
  c->lr=0x801D10E8u; f_801E15A0(c); // 801D10E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D10E8
  c->r[30]=c->r[3]|c->r[3]; // 801D10EC
  if (!crb(c,2)) { goto L_801D10FC; } // 801D10F0
  c->r[29]=0u+0x00000000u; // 801D10F4
  goto L_801D1158; // 801D10F8
L_801D10FC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D10FC
  cmpu(c,0,c->r[29],c->r[0]); // 801D1100
  if (crb(c,0)) { goto L_801D1110; } // 801D1104
  c->r[29]=0u+0x00000000u; // 801D1108
  goto L_801D1158; // 801D110C
L_801D1110:;
  c->r[28]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801D1110
  c->r[29]=R32(c->r[27]+0x00000028u); // 801D1114
  c->r[3]=c->r[3]+c->r[28]; // 801D1118
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D111C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1120
  if (crb(c,2)) { goto L_801D1140; } // 801D1124
  c->r[5]=0u+0x803A0000u; // 801D1128
  c->r[3]=c->r[13]+0xFFFFAD68u; // 801D112C
  c->r[5]=c->r[5]+0x00000D18u; // 801D1130
  c->r[4]=0u+0x0000008Du; // 801D1134
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1138
  c->lr=0x801D1140u; f_80212260(c); // 801D113C
L_801D1140:;
  c->r[4]=c->r[30]+c->r[28]; // 801D1140
  c->r[5]=c->r[29]|c->r[29]; // 801D1144
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D1148
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D114C
  c->lr=0x801D1154u; f_801E15A0(c); // 801D1150
  c->r[29]=c->r[3]|c->r[3]; // 801D1154
L_801D1158:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D1158
  if (!crb(c,2)) { goto L_801D1168; } // 801D115C
  c->r[3]=0u+0x00000000u; // 801D1160
  goto L_801D121C; // 801D1164
L_801D1168:;
  c->r[0]=R8(c->r[29]+0x00000021u); // 801D1168
  c->r[30]=R32(c->r[27]+0x00000028u); // 801D116C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1170
  if (crb(c,2)) { goto L_801D1190; } // 801D1174
  c->r[5]=0u+0x803A0000u; // 801D1178
  c->r[3]=c->r[13]+0xFFFFADE0u; // 801D117C
  c->r[5]=c->r[5]+0x00000F70u; // 801D1180
  c->r[4]=0u+0x0000008Du; // 801D1184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1188
  c->lr=0x801D1190u; f_80212260(c); // 801D118C
L_801D1190:;
  c->r[3]=R8(c->r[29]+0x00000020u); // 801D1190
  c->r[5]=c->r[30]|c->r[30]; // 801D1194
  c->r[4]=R32(c->r[29]+0x00000024u); // 801D1198
  c->lr=0x801D11A0u; f_801E15A0(c); // 801D119C
  cmps(c,0,(int32_t)c->r[3],0); // 801D11A0
  c->r[30]=c->r[3]|c->r[3]; // 801D11A4
  if (!crb(c,2)) { goto L_801D11B4; } // 801D11A8
  c->r[3]=0u+0x00000000u; // 801D11AC
  goto L_801D121C; // 801D11B0
L_801D11B4:;
  c->r[0]=R8(c->r[29]+0x00000009u); // 801D11B4
  c->r[28]=R32(c->r[27]+0x00000028u); // 801D11B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D11BC
  if (crb(c,2)) { goto L_801D11DC; } // 801D11C0
  c->r[5]=0u+0x803A0000u; // 801D11C4
  c->r[3]=c->r[13]+0xFFFFAD10u; // 801D11C8
  c->r[5]=c->r[5]+0xFFFFBD78u; // 801D11CC
  c->r[4]=0u+0x0000008Du; // 801D11D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D11D4
  c->lr=0x801D11DCu; f_80212260(c); // 801D11D8
L_801D11DC:;
  c->r[3]=R8(c->r[29]+0x00000008u); // 801D11DC
  c->r[5]=c->r[28]|c->r[28]; // 801D11E0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801D11E4
  c->lr=0x801D11ECu; f_801E15A0(c); // 801D11E8
  W32(c->r[31]+0x00000004u,c->r[3]); // 801D11EC
  c->r[3]=0u+0x00000001u; // 801D11F0
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D11F4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D11F8
  c->r[0]=R32(c->r[29]+0x00000014u); // 801D11FC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D1200
  c->r[0]=R32(c->r[29]+0x00000018u); // 801D1204
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D1208
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801D120C
  W32(c->r[31]+0x00000014u,c->r[0]); // 801D1210
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D1214
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D1218
L_801D121C:;
  c->r[11]=c->r[1]+0x00000020u; // 801D121C
  c->lr=0x801D1224u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1220
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1224
  c->lr=c->r[0]; // 801D1228
  c->r[1]=c->r[1]+0x00000020u; // 801D122C
  return; // 801D1230
}

// fn_801D1240
void f_801D1240(Ctx* __restrict c) {
  trace_call(0x801D1240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1240
  c->r[0]=c->lr; // 801D1244
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1248
  c->r[11]=c->r[1]+0x00000020u; // 801D124C
  c->lr=0x801D1254u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1250
  c->r[28]=R32(c->r[3]+0x00000028u); // 801D1254
  c->r[30]=c->r[3]|c->r[3]; // 801D1258
  c->r[27]=c->r[4]|c->r[4]; // 801D125C
  c->r[26]=c->r[5]|c->r[5]; // 801D1260
  c->r[0]=R8(c->r[28]+0x00000021u); // 801D1264
  c->r[31]=c->r[6]|c->r[6]; // 801D1268
  cmps(c,0,(int32_t)c->r[0],0); // 801D126C
  if (crb(c,2)) { goto L_801D128C; } // 801D1270
  c->r[5]=0u+0x803A0000u; // 801D1274
  c->r[3]=c->r[13]+0xFFFFADC0u; // 801D1278
  c->r[5]=c->r[5]+0x00000ED0u; // 801D127C
  c->r[4]=0u+0x0000008Du; // 801D1280
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1284
  c->lr=0x801D128Cu; f_80212260(c); // 801D1288
L_801D128C:;
  c->r[3]=R8(c->r[28]+0x00000020u); // 801D128C
  c->r[5]=c->r[28]|c->r[28]; // 801D1290
  c->r[4]=R32(c->r[28]+0x00000024u); // 801D1294
  c->lr=0x801D129Cu; f_801E15A0(c); // 801D1298
  cmps(c,0,(int32_t)c->r[3],0); // 801D129C
  c->r[29]=c->r[3]|c->r[3]; // 801D12A0
  if (!crb(c,2)) { goto L_801D12B0; } // 801D12A4
  c->r[29]=0u+0x00000000u; // 801D12A8
  goto L_801D130C; // 801D12AC
L_801D12B0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D12B0
  cmpu(c,0,c->r[27],c->r[0]); // 801D12B4
  if (crb(c,0)) { goto L_801D12C4; } // 801D12B8
  c->r[29]=0u+0x00000000u; // 801D12BC
  goto L_801D130C; // 801D12C0
L_801D12C4:;
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D12C4
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D12C8
  c->r[3]=c->r[3]+c->r[27]; // 801D12CC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D12D0
  cmps(c,0,(int32_t)c->r[0],0); // 801D12D4
  if (crb(c,2)) { goto L_801D12F4; } // 801D12D8
  c->r[5]=0u+0x803A0000u; // 801D12DC
  c->r[3]=c->r[13]+0xFFFFAD68u; // 801D12E0
  c->r[5]=c->r[5]+0x00000D18u; // 801D12E4
  c->r[4]=0u+0x0000008Du; // 801D12E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D12EC
  c->lr=0x801D12F4u; f_80212260(c); // 801D12F0
L_801D12F4:;
  c->r[4]=c->r[29]+c->r[27]; // 801D12F4
  c->r[5]=c->r[28]|c->r[28]; // 801D12F8
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D12FC
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D1300
  c->lr=0x801D1308u; f_801E15A0(c); // 801D1304
  c->r[29]=c->r[3]|c->r[3]; // 801D1308
L_801D130C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D130C
  if (!crb(c,2)) { goto L_801D131C; } // 801D1310
  c->r[3]=0u+0x00000000u; // 801D1314
  goto L_801D13FC; // 801D1318
L_801D131C:;
  c->r[0]=R8(c->r[29]+0x00000021u); // 801D131C
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D1320
  cmps(c,0,(int32_t)c->r[0],0); // 801D1324
  if (crb(c,2)) { goto L_801D1344; } // 801D1328
  c->r[5]=0u+0x803A0000u; // 801D132C
  c->r[3]=c->r[13]+0xFFFFADE0u; // 801D1330
  c->r[5]=c->r[5]+0x00000F70u; // 801D1334
  c->r[4]=0u+0x0000008Du; // 801D1338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D133C
  c->lr=0x801D1344u; f_80212260(c); // 801D1340
L_801D1344:;
  c->r[3]=R8(c->r[29]+0x00000020u); // 801D1344
  c->r[5]=c->r[28]|c->r[28]; // 801D1348
  c->r[4]=R32(c->r[29]+0x00000024u); // 801D134C
  c->lr=0x801D1354u; f_801E15A0(c); // 801D1350
  cmps(c,0,(int32_t)c->r[3],0); // 801D1354
  c->r[29]=c->r[3]|c->r[3]; // 801D1358
  if (!crb(c,2)) { goto L_801D1368; } // 801D135C
  c->r[3]=0u+0x00000000u; // 801D1360
  goto L_801D13FC; // 801D1364
L_801D1368:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1368
  cmpu(c,0,c->r[26],c->r[0]); // 801D136C
  if (crb(c,0)) { goto L_801D137C; } // 801D1370
  c->r[3]=0u+0x00000000u; // 801D1374
  goto L_801D13FC; // 801D1378
L_801D137C:;
  c->r[27]=rotl(c->r[26],3)&0xFFFFFFF8u; // 801D137C
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D1380
  c->r[3]=c->r[3]+c->r[27]; // 801D1384
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D1388
  cmps(c,0,(int32_t)c->r[0],0); // 801D138C
  if (crb(c,2)) { goto L_801D13AC; } // 801D1390
  c->r[5]=0u+0x803A0000u; // 801D1394
  c->r[3]=c->r[13]+0xFFFFADD8u; // 801D1398
  c->r[5]=c->r[5]+0x00000F48u; // 801D139C
  c->r[4]=0u+0x0000008Du; // 801D13A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D13A4
  c->lr=0x801D13ACu; f_80212260(c); // 801D13A8
L_801D13AC:;
  c->r[4]=c->r[29]+c->r[27]; // 801D13AC
  c->r[5]=c->r[28]|c->r[28]; // 801D13B0
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D13B4
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D13B8
  c->lr=0x801D13C0u; f_801E15A0(c); // 801D13BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D13C0
  if (!crb(c,2)) { goto L_801D13D0; } // 801D13C4
  c->r[3]=0u+0x00000000u; // 801D13C8
  goto L_801D13FC; // 801D13CC
L_801D13D0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D13D0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D13D4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D13D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D13DC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D13E0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D13E4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D13E8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D13EC
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D13F0
  c->r[3]=0u+0x00000001u; // 801D13F4
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D13F8
L_801D13FC:;
  c->r[11]=c->r[1]+0x00000020u; // 801D13FC
  c->lr=0x801D1404u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1400
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1404
  c->lr=c->r[0]; // 801D1408
  c->r[1]=c->r[1]+0x00000020u; // 801D140C
  return; // 801D1410
}

// fn_801D1420
void f_801D1420(Ctx* __restrict c) {
  trace_call(0x801D1420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1420
  c->r[0]=c->lr; // 801D1424
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D142C
  c->r[31]=R32(c->r[3]+0x00000028u); // 801D1430
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D1434
  c->r[30]=c->r[4]|c->r[4]; // 801D1438
  c->r[0]=R8(c->r[31]+0x00000029u); // 801D143C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1440
  if (crb(c,2)) { goto L_801D1460; } // 801D1444
  c->r[5]=0u+0x803A0000u; // 801D1448
  c->r[3]=c->r[13]+0xFFFFADD0u; // 801D144C
  c->r[5]=c->r[5]+0x00000F20u; // 801D1450
  c->r[4]=0u+0x0000008Du; // 801D1454
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1458
  c->lr=0x801D1460u; f_80212260(c); // 801D145C
L_801D1460:;
  c->r[3]=R8(c->r[31]+0x00000028u); // 801D1460
  c->r[5]=c->r[31]|c->r[31]; // 801D1464
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 801D1468
  c->lr=0x801D1470u; f_801E15A0(c); // 801D146C
  cmps(c,0,(int32_t)c->r[30],0); // 801D1470
  if (!crb(c,2)) { goto L_801D1480; } // 801D1474
  c->r[3]=0u+0x00000000u; // 801D1478
  goto L_801D14BC; // 801D147C
L_801D1480:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D1480
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D1484
  c->r[0]=R16(c->r[3]+0x00000002u); // 801D1488
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D148C
  c->r[0]=R16(c->r[3]+0x00000004u); // 801D1490
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D1494
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D1498
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D149C
  c->r[0]=R16(c->r[3]+0x00000008u); // 801D14A0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801D14A4
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801D14A8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D14AC
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 801D14B0
  c->r[3]=0u+0x00000001u; // 801D14B4
  W32(c->r[30]+0x00000018u,c->r[0]); // 801D14B8
L_801D14BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D14BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D14C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D14C4
  c->lr=c->r[0]; // 801D14C8
  c->r[1]=c->r[1]+0x00000010u; // 801D14CC
  return; // 801D14D0
}

// fn_801D14E0
void f_801D14E0(Ctx* __restrict c) {
  trace_call(0x801D14E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D14E0
  c->r[0]=c->lr; // 801D14E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D14E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D14EC
  c->r[31]=R32(c->r[3]+0x00000028u); // 801D14F0
  c->r[0]=R8(c->r[31]+0x00000011u); // 801D14F4
  cmps(c,0,(int32_t)c->r[0],0); // 801D14F8
  if (crb(c,2)) { goto L_801D1518; } // 801D14FC
  c->r[5]=0u+0x803A0000u; // 801D1500
  c->r[3]=c->r[13]+0xFFFFADC8u; // 801D1504
  c->r[5]=c->r[5]+0x00000EF8u; // 801D1508
  c->r[4]=0u+0x0000008Du; // 801D150C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1510
  c->lr=0x801D1518u; f_80212260(c); // 801D1514
L_801D1518:;
  c->r[3]=R8(c->r[31]+0x00000010u); // 801D1518
  c->r[5]=c->r[31]|c->r[31]; // 801D151C
  c->r[4]=R32(c->r[31]+0x00000014u); // 801D1520
  c->lr=0x801D1528u; f_801E15A0(c); // 801D1524
  cmps(c,0,(int32_t)c->r[3],0); // 801D1528
  if (!crb(c,2)) { goto L_801D1538; } // 801D152C
  c->r[3]=0u+0x00000000u; // 801D1530
  goto L_801D153C; // 801D1534
L_801D1538:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1538
L_801D153C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D153C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1540
  c->lr=c->r[0]; // 801D1544
  c->r[1]=c->r[1]+0x00000010u; // 801D1548
  return; // 801D154C
}

// fn_801D1550
void f_801D1550(Ctx* __restrict c) {
  trace_call(0x801D1550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1550
  c->r[0]=c->lr; // 801D1554
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D155C
  c->r[31]=R32(c->r[3]+0x00000028u); // 801D1560
  c->r[0]=R8(c->r[31]+0x00000021u); // 801D1564
  cmps(c,0,(int32_t)c->r[0],0); // 801D1568
  if (crb(c,2)) { goto L_801D1588; } // 801D156C
  c->r[5]=0u+0x803A0000u; // 801D1570
  c->r[3]=c->r[13]+0xFFFFADC0u; // 801D1574
  c->r[5]=c->r[5]+0x00000ED0u; // 801D1578
  c->r[4]=0u+0x0000008Du; // 801D157C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1580
  c->lr=0x801D1588u; f_80212260(c); // 801D1584
L_801D1588:;
  c->r[3]=R8(c->r[31]+0x00000020u); // 801D1588
  c->r[5]=c->r[31]|c->r[31]; // 801D158C
  c->r[4]=R32(c->r[31]+0x00000024u); // 801D1590
  c->lr=0x801D1598u; f_801E15A0(c); // 801D1594
  cmps(c,0,(int32_t)c->r[3],0); // 801D1598
  if (!crb(c,2)) { goto L_801D15A8; } // 801D159C
  c->r[3]=0u+0x00000000u; // 801D15A0
  goto L_801D15B0; // 801D15A4
L_801D15A8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D15A8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D15AC
L_801D15B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D15B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D15B4
  c->lr=c->r[0]; // 801D15B8
  c->r[1]=c->r[1]+0x00000010u; // 801D15BC
  return; // 801D15C0
}

// fn_801D15D0
void f_801D15D0(Ctx* __restrict c) {
  trace_call(0x801D15D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D15D0
  c->r[0]=c->lr; // 801D15D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D15D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D15DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D15E0
  c->r[30]=R32(c->r[3]+0x00000028u); // 801D15E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D15E8
  c->r[29]=c->r[4]|c->r[4]; // 801D15EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D15F0
  c->r[28]=c->r[3]|c->r[3]; // 801D15F4
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D15F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D15FC
  if (crb(c,2)) { goto L_801D161C; } // 801D1600
  c->r[5]=0u+0x803A0000u; // 801D1604
  c->r[3]=c->r[13]+0xFFFFADF0u; // 801D1608
  c->r[5]=c->r[5]+0x00000FE8u; // 801D160C
  c->r[4]=0u+0x0000008Du; // 801D1610
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1614
  c->lr=0x801D161Cu; f_80212260(c); // 801D1618
L_801D161C:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 801D161C
  c->r[5]=c->r[30]|c->r[30]; // 801D1620
  c->r[4]=R32(c->r[30]+0x00000004u); // 801D1624
  c->lr=0x801D162Cu; f_801E15A0(c); // 801D1628
  cmps(c,0,(int32_t)c->r[3],0); // 801D162C
  c->r[31]=c->r[3]|c->r[3]; // 801D1630
  if (!crb(c,2)) { goto L_801D1640; } // 801D1634
  c->r[3]=0u+0x00000000u; // 801D1638
  goto L_801D16BC; // 801D163C
L_801D1640:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1640
  cmpu(c,0,c->r[29],c->r[0]); // 801D1644
  if (crb(c,0)) { goto L_801D1654; } // 801D1648
  c->r[3]=0u+0x00000000u; // 801D164C
  goto L_801D16BC; // 801D1650
L_801D1654:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801D1654
  cmpu(c,0,c->r[0],0x00000101u); // 801D1658
  if (crb(c,0)) { goto L_801D16A8; } // 801D165C
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801D1660
  c->r[30]=R32(c->r[28]+0x00000028u); // 801D1664
  c->r[3]=c->r[3]+c->r[29]; // 801D1668
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D166C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1670
  if (crb(c,2)) { goto L_801D1690; } // 801D1674
  c->r[5]=0u+0x803A0000u; // 801D1678
  c->r[3]=c->r[13]+0xFFFFADF8u; // 801D167C
  c->r[5]=c->r[5]+0x00001010u; // 801D1680
  c->r[4]=0u+0x0000008Du; // 801D1684
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1688
  c->lr=0x801D1690u; f_80212260(c); // 801D168C
L_801D1690:;
  c->r[4]=c->r[31]+c->r[29]; // 801D1690
  c->r[5]=c->r[30]|c->r[30]; // 801D1694
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D1698
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D169C
  c->lr=0x801D16A4u; f_801E15A0(c); // 801D16A0
  goto L_801D16BC; // 801D16A4
L_801D16A8:;
  c->r[4]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801D16A8
  c->r[0]=R32(c->r[28]+0x00000028u); // 801D16AC
  c->r[3]=c->r[3]+c->r[4]; // 801D16B0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D16B4
  c->r[3]=c->r[3]+c->r[0]; // 801D16B8
L_801D16BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D16BC
  if (!crb(c,2)) { goto L_801D16CC; } // 801D16C0
  c->r[3]=0u+0x00000000u; // 801D16C4
  goto L_801D16D0; // 801D16C8
L_801D16CC:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 801D16CC
L_801D16D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D16D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D16D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D16D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D16DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D16E0
  c->lr=c->r[0]; // 801D16E4
  c->r[1]=c->r[1]+0x00000020u; // 801D16E8
  return; // 801D16EC
}

// fn_801D16F0
void f_801D16F0(Ctx* __restrict c) {
  trace_call(0x801D16F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D16F0
  c->r[0]=c->lr; // 801D16F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D16F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D16FC
  c->r[31]=R32(c->r[3]+0x00000028u); // 801D1700
  c->r[0]=R8(c->r[31]+0x00000019u); // 801D1704
  cmps(c,0,(int32_t)c->r[0],0); // 801D1708
  if (crb(c,2)) { goto L_801D1728; } // 801D170C
  c->r[5]=0u+0x803A0000u; // 801D1710
  c->r[3]=c->r[13]+0xFFFFADB0u; // 801D1714
  c->r[5]=c->r[5]+0x00000E80u; // 801D1718
  c->r[4]=0u+0x0000008Du; // 801D171C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1720
  c->lr=0x801D1728u; f_80212260(c); // 801D1724
L_801D1728:;
  c->r[3]=R8(c->r[31]+0x00000018u); // 801D1728
  c->r[5]=c->r[31]|c->r[31]; // 801D172C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801D1730
  c->lr=0x801D1738u; f_801E15A0(c); // 801D1734
  cmps(c,0,(int32_t)c->r[3],0); // 801D1738
  if (!crb(c,2)) { goto L_801D1748; } // 801D173C
  c->r[3]=0u+0x00000000u; // 801D1740
  goto L_801D174C; // 801D1744
L_801D1748:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D1748
L_801D174C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D174C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1750
  c->lr=c->r[0]; // 801D1754
  c->r[1]=c->r[1]+0x00000010u; // 801D1758
  return; // 801D175C
}

// fn_801D1760
void f_801D1760(Ctx* __restrict c) {
  trace_call(0x801D1760u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1760
  c->r[0]=c->lr; // 801D1764
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1768
  c->r[11]=c->r[1]+0x00000020u; // 801D176C
  c->lr=0x801D1774u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1770
  c->r[28]=R32(c->r[3]+0x00000028u); // 801D1774
  c->r[27]=c->r[3]|c->r[3]; // 801D1778
  c->r[30]=c->r[4]|c->r[4]; // 801D177C
  c->r[31]=c->r[5]|c->r[5]; // 801D1780
  c->r[0]=R8(c->r[28]+0x00000019u); // 801D1784
  cmps(c,0,(int32_t)c->r[0],0); // 801D1788
  if (crb(c,2)) { goto L_801D17A8; } // 801D178C
  c->r[5]=0u+0x803A0000u; // 801D1790
  c->r[3]=c->r[13]+0xFFFFADB0u; // 801D1794
  c->r[5]=c->r[5]+0x00000E80u; // 801D1798
  c->r[4]=0u+0x0000008Du; // 801D179C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D17A0
  c->lr=0x801D17A8u; f_80212260(c); // 801D17A4
L_801D17A8:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 801D17A8
  c->r[5]=c->r[28]|c->r[28]; // 801D17AC
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801D17B0
  c->lr=0x801D17B8u; f_801E15A0(c); // 801D17B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D17B8
  c->r[29]=c->r[3]|c->r[3]; // 801D17BC
  if (!crb(c,2)) { goto L_801D17CC; } // 801D17C0
  c->r[3]=0u+0x00000000u; // 801D17C4
  goto L_801D18DC; // 801D17C8
L_801D17CC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D17CC
  cmpu(c,0,c->r[30],c->r[0]); // 801D17D0
  if (crb(c,0)) { goto L_801D17E0; } // 801D17D4
  c->r[3]=0u+0x00000000u; // 801D17D8
  goto L_801D18DC; // 801D17DC
L_801D17E0:;
  c->r[28]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801D17E0
  c->r[30]=R32(c->r[27]+0x00000028u); // 801D17E4
  c->r[3]=c->r[3]+c->r[28]; // 801D17E8
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D17EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D17F0
  if (crb(c,2)) { goto L_801D1810; } // 801D17F4
  c->r[5]=0u+0x803A0000u; // 801D17F8
  c->r[3]=c->r[13]+0xFFFFADA0u; // 801D17FC
  c->r[5]=c->r[5]+0x00000E30u; // 801D1800
  c->r[4]=0u+0x0000008Du; // 801D1804
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1808
  c->lr=0x801D1810u; f_80212260(c); // 801D180C
L_801D1810:;
  c->r[4]=c->r[29]+c->r[28]; // 801D1810
  c->r[5]=c->r[30]|c->r[30]; // 801D1814
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D1818
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D181C
  c->lr=0x801D1824u; f_801E15A0(c); // 801D1820
  cmps(c,0,(int32_t)c->r[3],0); // 801D1824
  c->r[29]=c->r[3]|c->r[3]; // 801D1828
  if (!crb(c,2)) { goto L_801D1838; } // 801D182C
  c->r[3]=0u+0x00000000u; // 801D1830
  goto L_801D18DC; // 801D1834
L_801D1838:;
  c->r[0]=R8(c->r[3]+0x00000015u); // 801D1838
  c->r[30]=R32(c->r[27]+0x00000028u); // 801D183C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1840
  if (crb(c,2)) { goto L_801D1860; } // 801D1844
  c->r[5]=0u+0x803A0000u; // 801D1848
  c->r[3]=c->r[13]+0xFFFFADA8u; // 801D184C
  c->r[5]=c->r[5]+0x00000E58u; // 801D1850
  c->r[4]=0u+0x0000008Du; // 801D1854
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1858
  c->lr=0x801D1860u; f_80212260(c); // 801D185C
L_801D1860:;
  c->r[3]=R8(c->r[29]+0x00000014u); // 801D1860
  c->r[5]=c->r[30]|c->r[30]; // 801D1864
  c->r[4]=R32(c->r[29]+0x00000018u); // 801D1868
  c->lr=0x801D1870u; f_801E15A0(c); // 801D186C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1870
  c->r[30]=c->r[3]|c->r[3]; // 801D1874
  if (!crb(c,2)) { goto L_801D1884; } // 801D1878
  c->r[3]=0u+0x00000000u; // 801D187C
  goto L_801D18DC; // 801D1880
L_801D1884:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801D1884
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D1888
  c->r[28]=R32(c->r[27]+0x00000028u); // 801D188C
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D1890
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D1894
  c->r[0]=R8(c->r[29]+0x0000000Du); // 801D1898
  cmps(c,0,(int32_t)c->r[0],0); // 801D189C
  if (crb(c,2)) { goto L_801D18BC; } // 801D18A0
  c->r[5]=0u+0x803A0000u; // 801D18A4
  c->r[3]=c->r[13]+0xFFFFAD10u; // 801D18A8
  c->r[5]=c->r[5]+0xFFFFBD78u; // 801D18AC
  c->r[4]=0u+0x0000008Du; // 801D18B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D18B4
  c->lr=0x801D18BCu; f_80212260(c); // 801D18B8
L_801D18BC:;
  c->r[3]=R8(c->r[29]+0x0000000Cu); // 801D18BC
  c->r[5]=c->r[28]|c->r[28]; // 801D18C0
  c->r[4]=R32(c->r[29]+0x00000010u); // 801D18C4
  c->lr=0x801D18CCu; f_801E15A0(c); // 801D18C8
  W32(c->r[31]+0x00000008u,c->r[3]); // 801D18CC
  c->r[3]=0u+0x00000001u; // 801D18D0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801D18D4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D18D8
L_801D18DC:;
  c->r[11]=c->r[1]+0x00000020u; // 801D18DC
  c->lr=0x801D18E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D18E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D18E4
  c->lr=c->r[0]; // 801D18E8
  c->r[1]=c->r[1]+0x00000020u; // 801D18EC
  return; // 801D18F0
}

// fn_801D1900
void f_801D1900(Ctx* __restrict c) {
  trace_call(0x801D1900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1900
  c->r[0]=c->lr; // 801D1904
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1908
  c->r[11]=c->r[1]+0x00000020u; // 801D190C
  c->lr=0x801D1914u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1910
  c->r[28]=R32(c->r[3]+0x00000028u); // 801D1914
  c->r[30]=c->r[3]|c->r[3]; // 801D1918
  c->r[27]=c->r[4]|c->r[4]; // 801D191C
  c->r[26]=c->r[5]|c->r[5]; // 801D1920
  c->r[0]=R8(c->r[28]+0x00000019u); // 801D1924
  c->r[31]=c->r[6]|c->r[6]; // 801D1928
  cmps(c,0,(int32_t)c->r[0],0); // 801D192C
  if (crb(c,2)) { goto L_801D194C; } // 801D1930
  c->r[5]=0u+0x803A0000u; // 801D1934
  c->r[3]=c->r[13]+0xFFFFADB0u; // 801D1938
  c->r[5]=c->r[5]+0x00000E80u; // 801D193C
  c->r[4]=0u+0x0000008Du; // 801D1940
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1944
  c->lr=0x801D194Cu; f_80212260(c); // 801D1948
L_801D194C:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 801D194C
  c->r[5]=c->r[28]|c->r[28]; // 801D1950
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801D1954
  c->lr=0x801D195Cu; f_801E15A0(c); // 801D1958
  cmps(c,0,(int32_t)c->r[3],0); // 801D195C
  c->r[29]=c->r[3]|c->r[3]; // 801D1960
  if (!crb(c,2)) { goto L_801D1970; } // 801D1964
  c->r[3]=0u+0x00000000u; // 801D1968
  goto L_801D1AA4; // 801D196C
L_801D1970:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1970
  cmpu(c,0,c->r[27],c->r[0]); // 801D1974
  if (crb(c,0)) { goto L_801D1984; } // 801D1978
  c->r[3]=0u+0x00000000u; // 801D197C
  goto L_801D1AA4; // 801D1980
L_801D1984:;
  c->r[27]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D1984
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D1988
  c->r[3]=c->r[3]+c->r[27]; // 801D198C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D1990
  cmps(c,0,(int32_t)c->r[0],0); // 801D1994
  if (crb(c,2)) { goto L_801D19B4; } // 801D1998
  c->r[5]=0u+0x803A0000u; // 801D199C
  c->r[3]=c->r[13]+0xFFFFADA0u; // 801D19A0
  c->r[5]=c->r[5]+0x00000E30u; // 801D19A4
  c->r[4]=0u+0x0000008Du; // 801D19A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D19AC
  c->lr=0x801D19B4u; f_80212260(c); // 801D19B0
L_801D19B4:;
  c->r[4]=c->r[29]+c->r[27]; // 801D19B4
  c->r[5]=c->r[28]|c->r[28]; // 801D19B8
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D19BC
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D19C0
  c->lr=0x801D19C8u; f_801E15A0(c); // 801D19C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D19C8
  c->r[29]=c->r[3]|c->r[3]; // 801D19CC
  if (!crb(c,2)) { goto L_801D19DC; } // 801D19D0
  c->r[3]=0u+0x00000000u; // 801D19D4
  goto L_801D1AA4; // 801D19D8
L_801D19DC:;
  c->r[0]=R8(c->r[3]+0x00000015u); // 801D19DC
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D19E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D19E4
  if (crb(c,2)) { goto L_801D1A04; } // 801D19E8
  c->r[5]=0u+0x803A0000u; // 801D19EC
  c->r[3]=c->r[13]+0xFFFFADA8u; // 801D19F0
  c->r[5]=c->r[5]+0x00000E58u; // 801D19F4
  c->r[4]=0u+0x0000008Du; // 801D19F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D19FC
  c->lr=0x801D1A04u; f_80212260(c); // 801D1A00
L_801D1A04:;
  c->r[3]=R8(c->r[29]+0x00000014u); // 801D1A04
  c->r[5]=c->r[28]|c->r[28]; // 801D1A08
  c->r[4]=R32(c->r[29]+0x00000018u); // 801D1A0C
  c->lr=0x801D1A14u; f_801E15A0(c); // 801D1A10
  cmps(c,0,(int32_t)c->r[3],0); // 801D1A14
  c->r[29]=c->r[3]|c->r[3]; // 801D1A18
  if (!crb(c,2)) { goto L_801D1A28; } // 801D1A1C
  c->r[3]=0u+0x00000000u; // 801D1A20
  goto L_801D1AA4; // 801D1A24
L_801D1A28:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1A28
  cmpu(c,0,c->r[26],c->r[0]); // 801D1A2C
  if (crb(c,0)) { goto L_801D1A3C; } // 801D1A30
  c->r[3]=0u+0x00000000u; // 801D1A34
  goto L_801D1AA4; // 801D1A38
L_801D1A3C:;
  c->r[27]=rotl(c->r[26],3)&0xFFFFFFF8u; // 801D1A3C
  c->r[28]=R32(c->r[30]+0x00000028u); // 801D1A40
  c->r[3]=c->r[3]+c->r[27]; // 801D1A44
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D1A48
  cmps(c,0,(int32_t)c->r[0],0); // 801D1A4C
  if (crb(c,2)) { goto L_801D1A6C; } // 801D1A50
  c->r[5]=0u+0x803A0000u; // 801D1A54
  c->r[3]=c->r[13]+0xFFFFAD98u; // 801D1A58
  c->r[5]=c->r[5]+0x00000E08u; // 801D1A5C
  c->r[4]=0u+0x0000008Du; // 801D1A60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1A64
  c->lr=0x801D1A6Cu; f_80212260(c); // 801D1A68
L_801D1A6C:;
  c->r[4]=c->r[29]+c->r[27]; // 801D1A6C
  c->r[5]=c->r[28]|c->r[28]; // 801D1A70
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D1A74
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D1A78
  c->lr=0x801D1A80u; f_801E15A0(c); // 801D1A7C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1A80
  if (!crb(c,2)) { goto L_801D1A90; } // 801D1A84
  c->r[3]=0u+0x00000000u; // 801D1A88
  goto L_801D1AA4; // 801D1A8C
L_801D1A90:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1A90
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D1A94
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D1A98
  c->r[3]=0u+0x00000001u; // 801D1A9C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D1AA0
L_801D1AA4:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1AA4
  c->lr=0x801D1AACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1AA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1AAC
  c->lr=c->r[0]; // 801D1AB0
  c->r[1]=c->r[1]+0x00000020u; // 801D1AB4
  return; // 801D1AB8
}

// fn_801D1AC0
void f_801D1AC0(Ctx* __restrict c) {
  trace_call(0x801D1AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1AC0
  c->r[0]=c->lr; // 801D1AC4
  cmps(c,0,(int32_t)c->r[4],0); // 801D1AC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1ACC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1AD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1AD4
  c->r[30]=c->r[5]|c->r[5]; // 801D1AD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1ADC
  c->r[29]=c->r[4]|c->r[4]; // 801D1AE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D1AE4
  c->r[28]=c->r[3]|c->r[3]; // 801D1AE8
  if (!crb(c,2)) { goto L_801D1AF8; } // 801D1AEC
  c->r[3]=0u+0xFFFFFFFFu; // 801D1AF0
  goto L_801D1C18; // 801D1AF4
L_801D1AF8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801D1AF8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801D1AFC
  cmpu(c,0,c->r[3],c->r[0]); // 801D1B00
  if (crb(c,0)) { goto L_801D1B10; } // 801D1B04
  c->r[3]=0u+0xFFFFFFFFu; // 801D1B08
  goto L_801D1C18; // 801D1B0C
L_801D1B10:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 801D1B10
  c->r[3]=c->r[30]|c->r[30]; // 801D1B14
  c->r[4]=c->r[4]+c->r[0]; // 801D1B18
  c->r[31]=c->r[4]+0x00000008u; // 801D1B1C
  c->lr=0x801D1B24u; f_802E5F80(c); // 801D1B20
  c->r[5]=0u+0x00000001u; // 801D1B24
  goto L_801D1B74; // 801D1B28
  c->r[0]=c->r[0]|0x00000000u; // 801D1B2C
L_801D1B30:;
  c->r[0]=R16(c->r[31]+0x00000002u); // 801D1B30
  c->r[4]=sraw(c,c->r[0],3); // 801D1B34
  c->r[6]=rotl(c->r[0],0)&0x00000007u; // 801D1B38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801D1B3C
  if (!crb(c,0)) { goto L_801D1B64; } // 801D1B40
  c->r[0]=R8(c->r[30]+c->r[4]); // 801D1B44
  c->r[4]=addc(c,~c->r[6],0x00000007u,1); // 801D1B48
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801D1B4C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D1B50
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801D1B54
  if (crb(c,2)) { goto L_801D1B64; } // 801D1B58
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D1B5C
  goto L_801D1B68; // 801D1B60
L_801D1B64:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D1B64
L_801D1B68:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801D1B68
  c->r[4]=c->r[29]+c->r[0]; // 801D1B6C
  c->r[31]=c->r[4]+0x00000008u; // 801D1B70
L_801D1B74:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 801D1B74
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D1B78
  if (crb(c,2)) { IRQCHK(c); goto L_801D1B30; } // 801D1B7C
  c->r[29]=R32(c->r[31]+0x0000000Cu); // 801D1B80
  c->r[0]=c->r[29]+0x00010000u; // 801D1B84
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801D1B88
  if (!crb(c,2)) { goto L_801D1B98; } // 801D1B8C
  c->r[4]=0u+0x00000000u; // 801D1B90
  goto L_801D1BFC; // 801D1B94
L_801D1B98:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 801D1B98
  cmps(c,0,(int32_t)c->r[3],0); // 801D1B9C
  if (!crb(c,2)) { goto L_801D1BAC; } // 801D1BA0
  c->r[4]=0u+0x00000000u; // 801D1BA4
  goto L_801D1BFC; // 801D1BA8
L_801D1BAC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1BAC
  cmpu(c,0,c->r[29],c->r[0]); // 801D1BB0
  if (crb(c,0)) { goto L_801D1BD4; } // 801D1BB4
  c->r[3]=0u+0x803A0000u; // 801D1BB8
  c->r[5]=0u+0x803A0000u; // 801D1BBC
  c->r[3]=c->r[3]+0x00000AD8u; // 801D1BC0
  c->r[4]=0u+0x000001FCu; // 801D1BC4
  c->r[5]=c->r[5]+0x00000CDCu; // 801D1BC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1BCC
  c->lr=0x801D1BD4u; f_80212260(c); // 801D1BD0
L_801D1BD4:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 801D1BD4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801D1BD8
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 801D1BDC
  c->r[3]=c->r[3]+c->r[0]; // 801D1BE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D1BE4
  cmps(c,0,(int32_t)c->r[0],0); // 801D1BE8
  if (!crb(c,2)) { goto L_801D1BF8; } // 801D1BEC
  c->r[4]=0u+0x00000000u; // 801D1BF0
  goto L_801D1BFC; // 801D1BF4
L_801D1BF8:;
  c->r[4]=c->r[0]+c->r[4]; // 801D1BF8
L_801D1BFC:;
  c->r[3]=c->r[30]|c->r[30]; // 801D1BFC
  c->lr=0x801D1C04u; f_802EE984(c); // 801D1C00
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C04
  if (!crb(c,2)) { goto L_801D1C14; } // 801D1C08
  c->r[3]=R32(c->r[31]+0x00000010u); // 801D1C0C
  goto L_801D1C18; // 801D1C10
L_801D1C14:;
  c->r[3]=0u+0xFFFFFFFFu; // 801D1C14
L_801D1C18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1C18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1C1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1C20
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D1C24
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D1C28
  c->lr=c->r[0]; // 801D1C2C
  c->r[1]=c->r[1]+0x00000020u; // 801D1C30
  return; // 801D1C34
}

// fn_801D1C40
void f_801D1C40(Ctx* __restrict c) {
  trace_call(0x801D1C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1C40
  c->r[0]=c->lr; // 801D1C44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1C48
  c->r[11]=c->r[1]+0x00000020u; // 801D1C4C
  c->lr=0x801D1C54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1C50
  c->r[29]=R32(c->r[3]+0x00000028u); // 801D1C54
  c->r[27]=c->r[3]|c->r[3]; // 801D1C58
  c->r[28]=c->r[4]|c->r[4]; // 801D1C5C
  c->r[31]=c->r[5]|c->r[5]; // 801D1C60
  c->r[0]=R8(c->r[29]+0x00000001u); // 801D1C64
  cmps(c,0,(int32_t)c->r[0],0); // 801D1C68
  if (crb(c,2)) { goto L_801D1C88; } // 801D1C6C
  c->r[5]=0u+0x803A0000u; // 801D1C70
  c->r[3]=c->r[13]+0xFFFFADF0u; // 801D1C74
  c->r[5]=c->r[5]+0x00000FE8u; // 801D1C78
  c->r[4]=0u+0x0000008Du; // 801D1C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1C80
  c->lr=0x801D1C88u; f_80212260(c); // 801D1C84
L_801D1C88:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 801D1C88
  c->r[5]=c->r[29]|c->r[29]; // 801D1C8C
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D1C90
  c->lr=0x801D1C98u; f_801E15A0(c); // 801D1C94
  cmps(c,0,(int32_t)c->r[3],0); // 801D1C98
  c->r[30]=c->r[3]|c->r[3]; // 801D1C9C
  if (!crb(c,2)) { goto L_801D1CAC; } // 801D1CA0
  c->r[3]=0u+0x00000000u; // 801D1CA4
  goto L_801D1D74; // 801D1CA8
L_801D1CAC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D1CAC
  cmpu(c,0,c->r[28],c->r[0]); // 801D1CB0
  if (crb(c,0)) { goto L_801D1CC0; } // 801D1CB4
  c->r[3]=0u+0x00000000u; // 801D1CB8
  goto L_801D1D74; // 801D1CBC
L_801D1CC0:;
  c->r[0]=R16(c->r[27]+0x00000006u); // 801D1CC0
  cmpu(c,0,c->r[0],0x00000101u); // 801D1CC4
  if (crb(c,0)) { goto L_801D1D48; } // 801D1CC8
  c->r[28]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801D1CCC
  c->r[29]=R32(c->r[27]+0x00000028u); // 801D1CD0
  c->r[3]=c->r[3]+c->r[28]; // 801D1CD4
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D1CD8
  cmps(c,0,(int32_t)c->r[0],0); // 801D1CDC
  if (crb(c,2)) { goto L_801D1CFC; } // 801D1CE0
  c->r[5]=0u+0x803A0000u; // 801D1CE4
  c->r[3]=c->r[13]+0xFFFFADF8u; // 801D1CE8
  c->r[5]=c->r[5]+0x00001010u; // 801D1CEC
  c->r[4]=0u+0x0000008Du; // 801D1CF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1CF4
  c->lr=0x801D1CFCu; f_80212260(c); // 801D1CF8
L_801D1CFC:;
  c->r[4]=c->r[30]+c->r[28]; // 801D1CFC
  c->r[5]=c->r[29]|c->r[29]; // 801D1D00
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D1D04
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D1D08
  c->lr=0x801D1D10u; f_801E15A0(c); // 801D1D0C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1D10
  if (!crb(c,2)) { goto L_801D1D20; } // 801D1D14
  c->r[3]=0u+0x00000000u; // 801D1D18
  goto L_801D1D74; // 801D1D1C
L_801D1D20:;
  c->r[0]=R8(c->r[3]+0x00000018u); // 801D1D20
  W8(c->r[31]+0x00000000u,c->r[0]); // 801D1D24
  c->r[0]=R8(c->r[3]+0x00000019u); // 801D1D28
  W8(c->r[31]+0x00000001u,c->r[0]); // 801D1D2C
  c->r[0]=R16(c->r[3]+0x0000001Au); // 801D1D30
  W16(c->r[31]+0x00000002u,c->r[0]); // 801D1D34
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801D1D38
  c->r[3]=0u+0x00000001u; // 801D1D3C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D1D40
  goto L_801D1D74; // 801D1D44
L_801D1D48:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801D1D48
  c->r[6]=c->r[3]+c->r[0]; // 801D1D4C
  c->r[3]=0u+0x00000001u; // 801D1D50
  c->r[4]=R32(c->r[6]+0x00000008u); // 801D1D54
  c->r[5]=R8(c->r[6]+0x00000005u); // 801D1D58
  c->r[0]=R8(c->r[6]+0x00000004u); // 801D1D5C
  c->r[4]=c->r[4]+0x0000001Cu; // 801D1D60
  W8(c->r[31]+0x00000000u,c->r[0]); // 801D1D64
  W8(c->r[31]+0x00000001u,c->r[5]); // 801D1D68
  W16(c->r[31]+0x00000002u,c->r[29]); // 801D1D6C
  W32(c->r[31]+0x00000004u,c->r[4]); // 801D1D70
L_801D1D74:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1D74
  c->lr=0x801D1D7Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D1D78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1D7C
  c->lr=c->r[0]; // 801D1D80
  c->r[1]=c->r[1]+0x00000020u; // 801D1D84
  return; // 801D1D88
}

// __ct__Q44nw4r3snd6detail18SoundArchiveLoaderFRCQ34nw4r3snd12SoundArchive
void f_801D1D90(Ctx* __restrict c) {
  trace_call(0x801D1D90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1D90
  c->r[0]=c->lr; // 801D1D94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1D98
  c->r[0]=0u+0x00000000u; // 801D1D9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1DA0
  c->r[31]=c->r[3]|c->r[3]; // 801D1DA4
  W32(c->r[3]+0x00000018u,c->r[4]); // 801D1DA8
  W32(c->r[3]+0x0000021Cu,c->r[0]); // 801D1DAC
  c->lr=0x801D1DB4u; f_80126D80(c); // 801D1DB0
  c->r[3]=c->r[31]|c->r[31]; // 801D1DB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1DB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1DBC
  c->lr=c->r[0]; // 801D1DC0
  c->r[1]=c->r[1]+0x00000010u; // 801D1DC4
  return; // 801D1DC8
}

// fn_801D1DD0
void f_801D1DD0(Ctx* __restrict c) {
  trace_call(0x801D1DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1DD0
  c->r[0]=c->lr; // 801D1DD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D1DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1DE0
  c->r[31]=c->r[3]|c->r[3]; // 801D1DE4
  if (crb(c,2)) { goto L_801D1DF8; } // 801D1DE8
  cmps(c,0,(int32_t)c->r[4],0); // 801D1DEC
  if (!crb(c,1)) { goto L_801D1DF8; } // 801D1DF0
  c->lr=0x801D1DF8u; f_802E61AC(c); // 801D1DF4
L_801D1DF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1DF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D1DFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1E00
  c->lr=c->r[0]; // 801D1E04
  c->r[1]=c->r[1]+0x00000010u; // 801D1E08
  return; // 801D1E0C
}

// fn_801D1E10
void f_801D1E10(Ctx* __restrict c) {
  trace_call(0x801D1E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1E10
  c->r[0]=c->lr; // 801D1E14
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D1E18
  c->r[11]=c->r[1]+0x00000050u; // 801D1E1C
  c->lr=0x801D1E24u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D1E20
  cmps(c,0,(int32_t)c->r[5],0); // 801D1E24
  c->r[31]=c->r[3]|c->r[3]; // 801D1E28
  c->r[26]=c->r[4]|c->r[4]; // 801D1E2C
  c->r[25]=c->r[5]|c->r[5]; // 801D1E30
  c->r[23]=c->r[6]|c->r[6]; // 801D1E34
  c->r[24]=c->r[7]|c->r[7]; // 801D1E38
  if (!crb(c,2)) { goto L_801D1E5C; } // 801D1E3C
  c->r[3]=0u+0x803A0000u; // 801D1E40
  c->r[5]=0u+0x803A0000u; // 801D1E44
  c->r[3]=c->r[3]+0x00001038u; // 801D1E48
  c->r[4]=0u+0x0000004Cu; // 801D1E4C
  c->r[5]=c->r[5]+0x00001054u; // 801D1E50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D1E54
  c->lr=0x801D1E5Cu; f_80212260(c); // 801D1E58
L_801D1E5C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1E5C
  c->lr=0x801D1E64u; f_80126DC0(c); // 801D1E60
  c->r[3]=R32(c->r[31]+0x00000018u); // 801D1E64
  c->r[4]=c->r[26]|c->r[26]; // 801D1E68
  c->r[5]=c->r[31]+0x0000001Cu; // 801D1E6C
  c->r[6]=0u+0x00000200u; // 801D1E70
  c->lr=0x801D1E78u; f_801D0190(c); // 801D1E74
  cmps(c,0,(int32_t)c->r[3],0); // 801D1E78
  c->r[29]=c->r[3]|c->r[3]; // 801D1E7C
  if (!crb(c,2)) { goto L_801D1EA8; } // 801D1E80
  if (crb(c,2)) { goto L_801D1E98; } // 801D1E84
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D1E88
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D1E8C
  c->ctr=c->r[12]; // 801D1E90
  if (true) { c->lr=0x801D1E98u; dispatch(c,c->ctr); } // 801D1E94
L_801D1E98:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1E98
  c->lr=0x801D1EA0u; f_80126EA0(c); // 801D1E9C
  c->r[3]=0u+0x00000000u; // 801D1EA0
  goto L_801D23F4; // 801D1EA4
L_801D1EA8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D1EA8
  c->r[12]=R32(c->r[12]+0x00000050u); // 801D1EAC
  c->ctr=c->r[12]; // 801D1EB0
  if (true) { c->lr=0x801D1EB8u; dispatch(c,c->ctr); } // 801D1EB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D1EB8
  if (crb(c,2)) { goto L_801D1EDC; } // 801D1EBC
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1EC0
  c->r[3]=c->r[29]|c->r[29]; // 801D1EC4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801D1EC8
  c->ctr=c->r[12]; // 801D1ECC
  if (true) { c->lr=0x801D1ED4u; dispatch(c,c->ctr); } // 801D1ED0
  cmps(c,0,(int32_t)c->r[3],0); // 801D1ED4
  if (!crb(c,2)) { goto L_801D1F08; } // 801D1ED8
L_801D1EDC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D1EDC
  if (crb(c,2)) { goto L_801D1EF8; } // 801D1EE0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1EE4
  c->r[3]=c->r[29]|c->r[29]; // 801D1EE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D1EEC
  c->ctr=c->r[12]; // 801D1EF0
  if (true) { c->lr=0x801D1EF8u; dispatch(c,c->ctr); } // 801D1EF4
L_801D1EF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1EF8
  c->lr=0x801D1F00u; f_80126EA0(c); // 801D1EFC
  c->r[3]=0u+0x00000000u; // 801D1F00
  goto L_801D23F4; // 801D1F04
L_801D1F08:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1F08
  c->r[3]=c->r[29]|c->r[29]; // 801D1F0C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1F10
  c->ctr=c->r[12]; // 801D1F14
  if (true) { c->lr=0x801D1F1Cu; dispatch(c,c->ctr); } // 801D1F18
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D1F1C
  c->r[4]=c->r[3]|c->r[3]; // 801D1F20
  c->r[3]=c->r[25]|c->r[25]; // 801D1F24
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D1F28
  c->ctr=c->r[12]; // 801D1F2C
  if (true) { c->lr=0x801D1F34u; dispatch(c,c->ctr); } // 801D1F30
  cmps(c,0,(int32_t)c->r[3],0); // 801D1F34
  c->r[27]=c->r[3]|c->r[3]; // 801D1F38
  if (!crb(c,2)) { goto L_801D1F6C; } // 801D1F3C
  cmps(c,0,(int32_t)c->r[29],0); // 801D1F40
  if (crb(c,2)) { goto L_801D1F5C; } // 801D1F44
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1F48
  c->r[3]=c->r[29]|c->r[29]; // 801D1F4C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D1F50
  c->ctr=c->r[12]; // 801D1F54
  if (true) { c->lr=0x801D1F5Cu; dispatch(c,c->ctr); } // 801D1F58
L_801D1F5C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1F5C
  c->lr=0x801D1F64u; f_80126EA0(c); // 801D1F60
  c->r[3]=0u+0x00000000u; // 801D1F64
  goto L_801D23F4; // 801D1F68
L_801D1F6C:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D1F6C
  W32(c->r[31]+0x0000021Cu,c->r[29]); // 801D1F70
  if (!crb(c,2)) { goto L_801D1FE4; } // 801D1F74
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1F78
  c->r[3]=c->r[29]|c->r[29]; // 801D1F7C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1F80
  c->ctr=c->r[12]; // 801D1F84
  if (true) { c->lr=0x801D1F8Cu; dispatch(c,c->ctr); } // 801D1F88
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1F8C
  c->r[5]=c->r[3]|c->r[3]; // 801D1F90
  c->r[3]=c->r[29]|c->r[29]; // 801D1F94
  c->r[4]=c->r[27]|c->r[27]; // 801D1F98
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D1F9C
  c->ctr=c->r[12]; // 801D1FA0
  if (true) { c->lr=0x801D1FA8u; dispatch(c,c->ctr); } // 801D1FA4
  cmps(c,0,(int32_t)c->r[3],0); // 801D1FA8
  if (!crb(c,0)) { goto L_801D2088; } // 801D1FAC
  cmps(c,0,(int32_t)c->r[29],0); // 801D1FB0
  c->r[0]=0u+0x00000000u; // 801D1FB4
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801D1FB8
  if (crb(c,2)) { goto L_801D1FD4; } // 801D1FBC
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1FC0
  c->r[3]=c->r[29]|c->r[29]; // 801D1FC4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D1FC8
  c->ctr=c->r[12]; // 801D1FCC
  if (true) { c->lr=0x801D1FD4u; dispatch(c,c->ctr); } // 801D1FD0
L_801D1FD4:;
  c->r[3]=c->r[31]|c->r[31]; // 801D1FD4
  c->lr=0x801D1FDCu; f_80126EA0(c); // 801D1FD8
  c->r[3]=0u+0x00000000u; // 801D1FDC
  goto L_801D23F4; // 801D1FE0
L_801D1FE4:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D1FE4
  c->r[3]=c->r[29]|c->r[29]; // 801D1FE8
  c->r[28]=c->r[27]|c->r[27]; // 801D1FEC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D1FF0
  c->ctr=c->r[12]; // 801D1FF4
  if (true) { c->lr=0x801D1FFCu; dispatch(c,c->ctr); } // 801D1FF8
  c->r[30]=c->r[3]|c->r[3]; // 801D1FFC
  goto L_801D2080; // 801D2000
L_801D2004:;
  cmpu(c,0,c->r[24],c->r[30]); // 801D2004
  c->r[3]=c->r[29]|c->r[29]; // 801D2008
  c->r[4]=c->r[28]|c->r[28]; // 801D200C
  c->r[5]=c->r[24]|c->r[24]; // 801D2010
  if (!crb(c,1)) { goto L_801D201C; } // 801D2014
  c->r[5]=c->r[30]|c->r[30]; // 801D2018
L_801D201C:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D201C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D2020
  c->ctr=c->r[12]; // 801D2024
  if (true) { c->lr=0x801D202Cu; dispatch(c,c->ctr); } // 801D2028
  cmps(c,0,(int32_t)c->r[3],0); // 801D202C
  if (!crb(c,0)) { goto L_801D2068; } // 801D2030
  cmps(c,0,(int32_t)c->r[29],0); // 801D2034
  c->r[0]=0u+0x00000000u; // 801D2038
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801D203C
  if (crb(c,2)) { goto L_801D2058; } // 801D2040
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D2044
  c->r[3]=c->r[29]|c->r[29]; // 801D2048
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D204C
  c->ctr=c->r[12]; // 801D2050
  if (true) { c->lr=0x801D2058u; dispatch(c,c->ctr); } // 801D2054
L_801D2058:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2058
  c->lr=0x801D2060u; f_80126EA0(c); // 801D205C
  c->r[3]=0u+0x00000000u; // 801D2060
  goto L_801D23F4; // 801D2064
L_801D2068:;
  cmpu(c,0,c->r[30],c->r[3]); // 801D2068
  if (!crb(c,1)) { goto L_801D207C; } // 801D206C
  c->r[30]=c->r[30]-c->r[3]; // 801D2070
  c->r[28]=c->r[28]+c->r[3]; // 801D2074
  goto L_801D2080; // 801D2078
L_801D207C:;
  c->r[30]=0u+0x00000000u; // 801D207C
L_801D2080:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D2080
  if (!crb(c,2)) { IRQCHK(c); goto L_801D2004; } // 801D2084
L_801D2088:;
  c->r[30]=0u+0x00000000u; // 801D2088
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 801D208C
  c->r[3]=R32(c->r[31]+0x00000018u); // 801D2090
  c->r[4]=c->r[26]|c->r[26]; // 801D2094
  c->r[5]=c->r[1]+0x00000008u; // 801D2098
  c->lr=0x801D20A0u; f_801CFED0(c); // 801D209C
  cmps(c,0,(int32_t)c->r[3],0); // 801D20A0
  if (!crb(c,2)) { goto L_801D20D4; } // 801D20A4
  cmps(c,0,(int32_t)c->r[29],0); // 801D20A8
  if (crb(c,2)) { goto L_801D20C4; } // 801D20AC
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D20B0
  c->r[3]=c->r[29]|c->r[29]; // 801D20B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D20B8
  c->ctr=c->r[12]; // 801D20BC
  if (true) { c->lr=0x801D20C4u; dispatch(c,c->ctr); } // 801D20C0
L_801D20C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801D20C4
  c->lr=0x801D20CCu; f_80126EA0(c); // 801D20C8
  c->r[3]=0u+0x00000000u; // 801D20CC
  goto L_801D23F4; // 801D20D0
L_801D20D4:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801D20D4
  cmps(c,0,(int32_t)c->r[0],0); // 801D20D8
  if (crb(c,2)) { goto L_801D23C0; } // 801D20DC
  c->r[3]=R32(c->r[31]+0x00000018u); // 801D20E0
  c->r[4]=c->r[26]|c->r[26]; // 801D20E4
  c->r[5]=c->r[31]+0x0000001Cu; // 801D20E8
  c->r[6]=0u+0x00000200u; // 801D20EC
  c->lr=0x801D20F4u; f_801D02D0(c); // 801D20F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D20F4
  c->r[28]=c->r[3]|c->r[3]; // 801D20F8
  if (!crb(c,2)) { goto L_801D2140; } // 801D20FC
  if (crb(c,2)) { goto L_801D2114; } // 801D2100
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2104
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2108
  c->ctr=c->r[12]; // 801D210C
  if (true) { c->lr=0x801D2114u; dispatch(c,c->ctr); } // 801D2110
L_801D2114:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D2114
  if (crb(c,2)) { goto L_801D2130; } // 801D2118
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D211C
  c->r[3]=c->r[29]|c->r[29]; // 801D2120
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2124
  c->ctr=c->r[12]; // 801D2128
  if (true) { c->lr=0x801D2130u; dispatch(c,c->ctr); } // 801D212C
L_801D2130:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2130
  c->lr=0x801D2138u; f_80126EA0(c); // 801D2134
  c->r[3]=0u+0x00000000u; // 801D2138
  goto L_801D23F4; // 801D213C
L_801D2140:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2140
  c->r[12]=R32(c->r[12]+0x00000050u); // 801D2144
  c->ctr=c->r[12]; // 801D2148
  if (true) { c->lr=0x801D2150u; dispatch(c,c->ctr); } // 801D214C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2150
  if (crb(c,2)) { goto L_801D2174; } // 801D2154
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D2158
  c->r[3]=c->r[28]|c->r[28]; // 801D215C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801D2160
  c->ctr=c->r[12]; // 801D2164
  if (true) { c->lr=0x801D216Cu; dispatch(c,c->ctr); } // 801D2168
  cmps(c,0,(int32_t)c->r[3],0); // 801D216C
  if (!crb(c,2)) { goto L_801D21BC; } // 801D2170
L_801D2174:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D2174
  if (crb(c,2)) { goto L_801D2190; } // 801D2178
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D217C
  c->r[3]=c->r[28]|c->r[28]; // 801D2180
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2184
  c->ctr=c->r[12]; // 801D2188
  if (true) { c->lr=0x801D2190u; dispatch(c,c->ctr); } // 801D218C
L_801D2190:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D2190
  if (crb(c,2)) { goto L_801D21AC; } // 801D2194
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D2198
  c->r[3]=c->r[29]|c->r[29]; // 801D219C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D21A0
  c->ctr=c->r[12]; // 801D21A4
  if (true) { c->lr=0x801D21ACu; dispatch(c,c->ctr); } // 801D21A8
L_801D21AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801D21AC
  c->lr=0x801D21B4u; f_80126EA0(c); // 801D21B0
  c->r[3]=0u+0x00000000u; // 801D21B4
  goto L_801D23F4; // 801D21B8
L_801D21BC:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D21BC
  c->r[3]=c->r[28]|c->r[28]; // 801D21C0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D21C4
  c->ctr=c->r[12]; // 801D21C8
  if (true) { c->lr=0x801D21D0u; dispatch(c,c->ctr); } // 801D21CC
  c->r[12]=R32(c->r[25]+0x00000000u); // 801D21D0
  c->r[4]=c->r[3]|c->r[3]; // 801D21D4
  c->r[3]=c->r[25]|c->r[25]; // 801D21D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D21DC
  c->ctr=c->r[12]; // 801D21E0
  if (true) { c->lr=0x801D21E8u; dispatch(c,c->ctr); } // 801D21E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D21E8
  c->r[26]=c->r[3]|c->r[3]; // 801D21EC
  if (!crb(c,2)) { goto L_801D223C; } // 801D21F0
  cmps(c,0,(int32_t)c->r[28],0); // 801D21F4
  if (crb(c,2)) { goto L_801D2210; } // 801D21F8
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D21FC
  c->r[3]=c->r[28]|c->r[28]; // 801D2200
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2204
  c->ctr=c->r[12]; // 801D2208
  if (true) { c->lr=0x801D2210u; dispatch(c,c->ctr); } // 801D220C
L_801D2210:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D2210
  if (crb(c,2)) { goto L_801D222C; } // 801D2214
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D2218
  c->r[3]=c->r[29]|c->r[29]; // 801D221C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2220
  c->ctr=c->r[12]; // 801D2224
  if (true) { c->lr=0x801D222Cu; dispatch(c,c->ctr); } // 801D2228
L_801D222C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D222C
  c->lr=0x801D2234u; f_80126EA0(c); // 801D2230
  c->r[3]=0u+0x00000000u; // 801D2234
  goto L_801D23F4; // 801D2238
L_801D223C:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D223C
  W32(c->r[31]+0x0000021Cu,c->r[28]); // 801D2240
  if (!crb(c,2)) { goto L_801D22CC; } // 801D2244
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D2248
  c->r[3]=c->r[28]|c->r[28]; // 801D224C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D2250
  c->ctr=c->r[12]; // 801D2254
  if (true) { c->lr=0x801D225Cu; dispatch(c,c->ctr); } // 801D2258
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D225C
  c->r[5]=c->r[3]|c->r[3]; // 801D2260
  c->r[3]=c->r[28]|c->r[28]; // 801D2264
  c->r[4]=c->r[26]|c->r[26]; // 801D2268
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D226C
  c->ctr=c->r[12]; // 801D2270
  if (true) { c->lr=0x801D2278u; dispatch(c,c->ctr); } // 801D2274
  cmps(c,0,(int32_t)c->r[3],0); // 801D2278
  if (!crb(c,0)) { goto L_801D238C; } // 801D227C
  cmps(c,0,(int32_t)c->r[28],0); // 801D2280
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 801D2284
  if (crb(c,2)) { goto L_801D22A0; } // 801D2288
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D228C
  c->r[3]=c->r[28]|c->r[28]; // 801D2290
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2294
  c->ctr=c->r[12]; // 801D2298
  if (true) { c->lr=0x801D22A0u; dispatch(c,c->ctr); } // 801D229C
L_801D22A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D22A0
  if (crb(c,2)) { goto L_801D22BC; } // 801D22A4
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D22A8
  c->r[3]=c->r[29]|c->r[29]; // 801D22AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D22B0
  c->ctr=c->r[12]; // 801D22B4
  if (true) { c->lr=0x801D22BCu; dispatch(c,c->ctr); } // 801D22B8
L_801D22BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801D22BC
  c->lr=0x801D22C4u; f_80126EA0(c); // 801D22C0
  c->r[3]=0u+0x00000000u; // 801D22C4
  goto L_801D23F4; // 801D22C8
L_801D22CC:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D22CC
  c->r[3]=c->r[28]|c->r[28]; // 801D22D0
  c->r[30]=c->r[26]|c->r[26]; // 801D22D4
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D22D8
  c->ctr=c->r[12]; // 801D22DC
  if (true) { c->lr=0x801D22E4u; dispatch(c,c->ctr); } // 801D22E0
  c->r[25]=c->r[3]|c->r[3]; // 801D22E4
  goto L_801D2384; // 801D22E8
L_801D22EC:;
  cmpu(c,0,c->r[24],c->r[25]); // 801D22EC
  c->r[3]=c->r[28]|c->r[28]; // 801D22F0
  c->r[4]=c->r[30]|c->r[30]; // 801D22F4
  c->r[5]=c->r[24]|c->r[24]; // 801D22F8
  if (!crb(c,1)) { goto L_801D2304; } // 801D22FC
  c->r[5]=c->r[25]|c->r[25]; // 801D2300
L_801D2304:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D2304
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D2308
  c->ctr=c->r[12]; // 801D230C
  if (true) { c->lr=0x801D2314u; dispatch(c,c->ctr); } // 801D2310
  cmps(c,0,(int32_t)c->r[3],0); // 801D2314
  if (!crb(c,0)) { goto L_801D236C; } // 801D2318
  cmps(c,0,(int32_t)c->r[28],0); // 801D231C
  c->r[0]=0u+0x00000000u; // 801D2320
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801D2324
  if (crb(c,2)) { goto L_801D2340; } // 801D2328
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D232C
  c->r[3]=c->r[28]|c->r[28]; // 801D2330
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2334
  c->ctr=c->r[12]; // 801D2338
  if (true) { c->lr=0x801D2340u; dispatch(c,c->ctr); } // 801D233C
L_801D2340:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D2340
  if (crb(c,2)) { goto L_801D235C; } // 801D2344
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D2348
  c->r[3]=c->r[29]|c->r[29]; // 801D234C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D2350
  c->ctr=c->r[12]; // 801D2354
  if (true) { c->lr=0x801D235Cu; dispatch(c,c->ctr); } // 801D2358
L_801D235C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D235C
  c->lr=0x801D2364u; f_80126EA0(c); // 801D2360
  c->r[3]=0u+0x00000000u; // 801D2364
  goto L_801D23F4; // 801D2368
L_801D236C:;
  cmpu(c,0,c->r[25],c->r[3]); // 801D236C
  if (!crb(c,1)) { goto L_801D2380; } // 801D2370
  c->r[25]=c->r[25]-c->r[3]; // 801D2374
  c->r[30]=c->r[30]+c->r[3]; // 801D2378
  goto L_801D2384; // 801D237C
L_801D2380:;
  c->r[25]=0u+0x00000000u; // 801D2380
L_801D2384:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D2384
  if (!crb(c,2)) { IRQCHK(c); goto L_801D22EC; } // 801D2388
L_801D238C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D238C
  c->r[0]=0u+0x00000000u; // 801D2390
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 801D2394
  if (crb(c,2)) { goto L_801D23A0; } // 801D2398
  W32(c->r[23]+0x00000000u,c->r[26]); // 801D239C
L_801D23A0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D23A0
  if (crb(c,2)) { goto L_801D23CC; } // 801D23A4
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D23A8
  c->r[3]=c->r[28]|c->r[28]; // 801D23AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D23B0
  c->ctr=c->r[12]; // 801D23B4
  if (true) { c->lr=0x801D23BCu; dispatch(c,c->ctr); } // 801D23B8
  goto L_801D23CC; // 801D23BC
L_801D23C0:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D23C0
  if (crb(c,2)) { goto L_801D23CC; } // 801D23C4
  W32(c->r[23]+0x00000000u,c->r[30]); // 801D23C8
L_801D23CC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D23CC
  if (crb(c,2)) { goto L_801D23E8; } // 801D23D0
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D23D4
  c->r[3]=c->r[29]|c->r[29]; // 801D23D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D23DC
  c->ctr=c->r[12]; // 801D23E0
  if (true) { c->lr=0x801D23E8u; dispatch(c,c->ctr); } // 801D23E4
L_801D23E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D23E8
  c->lr=0x801D23F0u; f_80126EA0(c); // 801D23EC
  c->r[3]=c->r[27]|c->r[27]; // 801D23F0
L_801D23F4:;
  c->r[11]=c->r[1]+0x00000050u; // 801D23F4
  c->lr=0x801D23FCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D23F8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D23FC
  c->lr=c->r[0]; // 801D2400
  c->r[1]=c->r[1]+0x00000050u; // 801D2404
  return; // 801D2408
}

// fn_801D2410
void f_801D2410(Ctx* __restrict c) {
  trace_call(0x801D2410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2410
  c->r[0]=c->lr; // 801D2414
  c->r[6]=0u+0x803A0000u; // 801D2418
  c->r[5]=0u+0x803A0000u; // 801D241C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2420
  c->r[6]=c->r[6]+0x00001AE8u; // 801D2424
  c->r[4]=0u+0x803A0000u; // 801D2428
  c->r[7]=c->r[3]+0x0000004Cu; // 801D242C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2430
  c->r[31]=0u+0x00000000u; // 801D2434
  c->r[0]=c->r[6]+0x00000014u; // 801D2438
  c->r[5]=c->r[5]+0x00001B28u; // 801D243C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2440
  c->r[4]=c->r[4]+0x00001B18u; // 801D2444
  c->r[30]=c->r[3]|c->r[3]; // 801D2448
  W32(c->r[3]+0x00000000u,c->r[31]); // 801D244C
  W32(c->r[3]+0x00000004u,c->r[31]); // 801D2450
  W32(c->r[3]+0x00000008u,c->r[6]); // 801D2454
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D2458
  W32(c->r[3]+0x00000010u,c->r[31]); // 801D245C
  W32(c->r[3]+0x00000014u,c->r[31]); // 801D2460
  W32(c->r[3]+0x00000018u,c->r[31]); // 801D2464
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801D2468
  W32(c->r[3]+0x00000020u,c->r[5]); // 801D246C
  W32(c->r[3]+0x00000024u,c->r[3]); // 801D2470
  W32(c->r[3]+0x00000028u,c->r[4]); // 801D2474
  W32(c->r[3]+0x0000002Cu,c->r[3]); // 801D2478
  W32(c->r[3]+0x00000034u,c->r[31]); // 801D247C
  W32(c->r[3]+0x00000038u,c->r[31]); // 801D2480
  W32(c->r[3]+0x0000003Cu,c->r[31]); // 801D2484
  W32(c->r[3]+0x00000040u,c->r[31]); // 801D2488
  W32(c->r[3]+0x00000044u,c->r[31]); // 801D248C
  W32(c->r[3]+0x00000048u,c->r[31]); // 801D2490
  W32(c->r[3]+0x0000004Cu,c->r[7]); // 801D2494
  W32(c->r[3]+0x00000050u,c->r[7]); // 801D2498
  c->r[3]=c->r[3]+0x00000054u; // 801D249C
  c->lr=0x801D24A4u; f_80126D80(c); // 801D24A0
  c->r[0]=c->r[30]+0x00000074u; // 801D24A4
  W32(c->r[30]+0x0000006Cu,c->r[31]); // 801D24A8
  c->r[3]=c->r[30]+0x0000007Cu; // 801D24AC
  W32(c->r[30]+0x00000070u,c->r[31]); // 801D24B0
  W32(c->r[30]+0x00000074u,c->r[0]); // 801D24B4
  W32(c->r[30]+0x00000078u,c->r[0]); // 801D24B8
  c->lr=0x801D24C0u; f_80126D80(c); // 801D24BC
  c->r[0]=c->r[30]+0x0000009Cu; // 801D24C0
  W32(c->r[30]+0x00000094u,c->r[31]); // 801D24C4
  c->r[3]=c->r[30]+0x000000A4u; // 801D24C8
  W32(c->r[30]+0x00000098u,c->r[31]); // 801D24CC
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 801D24D0
  W32(c->r[30]+0x000000A0u,c->r[0]); // 801D24D4
  c->lr=0x801D24DCu; f_80126D80(c); // 801D24D8
  c->r[4]=0u+0x803A0000u; // 801D24DC
  c->r[3]=0u+0x803A0000u; // 801D24E0
  c->r[4]=c->r[4]+0xFFFFF560u; // 801D24E4
  c->r[0]=c->r[30]+0x000000E0u; // 801D24E8
  c->r[3]=c->r[3]+0xFFFFF4F8u; // 801D24EC
  W32(c->r[30]+0x000000BCu,c->r[4]); // 801D24F0
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801D24F4
  W32(c->r[30]+0x000000C4u,c->r[31]); // 801D24F8
  W32(c->r[30]+0x000000E0u,c->r[3]); // 801D24FC
  W32(c->r[30]+0x000000E4u,c->r[31]); // 801D2500
  W32(c->r[30]+0x000000E8u,c->r[31]); // 801D2504
  c->lr=0x801D250Cu; f_801BEEC0(c); // 801D2508
  c->r[4]=c->r[30]|c->r[30]; // 801D250C
  c->lr=0x801D2514u; f_801BEFB0(c); // 801D2510
  c->r[3]=c->r[30]|c->r[30]; // 801D2514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2518
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D251C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2520
  c->lr=c->r[0]; // 801D2524
  c->r[1]=c->r[1]+0x00000010u; // 801D2528
  return; // 801D252C
}

// fn_801D2530
void f_801D2530(Ctx* __restrict c) {
  trace_call(0x801D2530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2530
  c->r[0]=c->lr; // 801D2534
  cmps(c,0,(int32_t)c->r[3],0); // 801D2538
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D253C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2540
  c->r[31]=c->r[3]|c->r[3]; // 801D2544
  if (crb(c,2)) { goto L_801D2558; } // 801D2548
  cmps(c,0,(int32_t)c->r[4],0); // 801D254C
  if (!crb(c,1)) { goto L_801D2558; } // 801D2550
  c->lr=0x801D2558u; f_802E61AC(c); // 801D2554
L_801D2558:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D255C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2560
  c->lr=c->r[0]; // 801D2564
  c->r[1]=c->r[1]+0x00000010u; // 801D2568
  return; // 801D256C
}

// fn_801D2570
void f_801D2570(Ctx* __restrict c) {
  trace_call(0x801D2570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2570
  c->r[0]=c->lr; // 801D2574
  cmps(c,0,(int32_t)c->r[3],0); // 801D2578
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D257C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2580
  c->r[31]=c->r[3]|c->r[3]; // 801D2584
  if (crb(c,2)) { goto L_801D2598; } // 801D2588
  cmps(c,0,(int32_t)c->r[4],0); // 801D258C
  if (!crb(c,1)) { goto L_801D2598; } // 801D2590
  c->lr=0x801D2598u; f_802E61AC(c); // 801D2594
L_801D2598:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D259C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D25A0
  c->lr=c->r[0]; // 801D25A4
  c->r[1]=c->r[1]+0x00000010u; // 801D25A8
  return; // 801D25AC
}

// fn_801D25B0
void f_801D25B0(Ctx* __restrict c) {
  trace_call(0x801D25B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D25B0
  c->r[0]=c->lr; // 801D25B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D25B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D25BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D25C0
  c->r[31]=c->r[3]|c->r[3]; // 801D25C4
  if (crb(c,2)) { goto L_801D25D8; } // 801D25C8
  cmps(c,0,(int32_t)c->r[4],0); // 801D25CC
  if (!crb(c,1)) { goto L_801D25D8; } // 801D25D0
  c->lr=0x801D25D8u; f_802E61AC(c); // 801D25D4
L_801D25D8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D25D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D25DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D25E0
  c->lr=c->r[0]; // 801D25E4
  c->r[1]=c->r[1]+0x00000010u; // 801D25E8
  return; // 801D25EC
}

// fn_801D25F0
void f_801D25F0(Ctx* __restrict c) {
  trace_call(0x801D25F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D25F0
  c->r[0]=c->lr; // 801D25F4
  cmps(c,0,(int32_t)c->r[3],0); // 801D25F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D25FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2600
  c->r[31]=c->r[3]|c->r[3]; // 801D2604
  if (crb(c,2)) { goto L_801D2618; } // 801D2608
  cmps(c,0,(int32_t)c->r[4],0); // 801D260C
  if (!crb(c,1)) { goto L_801D2618; } // 801D2610
  c->lr=0x801D2618u; f_802E61AC(c); // 801D2614
L_801D2618:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D261C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2620
  c->lr=c->r[0]; // 801D2624
  c->r[1]=c->r[1]+0x00000010u; // 801D2628
  return; // 801D262C
}

// fn_801D2630
void f_801D2630(Ctx* __restrict c) {
  trace_call(0x801D2630u);
  c->r[4]=c->r[3]+0x00000004u; // 801D2630
  c->r[0]=0u+0x00000000u; // 801D2634
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D2638
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D263C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D2640
  return; // 801D2644
}

// fn_801D2650
void f_801D2650(Ctx* __restrict c) {
  trace_call(0x801D2650u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2650
  c->r[0]=c->lr; // 801D2654
  cmps(c,0,(int32_t)c->r[3],0); // 801D2658
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D265C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2660
  c->r[31]=c->r[4]|c->r[4]; // 801D2664
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2668
  c->r[30]=c->r[3]|c->r[3]; // 801D266C
  if (crb(c,2)) { goto L_801D268C; } // 801D2670
  c->r[4]=0u+0x00000000u; // 801D2674
  c->lr=0x801D267Cu; f_801E4130(c); // 801D2678
  cmps(c,0,(int32_t)c->r[31],0); // 801D267C
  if (!crb(c,1)) { goto L_801D268C; } // 801D2680
  c->r[3]=c->r[30]|c->r[30]; // 801D2684
  c->lr=0x801D268Cu; f_802E61AC(c); // 801D2688
L_801D268C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D268C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2690
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2694
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2698
  c->lr=c->r[0]; // 801D269C
  c->r[1]=c->r[1]+0x00000010u; // 801D26A0
  return; // 801D26A4
}

// fn_801D26B0
void f_801D26B0(Ctx* __restrict c) {
  trace_call(0x801D26B0u);
  c->r[4]=c->r[3]+0x00000004u; // 801D26B0
  c->r[0]=0u+0x00000000u; // 801D26B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D26B8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D26BC
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D26C0
  return; // 801D26C4
}

// fn_801D26D0
void f_801D26D0(Ctx* __restrict c) {
  trace_call(0x801D26D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D26D0
  c->r[0]=c->lr; // 801D26D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D26D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D26DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D26E0
  c->r[31]=c->r[4]|c->r[4]; // 801D26E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D26E8
  c->r[30]=c->r[3]|c->r[3]; // 801D26EC
  if (crb(c,2)) { goto L_801D270C; } // 801D26F0
  c->r[4]=0u+0x00000000u; // 801D26F4
  c->lr=0x801D26FCu; f_801E4130(c); // 801D26F8
  cmps(c,0,(int32_t)c->r[31],0); // 801D26FC
  if (!crb(c,1)) { goto L_801D270C; } // 801D2700
  c->r[3]=c->r[30]|c->r[30]; // 801D2704
  c->lr=0x801D270Cu; f_802E61AC(c); // 801D2708
L_801D270C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D270C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2710
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2714
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2718
  c->lr=c->r[0]; // 801D271C
  c->r[1]=c->r[1]+0x00000010u; // 801D2720
  return; // 801D2724
}

// fn_801D2730
void f_801D2730(Ctx* __restrict c) {
  trace_call(0x801D2730u);
  c->r[4]=c->r[3]+0x00000004u; // 801D2730
  c->r[0]=0u+0x00000000u; // 801D2734
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D2738
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D273C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D2740
  return; // 801D2744
}

// fn_801D2750
void f_801D2750(Ctx* __restrict c) {
  trace_call(0x801D2750u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2750
  c->r[0]=c->lr; // 801D2754
  cmps(c,0,(int32_t)c->r[3],0); // 801D2758
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D275C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D2760
  c->r[31]=c->r[4]|c->r[4]; // 801D2764
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D2768
  c->r[30]=c->r[3]|c->r[3]; // 801D276C
  if (crb(c,2)) { goto L_801D278C; } // 801D2770
  c->r[4]=0u+0x00000000u; // 801D2774
  c->lr=0x801D277Cu; f_801E4130(c); // 801D2778
  cmps(c,0,(int32_t)c->r[31],0); // 801D277C
  if (!crb(c,1)) { goto L_801D278C; } // 801D2780
  c->r[3]=c->r[30]|c->r[30]; // 801D2784
  c->lr=0x801D278Cu; f_802E61AC(c); // 801D2788
L_801D278C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D278C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2790
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2794
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2798
  c->lr=c->r[0]; // 801D279C
  c->r[1]=c->r[1]+0x00000010u; // 801D27A0
  return; // 801D27A4
}

// fn_801D27B0
void f_801D27B0(Ctx* __restrict c) {
  trace_call(0x801D27B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D27B0
  c->r[0]=c->lr; // 801D27B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D27B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D27BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D27C0
  c->r[31]=c->r[4]|c->r[4]; // 801D27C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D27C8
  c->r[30]=c->r[3]|c->r[3]; // 801D27CC
  if (crb(c,2)) { goto L_801D284C; } // 801D27D0
  c->r[4]=0u+0x803A0000u; // 801D27D4
  c->r[4]=c->r[4]+0x00001AE8u; // 801D27D8
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D27DC
  c->r[0]=c->r[4]+0x00000014u; // 801D27E0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D27E4
  c->lr=0x801D27ECu; f_801BEEC0(c); // 801D27E8
  c->r[4]=c->r[30]|c->r[30]; // 801D27EC
  c->lr=0x801D27F4u; f_801BF030(c); // 801D27F0
  c->r[0]=addc(c,c->r[30],0x00000094u,0); cr0(c,c->r[0]); // 801D27F4
  if (crb(c,2)) { goto L_801D280C; } // 801D27F8
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 801D27FC
  if (crb(c,2)) { goto L_801D280C; } // 801D2800
  c->r[4]=0u+0x00000000u; // 801D2804
  c->lr=0x801D280Cu; f_801E4130(c); // 801D2808
L_801D280C:;
  c->r[0]=addc(c,c->r[30],0x0000006Cu,0); cr0(c,c->r[0]); // 801D280C
  if (crb(c,2)) { goto L_801D2824; } // 801D2810
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 801D2814
  if (crb(c,2)) { goto L_801D2824; } // 801D2818
  c->r[4]=0u+0x00000000u; // 801D281C
  c->lr=0x801D2824u; f_801E4130(c); // 801D2820
L_801D2824:;
  c->r[0]=addc(c,c->r[30],0x00000044u,0); cr0(c,c->r[0]); // 801D2824
  if (crb(c,2)) { goto L_801D283C; } // 801D2828
  c->r[3]=addc(c,c->r[0],0x00000004u,0); cr0(c,c->r[3]); // 801D282C
  if (crb(c,2)) { goto L_801D283C; } // 801D2830
  c->r[4]=0u+0x00000000u; // 801D2834
  c->lr=0x801D283Cu; f_801E4130(c); // 801D2838
L_801D283C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D283C
  if (!crb(c,1)) { goto L_801D284C; } // 801D2840
  c->r[3]=c->r[30]|c->r[30]; // 801D2844
  c->lr=0x801D284Cu; f_802E61AC(c); // 801D2848
L_801D284C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D284C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D2850
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D2854
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2858
  c->lr=c->r[0]; // 801D285C
  c->r[1]=c->r[1]+0x00000010u; // 801D2860
  return; // 801D2864
}

// fn_801D2870
void f_801D2870(Ctx* __restrict c) {
  trace_call(0x801D2870u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2870
  c->r[0]=c->lr; // 801D2874
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D2878
  c->r[11]=c->r[1]+0x00000080u; // 801D287C
  c->lr=0x801D2884u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2880
  c->r[30]=0u+0x803A0000u; // 801D2884
  c->r[31]=c->r[3]|c->r[3]; // 801D2888
  c->r[24]=c->r[4]|c->r[4]; // 801D288C
  c->r[25]=c->r[5]|c->r[5]; // 801D2890
  c->r[26]=c->r[6]|c->r[6]; // 801D2894
  c->r[27]=c->r[7]|c->r[7]; // 801D2898
  c->r[28]=c->r[8]|c->r[8]; // 801D289C
  c->r[30]=c->r[30]+0x00001080u; // 801D28A0
  c->lr=0x801D28A8u; f_801D75C0(c); // 801D28A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D28A8
  if (!crb(c,2)) { goto L_801D28C4; } // 801D28AC
  c->r[3]=c->r[30]+0x00000000u; // 801D28B0
  c->r[5]=c->r[30]+0x0000001Cu; // 801D28B4
  c->r[4]=0u+0x00000083u; // 801D28B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D28BC
  c->lr=0x801D28C4u; f_80212260(c); // 801D28C0
L_801D28C4:;
  c->lr=0x801D28C8u; f_801D75C0(c); // 801D28C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D28C8
  if (!crb(c,2)) { goto L_801D28D8; } // 801D28CC
  c->r[3]=0u+0x00000000u; // 801D28D0
  goto L_801D2A5C; // 801D28D4
L_801D28D8:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D28D8
  if (!crb(c,2)) { goto L_801D28F4; } // 801D28DC
  c->r[3]=c->r[30]+0x00000000u; // 801D28E0
  c->r[5]=c->r[30]+0x0000005Cu; // 801D28E4
  c->r[4]=0u+0x00000089u; // 801D28E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D28EC
  c->lr=0x801D28F4u; f_80212260(c); // 801D28F0
L_801D28F4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D28F4
  if (!crb(c,2)) { goto L_801D2910; } // 801D28F8
  c->r[3]=c->r[30]+0x00000000u; // 801D28FC
  c->r[5]=c->r[30]+0x00000080u; // 801D2900
  c->r[4]=0u+0x0000008Au; // 801D2904
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2908
  c->lr=0x801D2910u; f_80212260(c); // 801D290C
L_801D2910:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D2910
  if (crb(c,2)) { goto L_801D2934; } // 801D2914
  cmps(c,0,(int32_t)c->r[27],0); // 801D2918
  if (!crb(c,2)) { goto L_801D2934; } // 801D291C
  c->r[3]=c->r[30]+0x00000000u; // 801D2920
  c->r[5]=c->r[30]+0x000000A8u; // 801D2924
  c->r[4]=0u+0x0000008Cu; // 801D2928
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D292C
  c->lr=0x801D2934u; f_80212260(c); // 801D2930
L_801D2934:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D2934
  if (!crb(c,2)) { goto L_801D2950; } // 801D2938
  c->r[3]=c->r[30]+0x00000000u; // 801D293C
  c->r[5]=c->r[30]+0x0000005Cu; // 801D2940
  c->r[4]=0u+0x00000110u; // 801D2944
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2948
  c->lr=0x801D2950u; f_80212260(c); // 801D294C
L_801D2950:;
  c->r[3]=c->r[24]|c->r[24]; // 801D2950
  c->r[4]=c->r[1]+0x00000040u; // 801D2954
  c->r[29]=0u+0x00000000u; // 801D2958
  c->lr=0x801D2960u; f_801CFEA0(c); // 801D295C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2960
  if (crb(c,2)) { goto L_801D296C; } // 801D2964
  c->r[29]=R32(c->r[1]+0x00000050u); // 801D2968
L_801D296C:;
  c->r[3]=0u+0x00010000u; // 801D296C
  c->r[0]=c->r[3]+0xFFFFA000u; // 801D2970
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 801D2974
  cmpu(c,0,c->r[28],c->r[0]); // 801D2978
  if (!crb(c,0)) { goto L_801D2994; } // 801D297C
  c->r[3]=c->r[30]+0x00000000u; // 801D2980
  c->r[5]=c->r[30]+0x000000D4u; // 801D2984
  c->r[4]=0u+0x0000008Eu; // 801D2988
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D298C
  c->lr=0x801D2994u; f_80212260(c); // 801D2990
L_801D2994:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2994
  c->r[4]=c->r[24]|c->r[24]; // 801D2998
  c->r[5]=c->r[25]|c->r[25]; // 801D299C
  c->r[6]=c->r[26]|c->r[26]; // 801D29A0
  c->lr=0x801D29A8u; f_801D2C70(c); // 801D29A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D29A8
  if (!crb(c,2)) { goto L_801D29B8; } // 801D29AC
  c->r[3]=0u+0x00000000u; // 801D29B0
  goto L_801D2A5C; // 801D29B4
L_801D29B8:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D29B8
  if (!crb(c,2)) { goto L_801D29D4; } // 801D29BC
  c->r[3]=c->r[30]+0x00000000u; // 801D29C0
  c->r[5]=c->r[30]+0x0000005Cu; // 801D29C4
  c->r[4]=0u+0x00000110u; // 801D29C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D29CC
  c->lr=0x801D29D4u; f_80212260(c); // 801D29D0
L_801D29D4:;
  c->r[3]=c->r[24]|c->r[24]; // 801D29D4
  c->r[4]=c->r[1]+0x00000024u; // 801D29D8
  c->r[29]=0u+0x00000000u; // 801D29DC
  c->lr=0x801D29E4u; f_801CFEA0(c); // 801D29E0
  cmps(c,0,(int32_t)c->r[3],0); // 801D29E4
  if (crb(c,2)) { goto L_801D29F0; } // 801D29E8
  c->r[29]=R32(c->r[1]+0x00000034u); // 801D29EC
L_801D29F0:;
  c->r[3]=0u+0x00010000u; // 801D29F0
  c->r[0]=c->r[3]+0xFFFFA000u; // 801D29F4
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 801D29F8
  cmpu(c,0,c->r[28],c->r[0]); // 801D29FC
  if (!crb(c,0)) { goto L_801D2A0C; } // 801D2A00
  c->r[0]=0u+0x00000000u; // 801D2A04
  goto L_801D2A40; // 801D2A08
L_801D2A0C:;
  c->r[3]=c->r[24]|c->r[24]; // 801D2A0C
  c->r[4]=c->r[1]+0x00000008u; // 801D2A10
  c->r[29]=0u+0x00000000u; // 801D2A14
  c->lr=0x801D2A1Cu; f_801CFEA0(c); // 801D2A18
  cmps(c,0,(int32_t)c->r[3],0); // 801D2A1C
  if (crb(c,2)) { goto L_801D2A28; } // 801D2A20
  c->r[29]=R32(c->r[1]+0x00000018u); // 801D2A24
L_801D2A28:;
  c->r[4]=c->r[27]|c->r[27]; // 801D2A28
  c->r[5]=c->r[28]|c->r[28]; // 801D2A2C
  c->r[6]=c->r[29]|c->r[29]; // 801D2A30
  c->r[3]=c->r[31]+0x000000C8u; // 801D2A34
  c->lr=0x801D2A3Cu; f_801D7E70(c); // 801D2A38
  c->r[0]=0u+0x00000001u; // 801D2A3C
L_801D2A40:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2A40
  if (!crb(c,2)) { goto L_801D2A50; } // 801D2A44
  c->r[3]=0u+0x00000000u; // 801D2A48
  goto L_801D2A5C; // 801D2A4C
L_801D2A50:;
  c->r[0]=c->r[31]+0x000000BCu; // 801D2A50
  W32(c->r[31]+0x00000030u,c->r[0]); // 801D2A54
  c->r[3]=0u+0x00000001u; // 801D2A58
L_801D2A5C:;
  c->r[11]=c->r[1]+0x00000080u; // 801D2A5C
  c->lr=0x801D2A64u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D2A60
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D2A64
  c->lr=c->r[0]; // 801D2A68
  c->r[1]=c->r[1]+0x00000080u; // 801D2A6C
  return; // 801D2A70
}

// fn_801D2A80
void f_801D2A80(Ctx* __restrict c) {
  trace_call(0x801D2A80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2A80
  c->r[0]=c->lr; // 801D2A84
  cmps(c,0,(int32_t)c->r[4],0); // 801D2A88
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D2A8C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D2A90
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D2A94
  c->r[30]=c->r[4]|c->r[4]; // 801D2A98
  W32(c->r[1]+0x00000034u,c->r[29]); // 801D2A9C
  W32(c->r[1]+0x00000030u,c->r[28]); // 801D2AA0
  if (!crb(c,2)) { goto L_801D2AC4; } // 801D2AA4
  c->r[3]=0u+0x803A0000u; // 801D2AA8
  c->r[5]=0u+0x803A0000u; // 801D2AAC
  c->r[3]=c->r[3]+0x00001080u; // 801D2AB0
  c->r[4]=0u+0x000000D2u; // 801D2AB4
  c->r[5]=c->r[5]+0x000010DCu; // 801D2AB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2ABC
  c->lr=0x801D2AC4u; f_80212260(c); // 801D2AC0
L_801D2AC4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D2AC4
  c->lr=0x801D2ACCu; f_801CFE00(c); // 801D2AC8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801D2ACC
  c->r[29]=c->r[3]|c->r[3]; // 801D2AD0
  c->r[28]=0u+0x00000000u; // 801D2AD4
  c->r[0]=c->r[4]+0x00000003u; // 801D2AD8
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2ADC
  goto L_801D2B34; // 801D2AE0
L_801D2AE4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D2AE4
  c->r[4]=c->r[28]|c->r[28]; // 801D2AE8
  c->r[5]=c->r[1]+0x00000008u; // 801D2AEC
  c->lr=0x801D2AF4u; f_801CFE90(c); // 801D2AF0
  cmps(c,0,(int32_t)c->r[3],0); // 801D2AF4
  if (crb(c,2)) { goto L_801D2B30; } // 801D2AF8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801D2AFC
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D2B00
  c->r[0]=c->r[3]+0x00000003u; // 801D2B04
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2B08
  c->ctr=c->r[5]; // 801D2B0C
  cmps(c,0,(int32_t)c->r[5],0); // 801D2B10
  if (!crb(c,1)) { goto L_801D2B30; } // 801D2B14
L_801D2B18:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D2B18
  if (crb(c,2)) { goto L_801D2B2C; } // 801D2B1C
  c->r[0]=c->r[31]+0x0000003Fu; // 801D2B20
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801D2B24
  c->r[31]=c->r[31]+c->r[4]; // 801D2B28
L_801D2B2C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D2B18; } // 801D2B2C
L_801D2B30:;
  c->r[28]=c->r[28]+0x00000001u; // 801D2B30
L_801D2B34:;
  cmpu(c,0,c->r[28],c->r[29]); // 801D2B34
  if (crb(c,0)) { IRQCHK(c); goto L_801D2AE4; } // 801D2B38
  c->r[3]=c->r[30]|c->r[30]; // 801D2B3C
  c->lr=0x801D2B44u; f_801CFE10(c); // 801D2B40
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D2B44
  c->r[3]=c->r[30]|c->r[30]; // 801D2B48
  c->r[0]=c->r[4]+0x00000007u; // 801D2B4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2B50
  c->r[4]=c->r[1]+0x00000010u; // 801D2B54
  c->r[31]=c->r[31]+c->r[0]; // 801D2B58
  c->lr=0x801D2B60u; f_801CFEA0(c); // 801D2B5C
  cmps(c,0,(int32_t)c->r[3],0); // 801D2B60
  if (crb(c,2)) { goto L_801D2BB8; } // 801D2B64
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D2B68
  c->r[4]=R32(c->r[1]+0x00000018u); // 801D2B6C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1204); // 801D2B70
  c->r[3]=R32(c->r[1]+0x00000024u); // 801D2B74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D2B78
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)4276); // 801D2B7C
  c->r[6]=c->r[6]+0x00000003u; // 801D2B80
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)564); // 801D2B84
  c->r[3]=rotl(c->r[6],0)&0xFFFFFFFCu; // 801D2B88
  c->r[5]=c->r[5]+0x00000003u; // 801D2B8C
  c->r[31]=c->r[31]+c->r[3]; // 801D2B90
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)208); // 801D2B94
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFCu; // 801D2B98
  c->r[0]=c->r[4]+0x00000003u; // 801D2B9C
  c->r[31]=c->r[31]+c->r[5]; // 801D2BA0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2BA4
  c->r[0]=c->r[3]+0x00000003u; // 801D2BA8
  c->r[31]=c->r[31]+c->r[4]; // 801D2BAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2BB0
  c->r[31]=c->r[31]+c->r[0]; // 801D2BB4
L_801D2BB8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D2BB8
  c->lr=0x801D2BC0u; f_801CFEF0(c); // 801D2BBC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D2BC0
  c->r[0]=c->r[3]+0x00000007u; // 801D2BC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2BC8
  c->r[3]=c->r[31]+c->r[0]; // 801D2BCC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D2BD0
  c->r[30]=R32(c->r[1]+0x00000038u); // 801D2BD4
  c->r[29]=R32(c->r[1]+0x00000034u); // 801D2BD8
  c->r[28]=R32(c->r[1]+0x00000030u); // 801D2BDC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2BE0
  c->lr=c->r[0]; // 801D2BE4
  c->r[1]=c->r[1]+0x00000040u; // 801D2BE8
  return; // 801D2BEC
}

// fn_801D2BF0
void f_801D2BF0(Ctx* __restrict c) {
  trace_call(0x801D2BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2BF0
  c->r[0]=c->lr; // 801D2BF4
  cmps(c,0,(int32_t)c->r[4],0); // 801D2BF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2BFC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D2C00
  c->r[31]=c->r[4]|c->r[4]; // 801D2C04
  if (!crb(c,2)) { goto L_801D2C28; } // 801D2C08
  c->r[3]=0u+0x803A0000u; // 801D2C0C
  c->r[5]=0u+0x803A0000u; // 801D2C10
  c->r[3]=c->r[3]+0x00001080u; // 801D2C14
  c->r[4]=0u+0x00000110u; // 801D2C18
  c->r[5]=c->r[5]+0x000010DCu; // 801D2C1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2C20
  c->lr=0x801D2C28u; f_80212260(c); // 801D2C24
L_801D2C28:;
  c->r[3]=c->r[31]|c->r[31]; // 801D2C28
  c->r[4]=c->r[1]+0x00000008u; // 801D2C2C
  c->r[31]=0u+0x00000000u; // 801D2C30
  c->lr=0x801D2C38u; f_801CFEA0(c); // 801D2C34
  cmps(c,0,(int32_t)c->r[3],0); // 801D2C38
  if (crb(c,2)) { goto L_801D2C44; } // 801D2C3C
  c->r[31]=R32(c->r[1]+0x00000018u); // 801D2C40
L_801D2C44:;
  c->r[3]=0u+0x00010000u; // 801D2C44
  c->r[0]=c->r[3]+0xFFFFA000u; // 801D2C48
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801D2C4C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D2C50
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D2C54
  c->lr=c->r[0]; // 801D2C58
  c->r[1]=c->r[1]+0x00000030u; // 801D2C5C
  return; // 801D2C60
}

// fn_801D2C70
void f_801D2C70(Ctx* __restrict c) {
  trace_call(0x801D2C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2C70
  c->r[0]=c->lr; // 801D2C74
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D2C78
  c->r[11]=c->r[1]+0x00000060u; // 801D2C7C
  c->lr=0x801D2C84u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D2C80
  cmps(c,0,(int32_t)c->r[4],0); // 801D2C84
  c->r[31]=0u+0x803A0000u; // 801D2C88
  c->r[26]=c->r[3]|c->r[3]; // 801D2C8C
  c->r[27]=c->r[4]|c->r[4]; // 801D2C90
  c->r[28]=c->r[5]|c->r[5]; // 801D2C94
  c->r[29]=c->r[6]|c->r[6]; // 801D2C98
  c->r[31]=c->r[31]+0x00001080u; // 801D2C9C
  if (!crb(c,2)) { goto L_801D2CB8; } // 801D2CA0
  c->r[3]=c->r[31]+0x00000000u; // 801D2CA4
  c->r[5]=c->r[31]+0x0000005Cu; // 801D2CA8
  c->r[4]=0u+0x00000130u; // 801D2CAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2CB0
  c->lr=0x801D2CB8u; f_80212260(c); // 801D2CB4
L_801D2CB8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D2CB8
  if (!crb(c,2)) { goto L_801D2CD4; } // 801D2CBC
  c->r[3]=c->r[31]+0x00000000u; // 801D2CC0
  c->r[5]=c->r[31]+0x00000080u; // 801D2CC4
  c->r[4]=0u+0x00000131u; // 801D2CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2CCC
  c->lr=0x801D2CD4u; f_80212260(c); // 801D2CD0
L_801D2CD4:;
  c->r[0]=rotl(c->r[28],0)&0x00000003u; cr0(c,c->r[0]); // 801D2CD4
  if (crb(c,2)) { goto L_801D2CF4; } // 801D2CD8
  c->r[6]=c->r[28]|c->r[28]; // 801D2CDC
  c->r[3]=c->r[31]+0x00000000u; // 801D2CE0
  c->r[5]=c->r[31]+0x00000120u; // 801D2CE4
  c->r[4]=0u+0x00000132u; // 801D2CE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2CEC
  c->lr=0x801D2CF4u; f_80212260(c); // 801D2CF0
L_801D2CF4:;
  c->r[3]=c->r[26]|c->r[26]; // 801D2CF4
  c->r[4]=c->r[27]|c->r[27]; // 801D2CF8
  c->lr=0x801D2D00u; f_801D2A80(c); // 801D2CFC
  cmpu(c,0,c->r[29],c->r[3]); // 801D2D00
  if (!crb(c,0)) { goto L_801D2D1C; } // 801D2D04
  c->r[3]=c->r[31]+0x00000000u; // 801D2D08
  c->r[5]=c->r[31]+0x00000168u; // 801D2D0C
  c->r[4]=0u+0x00000133u; // 801D2D10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2D14
  c->lr=0x801D2D1Cu; f_80212260(c); // 801D2D18
L_801D2D1C:;
  c->r[30]=c->r[28]+c->r[29]; // 801D2D1C
  W32(c->r[1]+0x00000008u,c->r[28]); // 801D2D20
  c->r[3]=c->r[26]|c->r[26]; // 801D2D24
  c->r[4]=c->r[27]|c->r[27]; // 801D2D28
  c->r[6]=c->r[30]|c->r[30]; // 801D2D2C
  c->r[5]=c->r[1]+0x00000008u; // 801D2D30
  c->lr=0x801D2D38u; f_801D3220(c); // 801D2D34
  cmps(c,0,(int32_t)c->r[3],0); // 801D2D38
  if (!crb(c,2)) { goto L_801D2D48; } // 801D2D3C
  c->r[3]=0u+0x00000000u; // 801D2D40
  goto L_801D3134; // 801D2D44
L_801D2D48:;
  c->r[3]=c->r[27]|c->r[27]; // 801D2D48
  c->lr=0x801D2D50u; f_801CFE10(c); // 801D2D4C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D2D50
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D2D54
  c->r[0]=c->r[3]+0x00000004u; // 801D2D58
  c->r[3]=c->r[0]+c->r[5]; // 801D2D5C
  c->r[0]=c->r[3]+0x00000003u; // 801D2D60
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2D64
  c->r[0]=c->r[4]-c->r[30]; cr0(c,c->r[0]); // 801D2D68
  if (!crb(c,1)) { goto L_801D2D78; } // 801D2D6C
  c->r[0]=0u+0x00000000u; // 801D2D70
  goto L_801D2DD0; // 801D2D74
L_801D2D78:;
  W32(c->r[26]+0x00000014u,c->r[5]); // 801D2D78
  c->r[3]=c->r[27]|c->r[27]; // 801D2D7C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D2D80
  c->lr=0x801D2D88u; f_801CFE10(c); // 801D2D84
  c->r[5]=R32(c->r[26]+0x00000014u); // 801D2D88
  c->r[6]=0u+0x00000000u; // 801D2D8C
  c->r[7]=0u+0x00000000u; // 801D2D90
  c->r[4]=0u+0x00000000u; // 801D2D94
  W32(c->r[5]+0x00000000u,c->r[3]); // 801D2D98
  goto L_801D2DBC; // 801D2D9C
L_801D2DA0:;
  c->r[3]=c->r[3]+c->r[7]; // 801D2DA0
  c->r[6]=c->r[6]+0x00000001u; // 801D2DA4
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D2DA8
  c->r[0]=R32(c->r[26]+0x00000014u); // 801D2DAC
  c->r[3]=c->r[0]+c->r[7]; // 801D2DB0
  c->r[7]=c->r[7]+0x00000008u; // 801D2DB4
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D2DB8
L_801D2DBC:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 801D2DBC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D2DC0
  cmpu(c,0,c->r[6],c->r[0]); // 801D2DC4
  if (crb(c,0)) { IRQCHK(c); goto L_801D2DA0; } // 801D2DC8
  c->r[0]=0u+0x00000001u; // 801D2DCC
L_801D2DD0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2DD0
  if (!crb(c,2)) { goto L_801D2DE0; } // 801D2DD4
  c->r[3]=0u+0x00000000u; // 801D2DD8
  goto L_801D3134; // 801D2DDC
L_801D2DE0:;
  c->r[3]=c->r[27]|c->r[27]; // 801D2DE0
  c->lr=0x801D2DE8u; f_801CFEF0(c); // 801D2DE4
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D2DE8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D2DEC
  c->r[0]=c->r[3]+0x00000004u; // 801D2DF0
  c->r[3]=c->r[0]+c->r[5]; // 801D2DF4
  c->r[0]=c->r[3]+0x00000003u; // 801D2DF8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2DFC
  c->r[0]=c->r[4]-c->r[30]; cr0(c,c->r[0]); // 801D2E00
  if (!crb(c,1)) { goto L_801D2E10; } // 801D2E04
  c->r[0]=0u+0x00000000u; // 801D2E08
  goto L_801D2E68; // 801D2E0C
L_801D2E10:;
  W32(c->r[26]+0x00000018u,c->r[5]); // 801D2E10
  c->r[3]=c->r[27]|c->r[27]; // 801D2E14
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D2E18
  c->lr=0x801D2E20u; f_801CFEF0(c); // 801D2E1C
  c->r[5]=R32(c->r[26]+0x00000018u); // 801D2E20
  c->r[6]=0u+0x00000000u; // 801D2E24
  c->r[7]=0u+0x00000000u; // 801D2E28
  c->r[4]=0u+0x00000000u; // 801D2E2C
  W32(c->r[5]+0x00000000u,c->r[3]); // 801D2E30
  goto L_801D2E54; // 801D2E34
L_801D2E38:;
  c->r[3]=c->r[3]+c->r[7]; // 801D2E38
  c->r[6]=c->r[6]+0x00000001u; // 801D2E3C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D2E40
  c->r[0]=R32(c->r[26]+0x00000018u); // 801D2E44
  c->r[3]=c->r[0]+c->r[7]; // 801D2E48
  c->r[7]=c->r[7]+0x00000008u; // 801D2E4C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D2E50
L_801D2E54:;
  c->r[3]=R32(c->r[26]+0x00000018u); // 801D2E54
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D2E58
  cmpu(c,0,c->r[6],c->r[0]); // 801D2E5C
  if (crb(c,0)) { IRQCHK(c); goto L_801D2E38; } // 801D2E60
  c->r[0]=0u+0x00000001u; // 801D2E64
L_801D2E68:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2E68
  if (!crb(c,2)) { goto L_801D2E78; } // 801D2E6C
  c->r[3]=0u+0x00000000u; // 801D2E70
  goto L_801D3134; // 801D2E74
L_801D2E78:;
  c->r[3]=c->r[27]|c->r[27]; // 801D2E78
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2E7C
  c->lr=0x801D2E84u; f_801CFEA0(c); // 801D2E80
  cmps(c,0,(int32_t)c->r[3],0); // 801D2E84
  if (crb(c,2)) { goto L_801D30F4; } // 801D2E88
  c->r[22]=R32(c->r[1]+0x0000000Cu); // 801D2E8C
  c->r[21]=R32(c->r[1]+0x00000008u); // 801D2E90
  c->r[24]=(uint32_t)((int32_t)c->r[22]*(int32_t)1204); // 801D2E94
  c->r[3]=c->r[24]+c->r[21]; // 801D2E98
  c->r[0]=c->r[3]+0x00000003u; // 801D2E9C
  c->r[23]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2EA0
  c->r[0]=c->r[23]-c->r[30]; cr0(c,c->r[0]); // 801D2EA4
  if (!crb(c,1)) { goto L_801D2EB4; } // 801D2EA8
  c->r[0]=0u+0x00000000u; // 801D2EAC
  goto L_801D2F28; // 801D2EB0
L_801D2EB4:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D2EB4
  if (!crb(c,2)) { goto L_801D2ED8; } // 801D2EB8
  c->r[3]=0u+0x803A0000u; // 801D2EBC
  c->r[5]=0u+0x803A0000u; // 801D2EC0
  c->r[3]=c->r[3]+0x00001F80u; // 801D2EC4
  c->r[4]=0u+0x00000043u; // 801D2EC8
  c->r[5]=c->r[5]+0x00001F58u; // 801D2ECC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2ED0
  c->lr=0x801D2ED8u; f_80212260(c); // 801D2ED4
L_801D2ED8:;
  c->r[25]=c->r[26]+0x00000054u; // 801D2ED8
  c->r[3]=c->r[25]|c->r[25]; // 801D2EDC
  c->lr=0x801D2EE4u; f_80126DC0(c); // 801D2EE0
  c->r[4]=c->r[21]|c->r[21]; // 801D2EE4
  c->r[5]=c->r[24]|c->r[24]; // 801D2EE8
  c->r[3]=c->r[26]+0x00000044u; // 801D2EEC
  c->r[6]=0u+0x000004B4u; // 801D2EF0
  c->lr=0x801D2EF8u; f_801C5E30(c); // 801D2EF4
  c->r[24]=c->r[3]|c->r[3]; // 801D2EF8
  c->r[3]=c->r[25]|c->r[25]; // 801D2EFC
  c->lr=0x801D2F04u; f_80126EA0(c); // 801D2F00
  cmpu(c,0,c->r[24],c->r[22]); // 801D2F04
  if (crb(c,2)) { goto L_801D2F20; } // 801D2F08
  c->r[3]=c->r[31]+0x00000000u; // 801D2F0C
  c->r[5]=c->r[31]+0x000001A0u; // 801D2F10
  c->r[4]=0u+0x00000218u; // 801D2F14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2F18
  c->lr=0x801D2F20u; f_80212260(c); // 801D2F1C
L_801D2F20:;
  W32(c->r[1]+0x00000008u,c->r[23]); // 801D2F20
  c->r[0]=0u+0x00000001u; // 801D2F24
L_801D2F28:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2F28
  if (!crb(c,2)) { goto L_801D2F38; } // 801D2F2C
  c->r[3]=0u+0x00000000u; // 801D2F30
  goto L_801D3134; // 801D2F34
L_801D2F38:;
  c->r[23]=R32(c->r[1]+0x00000014u); // 801D2F38
  c->r[21]=R32(c->r[1]+0x00000008u); // 801D2F3C
  c->r[24]=(uint32_t)((int32_t)c->r[23]*(int32_t)4276); // 801D2F40
  c->r[3]=c->r[24]+c->r[21]; // 801D2F44
  c->r[0]=c->r[3]+0x00000003u; // 801D2F48
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2F4C
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 801D2F50
  if (!crb(c,1)) { goto L_801D2F60; } // 801D2F54
  c->r[0]=0u+0x00000000u; // 801D2F58
  goto L_801D2FD4; // 801D2F5C
L_801D2F60:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D2F60
  if (!crb(c,2)) { goto L_801D2F84; } // 801D2F64
  c->r[3]=0u+0x803A0000u; // 801D2F68
  c->r[5]=0u+0x803A0000u; // 801D2F6C
  c->r[3]=c->r[3]+0x00001F00u; // 801D2F70
  c->r[4]=0u+0x00000043u; // 801D2F74
  c->r[5]=c->r[5]+0x00001ED8u; // 801D2F78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2F7C
  c->lr=0x801D2F84u; f_80212260(c); // 801D2F80
L_801D2F84:;
  c->r[25]=c->r[26]+0x0000007Cu; // 801D2F84
  c->r[3]=c->r[25]|c->r[25]; // 801D2F88
  c->lr=0x801D2F90u; f_80126DC0(c); // 801D2F8C
  c->r[4]=c->r[21]|c->r[21]; // 801D2F90
  c->r[5]=c->r[24]|c->r[24]; // 801D2F94
  c->r[3]=c->r[26]+0x0000006Cu; // 801D2F98
  c->r[6]=0u+0x000010B4u; // 801D2F9C
  c->lr=0x801D2FA4u; f_801C5E30(c); // 801D2FA0
  c->r[24]=c->r[3]|c->r[3]; // 801D2FA4
  c->r[3]=c->r[25]|c->r[25]; // 801D2FA8
  c->lr=0x801D2FB0u; f_80126EA0(c); // 801D2FAC
  cmpu(c,0,c->r[24],c->r[23]); // 801D2FB0
  if (crb(c,2)) { goto L_801D2FCC; } // 801D2FB4
  c->r[3]=c->r[31]+0x00000000u; // 801D2FB8
  c->r[5]=c->r[31]+0x000001A0u; // 801D2FBC
  c->r[4]=0u+0x00000258u; // 801D2FC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D2FC4
  c->lr=0x801D2FCCu; f_80212260(c); // 801D2FC8
L_801D2FCC:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 801D2FCC
  c->r[0]=0u+0x00000001u; // 801D2FD0
L_801D2FD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D2FD4
  if (!crb(c,2)) { goto L_801D2FE4; } // 801D2FD8
  c->r[3]=0u+0x00000000u; // 801D2FDC
  goto L_801D3134; // 801D2FE0
L_801D2FE4:;
  c->r[23]=R32(c->r[1]+0x00000020u); // 801D2FE4
  c->r[21]=R32(c->r[1]+0x00000008u); // 801D2FE8
  c->r[25]=(uint32_t)((int32_t)c->r[23]*(int32_t)564); // 801D2FEC
  c->r[3]=c->r[25]+c->r[21]; // 801D2FF0
  c->r[0]=c->r[3]+0x00000003u; // 801D2FF4
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D2FF8
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 801D2FFC
  if (!crb(c,1)) { goto L_801D300C; } // 801D3000
  c->r[0]=0u+0x00000000u; // 801D3004
  goto L_801D3080; // 801D3008
L_801D300C:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D300C
  if (!crb(c,2)) { goto L_801D3030; } // 801D3010
  c->r[3]=0u+0x803A0000u; // 801D3014
  c->r[5]=0u+0x803A0000u; // 801D3018
  c->r[3]=c->r[3]+0x00001F40u; // 801D301C
  c->r[4]=0u+0x00000043u; // 801D3020
  c->r[5]=c->r[5]+0x00001F18u; // 801D3024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3028
  c->lr=0x801D3030u; f_80212260(c); // 801D302C
L_801D3030:;
  c->r[24]=c->r[26]+0x000000A4u; // 801D3030
  c->r[3]=c->r[24]|c->r[24]; // 801D3034
  c->lr=0x801D303Cu; f_80126DC0(c); // 801D3038
  c->r[4]=c->r[21]|c->r[21]; // 801D303C
  c->r[5]=c->r[25]|c->r[25]; // 801D3040
  c->r[3]=c->r[26]+0x00000094u; // 801D3044
  c->r[6]=0u+0x00000234u; // 801D3048
  c->lr=0x801D3050u; f_801C5E30(c); // 801D304C
  c->r[25]=c->r[3]|c->r[3]; // 801D3050
  c->r[3]=c->r[24]|c->r[24]; // 801D3054
  c->lr=0x801D305Cu; f_80126EA0(c); // 801D3058
  cmpu(c,0,c->r[25],c->r[23]); // 801D305C
  if (crb(c,2)) { goto L_801D3078; } // 801D3060
  c->r[3]=c->r[31]+0x00000000u; // 801D3064
  c->r[5]=c->r[31]+0x000001A0u; // 801D3068
  c->r[4]=0u+0x00000238u; // 801D306C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3070
  c->lr=0x801D3078u; f_80212260(c); // 801D3074
L_801D3078:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 801D3078
  c->r[0]=0u+0x00000001u; // 801D307C
L_801D3080:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D3080
  if (!crb(c,2)) { goto L_801D3090; } // 801D3084
  c->r[3]=0u+0x00000000u; // 801D3088
  goto L_801D3134; // 801D308C
L_801D3090:;
  c->r[23]=R32(c->r[1]+0x00000010u); // 801D3090
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D3094
  c->r[5]=(uint32_t)((int32_t)c->r[23]*(int32_t)208); // 801D3098
  c->r[3]=c->r[5]+c->r[4]; // 801D309C
  c->r[0]=c->r[3]+0x00000003u; // 801D30A0
  c->r[22]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D30A4
  c->r[0]=c->r[22]-c->r[30]; cr0(c,c->r[0]); // 801D30A8
  if (!crb(c,1)) { goto L_801D30B8; } // 801D30AC
  c->r[0]=0u+0x00000000u; // 801D30B0
  goto L_801D30E4; // 801D30B4
L_801D30B8:;
  c->r[3]=c->r[26]+0x000000BCu; // 801D30B8
  c->lr=0x801D30C0u; f_801C7BE0(c); // 801D30BC
  cmpu(c,0,c->r[3],c->r[23]); // 801D30C0
  if (crb(c,2)) { goto L_801D30DC; } // 801D30C4
  c->r[3]=c->r[31]+0x00000000u; // 801D30C8
  c->r[5]=c->r[31]+0x000001D0u; // 801D30CC
  c->r[4]=0u+0x00000278u; // 801D30D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D30D4
  c->lr=0x801D30DCu; f_80212260(c); // 801D30D8
L_801D30DC:;
  W32(c->r[1]+0x00000008u,c->r[22]); // 801D30DC
  c->r[0]=0u+0x00000001u; // 801D30E0
L_801D30E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D30E4
  if (!crb(c,2)) { goto L_801D30F4; } // 801D30E8
  c->r[3]=0u+0x00000000u; // 801D30EC
  goto L_801D3134; // 801D30F0
L_801D30F4:;
  c->r[3]=c->r[26]|c->r[26]; // 801D30F4
  c->r[4]=c->r[27]|c->r[27]; // 801D30F8
  c->lr=0x801D3100u; f_801D2A80(c); // 801D30FC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D3100
  c->r[0]=c->r[0]-c->r[28]; // 801D3104
  cmpu(c,0,c->r[0],c->r[3]); // 801D3108
  if (crb(c,2)) { goto L_801D3124; } // 801D310C
  c->r[3]=c->r[31]+0x00000000u; // 801D3110
  c->r[5]=c->r[31]+0x00000200u; // 801D3114
  c->r[4]=0u+0x0000015Fu; // 801D3118
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D311C
  c->lr=0x801D3124u; f_80212260(c); // 801D3120
L_801D3124:;
  W32(c->r[26]+0x00000010u,c->r[27]); // 801D3124
  c->r[3]=0u+0x00000001u; // 801D3128
  W32(c->r[26]+0x000000E4u,c->r[28]); // 801D312C
  W32(c->r[26]+0x000000E8u,c->r[29]); // 801D3130
L_801D3134:;
  c->r[11]=c->r[1]+0x00000060u; // 801D3134
  c->lr=0x801D313Cu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3138
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D313C
  c->lr=c->r[0]; // 801D3140
  c->r[1]=c->r[1]+0x00000060u; // 801D3144
  return; // 801D3148
}

// fn_801D3150
void f_801D3150(Ctx* __restrict c) {
  trace_call(0x801D3150u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3150
  c->r[0]=c->lr; // 801D3154
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3158
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D315C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3160
  c->r[30]=c->r[6]|c->r[6]; // 801D3164
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3168
  c->r[29]=c->r[5]|c->r[5]; // 801D316C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D3170
  c->r[28]=c->r[4]|c->r[4]; // 801D3174
  c->r[31]=R32(c->r[4]+0x00000000u); // 801D3178
  c->r[0]=c->r[31]+0x00000023u; // 801D317C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D3180
  c->r[0]=c->r[3]-c->r[5]; cr0(c,c->r[0]); // 801D3184
  if (!crb(c,1)) { goto L_801D3194; } // 801D3188
  c->r[3]=0u+0x00000000u; // 801D318C
  goto L_801D31FC; // 801D3190
L_801D3194:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D3194
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D3198
  if (crb(c,2)) { goto L_801D31AC; } // 801D319C
  c->r[3]=c->r[31]|c->r[31]; // 801D31A0
  c->lr=0x801D31A8u; f_801C7C40(c); // 801D31A4
  c->r[31]=c->r[3]|c->r[3]; // 801D31A8
L_801D31AC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801D31AC
  c->r[0]=c->r[3]+0x0000001Fu; // 801D31B0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801D31B4
  W32(c->r[28]+0x00000000u,c->r[4]); // 801D31B8
  c->r[3]=c->r[30]+c->r[4]; // 801D31BC
  c->r[0]=c->r[3]+0x00000003u; // 801D31C0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D31C4
  c->r[0]=c->r[3]-c->r[29]; cr0(c,c->r[0]); // 801D31C8
  if (!crb(c,1)) { goto L_801D31D8; } // 801D31CC
  c->r[3]=0u+0x00000000u; // 801D31D0
  goto L_801D31FC; // 801D31D4
L_801D31D8:;
  W32(c->r[28]+0x00000000u,c->r[3]); // 801D31D8
  c->r[3]=c->r[31]|c->r[31]; // 801D31DC
  c->r[5]=c->r[30]|c->r[30]; // 801D31E0
  c->lr=0x801D31E8u; f_801C7D80(c); // 801D31E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D31E8
  if (crb(c,2)) { goto L_801D31F8; } // 801D31EC
  c->r[3]=c->r[31]|c->r[31]; // 801D31F0
  goto L_801D31FC; // 801D31F4
L_801D31F8:;
  c->r[3]=0u+0x00000000u; // 801D31F8
L_801D31FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D31FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3200
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3204
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3208
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D320C
  c->lr=c->r[0]; // 801D3210
  c->r[1]=c->r[1]+0x00000020u; // 801D3214
  return; // 801D3218
}

// fn_801D3220
void f_801D3220(Ctx* __restrict c) {
  trace_call(0x801D3220u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3220
  c->r[0]=c->lr; // 801D3224
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D3228
  c->r[11]=c->r[1]+0x00000040u; // 801D322C
  c->lr=0x801D3234u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3230
  c->r[29]=c->r[4]|c->r[4]; // 801D3234
  c->r[28]=c->r[3]|c->r[3]; // 801D3238
  c->r[30]=c->r[5]|c->r[5]; // 801D323C
  c->r[31]=c->r[6]|c->r[6]; // 801D3240
  c->r[3]=c->r[29]|c->r[29]; // 801D3244
  c->lr=0x801D324Cu; f_801CFE00(c); // 801D3248
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 801D324C
  c->r[24]=R32(c->r[30]+0x00000000u); // 801D3250
  c->r[25]=c->r[3]|c->r[3]; // 801D3254
  c->r[4]=c->r[0]+c->r[24]; // 801D3258
  c->r[0]=c->r[4]+0x00000003u; // 801D325C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801D3260
  c->r[0]=c->r[4]-c->r[31]; cr0(c,c->r[0]); // 801D3264
  if (!crb(c,1)) { goto L_801D3274; } // 801D3268
  c->r[3]=0u+0x00000000u; // 801D326C
  goto L_801D3360; // 801D3270
L_801D3274:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801D3274
  c->r[23]=0u+0x00000000u; // 801D3278
  c->r[26]=0u+0x803A0000u; // 801D327C
  c->r[27]=0u+0x803A0000u; // 801D3280
  W32(c->r[28]+0x00000040u,c->r[24]); // 801D3284
  W32(c->r[28]+0x0000003Cu,c->r[3]); // 801D3288
  goto L_801D3354; // 801D328C
L_801D3290:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D3290
  c->r[22]=c->r[24]|c->r[24]; // 801D3294
  if (crb(c,2)) { goto L_801D32A8; } // 801D3298
  c->r[3]=c->r[24]|c->r[24]; // 801D329C
  c->lr=0x801D32A4u; f_801D6180(c); // 801D32A0
  c->r[22]=c->r[3]|c->r[3]; // 801D32A4
L_801D32A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801D32A8
  c->r[4]=c->r[23]|c->r[23]; // 801D32AC
  c->r[5]=c->r[1]+0x00000008u; // 801D32B0
  c->lr=0x801D32B8u; f_801CFE90(c); // 801D32B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D32B8
  if (crb(c,2)) { goto L_801D334C; } // 801D32BC
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D32C0
  c->r[3]=c->r[22]|c->r[22]; // 801D32C4
  c->lr=0x801D32CCu; f_801D6B90(c); // 801D32C8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D32CC
  cmps(c,0,(int32_t)c->r[0],0); // 801D32D0
  if (crb(c,2)) { goto L_801D334C; } // 801D32D4
  c->r[21]=0u+0x00000000u; // 801D32D8
  goto L_801D3338; // 801D32DC
L_801D32E0:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801D32E0
  c->r[3]=c->r[28]|c->r[28]; // 801D32E4
  c->r[4]=c->r[30]|c->r[30]; // 801D32E8
  c->r[5]=c->r[31]|c->r[31]; // 801D32EC
  c->lr=0x801D32F4u; f_801D3150(c); // 801D32F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D32F4
  c->r[20]=c->r[3]|c->r[3]; // 801D32F8
  if (!crb(c,2)) { goto L_801D3318; } // 801D32FC
  c->r[6]=c->r[23]|c->r[23]; // 801D3300
  c->r[3]=c->r[26]+0x00001080u; // 801D3304
  c->r[5]=c->r[27]+0x000012E8u; // 801D3308
  c->r[4]=0u+0x000001BAu; // 801D330C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3310
  c->lr=0x801D3318u; f_80212300(c); // 801D3314
L_801D3318:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D3318
  if (!crb(c,2)) { goto L_801D3328; } // 801D331C
  c->r[3]=0u+0x00000000u; // 801D3320
  goto L_801D3360; // 801D3324
L_801D3328:;
  c->r[3]=c->r[22]|c->r[22]; // 801D3328
  c->r[4]=c->r[20]|c->r[20]; // 801D332C
  c->lr=0x801D3334u; f_801D6EB0(c); // 801D3330
  c->r[21]=c->r[21]+0x00000001u; // 801D3334
L_801D3338:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D3338
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[4]); // 801D333C
  if (crb(c,0)) { IRQCHK(c); goto L_801D32E0; } // 801D3340
  c->r[3]=c->r[22]|c->r[22]; // 801D3344
  c->lr=0x801D334Cu; f_801D6D00(c); // 801D3348
L_801D334C:;
  c->r[23]=c->r[23]+0x00000001u; // 801D334C
  c->r[24]=c->r[24]+0x00000064u; // 801D3350
L_801D3354:;
  cmpu(c,0,c->r[23],c->r[25]); // 801D3354
  if (crb(c,0)) { IRQCHK(c); goto L_801D3290; } // 801D3358
  c->r[3]=0u+0x00000001u; // 801D335C
L_801D3360:;
  c->r[11]=c->r[1]+0x00000040u; // 801D3360
  c->lr=0x801D3368u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3364
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D3368
  c->lr=c->r[0]; // 801D336C
  c->r[1]=c->r[1]+0x00000040u; // 801D3370
  return; // 801D3374
}

// fn_801D3380
void f_801D3380(Ctx* __restrict c) {
  trace_call(0x801D3380u);
  {uint32_t ea=c->r[1]+0xFFFFED90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3380
  c->r[0]=c->lr; // 801D3384
  W32(c->r[1]+0x00001274u,c->r[0]); // 801D3388
  c->r[11]=c->r[1]+0x00001270u; // 801D338C
  c->lr=0x801D3394u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3390
  c->r[31]=c->r[3]|c->r[3]; // 801D3394
  c->r[19]=0u+0x00000000u; // 801D3398
  c->r[18]=0u+0x00000000u; // 801D339C
  c->r[21]=0u+0x803A0000u; // 801D33A0
  c->r[20]=0u+0x803A0000u; // 801D33A4
  goto L_801D33E4; // 801D33A8
L_801D33AC:;
  cmpu(c,0,c->r[19],c->r[8]); // 801D33AC
  if (crb(c,0)) { goto L_801D33D0; } // 801D33B0
  c->r[6]=c->r[19]|c->r[19]; // 801D33B4
  c->r[3]=c->r[21]+0x00001080u; // 801D33B8
  c->r[5]=c->r[20]+0x0000131Cu; // 801D33BC
  c->r[4]=0u+0x000002B9u; // 801D33C0
  c->r[7]=0u+0x00000000u; // 801D33C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D33C8
  c->lr=0x801D33D0u; f_80212260(c); // 801D33CC
L_801D33D0:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 801D33D0
  c->r[3]=c->r[0]+c->r[18]; // 801D33D4
  c->lr=0x801D33DCu; f_801D6290(c); // 801D33D8
  c->r[18]=c->r[18]+0x00000064u; // 801D33DC
  c->r[19]=c->r[19]+0x00000001u; // 801D33E0
L_801D33E4:;
  c->r[8]=R32(c->r[31]+0x0000003Cu); // 801D33E4
  cmpu(c,0,c->r[19],c->r[8]); // 801D33E8
  if (crb(c,0)) { IRQCHK(c); goto L_801D33AC; } // 801D33EC
  c->r[0]=R32(c->r[31]+0x00000048u); // 801D33F0
  cmpu(c,0,c->r[0],0x00000002u); // 801D33F4
  if (crb(c,0)) { goto L_801D363C; } // 801D33F8
  c->r[30]=c->r[31]+0x00000054u; // 801D33FC
  c->r[3]=c->r[30]|c->r[30]; // 801D3400
  c->lr=0x801D3408u; f_80126DC0(c); // 801D3404
  c->r[4]=0u+0x801D0000u; // 801D3408
  c->r[5]=0u+0x801D0000u; // 801D340C
  c->r[3]=c->r[1]+0x00000C38u; // 801D3410
  c->r[6]=0u+0x0000000Cu; // 801D3414
  c->r[4]=c->r[4]+0x00002630u; // 801D3418
  c->r[5]=c->r[5]+0x00002650u; // 801D341C
  c->r[7]=0u+0x00000080u; // 801D3420
  c->lr=0x801D3428u; f_802E66A0(c); // 801D3424
  c->r[29]=0u+0x803A0000u; // 801D3428
  c->r[28]=0u+0x803A0000u; // 801D342C
  c->r[27]=0u+0x803A0000u; // 801D3430
  c->r[26]=0u+0x803A0000u; // 801D3434
  c->r[25]=0u+0x803A0000u; // 801D3438
  c->r[24]=0u+0x803A0000u; // 801D343C
  c->r[21]=0u+0x803A0000u; // 801D3440
  c->r[20]=0u+0x803A0000u; // 801D3444
  goto L_801D351C; // 801D3448
L_801D344C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D344C
  if (!crb(c,2)) { goto L_801D3468; } // 801D3450
  c->r[3]=c->r[29]+0x00001ECCu; // 801D3454
  c->r[5]=c->r[28]+0x00001EA8u; // 801D3458
  c->r[4]=0u+0x000001F1u; // 801D345C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3460
  c->lr=0x801D3468u; f_80212260(c); // 801D3464
L_801D3468:;
  c->r[22]=R32(c->r[31]+0x0000004Cu); // 801D3468
  cmps(c,0,(int32_t)c->r[22],0); // 801D346C
  if (!crb(c,2)) { goto L_801D3488; } // 801D3470
  c->r[3]=c->r[27]+0xFFFFFFACu; // 801D3474
  c->r[5]=c->r[26]+0xFFFFFF88u; // 801D3478
  c->r[4]=0u+0x0000023Du; // 801D347C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3480
  c->lr=0x801D3488u; f_80212260(c); // 801D3484
L_801D3488:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 801D3488
  if (!crb(c,2)) { goto L_801D34A4; } // 801D348C
  c->r[3]=c->r[25]+0x00001E9Cu; // 801D3490
  c->r[5]=c->r[24]+0x00001E78u; // 801D3494
  c->r[4]=0u+0x00000193u; // 801D3498
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D349C
  c->lr=0x801D34A4u; f_80212260(c); // 801D34A0
L_801D34A4:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 801D34A4
  c->r[3]=c->r[31]+0x00000048u; // 801D34A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D34AC
  c->r[4]=c->r[1]+0x00000028u; // 801D34B0
  c->lr=0x801D34B8u; f_801E4260(c); // 801D34B4
  c->r[3]=R8(c->r[23]+0x00000098u); // 801D34B8
  c->r[0]=R32(c->r[23]+0x00000050u); // 801D34BC
  c->r[3]=c->r[3]+c->r[0]; // 801D34C0
  cmps(c,0,(int32_t)c->r[3],127); // 801D34C4
  if (!crb(c,1)) { goto L_801D34D4; } // 801D34C8
  c->r[0]=0u+0x0000007Fu; // 801D34CC
  goto L_801D34DC; // 801D34D0
L_801D34D4:;
  c->r[0]=sraw(c,c->r[3],31); // 801D34D4
  c->r[0]=c->r[3]&~c->r[0]; // 801D34D8
L_801D34DC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D34DC
  c->r[19]=c->r[1]+0x00000C38u; // 801D34E0
  cmps(c,0,(int32_t)c->r[23],0); // 801D34E4
  c->r[19]=c->r[19]+c->r[0]; // 801D34E8
  c->r[22]=c->r[19]+0x00000004u; // 801D34EC
  if (!crb(c,2)) { goto L_801D3508; } // 801D34F0
  c->r[3]=c->r[21]+0xFFFFFFDCu; // 801D34F4
  c->r[5]=c->r[20]+0xFFFFFFB8u; // 801D34F8
  c->r[4]=0u+0x00000233u; // 801D34FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3500
  c->lr=0x801D3508u; f_80212260(c); // 801D3504
L_801D3508:;
  W32(c->r[1]+0x0000002Cu,c->r[22]); // 801D3508
  c->r[3]=c->r[19]|c->r[19]; // 801D350C
  c->r[4]=c->r[1]+0x0000002Cu; // 801D3510
  c->r[5]=c->r[23]+0x000000F0u; // 801D3514
  c->lr=0x801D351Cu; f_801E44B0(c); // 801D3518
L_801D351C:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 801D351C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3520
  if (!crb(c,2)) { IRQCHK(c); goto L_801D344C; } // 801D3524
  c->r[18]=c->r[1]+0x00000C38u; // 801D3528
  c->r[19]=0u+0x00000000u; // 801D352C
  c->r[29]=0u+0x803A0000u; // 801D3530
  c->r[28]=0u+0x803A0000u; // 801D3534
  c->r[26]=0u+0x803A0000u; // 801D3538
  c->r[25]=0u+0x803A0000u; // 801D353C
  c->r[24]=0u+0x803A0000u; // 801D3540
  c->r[22]=0u+0x803A0000u; // 801D3544
  c->r[21]=0u+0x803A0000u; // 801D3548
  c->r[20]=0u+0x803A0000u; // 801D354C
L_801D3550:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801D3550
  cmps(c,0,(int32_t)c->r[0],0); // 801D3554
  if (crb(c,2)) { goto L_801D360C; } // 801D3558
  c->r[23]=c->r[31]+0x0000004Cu; // 801D355C
  goto L_801D3600; // 801D3560
L_801D3564:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D3564
  if (!crb(c,2)) { goto L_801D3580; } // 801D3568
  c->r[3]=c->r[29]+0x00001ECCu; // 801D356C
  c->r[5]=c->r[28]+0x00001EA8u; // 801D3570
  c->r[4]=0u+0x000001F1u; // 801D3574
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3578
  c->lr=0x801D3580u; f_80212260(c); // 801D357C
L_801D3580:;
  c->r[27]=R32(c->r[18]+0x00000004u); // 801D3580
  cmps(c,0,(int32_t)c->r[27],0); // 801D3584
  if (!crb(c,2)) { goto L_801D35A0; } // 801D3588
  c->r[3]=c->r[26]+0xFFFFFFACu; // 801D358C
  c->r[5]=c->r[25]+0xFFFFFF88u; // 801D3590
  c->r[4]=0u+0x0000023Du; // 801D3594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3598
  c->lr=0x801D35A0u; f_80212260(c); // 801D359C
L_801D35A0:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF10u,0); cr0(c,c->r[27]); // 801D35A0
  if (!crb(c,2)) { goto L_801D35BC; } // 801D35A4
  c->r[3]=c->r[24]+0x00001E9Cu; // 801D35A8
  c->r[5]=c->r[22]+0x00001E78u; // 801D35AC
  c->r[4]=0u+0x00000193u; // 801D35B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D35B4
  c->lr=0x801D35BCu; f_80212260(c); // 801D35B8
L_801D35BC:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801D35BC
  c->r[3]=c->r[18]|c->r[18]; // 801D35C0
  W32(c->r[1]+0x00000030u,c->r[0]); // 801D35C4
  c->r[4]=c->r[1]+0x00000030u; // 801D35C8
  c->lr=0x801D35D0u; f_801E4260(c); // 801D35CC
  cmps(c,0,(int32_t)c->r[27],0); // 801D35D0
  if (!crb(c,2)) { goto L_801D35EC; } // 801D35D4
  c->r[3]=c->r[21]+0xFFFFFFDCu; // 801D35D8
  c->r[5]=c->r[20]+0xFFFFFFB8u; // 801D35DC
  c->r[4]=0u+0x00000233u; // 801D35E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D35E4
  c->lr=0x801D35ECu; f_80212260(c); // 801D35E8
L_801D35EC:;
  W32(c->r[1]+0x00000034u,c->r[23]); // 801D35EC
  c->r[3]=c->r[31]+0x00000048u; // 801D35F0
  c->r[4]=c->r[1]+0x00000034u; // 801D35F4
  c->r[5]=c->r[27]+0x000000F0u; // 801D35F8
  c->lr=0x801D3600u; f_801E44B0(c); // 801D35FC
L_801D3600:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801D3600
  cmps(c,0,(int32_t)c->r[0],0); // 801D3604
  if (!crb(c,2)) { IRQCHK(c); goto L_801D3564; } // 801D3608
L_801D360C:;
  c->r[19]=c->r[19]+0x00000001u; // 801D360C
  c->r[18]=c->r[18]+0x0000000Cu; // 801D3610
  cmps(c,0,(int32_t)c->r[19],128); // 801D3614
  if (crb(c,0)) { IRQCHK(c); goto L_801D3550; } // 801D3618
  c->r[4]=0u+0x801D0000u; // 801D361C
  c->r[3]=c->r[1]+0x00000C38u; // 801D3620
  c->r[4]=c->r[4]+0x00002650u; // 801D3624
  c->r[5]=0u+0x0000000Cu; // 801D3628
  c->r[6]=0u+0x00000080u; // 801D362C
  c->lr=0x801D3634u; f_802E6798(c); // 801D3630
  c->r[3]=c->r[30]|c->r[30]; // 801D3634
  c->lr=0x801D363Cu; f_80126EA0(c); // 801D3638
L_801D363C:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801D363C
  cmpu(c,0,c->r[0],0x00000002u); // 801D3640
  if (crb(c,0)) { goto L_801D3888; } // 801D3644
  c->r[30]=c->r[31]+0x0000007Cu; // 801D3648
  c->r[3]=c->r[30]|c->r[30]; // 801D364C
  c->lr=0x801D3654u; f_80126DC0(c); // 801D3650
  c->r[4]=0u+0x801D0000u; // 801D3654
  c->r[5]=0u+0x801D0000u; // 801D3658
  c->r[3]=c->r[1]+0x00000638u; // 801D365C
  c->r[6]=0u+0x0000000Cu; // 801D3660
  c->r[4]=c->r[4]+0x000026B0u; // 801D3664
  c->r[5]=c->r[5]+0x000026D0u; // 801D3668
  c->r[7]=0u+0x00000080u; // 801D366C
  c->lr=0x801D3674u; f_802E66A0(c); // 801D3670
  c->r[29]=0u+0x803A0000u; // 801D3674
  c->r[28]=0u+0x803A0000u; // 801D3678
  c->r[27]=0u+0x803A0000u; // 801D367C
  c->r[26]=0u+0x803A0000u; // 801D3680
  c->r[25]=0u+0x803A0000u; // 801D3684
  c->r[24]=0u+0x803A0000u; // 801D3688
  c->r[21]=0u+0x803A0000u; // 801D368C
  c->r[20]=0u+0x803A0000u; // 801D3690
  goto L_801D3768; // 801D3694
L_801D3698:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D3698
  if (!crb(c,2)) { goto L_801D36B4; } // 801D369C
  c->r[3]=c->r[29]+0x00001E0Cu; // 801D36A0
  c->r[5]=c->r[28]+0x00001DE8u; // 801D36A4
  c->r[4]=0u+0x000001F1u; // 801D36A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D36AC
  c->lr=0x801D36B4u; f_80212260(c); // 801D36B0
L_801D36B4:;
  c->r[22]=R32(c->r[31]+0x00000074u); // 801D36B4
  cmps(c,0,(int32_t)c->r[22],0); // 801D36B8
  if (!crb(c,2)) { goto L_801D36D4; } // 801D36BC
  c->r[3]=c->r[27]+0x00001DACu; // 801D36C0
  c->r[5]=c->r[26]+0x00001D88u; // 801D36C4
  c->r[4]=0u+0x0000023Du; // 801D36C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D36CC
  c->lr=0x801D36D4u; f_80212260(c); // 801D36D0
L_801D36D4:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 801D36D4
  if (!crb(c,2)) { goto L_801D36F0; } // 801D36D8
  c->r[3]=c->r[25]+0x00001DDCu; // 801D36DC
  c->r[5]=c->r[24]+0x00001DB8u; // 801D36E0
  c->r[4]=0u+0x00000193u; // 801D36E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D36E8
  c->lr=0x801D36F0u; f_80212260(c); // 801D36EC
L_801D36F0:;
  c->r[0]=R32(c->r[31]+0x00000074u); // 801D36F0
  c->r[3]=c->r[31]+0x00000070u; // 801D36F4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D36F8
  c->r[4]=c->r[1]+0x00000018u; // 801D36FC
  c->lr=0x801D3704u; f_801E4260(c); // 801D3700
  c->r[3]=R8(c->r[23]+0x00000098u); // 801D3704
  c->r[0]=R32(c->r[23]+0x00000050u); // 801D3708
  c->r[3]=c->r[3]+c->r[0]; // 801D370C
  cmps(c,0,(int32_t)c->r[3],127); // 801D3710
  if (!crb(c,1)) { goto L_801D3720; } // 801D3714
  c->r[0]=0u+0x0000007Fu; // 801D3718
  goto L_801D3728; // 801D371C
L_801D3720:;
  c->r[0]=sraw(c,c->r[3],31); // 801D3720
  c->r[0]=c->r[3]&~c->r[0]; // 801D3724
L_801D3728:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D3728
  c->r[19]=c->r[1]+0x00000638u; // 801D372C
  cmps(c,0,(int32_t)c->r[23],0); // 801D3730
  c->r[19]=c->r[19]+c->r[0]; // 801D3734
  c->r[22]=c->r[19]+0x00000004u; // 801D3738
  if (!crb(c,2)) { goto L_801D3754; } // 801D373C
  c->r[3]=c->r[21]+0x00001D7Cu; // 801D3740
  c->r[5]=c->r[20]+0x00001D58u; // 801D3744
  c->r[4]=0u+0x00000233u; // 801D3748
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D374C
  c->lr=0x801D3754u; f_80212260(c); // 801D3750
L_801D3754:;
  W32(c->r[1]+0x0000001Cu,c->r[22]); // 801D3754
  c->r[3]=c->r[19]|c->r[19]; // 801D3758
  c->r[4]=c->r[1]+0x0000001Cu; // 801D375C
  c->r[5]=c->r[23]+0x000000F0u; // 801D3760
  c->lr=0x801D3768u; f_801E44B0(c); // 801D3764
L_801D3768:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 801D3768
  cmps(c,0,(int32_t)c->r[0],0); // 801D376C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D3698; } // 801D3770
  c->r[18]=c->r[1]+0x00000638u; // 801D3774
  c->r[19]=0u+0x00000000u; // 801D3778
  c->r[29]=0u+0x803A0000u; // 801D377C
  c->r[28]=0u+0x803A0000u; // 801D3780
  c->r[26]=0u+0x803A0000u; // 801D3784
  c->r[25]=0u+0x803A0000u; // 801D3788
  c->r[24]=0u+0x803A0000u; // 801D378C
  c->r[22]=0u+0x803A0000u; // 801D3790
  c->r[21]=0u+0x803A0000u; // 801D3794
  c->r[20]=0u+0x803A0000u; // 801D3798
L_801D379C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801D379C
  cmps(c,0,(int32_t)c->r[0],0); // 801D37A0
  if (crb(c,2)) { goto L_801D3858; } // 801D37A4
  c->r[23]=c->r[31]+0x00000074u; // 801D37A8
  goto L_801D384C; // 801D37AC
L_801D37B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D37B0
  if (!crb(c,2)) { goto L_801D37CC; } // 801D37B4
  c->r[3]=c->r[29]+0x00001E0Cu; // 801D37B8
  c->r[5]=c->r[28]+0x00001DE8u; // 801D37BC
  c->r[4]=0u+0x000001F1u; // 801D37C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D37C4
  c->lr=0x801D37CCu; f_80212260(c); // 801D37C8
L_801D37CC:;
  c->r[27]=R32(c->r[18]+0x00000004u); // 801D37CC
  cmps(c,0,(int32_t)c->r[27],0); // 801D37D0
  if (!crb(c,2)) { goto L_801D37EC; } // 801D37D4
  c->r[3]=c->r[26]+0x00001DACu; // 801D37D8
  c->r[5]=c->r[25]+0x00001D88u; // 801D37DC
  c->r[4]=0u+0x0000023Du; // 801D37E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D37E4
  c->lr=0x801D37ECu; f_80212260(c); // 801D37E8
L_801D37EC:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF10u,0); cr0(c,c->r[27]); // 801D37EC
  if (!crb(c,2)) { goto L_801D3808; } // 801D37F0
  c->r[3]=c->r[24]+0x00001DDCu; // 801D37F4
  c->r[5]=c->r[22]+0x00001DB8u; // 801D37F8
  c->r[4]=0u+0x00000193u; // 801D37FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3800
  c->lr=0x801D3808u; f_80212260(c); // 801D3804
L_801D3808:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801D3808
  c->r[3]=c->r[18]|c->r[18]; // 801D380C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D3810
  c->r[4]=c->r[1]+0x00000020u; // 801D3814
  c->lr=0x801D381Cu; f_801E4260(c); // 801D3818
  cmps(c,0,(int32_t)c->r[27],0); // 801D381C
  if (!crb(c,2)) { goto L_801D3838; } // 801D3820
  c->r[3]=c->r[21]+0x00001D7Cu; // 801D3824
  c->r[5]=c->r[20]+0x00001D58u; // 801D3828
  c->r[4]=0u+0x00000233u; // 801D382C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3830
  c->lr=0x801D3838u; f_80212260(c); // 801D3834
L_801D3838:;
  W32(c->r[1]+0x00000024u,c->r[23]); // 801D3838
  c->r[3]=c->r[31]+0x00000070u; // 801D383C
  c->r[4]=c->r[1]+0x00000024u; // 801D3840
  c->r[5]=c->r[27]+0x000000F0u; // 801D3844
  c->lr=0x801D384Cu; f_801E44B0(c); // 801D3848
L_801D384C:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801D384C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3850
  if (!crb(c,2)) { IRQCHK(c); goto L_801D37B0; } // 801D3854
L_801D3858:;
  c->r[19]=c->r[19]+0x00000001u; // 801D3858
  c->r[18]=c->r[18]+0x0000000Cu; // 801D385C
  cmps(c,0,(int32_t)c->r[19],128); // 801D3860
  if (crb(c,0)) { IRQCHK(c); goto L_801D379C; } // 801D3864
  c->r[4]=0u+0x801D0000u; // 801D3868
  c->r[3]=c->r[1]+0x00000638u; // 801D386C
  c->r[4]=c->r[4]+0x000026D0u; // 801D3870
  c->r[5]=0u+0x0000000Cu; // 801D3874
  c->r[6]=0u+0x00000080u; // 801D3878
  c->lr=0x801D3880u; f_802E6798(c); // 801D387C
  c->r[3]=c->r[30]|c->r[30]; // 801D3880
  c->lr=0x801D3888u; f_80126EA0(c); // 801D3884
L_801D3888:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 801D3888
  cmpu(c,0,c->r[0],0x00000002u); // 801D388C
  if (crb(c,0)) { goto L_801D3AD4; } // 801D3890
  c->r[24]=c->r[31]+0x000000A4u; // 801D3894
  c->r[3]=c->r[24]|c->r[24]; // 801D3898
  c->lr=0x801D38A0u; f_80126DC0(c); // 801D389C
  c->r[4]=0u+0x801D0000u; // 801D38A0
  c->r[5]=0u+0x801D0000u; // 801D38A4
  c->r[3]=c->r[1]+0x00000038u; // 801D38A8
  c->r[6]=0u+0x0000000Cu; // 801D38AC
  c->r[4]=c->r[4]+0x00002730u; // 801D38B0
  c->r[5]=c->r[5]+0x00002750u; // 801D38B4
  c->r[7]=0u+0x00000080u; // 801D38B8
  c->lr=0x801D38C0u; f_802E66A0(c); // 801D38BC
  c->r[25]=0u+0x803A0000u; // 801D38C0
  c->r[26]=0u+0x803A0000u; // 801D38C4
  c->r[27]=0u+0x803A0000u; // 801D38C8
  c->r[28]=0u+0x803A0000u; // 801D38CC
  c->r[29]=0u+0x803A0000u; // 801D38D0
  c->r[30]=0u+0x803A0000u; // 801D38D4
  c->r[21]=0u+0x803A0000u; // 801D38D8
  c->r[20]=0u+0x803A0000u; // 801D38DC
  goto L_801D39B4; // 801D38E0
L_801D38E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D38E4
  if (!crb(c,2)) { goto L_801D3900; } // 801D38E8
  c->r[3]=c->r[25]+0x00001D4Cu; // 801D38EC
  c->r[5]=c->r[26]+0x00001D28u; // 801D38F0
  c->r[4]=0u+0x000001F1u; // 801D38F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D38F8
  c->lr=0x801D3900u; f_80212260(c); // 801D38FC
L_801D3900:;
  c->r[22]=R32(c->r[31]+0x0000009Cu); // 801D3900
  cmps(c,0,(int32_t)c->r[22],0); // 801D3904
  if (!crb(c,2)) { goto L_801D3920; } // 801D3908
  c->r[3]=c->r[27]+0x00001CECu; // 801D390C
  c->r[5]=c->r[28]+0x00001CC8u; // 801D3910
  c->r[4]=0u+0x0000023Du; // 801D3914
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3918
  c->lr=0x801D3920u; f_80212260(c); // 801D391C
L_801D3920:;
  c->r[23]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[23]); // 801D3920
  if (!crb(c,2)) { goto L_801D393C; } // 801D3924
  c->r[3]=c->r[29]+0x00001D1Cu; // 801D3928
  c->r[5]=c->r[30]+0x00001CF8u; // 801D392C
  c->r[4]=0u+0x00000193u; // 801D3930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3934
  c->lr=0x801D393Cu; f_80212260(c); // 801D3938
L_801D393C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 801D393C
  c->r[3]=c->r[31]+0x00000098u; // 801D3940
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D3944
  c->r[4]=c->r[1]+0x00000008u; // 801D3948
  c->lr=0x801D3950u; f_801E4260(c); // 801D394C
  c->r[3]=R8(c->r[23]+0x00000098u); // 801D3950
  c->r[0]=R32(c->r[23]+0x00000050u); // 801D3954
  c->r[3]=c->r[3]+c->r[0]; // 801D3958
  cmps(c,0,(int32_t)c->r[3],127); // 801D395C
  if (!crb(c,1)) { goto L_801D396C; } // 801D3960
  c->r[0]=0u+0x0000007Fu; // 801D3964
  goto L_801D3974; // 801D3968
L_801D396C:;
  c->r[0]=sraw(c,c->r[3],31); // 801D396C
  c->r[0]=c->r[3]&~c->r[0]; // 801D3970
L_801D3974:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D3974
  c->r[19]=c->r[1]+0x00000038u; // 801D3978
  cmps(c,0,(int32_t)c->r[23],0); // 801D397C
  c->r[19]=c->r[19]+c->r[0]; // 801D3980
  c->r[22]=c->r[19]+0x00000004u; // 801D3984
  if (!crb(c,2)) { goto L_801D39A0; } // 801D3988
  c->r[3]=c->r[21]+0x00001CBCu; // 801D398C
  c->r[5]=c->r[20]+0x00001C98u; // 801D3990
  c->r[4]=0u+0x00000233u; // 801D3994
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3998
  c->lr=0x801D39A0u; f_80212260(c); // 801D399C
L_801D39A0:;
  W32(c->r[1]+0x0000000Cu,c->r[22]); // 801D39A0
  c->r[3]=c->r[19]|c->r[19]; // 801D39A4
  c->r[4]=c->r[1]+0x0000000Cu; // 801D39A8
  c->r[5]=c->r[23]+0x000000F0u; // 801D39AC
  c->lr=0x801D39B4u; f_801E44B0(c); // 801D39B0
L_801D39B4:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 801D39B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D39B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D38E4; } // 801D39BC
  c->r[18]=c->r[1]+0x00000038u; // 801D39C0
  c->r[19]=0u+0x00000000u; // 801D39C4
  c->r[20]=0u+0x803A0000u; // 801D39C8
  c->r[21]=0u+0x803A0000u; // 801D39CC
  c->r[30]=0u+0x803A0000u; // 801D39D0
  c->r[29]=0u+0x803A0000u; // 801D39D4
  c->r[28]=0u+0x803A0000u; // 801D39D8
  c->r[27]=0u+0x803A0000u; // 801D39DC
  c->r[26]=0u+0x803A0000u; // 801D39E0
  c->r[25]=0u+0x803A0000u; // 801D39E4
L_801D39E8:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801D39E8
  cmps(c,0,(int32_t)c->r[0],0); // 801D39EC
  if (crb(c,2)) { goto L_801D3AA4; } // 801D39F0
  c->r[23]=c->r[31]+0x0000009Cu; // 801D39F4
  goto L_801D3A98; // 801D39F8
L_801D39FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D39FC
  if (!crb(c,2)) { goto L_801D3A18; } // 801D3A00
  c->r[3]=c->r[20]+0x00001D4Cu; // 801D3A04
  c->r[5]=c->r[21]+0x00001D28u; // 801D3A08
  c->r[4]=0u+0x000001F1u; // 801D3A0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3A10
  c->lr=0x801D3A18u; f_80212260(c); // 801D3A14
L_801D3A18:;
  c->r[22]=R32(c->r[18]+0x00000004u); // 801D3A18
  cmps(c,0,(int32_t)c->r[22],0); // 801D3A1C
  if (!crb(c,2)) { goto L_801D3A38; } // 801D3A20
  c->r[3]=c->r[30]+0x00001CECu; // 801D3A24
  c->r[5]=c->r[29]+0x00001CC8u; // 801D3A28
  c->r[4]=0u+0x0000023Du; // 801D3A2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3A30
  c->lr=0x801D3A38u; f_80212260(c); // 801D3A34
L_801D3A38:;
  c->r[22]=addc(c,c->r[22],0xFFFFFF10u,0); cr0(c,c->r[22]); // 801D3A38
  if (!crb(c,2)) { goto L_801D3A54; } // 801D3A3C
  c->r[3]=c->r[28]+0x00001D1Cu; // 801D3A40
  c->r[5]=c->r[27]+0x00001CF8u; // 801D3A44
  c->r[4]=0u+0x00000193u; // 801D3A48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3A4C
  c->lr=0x801D3A54u; f_80212260(c); // 801D3A50
L_801D3A54:;
  c->r[0]=R32(c->r[18]+0x00000004u); // 801D3A54
  c->r[3]=c->r[18]|c->r[18]; // 801D3A58
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D3A5C
  c->r[4]=c->r[1]+0x00000010u; // 801D3A60
  c->lr=0x801D3A68u; f_801E4260(c); // 801D3A64
  cmps(c,0,(int32_t)c->r[22],0); // 801D3A68
  if (!crb(c,2)) { goto L_801D3A84; } // 801D3A6C
  c->r[3]=c->r[26]+0x00001CBCu; // 801D3A70
  c->r[5]=c->r[25]+0x00001C98u; // 801D3A74
  c->r[4]=0u+0x00000233u; // 801D3A78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3A7C
  c->lr=0x801D3A84u; f_80212260(c); // 801D3A80
L_801D3A84:;
  W32(c->r[1]+0x00000014u,c->r[23]); // 801D3A84
  c->r[3]=c->r[31]+0x00000098u; // 801D3A88
  c->r[4]=c->r[1]+0x00000014u; // 801D3A8C
  c->r[5]=c->r[22]+0x000000F0u; // 801D3A90
  c->lr=0x801D3A98u; f_801E44B0(c); // 801D3A94
L_801D3A98:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 801D3A98
  cmps(c,0,(int32_t)c->r[0],0); // 801D3A9C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D39FC; } // 801D3AA0
L_801D3AA4:;
  c->r[19]=c->r[19]+0x00000001u; // 801D3AA4
  c->r[18]=c->r[18]+0x0000000Cu; // 801D3AA8
  cmps(c,0,(int32_t)c->r[19],128); // 801D3AAC
  if (crb(c,0)) { IRQCHK(c); goto L_801D39E8; } // 801D3AB0
  c->r[4]=0u+0x801D0000u; // 801D3AB4
  c->r[3]=c->r[1]+0x00000038u; // 801D3AB8
  c->r[4]=c->r[4]+0x00002750u; // 801D3ABC
  c->r[5]=0u+0x0000000Cu; // 801D3AC0
  c->r[6]=0u+0x00000080u; // 801D3AC4
  c->lr=0x801D3ACCu; f_802E6798(c); // 801D3AC8
  c->r[3]=c->r[24]|c->r[24]; // 801D3ACC
  c->lr=0x801D3AD4u; f_80126EA0(c); // 801D3AD0
L_801D3AD4:;
  c->r[11]=c->r[1]+0x00001270u; // 801D3AD4
  c->lr=0x801D3ADCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3AD8
  c->r[0]=R32(c->r[1]+0x00001274u); // 801D3ADC
  c->lr=c->r[0]; // 801D3AE0
  c->r[1]=c->r[1]+0x00001270u; // 801D3AE4
  return; // 801D3AE8
}

// fn_801D3AF0
void f_801D3AF0(Ctx* __restrict c) {
  trace_call(0x801D3AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3AF0
  c->r[0]=c->lr; // 801D3AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3AF8
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D3AFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3B00
  c->r[31]=c->r[3]|c->r[3]; // 801D3B04
  cmps(c,0,(int32_t)c->r[0],0); // 801D3B08
  if (!crb(c,2)) { goto L_801D3B2C; } // 801D3B0C
  c->r[3]=0u+0x803A0000u; // 801D3B10
  c->r[5]=0u+0x803A0000u; // 801D3B14
  c->r[3]=c->r[3]+0x00001080u; // 801D3B18
  c->r[4]=0u+0x000002B3u; // 801D3B1C
  c->r[5]=c->r[5]+0x00001360u; // 801D3B20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3B24
  c->lr=0x801D3B2Cu; f_80212260(c); // 801D3B28
L_801D3B2C:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801D3B2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3B30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3B34
  c->lr=c->r[0]; // 801D3B38
  c->r[1]=c->r[1]+0x00000010u; // 801D3B3C
  return; // 801D3B40
}

// fn_801D3B50
void f_801D3B50(Ctx* __restrict c) {
  trace_call(0x801D3B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3B50
  c->r[0]=c->lr; // 801D3B54
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D3B58
  c->r[11]=c->r[1]+0x00000050u; // 801D3B5C
  c->lr=0x801D3B64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3B60
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801D3B64
  c->r[31]=0u+0x803A0000u; // 801D3B68
  c->r[27]=c->r[3]|c->r[3]; // 801D3B6C
  c->r[28]=c->r[4]|c->r[4]; // 801D3B70
  cmps(c,0,(int32_t)c->r[0],0); // 801D3B74
  c->r[31]=c->r[31]+0x00001080u; // 801D3B78
  if (crb(c,2)) { goto L_801D3BA0; } // 801D3B7C
  c->r[3]=c->r[0]|c->r[0]; // 801D3B80
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3B84
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D3B88
  c->ctr=c->r[12]; // 801D3B8C
  if (true) { c->lr=0x801D3B94u; dispatch(c,c->ctr); } // 801D3B90
  cmps(c,0,(int32_t)c->r[3],0); // 801D3B94
  if (crb(c,2)) { goto L_801D3BA0; } // 801D3B98
  goto L_801D3CF4; // 801D3B9C
L_801D3BA0:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3BA0
  c->r[4]=c->r[28]|c->r[28]; // 801D3BA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3BA8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D3BAC
  c->ctr=c->r[12]; // 801D3BB0
  if (true) { c->lr=0x801D3BB8u; dispatch(c,c->ctr); } // 801D3BB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D3BB8
  if (crb(c,2)) { goto L_801D3BC4; } // 801D3BBC
  goto L_801D3CF4; // 801D3BC0
L_801D3BC4:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 801D3BC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D3BC8
  if (!crb(c,2)) { goto L_801D3BF0; } // 801D3BCC
  if (!crb(c,2)) { goto L_801D3BE8; } // 801D3BD0
  c->r[3]=c->r[31]+0x00000000u; // 801D3BD4
  c->r[5]=c->r[31]+0x00000328u; // 801D3BD8
  c->r[4]=0u+0x000003AEu; // 801D3BDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3BE0
  c->lr=0x801D3BE8u; f_80212300(c); // 801D3BE4
L_801D3BE8:;
  c->r[3]=0u+0x00000000u; // 801D3BE8
  goto L_801D3C10; // 801D3BEC
L_801D3BF0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3BF0
  cmpu(c,0,c->r[28],c->r[0]); // 801D3BF4
  if (crb(c,0)) { goto L_801D3C04; } // 801D3BF8
  c->r[3]=0u+0x00000000u; // 801D3BFC
  goto L_801D3C10; // 801D3C00
L_801D3C04:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801D3C04
  c->r[3]=c->r[3]+c->r[0]; // 801D3C08
  c->r[3]=R32(c->r[3]+0x00000004u); // 801D3C0C
L_801D3C10:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D3C10
  if (crb(c,2)) { goto L_801D3C1C; } // 801D3C14
  goto L_801D3CF4; // 801D3C18
L_801D3C1C:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3C1C
  c->r[4]=c->r[28]|c->r[28]; // 801D3C20
  c->r[5]=c->r[1]+0x00000010u; // 801D3C24
  c->lr=0x801D3C2Cu; f_801CFF00(c); // 801D3C28
  cmps(c,0,(int32_t)c->r[3],0); // 801D3C2C
  if (!crb(c,2)) { goto L_801D3C3C; } // 801D3C30
  c->r[3]=0u+0x00000000u; // 801D3C34
  goto L_801D3CF4; // 801D3C38
L_801D3C3C:;
  c->r[29]=0u+0x00000000u; // 801D3C3C
  goto L_801D3CE4; // 801D3C40
L_801D3C44:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3C44
  c->r[4]=c->r[28]|c->r[28]; // 801D3C48
  c->r[5]=c->r[29]|c->r[29]; // 801D3C4C
  c->r[6]=c->r[1]+0x00000008u; // 801D3C50
  c->lr=0x801D3C58u; f_801CFF10(c); // 801D3C54
  cmps(c,0,(int32_t)c->r[3],0); // 801D3C58
  if (crb(c,2)) { goto L_801D3CE0; } // 801D3C5C
  c->r[4]=R32(c->r[27]+0x00000014u); // 801D3C60
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D3C64
  cmps(c,0,(int32_t)c->r[4],0); // 801D3C68
  if (!crb(c,2)) { goto L_801D3C90; } // 801D3C6C
  if (!crb(c,2)) { goto L_801D3C88; } // 801D3C70
  c->r[3]=c->r[31]+0x00000000u; // 801D3C74
  c->r[5]=c->r[31]+0x0000037Cu; // 801D3C78
  c->r[4]=0u+0x00000348u; // 801D3C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3C80
  c->lr=0x801D3C88u; f_80212300(c); // 801D3C84
L_801D3C88:;
  c->r[30]=0u+0x00000000u; // 801D3C88
  goto L_801D3CB0; // 801D3C8C
L_801D3C90:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801D3C90
  cmpu(c,0,c->r[3],c->r[0]); // 801D3C94
  if (crb(c,0)) { goto L_801D3CA4; } // 801D3C98
  c->r[30]=0u+0x00000000u; // 801D3C9C
  goto L_801D3CB0; // 801D3CA0
L_801D3CA4:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D3CA4
  c->r[3]=c->r[4]+c->r[0]; // 801D3CA8
  c->r[30]=R32(c->r[3]+0x00000004u); // 801D3CAC
L_801D3CB0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D3CB0
  if (crb(c,2)) { goto L_801D3CE0; } // 801D3CB4
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3CB8
  c->r[6]=c->r[1]+0x00000020u; // 801D3CBC
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D3CC0
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801D3CC4
  c->lr=0x801D3CCCu; f_801CFEE0(c); // 801D3CC8
  cmps(c,0,(int32_t)c->r[3],0); // 801D3CCC
  if (crb(c,2)) { goto L_801D3CE0; } // 801D3CD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3CD4
  c->r[3]=c->r[30]+c->r[0]; // 801D3CD8
  goto L_801D3CF4; // 801D3CDC
L_801D3CE0:;
  c->r[29]=c->r[29]+0x00000001u; // 801D3CE0
L_801D3CE4:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801D3CE4
  cmpu(c,0,c->r[29],c->r[0]); // 801D3CE8
  if (crb(c,0)) { IRQCHK(c); goto L_801D3C44; } // 801D3CEC
  c->r[3]=0u+0x00000000u; // 801D3CF0
L_801D3CF4:;
  c->r[11]=c->r[1]+0x00000050u; // 801D3CF4
  c->lr=0x801D3CFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3CF8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D3CFC
  c->lr=c->r[0]; // 801D3D00
  c->r[1]=c->r[1]+0x00000050u; // 801D3D04
  return; // 801D3D08
}

// fn_801D3D10
void f_801D3D10(Ctx* __restrict c) {
  trace_call(0x801D3D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3D10
  c->r[0]=c->lr; // 801D3D14
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D3D18
  c->r[11]=c->r[1]+0x00000050u; // 801D3D1C
  c->lr=0x801D3D24u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D3D20
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801D3D24
  c->r[31]=0u+0x803A0000u; // 801D3D28
  c->r[27]=c->r[3]|c->r[3]; // 801D3D2C
  c->r[28]=c->r[4]|c->r[4]; // 801D3D30
  cmps(c,0,(int32_t)c->r[0],0); // 801D3D34
  c->r[31]=c->r[31]+0x00001080u; // 801D3D38
  if (crb(c,2)) { goto L_801D3D60; } // 801D3D3C
  c->r[3]=c->r[0]|c->r[0]; // 801D3D40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3D44
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D3D48
  c->ctr=c->r[12]; // 801D3D4C
  if (true) { c->lr=0x801D3D54u; dispatch(c,c->ctr); } // 801D3D50
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D54
  if (crb(c,2)) { goto L_801D3D60; } // 801D3D58
  goto L_801D3EB4; // 801D3D5C
L_801D3D60:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3D60
  c->r[4]=c->r[28]|c->r[28]; // 801D3D64
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D3D68
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D3D6C
  c->ctr=c->r[12]; // 801D3D70
  if (true) { c->lr=0x801D3D78u; dispatch(c,c->ctr); } // 801D3D74
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D78
  if (crb(c,2)) { goto L_801D3D84; } // 801D3D7C
  goto L_801D3EB4; // 801D3D80
L_801D3D84:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 801D3D84
  cmps(c,0,(int32_t)c->r[3],0); // 801D3D88
  if (!crb(c,2)) { goto L_801D3DB0; } // 801D3D8C
  if (!crb(c,2)) { goto L_801D3DA8; } // 801D3D90
  c->r[3]=c->r[31]+0x00000000u; // 801D3D94
  c->r[5]=c->r[31]+0x000003D4u; // 801D3D98
  c->r[4]=0u+0x000003E1u; // 801D3D9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3DA0
  c->lr=0x801D3DA8u; f_80212300(c); // 801D3DA4
L_801D3DA8:;
  c->r[3]=0u+0x00000000u; // 801D3DA8
  goto L_801D3DD0; // 801D3DAC
L_801D3DB0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3DB0
  cmpu(c,0,c->r[28],c->r[0]); // 801D3DB4
  if (crb(c,0)) { goto L_801D3DC4; } // 801D3DB8
  c->r[3]=0u+0x00000000u; // 801D3DBC
  goto L_801D3DD0; // 801D3DC0
L_801D3DC4:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801D3DC4
  c->r[3]=c->r[3]+c->r[0]; // 801D3DC8
  c->r[3]=R32(c->r[3]+0x00000008u); // 801D3DCC
L_801D3DD0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D3DD0
  if (crb(c,2)) { goto L_801D3DDC; } // 801D3DD4
  goto L_801D3EB4; // 801D3DD8
L_801D3DDC:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3DDC
  c->r[4]=c->r[28]|c->r[28]; // 801D3DE0
  c->r[5]=c->r[1]+0x00000010u; // 801D3DE4
  c->lr=0x801D3DECu; f_801CFF00(c); // 801D3DE8
  cmps(c,0,(int32_t)c->r[3],0); // 801D3DEC
  if (!crb(c,2)) { goto L_801D3DFC; } // 801D3DF0
  c->r[3]=0u+0x00000000u; // 801D3DF4
  goto L_801D3EB4; // 801D3DF8
L_801D3DFC:;
  c->r[29]=0u+0x00000000u; // 801D3DFC
  goto L_801D3EA4; // 801D3E00
L_801D3E04:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3E04
  c->r[4]=c->r[28]|c->r[28]; // 801D3E08
  c->r[5]=c->r[29]|c->r[29]; // 801D3E0C
  c->r[6]=c->r[1]+0x00000008u; // 801D3E10
  c->lr=0x801D3E18u; f_801CFF10(c); // 801D3E14
  cmps(c,0,(int32_t)c->r[3],0); // 801D3E18
  if (crb(c,2)) { goto L_801D3EA0; } // 801D3E1C
  c->r[4]=R32(c->r[27]+0x00000014u); // 801D3E20
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D3E24
  cmps(c,0,(int32_t)c->r[4],0); // 801D3E28
  if (!crb(c,2)) { goto L_801D3E50; } // 801D3E2C
  if (!crb(c,2)) { goto L_801D3E48; } // 801D3E30
  c->r[3]=c->r[31]+0x00000000u; // 801D3E34
  c->r[5]=c->r[31]+0x00000430u; // 801D3E38
  c->r[4]=0u+0x0000037Bu; // 801D3E3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3E40
  c->lr=0x801D3E48u; f_80212300(c); // 801D3E44
L_801D3E48:;
  c->r[30]=0u+0x00000000u; // 801D3E48
  goto L_801D3E70; // 801D3E4C
L_801D3E50:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801D3E50
  cmpu(c,0,c->r[3],c->r[0]); // 801D3E54
  if (crb(c,0)) { goto L_801D3E64; } // 801D3E58
  c->r[30]=0u+0x00000000u; // 801D3E5C
  goto L_801D3E70; // 801D3E60
L_801D3E64:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D3E64
  c->r[3]=c->r[4]+c->r[0]; // 801D3E68
  c->r[30]=R32(c->r[3]+0x00000008u); // 801D3E6C
L_801D3E70:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D3E70
  if (crb(c,2)) { goto L_801D3EA0; } // 801D3E74
  c->r[3]=R32(c->r[27]+0x00000010u); // 801D3E78
  c->r[6]=c->r[1]+0x00000020u; // 801D3E7C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D3E80
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801D3E84
  c->lr=0x801D3E8Cu; f_801CFEE0(c); // 801D3E88
  cmps(c,0,(int32_t)c->r[3],0); // 801D3E8C
  if (crb(c,2)) { goto L_801D3EA0; } // 801D3E90
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801D3E94
  c->r[3]=c->r[30]+c->r[0]; // 801D3E98
  goto L_801D3EB4; // 801D3E9C
L_801D3EA0:;
  c->r[29]=c->r[29]+0x00000001u; // 801D3EA0
L_801D3EA4:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801D3EA4
  cmpu(c,0,c->r[29],c->r[0]); // 801D3EA8
  if (crb(c,0)) { IRQCHK(c); goto L_801D3E04; } // 801D3EAC
  c->r[3]=0u+0x00000000u; // 801D3EB0
L_801D3EB4:;
  c->r[11]=c->r[1]+0x00000050u; // 801D3EB4
  c->lr=0x801D3EBCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D3EB8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D3EBC
  c->lr=c->r[0]; // 801D3EC0
  c->r[1]=c->r[1]+0x00000050u; // 801D3EC4
  return; // 801D3EC8
}

// fn_801D3ED0
void f_801D3ED0(Ctx* __restrict c) {
  trace_call(0x801D3ED0u);
  c->r[8]=c->r[6]|c->r[6]; // 801D3ED0
  c->r[9]=c->r[7]|c->r[7]; // 801D3ED4
  c->r[6]=0u+0x00000000u; // 801D3ED8
  c->r[7]=0u+0x00000000u; // 801D3EDC
  f_801D3EF0(c); return; // 801D3EE0
}

// fn_801D3EF0
void f_801D3EF0(Ctx* __restrict c) {
  trace_call(0x801D3EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3EF0
  c->r[0]=c->lr; // 801D3EF4
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801D3EF8
  c->r[11]=c->r[1]+0x000000D0u; // 801D3EFC
  c->lr=0x801D3F04u; f_802E6998(c); // 801D3F00
  cmps(c,0,(int32_t)c->r[4],0); // 801D3F04
  c->r[27]=0u+0x803A0000u; // 801D3F08
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D3F0C
  c->r[15]=c->r[3]|c->r[3]; // 801D3F10
  c->r[16]=c->r[5]|c->r[5]; // 801D3F14
  c->r[17]=c->r[6]|c->r[6]; // 801D3F18
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 801D3F1C
  c->r[14]=c->r[9]|c->r[9]; // 801D3F20
  c->r[27]=c->r[27]+0x00001080u; // 801D3F24
  W8(c->r[1]+0x00000010u,c->r[8]); // 801D3F28
  if (!crb(c,2)) { goto L_801D3F44; } // 801D3F2C
  c->r[3]=c->r[27]+0x00000000u; // 801D3F30
  c->r[5]=c->r[27]+0x00000678u; // 801D3F34
  c->r[4]=0u+0x00000454u; // 801D3F38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D3F3C
  c->lr=0x801D3F44u; f_80212260(c); // 801D3F40
L_801D3F44:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801D3F44
  cmps(c,0,(int32_t)c->r[3],0); // 801D3F48
  if (!crb(c,2)) { goto L_801D3F58; } // 801D3F4C
  c->r[3]=0u+0x00000000u; // 801D3F50
  goto L_801D3F5C; // 801D3F54
L_801D3F58:;
  c->lr=0x801D3F5Cu; f_801CFD60(c); // 801D3F58
L_801D3F5C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D3F5C
  if (!crb(c,2)) { goto L_801D3F6C; } // 801D3F60
  c->r[3]=0u+0x00000007u; // 801D3F64
  goto L_801D4D98; // 801D3F68
L_801D3F6C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D3F6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D3F70
  cmps(c,0,(int32_t)c->r[0],0); // 801D3F74
  if (crb(c,2)) { goto L_801D3F80; } // 801D3F78
  c->lr=0x801D3F80u; f_801D5EA0(c); // 801D3F7C
L_801D3F80:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801D3F80
  c->r[4]=c->r[16]|c->r[16]; // 801D3F84
  c->r[5]=c->r[1]+0x00000048u; // 801D3F88
  c->lr=0x801D3F90u; f_801CFE50(c); // 801D3F8C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3F90
  if (!crb(c,2)) { goto L_801D3FA0; } // 801D3F94
  c->r[3]=0u+0x00000003u; // 801D3F98
  goto L_801D4D98; // 801D3F9C
L_801D3FA0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D3FA0
  cmps(c,0,(int32_t)c->r[14],0); // 801D3FA4
  W32(c->r[1]+0x00000070u,c->r[0]); // 801D3FA8
  c->r[0]=0u+0x00000000u; // 801D3FAC
  c->r[18]=R32(c->r[1]+0x0000004Cu); // 801D3FB0
  W32(c->r[1]+0x00000078u,c->r[0]); // 801D3FB4
  c->r[0]=0u+0x00000000u; // 801D3FB8
  c->r[19]=R32(c->r[1]+0x00000050u); // 801D3FBC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D3FC0
  c->r[0]=0u+0x00000000u; // 801D3FC4
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801D3FC8
  c->r[0]=0u+0x00000000u; // 801D3FCC
  W32(c->r[1]+0x00000068u,c->r[0]); // 801D3FD0
  if (crb(c,2)) { goto L_801D4034; } // 801D3FD4
  c->r[3]=R32(c->r[14]+0x00000000u); // 801D3FD8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801D3FDC
  if (crb(c,2)) { goto L_801D3FF4; } // 801D3FE0
  c->r[0]=R32(c->r[14]+0x00000004u); // 801D3FE4
  W32(c->r[1]+0x00000078u,c->r[0]); // 801D3FE8
  c->r[0]=R32(c->r[14]+0x00000008u); // 801D3FEC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D3FF0
L_801D3FF4:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801D3FF4
  if (crb(c,2)) { goto L_801D4004; } // 801D3FF8
  c->r[0]=R32(c->r[14]+0x00000010u); // 801D3FFC
  W32(c->r[1]+0x00000070u,c->r[0]); // 801D4000
L_801D4004:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801D4004
  if (crb(c,2)) { goto L_801D4010; } // 801D4008
  c->r[18]=R32(c->r[14]+0x0000000Cu); // 801D400C
L_801D4010:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801D4010
  if (crb(c,2)) { goto L_801D401C; } // 801D4014
  c->r[19]=R32(c->r[14]+0x00000014u); // 801D4018
L_801D401C:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801D401C
  if (crb(c,2)) { goto L_801D4034; } // 801D4020
  c->r[0]=R32(c->r[14]+0x00000018u); // 801D4024
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801D4028
  c->r[0]=R32(c->r[14]+0x0000001Cu); // 801D402C
  W32(c->r[1]+0x00000068u,c->r[0]); // 801D4030
L_801D4034:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801D4034
  c->r[23]=R32(c->r[1]+0x00000070u); // 801D4038
  cmps(c,0,(int32_t)c->r[0],0); // 801D403C
  if (crb(c,2)) { goto L_801D404C; } // 801D4040
  c->r[3]=c->r[23]|c->r[23]; // 801D4044
  c->r[23]=c->r[3]+0xFFFFFFFFu; // 801D4048
L_801D404C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801D404C
  c->r[22]=0u+0x00000000u; // 801D4050
  if (crb(c,2)) { goto L_801D4068; } // 801D4054
  c->r[3]=c->r[17]|c->r[17]; // 801D4058
  c->r[4]=c->r[16]|c->r[16]; // 801D405C
  c->lr=0x801D4064u; f_801BD770(c); // 801D4060
  c->r[22]=c->r[3]|c->r[3]; // 801D4064
L_801D4068:;
  c->r[24]=c->r[23]+c->r[22]; // 801D4068
  cmps(c,0,(int32_t)c->r[24],127); // 801D406C
  if (!crb(c,1)) { goto L_801D407C; } // 801D4070
  c->r[14]=0u+0x0000007Fu; // 801D4074
  goto L_801D4084; // 801D4078
L_801D407C:;
  c->r[0]=sraw(c,c->r[24],31); // 801D407C
  c->r[14]=c->r[24]&~c->r[0]; // 801D4080
L_801D4084:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D4084
  c->r[21]=0u+0x00000000u; // 801D4088
  cmps(c,0,(int32_t)c->r[0],0); // 801D408C
  if (crb(c,2)) { goto L_801D40E4; } // 801D4090
  cmps(c,0,(int32_t)c->r[19],0); // 801D4094
  if (crb(c,0)) { goto L_801D40A4; } // 801D4098
  cmps(c,0,(int32_t)c->r[19],4); // 801D409C
  if (crb(c,0)) { goto L_801D40AC; } // 801D40A0
L_801D40A4:;
  c->r[21]=0u+0x00000000u; // 801D40A4
  goto L_801D40B8; // 801D40A8
L_801D40AC:;
  c->r[3]=rotl(c->r[19],4)&0xFFFFFFF0u; // 801D40AC
  c->r[3]=c->r[0]+c->r[3]; // 801D40B0
  c->r[21]=c->r[3]+0x00000008u; // 801D40B4
L_801D40B8:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D40B8
  if (!crb(c,2)) { goto L_801D40E4; } // 801D40BC
  c->r[6]=c->r[19]|c->r[19]; // 801D40C0
  c->r[3]=c->r[27]+0x00000000u; // 801D40C4
  c->r[5]=c->r[27]+0x000006A0u; // 801D40C8
  c->r[4]=0u+0x0000049Du; // 801D40CC
  c->r[7]=0u+0x00000003u; // 801D40D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D40D4
  c->lr=0x801D40DCu; f_80212300(c); // 801D40D8
  c->r[3]=0u+0x0000000Au; // 801D40DC
  goto L_801D4D98; // 801D40E0
L_801D40E4:;
  c->lr=0x801D40E8u; f_801D76C0(c); // 801D40E4
  c->r[3]=c->r[3]+0x00000354u; // 801D40E8
  c->lr=0x801D40F0u; f_80126DC0(c); // 801D40EC
  c->r[8]=R32(c->r[15]+0x0000003Cu); // 801D40F0
  cmpu(c,0,c->r[18],c->r[8]); // 801D40F4
  if (crb(c,0)) { goto L_801D4118; } // 801D40F8
  c->r[6]=c->r[18]|c->r[18]; // 801D40FC
  c->r[3]=c->r[27]+0x00000000u; // 801D4100
  c->r[5]=c->r[27]+0x0000029Cu; // 801D4104
  c->r[4]=0u+0x000002B9u; // 801D4108
  c->r[7]=0u+0x00000000u; // 801D410C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4110
  c->lr=0x801D4118u; f_80212260(c); // 801D4114
L_801D4118:;
  c->r[0]=(uint32_t)((int32_t)c->r[18]*(int32_t)100); // 801D4118
  c->r[3]=R32(c->r[15]+0x00000040u); // 801D411C
  c->r[4]=c->r[14]|c->r[14]; // 801D4120
  c->r[0]=c->r[3]+c->r[0]; // 801D4124
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801D4128
  c->r[3]=c->r[0]|c->r[0]; // 801D412C
  c->lr=0x801D4134u; f_801D6D60(c); // 801D4130
  cmps(c,0,(int32_t)c->r[3],0); // 801D4134
  if (!crb(c,2)) { goto L_801D4150; } // 801D4138
  c->lr=0x801D4140u; f_801D76C0(c); // 801D413C
  c->r[3]=c->r[3]+0x00000354u; // 801D4140
  c->lr=0x801D4148u; f_80126EA0(c); // 801D4144
  c->r[3]=0u+0x00000001u; // 801D4148
  goto L_801D4D98; // 801D414C
L_801D4150:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D4150
  if (crb(c,2)) { goto L_801D4180; } // 801D4154
  c->r[3]=c->r[21]|c->r[21]; // 801D4158
  c->r[4]=c->r[14]|c->r[14]; // 801D415C
  c->lr=0x801D4164u; f_801C09F0(c); // 801D4160
  cmps(c,0,(int32_t)c->r[3],0); // 801D4164
  if (!crb(c,2)) { goto L_801D4180; } // 801D4168
  c->lr=0x801D4170u; f_801D76C0(c); // 801D416C
  c->r[3]=c->r[3]+0x00000354u; // 801D4170
  c->lr=0x801D4178u; f_80126EA0(c); // 801D4174
  c->r[3]=0u+0x00000001u; // 801D4178
  goto L_801D4D98; // 801D417C
L_801D4180:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801D4180
  c->r[4]=c->r[16]|c->r[16]; // 801D4184
  c->r[20]=0u+0x00000000u; // 801D4188
  c->r[19]=0u+0x00000000u; // 801D418C
  c->r[18]=0u+0x00000000u; // 801D4190
  c->lr=0x801D4198u; f_801CFE40(c); // 801D4194
  cmps(c,0,(int32_t)c->r[3],1); // 801D4198
  if (crb(c,2)) { goto L_801D41B4; } // 801D419C
  cmps(c,0,(int32_t)c->r[3],2); // 801D41A0
  if (crb(c,2)) { goto L_801D448C; } // 801D41A4
  cmps(c,0,(int32_t)c->r[3],3); // 801D41A8
  if (crb(c,2)) { goto L_801D4764; } // 801D41AC
  goto L_801D4A3C; // 801D41B0
L_801D41B4:;
  c->r[0]=addc(c,c->r[15],0x00000044u,0); cr0(c,c->r[0]); // 801D41B4
  if (!crb(c,2)) { goto L_801D41D0; } // 801D41B8
  c->r[3]=c->r[27]+0x00000000u; // 801D41BC
  c->r[5]=c->r[27]+0x000006D0u; // 801D41C0
  c->r[4]=0u+0x0000041Au; // 801D41C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D41C8
  c->lr=0x801D41D0u; f_80212260(c); // 801D41CC
L_801D41D0:;
  cmps(c,0,(int32_t)c->r[24],127); // 801D41D0
  if (!crb(c,1)) { goto L_801D41E0; } // 801D41D4
  c->r[26]=0u+0x0000007Fu; // 801D41D8
  goto L_801D41E8; // 801D41DC
L_801D41E0:;
  c->r[0]=sraw(c,c->r[24],31); // 801D41E0
  c->r[26]=c->r[24]&~c->r[0]; // 801D41E4
L_801D41E8:;
  c->r[28]=c->r[15]+0x00000054u; // 801D41E8
  c->r[3]=c->r[28]|c->r[28]; // 801D41EC
  c->lr=0x801D41F4u; f_80126DC0(c); // 801D41F0
  c->r[20]=0u+0x00000000u; // 801D41F4
  c->r[29]=0u+0x803A0000u; // 801D41F8
  c->r[30]=0u+0x803A0000u; // 801D41FC
  c->r[31]=0u+0x803A0000u; // 801D4200
  c->r[14]=0u+0x803A0000u; // 801D4204
  goto L_801D4360; // 801D4208
L_801D420C:;
  c->r[3]=c->r[15]+0x00000044u; // 801D420C
  c->lr=0x801D4214u; f_801C60B0(c); // 801D4210
  cmps(c,0,(int32_t)c->r[3],0); // 801D4214
  if (crb(c,2)) { goto L_801D423C; } // 801D4218
  c->r[20]=c->r[3]|c->r[3]; // 801D421C
  if (crb(c,2)) { goto L_801D4360; } // 801D4220
  c->r[5]=c->r[23]|c->r[23]; // 801D4224
  c->r[6]=c->r[22]|c->r[22]; // 801D4228
  c->r[4]=c->r[15]+0x00000044u; // 801D422C
  c->lr=0x801D4234u; f_801CB190(c); // 801D4230
  c->r[20]=c->r[3]|c->r[3]; // 801D4234
  goto L_801D4360; // 801D4238
L_801D423C:;
  c->r[0]=R32(c->r[15]+0x00000048u); // 801D423C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4240
  if (!crb(c,2)) { goto L_801D4250; } // 801D4244
  c->r[25]=0u+0x00000000u; // 801D4248
  goto L_801D42AC; // 801D424C
L_801D4250:;
  if (!crb(c,2)) { goto L_801D4268; } // 801D4250
  c->r[3]=c->r[29]+0x00001ECCu; // 801D4254
  c->r[5]=c->r[30]+0x00001EA8u; // 801D4258
  c->r[4]=0u+0x000001F1u; // 801D425C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4260
  c->lr=0x801D4268u; f_80212260(c); // 801D4264
L_801D4268:;
  c->r[24]=R32(c->r[15]+0x0000004Cu); // 801D4268
  cmps(c,0,(int32_t)c->r[24],0); // 801D426C
  if (!crb(c,2)) { goto L_801D4288; } // 801D4270
  c->r[3]=c->r[31]+0xFFFFFFACu; // 801D4274
  c->r[5]=c->r[14]+0xFFFFFF88u; // 801D4278
  c->r[4]=0u+0x0000023Du; // 801D427C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4280
  c->lr=0x801D4288u; f_80212260(c); // 801D4284
L_801D4288:;
  c->r[25]=addc(c,c->r[24],0xFFFFFF10u,0); cr0(c,c->r[25]); // 801D4288
  if (!crb(c,2)) { goto L_801D42AC; } // 801D428C
  c->r[3]=0u+0x803A0000u; // 801D4290
  c->r[4]=0u+0x803A0000u; // 801D4294
  c->r[5]=c->r[4]+0x00001E78u; // 801D4298
  c->r[3]=c->r[3]+0x00001E9Cu; // 801D429C
  c->r[4]=0u+0x00000193u; // 801D42A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D42A4
  c->lr=0x801D42ACu; f_80212260(c); // 801D42A8
L_801D42AC:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D42AC
  if (!crb(c,2)) { goto L_801D42C4; } // 801D42B0
  c->r[3]=c->r[28]|c->r[28]; // 801D42B4
  c->lr=0x801D42BCu; f_80126EA0(c); // 801D42B8
  c->r[20]=0u+0x00000000u; // 801D42BC
  goto L_801D4410; // 801D42C0
L_801D42C4:;
  c->r[3]=R8(c->r[25]+0x00000098u); // 801D42C4
  c->r[0]=R32(c->r[25]+0x00000050u); // 801D42C8
  c->r[3]=c->r[3]+c->r[0]; // 801D42CC
  cmps(c,0,(int32_t)c->r[3],127); // 801D42D0
  if (!crb(c,1)) { goto L_801D42E0; } // 801D42D4
  c->r[0]=0u+0x0000007Fu; // 801D42D8
  goto L_801D42E8; // 801D42DC
L_801D42E0:;
  c->r[0]=sraw(c,c->r[3],31); // 801D42E0
  c->r[0]=c->r[3]&~c->r[0]; // 801D42E4
L_801D42E8:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801D42E8
  if (!crb(c,0)) { goto L_801D4300; } // 801D42EC
  c->r[3]=c->r[28]|c->r[28]; // 801D42F0
  c->lr=0x801D42F8u; f_80126EA0(c); // 801D42F4
  c->r[20]=0u+0x00000000u; // 801D42F8
  goto L_801D4410; // 801D42FC
L_801D4300:;
  c->r[3]=c->r[15]+0x00000054u; // 801D4300
  c->lr=0x801D4308u; f_80126EA0(c); // 801D4304
  c->r[3]=0u+0x00000000u; // 801D4308
  c->lr=0x801D4310u; f_801BF3C0(c); // 801D430C
  c->lr=0x801D4314u; f_801BF340(c); // 801D4310
  cmps(c,0,(int32_t)c->r[3],0); // 801D4314
  if (crb(c,2)) { goto L_801D434C; } // 801D4318
  c->r[24]=R32(c->r[25]+0x0000009Cu); // 801D431C
  c->r[3]=0u+0x00000000u; // 801D4320
  c->lr=0x801D4328u; f_801BF430(c); // 801D4324
  c->r[7]=c->r[3]|c->r[3]; // 801D4328
  c->r[3]=0u+0x803A0000u; // 801D432C
  c->r[4]=0u+0x803A0000u; // 801D4330
  c->r[6]=c->r[24]|c->r[24]; // 801D4334
  c->r[5]=c->r[4]+0x00001B9Cu; // 801D4338
  c->r[3]=c->r[3]+0x00001BD8u; // 801D433C
  c->r[4]=0u+0x00000085u; // 801D4340
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4344
  c->lr=0x801D434Cu; f_80212300(c); // 801D4348
L_801D434C:;
  c->r[3]=c->r[25]|c->r[25]; // 801D434C
  c->r[4]=0u+0x00000000u; // 801D4350
  c->lr=0x801D4358u; f_801BBBD0(c); // 801D4354
  c->r[3]=c->r[15]+0x00000054u; // 801D4358
  c->lr=0x801D4360u; f_80126DC0(c); // 801D435C
L_801D4360:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D4360
  if (crb(c,2)) { IRQCHK(c); goto L_801D420C; } // 801D4364
  c->r[23]=R32(c->r[15]+0x0000004Cu); // 801D4368
  c->r[24]=c->r[15]+0x0000004Cu; // 801D436C
  c->r[22]=0u+0x803A0000u; // 801D4370
  c->r[14]=0u+0x803A0000u; // 801D4374
  goto L_801D43C8; // 801D4378
L_801D437C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D437C
  if (!crb(c,2)) { goto L_801D4398; } // 801D4380
  c->r[3]=c->r[22]+0xFFFFFFACu; // 801D4384
  c->r[5]=c->r[14]+0xFFFFFF88u; // 801D4388
  c->r[4]=0u+0x0000023Du; // 801D438C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4390
  c->lr=0x801D4398u; f_80212260(c); // 801D4394
L_801D4398:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 801D4398
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 801D439C
  c->r[3]=c->r[3]+c->r[0]; // 801D43A0
  cmps(c,0,(int32_t)c->r[3],127); // 801D43A4
  if (!crb(c,1)) { goto L_801D43B4; } // 801D43A8
  c->r[0]=0u+0x0000007Fu; // 801D43AC
  goto L_801D43BC; // 801D43B0
L_801D43B4:;
  c->r[0]=sraw(c,c->r[3],31); // 801D43B4
  c->r[0]=c->r[3]&~c->r[0]; // 801D43B8
L_801D43BC:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801D43BC
  if (crb(c,0)) { goto L_801D43D0; } // 801D43C0
  c->r[23]=R32(c->r[23]+0x00000000u); // 801D43C4
L_801D43C8:;
  cmpu(c,0,c->r[23],c->r[24]); // 801D43C8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D437C; } // 801D43CC
L_801D43D0:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D43D0
  if (!crb(c,2)) { goto L_801D43F4; } // 801D43D4
  c->r[3]=0u+0x803A0000u; // 801D43D8
  c->r[5]=0u+0x803A0000u; // 801D43DC
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801D43E0
  c->r[4]=0u+0x00000233u; // 801D43E4
  c->r[5]=c->r[5]+0xFFFFFFB8u; // 801D43E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D43EC
  c->lr=0x801D43F4u; f_80212260(c); // 801D43F0
L_801D43F4:;
  W32(c->r[1]+0x0000001Cu,c->r[23]); // 801D43F4
  c->r[3]=c->r[15]+0x00000048u; // 801D43F8
  c->r[4]=c->r[1]+0x0000001Cu; // 801D43FC
  c->r[5]=c->r[20]+0x000000F0u; // 801D4400
  c->lr=0x801D4408u; f_801E44B0(c); // 801D4404
  c->r[3]=c->r[28]|c->r[28]; // 801D4408
  c->lr=0x801D4410u; f_80126EA0(c); // 801D440C
L_801D4410:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D4410
  if (!crb(c,2)) { goto L_801D4420; } // 801D4414
  c->r[20]=0u+0x00000000u; // 801D4418
  goto L_801D4440; // 801D441C
L_801D4420:;
  c->r[3]=c->r[20]|c->r[20]; // 801D4420
  c->r[4]=c->r[16]|c->r[16]; // 801D4424
  c->lr=0x801D442Cu; f_801BD810(c); // 801D4428
  cmps(c,0,(int32_t)c->r[17],0); // 801D442C
  if (crb(c,2)) { goto L_801D4440; } // 801D4430
  c->r[3]=c->r[20]|c->r[20]; // 801D4434
  c->r[4]=c->r[17]|c->r[17]; // 801D4438
  c->lr=0x801D4440u; f_801BD660(c); // 801D443C
L_801D4440:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D4440
  if (!crb(c,2)) { goto L_801D4484; } // 801D4444
  c->r[3]=0u+0x00000001u; // 801D4448
  c->lr=0x801D4450u; f_801BF340(c); // 801D444C
  cmps(c,0,(int32_t)c->r[3],0); // 801D4450
  if (crb(c,2)) { goto L_801D4470; } // 801D4454
  c->r[6]=c->r[16]|c->r[16]; // 801D4458
  c->r[3]=c->r[27]+0x00000000u; // 801D445C
  c->r[5]=c->r[27]+0x000006F8u; // 801D4460
  c->r[4]=0u+0x000004C4u; // 801D4464
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4468
  c->lr=0x801D4470u; f_80212300(c); // 801D446C
L_801D4470:;
  c->lr=0x801D4474u; f_801D76C0(c); // 801D4470
  c->r[3]=c->r[3]+0x00000354u; // 801D4474
  c->lr=0x801D447Cu; f_80126EA0(c); // 801D4478
  c->r[3]=0u+0x00000009u; // 801D447C
  goto L_801D4D98; // 801D4480
L_801D4484:;
  c->r[14]=c->r[20]|c->r[20]; // 801D4484
  goto L_801D4A50; // 801D4488
L_801D448C:;
  c->r[0]=addc(c,c->r[15],0x0000006Cu,0); cr0(c,c->r[0]); // 801D448C
  if (!crb(c,2)) { goto L_801D44A8; } // 801D4490
  c->r[3]=c->r[27]+0x00000000u; // 801D4494
  c->r[5]=c->r[27]+0x000006D0u; // 801D4498
  c->r[4]=0u+0x0000041Au; // 801D449C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D44A0
  c->lr=0x801D44A8u; f_80212260(c); // 801D44A4
L_801D44A8:;
  cmps(c,0,(int32_t)c->r[24],127); // 801D44A8
  if (!crb(c,1)) { goto L_801D44B8; } // 801D44AC
  c->r[28]=0u+0x0000007Fu; // 801D44B0
  goto L_801D44C0; // 801D44B4
L_801D44B8:;
  c->r[0]=sraw(c,c->r[24],31); // 801D44B8
  c->r[28]=c->r[24]&~c->r[0]; // 801D44BC
L_801D44C0:;
  c->r[26]=c->r[15]+0x0000007Cu; // 801D44C0
  c->r[3]=c->r[26]|c->r[26]; // 801D44C4
  c->lr=0x801D44CCu; f_80126DC0(c); // 801D44C8
  c->r[19]=0u+0x00000000u; // 801D44CC
  c->r[25]=0u+0x803A0000u; // 801D44D0
  c->r[24]=0u+0x803A0000u; // 801D44D4
  c->r[14]=0u+0x803A0000u; // 801D44D8
  c->r[31]=0u+0x803A0000u; // 801D44DC
  goto L_801D4638; // 801D44E0
L_801D44E4:;
  c->r[3]=c->r[15]+0x0000006Cu; // 801D44E4
  c->lr=0x801D44ECu; f_801C60B0(c); // 801D44E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D44EC
  if (crb(c,2)) { goto L_801D4514; } // 801D44F0
  c->r[19]=c->r[3]|c->r[3]; // 801D44F4
  if (crb(c,2)) { goto L_801D4638; } // 801D44F8
  c->r[5]=c->r[23]|c->r[23]; // 801D44FC
  c->r[6]=c->r[22]|c->r[22]; // 801D4500
  c->r[4]=c->r[15]+0x0000006Cu; // 801D4504
  c->lr=0x801D450Cu; f_801DC0D0(c); // 801D4508
  c->r[19]=c->r[3]|c->r[3]; // 801D450C
  goto L_801D4638; // 801D4510
L_801D4514:;
  c->r[0]=R32(c->r[15]+0x00000070u); // 801D4514
  cmps(c,0,(int32_t)c->r[0],0); // 801D4518
  if (!crb(c,2)) { goto L_801D4528; } // 801D451C
  c->r[29]=0u+0x00000000u; // 801D4520
  goto L_801D4584; // 801D4524
L_801D4528:;
  if (!crb(c,2)) { goto L_801D4540; } // 801D4528
  c->r[3]=c->r[25]+0x00001E0Cu; // 801D452C
  c->r[5]=c->r[24]+0x00001DE8u; // 801D4530
  c->r[4]=0u+0x000001F1u; // 801D4534
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4538
  c->lr=0x801D4540u; f_80212260(c); // 801D453C
L_801D4540:;
  c->r[29]=R32(c->r[15]+0x00000074u); // 801D4540
  cmps(c,0,(int32_t)c->r[29],0); // 801D4544
  if (!crb(c,2)) { goto L_801D4560; } // 801D4548
  c->r[3]=c->r[14]+0x00001DACu; // 801D454C
  c->r[5]=c->r[31]+0x00001D88u; // 801D4550
  c->r[4]=0u+0x0000023Du; // 801D4554
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4558
  c->lr=0x801D4560u; f_80212260(c); // 801D455C
L_801D4560:;
  c->r[29]=addc(c,c->r[29],0xFFFFFF10u,0); cr0(c,c->r[29]); // 801D4560
  if (!crb(c,2)) { goto L_801D4584; } // 801D4564
  c->r[3]=0u+0x803A0000u; // 801D4568
  c->r[4]=0u+0x803A0000u; // 801D456C
  c->r[5]=c->r[4]+0x00001DB8u; // 801D4570
  c->r[3]=c->r[3]+0x00001DDCu; // 801D4574
  c->r[4]=0u+0x00000193u; // 801D4578
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D457C
  c->lr=0x801D4584u; f_80212260(c); // 801D4580
L_801D4584:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D4584
  if (!crb(c,2)) { goto L_801D459C; } // 801D4588
  c->r[3]=c->r[26]|c->r[26]; // 801D458C
  c->lr=0x801D4594u; f_80126EA0(c); // 801D4590
  c->r[19]=0u+0x00000000u; // 801D4594
  goto L_801D46E8; // 801D4598
L_801D459C:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 801D459C
  c->r[0]=R32(c->r[29]+0x00000050u); // 801D45A0
  c->r[3]=c->r[3]+c->r[0]; // 801D45A4
  cmps(c,0,(int32_t)c->r[3],127); // 801D45A8
  if (!crb(c,1)) { goto L_801D45B8; } // 801D45AC
  c->r[0]=0u+0x0000007Fu; // 801D45B0
  goto L_801D45C0; // 801D45B4
L_801D45B8:;
  c->r[0]=sraw(c,c->r[3],31); // 801D45B8
  c->r[0]=c->r[3]&~c->r[0]; // 801D45BC
L_801D45C0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D45C0
  if (!crb(c,0)) { goto L_801D45D8; } // 801D45C4
  c->r[3]=c->r[26]|c->r[26]; // 801D45C8
  c->lr=0x801D45D0u; f_80126EA0(c); // 801D45CC
  c->r[19]=0u+0x00000000u; // 801D45D0
  goto L_801D46E8; // 801D45D4
L_801D45D8:;
  c->r[3]=c->r[15]+0x0000007Cu; // 801D45D8
  c->lr=0x801D45E0u; f_80126EA0(c); // 801D45DC
  c->r[3]=0u+0x00000001u; // 801D45E0
  c->lr=0x801D45E8u; f_801BF3C0(c); // 801D45E4
  c->lr=0x801D45ECu; f_801BF340(c); // 801D45E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D45EC
  if (crb(c,2)) { goto L_801D4624; } // 801D45F0
  c->r[30]=R32(c->r[29]+0x0000009Cu); // 801D45F4
  c->r[3]=0u+0x00000001u; // 801D45F8
  c->lr=0x801D4600u; f_801BF430(c); // 801D45FC
  c->r[7]=c->r[3]|c->r[3]; // 801D4600
  c->r[3]=0u+0x803A0000u; // 801D4604
  c->r[4]=0u+0x803A0000u; // 801D4608
  c->r[6]=c->r[30]|c->r[30]; // 801D460C
  c->r[5]=c->r[4]+0x00001BF0u; // 801D4610
  c->r[3]=c->r[3]+0x00001C2Cu; // 801D4614
  c->r[4]=0u+0x00000085u; // 801D4618
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D461C
  c->lr=0x801D4624u; f_80212300(c); // 801D4620
L_801D4624:;
  c->r[3]=c->r[29]|c->r[29]; // 801D4624
  c->r[4]=0u+0x00000000u; // 801D4628
  c->lr=0x801D4630u; f_801BBBD0(c); // 801D462C
  c->r[3]=c->r[15]+0x0000007Cu; // 801D4630
  c->lr=0x801D4638u; f_80126DC0(c); // 801D4634
L_801D4638:;
  cmps(c,0,(int32_t)c->r[19],0); // 801D4638
  if (crb(c,2)) { IRQCHK(c); goto L_801D44E4; } // 801D463C
  c->r[23]=R32(c->r[15]+0x00000074u); // 801D4640
  c->r[24]=c->r[15]+0x00000074u; // 801D4644
  c->r[22]=0u+0x803A0000u; // 801D4648
  c->r[14]=0u+0x803A0000u; // 801D464C
  goto L_801D46A0; // 801D4650
L_801D4654:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D4654
  if (!crb(c,2)) { goto L_801D4670; } // 801D4658
  c->r[3]=c->r[22]+0x00001DACu; // 801D465C
  c->r[5]=c->r[14]+0x00001D88u; // 801D4660
  c->r[4]=0u+0x0000023Du; // 801D4664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4668
  c->lr=0x801D4670u; f_80212260(c); // 801D466C
L_801D4670:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 801D4670
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 801D4674
  c->r[3]=c->r[3]+c->r[0]; // 801D4678
  cmps(c,0,(int32_t)c->r[3],127); // 801D467C
  if (!crb(c,1)) { goto L_801D468C; } // 801D4680
  c->r[0]=0u+0x0000007Fu; // 801D4684
  goto L_801D4694; // 801D4688
L_801D468C:;
  c->r[0]=sraw(c,c->r[3],31); // 801D468C
  c->r[0]=c->r[3]&~c->r[0]; // 801D4690
L_801D4694:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D4694
  if (crb(c,0)) { goto L_801D46A8; } // 801D4698
  c->r[23]=R32(c->r[23]+0x00000000u); // 801D469C
L_801D46A0:;
  cmpu(c,0,c->r[23],c->r[24]); // 801D46A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D4654; } // 801D46A4
L_801D46A8:;
  cmps(c,0,(int32_t)c->r[19],0); // 801D46A8
  if (!crb(c,2)) { goto L_801D46CC; } // 801D46AC
  c->r[3]=0u+0x803A0000u; // 801D46B0
  c->r[5]=0u+0x803A0000u; // 801D46B4
  c->r[3]=c->r[3]+0x00001D7Cu; // 801D46B8
  c->r[4]=0u+0x00000233u; // 801D46BC
  c->r[5]=c->r[5]+0x00001D58u; // 801D46C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D46C4
  c->lr=0x801D46CCu; f_80212260(c); // 801D46C8
L_801D46CC:;
  W32(c->r[1]+0x00000018u,c->r[23]); // 801D46CC
  c->r[3]=c->r[15]+0x00000070u; // 801D46D0
  c->r[4]=c->r[1]+0x00000018u; // 801D46D4
  c->r[5]=c->r[19]+0x000000F0u; // 801D46D8
  c->lr=0x801D46E0u; f_801E44B0(c); // 801D46DC
  c->r[3]=c->r[26]|c->r[26]; // 801D46E0
  c->lr=0x801D46E8u; f_80126EA0(c); // 801D46E4
L_801D46E8:;
  cmps(c,0,(int32_t)c->r[19],0); // 801D46E8
  if (!crb(c,2)) { goto L_801D46F8; } // 801D46EC
  c->r[19]=0u+0x00000000u; // 801D46F0
  goto L_801D4718; // 801D46F4
L_801D46F8:;
  c->r[3]=c->r[19]|c->r[19]; // 801D46F8
  c->r[4]=c->r[16]|c->r[16]; // 801D46FC
  c->lr=0x801D4704u; f_801BD810(c); // 801D4700
  cmps(c,0,(int32_t)c->r[17],0); // 801D4704
  if (crb(c,2)) { goto L_801D4718; } // 801D4708
  c->r[3]=c->r[19]|c->r[19]; // 801D470C
  c->r[4]=c->r[17]|c->r[17]; // 801D4710
  c->lr=0x801D4718u; f_801BD660(c); // 801D4714
L_801D4718:;
  cmps(c,0,(int32_t)c->r[19],0); // 801D4718
  if (!crb(c,2)) { goto L_801D475C; } // 801D471C
  c->r[3]=0u+0x00000002u; // 801D4720
  c->lr=0x801D4728u; f_801BF340(c); // 801D4724
  cmps(c,0,(int32_t)c->r[3],0); // 801D4728
  if (crb(c,2)) { goto L_801D4748; } // 801D472C
  c->r[6]=c->r[16]|c->r[16]; // 801D4730
  c->r[3]=c->r[27]+0x00000000u; // 801D4734
  c->r[5]=c->r[27]+0x00000738u; // 801D4738
  c->r[4]=0u+0x000004D8u; // 801D473C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4740
  c->lr=0x801D4748u; f_80212300(c); // 801D4744
L_801D4748:;
  c->lr=0x801D474Cu; f_801D76C0(c); // 801D4748
  c->r[3]=c->r[3]+0x00000354u; // 801D474C
  c->lr=0x801D4754u; f_80126EA0(c); // 801D4750
  c->r[3]=0u+0x00000009u; // 801D4754
  goto L_801D4D98; // 801D4758
L_801D475C:;
  c->r[14]=c->r[19]|c->r[19]; // 801D475C
  goto L_801D4A50; // 801D4760
L_801D4764:;
  c->r[0]=addc(c,c->r[15],0x00000094u,0); cr0(c,c->r[0]); // 801D4764
  if (!crb(c,2)) { goto L_801D4780; } // 801D4768
  c->r[3]=c->r[27]+0x00000000u; // 801D476C
  c->r[5]=c->r[27]+0x000006D0u; // 801D4770
  c->r[4]=0u+0x0000041Au; // 801D4774
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4778
  c->lr=0x801D4780u; f_80212260(c); // 801D477C
L_801D4780:;
  cmps(c,0,(int32_t)c->r[24],127); // 801D4780
  if (!crb(c,1)) { goto L_801D4790; } // 801D4784
  c->r[28]=0u+0x0000007Fu; // 801D4788
  goto L_801D4798; // 801D478C
L_801D4790:;
  c->r[0]=sraw(c,c->r[24],31); // 801D4790
  c->r[28]=c->r[24]&~c->r[0]; // 801D4794
L_801D4798:;
  c->r[26]=c->r[15]+0x000000A4u; // 801D4798
  c->r[3]=c->r[26]|c->r[26]; // 801D479C
  c->lr=0x801D47A4u; f_80126DC0(c); // 801D47A0
  c->r[18]=0u+0x00000000u; // 801D47A4
  c->r[25]=0u+0x803A0000u; // 801D47A8
  c->r[24]=0u+0x803A0000u; // 801D47AC
  c->r[14]=0u+0x803A0000u; // 801D47B0
  c->r[31]=0u+0x803A0000u; // 801D47B4
  goto L_801D4910; // 801D47B8
L_801D47BC:;
  c->r[3]=c->r[15]+0x00000094u; // 801D47BC
  c->lr=0x801D47C4u; f_801C60B0(c); // 801D47C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D47C4
  if (crb(c,2)) { goto L_801D47EC; } // 801D47C8
  c->r[18]=c->r[3]|c->r[3]; // 801D47CC
  if (crb(c,2)) { goto L_801D4910; } // 801D47D0
  c->r[5]=c->r[23]|c->r[23]; // 801D47D4
  c->r[6]=c->r[22]|c->r[22]; // 801D47D8
  c->r[4]=c->r[15]+0x00000094u; // 801D47DC
  c->lr=0x801D47E4u; f_801E1C20(c); // 801D47E0
  c->r[18]=c->r[3]|c->r[3]; // 801D47E4
  goto L_801D4910; // 801D47E8
L_801D47EC:;
  c->r[0]=R32(c->r[15]+0x00000098u); // 801D47EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D47F0
  if (!crb(c,2)) { goto L_801D4800; } // 801D47F4
  c->r[29]=0u+0x00000000u; // 801D47F8
  goto L_801D485C; // 801D47FC
L_801D4800:;
  if (!crb(c,2)) { goto L_801D4818; } // 801D4800
  c->r[3]=c->r[25]+0x00001D4Cu; // 801D4804
  c->r[5]=c->r[24]+0x00001D28u; // 801D4808
  c->r[4]=0u+0x000001F1u; // 801D480C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4810
  c->lr=0x801D4818u; f_80212260(c); // 801D4814
L_801D4818:;
  c->r[29]=R32(c->r[15]+0x0000009Cu); // 801D4818
  cmps(c,0,(int32_t)c->r[29],0); // 801D481C
  if (!crb(c,2)) { goto L_801D4838; } // 801D4820
  c->r[3]=c->r[14]+0x00001CECu; // 801D4824
  c->r[5]=c->r[31]+0x00001CC8u; // 801D4828
  c->r[4]=0u+0x0000023Du; // 801D482C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4830
  c->lr=0x801D4838u; f_80212260(c); // 801D4834
L_801D4838:;
  c->r[29]=addc(c,c->r[29],0xFFFFFF10u,0); cr0(c,c->r[29]); // 801D4838
  if (!crb(c,2)) { goto L_801D485C; } // 801D483C
  c->r[3]=0u+0x803A0000u; // 801D4840
  c->r[4]=0u+0x803A0000u; // 801D4844
  c->r[5]=c->r[4]+0x00001CF8u; // 801D4848
  c->r[3]=c->r[3]+0x00001D1Cu; // 801D484C
  c->r[4]=0u+0x00000193u; // 801D4850
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4854
  c->lr=0x801D485Cu; f_80212260(c); // 801D4858
L_801D485C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D485C
  if (!crb(c,2)) { goto L_801D4874; } // 801D4860
  c->r[3]=c->r[26]|c->r[26]; // 801D4864
  c->lr=0x801D486Cu; f_80126EA0(c); // 801D4868
  c->r[18]=0u+0x00000000u; // 801D486C
  goto L_801D49C0; // 801D4870
L_801D4874:;
  c->r[3]=R8(c->r[29]+0x00000098u); // 801D4874
  c->r[0]=R32(c->r[29]+0x00000050u); // 801D4878
  c->r[3]=c->r[3]+c->r[0]; // 801D487C
  cmps(c,0,(int32_t)c->r[3],127); // 801D4880
  if (!crb(c,1)) { goto L_801D4890; } // 801D4884
  c->r[0]=0u+0x0000007Fu; // 801D4888
  goto L_801D4898; // 801D488C
L_801D4890:;
  c->r[0]=sraw(c,c->r[3],31); // 801D4890
  c->r[0]=c->r[3]&~c->r[0]; // 801D4894
L_801D4898:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D4898
  if (!crb(c,0)) { goto L_801D48B0; } // 801D489C
  c->r[3]=c->r[26]|c->r[26]; // 801D48A0
  c->lr=0x801D48A8u; f_80126EA0(c); // 801D48A4
  c->r[18]=0u+0x00000000u; // 801D48A8
  goto L_801D49C0; // 801D48AC
L_801D48B0:;
  c->r[3]=c->r[15]+0x000000A4u; // 801D48B0
  c->lr=0x801D48B8u; f_80126EA0(c); // 801D48B4
  c->r[3]=0u+0x00000002u; // 801D48B8
  c->lr=0x801D48C0u; f_801BF3C0(c); // 801D48BC
  c->lr=0x801D48C4u; f_801BF340(c); // 801D48C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D48C4
  if (crb(c,2)) { goto L_801D48FC; } // 801D48C8
  c->r[30]=R32(c->r[29]+0x0000009Cu); // 801D48CC
  c->r[3]=0u+0x00000002u; // 801D48D0
  c->lr=0x801D48D8u; f_801BF430(c); // 801D48D4
  c->r[7]=c->r[3]|c->r[3]; // 801D48D8
  c->r[3]=0u+0x803A0000u; // 801D48DC
  c->r[4]=0u+0x803A0000u; // 801D48E0
  c->r[6]=c->r[30]|c->r[30]; // 801D48E4
  c->r[5]=c->r[4]+0x00001C44u; // 801D48E8
  c->r[3]=c->r[3]+0x00001C80u; // 801D48EC
  c->r[4]=0u+0x00000085u; // 801D48F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D48F4
  c->lr=0x801D48FCu; f_80212300(c); // 801D48F8
L_801D48FC:;
  c->r[3]=c->r[29]|c->r[29]; // 801D48FC
  c->r[4]=0u+0x00000000u; // 801D4900
  c->lr=0x801D4908u; f_801BBBD0(c); // 801D4904
  c->r[3]=c->r[15]+0x000000A4u; // 801D4908
  c->lr=0x801D4910u; f_80126DC0(c); // 801D490C
L_801D4910:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D4910
  if (crb(c,2)) { IRQCHK(c); goto L_801D47BC; } // 801D4914
  c->r[23]=R32(c->r[15]+0x0000009Cu); // 801D4918
  c->r[24]=c->r[15]+0x0000009Cu; // 801D491C
  c->r[22]=0u+0x803A0000u; // 801D4920
  c->r[14]=0u+0x803A0000u; // 801D4924
  goto L_801D4978; // 801D4928
L_801D492C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D492C
  if (!crb(c,2)) { goto L_801D4948; } // 801D4930
  c->r[3]=c->r[22]+0x00001CECu; // 801D4934
  c->r[5]=c->r[14]+0x00001CC8u; // 801D4938
  c->r[4]=0u+0x0000023Du; // 801D493C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4940
  c->lr=0x801D4948u; f_80212260(c); // 801D4944
L_801D4948:;
  c->r[3]=R8(c->r[23]+0xFFFFFFA8u); // 801D4948
  c->r[0]=R32(c->r[23]+0xFFFFFF60u); // 801D494C
  c->r[3]=c->r[3]+c->r[0]; // 801D4950
  cmps(c,0,(int32_t)c->r[3],127); // 801D4954
  if (!crb(c,1)) { goto L_801D4964; } // 801D4958
  c->r[0]=0u+0x0000007Fu; // 801D495C
  goto L_801D496C; // 801D4960
L_801D4964:;
  c->r[0]=sraw(c,c->r[3],31); // 801D4964
  c->r[0]=c->r[3]&~c->r[0]; // 801D4968
L_801D496C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D496C
  if (crb(c,0)) { goto L_801D4980; } // 801D4970
  c->r[23]=R32(c->r[23]+0x00000000u); // 801D4974
L_801D4978:;
  cmpu(c,0,c->r[23],c->r[24]); // 801D4978
  if (!crb(c,2)) { IRQCHK(c); goto L_801D492C; } // 801D497C
L_801D4980:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D4980
  if (!crb(c,2)) { goto L_801D49A4; } // 801D4984
  c->r[3]=0u+0x803A0000u; // 801D4988
  c->r[5]=0u+0x803A0000u; // 801D498C
  c->r[3]=c->r[3]+0x00001CBCu; // 801D4990
  c->r[4]=0u+0x00000233u; // 801D4994
  c->r[5]=c->r[5]+0x00001C98u; // 801D4998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D499C
  c->lr=0x801D49A4u; f_80212260(c); // 801D49A0
L_801D49A4:;
  W32(c->r[1]+0x00000014u,c->r[23]); // 801D49A4
  c->r[3]=c->r[15]+0x00000098u; // 801D49A8
  c->r[4]=c->r[1]+0x00000014u; // 801D49AC
  c->r[5]=c->r[18]+0x000000F0u; // 801D49B0
  c->lr=0x801D49B8u; f_801E44B0(c); // 801D49B4
  c->r[3]=c->r[26]|c->r[26]; // 801D49B8
  c->lr=0x801D49C0u; f_80126EA0(c); // 801D49BC
L_801D49C0:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D49C0
  if (!crb(c,2)) { goto L_801D49D0; } // 801D49C4
  c->r[18]=0u+0x00000000u; // 801D49C8
  goto L_801D49F0; // 801D49CC
L_801D49D0:;
  c->r[3]=c->r[18]|c->r[18]; // 801D49D0
  c->r[4]=c->r[16]|c->r[16]; // 801D49D4
  c->lr=0x801D49DCu; f_801BD810(c); // 801D49D8
  cmps(c,0,(int32_t)c->r[17],0); // 801D49DC
  if (crb(c,2)) { goto L_801D49F0; } // 801D49E0
  c->r[3]=c->r[18]|c->r[18]; // 801D49E4
  c->r[4]=c->r[17]|c->r[17]; // 801D49E8
  c->lr=0x801D49F0u; f_801BD660(c); // 801D49EC
L_801D49F0:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D49F0
  if (!crb(c,2)) { goto L_801D4A34; } // 801D49F4
  c->r[3]=0u+0x00000003u; // 801D49F8
  c->lr=0x801D4A00u; f_801BF340(c); // 801D49FC
  cmps(c,0,(int32_t)c->r[3],0); // 801D4A00
  if (crb(c,2)) { goto L_801D4A20; } // 801D4A04
  c->r[6]=c->r[16]|c->r[16]; // 801D4A08
  c->r[3]=c->r[27]+0x00000000u; // 801D4A0C
  c->r[5]=c->r[27]+0x0000077Cu; // 801D4A10
  c->r[4]=0u+0x000004ECu; // 801D4A14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4A18
  c->lr=0x801D4A20u; f_80212300(c); // 801D4A1C
L_801D4A20:;
  c->lr=0x801D4A24u; f_801D76C0(c); // 801D4A20
  c->r[3]=c->r[3]+0x00000354u; // 801D4A24
  c->lr=0x801D4A2Cu; f_80126EA0(c); // 801D4A28
  c->r[3]=0u+0x00000009u; // 801D4A2C
  goto L_801D4D98; // 801D4A30
L_801D4A34:;
  c->r[14]=c->r[18]|c->r[18]; // 801D4A34
  goto L_801D4A50; // 801D4A38
L_801D4A3C:;
  c->lr=0x801D4A40u; f_801D76C0(c); // 801D4A3C
  c->r[3]=c->r[3]+0x00000354u; // 801D4A40
  c->lr=0x801D4A48u; f_80126EA0(c); // 801D4A44
  c->r[3]=0u+0x00000003u; // 801D4A48
  goto L_801D4D98; // 801D4A4C
L_801D4A50:;
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 801D4A50
  c->r[4]=c->r[14]|c->r[14]; // 801D4A54
  c->lr=0x801D4A5Cu; f_801D67E0(c); // 801D4A58
  cmps(c,0,(int32_t)c->r[3],0); // 801D4A5C
  if (!crb(c,2)) { goto L_801D4A8C; } // 801D4A60
  c->r[12]=R32(c->r[14]+0x00000000u); // 801D4A64
  c->r[3]=c->r[14]|c->r[14]; // 801D4A68
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4A6C
  c->ctr=c->r[12]; // 801D4A70
  if (true) { c->lr=0x801D4A78u; dispatch(c,c->ctr); } // 801D4A74
  c->lr=0x801D4A7Cu; f_801D76C0(c); // 801D4A78
  c->r[3]=c->r[3]+0x00000354u; // 801D4A7C
  c->lr=0x801D4A84u; f_80126EA0(c); // 801D4A80
  c->r[3]=0u+0x000000FFu; // 801D4A84
  goto L_801D4D98; // 801D4A88
L_801D4A8C:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801D4A8C
  c->r[4]=c->r[16]|c->r[16]; // 801D4A90
  c->lr=0x801D4A98u; f_801CFE40(c); // 801D4A94
  cmps(c,0,(int32_t)c->r[3],1); // 801D4A98
  if (crb(c,2)) { goto L_801D4AB4; } // 801D4A9C
  cmps(c,0,(int32_t)c->r[3],2); // 801D4AA0
  if (crb(c,2)) { goto L_801D4B74; } // 801D4AA4
  cmps(c,0,(int32_t)c->r[3],3); // 801D4AA8
  if (crb(c,2)) { goto L_801D4C20; } // 801D4AAC
  goto L_801D4CCC; // 801D4AB0
L_801D4AB4:;
  cmps(c,0,(int32_t)c->r[20],0); // 801D4AB4
  if (!crb(c,2)) { goto L_801D4AD0; } // 801D4AB8
  c->r[3]=c->r[27]+0x00000000u; // 801D4ABC
  c->r[5]=c->r[27]+0x000007C0u; // 801D4AC0
  c->r[4]=0u+0x00000502u; // 801D4AC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4AC8
  c->lr=0x801D4AD0u; f_80212260(c); // 801D4ACC
L_801D4AD0:;
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 801D4AD0
  c->r[4]=c->r[20]|c->r[20]; // 801D4AD4
  c->lr=0x801D4ADCu; f_801D6F70(c); // 801D4AD8
  c->r[3]=R32(c->r[15]+0x00000010u); // 801D4ADC
  c->r[4]=c->r[16]|c->r[16]; // 801D4AE0
  c->r[5]=c->r[1]+0x00000034u; // 801D4AE4
  c->lr=0x801D4AECu; f_801CFE60(c); // 801D4AE8
  cmps(c,0,(int32_t)c->r[3],0); // 801D4AEC
  if (!crb(c,2)) { goto L_801D4B1C; } // 801D4AF0
  c->r[12]=R32(c->r[20]+0x00000000u); // 801D4AF4
  c->r[3]=c->r[20]|c->r[20]; // 801D4AF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4AFC
  c->ctr=c->r[12]; // 801D4B00
  if (true) { c->lr=0x801D4B08u; dispatch(c,c->ctr); } // 801D4B04
  c->lr=0x801D4B0Cu; f_801D76C0(c); // 801D4B08
  c->r[3]=c->r[3]+0x00000354u; // 801D4B0C
  c->lr=0x801D4B14u; f_80126EA0(c); // 801D4B10
  c->r[3]=0u+0x00000003u; // 801D4B14
  goto L_801D4D98; // 801D4B18
L_801D4B1C:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 801D4B1C
  c->r[3]=c->r[15]|c->r[15]; // 801D4B20
  c->r[8]=R32(c->r[1]+0x00000074u); // 801D4B24
  c->r[4]=c->r[20]|c->r[20]; // 801D4B28
  c->r[9]=R32(c->r[1]+0x0000006Cu); // 801D4B2C
  c->r[5]=c->r[1]+0x00000048u; // 801D4B30
  c->r[10]=R32(c->r[1]+0x00000068u); // 801D4B34
  c->r[6]=c->r[1]+0x00000034u; // 801D4B38
  c->lr=0x801D4B40u; f_801D4DB0(c); // 801D4B3C
  cmps(c,0,(int32_t)c->r[3],0); // 801D4B40
  c->r[15]=c->r[3]|c->r[3]; // 801D4B44
  if (crb(c,2)) { goto L_801D4D08; } // 801D4B48
  c->r[12]=R32(c->r[20]+0x00000000u); // 801D4B4C
  c->r[3]=c->r[20]|c->r[20]; // 801D4B50
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4B54
  c->ctr=c->r[12]; // 801D4B58
  if (true) { c->lr=0x801D4B60u; dispatch(c,c->ctr); } // 801D4B5C
  c->lr=0x801D4B64u; f_801D76C0(c); // 801D4B60
  c->r[3]=c->r[3]+0x00000354u; // 801D4B64
  c->lr=0x801D4B6Cu; f_80126EA0(c); // 801D4B68
  c->r[3]=c->r[15]|c->r[15]; // 801D4B6C
  goto L_801D4D98; // 801D4B70
L_801D4B74:;
  cmps(c,0,(int32_t)c->r[19],0); // 801D4B74
  if (!crb(c,2)) { goto L_801D4B90; } // 801D4B78
  c->r[3]=c->r[27]+0x00000000u; // 801D4B7C
  c->r[5]=c->r[27]+0x000007ECu; // 801D4B80
  c->r[4]=0u+0x00000522u; // 801D4B84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4B88
  c->lr=0x801D4B90u; f_80212260(c); // 801D4B8C
L_801D4B90:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801D4B90
  c->r[4]=c->r[16]|c->r[16]; // 801D4B94
  c->r[5]=c->r[1]+0x00000020u; // 801D4B98
  c->lr=0x801D4BA0u; f_801CFE70(c); // 801D4B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801D4BA0
  if (!crb(c,2)) { goto L_801D4BD0; } // 801D4BA4
  c->r[12]=R32(c->r[19]+0x00000000u); // 801D4BA8
  c->r[3]=c->r[19]|c->r[19]; // 801D4BAC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4BB0
  c->ctr=c->r[12]; // 801D4BB4
  if (true) { c->lr=0x801D4BBCu; dispatch(c,c->ctr); } // 801D4BB8
  c->lr=0x801D4BC0u; f_801D76C0(c); // 801D4BBC
  c->r[3]=c->r[3]+0x00000354u; // 801D4BC0
  c->lr=0x801D4BC8u; f_80126EA0(c); // 801D4BC4
  c->r[3]=0u+0x00000003u; // 801D4BC8
  goto L_801D4D98; // 801D4BCC
L_801D4BD0:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 801D4BD0
  c->r[3]=c->r[15]|c->r[15]; // 801D4BD4
  c->r[8]=R32(c->r[1]+0x00000074u); // 801D4BD8
  c->r[4]=c->r[19]|c->r[19]; // 801D4BDC
  c->r[5]=c->r[1]+0x00000048u; // 801D4BE0
  c->r[6]=c->r[1]+0x00000020u; // 801D4BE4
  c->lr=0x801D4BECu; f_801D5280(c); // 801D4BE8
  cmps(c,0,(int32_t)c->r[3],0); // 801D4BEC
  c->r[15]=c->r[3]|c->r[3]; // 801D4BF0
  if (crb(c,2)) { goto L_801D4D08; } // 801D4BF4
  c->r[12]=R32(c->r[19]+0x00000000u); // 801D4BF8
  c->r[3]=c->r[19]|c->r[19]; // 801D4BFC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4C00
  c->ctr=c->r[12]; // 801D4C04
  if (true) { c->lr=0x801D4C0Cu; dispatch(c,c->ctr); } // 801D4C08
  c->lr=0x801D4C10u; f_801D76C0(c); // 801D4C0C
  c->r[3]=c->r[3]+0x00000354u; // 801D4C10
  c->lr=0x801D4C18u; f_80126EA0(c); // 801D4C14
  c->r[3]=c->r[15]|c->r[15]; // 801D4C18
  goto L_801D4D98; // 801D4C1C
L_801D4C20:;
  cmps(c,0,(int32_t)c->r[18],0); // 801D4C20
  if (!crb(c,2)) { goto L_801D4C3C; } // 801D4C24
  c->r[3]=c->r[27]+0x00000000u; // 801D4C28
  c->r[5]=c->r[27]+0x00000818u; // 801D4C2C
  c->r[4]=0u+0x0000053Du; // 801D4C30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4C34
  c->lr=0x801D4C3Cu; f_80212260(c); // 801D4C38
L_801D4C3C:;
  c->r[3]=R32(c->r[15]+0x00000010u); // 801D4C3C
  c->r[4]=c->r[16]|c->r[16]; // 801D4C40
  c->r[5]=c->r[1]+0x00000028u; // 801D4C44
  c->lr=0x801D4C4Cu; f_801CFE80(c); // 801D4C48
  cmps(c,0,(int32_t)c->r[3],0); // 801D4C4C
  if (!crb(c,2)) { goto L_801D4C7C; } // 801D4C50
  c->r[12]=R32(c->r[18]+0x00000000u); // 801D4C54
  c->r[3]=c->r[18]|c->r[18]; // 801D4C58
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4C5C
  c->ctr=c->r[12]; // 801D4C60
  if (true) { c->lr=0x801D4C68u; dispatch(c,c->ctr); } // 801D4C64
  c->lr=0x801D4C6Cu; f_801D76C0(c); // 801D4C68
  c->r[3]=c->r[3]+0x00000354u; // 801D4C6C
  c->lr=0x801D4C74u; f_80126EA0(c); // 801D4C70
  c->r[3]=0u+0x00000003u; // 801D4C74
  goto L_801D4D98; // 801D4C78
L_801D4C7C:;
  c->r[7]=R32(c->r[1]+0x00000078u); // 801D4C7C
  c->r[3]=c->r[15]|c->r[15]; // 801D4C80
  c->r[8]=R32(c->r[1]+0x00000074u); // 801D4C84
  c->r[4]=c->r[18]|c->r[18]; // 801D4C88
  c->r[5]=c->r[1]+0x00000048u; // 801D4C8C
  c->r[6]=c->r[1]+0x00000028u; // 801D4C90
  c->lr=0x801D4C98u; f_801D5570(c); // 801D4C94
  cmps(c,0,(int32_t)c->r[3],0); // 801D4C98
  c->r[15]=c->r[3]|c->r[3]; // 801D4C9C
  if (crb(c,2)) { goto L_801D4D08; } // 801D4CA0
  c->r[12]=R32(c->r[18]+0x00000000u); // 801D4CA4
  c->r[3]=c->r[18]|c->r[18]; // 801D4CA8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4CAC
  c->ctr=c->r[12]; // 801D4CB0
  if (true) { c->lr=0x801D4CB8u; dispatch(c,c->ctr); } // 801D4CB4
  c->lr=0x801D4CBCu; f_801D76C0(c); // 801D4CB8
  c->r[3]=c->r[3]+0x00000354u; // 801D4CBC
  c->lr=0x801D4CC4u; f_80126EA0(c); // 801D4CC0
  c->r[3]=c->r[15]|c->r[15]; // 801D4CC4
  goto L_801D4D98; // 801D4CC8
L_801D4CCC:;
  c->r[3]=c->r[27]+0x00000000u; // 801D4CCC
  c->r[5]=c->r[27]+0x00000844u; // 801D4CD0
  c->r[4]=0u+0x00000557u; // 801D4CD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4CD8
  c->lr=0x801D4CE0u; f_80212260(c); // 801D4CDC
  c->r[12]=R32(c->r[14]+0x00000000u); // 801D4CE0
  c->r[3]=c->r[14]|c->r[14]; // 801D4CE4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4CE8
  c->ctr=c->r[12]; // 801D4CEC
  if (true) { c->lr=0x801D4CF4u; dispatch(c,c->ctr); } // 801D4CF0
  c->lr=0x801D4CF8u; f_801D76C0(c); // 801D4CF4
  c->r[3]=c->r[3]+0x00000354u; // 801D4CF8
  c->lr=0x801D4D00u; f_80126EA0(c); // 801D4CFC
  c->r[3]=0u+0x00000003u; // 801D4D00
  goto L_801D4D98; // 801D4D04
L_801D4D08:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D4D08
  if (crb(c,2)) { goto L_801D4D4C; } // 801D4D0C
  c->r[3]=c->r[21]|c->r[21]; // 801D4D10
  c->r[4]=c->r[14]|c->r[14]; // 801D4D14
  c->lr=0x801D4D1Cu; f_801C05F0(c); // 801D4D18
  cmps(c,0,(int32_t)c->r[3],0); // 801D4D1C
  if (!crb(c,2)) { goto L_801D4D4C; } // 801D4D20
  c->r[12]=R32(c->r[14]+0x00000000u); // 801D4D24
  c->r[3]=c->r[14]|c->r[14]; // 801D4D28
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4D2C
  c->ctr=c->r[12]; // 801D4D30
  if (true) { c->lr=0x801D4D38u; dispatch(c,c->ctr); } // 801D4D34
  c->lr=0x801D4D3Cu; f_801D76C0(c); // 801D4D38
  c->r[3]=c->r[3]+0x00000354u; // 801D4D3C
  c->lr=0x801D4D44u; f_80126EA0(c); // 801D4D40
  c->r[3]=0u+0x000000FFu; // 801D4D44
  goto L_801D4D98; // 801D4D48
L_801D4D4C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D4D4C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D50
  if (crb(c,2)) { goto L_801D4D64; } // 801D4D54
  c->r[3]=c->r[14]|c->r[14]; // 801D4D58
  c->r[4]=c->r[0]|c->r[0]; // 801D4D5C
  c->lr=0x801D4D64u; f_801BCEF0(c); // 801D4D60
L_801D4D64:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801D4D64
  cmps(c,0,(int32_t)c->r[0],0); // 801D4D68
  if (crb(c,2)) { goto L_801D4D7C; } // 801D4D6C
  c->r[4]=R32(c->r[1]+0x00000070u); // 801D4D70
  c->r[3]=c->r[14]|c->r[14]; // 801D4D74
  c->lr=0x801D4D7Cu; f_801BD140(c); // 801D4D78
L_801D4D7C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D4D7C
  c->r[4]=c->r[14]|c->r[14]; // 801D4D80
  c->lr=0x801D4D88u; f_801D5E20(c); // 801D4D84
  c->lr=0x801D4D8Cu; f_801D76C0(c); // 801D4D88
  c->r[3]=c->r[3]+0x00000354u; // 801D4D8C
  c->lr=0x801D4D94u; f_80126EA0(c); // 801D4D90
  c->r[3]=0u+0x00000000u; // 801D4D94
L_801D4D98:;
  c->r[11]=c->r[1]+0x000000D0u; // 801D4D98
  c->lr=0x801D4DA0u; f_802E69E4(c); // 801D4D9C
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801D4DA0
  c->lr=c->r[0]; // 801D4DA4
  c->r[1]=c->r[1]+0x000000D0u; // 801D4DA8
  return; // 801D4DAC
}

// fn_801D4DB0
void f_801D4DB0(Ctx* __restrict c) {
  trace_call(0x801D4DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4DB0
  c->r[0]=c->lr; // 801D4DB4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D4DB8
  c->r[11]=c->r[1]+0x00000070u; // 801D4DBC
  c->lr=0x801D4DC4u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D4DC0
  cmps(c,0,(int32_t)c->r[6],0); // 801D4DC4
  c->r[31]=0u+0x803A0000u; // 801D4DC8
  c->r[23]=c->r[3]|c->r[3]; // 801D4DCC
  c->r[24]=c->r[4]|c->r[4]; // 801D4DD0
  c->r[25]=c->r[5]|c->r[5]; // 801D4DD4
  c->r[26]=c->r[6]|c->r[6]; // 801D4DD8
  c->r[27]=c->r[7]|c->r[7]; // 801D4DDC
  c->r[28]=c->r[8]|c->r[8]; // 801D4DE0
  c->r[17]=c->r[9]|c->r[9]; // 801D4DE4
  c->r[16]=c->r[10]|c->r[10]; // 801D4DE8
  c->r[31]=c->r[31]+0x00001080u; // 801D4DEC
  if (!crb(c,2)) { goto L_801D4E08; } // 801D4DF0
  c->r[3]=c->r[31]+0x00000000u; // 801D4DF4
  c->r[5]=c->r[31]+0x00000860u; // 801D4DF8
  c->r[4]=0u+0x0000058Eu; // 801D4DFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4E00
  c->lr=0x801D4E08u; f_80212260(c); // 801D4E04
L_801D4E08:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 801D4E08
  cmps(c,0,(int32_t)c->r[17],0); // 801D4E0C
  c->r[30]=0u+0x00000000u; // 801D4E10
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801D4E14
  c->r[29]=0u+0x00000000u; // 801D4E18
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D4E1C
  if (crb(c,2)) { goto L_801D4E7C; } // 801D4E20
  c->r[0]=0u+0x00000000u; // 801D4E24
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D4E28
  c->r[30]=c->r[17]|c->r[17]; // 801D4E2C
  c->r[4]=c->r[17]|c->r[17]; // 801D4E30
  c->r[3]=c->r[1]+0x00000020u; // 801D4E34
  c->lr=0x801D4E3Cu; f_801C8DF0(c); // 801D4E38
  cmps(c,0,(int32_t)c->r[16],0); // 801D4E3C
  if (crb(c,2)) { goto L_801D4E64; } // 801D4E40
  c->r[4]=c->r[16]|c->r[16]; // 801D4E44
  c->r[3]=c->r[1]+0x00000020u; // 801D4E48
  c->r[5]=c->r[1]+0x0000000Cu; // 801D4E4C
  c->lr=0x801D4E54u; f_801C8FB0(c); // 801D4E50
  cmps(c,0,(int32_t)c->r[3],0); // 801D4E54
  if (!crb(c,2)) { goto L_801D4E64; } // 801D4E58
  c->r[3]=0u+0x0000000Bu; // 801D4E5C
  goto L_801D525C; // 801D4E60
L_801D4E64:;
  c->r[3]=c->r[1]+0x00000020u; // 801D4E64
  c->lr=0x801D4E6Cu; f_801C8F50(c); // 801D4E68
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801D4E6C
  c->r[5]=c->r[1]+0x00000008u; // 801D4E70
  c->lr=0x801D4E78u; f_801C7960(c); // 801D4E74
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801D4E78
L_801D4E7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D4E7C
  if (!crb(c,2)) { goto L_801D4ED0; } // 801D4E80
  c->r[4]=R32(c->r[25]+0x00000000u); // 801D4E84
  c->r[3]=c->r[23]|c->r[23]; // 801D4E88
  c->lr=0x801D4E90u; f_801D3B50(c); // 801D4E8C
  c->r[0]=R32(c->r[26]+0x00000000u); // 801D4E90
  cmps(c,0,(int32_t)c->r[16],0); // 801D4E94
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D4E98
  c->r[30]=c->r[3]|c->r[3]; // 801D4E9C
  if (crb(c,2)) { goto L_801D4ED0; } // 801D4EA0
  c->r[4]=c->r[30]|c->r[30]; // 801D4EA4
  c->r[3]=c->r[1]+0x00000018u; // 801D4EA8
  c->lr=0x801D4EB0u; f_801C8DF0(c); // 801D4EAC
  c->r[4]=c->r[16]|c->r[16]; // 801D4EB0
  c->r[3]=c->r[1]+0x00000018u; // 801D4EB4
  c->r[5]=c->r[1]+0x0000000Cu; // 801D4EB8
  c->lr=0x801D4EC0u; f_801C8FB0(c); // 801D4EBC
  cmps(c,0,(int32_t)c->r[3],0); // 801D4EC0
  if (!crb(c,2)) { goto L_801D4ED0; } // 801D4EC4
  c->r[3]=0u+0x0000000Bu; // 801D4EC8
  goto L_801D525C; // 801D4ECC
L_801D4ED0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D4ED0
  if (!crb(c,2)) { goto L_801D4F70; } // 801D4ED4
  c->r[17]=R32(c->r[24]+0x00000004u); // 801D4ED8
  cmps(c,0,(int32_t)c->r[17],0); // 801D4EDC
  if (!crb(c,2)) { goto L_801D4EEC; } // 801D4EE0
  c->r[3]=0u+0x00000004u; // 801D4EE4
  goto L_801D525C; // 801D4EE8
L_801D4EEC:;
  c->r[16]=addc(c,c->r[24],0x00000290u,0); cr0(c,c->r[16]); // 801D4EEC
  if (!crb(c,2)) { goto L_801D4F08; } // 801D4EF0
  c->r[3]=c->r[31]+0x00000000u; // 801D4EF4
  c->r[5]=c->r[31]+0x00000888u; // 801D4EF8
  c->r[4]=0u+0x000005C5u; // 801D4EFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4F00
  c->lr=0x801D4F08u; f_80212260(c); // 801D4F04
L_801D4F08:;
  c->r[3]=R32(c->r[23]+0x00000010u); // 801D4F08
  c->r[5]=c->r[16]|c->r[16]; // 801D4F0C
  c->r[4]=R32(c->r[25]+0x00000000u); // 801D4F10
  c->r[6]=0u+0x00000200u; // 801D4F14
  c->lr=0x801D4F1Cu; f_801CFF20(c); // 801D4F18
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F1C
  c->r[29]=c->r[3]|c->r[3]; // 801D4F20
  if (!crb(c,2)) { goto L_801D4F30; } // 801D4F24
  c->r[3]=0u+0x00000006u; // 801D4F28
  goto L_801D525C; // 801D4F2C
L_801D4F30:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D4F30
  c->r[12]=R32(c->r[12]+0x00000040u); // 801D4F34
  c->ctr=c->r[12]; // 801D4F38
  if (true) { c->lr=0x801D4F40u; dispatch(c,c->ctr); } // 801D4F3C
  c->r[16]=c->r[3]|c->r[3]; // 801D4F40
  c->r[3]=c->r[17]|c->r[17]; // 801D4F44
  c->lr=0x801D4F4Cu; f_801C7ED0(c); // 801D4F48
  cmpu(c,0,c->r[3],c->r[16]); // 801D4F4C
  if (!crb(c,0)) { goto L_801D4F70; } // 801D4F50
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D4F54
  c->r[3]=c->r[29]|c->r[29]; // 801D4F58
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4F5C
  c->ctr=c->r[12]; // 801D4F60
  if (true) { c->lr=0x801D4F68u; dispatch(c,c->ctr); } // 801D4F64
  c->r[3]=0u+0x00000005u; // 801D4F68
  goto L_801D525C; // 801D4F6C
L_801D4F70:;
  c->r[4]=R32(c->r[23]+0x00000030u); // 801D4F70
  c->r[3]=c->r[24]|c->r[24]; // 801D4F74
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D4F78
  c->r[6]=c->r[23]+0x00000020u; // 801D4F7C
  c->lr=0x801D4F84u; f_801CB2D0(c); // 801D4F80
  c->r[16]=0u+0x803A0000u; // 801D4F84
  c->r[17]=0u+0x803A0000u; // 801D4F88
  c->r[19]=0u+0x803A0000u; // 801D4F8C
  c->r[20]=0u+0x803A0000u; // 801D4F90
  c->r[21]=0u+0x803A0000u; // 801D4F94
  c->r[22]=0u+0x803A0000u; // 801D4F98
  goto L_801D510C; // 801D4F9C
L_801D4FA0:;
  cmps(c,0,(int32_t)c->r[3],1); // 801D4FA0
  if (!crb(c,2)) { goto L_801D5104; } // 801D4FA4
  c->r[0]=R32(c->r[23]+0x00000048u); // 801D4FA8
  cmpu(c,0,c->r[0],0x00000001u); // 801D4FAC
  if (!crb(c,2)) { goto L_801D5000; } // 801D4FB0
  cmps(c,0,(int32_t)c->r[29],0); // 801D4FB4
  if (crb(c,2)) { goto L_801D4FD0; } // 801D4FB8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D4FBC
  c->r[3]=c->r[29]|c->r[29]; // 801D4FC0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D4FC4
  c->ctr=c->r[12]; // 801D4FC8
  if (true) { c->lr=0x801D4FD0u; dispatch(c,c->ctr); } // 801D4FCC
L_801D4FD0:;
  c->r[3]=0u+0x00000004u; // 801D4FD0
  c->lr=0x801D4FD8u; f_801BF340(c); // 801D4FD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D4FD8
  if (crb(c,2)) { goto L_801D4FF8; } // 801D4FDC
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 801D4FE0
  c->r[3]=c->r[31]+0x00000000u; // 801D4FE4
  c->r[5]=c->r[31]+0x000008C0u; // 801D4FE8
  c->r[4]=0u+0x000005F0u; // 801D4FEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D4FF0
  c->lr=0x801D4FF8u; f_80212300(c); // 801D4FF4
L_801D4FF8:;
  c->r[3]=0u+0x00000009u; // 801D4FF8
  goto L_801D525C; // 801D4FFC
L_801D5000:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D5000
  if (!crb(c,2)) { goto L_801D5010; } // 801D5004
  c->r[18]=0u+0x00000000u; // 801D5008
  goto L_801D5064; // 801D500C
L_801D5010:;
  if (!crb(c,2)) { goto L_801D5028; } // 801D5010
  c->r[3]=c->r[16]+0x00001ECCu; // 801D5014
  c->r[5]=c->r[17]+0x00001EA8u; // 801D5018
  c->r[4]=0u+0x000001F1u; // 801D501C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5020
  c->lr=0x801D5028u; f_80212260(c); // 801D5024
L_801D5028:;
  c->r[18]=R32(c->r[23]+0x0000004Cu); // 801D5028
  cmps(c,0,(int32_t)c->r[18],0); // 801D502C
  if (!crb(c,2)) { goto L_801D5048; } // 801D5030
  c->r[3]=c->r[19]+0xFFFFFFACu; // 801D5034
  c->r[5]=c->r[20]+0xFFFFFF88u; // 801D5038
  c->r[4]=0u+0x0000023Du; // 801D503C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5040
  c->lr=0x801D5048u; f_80212260(c); // 801D5044
L_801D5048:;
  c->r[18]=addc(c,c->r[18],0xFFFFFF10u,0); cr0(c,c->r[18]); // 801D5048
  if (!crb(c,2)) { goto L_801D5064; } // 801D504C
  c->r[3]=c->r[21]+0x00001E9Cu; // 801D5050
  c->r[5]=c->r[22]+0x00001E78u; // 801D5054
  c->r[4]=0u+0x00000193u; // 801D5058
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D505C
  c->lr=0x801D5064u; f_80212260(c); // 801D5060
L_801D5064:;
  cmpu(c,0,c->r[24],c->r[18]); // 801D5064
  if (!crb(c,2)) { goto L_801D50B8; } // 801D5068
  cmps(c,0,(int32_t)c->r[29],0); // 801D506C
  if (crb(c,2)) { goto L_801D5088; } // 801D5070
  c->r[12]=R32(c->r[29]+0x00000000u); // 801D5074
  c->r[3]=c->r[29]|c->r[29]; // 801D5078
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D507C
  c->ctr=c->r[12]; // 801D5080
  if (true) { c->lr=0x801D5088u; dispatch(c,c->ctr); } // 801D5084
L_801D5088:;
  c->r[3]=0u+0x00000004u; // 801D5088
  c->lr=0x801D5090u; f_801BF340(c); // 801D508C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5090
  if (crb(c,2)) { goto L_801D50B0; } // 801D5094
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 801D5098
  c->r[3]=c->r[31]+0x00000000u; // 801D509C
  c->r[5]=c->r[31]+0x000008C0u; // 801D50A0
  c->r[4]=0u+0x00000600u; // 801D50A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D50A8
  c->lr=0x801D50B0u; f_80212300(c); // 801D50AC
L_801D50B0:;
  c->r[3]=0u+0x00000009u; // 801D50B0
  goto L_801D525C; // 801D50B4
L_801D50B8:;
  c->r[3]=0u+0x00000004u; // 801D50B8
  c->lr=0x801D50C0u; f_801BF340(c); // 801D50BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D50C0
  if (crb(c,2)) { goto L_801D50E0; } // 801D50C4
  c->r[6]=R32(c->r[18]+0x0000009Cu); // 801D50C8
  c->r[3]=c->r[31]+0x00000000u; // 801D50CC
  c->r[5]=c->r[31]+0x00000900u; // 801D50D0
  c->r[4]=0u+0x00000609u; // 801D50D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D50D8
  c->lr=0x801D50E0u; f_80212300(c); // 801D50DC
L_801D50E0:;
  c->r[3]=c->r[18]|c->r[18]; // 801D50E0
  c->r[4]=0u+0x00000000u; // 801D50E4
  c->lr=0x801D50ECu; f_801BBBD0(c); // 801D50E8
  c->r[4]=R32(c->r[23]+0x00000030u); // 801D50EC
  c->r[3]=c->r[24]|c->r[24]; // 801D50F0
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D50F4
  c->r[6]=c->r[23]+0x00000020u; // 801D50F8
  c->lr=0x801D5100u; f_801CB2D0(c); // 801D50FC
  goto L_801D510C; // 801D5100
L_801D5104:;
  c->r[3]=0u+0x000000FFu; // 801D5104
  goto L_801D525C; // 801D5108
L_801D510C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D510C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D4FA0; } // 801D5110
  cmps(c,0,(int32_t)c->r[24],0); // 801D5114
  if (!crb(c,2)) { goto L_801D5130; } // 801D5118
  c->r[3]=c->r[31]+0x00000000u; // 801D511C
  c->r[5]=c->r[31]+0x0000093Cu; // 801D5120
  c->r[4]=0u+0x00000716u; // 801D5124
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5128
  c->lr=0x801D5130u; f_80212260(c); // 801D512C
L_801D5130:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D5130
  if (!crb(c,2)) { goto L_801D514C; } // 801D5134
  c->r[3]=c->r[31]+0x00000000u; // 801D5138
  c->r[5]=c->r[31]+0x00000964u; // 801D513C
  c->r[4]=0u+0x00000717u; // 801D5140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5144
  c->lr=0x801D514Cu; f_80212260(c); // 801D5148
L_801D514C:;
  c->r[4]=R32(c->r[25]+0x00000010u); // 801D514C
  c->r[0]=0u+0x43300000u; // 801D5150
  W32(c->r[1]+0x00000028u,c->r[0]); // 801D5154
  c->r[3]=c->r[24]|c->r[24]; // 801D5158
  c->r[0]=c->r[4]^0x80000000u; // 801D515C
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[2]=RF64(ea);} // 801D5160
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D5164
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5168
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801D516C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D5170
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801D5174
  c->lr=0x801D517Cu; f_801BD1F0(c); // 801D5178
  c->r[4]=R32(c->r[25]+0x00000014u); // 801D517C
  c->r[3]=c->r[24]|c->r[24]; // 801D5180
  c->lr=0x801D5188u; f_801BD5A0(c); // 801D5184
  c->r[4]=R32(c->r[25]+0x00000018u); // 801D5188
  c->r[3]=c->r[24]|c->r[24]; // 801D518C
  c->lr=0x801D5194u; f_801BD5E0(c); // 801D5190
  c->r[4]=R32(c->r[25]+0x0000001Cu); // 801D5194
  c->r[3]=c->r[24]|c->r[24]; // 801D5198
  c->lr=0x801D51A0u; f_801BD620(c); // 801D519C
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801D51A0
  c->r[3]=c->r[24]|c->r[24]; // 801D51A4
  c->lr=0x801D51ACu; f_801CB820(c); // 801D51A8
  c->r[4]=R8(c->r[26]+0x00000010u); // 801D51AC
  c->r[3]=c->r[24]|c->r[24]; // 801D51B0
  c->lr=0x801D51B8u; f_801CB8A0(c); // 801D51B4
  c->r[4]=R32(c->r[23]+0x00000034u); // 801D51B8
  c->r[3]=c->r[24]|c->r[24]; // 801D51BC
  c->r[5]=R32(c->r[23]+0x00000038u); // 801D51C0
  c->lr=0x801D51C8u; f_801CB8B0(c); // 801D51C4
  cmps(c,0,(int32_t)c->r[27],0); // 801D51C8
  if (crb(c,2)) { goto L_801D51E4; } // 801D51CC
  cmps(c,0,(int32_t)c->r[27],1); // 801D51D0
  if (crb(c,2)) { goto L_801D51EC; } // 801D51D4
  cmps(c,0,(int32_t)c->r[27],2); // 801D51D8
  if (crb(c,2)) { goto L_801D51F4; } // 801D51DC
  goto L_801D5200; // 801D51E0
L_801D51E4:;
  c->r[16]=0u+0x00000001u; // 801D51E4
  goto L_801D5208; // 801D51E8
L_801D51EC:;
  c->r[16]=0u+0x00000000u; // 801D51EC
  goto L_801D5208; // 801D51F0
L_801D51F4:;
  c->r[16]=0u+0x00000000u; // 801D51F4
  c->r[28]=0u+0x00000000u; // 801D51F8
  goto L_801D5208; // 801D51FC
L_801D5200:;
  c->r[16]=0u+0x00000000u; // 801D5200
  c->r[28]=0u+0x00000000u; // 801D5204
L_801D5208:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D5208
  if (crb(c,2)) { goto L_801D5240; } // 801D520C
  c->r[4]=c->r[30]|c->r[30]; // 801D5210
  c->r[3]=c->r[1]+0x00000010u; // 801D5214
  c->lr=0x801D521Cu; f_801C8DF0(c); // 801D5218
  c->r[3]=c->r[1]+0x00000010u; // 801D521C
  c->lr=0x801D5224u; f_801C8F50(c); // 801D5220
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801D5224
  c->r[4]=c->r[3]|c->r[3]; // 801D5228
  c->r[3]=c->r[24]|c->r[24]; // 801D522C
  c->r[6]=c->r[16]|c->r[16]; // 801D5230
  c->r[7]=c->r[28]|c->r[28]; // 801D5234
  c->lr=0x801D523Cu; f_801CB380(c); // 801D5238
  goto L_801D5258; // 801D523C
L_801D5240:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801D5240
  c->r[3]=c->r[24]|c->r[24]; // 801D5244
  c->r[4]=c->r[29]|c->r[29]; // 801D5248
  c->r[6]=c->r[16]|c->r[16]; // 801D524C
  c->r[7]=c->r[28]|c->r[28]; // 801D5250
  c->lr=0x801D5258u; f_801CB420(c); // 801D5254
L_801D5258:;
  c->r[3]=0u+0x00000000u; // 801D5258
L_801D525C:;
  c->r[11]=c->r[1]+0x00000070u; // 801D525C
  c->lr=0x801D5264u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5260
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D5264
  c->lr=c->r[0]; // 801D5268
  c->r[1]=c->r[1]+0x00000070u; // 801D526C
  return; // 801D5270
}

// fn_801D5280
void f_801D5280(Ctx* __restrict c) {
  trace_call(0x801D5280u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5280
  c->r[0]=c->lr; // 801D5284
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D5288
  c->r[11]=c->r[1]+0x00000050u; // 801D528C
  c->lr=0x801D5294u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5290
  c->r[31]=c->r[5]|c->r[5]; // 801D5294
  c->r[21]=0u+0x803A0000u; // 801D5298
  c->r[29]=c->r[3]|c->r[3]; // 801D529C
  c->r[30]=c->r[4]|c->r[4]; // 801D52A0
  c->r[18]=c->r[6]|c->r[6]; // 801D52A4
  c->r[5]=R16(c->r[6]+0x00000004u); // 801D52A8
  c->r[6]=R16(c->r[6]+0x00000006u); // 801D52AC
  c->r[19]=c->r[7]|c->r[7]; // 801D52B0
  c->r[20]=c->r[8]|c->r[8]; // 801D52B4
  c->r[3]=c->r[30]|c->r[30]; // 801D52B8
  c->r[21]=c->r[21]+0x00001080u; // 801D52BC
  c->r[4]=c->r[29]+0x000000C8u; // 801D52C0
  c->lr=0x801D52C8u; f_801DC2D0(c); // 801D52C4
  c->r[22]=0u+0x803A0000u; // 801D52C8
  c->r[23]=0u+0x803A0000u; // 801D52CC
  c->r[25]=0u+0x803A0000u; // 801D52D0
  c->r[26]=0u+0x803A0000u; // 801D52D4
  c->r[27]=0u+0x803A0000u; // 801D52D8
  c->r[28]=0u+0x803A0000u; // 801D52DC
  goto L_801D5418; // 801D52E0
L_801D52E4:;
  cmps(c,0,(int32_t)c->r[3],1); // 801D52E4
  if (!crb(c,2)) { goto L_801D5410; } // 801D52E8
  c->r[0]=R32(c->r[29]+0x00000070u); // 801D52EC
  cmpu(c,0,c->r[0],0x00000001u); // 801D52F0
  if (!crb(c,2)) { goto L_801D5328; } // 801D52F4
  c->r[3]=0u+0x00000004u; // 801D52F8
  c->lr=0x801D5300u; f_801BF340(c); // 801D52FC
  cmps(c,0,(int32_t)c->r[3],0); // 801D5300
  if (crb(c,2)) { goto L_801D5320; } // 801D5304
  c->r[6]=R32(c->r[30]+0x0000009Cu); // 801D5308
  c->r[3]=c->r[21]+0x00000000u; // 801D530C
  c->r[5]=c->r[21]+0x00000990u; // 801D5310
  c->r[4]=0u+0x00000670u; // 801D5314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5318
  c->lr=0x801D5320u; f_80212300(c); // 801D531C
L_801D5320:;
  c->r[3]=0u+0x00000009u; // 801D5320
  goto L_801D5554; // 801D5324
L_801D5328:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D5328
  if (!crb(c,2)) { goto L_801D5338; } // 801D532C
  c->r[24]=0u+0x00000000u; // 801D5330
  goto L_801D538C; // 801D5334
L_801D5338:;
  if (!crb(c,2)) { goto L_801D5350; } // 801D5338
  c->r[3]=c->r[22]+0x00001E0Cu; // 801D533C
  c->r[5]=c->r[23]+0x00001DE8u; // 801D5340
  c->r[4]=0u+0x000001F1u; // 801D5344
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5348
  c->lr=0x801D5350u; f_80212260(c); // 801D534C
L_801D5350:;
  c->r[24]=R32(c->r[29]+0x00000074u); // 801D5350
  cmps(c,0,(int32_t)c->r[24],0); // 801D5354
  if (!crb(c,2)) { goto L_801D5370; } // 801D5358
  c->r[3]=c->r[25]+0x00001DACu; // 801D535C
  c->r[5]=c->r[26]+0x00001D88u; // 801D5360
  c->r[4]=0u+0x0000023Du; // 801D5364
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5368
  c->lr=0x801D5370u; f_80212260(c); // 801D536C
L_801D5370:;
  c->r[24]=addc(c,c->r[24],0xFFFFFF10u,0); cr0(c,c->r[24]); // 801D5370
  if (!crb(c,2)) { goto L_801D538C; } // 801D5374
  c->r[3]=c->r[27]+0x00001DDCu; // 801D5378
  c->r[5]=c->r[28]+0x00001DB8u; // 801D537C
  c->r[4]=0u+0x00000193u; // 801D5380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5384
  c->lr=0x801D538Cu; f_80212260(c); // 801D5388
L_801D538C:;
  cmpu(c,0,c->r[30],c->r[24]); // 801D538C
  if (!crb(c,2)) { goto L_801D53C4; } // 801D5390
  c->r[3]=0u+0x00000004u; // 801D5394
  c->lr=0x801D539Cu; f_801BF340(c); // 801D5398
  cmps(c,0,(int32_t)c->r[3],0); // 801D539C
  if (crb(c,2)) { goto L_801D53BC; } // 801D53A0
  c->r[6]=R32(c->r[30]+0x0000009Cu); // 801D53A4
  c->r[3]=c->r[21]+0x00000000u; // 801D53A8
  c->r[5]=c->r[21]+0x00000990u; // 801D53AC
  c->r[4]=0u+0x0000067Cu; // 801D53B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D53B4
  c->lr=0x801D53BCu; f_80212300(c); // 801D53B8
L_801D53BC:;
  c->r[3]=0u+0x00000009u; // 801D53BC
  goto L_801D5554; // 801D53C0
L_801D53C4:;
  c->r[3]=0u+0x00000005u; // 801D53C4
  c->lr=0x801D53CCu; f_801BF340(c); // 801D53C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D53CC
  if (crb(c,2)) { goto L_801D53EC; } // 801D53D0
  c->r[6]=R32(c->r[24]+0x0000009Cu); // 801D53D4
  c->r[3]=c->r[21]+0x00000000u; // 801D53D8
  c->r[5]=c->r[21]+0x000009D4u; // 801D53DC
  c->r[4]=0u+0x00000685u; // 801D53E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D53E4
  c->lr=0x801D53ECu; f_80212300(c); // 801D53E8
L_801D53EC:;
  c->r[3]=c->r[24]|c->r[24]; // 801D53EC
  c->r[4]=0u+0x00000000u; // 801D53F0
  c->lr=0x801D53F8u; f_801BBBD0(c); // 801D53F4
  c->r[5]=R16(c->r[18]+0x00000004u); // 801D53F8
  c->r[3]=c->r[30]|c->r[30]; // 801D53FC
  c->r[6]=R16(c->r[18]+0x00000006u); // 801D5400
  c->r[4]=c->r[29]+0x000000C8u; // 801D5404
  c->lr=0x801D540Cu; f_801DC2D0(c); // 801D5408
  goto L_801D5418; // 801D540C
L_801D5410:;
  c->r[3]=0u+0x000000FFu; // 801D5410
  goto L_801D5554; // 801D5414
L_801D5418:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D5418
  if (!crb(c,2)) { IRQCHK(c); goto L_801D52E4; } // 801D541C
  cmps(c,0,(int32_t)c->r[19],0); // 801D5420
  if (crb(c,2)) { goto L_801D543C; } // 801D5424
  cmps(c,0,(int32_t)c->r[19],1); // 801D5428
  if (crb(c,2)) { goto L_801D5444; } // 801D542C
  cmps(c,0,(int32_t)c->r[19],2); // 801D5430
  if (crb(c,2)) { goto L_801D5450; } // 801D5434
  goto L_801D5458; // 801D5438
L_801D543C:;
  c->r[23]=0u+0x00000001u; // 801D543C
  goto L_801D5460; // 801D5440
L_801D5444:;
  c->r[23]=0u+0x00000000u; // 801D5444
  c->r[20]=0u+0x00000000u; // 801D5448
  goto L_801D5460; // 801D544C
L_801D5450:;
  c->r[23]=0u+0x00000000u; // 801D5450
  goto L_801D5460; // 801D5454
L_801D5458:;
  c->r[23]=0u+0x00000000u; // 801D5458
  c->r[20]=0u+0x00000000u; // 801D545C
L_801D5460:;
  c->r[22]=addc(c,c->r[30],0x00000EB4u,0); cr0(c,c->r[22]); // 801D5460
  if (!crb(c,2)) { goto L_801D547C; } // 801D5464
  c->r[3]=c->r[21]+0x00000000u; // 801D5468
  c->r[5]=c->r[21]+0x00000888u; // 801D546C
  c->r[4]=0u+0x000006A8u; // 801D5470
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5474
  c->lr=0x801D547Cu; f_80212260(c); // 801D5478
L_801D547C:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 801D547C
  c->r[5]=c->r[22]|c->r[22]; // 801D5480
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D5484
  c->r[6]=0u+0x00000200u; // 801D5488
  c->lr=0x801D5490u; f_801CFF20(c); // 801D548C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5490
  c->r[6]=c->r[3]|c->r[3]; // 801D5494
  if (!crb(c,2)) { goto L_801D54A4; } // 801D5498
  c->r[3]=0u+0x00000006u; // 801D549C
  goto L_801D5554; // 801D54A0
L_801D54A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D54A4
  c->r[4]=c->r[23]|c->r[23]; // 801D54A8
  c->r[5]=c->r[20]|c->r[20]; // 801D54AC
  c->lr=0x801D54B4u; f_801DC380(c); // 801D54B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D54B4
  if (!crb(c,2)) { goto L_801D54C4; } // 801D54B8
  c->r[3]=0u+0x000000FFu; // 801D54BC
  goto L_801D5554; // 801D54C0
L_801D54C4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D54C4
  if (!crb(c,2)) { goto L_801D54E0; } // 801D54C8
  c->r[3]=c->r[21]+0x00000000u; // 801D54CC
  c->r[5]=c->r[21]+0x0000093Cu; // 801D54D0
  c->r[4]=0u+0x00000716u; // 801D54D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D54D8
  c->lr=0x801D54E0u; f_80212260(c); // 801D54DC
L_801D54E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D54E0
  if (!crb(c,2)) { goto L_801D54FC; } // 801D54E4
  c->r[3]=c->r[21]+0x00000000u; // 801D54E8
  c->r[5]=c->r[21]+0x00000964u; // 801D54EC
  c->r[4]=0u+0x00000717u; // 801D54F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D54F4
  c->lr=0x801D54FCu; f_80212260(c); // 801D54F8
L_801D54FC:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 801D54FC
  c->r[0]=0u+0x43300000u; // 801D5500
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D5504
  c->r[3]=c->r[30]|c->r[30]; // 801D5508
  c->r[0]=c->r[4]^0x80000000u; // 801D550C
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[2]=RF64(ea);} // 801D5510
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D5514
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D5518
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D551C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D5520
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801D5524
  c->lr=0x801D552Cu; f_801BD1F0(c); // 801D5528
  c->r[4]=R32(c->r[31]+0x00000014u); // 801D552C
  c->r[3]=c->r[30]|c->r[30]; // 801D5530
  c->lr=0x801D5538u; f_801BD5A0(c); // 801D5534
  c->r[4]=R32(c->r[31]+0x00000018u); // 801D5538
  c->r[3]=c->r[30]|c->r[30]; // 801D553C
  c->lr=0x801D5544u; f_801BD5E0(c); // 801D5540
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801D5544
  c->r[3]=c->r[30]|c->r[30]; // 801D5548
  c->lr=0x801D5550u; f_801BD620(c); // 801D554C
  c->r[3]=0u+0x00000000u; // 801D5550
L_801D5554:;
  c->r[11]=c->r[1]+0x00000050u; // 801D5554
  c->lr=0x801D555Cu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5558
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D555C
  c->lr=c->r[0]; // 801D5560
  c->r[1]=c->r[1]+0x00000050u; // 801D5564
  return; // 801D5568
}

// fn_801D5570
void f_801D5570(Ctx* __restrict c) {
  trace_call(0x801D5570u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5570
  c->r[0]=c->lr; // 801D5574
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5578
  c->r[11]=c->r[1]+0x00000030u; // 801D557C
  c->lr=0x801D5584u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5580
  cmps(c,0,(int32_t)c->r[6],0); // 801D5584
  c->r[31]=0u+0x803A0000u; // 801D5588
  c->r[25]=c->r[3]|c->r[3]; // 801D558C
  c->r[26]=c->r[4]|c->r[4]; // 801D5590
  c->r[27]=c->r[5]|c->r[5]; // 801D5594
  c->r[28]=c->r[6]|c->r[6]; // 801D5598
  c->r[29]=c->r[7]|c->r[7]; // 801D559C
  c->r[30]=c->r[8]|c->r[8]; // 801D55A0
  c->r[31]=c->r[31]+0x00001080u; // 801D55A4
  if (!crb(c,2)) { goto L_801D55C0; } // 801D55A8
  c->r[3]=c->r[31]+0x00000000u; // 801D55AC
  c->r[5]=c->r[31]+0x00000860u; // 801D55B0
  c->r[4]=0u+0x000006D7u; // 801D55B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D55B8
  c->lr=0x801D55C0u; f_80212260(c); // 801D55BC
L_801D55C0:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 801D55C0
  c->r[3]=c->r[25]|c->r[25]; // 801D55C4
  c->lr=0x801D55CCu; f_801D3B50(c); // 801D55C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D55CC
  c->r[4]=c->r[3]|c->r[3]; // 801D55D0
  if (!crb(c,2)) { goto L_801D55E0; } // 801D55D4
  c->r[3]=0u+0x00000004u; // 801D55D8
  goto L_801D56F0; // 801D55DC
L_801D55E0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D55E0
  if (crb(c,2)) { goto L_801D55FC; } // 801D55E4
  cmps(c,0,(int32_t)c->r[29],1); // 801D55E8
  if (crb(c,2)) { goto L_801D5604; } // 801D55EC
  cmps(c,0,(int32_t)c->r[29],2); // 801D55F0
  if (crb(c,2)) { goto L_801D5610; } // 801D55F4
  goto L_801D5618; // 801D55F8
L_801D55FC:;
  c->r[6]=0u+0x00000001u; // 801D55FC
  goto L_801D5620; // 801D5600
L_801D5604:;
  c->r[6]=0u+0x00000000u; // 801D5604
  c->r[30]=0u+0x00000000u; // 801D5608
  goto L_801D5620; // 801D560C
L_801D5610:;
  c->r[6]=0u+0x00000000u; // 801D5610
  goto L_801D5620; // 801D5614
L_801D5618:;
  c->r[6]=0u+0x00000000u; // 801D5618
  c->r[30]=0u+0x00000000u; // 801D561C
L_801D5620:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 801D5620
  c->r[3]=c->r[26]|c->r[26]; // 801D5624
  c->r[9]=R32(c->r[27]+0x00000000u); // 801D5628
  c->r[7]=c->r[30]|c->r[30]; // 801D562C
  c->r[8]=c->r[25]+0x00000028u; // 801D5630
  c->lr=0x801D5638u; f_801E1CD0(c); // 801D5634
  cmps(c,0,(int32_t)c->r[3],0); // 801D5638
  if (!crb(c,2)) { goto L_801D5648; } // 801D563C
  c->r[3]=0u+0x000000FFu; // 801D5640
  goto L_801D56F0; // 801D5644
L_801D5648:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D5648
  if (!crb(c,2)) { goto L_801D5664; } // 801D564C
  c->r[3]=c->r[31]+0x00000000u; // 801D5650
  c->r[5]=c->r[31]+0x0000093Cu; // 801D5654
  c->r[4]=0u+0x00000716u; // 801D5658
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D565C
  c->lr=0x801D5664u; f_80212260(c); // 801D5660
L_801D5664:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D5664
  if (!crb(c,2)) { goto L_801D5680; } // 801D5668
  c->r[3]=c->r[31]+0x00000000u; // 801D566C
  c->r[5]=c->r[31]+0x00000964u; // 801D5670
  c->r[4]=0u+0x00000717u; // 801D5674
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5678
  c->lr=0x801D5680u; f_80212260(c); // 801D567C
L_801D5680:;
  c->r[4]=R32(c->r[27]+0x00000010u); // 801D5680
  c->r[0]=0u+0x43300000u; // 801D5684
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D5688
  c->r[3]=c->r[26]|c->r[26]; // 801D568C
  c->r[0]=c->r[4]^0x80000000u; // 801D5690
  {uint32_t ea=c->r[2]+0xFFFFA968u; c->f[2]=RF64(ea);} // 801D5694
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D5698
  {uint32_t ea=c->r[2]+0xFFFFA960u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D569C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D56A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801D56A4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801D56A8
  c->lr=0x801D56B0u; f_801BD1F0(c); // 801D56AC
  c->r[4]=R32(c->r[27]+0x00000014u); // 801D56B0
  c->r[3]=c->r[26]|c->r[26]; // 801D56B4
  c->lr=0x801D56BCu; f_801BD5A0(c); // 801D56B8
  c->r[4]=R32(c->r[27]+0x00000018u); // 801D56BC
  c->r[3]=c->r[26]|c->r[26]; // 801D56C0
  c->lr=0x801D56C8u; f_801BD5E0(c); // 801D56C4
  c->r[4]=R32(c->r[27]+0x0000001Cu); // 801D56C8
  c->r[3]=c->r[26]|c->r[26]; // 801D56CC
  c->lr=0x801D56D4u; f_801BD620(c); // 801D56D0
  c->r[4]=R32(c->r[28]+0x00000004u); // 801D56D4
  c->r[3]=c->r[26]|c->r[26]; // 801D56D8
  c->lr=0x801D56E0u; f_801E1EF0(c); // 801D56DC
  c->r[4]=R8(c->r[28]+0x00000008u); // 801D56E0
  c->r[3]=c->r[26]|c->r[26]; // 801D56E4
  c->lr=0x801D56ECu; f_801E1F70(c); // 801D56E8
  c->r[3]=0u+0x00000000u; // 801D56EC
L_801D56F0:;
  c->r[11]=c->r[1]+0x00000030u; // 801D56F0
  c->lr=0x801D56F8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D56F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D56F8
  c->lr=c->r[0]; // 801D56FC
  c->r[1]=c->r[1]+0x00000030u; // 801D5700
  return; // 801D5704
}

// fn_801D5710
void f_801D5710(Ctx* __restrict c) {
  trace_call(0x801D5710u);
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5710
  c->r[0]=c->lr; // 801D5714
  W32(c->r[1]+0x00000254u,c->r[0]); // 801D5718
  c->r[11]=c->r[1]+0x00000250u; // 801D571C
  c->lr=0x801D5724u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5720
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D5724
  c->r[28]=0u+0x803A0000u; // 801D5728
  c->r[30]=c->r[3]|c->r[3]; // 801D572C
  c->r[31]=c->r[4]|c->r[4]; // 801D5730
  cmps(c,0,(int32_t)c->r[0],0); // 801D5734
  c->r[27]=c->r[5]|c->r[5]; // 801D5738
  c->r[29]=c->r[6]|c->r[6]; // 801D573C
  c->r[28]=c->r[28]+0x00001080u; // 801D5740
  if (!crb(c,2)) { goto L_801D575C; } // 801D5744
  c->r[3]=c->r[28]+0x00000000u; // 801D5748
  c->r[5]=c->r[28]+0x000002F8u; // 801D574C
  c->r[4]=0u+0x0000072Fu; // 801D5750
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5754
  c->lr=0x801D575Cu; f_80212260(c); // 801D5758
L_801D575C:;
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D575C
  if (crb(c,2)) { goto L_801D577C; } // 801D5760
  c->r[6]=c->r[29]|c->r[29]; // 801D5764
  c->r[3]=c->r[28]+0x00000000u; // 801D5768
  c->r[5]=c->r[28]+0x00000A14u; // 801D576C
  c->r[4]=0u+0x00000730u; // 801D5770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5774
  c->lr=0x801D577Cu; f_80212260(c); // 801D5778
L_801D577C:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801D577C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5780
  if (!crb(c,2)) { goto L_801D5790; } // 801D5784
  c->r[3]=0u+0x00000000u; // 801D5788
  goto L_801D5794; // 801D578C
L_801D5790:;
  c->lr=0x801D5794u; f_801CFD60(c); // 801D5790
L_801D5794:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D5794
  if (!crb(c,2)) { goto L_801D57A4; } // 801D5798
  c->r[3]=0u+0x00000000u; // 801D579C
  goto L_801D5940; // 801D57A0
L_801D57A4:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801D57A4
  c->lr=0x801D57ACu; f_801CFE10(c); // 801D57A8
  cmpu(c,0,c->r[31],c->r[3]); // 801D57AC
  if (crb(c,0)) { goto L_801D57BC; } // 801D57B0
  c->r[3]=0u+0x00000000u; // 801D57B4
  goto L_801D5940; // 801D57B8
L_801D57BC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D57BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D57C0
  if (!crb(c,2)) { goto L_801D57E8; } // 801D57C4
  if (!crb(c,2)) { goto L_801D57E0; } // 801D57C8
  c->r[3]=c->r[28]+0x00000000u; // 801D57CC
  c->r[5]=c->r[28]+0x0000037Cu; // 801D57D0
  c->r[4]=0u+0x00000348u; // 801D57D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D57D8
  c->lr=0x801D57E0u; f_80212300(c); // 801D57DC
L_801D57E0:;
  c->r[0]=0u+0x00000000u; // 801D57E0
  goto L_801D5808; // 801D57E4
L_801D57E8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D57E8
  cmpu(c,0,c->r[31],c->r[0]); // 801D57EC
  if (crb(c,0)) { goto L_801D57FC; } // 801D57F0
  c->r[0]=0u+0x00000000u; // 801D57F4
  goto L_801D5808; // 801D57F8
L_801D57FC:;
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801D57FC
  c->r[3]=c->r[3]+c->r[0]; // 801D5800
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D5804
L_801D5808:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D5808
  if (crb(c,2)) { goto L_801D5818; } // 801D580C
  c->r[3]=0u+0x00000001u; // 801D5810
  goto L_801D5940; // 801D5814
L_801D5818:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D5818
  if (!crb(c,2)) { goto L_801D5828; } // 801D581C
  c->r[3]=0u+0x00000000u; // 801D5820
  goto L_801D5940; // 801D5824
L_801D5828:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 801D5828
  c->r[3]=c->r[1]+0x00000010u; // 801D582C
  c->lr=0x801D5834u; f_801D1D90(c); // 801D5830
  c->r[4]=c->r[31]|c->r[31]; // 801D5834
  c->r[5]=c->r[27]|c->r[27]; // 801D5838
  c->r[7]=c->r[29]|c->r[29]; // 801D583C
  c->r[3]=c->r[1]+0x00000010u; // 801D5840
  c->r[6]=c->r[1]+0x00000008u; // 801D5844
  c->lr=0x801D584Cu; f_801D1E10(c); // 801D5848
  cmps(c,0,(int32_t)c->r[3],0); // 801D584C
  c->r[29]=c->r[3]|c->r[3]; // 801D5850
  if (!crb(c,2)) { goto L_801D586C; } // 801D5854
  c->r[3]=c->r[1]+0x00000010u; // 801D5858
  c->r[4]=0u+0xFFFFFFFFu; // 801D585C
  c->lr=0x801D5864u; f_801D1DD0(c); // 801D5860
  c->r[3]=0u+0x00000000u; // 801D5864
  goto L_801D5940; // 801D5868
L_801D586C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D586C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5870
  if (!crb(c,2)) { goto L_801D5894; } // 801D5874
  if (!crb(c,2)) { goto L_801D58CC; } // 801D5878
  c->r[3]=c->r[28]+0x00000000u; // 801D587C
  c->r[5]=c->r[28]+0x00000490u; // 801D5880
  c->r[4]=0u+0x00000362u; // 801D5884
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5888
  c->lr=0x801D5890u; f_80212300(c); // 801D588C
  goto L_801D58CC; // 801D5890
L_801D5894:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 801D5894
  cmpu(c,0,c->r[31],c->r[8]); // 801D5898
  if (crb(c,0)) { goto L_801D58BC; } // 801D589C
  c->r[6]=c->r[31]|c->r[31]; // 801D58A0
  c->r[3]=c->r[28]+0x00000000u; // 801D58A4
  c->r[5]=c->r[28]+0x000004E8u; // 801D58A8
  c->r[4]=0u+0x00000366u; // 801D58AC
  c->r[7]=0u+0x00000000u; // 801D58B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D58B4
  c->lr=0x801D58BCu; f_80212260(c); // 801D58B8
L_801D58BC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D58BC
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801D58C0
  c->r[3]=c->r[3]+c->r[0]; // 801D58C4
  W32(c->r[3]+0x00000004u,c->r[29]); // 801D58C8
L_801D58CC:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D58CC
  c->r[29]=R32(c->r[1]+0x00000008u); // 801D58D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D58D4
  if (!crb(c,2)) { goto L_801D58F8; } // 801D58D8
  if (!crb(c,2)) { goto L_801D5930; } // 801D58DC
  c->r[3]=c->r[28]+0x00000000u; // 801D58E0
  c->r[5]=c->r[28]+0x00000528u; // 801D58E4
  c->r[4]=0u+0x00000395u; // 801D58E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D58EC
  c->lr=0x801D58F4u; f_80212300(c); // 801D58F0
  goto L_801D5930; // 801D58F4
L_801D58F8:;
  c->r[8]=R32(c->r[3]+0x00000000u); // 801D58F8
  cmpu(c,0,c->r[31],c->r[8]); // 801D58FC
  if (crb(c,0)) { goto L_801D5920; } // 801D5900
  c->r[6]=c->r[31]|c->r[31]; // 801D5904
  c->r[3]=c->r[28]+0x00000000u; // 801D5908
  c->r[5]=c->r[28]+0x000004E8u; // 801D590C
  c->r[4]=0u+0x00000399u; // 801D5910
  c->r[7]=0u+0x00000000u; // 801D5914
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5918
  c->lr=0x801D5920u; f_80212260(c); // 801D591C
L_801D5920:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801D5920
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 801D5924
  c->r[3]=c->r[3]+c->r[0]; // 801D5928
  W32(c->r[3]+0x00000008u,c->r[29]); // 801D592C
L_801D5930:;
  c->r[3]=c->r[1]+0x00000010u; // 801D5930
  c->r[4]=0u+0xFFFFFFFFu; // 801D5934
  c->lr=0x801D593Cu; f_801D1DD0(c); // 801D5938
  c->r[3]=0u+0x00000001u; // 801D593C
L_801D5940:;
  c->r[11]=c->r[1]+0x00000250u; // 801D5940
  c->lr=0x801D5948u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5944
  c->r[0]=R32(c->r[1]+0x00000254u); // 801D5948
  c->lr=c->r[0]; // 801D594C
  c->r[1]=c->r[1]+0x00000250u; // 801D5950
  return; // 801D5954
}

// fn_801D5960
void f_801D5960(Ctx* __restrict c) {
  trace_call(0x801D5960u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D5960
  cmps(c,0,(int32_t)c->r[0],0); // 801D5964
  if (crb(c,2)) { goto L_801D59B4; } // 801D5968
  c->r[9]=0u+0x00000000u; // 801D596C
  c->r[7]=0u+0x00000000u; // 801D5970
  c->r[6]=0u+0x00000000u; // 801D5974
  goto L_801D59A4; // 801D5978
  c->r[0]=c->r[0]|0x00000000u; // 801D597C
L_801D5980:;
  c->r[8]=c->r[8]+c->r[7]; // 801D5980
  c->r[0]=R32(c->r[8]+0x00000004u); // 801D5984
  cmpu(c,0,c->r[4],c->r[0]); // 801D5988
  if (crb(c,1)) { goto L_801D599C; } // 801D598C
  cmpu(c,0,c->r[0],c->r[5]); // 801D5990
  if (crb(c,1)) { goto L_801D599C; } // 801D5994
  W32(c->r[8]+0x00000004u,c->r[6]); // 801D5998
L_801D599C:;
  c->r[7]=c->r[7]+0x00000008u; // 801D599C
  c->r[9]=c->r[9]+0x00000001u; // 801D59A0
L_801D59A4:;
  c->r[8]=R32(c->r[3]+0x00000018u); // 801D59A4
  c->r[0]=R32(c->r[8]+0x00000000u); // 801D59A8
  cmpu(c,0,c->r[9],c->r[0]); // 801D59AC
  if (crb(c,0)) { IRQCHK(c); goto L_801D5980; } // 801D59B0
L_801D59B4:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801D59B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D59B8
  if (crb(c,2)) return; // 801D59BC
  c->r[9]=0u+0x00000000u; // 801D59C0
  c->r[7]=0u+0x00000000u; // 801D59C4
  c->r[6]=0u+0x00000000u; // 801D59C8
  goto L_801D59F4; // 801D59CC
L_801D59D0:;
  c->r[8]=c->r[8]+c->r[7]; // 801D59D0
  c->r[0]=R32(c->r[8]+0x00000004u); // 801D59D4
  cmpu(c,0,c->r[4],c->r[0]); // 801D59D8
  if (crb(c,1)) { goto L_801D59EC; } // 801D59DC
  cmpu(c,0,c->r[0],c->r[5]); // 801D59E0
  if (crb(c,1)) { goto L_801D59EC; } // 801D59E4
  W32(c->r[8]+0x00000004u,c->r[6]); // 801D59E8
L_801D59EC:;
  c->r[7]=c->r[7]+0x00000008u; // 801D59EC
  c->r[9]=c->r[9]+0x00000001u; // 801D59F0
L_801D59F4:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 801D59F4
  c->r[0]=R32(c->r[8]+0x00000000u); // 801D59F8
  cmpu(c,0,c->r[9],c->r[0]); // 801D59FC
  if (crb(c,0)) { IRQCHK(c); goto L_801D59D0; } // 801D5A00
  return; // 801D5A04
}

// fn_801D5A10
void f_801D5A10(Ctx* __restrict c) {
  trace_call(0x801D5A10u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D5A10
  cmps(c,0,(int32_t)c->r[0],0); // 801D5A14
  if (crb(c,2)) { goto L_801D5A64; } // 801D5A18
  c->r[9]=0u+0x00000000u; // 801D5A1C
  c->r[7]=0u+0x00000000u; // 801D5A20
  c->r[6]=0u+0x00000000u; // 801D5A24
  goto L_801D5A54; // 801D5A28
  c->r[0]=c->r[0]|0x00000000u; // 801D5A2C
L_801D5A30:;
  c->r[8]=c->r[8]+c->r[7]; // 801D5A30
  c->r[0]=R32(c->r[8]+0x00000008u); // 801D5A34
  cmpu(c,0,c->r[4],c->r[0]); // 801D5A38
  if (crb(c,1)) { goto L_801D5A4C; } // 801D5A3C
  cmpu(c,0,c->r[0],c->r[5]); // 801D5A40
  if (crb(c,1)) { goto L_801D5A4C; } // 801D5A44
  W32(c->r[8]+0x00000008u,c->r[6]); // 801D5A48
L_801D5A4C:;
  c->r[7]=c->r[7]+0x00000008u; // 801D5A4C
  c->r[9]=c->r[9]+0x00000001u; // 801D5A50
L_801D5A54:;
  c->r[8]=R32(c->r[3]+0x00000018u); // 801D5A54
  c->r[0]=R32(c->r[8]+0x00000000u); // 801D5A58
  cmpu(c,0,c->r[9],c->r[0]); // 801D5A5C
  if (crb(c,0)) { IRQCHK(c); goto L_801D5A30; } // 801D5A60
L_801D5A64:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 801D5A64
  cmps(c,0,(int32_t)c->r[0],0); // 801D5A68
  if (crb(c,2)) return; // 801D5A6C
  c->r[9]=0u+0x00000000u; // 801D5A70
  c->r[7]=0u+0x00000000u; // 801D5A74
  c->r[6]=0u+0x00000000u; // 801D5A78
  goto L_801D5AA4; // 801D5A7C
L_801D5A80:;
  c->r[8]=c->r[8]+c->r[7]; // 801D5A80
  c->r[0]=R32(c->r[8]+0x00000008u); // 801D5A84
  cmpu(c,0,c->r[4],c->r[0]); // 801D5A88
  if (crb(c,1)) { goto L_801D5A9C; } // 801D5A8C
  cmpu(c,0,c->r[0],c->r[5]); // 801D5A90
  if (crb(c,1)) { goto L_801D5A9C; } // 801D5A94
  W32(c->r[8]+0x00000008u,c->r[6]); // 801D5A98
L_801D5A9C:;
  c->r[7]=c->r[7]+0x00000008u; // 801D5A9C
  c->r[9]=c->r[9]+0x00000001u; // 801D5AA0
L_801D5AA4:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 801D5AA4
  c->r[0]=R32(c->r[8]+0x00000000u); // 801D5AA8
  cmpu(c,0,c->r[9],c->r[0]); // 801D5AAC
  if (crb(c,0)) { IRQCHK(c); goto L_801D5A80; } // 801D5AB0
  return; // 801D5AB4
}

// fn_801D5AC0
void f_801D5AC0(Ctx* __restrict c) {
  trace_call(0x801D5AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5AC0
  c->r[0]=c->lr; // 801D5AC4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D5AC8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801D5ACC
  W32(c->r[1]+0x00000048u,c->r[30]); // 801D5AD0
  c->r[30]=c->r[6]|c->r[6]; // 801D5AD4
  W32(c->r[1]+0x00000044u,c->r[29]); // 801D5AD8
  c->r[29]=c->r[4]|c->r[4]; // 801D5ADC
  W32(c->r[1]+0x00000040u,c->r[28]); // 801D5AE0
  c->r[28]=c->r[3]|c->r[3]; // 801D5AE4
  c->r[5]=R32(c->r[3]+0x00000004u); // 801D5AE8
  c->r[3]=R32(c->r[5]+0x00000010u); // 801D5AEC
  cmps(c,0,(int32_t)c->r[3],0); // 801D5AF0
  if (!crb(c,2)) { goto L_801D5B00; } // 801D5AF4
  c->r[3]=0u+0x00000000u; // 801D5AF8
  goto L_801D5B04; // 801D5AFC
L_801D5B00:;
  c->lr=0x801D5B04u; f_801CFD60(c); // 801D5B00
L_801D5B04:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D5B04
  if (!crb(c,2)) { goto L_801D5B14; } // 801D5B08
  c->r[3]=0u+0x00000000u; // 801D5B0C
  goto L_801D5C18; // 801D5B10
L_801D5B14:;
  c->r[31]=R32(c->r[28]+0x00000004u); // 801D5B14
  c->r[0]=R32(c->r[31]+0x00000010u); // 801D5B18
  cmps(c,0,(int32_t)c->r[0],0); // 801D5B1C
  if (!crb(c,2)) { goto L_801D5B40; } // 801D5B20
  c->r[3]=0u+0x803A0000u; // 801D5B24
  c->r[5]=0u+0x803A0000u; // 801D5B28
  c->r[3]=c->r[3]+0x00001080u; // 801D5B2C
  c->r[4]=0u+0x000002B3u; // 801D5B30
  c->r[5]=c->r[5]+0x00001360u; // 801D5B34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5B38
  c->lr=0x801D5B40u; f_80212260(c); // 801D5B3C
L_801D5B40:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 801D5B40
  c->r[5]=c->r[1]+0x00000020u; // 801D5B44
  c->r[4]=R32(c->r[29]+0x000000B0u); // 801D5B48
  c->r[3]=c->r[31]|c->r[31]; // 801D5B4C
  c->lr=0x801D5B54u; f_801CFE60(c); // 801D5B50
  cmps(c,0,(int32_t)c->r[3],0); // 801D5B54
  if (!crb(c,2)) { goto L_801D5B64; } // 801D5B58
  c->r[3]=0u+0x00000000u; // 801D5B5C
  goto L_801D5C18; // 801D5B60
L_801D5B64:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 801D5B64
  c->r[3]=c->r[31]|c->r[31]; // 801D5B68
  c->r[5]=c->r[1]+0x00000008u; // 801D5B6C
  c->lr=0x801D5B74u; f_801CFEC0(c); // 801D5B70
  cmps(c,0,(int32_t)c->r[3],0); // 801D5B74
  if (!crb(c,2)) { goto L_801D5B84; } // 801D5B78
  c->r[3]=0u+0x00000000u; // 801D5B7C
  goto L_801D5C18; // 801D5B80
L_801D5B84:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D5B84
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D5B88
  c->lr=0x801D5B90u; f_801D3B50(c); // 801D5B8C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5B90
  if (!crb(c,2)) { goto L_801D5BA0; } // 801D5B94
  c->r[3]=0u+0x00000000u; // 801D5B98
  goto L_801D5C18; // 801D5B9C
L_801D5BA0:;
  c->r[4]=c->r[3]|c->r[3]; // 801D5BA0
  c->r[3]=c->r[1]+0x00000010u; // 801D5BA4
  c->lr=0x801D5BACu; f_801BA780(c); // 801D5BA8
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D5BAC
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D5BB0
  c->lr=0x801D5BB8u; f_801D3D10(c); // 801D5BB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D5BB8
  c->r[31]=c->r[3]|c->r[3]; // 801D5BBC
  if (!crb(c,2)) { goto L_801D5BD8; } // 801D5BC0
  c->r[3]=c->r[1]+0x00000010u; // 801D5BC4
  c->r[4]=0u+0xFFFFFFFFu; // 801D5BC8
  c->lr=0x801D5BD0u; f_801BA7C0(c); // 801D5BCC
  c->r[3]=0u+0x00000000u; // 801D5BD0
  goto L_801D5C18; // 801D5BD4
L_801D5BD8:;
  if (!crb(c,2)) { goto L_801D5BF4; } // 801D5BD8
  c->r[5]=0u+0x803A0000u; // 801D5BDC
  c->r[3]=c->r[13]+0xFFFFAE00u; // 801D5BE0
  c->r[5]=c->r[5]+0x00002058u; // 801D5BE4
  c->r[4]=0u+0x00000032u; // 801D5BE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5BEC
  c->lr=0x801D5BF4u; f_80212260(c); // 801D5BF0
L_801D5BF4:;
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5BF4
  c->r[4]=c->r[30]|c->r[30]; // 801D5BF8
  c->r[3]=c->r[1]+0x00000010u; // 801D5BFC
  c->lr=0x801D5C04u; f_801BA800(c); // 801D5C00
  c->r[31]=c->r[3]|c->r[3]; // 801D5C04
  c->r[3]=c->r[1]+0x00000010u; // 801D5C08
  c->r[4]=0u+0xFFFFFFFFu; // 801D5C0C
  c->lr=0x801D5C14u; f_801BA7C0(c); // 801D5C10
  c->r[3]=c->r[31]|c->r[31]; // 801D5C14
L_801D5C18:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D5C18
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801D5C1C
  c->r[30]=R32(c->r[1]+0x00000048u); // 801D5C20
  c->r[29]=R32(c->r[1]+0x00000044u); // 801D5C24
  c->r[28]=R32(c->r[1]+0x00000040u); // 801D5C28
  c->lr=c->r[0]; // 801D5C2C
  c->r[1]=c->r[1]+0x00000050u; // 801D5C30
  return; // 801D5C34
}

// fn_801D5C40
void f_801D5C40(Ctx* __restrict c) {
  trace_call(0x801D5C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5C40
  c->r[0]=c->lr; // 801D5C44
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D5C48
  c->r[11]=c->r[1]+0x00000040u; // 801D5C4C
  c->lr=0x801D5C54u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D5C50
  c->r[11]=R32(c->r[3]+0x00000004u); // 801D5C54
  c->r[24]=c->r[3]|c->r[3]; // 801D5C58
  c->r[25]=c->r[4]|c->r[4]; // 801D5C5C
  c->r[26]=c->r[5]|c->r[5]; // 801D5C60
  c->r[3]=R32(c->r[11]+0x00000010u); // 801D5C64
  c->r[27]=c->r[6]|c->r[6]; // 801D5C68
  c->r[28]=c->r[7]|c->r[7]; // 801D5C6C
  c->r[29]=c->r[8]|c->r[8]; // 801D5C70
  cmps(c,0,(int32_t)c->r[3],0); // 801D5C74
  c->r[30]=c->r[9]|c->r[9]; // 801D5C78
  c->r[31]=c->r[10]|c->r[10]; // 801D5C7C
  if (!crb(c,2)) { goto L_801D5C8C; } // 801D5C80
  c->r[3]=0u+0x00000000u; // 801D5C84
  goto L_801D5C90; // 801D5C88
L_801D5C8C:;
  c->lr=0x801D5C90u; f_801CFD60(c); // 801D5C8C
L_801D5C90:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D5C90
  if (!crb(c,2)) { goto L_801D5CA0; } // 801D5C94
  c->r[3]=0u+0x00000000u; // 801D5C98
  goto L_801D5D50; // 801D5C9C
L_801D5CA0:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 801D5CA0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D5CA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D5CA8
  if (!crb(c,2)) { goto L_801D5CCC; } // 801D5CAC
  c->r[3]=0u+0x803A0000u; // 801D5CB0
  c->r[5]=0u+0x803A0000u; // 801D5CB4
  c->r[3]=c->r[3]+0x00001080u; // 801D5CB8
  c->r[4]=0u+0x000002B3u; // 801D5CBC
  c->r[5]=c->r[5]+0x00001360u; // 801D5CC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5CC4
  c->lr=0x801D5CCCu; f_80212260(c); // 801D5CC8
L_801D5CCC:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 801D5CCC
  c->r[4]=c->r[31]|c->r[31]; // 801D5CD0
  c->lr=0x801D5CD8u; f_801D3D10(c); // 801D5CD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D5CD8
  c->r[31]=c->r[3]|c->r[3]; // 801D5CDC
  if (!crb(c,2)) { goto L_801D5CEC; } // 801D5CE0
  c->r[3]=0u+0x00000000u; // 801D5CE4
  goto L_801D5D50; // 801D5CE8
L_801D5CEC:;
  c->r[4]=c->r[28]|c->r[28]; // 801D5CEC
  c->r[3]=c->r[1]+0x00000008u; // 801D5CF0
  c->lr=0x801D5CF8u; f_801E22A0(c); // 801D5CF4
  c->r[4]=c->r[25]|c->r[25]; // 801D5CF8
  c->r[5]=c->r[29]|c->r[29]; // 801D5CFC
  c->r[3]=c->r[1]+0x00000008u; // 801D5D00
  c->lr=0x801D5D08u; f_801E2450(c); // 801D5D04
  cmps(c,0,(int32_t)c->r[3],0); // 801D5D08
  if (!crb(c,2)) { goto L_801D5D18; } // 801D5D0C
  c->r[3]=0u+0x00000000u; // 801D5D10
  goto L_801D5D50; // 801D5D14
L_801D5D18:;
  c->r[4]=c->r[26]|c->r[26]; // 801D5D18
  c->r[5]=c->r[29]|c->r[29]; // 801D5D1C
  c->r[6]=c->r[30]|c->r[30]; // 801D5D20
  c->r[3]=c->r[1]+0x00000008u; // 801D5D24
  c->lr=0x801D5D2Cu; f_801E25D0(c); // 801D5D28
  cmps(c,0,(int32_t)c->r[3],0); // 801D5D2C
  if (!crb(c,2)) { goto L_801D5D3C; } // 801D5D30
  c->r[3]=0u+0x00000000u; // 801D5D34
  goto L_801D5D50; // 801D5D38
L_801D5D3C:;
  c->r[4]=R32(c->r[26]+0x00000000u); // 801D5D3C
  c->r[5]=c->r[27]|c->r[27]; // 801D5D40
  c->r[6]=c->r[31]|c->r[31]; // 801D5D44
  c->r[3]=c->r[1]+0x00000008u; // 801D5D48
  c->lr=0x801D5D50u; f_801E2760(c); // 801D5D4C
L_801D5D50:;
  c->r[11]=c->r[1]+0x00000040u; // 801D5D50
  c->lr=0x801D5D58u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D5D54
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D5D58
  c->lr=c->r[0]; // 801D5D5C
  c->r[1]=c->r[1]+0x00000040u; // 801D5D60
  return; // 801D5D64
}

// fn_801D5D70
void f_801D5D70(Ctx* __restrict c) {
  trace_call(0x801D5D70u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 801D5D70
  f_801CFC80(c); return; // 801D5D74
}

// fn_801D5D80
void f_801D5D80(Ctx* __restrict c) {
  trace_call(0x801D5D80u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 801D5D80
  f_801D3ED0(c); return; // 801D5D84
}

// fn_801D5D90
void f_801D5D90(Ctx* __restrict c) {
  trace_call(0x801D5D90u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 801D5D90
  f_801D27B0(c); return; // 801D5D94
}

// fn_801D5DA0
void f_801D5DA0(Ctx* __restrict c) {
  trace_call(0x801D5DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5DA0
  c->r[0]=c->lr; // 801D5DA4
  cmps(c,0,(int32_t)c->r[4],0); // 801D5DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5DAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5DB0
  c->r[31]=c->r[4]|c->r[4]; // 801D5DB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5DB8
  c->r[30]=c->r[3]|c->r[3]; // 801D5DBC
  if (!crb(c,2)) { goto L_801D5DE0; } // 801D5DC0
  c->r[3]=0u+0x803A0000u; // 801D5DC4
  c->r[5]=0u+0x803A0000u; // 801D5DC8
  c->r[3]=c->r[3]+0x000020D0u; // 801D5DCC
  c->r[4]=0u+0x0000003Bu; // 801D5DD0
  c->r[5]=c->r[5]+0x000020E4u; // 801D5DD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5DD8
  c->lr=0x801D5DE0u; f_80212260(c); // 801D5DDC
L_801D5DE0:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 801D5DE0
  c->r[3]=c->r[31]|c->r[31]; // 801D5DE4
  c->lr=0x801D5DECu; f_801BD7D0(c); // 801D5DE8
  cmps(c,0,(int32_t)c->r[3],0); // 801D5DEC
  if (crb(c,2)) { goto L_801D5DFC; } // 801D5DF0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D5DF4
  c->lr=0x801D5DFCu; f_801BD800(c); // 801D5DF8
L_801D5DFC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D5DFC
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 801D5E00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5E04
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5E08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5E0C
  c->lr=c->r[0]; // 801D5E10
  c->r[1]=c->r[1]+0x00000010u; // 801D5E14
  return; // 801D5E18
}

// fn_801D5E20
void f_801D5E20(Ctx* __restrict c) {
  trace_call(0x801D5E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5E20
  c->r[0]=c->lr; // 801D5E24
  cmps(c,0,(int32_t)c->r[4],0); // 801D5E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5E30
  c->r[31]=c->r[4]|c->r[4]; // 801D5E34
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5E38
  c->r[30]=c->r[3]|c->r[3]; // 801D5E3C
  if (!crb(c,2)) { goto L_801D5E60; } // 801D5E40
  c->r[3]=0u+0x803A0000u; // 801D5E44
  c->r[5]=0u+0x803A0000u; // 801D5E48
  c->r[3]=c->r[3]+0x000020D0u; // 801D5E4C
  c->r[4]=0u+0x00000051u; // 801D5E50
  c->r[5]=c->r[5]+0x000020E4u; // 801D5E54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D5E58
  c->lr=0x801D5E60u; f_80212260(c); // 801D5E5C
L_801D5E60:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 801D5E60
  c->r[3]=c->r[31]|c->r[31]; // 801D5E64
  c->lr=0x801D5E6Cu; f_801BD7B0(c); // 801D5E68
  cmps(c,0,(int32_t)c->r[3],0); // 801D5E6C
  if (crb(c,2)) { goto L_801D5E7C; } // 801D5E70
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D5E74
  c->lr=0x801D5E7Cu; f_801BD7F0(c); // 801D5E78
L_801D5E7C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D5E7C
  W32(c->r[3]+0x00000008u,c->r[30]); // 801D5E80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5E84
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5E88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5E8C
  c->lr=c->r[0]; // 801D5E90
  c->r[1]=c->r[1]+0x00000010u; // 801D5E94
  return; // 801D5E98
}

// fn_801D5EA0
void f_801D5EA0(Ctx* __restrict c) {
  trace_call(0x801D5EA0u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 801D5EA0
  cmps(c,0,(int32_t)c->r[4],0); // 801D5EA4
  if (crb(c,2)) { goto L_801D5ED8; } // 801D5EA8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801D5EAC
  cmpu(c,0,c->r[0],c->r[3]); // 801D5EB0
  if (!crb(c,2)) { goto L_801D5EC0; } // 801D5EB4
  c->r[0]=0u+0x00000000u; // 801D5EB8
  W32(c->r[4]+0x00000008u,c->r[0]); // 801D5EBC
L_801D5EC0:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801D5EC0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801D5EC4
  cmpu(c,0,c->r[0],c->r[3]); // 801D5EC8
  if (!crb(c,2)) { goto L_801D5ED8; } // 801D5ECC
  c->r[0]=0u+0x00000000u; // 801D5ED0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801D5ED4
L_801D5ED8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D5ED8
  cmps(c,0,(int32_t)c->r[0],0); // 801D5EDC
  if (crb(c,2)) return; // 801D5EE0
  c->r[0]=0u+0x00000000u; // 801D5EE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D5EE8
  return; // 801D5EEC
}

// fn_801D5EF0
void f_801D5EF0(Ctx* __restrict c) {
  trace_call(0x801D5EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5EF0
  c->r[0]=c->lr; // 801D5EF4
  c->r[4]=0u+0x803A0000u; // 801D5EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5EFC
  c->r[4]=c->r[4]+0x00002110u; // 801D5F00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5F04
  c->r[31]=c->r[3]|c->r[3]; // 801D5F08
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D5F0C
  c->r[3]=c->r[3]+0x0000001Cu; // 801D5F10
  c->lr=0x801D5F18u; f_801C0B50(c); // 801D5F14
  c->r[3]=c->r[31]+0x00000004u; // 801D5F18
  c->lr=0x801D5F20u; f_80126D80(c); // 801D5F1C
  c->r[3]=c->r[31]|c->r[31]; // 801D5F20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5F24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5F28
  c->lr=c->r[0]; // 801D5F2C
  c->r[1]=c->r[1]+0x00000010u; // 801D5F30
  return; // 801D5F34
}

// fn_801D5F40
void f_801D5F40(Ctx* __restrict c) {
  trace_call(0x801D5F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5F40
  c->r[0]=c->lr; // 801D5F44
  cmps(c,0,(int32_t)c->r[3],0); // 801D5F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5F4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5F50
  c->r[31]=c->r[4]|c->r[4]; // 801D5F54
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5F58
  c->r[30]=c->r[3]|c->r[3]; // 801D5F5C
  if (crb(c,2)) { goto L_801D5F94; } // 801D5F60
  c->r[4]=0u+0x803A0000u; // 801D5F64
  c->r[4]=c->r[4]+0x00002110u; // 801D5F68
  W32(c->r[3]+0x00000000u,c->r[4]); // 801D5F6C
  c->r[3]=c->r[3]+0x0000001Cu; // 801D5F70
  c->lr=0x801D5F78u; f_801C0FD0(c); // 801D5F74
  c->r[3]=c->r[30]+0x0000001Cu; // 801D5F78
  c->r[4]=0u+0xFFFFFFFFu; // 801D5F7C
  c->lr=0x801D5F84u; f_801C0B70(c); // 801D5F80
  cmps(c,0,(int32_t)c->r[31],0); // 801D5F84
  if (!crb(c,1)) { goto L_801D5F94; } // 801D5F88
  c->r[3]=c->r[30]|c->r[30]; // 801D5F8C
  c->lr=0x801D5F94u; f_802E61AC(c); // 801D5F90
L_801D5F94:;
  c->r[3]=c->r[30]|c->r[30]; // 801D5F94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5F98
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D5F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5FA0
  c->lr=c->r[0]; // 801D5FA4
  c->r[1]=c->r[1]+0x00000010u; // 801D5FA8
  return; // 801D5FAC
}

// fn_801D5FB0
void f_801D5FB0(Ctx* __restrict c) {
  trace_call(0x801D5FB0u);
  c->r[3]=c->r[3]+0x0000001Cu; // 801D5FB0
  f_801C0D30(c); return; // 801D5FB4
}

// fn_801D5FC0
void f_801D5FC0(Ctx* __restrict c) {
  trace_call(0x801D5FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5FC0
  c->r[0]=c->lr; // 801D5FC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5FC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5FCC
  c->r[31]=c->r[3]+0x00000004u; // 801D5FD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5FD4
  c->r[30]=c->r[4]|c->r[4]; // 801D5FD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5FDC
  c->r[29]=c->r[3]|c->r[3]; // 801D5FE0
  c->r[3]=c->r[31]|c->r[31]; // 801D5FE4
  c->lr=0x801D5FECu; f_80126DC0(c); // 801D5FE8
  c->r[5]=0u+0x801D0000u; // 801D5FEC
  c->r[4]=c->r[30]|c->r[30]; // 801D5FF0
  c->r[3]=c->r[29]+0x0000001Cu; // 801D5FF4
  c->r[6]=0u+0x00000000u; // 801D5FF8
  c->r[5]=c->r[5]+0x00006110u; // 801D5FFC
  c->lr=0x801D6004u; f_801C1170(c); // 801D6000
  c->r[30]=c->r[3]|c->r[3]; // 801D6004
  c->r[3]=c->r[31]|c->r[31]; // 801D6008
  c->lr=0x801D6010u; f_80126EA0(c); // 801D600C
  c->r[3]=c->r[30]|c->r[30]; // 801D6010
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6014
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6018
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D601C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6020
  c->lr=c->r[0]; // 801D6024
  c->r[1]=c->r[1]+0x00000020u; // 801D6028
  return; // 801D602C
}

// fn_801D6030
void f_801D6030(Ctx* __restrict c) {
  trace_call(0x801D6030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6030
  c->r[0]=c->lr; // 801D6034
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6038
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D603C
  c->r[31]=c->r[3]+0x00000004u; // 801D6040
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6044
  c->r[30]=c->r[3]|c->r[3]; // 801D6048
  c->r[3]=c->r[31]|c->r[31]; // 801D604C
  c->lr=0x801D6054u; f_80126DC0(c); // 801D6050
  c->r[3]=c->r[30]+0x0000001Cu; // 801D6054
  c->lr=0x801D605Cu; f_801C1300(c); // 801D6058
  c->r[30]=c->r[3]|c->r[3]; // 801D605C
  c->r[3]=c->r[31]|c->r[31]; // 801D6060
  c->lr=0x801D6068u; f_80126EA0(c); // 801D6064
  c->r[3]=c->r[30]|c->r[30]; // 801D6068
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D606C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6070
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6074
  c->lr=c->r[0]; // 801D6078
  c->r[1]=c->r[1]+0x00000010u; // 801D607C
  return; // 801D6080
}

// fn_801D6090
void f_801D6090(Ctx* __restrict c) {
  trace_call(0x801D6090u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6090
  c->r[0]=c->lr; // 801D6094
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6098
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D609C
  c->r[31]=c->r[3]+0x00000004u; // 801D60A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D60A4
  c->r[30]=c->r[4]|c->r[4]; // 801D60A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D60AC
  c->r[29]=c->r[3]|c->r[3]; // 801D60B0
  c->r[3]=c->r[31]|c->r[31]; // 801D60B4
  c->lr=0x801D60BCu; f_80126DC0(c); // 801D60B8
  c->lr=0x801D60C0u; f_801D76C0(c); // 801D60BC
  c->r[3]=c->r[3]+0x00000354u; // 801D60C0
  c->lr=0x801D60C8u; f_80126DC0(c); // 801D60C4
  c->r[4]=c->r[30]|c->r[30]; // 801D60C8
  c->r[3]=c->r[29]+0x0000001Cu; // 801D60CC
  c->lr=0x801D60D4u; f_801C1450(c); // 801D60D0
  c->lr=0x801D60D8u; f_801D76C0(c); // 801D60D4
  c->r[3]=c->r[3]+0x00000354u; // 801D60D8
  c->lr=0x801D60E0u; f_80126EA0(c); // 801D60DC
  c->r[3]=c->r[31]|c->r[31]; // 801D60E0
  c->lr=0x801D60E8u; f_80126EA0(c); // 801D60E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D60E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D60EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D60F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D60F4
  c->lr=c->r[0]; // 801D60F8
  c->r[1]=c->r[1]+0x00000020u; // 801D60FC
  return; // 801D6100
}

// fn_801D6110
void f_801D6110(Ctx* __restrict c) {
  trace_call(0x801D6110u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6110
  c->r[0]=c->lr; // 801D6114
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6118
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D611C
  c->r[31]=c->r[5]|c->r[5]; // 801D6120
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D6124
  c->r[30]=c->r[4]|c->r[4]; // 801D6128
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D612C
  c->r[29]=c->r[3]|c->r[3]; // 801D6130
  c->lr=0x801D6138u; f_801BEEC0(c); // 801D6134
  c->r[4]=c->r[29]|c->r[29]; // 801D6138
  c->r[5]=c->r[30]|c->r[30]; // 801D613C
  c->r[6]=c->r[31]|c->r[31]; // 801D6140
  c->lr=0x801D6148u; f_801BF0A0(c); // 801D6144
  c->lr=0x801D614Cu; f_801BEEC0(c); // 801D6148
  c->r[4]=c->r[29]|c->r[29]; // 801D614C
  c->r[5]=c->r[30]|c->r[30]; // 801D6150
  c->r[6]=c->r[31]|c->r[31]; // 801D6154
  c->lr=0x801D615Cu; f_801BF1F0(c); // 801D6158
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D615C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6160
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6164
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D6168
  c->lr=c->r[0]; // 801D616C
  c->r[1]=c->r[1]+0x00000020u; // 801D6170
  return; // 801D6174
}

// fn_801D6180
void f_801D6180(Ctx* __restrict c) {
  trace_call(0x801D6180u);
  {uint32_t ea=c->r[2]+0xFFFFA970u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D6180
  c->r[4]=0u+0x80000000u; // 801D6184
  {uint32_t ea=c->r[2]+0xFFFFA974u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6188
  c->r[6]=0u+0x00000000u; // 801D618C
  c->r[7]=c->r[3]+0x00000004u; // 801D6190
  c->r[8]=c->r[3]+0x00000010u; // 801D6194
  c->r[9]=c->r[3]+0x0000001Cu; // 801D6198
  c->r[5]=0u+0x00000001u; // 801D619C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D61A0
  W32(c->r[3]+0x00000000u,c->r[6]); // 801D61A4
  W32(c->r[3]+0x00000004u,c->r[7]); // 801D61A8
  W32(c->r[3]+0x00000008u,c->r[7]); // 801D61AC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 801D61B0
  W32(c->r[3]+0x00000010u,c->r[8]); // 801D61B4
  W32(c->r[3]+0x00000014u,c->r[8]); // 801D61B8
  W32(c->r[3]+0x00000018u,c->r[6]); // 801D61BC
  W32(c->r[3]+0x0000001Cu,c->r[9]); // 801D61C0
  W32(c->r[3]+0x00000020u,c->r[9]); // 801D61C4
  W32(c->r[3]+0x00000024u,c->r[5]); // 801D61C8
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D61CC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 801D61D0
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 801D61D4
  W32(c->r[3]+0x00000034u,c->r[5]); // 801D61D8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 801D61DC
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 801D61E0
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[0]);} // 801D61E4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 801D61E8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[1]);} // 801D61EC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[1]);} // 801D61F0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 801D61F4
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 801D61F8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801D61FC
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D6200
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 801D6204
  return; // 801D6208
}

// fn_801D6210
void f_801D6210(Ctx* __restrict c) {
  trace_call(0x801D6210u);
  c->r[4]=c->r[3]+0x00000004u; // 801D6210
  c->r[0]=0u+0x00000000u; // 801D6214
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D6218
  W32(c->r[3]+0x00000004u,c->r[4]); // 801D621C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D6220
  return; // 801D6224
}

// fn_801D6230
void f_801D6230(Ctx* __restrict c) {
  trace_call(0x801D6230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6230
  c->r[0]=c->lr; // 801D6234
  cmps(c,0,(int32_t)c->r[3],0); // 801D6238
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D623C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6240
  c->r[31]=c->r[4]|c->r[4]; // 801D6244
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6248
  c->r[30]=c->r[3]|c->r[3]; // 801D624C
  if (crb(c,2)) { goto L_801D626C; } // 801D6250
  c->r[4]=0u+0x00000000u; // 801D6254
  c->lr=0x801D625Cu; f_801E4130(c); // 801D6258
  cmps(c,0,(int32_t)c->r[31],0); // 801D625C
  if (!crb(c,1)) { goto L_801D626C; } // 801D6260
  c->r[3]=c->r[30]|c->r[30]; // 801D6264
  c->lr=0x801D626Cu; f_802E61AC(c); // 801D6268
L_801D626C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D626C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6270
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6274
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6278
  c->lr=c->r[0]; // 801D627C
  c->r[1]=c->r[1]+0x00000010u; // 801D6280
  return; // 801D6284
}

// fn_801D6290
void f_801D6290(Ctx* __restrict c) {
  trace_call(0x801D6290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6290
  c->r[0]=c->lr; // 801D6294
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6298
  c->r[11]=c->r[1]+0x00000020u; // 801D629C
  c->lr=0x801D62A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D62A0
  c->r[26]=c->r[3]|c->r[3]; // 801D62A4
  c->lr=0x801D62ACu; f_801D76C0(c); // 801D62A8
  c->r[3]=c->r[3]+0x00000354u; // 801D62AC
  c->lr=0x801D62B4u; f_80126DC0(c); // 801D62B0
  c->r[31]=R32(c->r[26]+0x00000004u); // 801D62B4
  c->r[30]=c->r[26]+0x00000004u; // 801D62B8
  c->r[28]=0u+0x803A0000u; // 801D62BC
  c->r[29]=0u+0x803A0000u; // 801D62C0
  goto L_801D62F0; // 801D62C4
L_801D62C8:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801D62C8
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D62CC
  if (!crb(c,2)) { goto L_801D62E8; } // 801D62D0
  c->r[3]=c->r[28]+0x00002408u; // 801D62D4
  c->r[5]=c->r[29]+0x000023E4u; // 801D62D8
  c->r[4]=0u+0x0000023Du; // 801D62DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D62E0
  c->lr=0x801D62E8u; f_80212260(c); // 801D62E4
L_801D62E8:;
  c->r[3]=c->r[27]+0xFFFFFF08u; // 801D62E8
  c->lr=0x801D62F0u; f_801BC1A0(c); // 801D62EC
L_801D62F0:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D62F0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D62C8; } // 801D62F4
  c->r[3]=c->r[26]|c->r[26]; // 801D62F8
  c->lr=0x801D6300u; f_801D6510(c); // 801D62FC
  c->lr=0x801D6304u; f_801D76C0(c); // 801D6300
  c->r[3]=c->r[3]+0x00000354u; // 801D6304
  c->lr=0x801D630Cu; f_80126EA0(c); // 801D6308
  c->r[11]=c->r[1]+0x00000020u; // 801D630C
  c->lr=0x801D6314u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6310
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6314
  c->lr=c->r[0]; // 801D6318
  c->r[1]=c->r[1]+0x00000020u; // 801D631C
  return; // 801D6320
}

// fn_801D6330
void f_801D6330(Ctx* __restrict c) {
  trace_call(0x801D6330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6330
  c->r[0]=c->lr; // 801D6334
  cmpu(c,0,c->r[4],0x00000003u); // 801D6338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D633C
  c->r[0]=0u+0x00000000u; // 801D6340
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6344
  c->r[31]=c->r[4]|c->r[4]; // 801D6348
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D634C
  c->r[30]=c->r[3]|c->r[3]; // 801D6350
  if (crb(c,1)) { goto L_801D635C; } // 801D6354
  c->r[0]=0u+0x00000001u; // 801D6358
L_801D635C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D635C
  if (!crb(c,2)) { goto L_801D638C; } // 801D6360
  c->r[3]=0u+0x803A0000u; // 801D6364
  c->r[5]=0u+0x803A0000u; // 801D6368
  c->r[6]=c->r[31]|c->r[31]; // 801D636C
  c->r[4]=0u+0x000000FBu; // 801D6370
  c->r[3]=c->r[3]+0x00002120u; // 801D6374
  c->r[5]=c->r[5]+0x0000215Cu; // 801D6378
  c->r[7]=0u+0x00000000u; // 801D637C
  c->r[8]=0u+0x00000004u; // 801D6380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6384
  c->lr=0x801D638Cu; f_80212260(c); // 801D6388
L_801D638C:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D638C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6390
  c->r[3]=c->r[30]+c->r[0]; // 801D6394
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6398
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D639C
  {uint32_t ea=c->r[3]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D63A0
  c->lr=c->r[0]; // 801D63A4
  c->r[1]=c->r[1]+0x00000010u; // 801D63A8
  return; // 801D63AC
}

// fn_801D63B0
void f_801D63B0(Ctx* __restrict c) {
  trace_call(0x801D63B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D63B0
  c->r[0]=c->lr; // 801D63B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D63B8
  c->r[11]=c->r[1]+0x00000030u; // 801D63BC
  c->lr=0x801D63C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D63C0
  c->r[25]=c->r[3]|c->r[3]; // 801D63C4
  c->r[26]=c->r[4]|c->r[4]; // 801D63C8
  c->lr=0x801D63D0u; f_801D76C0(c); // 801D63CC
  c->r[3]=c->r[3]+0x00000354u; // 801D63D0
  c->lr=0x801D63D8u; f_80126DC0(c); // 801D63D4
  cmps(c,0,(int32_t)c->r[26],0); // 801D63D8
  if (!crb(c,2)) { goto L_801D63FC; } // 801D63DC
  c->r[3]=0u+0x803A0000u; // 801D63E0
  c->r[5]=0u+0x803A0000u; // 801D63E4
  c->r[3]=c->r[3]+0x000023A8u; // 801D63E8
  c->r[4]=0u+0x00000233u; // 801D63EC
  c->r[5]=c->r[5]+0x00002384u; // 801D63F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D63F4
  c->lr=0x801D63FCu; f_80212260(c); // 801D63F8
L_801D63FC:;
  c->r[27]=c->r[26]+0x00000100u; // 801D63FC
  c->r[3]=c->r[25]+0x0000000Cu; // 801D6400
  c->r[4]=c->r[27]|c->r[27]; // 801D6404
  c->lr=0x801D640Cu; f_801E45B0(c); // 801D6408
  c->lr=0x801D6410u; f_801D76C0(c); // 801D640C
  c->r[3]=c->r[3]+0x00000354u; // 801D6410
  c->lr=0x801D6418u; f_80126EA0(c); // 801D6414
  c->lr=0x801D641Cu; f_801D76C0(c); // 801D6418
  c->r[3]=c->r[3]+0x00000354u; // 801D641C
  c->lr=0x801D6424u; f_80126DC0(c); // 801D6420
  c->r[31]=R32(c->r[25]+0x00000010u); // 801D6424
  c->r[30]=c->r[25]+0x00000010u; // 801D6428
  c->r[28]=0u+0x803A0000u; // 801D642C
  c->r[29]=0u+0x803A0000u; // 801D6430
  goto L_801D64A8; // 801D6434
L_801D6438:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D6438
  if (!crb(c,2)) { goto L_801D6454; } // 801D643C
  c->r[3]=c->r[28]+0x00002438u; // 801D6440
  c->r[5]=c->r[29]+0x00002414u; // 801D6444
  c->r[4]=0u+0x0000023Du; // 801D6448
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D644C
  c->lr=0x801D6454u; f_80212260(c); // 801D6450
L_801D6454:;
  c->r[3]=R8(c->r[31]+0xFFFFFF98u); // 801D6454
  c->r[0]=R32(c->r[31]+0xFFFFFF50u); // 801D6458
  c->r[3]=c->r[3]+c->r[0]; // 801D645C
  cmps(c,0,(int32_t)c->r[3],127); // 801D6460
  if (!crb(c,1)) { goto L_801D6470; } // 801D6464
  c->r[4]=0u+0x0000007Fu; // 801D6468
  goto L_801D6478; // 801D646C
L_801D6470:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6470
  c->r[4]=c->r[3]&~c->r[0]; // 801D6474
L_801D6478:;
  c->r[3]=R8(c->r[26]+0x00000098u); // 801D6478
  c->r[0]=R32(c->r[26]+0x00000050u); // 801D647C
  c->r[3]=c->r[3]+c->r[0]; // 801D6480
  cmps(c,0,(int32_t)c->r[3],127); // 801D6484
  if (!crb(c,1)) { goto L_801D6494; } // 801D6488
  c->r[0]=0u+0x0000007Fu; // 801D648C
  goto L_801D649C; // 801D6490
L_801D6494:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6494
  c->r[0]=c->r[3]&~c->r[0]; // 801D6498
L_801D649C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D649C
  if (crb(c,0)) { goto L_801D64B0; } // 801D64A0
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D64A4
L_801D64A8:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D64A8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6438; } // 801D64AC
L_801D64B0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D64B0
  if (!crb(c,2)) { goto L_801D64D4; } // 801D64B4
  c->r[3]=0u+0x803A0000u; // 801D64B8
  c->r[5]=0u+0x803A0000u; // 801D64BC
  c->r[3]=c->r[3]+0x000023A8u; // 801D64C0
  c->r[4]=0u+0x00000233u; // 801D64C4
  c->r[5]=c->r[5]+0x00002384u; // 801D64C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D64CC
  c->lr=0x801D64D4u; f_80212260(c); // 801D64D0
L_801D64D4:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D64D4
  c->r[5]=c->r[27]|c->r[27]; // 801D64D8
  c->r[3]=c->r[25]+0x0000000Cu; // 801D64DC
  c->r[4]=c->r[1]+0x00000008u; // 801D64E0
  c->lr=0x801D64E8u; f_801E44B0(c); // 801D64E4
  c->lr=0x801D64ECu; f_801D76C0(c); // 801D64E8
  c->r[3]=c->r[3]+0x00000354u; // 801D64EC
  c->lr=0x801D64F4u; f_80126EA0(c); // 801D64F0
  c->r[11]=c->r[1]+0x00000030u; // 801D64F4
  c->lr=0x801D64FCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D64F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D64FC
  c->lr=c->r[0]; // 801D6500
  c->r[1]=c->r[1]+0x00000030u; // 801D6504
  return; // 801D6508
}

// fn_801D6510
void f_801D6510(Ctx* __restrict c) {
  trace_call(0x801D6510u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6510
  c->r[0]=c->lr; // 801D6514
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D6518
  c->r[11]=c->r[1]+0x00000050u; // 801D651C
  c->lr=0x801D6524u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6520
  c->r[24]=c->r[3]|c->r[3]; // 801D6524
  c->lr=0x801D652Cu; f_801D76C0(c); // 801D6528
  c->r[3]=c->r[3]+0x00000354u; // 801D652C
  c->lr=0x801D6534u; f_80126DC0(c); // 801D6530
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 801D6534
  cmpu(c,0,c->r[0],0x00000002u); // 801D6538
  if (!crb(c,0)) { goto L_801D6550; } // 801D653C
  c->lr=0x801D6544u; f_801D76C0(c); // 801D6540
  c->r[3]=c->r[3]+0x00000354u; // 801D6544
  c->lr=0x801D654Cu; f_80126EA0(c); // 801D6548
  goto L_801D67A8; // 801D654C
L_801D6550:;
  c->r[0]=R8(c->r[13]+0xFFFFC450u); // 801D6550
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D6554
  if (!crb(c,2)) { goto L_801D65A0; } // 801D6558
  c->r[3]=0u+0x805B0000u; // 801D655C
  c->r[4]=0u+0x801D0000u; // 801D6560
  c->r[5]=0u+0x801D0000u; // 801D6564
  c->r[6]=0u+0x0000000Cu; // 801D6568
  c->r[3]=c->r[3]+0xFFFFC9B0u; // 801D656C
  c->r[4]=c->r[4]+0x00006210u; // 801D6570
  c->r[5]=c->r[5]+0x00006230u; // 801D6574
  c->r[7]=0u+0x00000080u; // 801D6578
  c->lr=0x801D6580u; f_802E66A0(c); // 801D657C
  c->r[4]=0u+0x801D0000u; // 801D6580
  c->r[5]=0u+0x805B0000u; // 801D6584
  c->r[4]=c->r[4]+0x000067C0u; // 801D6588
  c->r[3]=0u+0x00000000u; // 801D658C
  c->r[5]=c->r[5]+0xFFFFC9A0u; // 801D6590
  c->lr=0x801D6598u; f_802E6064(c); // 801D6594
  c->r[0]=0u+0x00000001u; // 801D6598
  W8(c->r[13]+0xFFFFC450u,c->r[0]); // 801D659C
L_801D65A0:;
  c->r[20]=0u+0x805B0000u; // 801D65A0
  c->r[26]=0u+0x803A0000u; // 801D65A4
  c->r[20]=c->r[20]+0xFFFFC9B0u; // 801D65A8
  c->r[27]=0u+0x803A0000u; // 801D65AC
  c->r[28]=0u+0x803A0000u; // 801D65B0
  c->r[29]=0u+0x803A0000u; // 801D65B4
  c->r[30]=0u+0x803A0000u; // 801D65B8
  c->r[31]=0u+0x803A0000u; // 801D65BC
  c->r[22]=0u+0x803A0000u; // 801D65C0
  c->r[21]=0u+0x803A0000u; // 801D65C4
  goto L_801D6698; // 801D65C8
L_801D65CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D65CC
  if (!crb(c,2)) { goto L_801D65E8; } // 801D65D0
  c->r[3]=c->r[26]+0x00002498u; // 801D65D4
  c->r[5]=c->r[27]+0x00002474u; // 801D65D8
  c->r[4]=0u+0x000001F1u; // 801D65DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D65E0
  c->lr=0x801D65E8u; f_80212260(c); // 801D65E4
L_801D65E8:;
  c->r[23]=R32(c->r[24]+0x00000010u); // 801D65E8
  cmps(c,0,(int32_t)c->r[23],0); // 801D65EC
  if (!crb(c,2)) { goto L_801D6608; } // 801D65F0
  c->r[3]=c->r[28]+0x00002438u; // 801D65F4
  c->r[5]=c->r[29]+0x00002414u; // 801D65F8
  c->r[4]=0u+0x0000023Du; // 801D65FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6600
  c->lr=0x801D6608u; f_80212260(c); // 801D6604
L_801D6608:;
  c->r[25]=addc(c,c->r[23],0xFFFFFF00u,0); cr0(c,c->r[25]); // 801D6608
  if (!crb(c,2)) { goto L_801D6624; } // 801D660C
  c->r[3]=c->r[30]+0x00002468u; // 801D6610
  c->r[5]=c->r[31]+0x00002444u; // 801D6614
  c->r[4]=0u+0x00000193u; // 801D6618
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D661C
  c->lr=0x801D6624u; f_80212260(c); // 801D6620
L_801D6624:;
  c->r[0]=R32(c->r[24]+0x00000010u); // 801D6624
  c->r[3]=c->r[24]+0x0000000Cu; // 801D6628
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D662C
  c->r[4]=c->r[1]+0x00000014u; // 801D6630
  c->lr=0x801D6638u; f_801E4260(c); // 801D6634
  c->r[3]=R8(c->r[25]+0x00000098u); // 801D6638
  c->r[0]=R32(c->r[25]+0x00000050u); // 801D663C
  c->r[3]=c->r[3]+c->r[0]; // 801D6640
  cmps(c,0,(int32_t)c->r[3],127); // 801D6644
  if (!crb(c,1)) { goto L_801D6654; } // 801D6648
  c->r[0]=0u+0x0000007Fu; // 801D664C
  goto L_801D665C; // 801D6650
L_801D6654:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6654
  c->r[0]=c->r[3]&~c->r[0]; // 801D6658
L_801D665C:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801D665C
  cmps(c,0,(int32_t)c->r[25],0); // 801D6660
  c->r[19]=c->r[20]+c->r[0]; // 801D6664
  c->r[23]=c->r[19]+0x00000004u; // 801D6668
  if (!crb(c,2)) { goto L_801D6684; } // 801D666C
  c->r[3]=c->r[22]+0x000023A8u; // 801D6670
  c->r[5]=c->r[21]+0x00002384u; // 801D6674
  c->r[4]=0u+0x00000233u; // 801D6678
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D667C
  c->lr=0x801D6684u; f_80212260(c); // 801D6680
L_801D6684:;
  W32(c->r[1]+0x00000010u,c->r[23]); // 801D6684
  c->r[3]=c->r[19]|c->r[19]; // 801D6688
  c->r[4]=c->r[1]+0x00000010u; // 801D668C
  c->r[5]=c->r[25]+0x00000100u; // 801D6690
  c->lr=0x801D6698u; f_801E44B0(c); // 801D6694
L_801D6698:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 801D6698
  cmps(c,0,(int32_t)c->r[0],0); // 801D669C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D65CC; } // 801D66A0
  c->r[20]=0u+0x805B0000u; // 801D66A4
  c->r[18]=0u+0x00000000u; // 801D66A8
  c->r[20]=c->r[20]+0xFFFFC9B0u; // 801D66AC
  c->r[21]=0u+0x803A0000u; // 801D66B0
  c->r[22]=0u+0x803A0000u; // 801D66B4
  c->r[31]=0u+0x803A0000u; // 801D66B8
  c->r[30]=0u+0x803A0000u; // 801D66BC
  c->r[29]=0u+0x803A0000u; // 801D66C0
  c->r[28]=0u+0x803A0000u; // 801D66C4
  c->r[27]=0u+0x803A0000u; // 801D66C8
  c->r[26]=0u+0x803A0000u; // 801D66CC
L_801D66D0:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 801D66D0
  cmps(c,0,(int32_t)c->r[0],0); // 801D66D4
  if (crb(c,2)) { goto L_801D678C; } // 801D66D8
  c->r[25]=c->r[24]+0x00000010u; // 801D66DC
  goto L_801D6780; // 801D66E0
L_801D66E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D66E4
  if (!crb(c,2)) { goto L_801D6700; } // 801D66E8
  c->r[3]=c->r[21]+0x00002498u; // 801D66EC
  c->r[5]=c->r[22]+0x00002474u; // 801D66F0
  c->r[4]=0u+0x000001F1u; // 801D66F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D66F8
  c->lr=0x801D6700u; f_80212260(c); // 801D66FC
L_801D6700:;
  c->r[23]=R32(c->r[20]+0x00000004u); // 801D6700
  cmps(c,0,(int32_t)c->r[23],0); // 801D6704
  if (!crb(c,2)) { goto L_801D6720; } // 801D6708
  c->r[3]=c->r[31]+0x00002438u; // 801D670C
  c->r[5]=c->r[30]+0x00002414u; // 801D6710
  c->r[4]=0u+0x0000023Du; // 801D6714
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6718
  c->lr=0x801D6720u; f_80212260(c); // 801D671C
L_801D6720:;
  c->r[19]=addc(c,c->r[23],0xFFFFFF00u,0); cr0(c,c->r[19]); // 801D6720
  if (!crb(c,2)) { goto L_801D673C; } // 801D6724
  c->r[3]=c->r[29]+0x00002468u; // 801D6728
  c->r[5]=c->r[28]+0x00002444u; // 801D672C
  c->r[4]=0u+0x00000193u; // 801D6730
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6734
  c->lr=0x801D673Cu; f_80212260(c); // 801D6738
L_801D673C:;
  c->r[0]=R32(c->r[20]+0x00000004u); // 801D673C
  c->r[3]=c->r[20]|c->r[20]; // 801D6740
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D6744
  c->r[4]=c->r[1]+0x0000000Cu; // 801D6748
  c->lr=0x801D6750u; f_801E4260(c); // 801D674C
  cmps(c,0,(int32_t)c->r[19],0); // 801D6750
  if (!crb(c,2)) { goto L_801D676C; } // 801D6754
  c->r[3]=c->r[27]+0x000023A8u; // 801D6758
  c->r[5]=c->r[26]+0x00002384u; // 801D675C
  c->r[4]=0u+0x00000233u; // 801D6760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6764
  c->lr=0x801D676Cu; f_80212260(c); // 801D6768
L_801D676C:;
  W32(c->r[1]+0x00000008u,c->r[25]); // 801D676C
  c->r[3]=c->r[24]+0x0000000Cu; // 801D6770
  c->r[4]=c->r[1]+0x00000008u; // 801D6774
  c->r[5]=c->r[19]+0x00000100u; // 801D6778
  c->lr=0x801D6780u; f_801E44B0(c); // 801D677C
L_801D6780:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 801D6780
  cmps(c,0,(int32_t)c->r[0],0); // 801D6784
  if (!crb(c,2)) { IRQCHK(c); goto L_801D66E4; } // 801D6788
L_801D678C:;
  c->r[18]=c->r[18]+0x00000001u; // 801D678C
  c->r[20]=c->r[20]+0x0000000Cu; // 801D6790
  cmps(c,0,(int32_t)c->r[18],128); // 801D6794
  if (crb(c,0)) { IRQCHK(c); goto L_801D66D0; } // 801D6798
  c->lr=0x801D67A0u; f_801D76C0(c); // 801D679C
  c->r[3]=c->r[3]+0x00000354u; // 801D67A0
  c->lr=0x801D67A8u; f_80126EA0(c); // 801D67A4
L_801D67A8:;
  c->r[11]=c->r[1]+0x00000050u; // 801D67A8
  c->lr=0x801D67B0u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D67AC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D67B0
  c->lr=c->r[0]; // 801D67B4
  c->r[1]=c->r[1]+0x00000050u; // 801D67B8
  return; // 801D67BC
}

// fn_801D67C0
void f_801D67C0(Ctx* __restrict c) {
  trace_call(0x801D67C0u);
  c->r[3]=0u+0x805B0000u; // 801D67C0
  c->r[4]=0u+0x801D0000u; // 801D67C4
  c->r[3]=c->r[3]+0xFFFFC9B0u; // 801D67C8
  c->r[5]=0u+0x0000000Cu; // 801D67CC
  c->r[4]=c->r[4]+0x00006230u; // 801D67D0
  c->r[6]=0u+0x00000080u; // 801D67D4
  f_802E6798(c); return; // 801D67D8
}

// fn_801D67E0
void f_801D67E0(Ctx* __restrict c) {
  trace_call(0x801D67E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D67E0
  c->r[0]=c->lr; // 801D67E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D67E8
  c->r[11]=c->r[1]+0x00000040u; // 801D67EC
  c->lr=0x801D67F4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D67F0
  cmps(c,0,(int32_t)c->r[4],0); // 801D67F4
  c->r[29]=c->r[3]|c->r[3]; // 801D67F8
  c->r[30]=c->r[4]|c->r[4]; // 801D67FC
  if (!crb(c,2)) { goto L_801D6820; } // 801D6800
  c->r[3]=0u+0x803A0000u; // 801D6804
  c->r[5]=0u+0x803A0000u; // 801D6808
  c->r[3]=c->r[3]+0x00002120u; // 801D680C
  c->r[4]=0u+0x00000195u; // 801D6810
  c->r[5]=c->r[5]+0x000021DCu; // 801D6814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6818
  c->lr=0x801D6820u; f_80212260(c); // 801D681C
L_801D6820:;
  c->lr=0x801D6824u; f_801D76C0(c); // 801D6820
  c->r[3]=c->r[3]+0x00000354u; // 801D6824
  c->lr=0x801D682Cu; f_80126DC0(c); // 801D6828
  c->r[3]=R8(c->r[30]+0x00000098u); // 801D682C
  c->r[0]=R32(c->r[30]+0x00000050u); // 801D6830
  c->r[3]=c->r[3]+c->r[0]; // 801D6834
  cmps(c,0,(int32_t)c->r[3],127); // 801D6838
  if (!crb(c,1)) { goto L_801D6848; } // 801D683C
  c->r[31]=0u+0x0000007Fu; // 801D6840
  goto L_801D6850; // 801D6844
L_801D6848:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6848
  c->r[31]=c->r[3]&~c->r[0]; // 801D684C
L_801D6850:;
  c->r[0]=R32(c->r[29]+0x00000024u); // 801D6850
  cmps(c,0,(int32_t)c->r[0],0); // 801D6854
  if (!crb(c,2)) { goto L_801D6870; } // 801D6858
  c->lr=0x801D6860u; f_801D76C0(c); // 801D685C
  c->r[3]=c->r[3]+0x00000354u; // 801D6860
  c->lr=0x801D6868u; f_80126EA0(c); // 801D6864
  c->r[3]=0u+0x00000000u; // 801D6868
  goto L_801D6A9C; // 801D686C
L_801D6870:;
  c->r[22]=0u+0x803A0000u; // 801D6870
  c->r[23]=0u+0x803A0000u; // 801D6874
  c->r[25]=0u+0x803A0000u; // 801D6878
  c->r[28]=0u+0x803A0000u; // 801D687C
  c->r[27]=0u+0x803A0000u; // 801D6880
  c->r[26]=0u+0x803A0000u; // 801D6884
  goto L_801D6958; // 801D6888
L_801D688C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801D688C
  cmps(c,0,(int32_t)c->r[0],0); // 801D6890
  if (!crb(c,2)) { goto L_801D68AC; } // 801D6894
  c->r[3]=c->r[22]+0x00002498u; // 801D6898
  c->r[5]=c->r[23]+0x00002474u; // 801D689C
  c->r[4]=0u+0x000001F1u; // 801D68A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D68A4
  c->lr=0x801D68ACu; f_80212260(c); // 801D68A8
L_801D68AC:;
  c->r[24]=R32(c->r[29]+0x00000010u); // 801D68AC
  cmps(c,0,(int32_t)c->r[24],0); // 801D68B0
  if (!crb(c,2)) { goto L_801D68CC; } // 801D68B4
  c->r[3]=c->r[25]+0x00002438u; // 801D68B8
  c->r[5]=c->r[28]+0x00002414u; // 801D68BC
  c->r[4]=0u+0x0000023Du; // 801D68C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D68C4
  c->lr=0x801D68CCu; f_80212260(c); // 801D68C8
L_801D68CC:;
  c->r[24]=addc(c,c->r[24],0xFFFFFF00u,0); cr0(c,c->r[24]); // 801D68CC
  if (!crb(c,2)) { goto L_801D68E8; } // 801D68D0
  c->r[3]=c->r[27]+0x00002468u; // 801D68D4
  c->r[5]=c->r[26]+0x00002444u; // 801D68D8
  c->r[4]=0u+0x00000193u; // 801D68DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D68E0
  c->lr=0x801D68E8u; f_80212260(c); // 801D68E4
L_801D68E8:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D68E8
  if (!crb(c,2)) { goto L_801D6904; } // 801D68EC
  c->lr=0x801D68F4u; f_801D76C0(c); // 801D68F0
  c->r[3]=c->r[3]+0x00000354u; // 801D68F4
  c->lr=0x801D68FCu; f_80126EA0(c); // 801D68F8
  c->r[3]=0u+0x00000000u; // 801D68FC
  goto L_801D6A9C; // 801D6900
L_801D6904:;
  c->r[3]=R8(c->r[24]+0x00000098u); // 801D6904
  c->r[0]=R32(c->r[24]+0x00000050u); // 801D6908
  c->r[3]=c->r[3]+c->r[0]; // 801D690C
  cmps(c,0,(int32_t)c->r[3],127); // 801D6910
  if (!crb(c,1)) { goto L_801D6920; } // 801D6914
  c->r[0]=0u+0x0000007Fu; // 801D6918
  goto L_801D6928; // 801D691C
L_801D6920:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6920
  c->r[0]=c->r[3]&~c->r[0]; // 801D6924
L_801D6928:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801D6928
  if (!crb(c,0)) { goto L_801D6944; } // 801D692C
  c->lr=0x801D6934u; f_801D76C0(c); // 801D6930
  c->r[3]=c->r[3]+0x00000354u; // 801D6934
  c->lr=0x801D693Cu; f_80126EA0(c); // 801D6938
  c->r[3]=0u+0x00000000u; // 801D693C
  goto L_801D6A9C; // 801D6940
L_801D6944:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 801D6944
  c->r[3]=c->r[24]|c->r[24]; // 801D6948
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D694C
  c->ctr=c->r[12]; // 801D6950
  if (true) { c->lr=0x801D6958u; dispatch(c,c->ctr); } // 801D6954
L_801D6958:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D6958
  c->r[0]=R32(c->r[29]+0x00000024u); // 801D695C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D6960
  if (!crb(c,0)) { IRQCHK(c); goto L_801D688C; } // 801D6964
  cmps(c,0,(int32_t)c->r[30],0); // 801D6968
  c->r[26]=c->r[29]+0x00000004u; // 801D696C
  if (!crb(c,2)) { goto L_801D6990; } // 801D6970
  c->r[3]=0u+0x803A0000u; // 801D6974
  c->r[5]=0u+0x803A0000u; // 801D6978
  c->r[3]=c->r[3]+0x000023D8u; // 801D697C
  c->r[4]=0u+0x00000233u; // 801D6980
  c->r[5]=c->r[5]+0x000023B4u; // 801D6984
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6988
  c->lr=0x801D6990u; f_80212260(c); // 801D698C
L_801D6990:;
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 801D6990
  c->r[3]=c->r[29]|c->r[29]; // 801D6994
  c->r[4]=c->r[1]+0x0000000Cu; // 801D6998
  c->r[5]=c->r[30]+0x000000F8u; // 801D699C
  c->lr=0x801D69A4u; f_801E44B0(c); // 801D69A0
  c->lr=0x801D69A8u; f_801D76C0(c); // 801D69A4
  c->r[3]=c->r[3]+0x00000354u; // 801D69A8
  c->lr=0x801D69B0u; f_80126DC0(c); // 801D69AC
  c->r[31]=R32(c->r[29]+0x00000010u); // 801D69B0
  c->r[28]=c->r[29]+0x00000010u; // 801D69B4
  c->r[26]=0u+0x803A0000u; // 801D69B8
  c->r[27]=0u+0x803A0000u; // 801D69BC
  goto L_801D6A34; // 801D69C0
L_801D69C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D69C4
  if (!crb(c,2)) { goto L_801D69E0; } // 801D69C8
  c->r[3]=c->r[26]+0x00002438u; // 801D69CC
  c->r[5]=c->r[27]+0x00002414u; // 801D69D0
  c->r[4]=0u+0x0000023Du; // 801D69D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D69D8
  c->lr=0x801D69E0u; f_80212260(c); // 801D69DC
L_801D69E0:;
  c->r[3]=R8(c->r[31]+0xFFFFFF98u); // 801D69E0
  c->r[0]=R32(c->r[31]+0xFFFFFF50u); // 801D69E4
  c->r[3]=c->r[3]+c->r[0]; // 801D69E8
  cmps(c,0,(int32_t)c->r[3],127); // 801D69EC
  if (!crb(c,1)) { goto L_801D69FC; } // 801D69F0
  c->r[4]=0u+0x0000007Fu; // 801D69F4
  goto L_801D6A04; // 801D69F8
L_801D69FC:;
  c->r[0]=sraw(c,c->r[3],31); // 801D69FC
  c->r[4]=c->r[3]&~c->r[0]; // 801D6A00
L_801D6A04:;
  c->r[3]=R8(c->r[30]+0x00000098u); // 801D6A04
  c->r[0]=R32(c->r[30]+0x00000050u); // 801D6A08
  c->r[3]=c->r[3]+c->r[0]; // 801D6A0C
  cmps(c,0,(int32_t)c->r[3],127); // 801D6A10
  if (!crb(c,1)) { goto L_801D6A20; } // 801D6A14
  c->r[0]=0u+0x0000007Fu; // 801D6A18
  goto L_801D6A28; // 801D6A1C
L_801D6A20:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6A20
  c->r[0]=c->r[3]&~c->r[0]; // 801D6A24
L_801D6A28:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D6A28
  if (crb(c,0)) { goto L_801D6A3C; } // 801D6A2C
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D6A30
L_801D6A34:;
  cmpu(c,0,c->r[31],c->r[28]); // 801D6A34
  if (!crb(c,2)) { IRQCHK(c); goto L_801D69C4; } // 801D6A38
L_801D6A3C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D6A3C
  if (!crb(c,2)) { goto L_801D6A60; } // 801D6A40
  c->r[3]=0u+0x803A0000u; // 801D6A44
  c->r[5]=0u+0x803A0000u; // 801D6A48
  c->r[3]=c->r[3]+0x000023A8u; // 801D6A4C
  c->r[4]=0u+0x00000233u; // 801D6A50
  c->r[5]=c->r[5]+0x00002384u; // 801D6A54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6A58
  c->lr=0x801D6A60u; f_80212260(c); // 801D6A5C
L_801D6A60:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D6A60
  c->r[3]=c->r[29]+0x0000000Cu; // 801D6A64
  c->r[4]=c->r[1]+0x00000008u; // 801D6A68
  c->r[5]=c->r[30]+0x00000100u; // 801D6A6C
  c->lr=0x801D6A74u; f_801E44B0(c); // 801D6A70
  c->lr=0x801D6A78u; f_801D76C0(c); // 801D6A74
  c->r[3]=c->r[3]+0x00000354u; // 801D6A78
  c->lr=0x801D6A80u; f_80126EA0(c); // 801D6A7C
  c->r[3]=c->r[30]|c->r[30]; // 801D6A80
  c->r[4]=c->r[29]|c->r[29]; // 801D6A84
  c->lr=0x801D6A8Cu; f_801BCDD0(c); // 801D6A88
  c->lr=0x801D6A90u; f_801D76C0(c); // 801D6A8C
  c->r[3]=c->r[3]+0x00000354u; // 801D6A90
  c->lr=0x801D6A98u; f_80126EA0(c); // 801D6A94
  c->r[3]=0u+0x00000001u; // 801D6A98
L_801D6A9C:;
  c->r[11]=c->r[1]+0x00000040u; // 801D6A9C
  c->lr=0x801D6AA4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6AA0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D6AA4
  c->lr=c->r[0]; // 801D6AA8
  c->r[1]=c->r[1]+0x00000040u; // 801D6AAC
  return; // 801D6AB0
}

// fn_801D6AC0
void f_801D6AC0(Ctx* __restrict c) {
  trace_call(0x801D6AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6AC0
  c->r[0]=c->lr; // 801D6AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6ACC
  c->r[31]=c->r[4]|c->r[4]; // 801D6AD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6AD4
  c->r[30]=c->r[3]|c->r[3]; // 801D6AD8
  c->lr=0x801D6AE0u; f_801D76C0(c); // 801D6ADC
  c->r[3]=c->r[3]+0x00000354u; // 801D6AE0
  c->lr=0x801D6AE8u; f_80126DC0(c); // 801D6AE4
  cmps(c,0,(int32_t)c->r[31],0); // 801D6AE8
  if (!crb(c,2)) { goto L_801D6B0C; } // 801D6AEC
  c->r[3]=0u+0x803A0000u; // 801D6AF0
  c->r[5]=0u+0x803A0000u; // 801D6AF4
  c->r[3]=c->r[3]+0x000023A8u; // 801D6AF8
  c->r[4]=0u+0x00000233u; // 801D6AFC
  c->r[5]=c->r[5]+0x00002384u; // 801D6B00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6B04
  c->lr=0x801D6B0Cu; f_80212260(c); // 801D6B08
L_801D6B0C:;
  c->r[3]=c->r[30]+0x0000000Cu; // 801D6B0C
  c->r[4]=c->r[31]+0x00000100u; // 801D6B10
  c->lr=0x801D6B18u; f_801E45B0(c); // 801D6B14
  c->lr=0x801D6B1Cu; f_801D76C0(c); // 801D6B18
  c->r[3]=c->r[3]+0x00000354u; // 801D6B1C
  c->lr=0x801D6B24u; f_80126EA0(c); // 801D6B20
  c->lr=0x801D6B28u; f_801D76C0(c); // 801D6B24
  c->r[3]=c->r[3]+0x00000354u; // 801D6B28
  c->lr=0x801D6B30u; f_80126DC0(c); // 801D6B2C
  cmps(c,0,(int32_t)c->r[31],0); // 801D6B30
  if (!crb(c,2)) { goto L_801D6B54; } // 801D6B34
  c->r[3]=0u+0x803A0000u; // 801D6B38
  c->r[5]=0u+0x803A0000u; // 801D6B3C
  c->r[3]=c->r[3]+0x000023D8u; // 801D6B40
  c->r[4]=0u+0x00000233u; // 801D6B44
  c->r[5]=c->r[5]+0x000023B4u; // 801D6B48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6B4C
  c->lr=0x801D6B54u; f_80212260(c); // 801D6B50
L_801D6B54:;
  c->r[3]=c->r[30]|c->r[30]; // 801D6B54
  c->r[4]=c->r[31]+0x000000F8u; // 801D6B58
  c->lr=0x801D6B60u; f_801E45B0(c); // 801D6B5C
  c->r[3]=c->r[31]|c->r[31]; // 801D6B60
  c->r[4]=c->r[30]|c->r[30]; // 801D6B64
  c->lr=0x801D6B6Cu; f_801BCE60(c); // 801D6B68
  c->lr=0x801D6B70u; f_801D76C0(c); // 801D6B6C
  c->r[3]=c->r[3]+0x00000354u; // 801D6B70
  c->lr=0x801D6B78u; f_80126EA0(c); // 801D6B74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6B78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6B7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6B80
  c->lr=c->r[0]; // 801D6B84
  c->r[1]=c->r[1]+0x00000010u; // 801D6B88
  return; // 801D6B8C
}

// fn_801D6B90
void f_801D6B90(Ctx* __restrict c) {
  trace_call(0x801D6B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6B90
  c->r[0]=c->lr; // 801D6B94
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6B98
  c->r[11]=c->r[1]+0x00000030u; // 801D6B9C
  c->lr=0x801D6BA4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6BA0
  cmps(c,0,(int32_t)c->r[4],0); // 801D6BA4
  c->r[24]=0u+0x803A0000u; // 801D6BA8
  c->r[23]=c->r[3]|c->r[3]; // 801D6BAC
  c->r[25]=c->r[4]|c->r[4]; // 801D6BB0
  c->r[24]=c->r[24]+0x00002120u; // 801D6BB4
  if (!crb(c,0)) { goto L_801D6BD0; } // 801D6BB8
  c->r[3]=c->r[24]+0x00000000u; // 801D6BBC
  c->r[5]=c->r[24]+0x000000E4u; // 801D6BC0
  c->r[4]=0u+0x000001C8u; // 801D6BC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6BC8
  c->lr=0x801D6BD0u; f_80212260(c); // 801D6BCC
L_801D6BD0:;
  c->lr=0x801D6BD4u; f_801D76C0(c); // 801D6BD0
  c->r[3]=c->r[3]+0x00000354u; // 801D6BD4
  c->lr=0x801D6BDCu; f_80126DC0(c); // 801D6BD8
  c->r[0]=R32(c->r[23]+0x00000028u); // 801D6BDC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801D6BE0
  if (!crb(c,1)) { goto L_801D6BFC; } // 801D6BE4
  c->r[3]=c->r[24]+0x00000000u; // 801D6BE8
  c->r[5]=c->r[24]+0x00000108u; // 801D6BEC
  c->r[4]=0u+0x000001CDu; // 801D6BF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6BF4
  c->lr=0x801D6BFCu; f_80212300(c); // 801D6BF8
L_801D6BFC:;
  c->r[0]=R32(c->r[23]+0x00000028u); // 801D6BFC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801D6C00
  if (!crb(c,1)) { goto L_801D6C0C; } // 801D6C04
  goto L_801D6C14; // 801D6C08
L_801D6C0C:;
  c->r[0]=sraw(c,c->r[25],31); // 801D6C0C
  c->r[0]=c->r[25]&~c->r[0]; // 801D6C10
L_801D6C14:;
  W32(c->r[23]+0x00000024u,c->r[0]); // 801D6C14
  c->r[25]=0u+0x803A0000u; // 801D6C18
  c->r[26]=0u+0x803A0000u; // 801D6C1C
  c->r[28]=0u+0x803A0000u; // 801D6C20
  c->r[29]=0u+0x803A0000u; // 801D6C24
  c->r[30]=0u+0x803A0000u; // 801D6C28
  c->r[31]=0u+0x803A0000u; // 801D6C2C
  goto L_801D6CC0; // 801D6C30
L_801D6C34:;
  c->r[0]=R32(c->r[23]+0x0000000Cu); // 801D6C34
  cmps(c,0,(int32_t)c->r[0],0); // 801D6C38
  if (!crb(c,2)) { goto L_801D6C54; } // 801D6C3C
  c->r[3]=c->r[25]+0x00002498u; // 801D6C40
  c->r[5]=c->r[26]+0x00002474u; // 801D6C44
  c->r[4]=0u+0x000001F1u; // 801D6C48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6C4C
  c->lr=0x801D6C54u; f_80212260(c); // 801D6C50
L_801D6C54:;
  c->r[27]=R32(c->r[23]+0x00000010u); // 801D6C54
  cmps(c,0,(int32_t)c->r[27],0); // 801D6C58
  if (!crb(c,2)) { goto L_801D6C74; } // 801D6C5C
  c->r[3]=c->r[28]+0x00002438u; // 801D6C60
  c->r[5]=c->r[29]+0x00002414u; // 801D6C64
  c->r[4]=0u+0x0000023Du; // 801D6C68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6C6C
  c->lr=0x801D6C74u; f_80212260(c); // 801D6C70
L_801D6C74:;
  c->r[27]=addc(c,c->r[27],0xFFFFFF00u,0); cr0(c,c->r[27]); // 801D6C74
  if (!crb(c,2)) { goto L_801D6C90; } // 801D6C78
  c->r[3]=c->r[30]+0x00002468u; // 801D6C7C
  c->r[5]=c->r[31]+0x00002444u; // 801D6C80
  c->r[4]=0u+0x00000193u; // 801D6C84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6C88
  c->lr=0x801D6C90u; f_80212260(c); // 801D6C8C
L_801D6C90:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D6C90
  if (!crb(c,2)) { goto L_801D6CAC; } // 801D6C94
  c->r[3]=c->r[24]+0x00000000u; // 801D6C98
  c->r[5]=c->r[24]+0x0000012Cu; // 801D6C9C
  c->r[4]=0u+0x000001D6u; // 801D6CA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6CA4
  c->lr=0x801D6CACu; f_80212260(c); // 801D6CA8
L_801D6CAC:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 801D6CAC
  c->r[3]=c->r[27]|c->r[27]; // 801D6CB0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D6CB4
  c->ctr=c->r[12]; // 801D6CB8
  if (true) { c->lr=0x801D6CC0u; dispatch(c,c->ctr); } // 801D6CBC
L_801D6CC0:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 801D6CC0
  c->r[0]=R32(c->r[23]+0x00000024u); // 801D6CC4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D6CC8
  if (crb(c,1)) { IRQCHK(c); goto L_801D6C34; } // 801D6CCC
  c->lr=0x801D6CD4u; f_801D76C0(c); // 801D6CD0
  c->r[3]=c->r[3]+0x00000354u; // 801D6CD4
  c->lr=0x801D6CDCu; f_80126EA0(c); // 801D6CD8
  c->r[11]=c->r[1]+0x00000030u; // 801D6CDC
  c->lr=0x801D6CE4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6CE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D6CE4
  c->lr=c->r[0]; // 801D6CE8
  c->r[1]=c->r[1]+0x00000030u; // 801D6CEC
  return; // 801D6CF0
}

// fn_801D6D00
void f_801D6D00(Ctx* __restrict c) {
  trace_call(0x801D6D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6D00
  c->r[0]=c->lr; // 801D6D04
  cmps(c,0,(int32_t)c->r[4],0); // 801D6D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6D0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6D10
  c->r[31]=c->r[4]|c->r[4]; // 801D6D14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6D18
  c->r[30]=c->r[3]|c->r[3]; // 801D6D1C
  if (!crb(c,0)) { goto L_801D6D40; } // 801D6D20
  c->r[3]=0u+0x803A0000u; // 801D6D24
  c->r[5]=0u+0x803A0000u; // 801D6D28
  c->r[3]=c->r[3]+0x00002120u; // 801D6D2C
  c->r[4]=0u+0x000001E6u; // 801D6D30
  c->r[5]=c->r[5]+0x00002278u; // 801D6D34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6D38
  c->lr=0x801D6D40u; f_80212260(c); // 801D6D3C
L_801D6D40:;
  W32(c->r[30]+0x00000028u,c->r[31]); // 801D6D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6D44
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6D48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6D4C
  c->lr=c->r[0]; // 801D6D50
  c->r[1]=c->r[1]+0x00000010u; // 801D6D54
  return; // 801D6D58
}

// fn_801D6D60
void f_801D6D60(Ctx* __restrict c) {
  trace_call(0x801D6D60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6D60
  c->r[0]=c->lr; // 801D6D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6D68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6D6C
  c->r[31]=c->r[3]|c->r[3]; // 801D6D70
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6D74
  c->r[30]=c->r[4]|c->r[4]; // 801D6D78
  c->lr=0x801D6D80u; f_801D76C0(c); // 801D6D7C
  c->r[3]=c->r[3]+0x00000354u; // 801D6D80
  c->lr=0x801D6D88u; f_80126DC0(c); // 801D6D84
  c->r[3]=R32(c->r[31]+0x00000024u); // 801D6D88
  cmps(c,0,(int32_t)c->r[3],0); // 801D6D8C
  if (!crb(c,2)) { goto L_801D6DA8; } // 801D6D90
  c->lr=0x801D6D98u; f_801D76C0(c); // 801D6D94
  c->r[3]=c->r[3]+0x00000354u; // 801D6D98
  c->lr=0x801D6DA0u; f_80126EA0(c); // 801D6D9C
  c->r[3]=0u+0x00000000u; // 801D6DA0
  goto L_801D6E94; // 801D6DA4
L_801D6DA8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D6DA8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801D6DAC
  if (crb(c,0)) { goto L_801D6E84; } // 801D6DB0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801D6DB4
  cmps(c,0,(int32_t)c->r[0],0); // 801D6DB8
  if (!crb(c,2)) { goto L_801D6DDC; } // 801D6DBC
  c->r[3]=0u+0x803A0000u; // 801D6DC0
  c->r[5]=0u+0x803A0000u; // 801D6DC4
  c->r[3]=c->r[3]+0x00002498u; // 801D6DC8
  c->r[4]=0u+0x000001F1u; // 801D6DCC
  c->r[5]=c->r[5]+0x00002474u; // 801D6DD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6DD4
  c->lr=0x801D6DDCu; f_80212260(c); // 801D6DD8
L_801D6DDC:;
  c->r[31]=R32(c->r[31]+0x00000010u); // 801D6DDC
  cmps(c,0,(int32_t)c->r[31],0); // 801D6DE0
  if (!crb(c,2)) { goto L_801D6E04; } // 801D6DE4
  c->r[3]=0u+0x803A0000u; // 801D6DE8
  c->r[5]=0u+0x803A0000u; // 801D6DEC
  c->r[3]=c->r[3]+0x00002438u; // 801D6DF0
  c->r[4]=0u+0x0000023Du; // 801D6DF4
  c->r[5]=c->r[5]+0x00002414u; // 801D6DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6DFC
  c->lr=0x801D6E04u; f_80212260(c); // 801D6E00
L_801D6E04:;
  c->r[31]=addc(c,c->r[31],0xFFFFFF00u,0); cr0(c,c->r[31]); // 801D6E04
  if (!crb(c,2)) { goto L_801D6E28; } // 801D6E08
  c->r[3]=0u+0x803A0000u; // 801D6E0C
  c->r[5]=0u+0x803A0000u; // 801D6E10
  c->r[3]=c->r[3]+0x00002468u; // 801D6E14
  c->r[4]=0u+0x00000193u; // 801D6E18
  c->r[5]=c->r[5]+0x00002444u; // 801D6E1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6E20
  c->lr=0x801D6E28u; f_80212260(c); // 801D6E24
L_801D6E28:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D6E28
  if (!crb(c,2)) { goto L_801D6E44; } // 801D6E2C
  c->lr=0x801D6E34u; f_801D76C0(c); // 801D6E30
  c->r[3]=c->r[3]+0x00000354u; // 801D6E34
  c->lr=0x801D6E3Cu; f_80126EA0(c); // 801D6E38
  c->r[3]=0u+0x00000000u; // 801D6E3C
  goto L_801D6E94; // 801D6E40
L_801D6E44:;
  c->r[3]=R8(c->r[31]+0x00000098u); // 801D6E44
  c->r[0]=R32(c->r[31]+0x00000050u); // 801D6E48
  c->r[3]=c->r[3]+c->r[0]; // 801D6E4C
  cmps(c,0,(int32_t)c->r[3],127); // 801D6E50
  if (!crb(c,1)) { goto L_801D6E60; } // 801D6E54
  c->r[0]=0u+0x0000007Fu; // 801D6E58
  goto L_801D6E68; // 801D6E5C
L_801D6E60:;
  c->r[0]=sraw(c,c->r[3],31); // 801D6E60
  c->r[0]=c->r[3]&~c->r[0]; // 801D6E64
L_801D6E68:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801D6E68
  if (!crb(c,0)) { goto L_801D6E84; } // 801D6E6C
  c->lr=0x801D6E74u; f_801D76C0(c); // 801D6E70
  c->r[3]=c->r[3]+0x00000354u; // 801D6E74
  c->lr=0x801D6E7Cu; f_80126EA0(c); // 801D6E78
  c->r[3]=0u+0x00000000u; // 801D6E7C
  goto L_801D6E94; // 801D6E80
L_801D6E84:;
  c->lr=0x801D6E88u; f_801D76C0(c); // 801D6E84
  c->r[3]=c->r[3]+0x00000354u; // 801D6E88
  c->lr=0x801D6E90u; f_80126EA0(c); // 801D6E8C
  c->r[3]=0u+0x00000001u; // 801D6E90
L_801D6E94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6E94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6E98
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6E9C
  c->lr=c->r[0]; // 801D6EA0
  c->r[1]=c->r[1]+0x00000010u; // 801D6EA4
  return; // 801D6EA8
}

// fn_801D6EB0
void f_801D6EB0(Ctx* __restrict c) {
  trace_call(0x801D6EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6EB0
  c->r[0]=c->lr; // 801D6EB4
  cmps(c,0,(int32_t)c->r[4],0); // 801D6EB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6EBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D6EC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D6EC4
  c->r[30]=c->r[4]|c->r[4]; // 801D6EC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D6ECC
  c->r[29]=c->r[3]|c->r[3]; // 801D6ED0
  if (!crb(c,2)) { goto L_801D6EF4; } // 801D6ED4
  c->r[3]=0u+0x803A0000u; // 801D6ED8
  c->r[5]=0u+0x803A0000u; // 801D6EDC
  c->r[3]=c->r[3]+0x00002120u; // 801D6EE0
  c->r[4]=0u+0x0000020Fu; // 801D6EE4
  c->r[5]=c->r[5]+0x0000229Cu; // 801D6EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6EEC
  c->lr=0x801D6EF4u; f_80212260(c); // 801D6EF0
L_801D6EF4:;
  c->lr=0x801D6EF8u; f_801D76C0(c); // 801D6EF4
  c->r[3]=c->r[3]+0x00000354u; // 801D6EF8
  c->lr=0x801D6F00u; f_80126DC0(c); // 801D6EFC
  cmps(c,0,(int32_t)c->r[30],0); // 801D6F00
  W32(c->r[30]+0x00000008u,c->r[29]); // 801D6F04
  c->r[31]=c->r[29]+0x0000001Cu; // 801D6F08
  if (!crb(c,2)) { goto L_801D6F2C; } // 801D6F0C
  c->r[3]=0u+0x803A0000u; // 801D6F10
  c->r[5]=0u+0x803A0000u; // 801D6F14
  c->r[3]=c->r[3]+0x00002378u; // 801D6F18
  c->r[4]=0u+0x00000233u; // 801D6F1C
  c->r[5]=c->r[5]+0x00002354u; // 801D6F20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6F24
  c->lr=0x801D6F2Cu; f_80212260(c); // 801D6F28
L_801D6F2C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D6F2C
  c->r[3]=c->r[29]+0x00000018u; // 801D6F30
  c->r[4]=c->r[1]+0x00000008u; // 801D6F34
  c->r[5]=c->r[30]+0x00000018u; // 801D6F38
  c->lr=0x801D6F40u; f_801E44B0(c); // 801D6F3C
  c->lr=0x801D6F44u; f_801D76C0(c); // 801D6F40
  c->r[3]=c->r[3]+0x00000354u; // 801D6F44
  c->lr=0x801D6F4Cu; f_80126EA0(c); // 801D6F48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6F4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6F50
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6F54
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D6F58
  c->lr=c->r[0]; // 801D6F5C
  c->r[1]=c->r[1]+0x00000020u; // 801D6F60
  return; // 801D6F64
}

// fn_801D6F70
void f_801D6F70(Ctx* __restrict c) {
  trace_call(0x801D6F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6F70
  c->r[0]=c->lr; // 801D6F74
  cmps(c,0,(int32_t)c->r[4],0); // 801D6F78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6F7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D6F80
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D6F84
  c->r[30]=c->r[4]|c->r[4]; // 801D6F88
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D6F8C
  c->r[29]=c->r[3]|c->r[3]; // 801D6F90
  if (!crb(c,2)) { goto L_801D6FB4; } // 801D6F94
  c->r[3]=0u+0x803A0000u; // 801D6F98
  c->r[5]=0u+0x803A0000u; // 801D6F9C
  c->r[3]=c->r[3]+0x00002120u; // 801D6FA0
  c->r[4]=0u+0x00000230u; // 801D6FA4
  c->r[5]=c->r[5]+0x000021DCu; // 801D6FA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6FAC
  c->lr=0x801D6FB4u; f_80212260(c); // 801D6FB0
L_801D6FB4:;
  c->lr=0x801D6FB8u; f_801D76C0(c); // 801D6FB4
  c->r[3]=c->r[3]+0x00000354u; // 801D6FB8
  c->lr=0x801D6FC0u; f_80126DC0(c); // 801D6FBC
  c->r[0]=R32(c->r[29]+0x00000018u); // 801D6FC0
  cmps(c,0,(int32_t)c->r[0],0); // 801D6FC4
  if (!crb(c,2)) { goto L_801D6FE0; } // 801D6FC8
  c->lr=0x801D6FD0u; f_801D76C0(c); // 801D6FCC
  c->r[3]=c->r[3]+0x00000354u; // 801D6FD0
  c->lr=0x801D6FD8u; f_80126EA0(c); // 801D6FD4
  c->r[3]=0u+0x00000000u; // 801D6FD8
  goto L_801D7090; // 801D6FDC
L_801D6FE0:;
  if (!crb(c,2)) { goto L_801D7000; } // 801D6FE0
  c->r[3]=0u+0x803A0000u; // 801D6FE4
  c->r[5]=0u+0x803A0000u; // 801D6FE8
  c->r[3]=c->r[3]+0x00002348u; // 801D6FEC
  c->r[4]=0u+0x000001F1u; // 801D6FF0
  c->r[5]=c->r[5]+0x00002324u; // 801D6FF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D6FF8
  c->lr=0x801D7000u; f_80212260(c); // 801D6FFC
L_801D7000:;
  c->r[31]=R32(c->r[29]+0x0000001Cu); // 801D7000
  cmps(c,0,(int32_t)c->r[31],0); // 801D7004
  if (!crb(c,2)) { goto L_801D7028; } // 801D7008
  c->r[3]=0u+0x803A0000u; // 801D700C
  c->r[5]=0u+0x803A0000u; // 801D7010
  c->r[3]=c->r[3]+0x000022E8u; // 801D7014
  c->r[4]=0u+0x0000023Du; // 801D7018
  c->r[5]=c->r[5]+0x000022C4u; // 801D701C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7020
  c->lr=0x801D7028u; f_80212260(c); // 801D7024
L_801D7028:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFE8u,0); cr0(c,c->r[31]); // 801D7028
  if (!crb(c,2)) { goto L_801D704C; } // 801D702C
  c->r[3]=0u+0x803A0000u; // 801D7030
  c->r[5]=0u+0x803A0000u; // 801D7034
  c->r[3]=c->r[3]+0x00002318u; // 801D7038
  c->r[4]=0u+0x00000193u; // 801D703C
  c->r[5]=c->r[5]+0x000022F4u; // 801D7040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7044
  c->lr=0x801D704Cu; f_80212260(c); // 801D7048
L_801D704C:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801D704C
  c->r[3]=c->r[29]+0x00000018u; // 801D7050
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D7054
  c->r[4]=c->r[1]+0x00000008u; // 801D7058
  c->lr=0x801D7060u; f_801E4260(c); // 801D705C
  c->r[3]=c->r[31]|c->r[31]; // 801D7060
  c->r[4]=c->r[30]|c->r[30]; // 801D7064
  c->lr=0x801D706Cu; f_801C7F30(c); // 801D7068
  c->r[3]=c->r[30]|c->r[30]; // 801D706C
  c->r[4]=c->r[31]|c->r[31]; // 801D7070
  c->lr=0x801D7078u; f_801BCCB0(c); // 801D7074
  c->r[3]=c->r[31]|c->r[31]; // 801D7078
  c->lr=0x801D7080u; f_801C7E40(c); // 801D707C
  c->lr=0x801D7084u; f_801D76C0(c); // 801D7080
  c->r[3]=c->r[3]+0x00000354u; // 801D7084
  c->lr=0x801D708Cu; f_80126EA0(c); // 801D7088
  c->r[3]=c->r[31]|c->r[31]; // 801D708C
L_801D7090:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7090
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7094
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7098
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D709C
  c->lr=c->r[0]; // 801D70A0
  c->r[1]=c->r[1]+0x00000020u; // 801D70A4
  return; // 801D70A8
}

// fn_801D70B0
void f_801D70B0(Ctx* __restrict c) {
  trace_call(0x801D70B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D70B0
  c->r[0]=c->lr; // 801D70B4
  cmps(c,0,(int32_t)c->r[4],0); // 801D70B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D70BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D70C0
  c->r[31]=c->r[4]|c->r[4]; // 801D70C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D70C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D70CC
  c->r[29]=c->r[3]|c->r[3]; // 801D70D0
  if (!crb(c,2)) { goto L_801D70F4; } // 801D70D4
  c->r[3]=0u+0x803A0000u; // 801D70D8
  c->r[5]=0u+0x803A0000u; // 801D70DC
  c->r[3]=c->r[3]+0x00002120u; // 801D70E0
  c->r[4]=0u+0x0000024Eu; // 801D70E4
  c->r[5]=c->r[5]+0x000021DCu; // 801D70E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D70EC
  c->lr=0x801D70F4u; f_80212260(c); // 801D70F0
L_801D70F4:;
  c->lr=0x801D70F8u; f_801D76C0(c); // 801D70F4
  c->r[3]=c->r[3]+0x00000354u; // 801D70F8
  c->lr=0x801D7100u; f_80126DC0(c); // 801D70FC
  c->r[30]=R32(c->r[31]+0x00000004u); // 801D7100
  cmps(c,0,(int32_t)c->r[30],0); // 801D7104
  if (!crb(c,2)) { goto L_801D711C; } // 801D7108
  c->lr=0x801D7110u; f_801D76C0(c); // 801D710C
  c->r[3]=c->r[3]+0x00000354u; // 801D7110
  c->lr=0x801D7118u; f_80126EA0(c); // 801D7114
  goto L_801D717C; // 801D7118
L_801D711C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D711C
  c->r[4]=c->r[31]|c->r[31]; // 801D7120
  c->lr=0x801D7128u; f_801C7FC0(c); // 801D7124
  c->r[3]=c->r[31]|c->r[31]; // 801D7128
  c->r[4]=c->r[30]|c->r[30]; // 801D712C
  c->lr=0x801D7134u; f_801BCD40(c); // 801D7130
  cmps(c,0,(int32_t)c->r[30],0); // 801D7134
  c->r[31]=c->r[29]+0x0000001Cu; // 801D7138
  if (!crb(c,2)) { goto L_801D715C; } // 801D713C
  c->r[3]=0u+0x803A0000u; // 801D7140
  c->r[5]=0u+0x803A0000u; // 801D7144
  c->r[3]=c->r[3]+0x00002378u; // 801D7148
  c->r[4]=0u+0x00000233u; // 801D714C
  c->r[5]=c->r[5]+0x00002354u; // 801D7150
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7154
  c->lr=0x801D715Cu; f_80212260(c); // 801D7158
L_801D715C:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D715C
  c->r[3]=c->r[29]+0x00000018u; // 801D7160
  c->r[4]=c->r[1]+0x00000008u; // 801D7164
  c->r[5]=c->r[30]+0x00000018u; // 801D7168
  c->lr=0x801D7170u; f_801E44B0(c); // 801D716C
  c->lr=0x801D7174u; f_801D76C0(c); // 801D7170
  c->r[3]=c->r[3]+0x00000354u; // 801D7174
  c->lr=0x801D717Cu; f_80126EA0(c); // 801D7178
L_801D717C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D717C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7180
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7184
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7188
  c->lr=c->r[0]; // 801D718C
  c->r[1]=c->r[1]+0x00000020u; // 801D7190
  return; // 801D7194
}

// detail_HoldSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo
void f_801D71A0(Ctx* __restrict c) {
  trace_call(0x801D71A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D71A0
  c->r[0]=c->lr; // 801D71A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D71A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D71AC
  c->r[31]=c->r[4]|c->r[4]; // 801D71B0
  c->r[7]=R32(c->r[4]+0x00000000u); // 801D71B4
  cmps(c,0,(int32_t)c->r[7],0); // 801D71B8
  if (crb(c,2)) { goto L_801D71EC; } // 801D71BC
  if (crb(c,2)) { goto L_801D71CC; } // 801D71C0
  c->r[0]=R32(c->r[7]+0x0000009Cu); // 801D71C4
  goto L_801D71D0; // 801D71C8
L_801D71CC:;
  c->r[0]=0u+0xFFFFFFFFu; // 801D71CC
L_801D71D0:;
  cmpu(c,0,c->r[5],c->r[0]); // 801D71D0
  if (!crb(c,2)) { goto L_801D71EC; } // 801D71D4
  c->r[3]=c->r[7]|c->r[7]; // 801D71D8
  c->r[4]=0u+0x00000001u; // 801D71DC
  c->lr=0x801D71E4u; f_801BC070(c); // 801D71E0
  c->r[3]=0u+0x00000000u; // 801D71E4
  goto L_801D7234; // 801D71E8
L_801D71EC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D71EC
  c->r[7]=c->r[6]|c->r[6]; // 801D71F0
  c->r[4]=c->r[31]|c->r[31]; // 801D71F4
  c->r[6]=0u+0x00000001u; // 801D71F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D71FC
  c->ctr=c->r[12]; // 801D7200
  if (true) { c->lr=0x801D7208u; dispatch(c,c->ctr); } // 801D7204
  cmps(c,0,(int32_t)c->r[3],0); // 801D7208
  if (crb(c,2)) { goto L_801D7214; } // 801D720C
  goto L_801D7234; // 801D7210
L_801D7214:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D7214
  cmps(c,0,(int32_t)c->r[3],0); // 801D7218
  if (crb(c,2)) { goto L_801D7224; } // 801D721C
  c->lr=0x801D7224u; f_801BBBB0(c); // 801D7220
L_801D7224:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D7224
  c->r[4]=0u+0x00000001u; // 801D7228
  c->lr=0x801D7230u; f_801BC070(c); // 801D722C
  c->r[3]=0u+0x00000000u; // 801D7230
L_801D7234:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7234
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7238
  c->lr=c->r[0]; // 801D723C
  c->r[1]=c->r[1]+0x00000010u; // 801D7240
  return; // 801D7244
}

// detail_PrepareSound__Q34nw4r3snd14SoundStartableFPQ34nw4r3snd11SoundHandleUlPCQ44nw4r3snd14SoundStartable9StartInfo
void f_801D7250(Ctx* __restrict c) {
  trace_call(0x801D7250u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D7250
  c->r[7]=c->r[6]|c->r[6]; // 801D7254
  c->r[6]=0u+0x00000000u; // 801D7258
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D725C
  c->ctr=c->r[12]; // 801D7260
  if (true) { dispatch(c,c->ctr); return; } // 801D7264
}

// fn_801D7270
void f_801D7270(Ctx* __restrict c) {
  trace_call(0x801D7270u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7270
  c->r[0]=c->lr; // 801D7274
  c->r[5]=0u+0x00010000u; // 801D7278
  c->r[6]=0u+0x805B0000u; // 801D727C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7280
  c->r[0]=0u+0x00004000u; // 801D7284
  c->r[5]=c->r[5]+0x000055E0u; // 801D7288
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D728C
  c->r[3]=c->r[1]+0x00000008u; // 801D7290
  W32(c->r[1]+0x00000010u,c->r[4]); // 801D7294
  c->r[4]=c->r[6]+0xFFFFD300u; // 801D7298
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D729C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D72A0
  c->lr=0x801D72A8u; f_801D72C0(c); // 801D72A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D72A8
  c->lr=c->r[0]; // 801D72AC
  c->r[1]=c->r[1]+0x00000020u; // 801D72B0
  return; // 801D72B4
}

// fn_801D72C0
void f_801D72C0(Ctx* __restrict c) {
  trace_call(0x801D72C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D72C0
  c->r[0]=c->lr; // 801D72C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D72C8
  c->r[11]=c->r[1]+0x00000030u; // 801D72CC
  c->lr=0x801D72D4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D72D0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D72D4
  c->r[31]=0u+0x803A0000u; // 801D72D8
  c->r[28]=c->r[3]|c->r[3]; // 801D72DC
  c->r[29]=c->r[4]|c->r[4]; // 801D72E0
  c->r[30]=c->r[5]|c->r[5]; // 801D72E4
  c->r[31]=c->r[31]+0x000024A8u; // 801D72E8
  if (crb(c,2)) { goto L_801D7308; } // 801D72EC
  c->r[6]=c->r[29]|c->r[29]; // 801D72F0
  c->r[3]=c->r[31]+0x00000048u; // 801D72F4
  c->r[5]=c->r[31]+0x000000D0u; // 801D72F8
  c->r[4]=0u+0x00000090u; // 801D72FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7300
  c->lr=0x801D7308u; f_80212260(c); // 801D7304
L_801D7308:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D7308
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 801D730C
  if (crb(c,2)) { goto L_801D7328; } // 801D7310
  c->r[3]=c->r[31]+0x00000048u; // 801D7314
  c->r[5]=c->r[31]+0x0000005Cu; // 801D7318
  c->r[4]=0u+0x0000006Au; // 801D731C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7320
  c->lr=0x801D7328u; f_80212260(c); // 801D7324
L_801D7328:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801D7328
  c->r[0]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[0]); // 801D732C
  if (crb(c,2)) { goto L_801D7348; } // 801D7330
  c->r[3]=c->r[31]+0x00000048u; // 801D7334
  c->r[5]=c->r[31]+0x00000098u; // 801D7338
  c->r[4]=0u+0x0000006Bu; // 801D733C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7340
  c->lr=0x801D7348u; f_80212260(c); // 801D7344
L_801D7348:;
  c->lr=0x801D734Cu; f_801525D0(c); // 801D7348
  c->r[25]=c->r[3]|c->r[3]; // 801D734C
  c->lr=0x801D7354u; f_801E0470(c); // 801D7350
  c->r[4]=c->r[25]|c->r[25]; // 801D7354
  c->lr=0x801D735Cu; f_801E0560(c); // 801D7358
  c->r[27]=c->r[3]|c->r[3]; // 801D735C
  c->lr=0x801D7364u; f_801B98B0(c); // 801D7360
  c->r[4]=c->r[25]|c->r[25]; // 801D7364
  c->lr=0x801D736Cu; f_801B99D0(c); // 801D7368
  c->r[4]=R32(c->r[28]+0x00000004u); // 801D736C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801D7370
  c->r[26]=c->r[3]+c->r[4]; // 801D7374
  c->r[27]=c->r[27]+c->r[0]; // 801D7378
  c->lr=0x801D7380u; f_801BDCF0(c); // 801D737C
  c->r[4]=c->r[25]|c->r[25]; // 801D7380
  c->lr=0x801D7388u; f_801BDDD0(c); // 801D7384
  c->r[0]=c->r[26]+c->r[27]; // 801D7388
  c->r[0]=c->r[3]+c->r[0]; // 801D738C
  cmpu(c,0,c->r[30],c->r[0]); // 801D7390
  if (!crb(c,0)) { goto L_801D73AC; } // 801D7394
  c->r[3]=c->r[31]+0x00000048u; // 801D7398
  c->r[5]=c->r[31]+0x0000011Cu; // 801D739C
  c->r[4]=0u+0x00000091u; // 801D73A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D73A4
  c->lr=0x801D73ACu; f_80212260(c); // 801D73A8
L_801D73AC:;
  c->r[0]=R8(c->r[13]+0xFFFFC458u); // 801D73AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D73B0
  if (!crb(c,2)) { goto L_801D75A0; } // 801D73B4
  c->r[0]=0u+0x00000001u; // 801D73B8
  W8(c->r[13]+0xFFFFC458u,c->r[0]); // 801D73BC
  c->r[3]=R32(c->r[13]+0xFFFFAE08u); // 801D73C0
  c->lr=0x801D73C8u; f_8011F990(c); // 801D73C4
  c->lr=0x801D73CCu; f_801B4F50(c); // 801D73C8
  c->lr=0x801D73D0u; f_801B5040(c); // 801D73CC
  c->lr=0x801D73D4u; f_801A8EB0(c); // 801D73D0
L_801D73D4:;
  c->lr=0x801D73D8u; f_801A8F50(c); // 801D73D4
  cmpu(c,0,c->r[3],0x00000001u); // 801D73D8
  if (crb(c,2)) { IRQCHK(c); goto L_801D73D4; } // 801D73DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D73E0
  if (crb(c,2)) { goto L_801D73FC; } // 801D73E4
  c->r[3]=c->r[31]+0x00000048u; // 801D73E8
  c->r[5]=c->r[31]+0x00000160u; // 801D73EC
  c->r[4]=0u+0x000000ABu; // 801D73F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D73F4
  c->lr=0x801D73FCu; f_80212260(c); // 801D73F8
L_801D73FC:;
  c->lr=0x801D7400u; f_801AAA60(c); // 801D73FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D7400
  if (crb(c,2)) { goto L_801D741C; } // 801D7404
  cmps(c,0,(int32_t)c->r[0],1); // 801D7408
  if (crb(c,2)) { goto L_801D742C; } // 801D740C
  cmps(c,0,(int32_t)c->r[0],2); // 801D7410
  if (crb(c,2)) { goto L_801D743C; } // 801D7414
  goto L_801D744C; // 801D7418
L_801D741C:;
  c->lr=0x801D7420u; f_801B4F50(c); // 801D741C
  c->r[4]=0u+0x00000003u; // 801D7420
  c->lr=0x801D7428u; f_801B5750(c); // 801D7424
  goto L_801D7458; // 801D7428
L_801D742C:;
  c->lr=0x801D7430u; f_801B4F50(c); // 801D742C
  c->r[4]=0u+0x00000000u; // 801D7430
  c->lr=0x801D7438u; f_801B5750(c); // 801D7434
  goto L_801D7458; // 801D7438
L_801D743C:;
  c->lr=0x801D7440u; f_801B4F50(c); // 801D743C
  c->r[4]=0u+0x00000002u; // 801D7440
  c->lr=0x801D7448u; f_801B5750(c); // 801D7444
  goto L_801D7458; // 801D7448
L_801D744C:;
  c->lr=0x801D7450u; f_801B4F50(c); // 801D744C
  c->r[4]=0u+0x00000000u; // 801D7450
  c->lr=0x801D7458u; f_801B5750(c); // 801D7454
L_801D7458:;
  c->lr=0x801D745Cu; f_801C8AF0(c); // 801D7458
  c->lr=0x801D7460u; f_801C8C10(c); // 801D745C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 801D7460
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D7464
  c->r[25]=c->r[29]+c->r[3]; // 801D7468
  c->r[26]=c->r[25]|c->r[25]; // 801D746C
  c->r[25]=c->r[25]+c->r[0]; // 801D7470
  c->lr=0x801D7478u; f_801525D0(c); // 801D7474
  W32(c->r[13]+0xFFFFC45Cu,c->r[3]); // 801D7478
  c->r[24]=c->r[25]|c->r[25]; // 801D747C
  c->lr=0x801D7484u; f_801B98B0(c); // 801D7480
  c->r[4]=R32(c->r[13]+0xFFFFC45Cu); // 801D7484
  c->lr=0x801D748Cu; f_801B99D0(c); // 801D7488
  c->r[25]=c->r[25]+c->r[3]; // 801D748C
  c->lr=0x801D7494u; f_801B98B0(c); // 801D7490
  c->r[4]=R32(c->r[13]+0xFFFFC45Cu); // 801D7494
  c->lr=0x801D749Cu; f_801B99D0(c); // 801D7498
  c->r[27]=c->r[3]|c->r[3]; // 801D749C
  c->lr=0x801D74A4u; f_801B98B0(c); // 801D74A0
  c->r[4]=c->r[24]|c->r[24]; // 801D74A4
  c->r[5]=c->r[27]|c->r[27]; // 801D74A8
  c->lr=0x801D74B0u; f_801B99E0(c); // 801D74AC
  c->r[24]=c->r[25]|c->r[25]; // 801D74B0
  c->lr=0x801D74B8u; f_801E0470(c); // 801D74B4
  c->r[4]=R32(c->r[13]+0xFFFFC45Cu); // 801D74B8
  c->lr=0x801D74C0u; f_801E0560(c); // 801D74BC
  c->r[25]=c->r[25]+c->r[3]; // 801D74C0
  c->lr=0x801D74C8u; f_801E0470(c); // 801D74C4
  c->r[4]=R32(c->r[13]+0xFFFFC45Cu); // 801D74C8
  c->lr=0x801D74D0u; f_801E0560(c); // 801D74CC
  c->r[27]=c->r[3]|c->r[3]; // 801D74D0
  c->lr=0x801D74D8u; f_801E0470(c); // 801D74D4
  c->r[4]=c->r[24]|c->r[24]; // 801D74D8
  c->r[5]=c->r[27]|c->r[27]; // 801D74DC
  c->lr=0x801D74E4u; f_801E0570(c); // 801D74E0
  c->r[24]=c->r[25]|c->r[25]; // 801D74E4
  c->lr=0x801D74ECu; f_801BDCF0(c); // 801D74E8
  c->r[4]=R32(c->r[13]+0xFFFFC45Cu); // 801D74EC
  c->lr=0x801D74F4u; f_801BDDD0(c); // 801D74F0
  c->r[25]=c->r[25]+c->r[3]; // 801D74F4
  c->lr=0x801D74FCu; f_801BDCF0(c); // 801D74F8
  c->r[4]=R32(c->r[13]+0xFFFFC45Cu); // 801D74FC
  c->lr=0x801D7504u; f_801BDDD0(c); // 801D7500
  c->r[27]=c->r[3]|c->r[3]; // 801D7504
  c->lr=0x801D750Cu; f_801BDCF0(c); // 801D7508
  c->r[4]=c->r[24]|c->r[24]; // 801D750C
  c->r[5]=c->r[27]|c->r[27]; // 801D7510
  c->lr=0x801D7518u; f_801BDDE0(c); // 801D7514
  c->lr=0x801D751Cu; f_801C90B0(c); // 801D7518
  c->r[3]=0u+0x805B0000u; // 801D751C
  c->r[4]=R32(c->r[28]+0x00000008u); // 801D7520
  c->r[6]=R32(c->r[28]+0x0000000Cu); // 801D7524
  c->r[5]=c->r[29]|c->r[29]; // 801D7528
  c->r[3]=c->r[3]+0xFFFFCFD0u; // 801D752C
  c->lr=0x801D7534u; f_801DD530(c); // 801D7530
  cmps(c,0,(int32_t)c->r[3],0); // 801D7534
  if (!crb(c,2)) { goto L_801D7550; } // 801D7538
  c->r[3]=c->r[31]+0x00000048u; // 801D753C
  c->r[5]=c->r[31]+0x00000194u; // 801D7540
  c->r[4]=0u+0x000000F7u; // 801D7544
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7548
  c->lr=0x801D7550u; f_80212260(c); // 801D754C
L_801D7550:;
  c->lr=0x801D7554u; f_801D76C0(c); // 801D7550
  c->r[4]=R32(c->r[28]+0x00000000u); // 801D7554
  c->r[5]=c->r[26]|c->r[26]; // 801D7558
  c->r[6]=R32(c->r[28]+0x00000004u); // 801D755C
  c->lr=0x801D7564u; f_801D77F0(c); // 801D7560
  cmps(c,0,(int32_t)c->r[3],0); // 801D7564
  if (!crb(c,2)) { goto L_801D7580; } // 801D7568
  c->r[3]=c->r[31]+0x00000048u; // 801D756C
  c->r[5]=c->r[31]+0x00000194u; // 801D7570
  c->r[4]=0u+0x000000FFu; // 801D7574
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7578
  c->lr=0x801D7580u; f_80212260(c); // 801D757C
L_801D7580:;
  c->r[0]=c->r[29]+c->r[30]; // 801D7580
  cmpu(c,0,c->r[25],c->r[0]); // 801D7584
  if (!crb(c,1)) { goto L_801D75A0; } // 801D7588
  c->r[3]=c->r[31]+0x00000048u; // 801D758C
  c->r[5]=c->r[31]+0x000001B4u; // 801D7590
  c->r[4]=0u+0x00000101u; // 801D7594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7598
  c->lr=0x801D75A0u; f_80212260(c); // 801D759C
L_801D75A0:;
  c->r[11]=c->r[1]+0x00000030u; // 801D75A0
  c->lr=0x801D75A8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D75A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D75A8
  c->lr=c->r[0]; // 801D75AC
  c->r[1]=c->r[1]+0x00000030u; // 801D75B0
  return; // 801D75B4
}

// fn_801D75C0
void f_801D75C0(Ctx* __restrict c) {
  trace_call(0x801D75C0u);
  c->r[3]=R8(c->r[13]+0xFFFFC458u); // 801D75C0
  return; // 801D75C4
}

// fn_801D75D0
void f_801D75D0(Ctx* __restrict c) {
  trace_call(0x801D75D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D75D0
  c->r[0]=c->lr; // 801D75D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D75D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D75DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D75E0
  c->r[0]=R8(c->r[13]+0xFFFFC458u); // 801D75E4
  cmps(c,0,(int32_t)c->r[0],0); // 801D75E8
  if (crb(c,2)) { goto L_801D764C; } // 801D75EC
  c->lr=0x801D75F4u; f_8012AB90(c); // 801D75F0
  c->r[30]=c->r[3]|c->r[3]; // 801D75F4
  c->r[31]=0u+0x80000000u; // 801D75F8
  goto L_801D7638; // 801D75FC
L_801D7600:;
  c->lr=0x801D7604u; f_8012AB90(c); // 801D7600
  c->r[0]=R32(c->r[31]+0x000000F8u); // 801D7604
  c->r[3]=c->r[3]-c->r[30]; // 801D7608
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801D760C
  c->r[0]=divwu(c->r[3],c->r[0]); cr0(c,c->r[0]); // 801D7610
  if (crb(c,2)) { goto L_801D7638; } // 801D7614
  c->r[3]=0u+0x803A0000u; // 801D7618
  c->r[5]=0u+0x803A0000u; // 801D761C
  c->r[3]=c->r[3]+0x000024F0u; // 801D7620
  c->r[4]=0u+0x00000149u; // 801D7624
  c->r[5]=c->r[5]+0x000026A8u; // 801D7628
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D762C
  c->lr=0x801D7634u; f_80212300(c); // 801D7630
  goto L_801D764C; // 801D7634
L_801D7638:;
  c->lr=0x801D763Cu; f_801B4F50(c); // 801D7638
  c->r[0]=R32(c->r[3]+0x00000050u); // 801D763C
  c->r[0]=cntlz(c->r[0]); // 801D7640
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801D7644
  if (crb(c,2)) { IRQCHK(c); goto L_801D7600; } // 801D7648
L_801D764C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D764C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7650
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7654
  c->lr=c->r[0]; // 801D7658
  c->r[1]=c->r[1]+0x00000010u; // 801D765C
  return; // 801D7660
}

// fn_801D7670
void f_801D7670(Ctx* __restrict c) {
  trace_call(0x801D7670u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7670
  c->r[0]=c->lr; // 801D7674
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D767C
  c->r[31]=0u+0x805B0000u; // 801D7680
  c->r[3]=c->r[31]+0xFFFFCFD0u; // 801D7684
  c->lr=0x801D768Cu; f_801DD460(c); // 801D7688
  c->r[4]=0u+0x801E0000u; // 801D768C
  c->r[5]=0u+0x805B0000u; // 801D7690
  c->r[3]=c->r[31]+0xFFFFCFD0u; // 801D7694
  c->r[4]=c->r[4]+0xFFFFD480u; // 801D7698
  c->r[5]=c->r[5]+0xFFFFCFC0u; // 801D769C
  c->lr=0x801D76A4u; f_802E6064(c); // 801D76A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D76A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D76A8
  c->lr=c->r[0]; // 801D76AC
  c->r[1]=c->r[1]+0x00000010u; // 801D76B0
  return; // 801D76B4
}

// fn_801D76C0
void f_801D76C0(Ctx* __restrict c) {
  trace_call(0x801D76C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D76C0
  c->r[0]=c->lr; // 801D76C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D76C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D76CC
  c->r[0]=R8(c->r[13]+0xFFFFC460u); // 801D76D0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D76D4
  if (!crb(c,2)) { goto L_801D775C; } // 801D76D8
  c->r[31]=0u+0x805C0000u; // 801D76DC
  c->r[0]=0u+0x00000000u; // 801D76E0
  c->r[31]=c->r[31]+0x000028F0u; // 801D76E4
  c->r[5]=0u+0x00000004u; // 801D76E8
  c->r[7]=c->r[31]+0x0000037Cu; // 801D76EC
  W32(c->r[31]+0x00000350u,c->r[0]); // 801D76F0
  c->r[6]=c->r[31]+0x00000388u; // 801D76F4
  c->r[3]=c->r[31]+0x00000320u; // 801D76F8
  W32(c->r[31]+0x0000036Cu,c->r[0]); // 801D76FC
  c->r[4]=c->r[31]+0x00000340u; // 801D7700
  W32(c->r[31]+0x00000370u,c->r[0]); // 801D7704
  W32(c->r[31]+0x00000378u,c->r[0]); // 801D7708
  W32(c->r[31]+0x0000037Cu,c->r[7]); // 801D770C
  W32(c->r[31]+0x00000380u,c->r[7]); // 801D7710
  W32(c->r[31]+0x00000384u,c->r[0]); // 801D7714
  W32(c->r[31]+0x00000388u,c->r[6]); // 801D7718
  W32(c->r[31]+0x0000038Cu,c->r[6]); // 801D771C
  W8(c->r[31]+0x00000394u,c->r[0]); // 801D7720
  W8(c->r[31]+0x00000395u,c->r[0]); // 801D7724
  c->lr=0x801D772Cu; f_801263D0(c); // 801D7728
  c->r[3]=c->r[31]+0x00000318u; // 801D772C
  c->lr=0x801D7734u; f_80129000(c); // 801D7730
  c->r[3]=c->r[31]+0x00000354u; // 801D7734
  c->lr=0x801D773Cu; f_80126D80(c); // 801D7738
  c->r[4]=0u+0x801D0000u; // 801D773C
  c->r[5]=0u+0x805C0000u; // 801D7740
  c->r[3]=c->r[31]|c->r[31]; // 801D7744
  c->r[4]=c->r[4]+0x00007780u; // 801D7748
  c->r[5]=c->r[5]+0x000028E0u; // 801D774C
  c->lr=0x801D7754u; f_802E6064(c); // 801D7750
  c->r[0]=0u+0x00000001u; // 801D7754
  W8(c->r[13]+0xFFFFC460u,c->r[0]); // 801D7758
L_801D775C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D775C
  c->r[3]=0u+0x805C0000u; // 801D7760
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7764
  c->r[3]=c->r[3]+0x000028F0u; // 801D7768
  c->lr=c->r[0]; // 801D776C
  c->r[1]=c->r[1]+0x00000010u; // 801D7770
  return; // 801D7774
}

// fn_801D7780
void f_801D7780(Ctx* __restrict c) {
  trace_call(0x801D7780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7780
  c->r[0]=c->lr; // 801D7784
  cmps(c,0,(int32_t)c->r[3],0); // 801D7788
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D778C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7790
  c->r[31]=c->r[4]|c->r[4]; // 801D7794
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D7798
  c->r[30]=c->r[3]|c->r[3]; // 801D779C
  if (crb(c,2)) { goto L_801D77D4; } // 801D77A0
  c->r[3]=addc(c,c->r[3],0x00000384u,0); cr0(c,c->r[3]); // 801D77A4
  if (crb(c,2)) { goto L_801D77B4; } // 801D77A8
  c->r[4]=0u+0x00000000u; // 801D77AC
  c->lr=0x801D77B4u; f_801E4130(c); // 801D77B0
L_801D77B4:;
  c->r[3]=addc(c,c->r[30],0x00000378u,0); cr0(c,c->r[3]); // 801D77B4
  if (crb(c,2)) { goto L_801D77C4; } // 801D77B8
  c->r[4]=0u+0x00000000u; // 801D77BC
  c->lr=0x801D77C4u; f_801E4130(c); // 801D77C0
L_801D77C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D77C4
  if (!crb(c,1)) { goto L_801D77D4; } // 801D77C8
  c->r[3]=c->r[30]|c->r[30]; // 801D77CC
  c->lr=0x801D77D4u; f_802E61AC(c); // 801D77D0
L_801D77D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D77D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D77D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D77DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D77E0
  c->lr=c->r[0]; // 801D77E4
  c->r[1]=c->r[1]+0x00000010u; // 801D77E8
  return; // 801D77EC
}

// fn_801D77F0
void f_801D77F0(Ctx* __restrict c) {
  trace_call(0x801D77F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D77F0
  c->r[0]=c->lr; // 801D77F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D77F8
  c->r[11]=c->r[1]+0x00000020u; // 801D77FC
  c->lr=0x801D7804u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7800
  c->r[31]=0u+0x803A0000u; // 801D7804
  c->r[26]=c->r[3]|c->r[3]; // 801D7808
  c->r[27]=c->r[4]|c->r[4]; // 801D780C
  c->r[28]=c->r[5]|c->r[5]; // 801D7810
  c->r[29]=c->r[6]|c->r[6]; // 801D7814
  c->r[31]=c->r[31]+0x000026D8u; // 801D7818
  c->lr=0x801D7820u; f_801B4F50(c); // 801D781C
  c->r[0]=R8(c->r[3]+0x00000018u); // 801D7820
  cmps(c,0,(int32_t)c->r[0],0); // 801D7824
  if (!crb(c,2)) { goto L_801D7840; } // 801D7828
  c->r[3]=c->r[31]+0x00000000u; // 801D782C
  c->r[5]=c->r[31]+0x00000014u; // 801D7830
  c->r[4]=0u+0x0000004Fu; // 801D7834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7838
  c->lr=0x801D7840u; f_80212260(c); // 801D783C
L_801D7840:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D7840
  if (!crb(c,2)) { goto L_801D785C; } // 801D7844
  c->r[3]=c->r[31]+0x00000000u; // 801D7848
  c->r[5]=c->r[31]+0x00000038u; // 801D784C
  c->r[4]=0u+0x00000050u; // 801D7850
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7854
  c->lr=0x801D785Cu; f_80212260(c); // 801D7858
L_801D785C:;
  c->r[0]=rotl(c->r[28],0)&0x00000003u; cr0(c,c->r[0]); // 801D785C
  if (crb(c,2)) { goto L_801D787C; } // 801D7860
  c->r[6]=c->r[28]|c->r[28]; // 801D7864
  c->r[3]=c->r[31]+0x00000000u; // 801D7868
  c->r[5]=c->r[31]+0x00000060u; // 801D786C
  c->r[4]=0u+0x00000051u; // 801D7870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7874
  c->lr=0x801D787Cu; f_80212260(c); // 801D7878
L_801D787C:;
  c->r[0]=R8(c->r[26]+0x00000394u); // 801D787C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7880
  if (crb(c,2)) { goto L_801D7890; } // 801D7884
  c->r[3]=0u+0x00000001u; // 801D7888
  goto L_801D796C; // 801D788C
L_801D7890:;
  c->r[31]=0u+0x00000001u; // 801D7890
  W8(c->r[26]+0x00000394u,c->r[31]); // 801D7894
  W32(c->r[26]+0x00000350u,c->r[28]); // 801D7898
  c->r[0]=R8(c->r[13]+0xFFFFC460u); // 801D789C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D78A0
  if (!crb(c,2)) { goto L_801D7924; } // 801D78A4
  c->r[30]=0u+0x805C0000u; // 801D78A8
  c->r[0]=0u+0x00000000u; // 801D78AC
  c->r[30]=c->r[30]+0x000028F0u; // 801D78B0
  c->r[5]=0u+0x00000004u; // 801D78B4
  c->r[6]=c->r[30]+0x0000037Cu; // 801D78B8
  W32(c->r[30]+0x00000350u,c->r[0]); // 801D78BC
  c->r[7]=c->r[30]+0x00000388u; // 801D78C0
  c->r[3]=c->r[30]+0x00000320u; // 801D78C4
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 801D78C8
  c->r[4]=c->r[30]+0x00000340u; // 801D78CC
  W32(c->r[30]+0x00000370u,c->r[0]); // 801D78D0
  W32(c->r[30]+0x00000378u,c->r[0]); // 801D78D4
  W32(c->r[30]+0x0000037Cu,c->r[6]); // 801D78D8
  W32(c->r[30]+0x00000380u,c->r[6]); // 801D78DC
  W32(c->r[30]+0x00000384u,c->r[0]); // 801D78E0
  W32(c->r[30]+0x00000388u,c->r[7]); // 801D78E4
  W32(c->r[30]+0x0000038Cu,c->r[7]); // 801D78E8
  W8(c->r[30]+0x00000394u,c->r[0]); // 801D78EC
  W8(c->r[30]+0x00000395u,c->r[0]); // 801D78F0
  c->lr=0x801D78F8u; f_801263D0(c); // 801D78F4
  c->r[3]=c->r[30]+0x00000318u; // 801D78F8
  c->lr=0x801D7900u; f_80129000(c); // 801D78FC
  c->r[3]=c->r[30]+0x00000354u; // 801D7900
  c->lr=0x801D7908u; f_80126D80(c); // 801D7904
  c->r[4]=0u+0x801D0000u; // 801D7908
  c->r[5]=0u+0x805C0000u; // 801D790C
  c->r[3]=c->r[30]|c->r[30]; // 801D7910
  c->r[4]=c->r[4]+0x00007780u; // 801D7914
  c->r[5]=c->r[5]+0x000028E0u; // 801D7918
  c->lr=0x801D7920u; f_802E6064(c); // 801D791C
  W8(c->r[13]+0xFFFFC460u,c->r[31]); // 801D7920
L_801D7924:;
  c->r[4]=0u+0x801D0000u; // 801D7924
  c->r[5]=0u+0x805C0000u; // 801D7928
  c->r[3]=c->r[26]|c->r[26]; // 801D792C
  c->r[7]=c->r[29]|c->r[29]; // 801D7930
  c->r[8]=c->r[27]|c->r[27]; // 801D7934
  c->r[4]=c->r[4]+0x00007AD0u; // 801D7938
  c->r[5]=c->r[5]+0x000028F0u; // 801D793C
  c->r[6]=c->r[28]+c->r[29]; // 801D7940
  c->r[9]=0u+0x00000000u; // 801D7944
  c->lr=0x801D794Cu; f_80129610(c); // 801D7948
  cmps(c,0,(int32_t)c->r[3],0); // 801D794C
  c->r[31]=c->r[3]|c->r[3]; // 801D7950
  if (crb(c,2)) { goto L_801D7960; } // 801D7954
  c->r[3]=c->r[26]|c->r[26]; // 801D7958
  c->lr=0x801D7960u; f_80129CA0(c); // 801D795C
L_801D7960:;
  c->r[0]=0u-c->r[31]; // 801D7960
  c->r[0]=c->r[0]|c->r[31]; // 801D7964
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D7968
L_801D796C:;
  c->r[11]=c->r[1]+0x00000020u; // 801D796C
  c->lr=0x801D7974u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7970
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7974
  c->lr=c->r[0]; // 801D7978
  c->r[1]=c->r[1]+0x00000020u; // 801D797C
  return; // 801D7980
}

// fn_801D7990
void f_801D7990(Ctx* __restrict c) {
  trace_call(0x801D7990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7990
  c->r[0]=c->lr; // 801D7994
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7998
  c->r[11]=c->r[1]+0x00000020u; // 801D799C
  c->lr=0x801D79A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D79A0
  c->r[0]=R8(c->r[13]+0xFFFFC460u); // 801D79A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D79A8
  if (!crb(c,2)) { goto L_801D7A30; } // 801D79AC
  c->r[28]=0u+0x805C0000u; // 801D79B0
  c->r[0]=0u+0x00000000u; // 801D79B4
  c->r[28]=c->r[28]+0x000028F0u; // 801D79B8
  c->r[5]=0u+0x00000004u; // 801D79BC
  c->r[6]=c->r[28]+0x0000037Cu; // 801D79C0
  W32(c->r[28]+0x00000350u,c->r[0]); // 801D79C4
  c->r[7]=c->r[28]+0x00000388u; // 801D79C8
  c->r[3]=c->r[28]+0x00000320u; // 801D79CC
  W32(c->r[28]+0x0000036Cu,c->r[0]); // 801D79D0
  c->r[4]=c->r[28]+0x00000340u; // 801D79D4
  W32(c->r[28]+0x00000370u,c->r[0]); // 801D79D8
  W32(c->r[28]+0x00000378u,c->r[0]); // 801D79DC
  W32(c->r[28]+0x0000037Cu,c->r[6]); // 801D79E0
  W32(c->r[28]+0x00000380u,c->r[6]); // 801D79E4
  W32(c->r[28]+0x00000384u,c->r[0]); // 801D79E8
  W32(c->r[28]+0x00000388u,c->r[7]); // 801D79EC
  W32(c->r[28]+0x0000038Cu,c->r[7]); // 801D79F0
  W8(c->r[28]+0x00000394u,c->r[0]); // 801D79F4
  W8(c->r[28]+0x00000395u,c->r[0]); // 801D79F8
  c->lr=0x801D7A00u; f_801263D0(c); // 801D79FC
  c->r[3]=c->r[28]+0x00000318u; // 801D7A00
  c->lr=0x801D7A08u; f_80129000(c); // 801D7A04
  c->r[3]=c->r[28]+0x00000354u; // 801D7A08
  c->lr=0x801D7A10u; f_80126D80(c); // 801D7A0C
  c->r[4]=0u+0x801D0000u; // 801D7A10
  c->r[5]=0u+0x805C0000u; // 801D7A14
  c->r[3]=c->r[28]|c->r[28]; // 801D7A18
  c->r[4]=c->r[4]+0x00007780u; // 801D7A1C
  c->r[5]=c->r[5]+0x000028E0u; // 801D7A20
  c->lr=0x801D7A28u; f_802E6064(c); // 801D7A24
  c->r[0]=0u+0x00000001u; // 801D7A28
  W8(c->r[13]+0xFFFFC460u,c->r[0]); // 801D7A2C
L_801D7A30:;
  c->r[28]=0u+0x805C0000u; // 801D7A30
  c->r[28]=c->r[28]+0x000028F0u; // 801D7A34
  c->r[0]=R8(c->r[28]+0x00000395u); // 801D7A38
  cmps(c,0,(int32_t)c->r[0],0); // 801D7A3C
  if (!crb(c,2)) { goto L_801D7A54; } // 801D7A40
  c->r[3]=c->r[28]+0x00000320u; // 801D7A44
  c->r[4]=0u+0x00000001u; // 801D7A48
  c->r[5]=0u+0x00000000u; // 801D7A4C
  c->lr=0x801D7A54u; f_80126430(c); // 801D7A50
L_801D7A54:;
  c->r[31]=R32(c->r[28]+0x00000388u); // 801D7A54
  c->r[30]=c->r[28]+0x00000388u; // 801D7A58
  c->r[28]=0u+0x803A0000u; // 801D7A5C
  c->r[29]=0u+0x803A0000u; // 801D7A60
  goto L_801D7A9C; // 801D7A64
L_801D7A68:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801D7A68
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D7A6C
  if (!crb(c,2)) { goto L_801D7A88; } // 801D7A70
  c->r[3]=c->r[28]+0x00002890u; // 801D7A74
  c->r[5]=c->r[29]+0x0000286Cu; // 801D7A78
  c->r[4]=0u+0x0000023Du; // 801D7A7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7A80
  c->lr=0x801D7A88u; f_80212260(c); // 801D7A84
L_801D7A88:;
  c->r[12]=R32(c->r[27]+0x00000008u); // 801D7A88
  c->r[3]=c->r[27]|c->r[27]; // 801D7A8C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D7A90
  c->ctr=c->r[12]; // 801D7A94
  if (true) { c->lr=0x801D7A9Cu; dispatch(c,c->ctr); } // 801D7A98
L_801D7A9C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D7A9C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7A68; } // 801D7AA0
  c->lr=0x801D7AA8u; f_801E0470(c); // 801D7AA4
  c->lr=0x801D7AACu; f_801E0CC0(c); // 801D7AA8
  c->r[11]=c->r[1]+0x00000020u; // 801D7AAC
  c->lr=0x801D7AB4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7AB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7AB4
  c->lr=c->r[0]; // 801D7AB8
  c->r[1]=c->r[1]+0x00000020u; // 801D7ABC
  return; // 801D7AC0
}

// fn_801D7AD0
void f_801D7AD0(Ctx* __restrict c) {
  trace_call(0x801D7AD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7AD0
  c->r[0]=c->lr; // 801D7AD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D7AD8
  c->r[11]=c->r[1]+0x00000030u; // 801D7ADC
  c->lr=0x801D7AE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7AE0
  c->r[26]=c->r[3]|c->r[3]; // 801D7AE4
  c->lr=0x801D7AECu; f_801B4F50(c); // 801D7AE8
  c->r[5]=0u+0x801D0000u; // 801D7AEC
  c->r[4]=c->r[26]+0x0000036Cu; // 801D7AF0
  c->r[5]=c->r[5]+0x00007990u; // 801D7AF4
  c->lr=0x801D7AFCu; f_801B5630(c); // 801D7AF8
  c->r[29]=0u+0x803A0000u; // 801D7AFC
  c->r[28]=0u+0x803A0000u; // 801D7B00
L_801D7B04:;
  c->r[3]=c->r[26]+0x00000320u; // 801D7B04
  c->r[4]=c->r[1]+0x00000008u; // 801D7B08
  c->r[5]=0u+0x00000001u; // 801D7B0C
  c->lr=0x801D7B14u; f_80126500(c); // 801D7B10
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D7B14
  cmpu(c,0,c->r[0],0x00000001u); // 801D7B18
  if (!crb(c,2)) { goto L_801D7B2C; } // 801D7B1C
  c->r[3]=c->r[26]|c->r[26]; // 801D7B20
  c->lr=0x801D7B28u; f_801D7D00(c); // 801D7B24
  goto L_801D7B34; // 801D7B28
L_801D7B2C:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D7B2C
  if (crb(c,2)) { goto L_801D7B60; } // 801D7B30
L_801D7B34:;
  c->r[3]=R32(c->r[26]+0x00000350u); // 801D7B34
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D7B38
  c->r[0]=c->r[3]+0x21530000u; // 801D7B3C
  cmpu(c,0,c->r[0],0x0000BABEu); // 801D7B40
  if (crb(c,2)) { IRQCHK(c); goto L_801D7B04; } // 801D7B44
  c->r[3]=c->r[29]+0x000026D8u; // 801D7B48
  c->r[5]=c->r[28]+0x000027A0u; // 801D7B4C
  c->r[4]=0u+0x0000014Bu; // 801D7B50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7B54
  c->lr=0x801D7B5Cu; f_80212260(c); // 801D7B58
  IRQCHK(c); goto L_801D7B04; // 801D7B5C
L_801D7B60:;
  c->r[31]=R32(c->r[26]+0x00000388u); // 801D7B60
  c->r[30]=c->r[26]+0x00000388u; // 801D7B64
  c->r[28]=0u+0x803A0000u; // 801D7B68
  c->r[29]=0u+0x803A0000u; // 801D7B6C
  goto L_801D7BA8; // 801D7B70
L_801D7B74:;
  c->r[27]=c->r[31]|c->r[31]; cr0(c,c->r[27]); // 801D7B74
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D7B78
  if (!crb(c,2)) { goto L_801D7B94; } // 801D7B7C
  c->r[3]=c->r[28]+0x00002890u; // 801D7B80
  c->r[5]=c->r[29]+0x0000286Cu; // 801D7B84
  c->r[4]=0u+0x0000023Du; // 801D7B88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7B8C
  c->lr=0x801D7B94u; f_80212260(c); // 801D7B90
L_801D7B94:;
  c->r[12]=R32(c->r[27]+0x00000008u); // 801D7B94
  c->r[3]=c->r[27]|c->r[27]; // 801D7B98
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D7B9C
  c->ctr=c->r[12]; // 801D7BA0
  if (true) { c->lr=0x801D7BA8u; dispatch(c,c->ctr); } // 801D7BA4
L_801D7BA8:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D7BA8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7B74; } // 801D7BAC
  c->lr=0x801D7BB4u; f_801B4F50(c); // 801D7BB0
  c->r[4]=c->r[26]+0x0000036Cu; // 801D7BB4
  c->lr=0x801D7BBCu; f_801B56D0(c); // 801D7BB8
  c->r[11]=c->r[1]+0x00000030u; // 801D7BBC
  c->r[3]=0u+0x00000000u; // 801D7BC0
  c->lr=0x801D7BC8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7BC4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7BC8
  c->lr=c->r[0]; // 801D7BCC
  c->r[1]=c->r[1]+0x00000030u; // 801D7BD0
  return; // 801D7BD4
}

// fn_801D7BE0
void f_801D7BE0(Ctx* __restrict c) {
  trace_call(0x801D7BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7BE0
  c->r[0]=c->lr; // 801D7BE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7BE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7BEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7BF0
  c->r[30]=c->r[3]+0x00000354u; // 801D7BF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7BF8
  c->r[29]=c->r[4]|c->r[4]; // 801D7BFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D7C00
  c->r[28]=c->r[3]|c->r[3]; // 801D7C04
  c->r[3]=c->r[30]|c->r[30]; // 801D7C08
  c->lr=0x801D7C10u; f_80126DC0(c); // 801D7C0C
  cmps(c,0,(int32_t)c->r[29],0); // 801D7C10
  c->r[31]=c->r[28]+0x00000388u; // 801D7C14
  if (!crb(c,2)) { goto L_801D7C38; } // 801D7C18
  c->r[3]=0u+0x803A0000u; // 801D7C1C
  c->r[5]=0u+0x803A0000u; // 801D7C20
  c->r[3]=c->r[3]+0x00002830u; // 801D7C24
  c->r[4]=0u+0x00000233u; // 801D7C28
  c->r[5]=c->r[5]+0x0000280Cu; // 801D7C2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7C30
  c->lr=0x801D7C38u; f_80212260(c); // 801D7C34
L_801D7C38:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801D7C38
  c->r[5]=c->r[29]|c->r[29]; // 801D7C3C
  c->r[3]=c->r[28]+0x00000384u; // 801D7C40
  c->r[4]=c->r[1]+0x00000008u; // 801D7C44
  c->lr=0x801D7C4Cu; f_801E44B0(c); // 801D7C48
  c->r[3]=c->r[30]|c->r[30]; // 801D7C4C
  c->lr=0x801D7C54u; f_80126EA0(c); // 801D7C50
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7C54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7C58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7C5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7C60
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D7C64
  c->lr=c->r[0]; // 801D7C68
  c->r[1]=c->r[1]+0x00000020u; // 801D7C6C
  return; // 801D7C70
}

// fn_801D7C80
void f_801D7C80(Ctx* __restrict c) {
  trace_call(0x801D7C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7C80
  c->r[0]=c->lr; // 801D7C84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7C88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7C8C
  c->r[31]=c->r[3]+0x00000354u; // 801D7C90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7C94
  c->r[30]=c->r[4]|c->r[4]; // 801D7C98
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7C9C
  c->r[29]=c->r[3]|c->r[3]; // 801D7CA0
  c->r[3]=c->r[31]|c->r[31]; // 801D7CA4
  c->lr=0x801D7CACu; f_80126DC0(c); // 801D7CA8
  cmps(c,0,(int32_t)c->r[30],0); // 801D7CAC
  if (!crb(c,2)) { goto L_801D7CD0; } // 801D7CB0
  c->r[3]=0u+0x803A0000u; // 801D7CB4
  c->r[5]=0u+0x803A0000u; // 801D7CB8
  c->r[3]=c->r[3]+0x00002830u; // 801D7CBC
  c->r[4]=0u+0x00000233u; // 801D7CC0
  c->r[5]=c->r[5]+0x0000280Cu; // 801D7CC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7CC8
  c->lr=0x801D7CD0u; f_80212260(c); // 801D7CCC
L_801D7CD0:;
  c->r[4]=c->r[30]|c->r[30]; // 801D7CD0
  c->r[3]=c->r[29]+0x00000384u; // 801D7CD4
  c->lr=0x801D7CDCu; f_801E45B0(c); // 801D7CD8
  c->r[3]=c->r[31]|c->r[31]; // 801D7CDC
  c->lr=0x801D7CE4u; f_80126EA0(c); // 801D7CE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7CE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7CE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7CEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7CF0
  c->lr=c->r[0]; // 801D7CF4
  c->r[1]=c->r[1]+0x00000020u; // 801D7CF8
  return; // 801D7CFC
}

// fn_801D7D00
void f_801D7D00(Ctx* __restrict c) {
  trace_call(0x801D7D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7D00
  c->r[0]=c->lr; // 801D7D04
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D7D08
  c->r[11]=c->r[1]+0x00000030u; // 801D7D0C
  c->lr=0x801D7D14u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7D10
  c->r[26]=c->r[3]+0x00000354u; // 801D7D14
  c->r[24]=c->r[3]|c->r[3]; // 801D7D18
  c->r[3]=c->r[26]|c->r[26]; // 801D7D1C
  c->lr=0x801D7D24u; f_80126DC0(c); // 801D7D20
  c->r[31]=R32(c->r[24]+0x0000037Cu); // 801D7D24
  c->r[30]=c->r[24]+0x0000037Cu; // 801D7D28
  c->r[28]=0u+0x803A0000u; // 801D7D2C
  c->r[27]=0u+0x803A0000u; // 801D7D30
  goto L_801D7D6C; // 801D7D34
L_801D7D38:;
  c->r[29]=c->r[31]|c->r[31]; cr0(c,c->r[29]); // 801D7D38
  c->r[31]=R32(c->r[31]+0x00000000u); // 801D7D3C
  if (!crb(c,2)) { goto L_801D7D58; } // 801D7D40
  c->r[3]=c->r[28]+0x00002800u; // 801D7D44
  c->r[5]=c->r[27]+0x000027DCu; // 801D7D48
  c->r[4]=0u+0x0000023Du; // 801D7D4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7D50
  c->lr=0x801D7D58u; f_80212260(c); // 801D7D54
L_801D7D58:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 801D7D58
  c->r[3]=c->r[29]|c->r[29]; // 801D7D5C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D7D60
  c->ctr=c->r[12]; // 801D7D64
  if (true) { c->lr=0x801D7D6Cu; dispatch(c,c->ctr); } // 801D7D68
L_801D7D6C:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D7D6C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7D38; } // 801D7D70
  c->lr=0x801D7D78u; f_8012AB90(c); // 801D7D74
  c->r[27]=c->r[3]|c->r[3]; // 801D7D78
  c->lr=0x801D7D80u; f_801B98B0(c); // 801D7D7C
  c->lr=0x801D7D84u; f_801BA250(c); // 801D7D80
  c->lr=0x801D7D88u; f_801B4F50(c); // 801D7D84
  c->lr=0x801D7D8Cu; f_801B5200(c); // 801D7D88
  c->r[30]=R32(c->r[24]+0x00000388u); // 801D7D8C
  c->r[31]=c->r[24]+0x00000388u; // 801D7D90
  c->r[29]=0u+0x803A0000u; // 801D7D94
  c->r[28]=0u+0x803A0000u; // 801D7D98
  goto L_801D7DD4; // 801D7D9C
L_801D7DA0:;
  c->r[25]=c->r[30]|c->r[30]; cr0(c,c->r[25]); // 801D7DA0
  c->r[30]=R32(c->r[30]+0x00000000u); // 801D7DA4
  if (!crb(c,2)) { goto L_801D7DC0; } // 801D7DA8
  c->r[3]=c->r[29]+0x00002890u; // 801D7DAC
  c->r[5]=c->r[28]+0x0000286Cu; // 801D7DB0
  c->r[4]=0u+0x0000023Du; // 801D7DB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7DB8
  c->lr=0x801D7DC0u; f_80212260(c); // 801D7DBC
L_801D7DC0:;
  c->r[12]=R32(c->r[25]+0x00000008u); // 801D7DC0
  c->r[3]=c->r[25]|c->r[25]; // 801D7DC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801D7DC8
  c->ctr=c->r[12]; // 801D7DCC
  if (true) { c->lr=0x801D7DD4u; dispatch(c,c->ctr); } // 801D7DD0
L_801D7DD4:;
  cmpu(c,0,c->r[30],c->r[31]); // 801D7DD4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7DA0; } // 801D7DD8
  c->lr=0x801D7DE0u; f_801BDCF0(c); // 801D7DDC
  c->lr=0x801D7DE4u; f_801BDE80(c); // 801D7DE0
  c->lr=0x801D7DE8u; f_801E1570(c); // 801D7DE4
  c->lr=0x801D7DECu; f_801E0470(c); // 801D7DE8
  c->lr=0x801D7DF0u; f_801E0BB0(c); // 801D7DEC
  c->lr=0x801D7DF4u; f_8012AB90(c); // 801D7DF0
  c->r[0]=c->r[3]-c->r[27]; // 801D7DF4
  c->r[30]=R32(c->r[24]+0x0000037Cu); // 801D7DF8
  W32(c->r[24]+0x00000390u,c->r[0]); // 801D7DFC
  c->r[31]=c->r[24]+0x0000037Cu; // 801D7E00
  c->r[28]=0u+0x803A0000u; // 801D7E04
  c->r[29]=0u+0x803A0000u; // 801D7E08
  goto L_801D7E44; // 801D7E0C
L_801D7E10:;
  c->r[25]=c->r[30]|c->r[30]; cr0(c,c->r[25]); // 801D7E10
  c->r[30]=R32(c->r[30]+0x00000000u); // 801D7E14
  if (!crb(c,2)) { goto L_801D7E30; } // 801D7E18
  c->r[3]=c->r[28]+0x00002800u; // 801D7E1C
  c->r[5]=c->r[29]+0x000027DCu; // 801D7E20
  c->r[4]=0u+0x0000023Du; // 801D7E24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7E28
  c->lr=0x801D7E30u; f_80212260(c); // 801D7E2C
L_801D7E30:;
  c->r[12]=R32(c->r[25]+0x00000008u); // 801D7E30
  c->r[3]=c->r[25]|c->r[25]; // 801D7E34
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D7E38
  c->ctr=c->r[12]; // 801D7E3C
  if (true) { c->lr=0x801D7E44u; dispatch(c,c->ctr); } // 801D7E40
L_801D7E44:;
  cmpu(c,0,c->r[30],c->r[31]); // 801D7E44
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7E10; } // 801D7E48
  c->r[3]=c->r[26]|c->r[26]; // 801D7E4C
  c->lr=0x801D7E54u; f_80126EA0(c); // 801D7E50
  c->r[11]=c->r[1]+0x00000030u; // 801D7E54
  c->lr=0x801D7E5Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7E58
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D7E5C
  c->lr=c->r[0]; // 801D7E60
  c->r[1]=c->r[1]+0x00000030u; // 801D7E64
  return; // 801D7E68
}

// fn_801D7E70
void f_801D7E70(Ctx* __restrict c) {
  trace_call(0x801D7E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7E70
  c->r[0]=c->lr; // 801D7E74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7E78
  c->r[11]=c->r[1]+0x00000020u; // 801D7E7C
  c->lr=0x801D7E84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D7E80
  cmps(c,0,(int32_t)c->r[6],0); // 801D7E84
  c->r[27]=c->r[3]|c->r[3]; // 801D7E88
  c->r[28]=c->r[4]|c->r[4]; // 801D7E8C
  c->r[29]=c->r[5]|c->r[5]; // 801D7E90
  c->r[30]=c->r[6]|c->r[6]; // 801D7E94
  if (crb(c,2)) { goto L_801D7F00; } // 801D7E98
  c->lr=0x801D7EA0u; f_801251B0(c); // 801D7E9C
  c->r[4]=divwu(c->r[29],c->r[30]); // 801D7EA0
  c->r[0]=0u+0x00000000u; // 801D7EA4
  c->r[31]=c->r[3]|c->r[3]; // 801D7EA8
  W32(c->r[27]+0x00000000u,c->r[28]); // 801D7EAC
  c->r[3]=c->r[27]+0x00000014u; // 801D7EB0
  W32(c->r[27]+0x00000004u,c->r[29]); // 801D7EB4
  W32(c->r[27]+0x00000008u,c->r[4]); // 801D7EB8
  c->r[4]=0u+0x00000000u; // 801D7EBC
  c->r[5]=0u+0x00000004u; // 801D7EC0
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 801D7EC4
  W32(c->r[27]+0x00000010u,c->r[0]); // 801D7EC8
  c->lr=0x801D7ED0u; f_80004714(c); // 801D7ECC
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801D7ED0
  cmps(c,0,(int32_t)c->r[0],32); // 801D7ED4
  if (!crb(c,1)) { goto L_801D7EF8; } // 801D7ED8
  c->r[3]=0u+0x803A0000u; // 801D7EDC
  c->r[5]=0u+0x803A0000u; // 801D7EE0
  c->r[3]=c->r[3]+0x000028A0u; // 801D7EE4
  c->r[4]=0u+0x0000002Au; // 801D7EE8
  c->r[5]=c->r[5]+0x000028B4u; // 801D7EEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D7EF0
  c->lr=0x801D7EF8u; f_80212260(c); // 801D7EF4
L_801D7EF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D7EF8
  c->lr=0x801D7F00u; f_801251F0(c); // 801D7EFC
L_801D7F00:;
  c->r[11]=c->r[1]+0x00000020u; // 801D7F00
  c->lr=0x801D7F08u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D7F04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7F08
  c->lr=c->r[0]; // 801D7F0C
  c->r[1]=c->r[1]+0x00000020u; // 801D7F10
  return; // 801D7F14
}

// fn_801D7F20
void f_801D7F20(Ctx* __restrict c) {
  trace_call(0x801D7F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7F20
  c->r[0]=c->lr; // 801D7F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7F28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7F2C
  c->r[31]=c->r[3]|c->r[3]; // 801D7F30
  c->lr=0x801D7F38u; f_801251B0(c); // 801D7F34
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801D7F38
  c->r[0]=R32(c->r[31]+0x00000010u); // 801D7F3C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801D7F40
  if (crb(c,0)) { goto L_801D7F54; } // 801D7F44
  c->lr=0x801D7F4Cu; f_801251F0(c); // 801D7F48
  c->r[3]=0u+0x00000000u; // 801D7F4C
  goto L_801D7FF4; // 801D7F50
L_801D7F54:;
  c->r[0]=c->r[4]+0x00000007u; // 801D7F54
  c->r[8]=0u+0x00000000u; // 801D7F58
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801D7F5C
  c->r[4]=sraw(c,c->r[4],3); // 801D7F60
  c->r[0]=0u+0x00000008u; // 801D7F64
  c->r[7]=addc(c,c->r[4],0,c->xer_ca); // 801D7F68
  goto L_801D7FE4; // 801D7F6C
L_801D7F70:;
  c->r[6]=c->r[31]+c->r[8]; // 801D7F70
  c->r[5]=R8(c->r[6]+0x00000014u); // 801D7F74
  cmpu(c,0,c->r[5],0x000000FFu); // 801D7F78
  if (crb(c,2)) { goto L_801D7FE0; } // 801D7F7C
  c->r[9]=0u+0x00000001u; // 801D7F80
  c->r[10]=0u+0x00000000u; // 801D7F84
  c->ctr=c->r[0]; // 801D7F88
  c->r[0]=c->r[0]|0x00000000u; // 801D7F8C
L_801D7F90:;
  c->r[4]=c->r[5]&c->r[9]; cr0(c,c->r[4]); // 801D7F90
  if (!crb(c,2)) { goto L_801D7FD4; } // 801D7F94
  c->r[4]=R8(c->r[6]+0x00000014u); // 801D7F98
  c->r[0]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801D7F9C
  c->r[0]=c->r[10]+c->r[0]; // 801D7FA0
  c->r[4]=c->r[4]|c->r[9]; // 801D7FA4
  W8(c->r[6]+0x00000014u,c->r[4]); // 801D7FA8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801D7FAC
  c->r[5]=R32(c->r[31]+0x00000010u); // 801D7FB0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801D7FB4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D7FB8
  c->r[5]=c->r[5]+0x00000001u; // 801D7FBC
  W32(c->r[31]+0x00000010u,c->r[5]); // 801D7FC0
  c->r[31]=c->r[4]+c->r[0]; // 801D7FC4
  c->lr=0x801D7FCCu; f_801251F0(c); // 801D7FC8
  c->r[3]=c->r[31]|c->r[31]; // 801D7FCC
  goto L_801D7FF4; // 801D7FD0
L_801D7FD4:;
  c->r[9]=rotl(c->r[9],1)&0x000000FEu; // 801D7FD4
  c->r[10]=c->r[10]+0x00000001u; // 801D7FD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D7F90; } // 801D7FDC
L_801D7FE0:;
  c->r[8]=c->r[8]+0x00000001u; // 801D7FE0
L_801D7FE4:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801D7FE4
  if (crb(c,0)) { IRQCHK(c); goto L_801D7F70; } // 801D7FE8
  c->lr=0x801D7FF0u; f_801251F0(c); // 801D7FEC
  c->r[3]=0u+0x00000000u; // 801D7FF0
L_801D7FF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7FF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7FF8
  c->lr=c->r[0]; // 801D7FFC
  c->r[1]=c->r[1]+0x00000010u; // 801D8000
  return; // 801D8004
}

// fn_801D8010
void f_801D8010(Ctx* __restrict c) {
  trace_call(0x801D8010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8010
  c->r[0]=c->lr; // 801D8014
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8018
  c->r[11]=c->r[1]+0x00000020u; // 801D801C
  c->lr=0x801D8024u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8020
  c->r[28]=0u+0x803A0000u; // 801D8024
  c->r[31]=c->r[3]|c->r[3]; // 801D8028
  c->r[27]=c->r[4]|c->r[4]; // 801D802C
  c->r[28]=c->r[28]+0x000028A0u; // 801D8030
  c->lr=0x801D8038u; f_801251B0(c); // 801D8034
  c->r[4]=R32(c->r[31]+0x00000000u); // 801D8038
  c->r[30]=c->r[3]|c->r[3]; // 801D803C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D8040
  c->r[3]=c->r[27]-c->r[4]; // 801D8044
  c->r[29]=divwu(c->r[3],c->r[0]); // 801D8048
  cmpu(c,0,c->r[29],0x00000020u); // 801D804C
  if (crb(c,0)) { goto L_801D8068; } // 801D8050
  c->r[3]=c->r[28]+0x00000000u; // 801D8054
  c->r[5]=c->r[28]+0x00000034u; // 801D8058
  c->r[4]=0u+0x0000005Cu; // 801D805C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8060
  c->lr=0x801D8068u; f_80212260(c); // 801D8064
L_801D8068:;
  c->r[0]=rotl(c->r[29],29)&0x1FFFFFFFu; // 801D8068
  c->r[3]=rotl(c->r[29],0)&0x00000007u; // 801D806C
  c->r[29]=c->r[31]+c->r[0]; // 801D8070
  c->r[4]=0u+0x00000001u; // 801D8074
  c->r[0]=R8(c->r[29]+0x00000014u); // 801D8078
  c->r[27]=((c->r[3])&0x20)?0u:(c->r[4]<<((c->r[3])&31)); // 801D807C
  c->r[0]=c->r[27]&c->r[0]; cr0(c,c->r[0]); // 801D8080
  if (!crb(c,2)) { goto L_801D809C; } // 801D8084
  c->r[3]=c->r[28]+0x00000000u; // 801D8088
  c->r[5]=c->r[28]+0x00000064u; // 801D808C
  c->r[4]=0u+0x00000061u; // 801D8090
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8094
  c->lr=0x801D809Cu; f_80212260(c); // 801D8098
L_801D809C:;
  c->r[0]=R8(c->r[29]+0x00000014u); // 801D809C
  c->r[0]=c->r[0]&~c->r[27]; // 801D80A0
  W8(c->r[29]+0x00000014u,c->r[0]); // 801D80A4
  c->r[3]=R32(c->r[31]+0x00000010u); // 801D80A8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801D80AC
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D80B0
  if (!crb(c,0)) { goto L_801D80CC; } // 801D80B4
  c->r[3]=c->r[28]+0x00000000u; // 801D80B8
  c->r[5]=c->r[28]+0x000000A4u; // 801D80BC
  c->r[4]=0u+0x00000064u; // 801D80C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D80C4
  c->lr=0x801D80CCu; f_80212260(c); // 801D80C8
L_801D80CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801D80CC
  c->lr=0x801D80D4u; f_801251F0(c); // 801D80D0
  c->r[11]=c->r[1]+0x00000020u; // 801D80D4
  c->lr=0x801D80DCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D80D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D80DC
  c->lr=c->r[0]; // 801D80E0
  c->r[1]=c->r[1]+0x00000020u; // 801D80E4
  return; // 801D80E8
}

// fn_801D80F0
void f_801D80F0(Ctx* __restrict c) {
  trace_call(0x801D80F0u);
  c->r[0]=0u+0x00000000u; // 801D80F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D80F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D80F8
  return; // 801D80FC
}

// fn_801D8100
void f_801D8100(Ctx* __restrict c) {
  trace_call(0x801D8100u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8100
  c->r[0]=c->lr; // 801D8104
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8108
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D810C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8110
  c->r[31]=c->r[3]|c->r[3]; // 801D8114
  cmps(c,0,(int32_t)c->r[0],0); // 801D8118
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D811C
  c->r[30]=c->r[4]|c->r[4]; // 801D8120
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8124
  c->r[29]=0u+0x803A0000u; // 801D8128
  c->r[29]=c->r[29]+0x00002970u; // 801D812C
  if (!crb(c,2)) { goto L_801D8148; } // 801D8130
  c->r[3]=c->r[29]+0x00000000u; // 801D8134
  c->r[5]=c->r[29]+0x00000158u; // 801D8138
  c->r[4]=0u+0x000000B8u; // 801D813C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8140
  c->lr=0x801D8148u; f_80212260(c); // 801D8144
L_801D8148:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801D8148
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D814C
  c->r[31]=c->r[3]+0x00000008u; // 801D8150
  cmps(c,0,(int32_t)c->r[0],0); // 801D8154
  if (crb(c,2)) { goto L_801D8174; } // 801D8158
  c->r[5]=0u+0x803A0000u; // 801D815C
  c->r[3]=c->r[13]+0xFFFFAE40u; // 801D8160
  c->r[5]=c->r[5]+0x00002DB0u; // 801D8164
  c->r[4]=0u+0x0000008Du; // 801D8168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D816C
  c->lr=0x801D8174u; f_80212260(c); // 801D8170
L_801D8174:;
  c->r[3]=R8(c->r[31]+0x00000000u); // 801D8174
  c->r[5]=c->r[31]|c->r[31]; // 801D8178
  c->r[4]=R32(c->r[31]+0x00000004u); // 801D817C
  c->lr=0x801D8184u; f_801E15A0(c); // 801D8180
  c->r[6]=R16(c->r[3]+0x00000006u); // 801D8184
  c->r[31]=c->r[3]|c->r[3]; // 801D8188
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D818C
  if (crb(c,2)) { goto L_801D81A8; } // 801D8190
  c->r[3]=c->r[29]+0x00000000u; // 801D8194
  c->r[5]=c->r[29]+0x00000180u; // 801D8198
  c->r[4]=0u+0x000000C0u; // 801D819C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D81A0
  c->lr=0x801D81A8u; f_80212260(c); // 801D81A4
L_801D81A8:;
  c->r[6]=R32(c->r[31]+0x00000018u); // 801D81A8
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D81AC
  if (crb(c,2)) { goto L_801D81C8; } // 801D81B0
  c->r[3]=c->r[29]+0x00000000u; // 801D81B4
  c->r[5]=c->r[29]+0x000001DCu; // 801D81B8
  c->r[4]=0u+0x000000C1u; // 801D81BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D81C0
  c->lr=0x801D81C8u; f_80212260(c); // 801D81C4
L_801D81C8:;
  c->r[6]=R32(c->r[31]+0x00000028u); // 801D81C8
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D81CC
  if (crb(c,2)) { goto L_801D81E8; } // 801D81D0
  c->r[3]=c->r[29]+0x00000000u; // 801D81D4
  c->r[5]=c->r[29]+0x00000230u; // 801D81D8
  c->r[4]=0u+0x000000C2u; // 801D81DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D81E0
  c->lr=0x801D81E8u; f_80212260(c); // 801D81E4
L_801D81E8:;
  c->r[6]=R8(c->r[31]+0x00000000u); // 801D81E8
  cmps(c,0,(int32_t)c->r[6],2); // 801D81EC
  if (crb(c,2)) { goto L_801D8208; } // 801D81F0
  cmps(c,0,(int32_t)c->r[6],1); // 801D81F4
  if (crb(c,2)) { goto L_801D8210; } // 801D81F8
  cmps(c,0,(int32_t)c->r[6],0); // 801D81FC
  if (crb(c,2)) { goto L_801D8218; } // 801D8200
  goto L_801D8220; // 801D8204
L_801D8208:;
  c->r[0]=0u+0x00000003u; // 801D8208
  goto L_801D8238; // 801D820C
L_801D8210:;
  c->r[0]=0u+0x00000001u; // 801D8210
  goto L_801D8238; // 801D8214
L_801D8218:;
  c->r[0]=0u+0x00000002u; // 801D8218
  goto L_801D8238; // 801D821C
L_801D8220:;
  c->r[3]=c->r[29]+0x00000000u; // 801D8220
  c->r[5]=c->r[29]+0x0000028Cu; // 801D8224
  c->r[4]=0u+0x0000014Du; // 801D8228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D822C
  c->lr=0x801D8234u; f_80212260(c); // 801D8230
  c->r[0]=0u+0x00000003u; // 801D8234
L_801D8238:;
  W32(c->r[30]+0x00000000u,c->r[0]); // 801D8238
  c->r[3]=0u+0x00000001u; // 801D823C
  c->r[4]=R8(c->r[31]+0x00000001u); // 801D8240
  c->r[0]=0u-c->r[4]; // 801D8244
  c->r[0]=c->r[0]|c->r[4]; // 801D8248
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D824C
  W8(c->r[30]+0x00000004u,c->r[0]); // 801D8250
  c->r[0]=R8(c->r[31]+0x00000002u); // 801D8254
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D8258
  c->r[4]=R8(c->r[31]+0x00000003u); // 801D825C
  c->r[0]=R16(c->r[31]+0x00000004u); // 801D8260
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 801D8264
  c->r[0]=c->r[4]+c->r[0]; // 801D8268
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D826C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801D8270
  W16(c->r[30]+0x00000010u,c->r[0]); // 801D8274
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D8278
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D827C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801D8280
  W32(c->r[30]+0x00000018u,c->r[0]); // 801D8284
  c->r[0]=R32(c->r[31]+0x00000010u); // 801D8288
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D828C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801D8290
  W32(c->r[30]+0x00000020u,c->r[0]); // 801D8294
  c->r[0]=R32(c->r[31]+0x00000018u); // 801D8298
  W32(c->r[30]+0x00000024u,c->r[0]); // 801D829C
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801D82A0
  W32(c->r[30]+0x00000028u,c->r[0]); // 801D82A4
  c->r[0]=R32(c->r[31]+0x00000020u); // 801D82A8
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801D82AC
  c->r[0]=R32(c->r[31]+0x00000024u); // 801D82B0
  W32(c->r[30]+0x00000030u,c->r[0]); // 801D82B4
  c->r[0]=R32(c->r[31]+0x00000028u); // 801D82B8
  W32(c->r[30]+0x00000034u,c->r[0]); // 801D82BC
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801D82C0
  W32(c->r[30]+0x00000038u,c->r[0]); // 801D82C4
  c->r[0]=R32(c->r[31]+0x00000030u); // 801D82C8
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801D82CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D82D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D82D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D82D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D82DC
  c->lr=c->r[0]; // 801D82E0
  c->r[1]=c->r[1]+0x00000020u; // 801D82E4
  return; // 801D82E8
}

// fn_801D82F0
void f_801D82F0(Ctx* __restrict c) {
  trace_call(0x801D82F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D82F0
  c->r[0]=c->lr; // 801D82F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D82F8
  c->r[11]=c->r[1]+0x00000020u; // 801D82FC
  c->lr=0x801D8304u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8300
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D8304
  c->r[29]=0u+0x803A0000u; // 801D8308
  c->r[26]=c->r[3]|c->r[3]; // 801D830C
  c->r[31]=c->r[4]|c->r[4]; // 801D8310
  cmps(c,0,(int32_t)c->r[0],0); // 801D8314
  c->r[27]=c->r[5]|c->r[5]; // 801D8318
  c->r[29]=c->r[29]+0x00002970u; // 801D831C
  if (!crb(c,2)) { goto L_801D8338; } // 801D8320
  c->r[3]=c->r[29]+0x00000000u; // 801D8324
  c->r[5]=c->r[29]+0x00000158u; // 801D8328
  c->r[4]=0u+0x000000DAu; // 801D832C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8330
  c->lr=0x801D8338u; f_80212260(c); // 801D8334
L_801D8338:;
  c->r[28]=R32(c->r[26]+0x00000004u); // 801D8338
  c->r[0]=R8(c->r[28]+0x00000011u); // 801D833C
  c->r[30]=c->r[28]+0x00000008u; // 801D8340
  cmps(c,0,(int32_t)c->r[0],0); // 801D8344
  if (crb(c,2)) { goto L_801D8364; } // 801D8348
  c->r[5]=0u+0x803A0000u; // 801D834C
  c->r[3]=c->r[13]+0xFFFFAE38u; // 801D8350
  c->r[5]=c->r[5]+0x00002D88u; // 801D8354
  c->r[4]=0u+0x0000008Du; // 801D8358
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D835C
  c->lr=0x801D8364u; f_80212260(c); // 801D8360
L_801D8364:;
  c->r[3]=R8(c->r[28]+0x00000010u); // 801D8364
  c->r[5]=c->r[30]|c->r[30]; // 801D8368
  c->r[4]=R32(c->r[28]+0x00000014u); // 801D836C
  c->lr=0x801D8374u; f_801E15A0(c); // 801D8370
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D8374
  c->r[30]=c->r[3]|c->r[3]; // 801D8378
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D837C
  if (crb(c,0)) { goto L_801D838C; } // 801D8380
  c->r[3]=0u+0x00000000u; // 801D8384
  goto L_801D8654; // 801D8388
L_801D838C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D838C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8390
  if (crb(c,2)) { goto L_801D83A4; } // 801D8394
  cmps(c,0,(int32_t)c->r[0],1); // 801D8398
  if (crb(c,2)) { goto L_801D84F0; } // 801D839C
  goto L_801D863C; // 801D83A0
L_801D83A4:;
  c->r[28]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D83A4
  c->r[4]=R32(c->r[26]+0x00000004u); // 801D83A8
  c->r[3]=c->r[3]+c->r[28]; // 801D83AC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D83B0
  c->r[29]=c->r[4]+0x00000008u; // 801D83B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D83B8
  if (crb(c,2)) { goto L_801D83D8; } // 801D83BC
  c->r[5]=0u+0x803A0000u; // 801D83C0
  c->r[3]=c->r[13]+0xFFFFAE20u; // 801D83C4
  c->r[5]=c->r[5]+0x00002D10u; // 801D83C8
  c->r[4]=0u+0x0000008Du; // 801D83CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D83D0
  c->lr=0x801D83D8u; f_80212260(c); // 801D83D4
L_801D83D8:;
  c->r[4]=c->r[30]+c->r[28]; // 801D83D8
  c->r[5]=c->r[29]|c->r[29]; // 801D83DC
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D83E0
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D83E4
  c->lr=0x801D83ECu; f_801E15A0(c); // 801D83E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D83EC
  if (!crb(c,2)) { goto L_801D83FC; } // 801D83F0
  c->r[3]=0u+0x00000000u; // 801D83F4
  goto L_801D8654; // 801D83F8
L_801D83FC:;
  c->r[4]=0u+0x0000007Fu; // 801D83FC
  c->r[0]=0u+0x00000040u; // 801D8400
  W8(c->r[31]+0x00000000u,c->r[4]); // 801D8404
  c->r[5]=0u+0x00000020u; // 801D8408
  W8(c->r[31]+0x00000001u,c->r[0]); // 801D840C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D8410
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D8414
  cmps(c,0,(int32_t)c->r[0],32); // 801D8418
  if (crb(c,1)) { goto L_801D8424; } // 801D841C
  c->r[5]=c->r[0]|c->r[0]; // 801D8420
L_801D8424:;
  cmps(c,1,(int32_t)c->r[5],0); // 801D8424
  c->r[8]=0u+0x00000000u; // 801D8428
  if (!crb(c,5)) { goto L_801D8650; } // 801D842C
  cmps(c,0,(int32_t)c->r[5],8); // 801D8430
  c->r[6]=c->r[5]+0xFFFFFFF8u; // 801D8434
  if (!crb(c,1)) { goto L_801D84C4; } // 801D8438
  c->r[7]=0u+0x00000000u; // 801D843C
  if (crb(c,4)) { goto L_801D8458; } // 801D8440
  c->r[4]=0u+0x80000000u; // 801D8444
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801D8448
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801D844C
  if (crb(c,1)) { goto L_801D8458; } // 801D8450
  c->r[7]=0u+0x00000001u; // 801D8454
L_801D8458:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D8458
  if (crb(c,2)) { goto L_801D84C4; } // 801D845C
  c->r[0]=c->r[6]+0x00000007u; // 801D8460
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D8464
  c->ctr=c->r[0]; // 801D8468
  cmps(c,0,(int32_t)c->r[6],0); // 801D846C
  if (!crb(c,1)) { goto L_801D84C4; } // 801D8470
L_801D8474:;
  c->r[4]=c->r[3]+c->r[8]; // 801D8474
  c->r[6]=c->r[31]+c->r[8]; // 801D8478
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D847C
  c->r[8]=c->r[8]+0x00000008u; // 801D8480
  W8(c->r[6]+0x00000008u,c->r[0]); // 801D8484
  c->r[0]=R8(c->r[4]+0x00000002u); // 801D8488
  W8(c->r[6]+0x00000009u,c->r[0]); // 801D848C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801D8490
  W8(c->r[6]+0x0000000Au,c->r[0]); // 801D8494
  c->r[0]=R8(c->r[4]+0x00000004u); // 801D8498
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 801D849C
  c->r[0]=R8(c->r[4]+0x00000005u); // 801D84A0
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 801D84A4
  c->r[0]=R8(c->r[4]+0x00000006u); // 801D84A8
  W8(c->r[6]+0x0000000Du,c->r[0]); // 801D84AC
  c->r[0]=R8(c->r[4]+0x00000007u); // 801D84B0
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 801D84B4
  c->r[0]=R8(c->r[4]+0x00000008u); // 801D84B8
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 801D84BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8474; } // 801D84C0
L_801D84C4:;
  c->r[0]=c->r[5]-c->r[8]; // 801D84C4
  c->ctr=c->r[0]; // 801D84C8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801D84CC
  if (!crb(c,0)) { goto L_801D8650; } // 801D84D0
L_801D84D4:;
  c->r[5]=c->r[3]+c->r[8]; // 801D84D4
  c->r[4]=c->r[31]+c->r[8]; // 801D84D8
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D84DC
  c->r[8]=c->r[8]+0x00000001u; // 801D84E0
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D84E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D84D4; } // 801D84E8
  goto L_801D8650; // 801D84EC
L_801D84F0:;
  c->r[28]=rotl(c->r[27],3)&0xFFFFFFF8u; // 801D84F0
  c->r[4]=R32(c->r[26]+0x00000004u); // 801D84F4
  c->r[3]=c->r[3]+c->r[28]; // 801D84F8
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D84FC
  c->r[29]=c->r[4]+0x00000008u; // 801D8500
  cmpu(c,0,c->r[0],0x00000001u); // 801D8504
  if (crb(c,2)) { goto L_801D8524; } // 801D8508
  c->r[5]=0u+0x803A0000u; // 801D850C
  c->r[3]=c->r[13]+0xFFFFAE28u; // 801D8510
  c->r[5]=c->r[5]+0x00002D38u; // 801D8514
  c->r[4]=0u+0x0000008Eu; // 801D8518
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D851C
  c->lr=0x801D8524u; f_80212260(c); // 801D8520
L_801D8524:;
  c->r[4]=c->r[30]+c->r[28]; // 801D8524
  c->r[5]=c->r[29]|c->r[29]; // 801D8528
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D852C
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D8530
  c->lr=0x801D8538u; f_801E15A0(c); // 801D8534
  cmps(c,0,(int32_t)c->r[3],0); // 801D8538
  if (!crb(c,2)) { goto L_801D8548; } // 801D853C
  c->r[3]=0u+0x00000000u; // 801D8540
  goto L_801D8654; // 801D8544
L_801D8548:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D8548
  c->r[5]=0u+0x00000020u; // 801D854C
  W8(c->r[31]+0x00000000u,c->r[0]); // 801D8550
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D8554
  W8(c->r[31]+0x00000001u,c->r[0]); // 801D8558
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D855C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801D8560
  cmps(c,0,(int32_t)c->r[0],32); // 801D8564
  if (crb(c,1)) { goto L_801D8570; } // 801D8568
  c->r[5]=c->r[0]|c->r[0]; // 801D856C
L_801D8570:;
  cmps(c,1,(int32_t)c->r[5],0); // 801D8570
  c->r[8]=0u+0x00000000u; // 801D8574
  if (!crb(c,5)) { goto L_801D8650; } // 801D8578
  cmps(c,0,(int32_t)c->r[5],8); // 801D857C
  c->r[6]=c->r[5]+0xFFFFFFF8u; // 801D8580
  if (!crb(c,1)) { goto L_801D8610; } // 801D8584
  c->r[7]=0u+0x00000000u; // 801D8588
  if (crb(c,4)) { goto L_801D85A4; } // 801D858C
  c->r[4]=0u+0x80000000u; // 801D8590
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801D8594
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801D8598
  if (crb(c,1)) { goto L_801D85A4; } // 801D859C
  c->r[7]=0u+0x00000001u; // 801D85A0
L_801D85A4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D85A4
  if (crb(c,2)) { goto L_801D8610; } // 801D85A8
  c->r[0]=c->r[6]+0x00000007u; // 801D85AC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D85B0
  c->ctr=c->r[0]; // 801D85B4
  cmps(c,0,(int32_t)c->r[6],0); // 801D85B8
  if (!crb(c,1)) { goto L_801D8610; } // 801D85BC
L_801D85C0:;
  c->r[4]=c->r[3]+c->r[8]; // 801D85C0
  c->r[6]=c->r[31]+c->r[8]; // 801D85C4
  c->r[0]=R8(c->r[4]+0x00000009u); // 801D85C8
  c->r[8]=c->r[8]+0x00000008u; // 801D85CC
  W8(c->r[6]+0x00000008u,c->r[0]); // 801D85D0
  c->r[0]=R8(c->r[4]+0x0000000Au); // 801D85D4
  W8(c->r[6]+0x00000009u,c->r[0]); // 801D85D8
  c->r[0]=R8(c->r[4]+0x0000000Bu); // 801D85DC
  W8(c->r[6]+0x0000000Au,c->r[0]); // 801D85E0
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 801D85E4
  W8(c->r[6]+0x0000000Bu,c->r[0]); // 801D85E8
  c->r[0]=R8(c->r[4]+0x0000000Du); // 801D85EC
  W8(c->r[6]+0x0000000Cu,c->r[0]); // 801D85F0
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 801D85F4
  W8(c->r[6]+0x0000000Du,c->r[0]); // 801D85F8
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801D85FC
  W8(c->r[6]+0x0000000Eu,c->r[0]); // 801D8600
  c->r[0]=R8(c->r[4]+0x00000010u); // 801D8604
  W8(c->r[6]+0x0000000Fu,c->r[0]); // 801D8608
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D85C0; } // 801D860C
L_801D8610:;
  c->r[0]=c->r[5]-c->r[8]; // 801D8610
  c->ctr=c->r[0]; // 801D8614
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801D8618
  if (!crb(c,0)) { goto L_801D8650; } // 801D861C
L_801D8620:;
  c->r[5]=c->r[3]+c->r[8]; // 801D8620
  c->r[4]=c->r[31]+c->r[8]; // 801D8624
  c->r[0]=R8(c->r[5]+0x00000009u); // 801D8628
  c->r[8]=c->r[8]+0x00000001u; // 801D862C
  W8(c->r[4]+0x00000008u,c->r[0]); // 801D8630
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8620; } // 801D8634
  goto L_801D8650; // 801D8638
L_801D863C:;
  c->r[3]=c->r[29]+0x00000000u; // 801D863C
  c->r[5]=c->r[29]+0x000002A8u; // 801D8640
  c->r[4]=0u+0x0000010Cu; // 801D8644
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8648
  c->lr=0x801D8650u; f_80212260(c); // 801D864C
L_801D8650:;
  c->r[3]=0u+0x00000001u; // 801D8650
L_801D8654:;
  c->r[11]=c->r[1]+0x00000020u; // 801D8654
  c->lr=0x801D865Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8658
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D865C
  c->lr=c->r[0]; // 801D8660
  c->r[1]=c->r[1]+0x00000020u; // 801D8664
  return; // 801D8668
}

// fn_801D8670
void f_801D8670(Ctx* __restrict c) {
  trace_call(0x801D8670u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8670
  c->r[0]=c->lr; // 801D8674
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D8678
  c->r[11]=c->r[1]+0x00000080u; // 801D867C
  c->lr=0x801D8684u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8680
  c->r[27]=c->r[3]|c->r[3]; // 801D8684
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D8688
  c->r[31]=0u+0x803A0000u; // 801D868C
  c->r[28]=c->r[4]|c->r[4]; // 801D8690
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D8694
  c->r[29]=c->r[5]|c->r[5]; // 801D8698
  c->r[31]=c->r[31]+0x00002970u; // 801D869C
  c->r[4]=0u+0x00000000u; // 801D86A0
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D86A4
  c->r[5]=0u+0x00000000u; // 801D86A8
  c->ctr=c->r[12]; // 801D86AC
  if (true) { c->lr=0x801D86B4u; dispatch(c,c->ctr); } // 801D86B0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D86B4
  c->r[0]=c->r[1]+0x00000027u; // 801D86B8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801D86BC
  c->r[5]=0u+0x00000040u; // 801D86C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D86C4
  c->r[4]=c->r[30]|c->r[30]; // 801D86C8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D86CC
  c->ctr=c->r[12]; // 801D86D0
  if (true) { c->lr=0x801D86D8u; dispatch(c,c->ctr); } // 801D86D4
  cmpu(c,0,c->r[3],0x00000040u); // 801D86D8
  if (crb(c,2)) { goto L_801D86E8; } // 801D86DC
  c->r[3]=0u+0x00000000u; // 801D86E0
  goto L_801D8998; // 801D86E4
L_801D86E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D86E8
  if (!crb(c,2)) { goto L_801D8704; } // 801D86EC
  c->r[3]=c->r[31]+0x00000000u; // 801D86F0
  c->r[5]=c->r[31]+0x00000014u; // 801D86F4
  c->r[4]=0u+0x0000002Au; // 801D86F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D86FC
  c->lr=0x801D8704u; f_80212260(c); // 801D8700
L_801D8704:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D8704
  c->r[0]=c->r[3]+0xADAD0000u; // 801D8708
  cmpu(c,0,c->r[0],0x0000544Du); // 801D870C
  if (crb(c,2)) { goto L_801D8728; } // 801D8710
  c->r[3]=c->r[31]+0x00000000u; // 801D8714
  c->r[5]=c->r[31]+0x00000040u; // 801D8718
  c->r[4]=0u+0x00000033u; // 801D871C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8720
  c->lr=0x801D8728u; f_80212260(c); // 801D8724
L_801D8728:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D8728
  c->r[0]=c->r[3]+0xADAD0000u; // 801D872C
  cmpu(c,0,c->r[0],0x0000544Du); // 801D8730
  if (crb(c,2)) { goto L_801D8740; } // 801D8734
  c->r[0]=0u+0x00000000u; // 801D8738
  goto L_801D87A8; // 801D873C
L_801D8740:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D8740
  cmpu(c,0,c->r[0],0x00000100u); // 801D8744
  if (!crb(c,0)) { goto L_801D8760; } // 801D8748
  c->r[3]=c->r[31]+0x00000000u; // 801D874C
  c->r[5]=c->r[31]+0x00000074u; // 801D8750
  c->r[4]=0u+0x0000003Bu; // 801D8754
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8758
  c->lr=0x801D8760u; f_80212260(c); // 801D875C
L_801D8760:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801D8760
  cmpu(c,0,c->r[0],0x00000100u); // 801D8764
  if (!crb(c,0)) { goto L_801D8774; } // 801D8768
  c->r[0]=0u+0x00000000u; // 801D876C
  goto L_801D87A8; // 801D8770
L_801D8774:;
  if (!crb(c,1)) { goto L_801D878C; } // 801D8774
  c->r[3]=c->r[31]+0x00000000u; // 801D8778
  c->r[5]=c->r[31]+0x00000074u; // 801D877C
  c->r[4]=0u+0x00000041u; // 801D8780
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8784
  c->lr=0x801D878Cu; f_80212260(c); // 801D8788
L_801D878C:;
  c->r[4]=R16(c->r[30]+0x00000006u); // 801D878C
  c->r[3]=0u+0x00000100u; // 801D8790
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 801D8794
  c->r[3]=c->r[3]|~c->r[4]; // 801D8798
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D879C
  c->r[0]=c->r[3]-c->r[0]; // 801D87A0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D87A4
L_801D87A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D87A8
  if (!crb(c,2)) { goto L_801D87B8; } // 801D87AC
  c->r[3]=0u+0x00000000u; // 801D87B0
  goto L_801D8998; // 801D87B4
L_801D87B8:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 801D87B8
  cmpu(c,0,c->r[0],c->r[29]); // 801D87BC
  if (!crb(c,1)) { goto L_801D87CC; } // 801D87C0
  c->r[3]=0u+0x00000000u; // 801D87C4
  goto L_801D8998; // 801D87C8
L_801D87CC:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D87CC
  c->r[4]=0u+0x00000000u; // 801D87D0
  c->r[6]=R32(c->r[30]+0x00000010u); // 801D87D4
  c->r[5]=0u+0x00000000u; // 801D87D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D87DC
  c->r[0]=R32(c->r[30]+0x00000014u); // 801D87E0
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D87E4
  c->r[29]=c->r[6]+c->r[0]; // 801D87E8
  c->ctr=c->r[12]; // 801D87EC
  if (true) { c->lr=0x801D87F4u; dispatch(c,c->ctr); } // 801D87F0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D87F4
  c->r[4]=c->r[28]|c->r[28]; // 801D87F8
  c->r[5]=c->r[29]|c->r[29]; // 801D87FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D8800
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D8804
  c->ctr=c->r[12]; // 801D8808
  if (true) { c->lr=0x801D8810u; dispatch(c,c->ctr); } // 801D880C
  cmpu(c,0,c->r[3],c->r[29]); // 801D8810
  if (crb(c,2)) { goto L_801D8820; } // 801D8814
  c->r[3]=0u+0x00000000u; // 801D8818
  goto L_801D8998; // 801D881C
L_801D8820:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D8820
  if (!crb(c,2)) { goto L_801D883C; } // 801D8824
  c->r[3]=c->r[31]+0x00000000u; // 801D8828
  c->r[5]=c->r[31]+0x00000014u; // 801D882C
  c->r[4]=0u+0x00000061u; // 801D8830
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8834
  c->lr=0x801D883Cu; f_80212260(c); // 801D8838
L_801D883C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D883C
  if (!crb(c,2)) { goto L_801D8858; } // 801D8840
  c->r[3]=c->r[31]+0x00000000u; // 801D8844
  c->r[5]=c->r[31]+0x00000014u; // 801D8848
  c->r[4]=0u+0x0000002Au; // 801D884C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8850
  c->lr=0x801D8858u; f_80212260(c); // 801D8854
L_801D8858:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801D8858
  c->r[0]=c->r[3]+0xADAD0000u; // 801D885C
  cmpu(c,0,c->r[0],0x0000544Du); // 801D8860
  if (crb(c,2)) { goto L_801D887C; } // 801D8864
  c->r[3]=c->r[31]+0x00000000u; // 801D8868
  c->r[5]=c->r[31]+0x00000040u; // 801D886C
  c->r[4]=0u+0x00000033u; // 801D8870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8874
  c->lr=0x801D887Cu; f_80212260(c); // 801D8878
L_801D887C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801D887C
  c->r[0]=c->r[3]+0xADAD0000u; // 801D8880
  cmpu(c,0,c->r[0],0x0000544Du); // 801D8884
  if (crb(c,2)) { goto L_801D8894; } // 801D8888
  c->r[0]=0u+0x00000000u; // 801D888C
  goto L_801D88FC; // 801D8890
L_801D8894:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801D8894
  cmpu(c,0,c->r[0],0x00000100u); // 801D8898
  if (!crb(c,0)) { goto L_801D88B4; } // 801D889C
  c->r[3]=c->r[31]+0x00000000u; // 801D88A0
  c->r[5]=c->r[31]+0x00000074u; // 801D88A4
  c->r[4]=0u+0x0000003Bu; // 801D88A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D88AC
  c->lr=0x801D88B4u; f_80212260(c); // 801D88B0
L_801D88B4:;
  c->r[0]=R16(c->r[28]+0x00000006u); // 801D88B4
  cmpu(c,0,c->r[0],0x00000100u); // 801D88B8
  if (!crb(c,0)) { goto L_801D88C8; } // 801D88BC
  c->r[0]=0u+0x00000000u; // 801D88C0
  goto L_801D88FC; // 801D88C4
L_801D88C8:;
  if (!crb(c,1)) { goto L_801D88E0; } // 801D88C8
  c->r[3]=c->r[31]+0x00000000u; // 801D88CC
  c->r[5]=c->r[31]+0x00000074u; // 801D88D0
  c->r[4]=0u+0x00000041u; // 801D88D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D88D8
  c->lr=0x801D88E0u; f_80212260(c); // 801D88DC
L_801D88E0:;
  c->r[4]=R16(c->r[28]+0x00000006u); // 801D88E0
  c->r[3]=0u+0x00000100u; // 801D88E4
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 801D88E8
  c->r[3]=c->r[3]|~c->r[4]; // 801D88EC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801D88F0
  c->r[0]=c->r[3]-c->r[0]; // 801D88F4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D88F8
L_801D88FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D88FC
  if (crb(c,2)) { goto L_801D8994; } // 801D8900
  W32(c->r[27]+0x00000004u,c->r[28]); // 801D8904
  c->r[0]=R32(c->r[28]+0x00000010u); // 801D8908
  c->r[3]=c->r[0]+c->r[28]; // 801D890C
  W32(c->r[27]+0x00000008u,c->r[3]); // 801D8910
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D8914
  c->r[0]=c->r[3]+0xB7BB0000u; // 801D8918
  cmpu(c,0,c->r[0],0x00004144u); // 801D891C
  if (crb(c,2)) { goto L_801D8938; } // 801D8920
  c->r[3]=c->r[31]+0x00000000u; // 801D8924
  c->r[5]=c->r[31]+0x000000CCu; // 801D8928
  c->r[4]=0u+0x0000006Au; // 801D892C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8930
  c->lr=0x801D8938u; f_80212260(c); // 801D8934
L_801D8938:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D8938
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D893C
  c->r[27]=c->r[3]+0x00000008u; // 801D8940
  cmps(c,0,(int32_t)c->r[0],0); // 801D8944
  if (crb(c,2)) { goto L_801D8964; } // 801D8948
  c->r[5]=0u+0x803A0000u; // 801D894C
  c->r[3]=c->r[13]+0xFFFFAE40u; // 801D8950
  c->r[5]=c->r[5]+0x00002DB0u; // 801D8954
  c->r[4]=0u+0x0000008Du; // 801D8958
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D895C
  c->lr=0x801D8964u; f_80212260(c); // 801D8960
L_801D8964:;
  c->r[3]=R8(c->r[27]+0x00000000u); // 801D8964
  c->r[5]=c->r[27]|c->r[27]; // 801D8968
  c->r[4]=R32(c->r[27]+0x00000004u); // 801D896C
  c->lr=0x801D8974u; f_801E15A0(c); // 801D8970
  c->r[0]=R32(c->r[3]+0x00000018u); // 801D8974
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; cr0(c,c->r[0]); // 801D8978
  if (crb(c,2)) { goto L_801D8994; } // 801D897C
  c->r[3]=c->r[31]+0x00000000u; // 801D8980
  c->r[5]=c->r[31]+0x00000128u; // 801D8984
  c->r[4]=0u+0x00000071u; // 801D8988
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D898C
  c->lr=0x801D8994u; f_80212260(c); // 801D8990
L_801D8994:;
  c->r[3]=0u+0x00000001u; // 801D8994
L_801D8998:;
  c->r[11]=c->r[1]+0x00000080u; // 801D8998
  c->lr=0x801D89A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D899C
  c->r[0]=R32(c->r[1]+0x00000084u); // 801D89A0
  c->lr=c->r[0]; // 801D89A4
  c->r[1]=c->r[1]+0x00000080u; // 801D89A8
  return; // 801D89AC
}

// fn_801D89B0
void f_801D89B0(Ctx* __restrict c) {
  trace_call(0x801D89B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D89B0
  c->r[0]=c->lr; // 801D89B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D89B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D89BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D89C0
  cmps(c,0,(int32_t)c->r[0],0); // 801D89C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D89C8
  c->r[30]=c->r[3]|c->r[3]; // 801D89CC
  if (!crb(c,2)) { goto L_801D89DC; } // 801D89D0
  c->r[3]=0u+0x00000000u; // 801D89D4
  goto L_801D8A3C; // 801D89D8
L_801D89DC:;
  if (!crb(c,2)) { goto L_801D89FC; } // 801D89DC
  c->r[3]=0u+0x803A0000u; // 801D89E0
  c->r[5]=0u+0x803A0000u; // 801D89E4
  c->r[3]=c->r[3]+0x00002970u; // 801D89E8
  c->r[4]=0u+0x0000008Eu; // 801D89EC
  c->r[5]=c->r[5]+0x00002AC8u; // 801D89F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D89F4
  c->lr=0x801D89FCu; f_80212260(c); // 801D89F8
L_801D89FC:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 801D89FC
  c->r[0]=R8(c->r[30]+0x00000011u); // 801D8A00
  c->r[31]=c->r[30]+0x00000008u; // 801D8A04
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A08
  if (crb(c,2)) { goto L_801D8A28; } // 801D8A0C
  c->r[5]=0u+0x803A0000u; // 801D8A10
  c->r[3]=c->r[13]+0xFFFFAE38u; // 801D8A14
  c->r[5]=c->r[5]+0x00002D88u; // 801D8A18
  c->r[4]=0u+0x0000008Du; // 801D8A1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8A20
  c->lr=0x801D8A28u; f_80212260(c); // 801D8A24
L_801D8A28:;
  c->r[3]=R8(c->r[30]+0x00000010u); // 801D8A28
  c->r[5]=c->r[31]|c->r[31]; // 801D8A2C
  c->r[4]=R32(c->r[30]+0x00000014u); // 801D8A30
  c->lr=0x801D8A38u; f_801E15A0(c); // 801D8A34
  c->r[3]=R8(c->r[3]+0x00000000u); // 801D8A38
L_801D8A3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8A3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8A40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D8A44
  c->lr=c->r[0]; // 801D8A48
  c->r[1]=c->r[1]+0x00000010u; // 801D8A4C
  return; // 801D8A50
}

// fn_801D8A60
void f_801D8A60(Ctx* __restrict c) {
  trace_call(0x801D8A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8A60
  c->r[0]=c->lr; // 801D8A64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8A68
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8A6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8A70
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A74
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8A78
  c->r[30]=c->r[3]|c->r[3]; // 801D8A7C
  if (!crb(c,2)) { goto L_801D8A8C; } // 801D8A80
  c->r[3]=0u+0x00000000u; // 801D8A84
  goto L_801D8AEC; // 801D8A88
L_801D8A8C:;
  if (!crb(c,2)) { goto L_801D8AAC; } // 801D8A8C
  c->r[3]=0u+0x803A0000u; // 801D8A90
  c->r[5]=0u+0x803A0000u; // 801D8A94
  c->r[3]=c->r[3]+0x00002970u; // 801D8A98
  c->r[4]=0u+0x000000A3u; // 801D8A9C
  c->r[5]=c->r[5]+0x00002AC8u; // 801D8AA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8AA4
  c->lr=0x801D8AACu; f_80212260(c); // 801D8AA8
L_801D8AAC:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 801D8AAC
  c->r[0]=R8(c->r[30]+0x00000019u); // 801D8AB0
  c->r[31]=c->r[30]+0x00000008u; // 801D8AB4
  cmps(c,0,(int32_t)c->r[0],0); // 801D8AB8
  if (crb(c,2)) { goto L_801D8AD8; } // 801D8ABC
  c->r[5]=0u+0x803A0000u; // 801D8AC0
  c->r[3]=c->r[13]+0xFFFFAE30u; // 801D8AC4
  c->r[5]=c->r[5]+0x00002D60u; // 801D8AC8
  c->r[4]=0u+0x0000008Du; // 801D8ACC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8AD0
  c->lr=0x801D8AD8u; f_80212260(c); // 801D8AD4
L_801D8AD8:;
  c->r[3]=R8(c->r[30]+0x00000018u); // 801D8AD8
  c->r[5]=c->r[31]|c->r[31]; // 801D8ADC
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 801D8AE0
  c->lr=0x801D8AE8u; f_801E15A0(c); // 801D8AE4
  c->r[3]=R8(c->r[3]+0x00000000u); // 801D8AE8
L_801D8AEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8AEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8AF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D8AF4
  c->lr=c->r[0]; // 801D8AF8
  c->r[1]=c->r[1]+0x00000010u; // 801D8AFC
  return; // 801D8B00
}

// fn_801D8B10
void f_801D8B10(Ctx* __restrict c) {
  trace_call(0x801D8B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8B10
  c->r[0]=c->lr; // 801D8B14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8B18
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8B1C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8B20
  if (!crb(c,2)) { goto L_801D8B30; } // 801D8B24
  c->r[3]=0u+0x00000000u; // 801D8B28
  goto L_801D8B3C; // 801D8B2C
L_801D8B30:;
  c->r[3]=c->r[3]+0x00000004u; // 801D8B30
  c->lr=0x801D8B38u; f_801D8100(c); // 801D8B34
  c->r[3]=0u+0x00000001u; // 801D8B38
L_801D8B3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8B3C
  c->lr=c->r[0]; // 801D8B40
  c->r[1]=c->r[1]+0x00000010u; // 801D8B44
  return; // 801D8B48
}

// fn_801D8B50
void f_801D8B50(Ctx* __restrict c) {
  trace_call(0x801D8B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8B50
  c->r[0]=c->lr; // 801D8B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8B58
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8B5C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8B60
  if (!crb(c,2)) { goto L_801D8B70; } // 801D8B64
  c->r[3]=0u+0x00000000u; // 801D8B68
  goto L_801D8B7C; // 801D8B6C
L_801D8B70:;
  c->r[3]=c->r[3]+0x00000004u; // 801D8B70
  c->lr=0x801D8B78u; f_801D82F0(c); // 801D8B74
  c->r[3]=0u+0x00000001u; // 801D8B78
L_801D8B7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8B7C
  c->lr=c->r[0]; // 801D8B80
  c->r[1]=c->r[1]+0x00000010u; // 801D8B84
  return; // 801D8B88
}

// fn_801D8B90
void f_801D8B90(Ctx* __restrict c) {
  trace_call(0x801D8B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8B90
  c->r[0]=c->lr; // 801D8B94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8B98
  c->r[11]=c->r[1]+0x00000020u; // 801D8B9C
  c->lr=0x801D8BA4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D8BA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8BA4
  c->r[28]=0u+0x803A0000u; // 801D8BA8
  c->r[29]=c->r[3]|c->r[3]; // 801D8BAC
  c->r[30]=c->r[4]|c->r[4]; // 801D8BB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D8BB4
  c->r[31]=c->r[5]|c->r[5]; // 801D8BB8
  c->r[26]=c->r[6]|c->r[6]; // 801D8BBC
  c->r[28]=c->r[28]+0x00002970u; // 801D8BC0
  if (!crb(c,2)) { goto L_801D8BD0; } // 801D8BC4
  c->r[3]=0u+0x00000000u; // 801D8BC8
  goto L_801D8DB8; // 801D8BCC
L_801D8BD0:;
  if (!crb(c,2)) { goto L_801D8BE8; } // 801D8BD0
  c->r[3]=c->r[28]+0x00000000u; // 801D8BD4
  c->r[5]=c->r[28]+0x00000158u; // 801D8BD8
  c->r[4]=0u+0x00000121u; // 801D8BDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8BE0
  c->lr=0x801D8BE8u; f_80212260(c); // 801D8BE4
L_801D8BE8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D8BE8
  if (!crb(c,2)) { goto L_801D8C04; } // 801D8BEC
  c->r[3]=c->r[28]+0x00000000u; // 801D8BF0
  c->r[5]=c->r[28]+0x000002C4u; // 801D8BF4
  c->r[4]=0u+0x00000122u; // 801D8BF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8BFC
  c->lr=0x801D8C04u; f_80212260(c); // 801D8C00
L_801D8C04:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D8C04
  if (!crb(c,2)) { goto L_801D8C20; } // 801D8C08
  c->r[3]=c->r[28]+0x00000000u; // 801D8C0C
  c->r[5]=c->r[28]+0x000002F0u; // 801D8C10
  c->r[4]=0u+0x00000123u; // 801D8C14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8C18
  c->lr=0x801D8C20u; f_80212260(c); // 801D8C1C
L_801D8C20:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 801D8C20
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D8C24
  c->r[27]=c->r[3]+0x00000008u; // 801D8C28
  cmps(c,0,(int32_t)c->r[0],0); // 801D8C2C
  if (crb(c,2)) { goto L_801D8C4C; } // 801D8C30
  c->r[5]=0u+0x803A0000u; // 801D8C34
  c->r[3]=c->r[13]+0xFFFFAE40u; // 801D8C38
  c->r[5]=c->r[5]+0x00002DB0u; // 801D8C3C
  c->r[4]=0u+0x0000008Du; // 801D8C40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8C44
  c->lr=0x801D8C4Cu; f_80212260(c); // 801D8C48
L_801D8C4C:;
  c->r[3]=R8(c->r[27]+0x00000000u); // 801D8C4C
  c->r[5]=c->r[27]|c->r[27]; // 801D8C50
  c->r[4]=R32(c->r[27]+0x00000004u); // 801D8C54
  c->lr=0x801D8C5Cu; f_801E15A0(c); // 801D8C58
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D8C5C
  cmpu(c,0,c->r[0],0x00000002u); // 801D8C60
  if (!crb(c,2)) { goto L_801D8DB4; } // 801D8C64
  c->r[28]=R32(c->r[29]+0x00000008u); // 801D8C68
  c->r[0]=R8(c->r[28]+0x00000019u); // 801D8C6C
  c->r[27]=c->r[28]+0x00000008u; // 801D8C70
  cmps(c,0,(int32_t)c->r[0],0); // 801D8C74
  if (crb(c,2)) { goto L_801D8C94; } // 801D8C78
  c->r[5]=0u+0x803A0000u; // 801D8C7C
  c->r[3]=c->r[13]+0xFFFFAE30u; // 801D8C80
  c->r[5]=c->r[5]+0x00002D60u; // 801D8C84
  c->r[4]=0u+0x0000008Du; // 801D8C88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8C8C
  c->lr=0x801D8C94u; f_80212260(c); // 801D8C90
L_801D8C94:;
  c->r[3]=R8(c->r[28]+0x00000018u); // 801D8C94
  c->r[5]=c->r[27]|c->r[27]; // 801D8C98
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801D8C9C
  c->lr=0x801D8CA4u; f_801E15A0(c); // 801D8CA0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D8CA4
  c->r[28]=c->r[3]|c->r[3]; // 801D8CA8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801D8CAC
  if (!crb(c,0)) { goto L_801D8DB4; } // 801D8CB0
  c->r[26]=rotl(c->r[26],3)&0xFFFFFFF8u; // 801D8CB4
  c->r[4]=R32(c->r[29]+0x00000008u); // 801D8CB8
  c->r[3]=c->r[3]+c->r[26]; // 801D8CBC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D8CC0
  c->r[27]=c->r[4]+0x00000008u; // 801D8CC4
  cmps(c,0,(int32_t)c->r[0],0); // 801D8CC8
  if (crb(c,2)) { goto L_801D8CE8; } // 801D8CCC
  c->r[5]=0u+0x803A0000u; // 801D8CD0
  c->r[3]=c->r[13]+0xFFFFAE10u; // 801D8CD4
  c->r[5]=c->r[5]+0x00002CC0u; // 801D8CD8
  c->r[4]=0u+0x0000008Du; // 801D8CDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8CE0
  c->lr=0x801D8CE8u; f_80212260(c); // 801D8CE4
L_801D8CE8:;
  c->r[4]=c->r[28]+c->r[26]; // 801D8CE8
  c->r[5]=c->r[27]|c->r[27]; // 801D8CEC
  c->r[3]=R8(c->r[4]+0x00000004u); // 801D8CF0
  c->r[4]=R32(c->r[4]+0x00000008u); // 801D8CF4
  c->lr=0x801D8CFCu; f_801E15A0(c); // 801D8CF8
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D8CFC
  c->r[28]=c->r[3]|c->r[3]; // 801D8D00
  c->r[3]=R32(c->r[29]+0x00000008u); // 801D8D04
  cmps(c,0,(int32_t)c->r[0],0); // 801D8D08
  c->r[29]=c->r[3]+0x00000008u; // 801D8D0C
  if (crb(c,2)) { goto L_801D8D2C; } // 801D8D10
  c->r[5]=0u+0x803A0000u; // 801D8D14
  c->r[3]=c->r[13]+0xFFFFAE18u; // 801D8D18
  c->r[5]=c->r[5]+0x00002CE8u; // 801D8D1C
  c->r[4]=0u+0x0000008Du; // 801D8D20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8D24
  c->lr=0x801D8D2Cu; f_80212260(c); // 801D8D28
L_801D8D2C:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 801D8D2C
  c->r[5]=c->r[29]|c->r[29]; // 801D8D30
  c->r[4]=R32(c->r[28]+0x00000004u); // 801D8D34
  c->lr=0x801D8D3Cu; f_801E15A0(c); // 801D8D38
  c->r[4]=R32(c->r[3]+0x00000000u); // 801D8D3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8D40
  W32(c->r[30]+0x00000004u,c->r[0]); // 801D8D44
  W32(c->r[30]+0x00000000u,c->r[4]); // 801D8D48
  c->r[4]=R32(c->r[3]+0x00000008u); // 801D8D4C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D8D50
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D8D54
  W32(c->r[30]+0x00000008u,c->r[4]); // 801D8D58
  c->r[4]=R32(c->r[3]+0x00000010u); // 801D8D5C
  c->r[0]=R32(c->r[3]+0x00000014u); // 801D8D60
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D8D64
  W32(c->r[30]+0x00000010u,c->r[4]); // 801D8D68
  c->r[4]=R32(c->r[3]+0x00000018u); // 801D8D6C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801D8D70
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801D8D74
  W32(c->r[30]+0x00000018u,c->r[4]); // 801D8D78
  c->r[0]=R16(c->r[3]+0x00000020u); // 801D8D7C
  W16(c->r[30]+0x00000020u,c->r[0]); // 801D8D80
  c->r[0]=R16(c->r[3]+0x00000022u); // 801D8D84
  W16(c->r[30]+0x00000022u,c->r[0]); // 801D8D88
  c->r[0]=R16(c->r[3]+0x00000024u); // 801D8D8C
  W16(c->r[30]+0x00000024u,c->r[0]); // 801D8D90
  c->r[0]=R16(c->r[3]+0x00000026u); // 801D8D94
  W16(c->r[30]+0x00000026u,c->r[0]); // 801D8D98
  c->r[0]=R16(c->r[3]+0x00000028u); // 801D8D9C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801D8DA0
  c->r[0]=R16(c->r[3]+0x0000002Au); // 801D8DA4
  W16(c->r[31]+0x00000002u,c->r[0]); // 801D8DA8
  c->r[0]=R16(c->r[3]+0x0000002Cu); // 801D8DAC
  W16(c->r[31]+0x00000004u,c->r[0]); // 801D8DB0
L_801D8DB4:;
  c->r[3]=0u+0x00000001u; // 801D8DB4
L_801D8DB8:;
  c->r[11]=c->r[1]+0x00000020u; // 801D8DB8
  c->lr=0x801D8DC0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D8DBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8DC0
  c->lr=c->r[0]; // 801D8DC4
  c->r[1]=c->r[1]+0x00000020u; // 801D8DC8
  return; // 801D8DCC
}

// fn_801D8DD0
void f_801D8DD0(Ctx* __restrict c) {
  trace_call(0x801D8DD0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801D8DD0
  c->r[12]=c->r[1]|c->r[1]; // 801D8DD4
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 801D8DD8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8DDC
  c->r[0]=c->lr; // 801D8DE0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801D8DE4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801D8DE8
  c->r[31]=c->r[7]|c->r[7]; // 801D8DEC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801D8DF0
  c->r[30]=c->r[5]|c->r[5]; // 801D8DF4
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 801D8DF8
  c->r[29]=c->r[4]|c->r[4]; // 801D8DFC
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 801D8E00
  c->r[28]=c->r[3]|c->r[3]; // 801D8E04
  c->r[8]=R32(c->r[3]+0x00000004u); // 801D8E08
  c->r[0]=0u-c->r[8]; // 801D8E0C
  c->r[0]=c->r[0]|c->r[8]; // 801D8E10
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801D8E14
  if (!crb(c,2)) { goto L_801D8E24; } // 801D8E18
  c->r[3]=0u+0x00000000u; // 801D8E1C
  goto L_801D8F88; // 801D8E20
L_801D8E24:;
  if (crb(c,2)) { goto L_801D8E30; } // 801D8E24
  c->r[4]=R32(c->r[8]+0x00000018u); // 801D8E28
  goto L_801D8E34; // 801D8E2C
L_801D8E30:;
  c->r[4]=0u+0x00000000u; // 801D8E30
L_801D8E34:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 801D8E34
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D8E38
  c->r[5]=0u+0x00000000u; // 801D8E3C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D8E40
  c->r[12]=R32(c->r[12]+0x00000044u); // 801D8E44
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D8E48
  c->r[4]=c->r[4]+c->r[0]; // 801D8E4C
  c->r[4]=c->r[4]+0x00000008u; // 801D8E50
  c->ctr=c->r[12]; // 801D8E54
  if (true) { c->lr=0x801D8E5Cu; dispatch(c,c->ctr); } // 801D8E58
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D8E5C
  cmpu(c,0,c->r[0],0x00000020u); // 801D8E60
  if (!crb(c,1)) { goto L_801D8E84; } // 801D8E64
  c->r[3]=0u+0x803A0000u; // 801D8E68
  c->r[5]=0u+0x803A0000u; // 801D8E6C
  c->r[3]=c->r[3]+0x00002970u; // 801D8E70
  c->r[4]=0u+0x000001F3u; // 801D8E74
  c->r[5]=c->r[5]+0x00002C90u; // 801D8E78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D8E7C
  c->lr=0x801D8E84u; f_80212260(c); // 801D8E80
L_801D8E84:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 801D8E84
  c->r[4]=c->r[1]+0x00000020u; // 801D8E88
  c->r[5]=0u+0x00000020u; // 801D8E8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D8E90
  c->r[12]=R32(c->r[12]+0x00000014u); // 801D8E94
  c->ctr=c->r[12]; // 801D8E98
  if (true) { c->lr=0x801D8EA0u; dispatch(c,c->ctr); } // 801D8E9C
  cmpu(c,0,c->r[3],0x00000020u); // 801D8EA0
  if (crb(c,2)) { goto L_801D8EB0; } // 801D8EA4
  c->r[3]=0u+0x00000000u; // 801D8EA8
  goto L_801D8F88; // 801D8EAC
L_801D8EB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D8EB0
  c->r[6]=c->r[1]+0x00000020u; // 801D8EB4
  c->r[3]=0u+0x00000000u; // 801D8EB8
  c->r[4]=0u+0x00000000u; // 801D8EBC
  if (!crb(c,1)) { goto L_801D8F84; } // 801D8EC0
  c->r[0]=rotl(c->r[31],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801D8EC4
  c->ctr=c->r[0]; // 801D8EC8
  if (crb(c,2)) { goto L_801D8F5C; } // 801D8ECC
L_801D8ED0:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 801D8ED0
  c->r[0]=c->r[4]+0x00000001u; // 801D8ED4
  W16(c->r[29]+c->r[4],c->r[5]); // 801D8ED8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D8EDC
  c->r[3]=c->r[3]+0x00000004u; // 801D8EE0
  c->r[0]=R16(c->r[6]+c->r[0]); // 801D8EE4
  W16(c->r[30]+c->r[4],c->r[0]); // 801D8EE8
  c->r[0]=c->r[4]+0x00000003u; // 801D8EEC
  c->r[4]=c->r[4]+0x00000002u; // 801D8EF0
  c->r[5]=R16(c->r[6]+c->r[3]); // 801D8EF4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D8EF8
  W16(c->r[29]+c->r[4],c->r[5]); // 801D8EFC
  c->r[3]=c->r[3]+0x00000004u; // 801D8F00
  c->r[0]=R16(c->r[6]+c->r[0]); // 801D8F04
  W16(c->r[30]+c->r[4],c->r[0]); // 801D8F08
  c->r[0]=c->r[4]+0x00000003u; // 801D8F0C
  c->r[4]=c->r[4]+0x00000002u; // 801D8F10
  c->r[5]=R16(c->r[6]+c->r[3]); // 801D8F14
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D8F18
  W16(c->r[29]+c->r[4],c->r[5]); // 801D8F1C
  c->r[3]=c->r[3]+0x00000004u; // 801D8F20
  c->r[0]=R16(c->r[6]+c->r[0]); // 801D8F24
  W16(c->r[30]+c->r[4],c->r[0]); // 801D8F28
  c->r[0]=c->r[4]+0x00000003u; // 801D8F2C
  c->r[4]=c->r[4]+0x00000002u; // 801D8F30
  c->r[5]=R16(c->r[6]+c->r[3]); // 801D8F34
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D8F38
  W16(c->r[29]+c->r[4],c->r[5]); // 801D8F3C
  c->r[3]=c->r[3]+0x00000004u; // 801D8F40
  c->r[0]=R16(c->r[6]+c->r[0]); // 801D8F44
  W16(c->r[30]+c->r[4],c->r[0]); // 801D8F48
  c->r[4]=c->r[4]+0x00000002u; // 801D8F4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8ED0; } // 801D8F50
  c->r[31]=c->r[31]&0x00000003u; cr0(c,c->r[31]); // 801D8F54
  if (crb(c,2)) { goto L_801D8F84; } // 801D8F58
L_801D8F5C:;
  c->ctr=c->r[31]; // 801D8F5C
L_801D8F60:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 801D8F60
  c->r[0]=c->r[4]+0x00000001u; // 801D8F64
  W16(c->r[29]+c->r[4],c->r[5]); // 801D8F68
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D8F6C
  c->r[3]=c->r[3]+0x00000004u; // 801D8F70
  c->r[0]=R16(c->r[6]+c->r[0]); // 801D8F74
  W16(c->r[30]+c->r[4],c->r[0]); // 801D8F78
  c->r[4]=c->r[4]+0x00000002u; // 801D8F7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8F60; } // 801D8F80
L_801D8F84:;
  c->r[3]=0u+0x00000001u; // 801D8F84
L_801D8F88:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D8F88
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D8F8C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801D8F90
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801D8F94
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 801D8F98
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 801D8F9C
  c->lr=c->r[0]; // 801D8FA0
  c->r[1]=c->r[10]|c->r[10]; // 801D8FA4
  return; // 801D8FA8
}

// fn_801D8FB0
void f_801D8FB0(Ctx* __restrict c) {
  trace_call(0x801D8FB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8FB0
  c->r[0]=c->lr; // 801D8FB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8FB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8FBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8FC0
  c->r[30]=c->r[3]|c->r[3]; // 801D8FC4
  c->lr=0x801D8FCCu; f_801BB440(c); // 801D8FC8
  c->r[6]=0u+0x803A0000u; // 801D8FCC
  c->r[31]=0u+0x00000000u; // 801D8FD0
  c->r[6]=c->r[6]+0x00003360u; // 801D8FD4
  c->r[8]=0u+0x803A0000u; // 801D8FD8
  c->r[9]=c->r[30]+0x00000178u; // 801D8FDC
  c->r[4]=0u+0x801E0000u; // 801D8FE0
  c->r[0]=c->r[6]+0x00000024u; // 801D8FE4
  c->r[8]=c->r[8]+0x000033C0u; // 801D8FE8
  c->r[5]=0u+0x801E0000u; // 801D8FEC
  W32(c->r[30]+0x00000000u,c->r[6]); // 801D8FF0
  c->r[3]=c->r[30]+0x00000184u; // 801D8FF4
  c->r[4]=c->r[4]+0xFFFFBD70u; // 801D8FF8
  W32(c->r[30]+0x000000B4u,c->r[31]); // 801D8FFC
  c->r[5]=c->r[5]+0xFFFF9130u; // 801D9000
  c->r[6]=0u+0x00000034u; // 801D9004
  c->r[7]=0u+0x00000020u; // 801D9008
  W32(c->r[30]+0x000000B8u,c->r[31]); // 801D900C
  W32(c->r[30]+0x000000BCu,c->r[0]); // 801D9010
  W8(c->r[30]+0x00000100u,c->r[31]); // 801D9014
  W8(c->r[30]+0x00000101u,c->r[31]); // 801D9018
  W32(c->r[30]+0x00000158u,c->r[31]); // 801D901C
  W32(c->r[30]+0x0000015Cu,c->r[31]); // 801D9020
  W8(c->r[30]+0x00000160u,c->r[31]); // 801D9024
  W32(c->r[30]+0x00000154u,c->r[8]); // 801D9028
  W32(c->r[30]+0x00000164u,c->r[31]); // 801D902C
  W32(c->r[30]+0x00000168u,c->r[31]); // 801D9030
  W32(c->r[30]+0x00000170u,c->r[31]); // 801D9034
  W32(c->r[30]+0x00000174u,c->r[31]); // 801D9038
  W32(c->r[30]+0x00000178u,c->r[9]); // 801D903C
  W32(c->r[30]+0x0000017Cu,c->r[9]); // 801D9040
  W32(c->r[30]+0x00000180u,c->r[31]); // 801D9044
  c->lr=0x801D904Cu; f_802E66A0(c); // 801D9048
  W32(c->r[30]+0x00000808u,c->r[31]); // 801D904C
  c->r[0]=R8(c->r[13]+0xFFFFC468u); // 801D9050
  cmps(c,0,(int32_t)c->r[0],0); // 801D9054
  if (!crb(c,2)) { goto L_801D9070; } // 801D9058
  c->r[3]=0u+0x805C0000u; // 801D905C
  c->r[3]=c->r[3]+0x00006CA0u; // 801D9060
  c->lr=0x801D9068u; f_80126D80(c); // 801D9064
  c->r[0]=0u+0x00000001u; // 801D9068
  W8(c->r[13]+0xFFFFC468u,c->r[0]); // 801D906C
L_801D9070:;
  c->r[3]=c->r[30]+0x00000180u; // 801D9070
  c->r[4]=c->r[30]+0x00000184u; // 801D9074
  c->r[5]=0u+0x00000680u; // 801D9078
  c->r[6]=0u+0x00000034u; // 801D907C
  c->lr=0x801D9084u; f_801C5E30(c); // 801D9080
  cmpu(c,0,c->r[3],0x00000020u); // 801D9084
  if (crb(c,2)) { goto L_801D90A8; } // 801D9088
  c->r[3]=0u+0x803A0000u; // 801D908C
  c->r[5]=0u+0x803A0000u; // 801D9090
  c->r[3]=c->r[3]+0x00002DD8u; // 801D9094
  c->r[4]=0u+0x00000046u; // 801D9098
  c->r[5]=c->r[5]+0x00002DECu; // 801D909C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D90A0
  c->lr=0x801D90A8u; f_80212260(c); // 801D90A4
L_801D90A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801D90A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D90AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D90B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D90B4
  c->lr=c->r[0]; // 801D90B8
  c->r[1]=c->r[1]+0x00000010u; // 801D90BC
  return; // 801D90C0
}

// fn_801D90D0
void f_801D90D0(Ctx* __restrict c) {
  trace_call(0x801D90D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D90D0
  c->r[0]=c->lr; // 801D90D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D90D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D90DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D90E0
  c->r[31]=c->r[4]|c->r[4]; // 801D90E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D90E8
  c->r[30]=c->r[3]|c->r[3]; // 801D90EC
  if (crb(c,2)) { goto L_801D910C; } // 801D90F0
  c->r[4]=0u+0x00000000u; // 801D90F4
  c->lr=0x801D90FCu; f_801DC9B0(c); // 801D90F8
  cmps(c,0,(int32_t)c->r[31],0); // 801D90FC
  if (!crb(c,1)) { goto L_801D910C; } // 801D9100
  c->r[3]=c->r[30]|c->r[30]; // 801D9104
  c->lr=0x801D910Cu; f_802E61AC(c); // 801D9108
L_801D910C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D910C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9110
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D9114
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9118
  c->lr=c->r[0]; // 801D911C
  c->r[1]=c->r[1]+0x00000010u; // 801D9120
  return; // 801D9124
}

// fn_801D9130
void f_801D9130(Ctx* __restrict c) {
  trace_call(0x801D9130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9130
  c->r[0]=c->lr; // 801D9134
  cmps(c,0,(int32_t)c->r[3],0); // 801D9138
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D913C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9140
  c->r[31]=c->r[4]|c->r[4]; // 801D9144
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9148
  c->r[30]=c->r[3]|c->r[3]; // 801D914C
  if (crb(c,2)) { goto L_801D916C; } // 801D9150
  c->r[4]=0u+0x00000000u; // 801D9154
  c->lr=0x801D915Cu; f_801DC9B0(c); // 801D9158
  cmps(c,0,(int32_t)c->r[31],0); // 801D915C
  if (!crb(c,1)) { goto L_801D916C; } // 801D9160
  c->r[3]=c->r[30]|c->r[30]; // 801D9164
  c->lr=0x801D916Cu; f_802E61AC(c); // 801D9168
L_801D916C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D916C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9170
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D9174
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9178
  c->lr=c->r[0]; // 801D917C
  c->r[1]=c->r[1]+0x00000010u; // 801D9180
  return; // 801D9184
}

// fn_801D9190
void f_801D9190(Ctx* __restrict c) {
  trace_call(0x801D9190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9190
  c->r[0]=c->lr; // 801D9194
  cmps(c,0,(int32_t)c->r[3],0); // 801D9198
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D919C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D91A0
  c->r[31]=c->r[4]|c->r[4]; // 801D91A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D91A8
  c->r[30]=c->r[3]|c->r[3]; // 801D91AC
  if (crb(c,2)) { goto L_801D929C; } // 801D91B0
  c->r[12]=0u+0x803A0000u; // 801D91B4
  c->r[12]=c->r[12]+0x00003360u; // 801D91B8
  W32(c->r[3]+0x00000000u,c->r[12]); // 801D91BC
  c->r[0]=c->r[12]+0x00000024u; // 801D91C0
  W32(c->r[3]+0x000000BCu,c->r[0]); // 801D91C4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D91C8
  c->ctr=c->r[12]; // 801D91CC
  if (true) { c->lr=0x801D91D4u; dispatch(c,c->ctr); } // 801D91D0
  c->lr=0x801D91D8u; f_801D76C0(c); // 801D91D4
  c->r[3]=c->r[3]+0x00000354u; // 801D91D8
  c->lr=0x801D91E0u; f_80126DC0(c); // 801D91DC
  c->r[0]=R8(c->r[30]+0x00000100u); // 801D91E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D91E4
  if (!crb(c,2)) { goto L_801D91FC; } // 801D91E8
  c->lr=0x801D91F0u; f_801D76C0(c); // 801D91EC
  c->r[3]=c->r[3]+0x00000354u; // 801D91F0
  c->lr=0x801D91F8u; f_80126EA0(c); // 801D91F4
  goto L_801D9254; // 801D91F8
L_801D91FC:;
  c->r[0]=0u+0x00000000u; // 801D91FC
  W32(c->r[30]+0x00000804u,c->r[0]); // 801D9200
  c->r[3]=c->r[30]+0x00000180u; // 801D9204
  c->lr=0x801D920Cu; f_801C6050(c); // 801D9208
  cmps(c,0,(int32_t)c->r[3],32); // 801D920C
  if (crb(c,2)) { goto L_801D9230; } // 801D9210
  c->r[3]=0u+0x803A0000u; // 801D9214
  c->r[5]=0u+0x803A0000u; // 801D9218
  c->r[3]=c->r[3]+0x00002DD8u; // 801D921C
  c->r[4]=0u+0x000000BFu; // 801D9220
  c->r[5]=c->r[5]+0x00002E28u; // 801D9224
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9228
  c->lr=0x801D9230u; f_80212260(c); // 801D922C
L_801D9230:;
  c->r[3]=c->r[30]+0x00000180u; // 801D9230
  c->r[4]=c->r[30]+0x00000184u; // 801D9234
  c->r[5]=0u+0x00000680u; // 801D9238
  c->lr=0x801D9240u; f_801C5FA0(c); // 801D923C
  c->r[0]=0u+0x00000000u; // 801D9240
  W8(c->r[30]+0x00000100u,c->r[0]); // 801D9244
  c->lr=0x801D924Cu; f_801D76C0(c); // 801D9248
  c->r[3]=c->r[3]+0x00000354u; // 801D924C
  c->lr=0x801D9254u; f_80126EA0(c); // 801D9250
L_801D9254:;
  c->r[4]=0u+0x801E0000u; // 801D9254
  c->r[3]=c->r[30]+0x00000184u; // 801D9258
  c->r[4]=c->r[4]+0xFFFF9130u; // 801D925C
  c->r[5]=0u+0x00000034u; // 801D9260
  c->r[6]=0u+0x00000020u; // 801D9264
  c->lr=0x801D926Cu; f_802E6798(c); // 801D9268
  c->r[3]=addc(c,c->r[30],0x00000174u,0); cr0(c,c->r[3]); // 801D926C
  if (crb(c,2)) { goto L_801D927C; } // 801D9270
  c->r[4]=0u+0x00000000u; // 801D9274
  c->lr=0x801D927Cu; f_801E4130(c); // 801D9278
L_801D927C:;
  c->r[3]=addc(c,c->r[30],0x00000154u,0); cr0(c,c->r[3]); // 801D927C
  if (crb(c,2)) { goto L_801D928C; } // 801D9280
  c->r[4]=0u+0x00000000u; // 801D9284
  c->lr=0x801D928Cu; f_801DC9B0(c); // 801D9288
L_801D928C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D928C
  if (!crb(c,1)) { goto L_801D929C; } // 801D9290
  c->r[3]=c->r[30]|c->r[30]; // 801D9294
  c->lr=0x801D929Cu; f_802E61AC(c); // 801D9298
L_801D929C:;
  c->r[3]=c->r[30]|c->r[30]; // 801D929C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D92A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D92A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D92A8
  c->lr=c->r[0]; // 801D92AC
  c->r[1]=c->r[1]+0x00000010u; // 801D92B0
  return; // 801D92B4
}

// fn_801D92C0
void f_801D92C0(Ctx* __restrict c) {
  trace_call(0x801D92C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D92C0
  c->r[0]=c->lr; // 801D92C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D92C8
  c->r[11]=c->r[1]+0x00000020u; // 801D92CC
  c->lr=0x801D92D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D92D0
  c->r[29]=0u+0x803A0000u; // 801D92D4
  c->r[31]=c->r[3]|c->r[3]; // 801D92D8
  c->r[30]=c->r[4]|c->r[4]; // 801D92DC
  c->r[26]=c->r[5]|c->r[5]; // 801D92E0
  c->r[28]=c->r[6]|c->r[6]; // 801D92E4
  c->r[27]=c->r[7]|c->r[7]; // 801D92E8
  c->r[29]=c->r[29]+0x00002DD8u; // 801D92EC
  c->lr=0x801D92F4u; f_801D76C0(c); // 801D92F0
  c->r[3]=c->r[3]+0x00000354u; // 801D92F4
  c->lr=0x801D92FCu; f_80126DC0(c); // 801D92F8
  cmps(c,0,(int32_t)c->r[30],0); // 801D92FC
  if (!crb(c,2)) { goto L_801D9318; } // 801D9300
  c->r[3]=c->r[29]+0x00000000u; // 801D9304
  c->r[5]=c->r[29]+0x000000A0u; // 801D9308
  c->r[4]=0u+0x00000069u; // 801D930C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9310
  c->lr=0x801D9318u; f_80212260(c); // 801D9314
L_801D9318:;
  c->r[0]=R8(c->r[31]+0x00000100u); // 801D9318
  cmps(c,0,(int32_t)c->r[0],0); // 801D931C
  if (crb(c,2)) { goto L_801D93B0; } // 801D9320
  c->r[12]=R32(c->r[31]+0x00000000u); // 801D9324
  c->r[3]=c->r[31]|c->r[31]; // 801D9328
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D932C
  c->ctr=c->r[12]; // 801D9330
  if (true) { c->lr=0x801D9338u; dispatch(c,c->ctr); } // 801D9334
  c->lr=0x801D933Cu; f_801D76C0(c); // 801D9338
  c->r[3]=c->r[3]+0x00000354u; // 801D933C
  c->lr=0x801D9344u; f_80126DC0(c); // 801D9340
  c->r[0]=R8(c->r[31]+0x00000100u); // 801D9344
  cmps(c,0,(int32_t)c->r[0],0); // 801D9348
  if (!crb(c,2)) { goto L_801D9360; } // 801D934C
  c->lr=0x801D9354u; f_801D76C0(c); // 801D9350
  c->r[3]=c->r[3]+0x00000354u; // 801D9354
  c->lr=0x801D935Cu; f_80126EA0(c); // 801D9358
  goto L_801D93B0; // 801D935C
L_801D9360:;
  c->r[0]=0u+0x00000000u; // 801D9360
  W32(c->r[31]+0x00000804u,c->r[0]); // 801D9364
  c->r[3]=c->r[31]+0x00000180u; // 801D9368
  c->lr=0x801D9370u; f_801C6050(c); // 801D936C
  cmps(c,0,(int32_t)c->r[3],32); // 801D9370
  if (crb(c,2)) { goto L_801D938C; } // 801D9374
  c->r[3]=c->r[29]+0x00000000u; // 801D9378
  c->r[5]=c->r[29]+0x00000050u; // 801D937C
  c->r[4]=0u+0x000000BFu; // 801D9380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9384
  c->lr=0x801D938Cu; f_80212260(c); // 801D9388
L_801D938C:;
  c->r[3]=c->r[31]+0x00000180u; // 801D938C
  c->r[4]=c->r[31]+0x00000184u; // 801D9390
  c->r[5]=0u+0x00000680u; // 801D9394
  c->lr=0x801D939Cu; f_801C5FA0(c); // 801D9398
  c->r[0]=0u+0x00000000u; // 801D939C
  W8(c->r[31]+0x00000100u,c->r[0]); // 801D93A0
  c->lr=0x801D93A8u; f_801D76C0(c); // 801D93A4
  c->r[3]=c->r[3]+0x00000354u; // 801D93A8
  c->lr=0x801D93B0u; f_80126EA0(c); // 801D93AC
L_801D93B0:;
  c->r[3]=c->r[31]|c->r[31]; // 801D93B0
  c->lr=0x801D93B8u; f_801D9DE0(c); // 801D93B4
  cmps(c,0,(int32_t)c->r[26],16); // 801D93B8
  c->r[0]=0u+0x00000010u; // 801D93BC
  if (crb(c,1)) { goto L_801D93C8; } // 801D93C0
  c->r[0]=c->r[26]|c->r[26]; // 801D93C4
L_801D93C8:;
  W32(c->r[31]+0x00000810u,c->r[0]); // 801D93C8
  c->r[4]=c->r[31]|c->r[31]; // 801D93CC
  c->r[26]=0u+0x00000000u; // 801D93D0
  c->r[0]=0u+0x00000001u; // 801D93D4
  goto L_801D9420; // 801D93D8
  c->r[0]=c->r[0]|0x00000000u; // 801D93DC
L_801D93E0:;
  c->r[3]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[3]); // 801D93E0
  if (crb(c,2)) { goto L_801D9414; } // 801D93E4
  cmps(c,0,(int32_t)c->r[26],8); // 801D93E8
  if (crb(c,0)) { goto L_801D9410; } // 801D93EC
  c->r[6]=c->r[26]|c->r[26]; // 801D93F0
  c->r[3]=c->r[29]+0x00000000u; // 801D93F4
  c->r[5]=c->r[29]+0x000000CCu; // 801D93F8
  c->r[4]=0u+0x00000085u; // 801D93FC
  c->r[7]=0u+0x00000007u; // 801D9400
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9404
  c->lr=0x801D940Cu; f_80212300(c); // 801D9408
  goto L_801D9428; // 801D940C
L_801D9410:;
  W8(c->r[4]+0x00000B58u,c->r[0]); // 801D9410
L_801D9414:;
  c->r[28]=rotl(c->r[28],31)&0x7FFFFFFFu; // 801D9414
  c->r[4]=c->r[4]+0x00000038u; // 801D9418
  c->r[26]=c->r[26]+0x00000001u; // 801D941C
L_801D9420:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D9420
  if (!crb(c,2)) { IRQCHK(c); goto L_801D93E0; } // 801D9424
L_801D9428:;
  cmps(c,0,(int32_t)c->r[26],8); // 801D9428
  c->r[0]=0u+0x00000008u; // 801D942C
  if (crb(c,1)) { goto L_801D9438; } // 801D9430
  c->r[0]=c->r[26]|c->r[26]; // 801D9434
L_801D9438:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D9438
  W32(c->r[31]+0x0000080Cu,c->r[0]); // 801D943C
  if (!crb(c,2)) { goto L_801D9458; } // 801D9440
  c->lr=0x801D9448u; f_801D76C0(c); // 801D9444
  c->r[3]=c->r[3]+0x00000354u; // 801D9448
  c->lr=0x801D9450u; f_80126EA0(c); // 801D944C
  c->r[3]=0u+0x00000002u; // 801D9450
  goto L_801D9530; // 801D9454
L_801D9458:;
  W32(c->r[31]+0x00000814u,c->r[27]); // 801D9458
  W32(c->r[31]+0x00000804u,c->r[30]); // 801D945C
  c->lr=0x801D9464u; f_801251B0(c); // 801D9460
  c->r[0]=R32(c->r[31]+0x00000810u); // 801D9464
  c->r[30]=c->r[3]|c->r[3]; // 801D9468
  cmps(c,0,(int32_t)c->r[0],0); // 801D946C
  if (!crb(c,1)) { goto L_801D9510; } // 801D9470
  c->r[28]=c->r[31]|c->r[31]; // 801D9474
  c->r[27]=0u+0x00000000u; // 801D9478
  goto L_801D94D4; // 801D947C
L_801D9480:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801D9480
  c->lr=0x801D9488u; f_801D7F20(c); // 801D9484
  cmps(c,0,(int32_t)c->r[3],0); // 801D9488
  if (!crb(c,2)) { goto L_801D94C8; } // 801D948C
  c->r[26]=c->r[31]|c->r[31]; // 801D9490
  c->r[28]=0u+0x00000000u; // 801D9494
  c->r[29]=0u+0x00000000u; // 801D9498
  goto L_801D94B8; // 801D949C
L_801D94A0:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801D94A0
  c->r[4]=R32(c->r[26]+0x00000818u); // 801D94A4
  c->lr=0x801D94ACu; f_801D8010(c); // 801D94A8
  W32(c->r[26]+0x00000818u,c->r[29]); // 801D94AC
  c->r[26]=c->r[26]+0x00000034u; // 801D94B0
  c->r[28]=c->r[28]+0x00000001u; // 801D94B4
L_801D94B8:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801D94B8
  if (crb(c,0)) { IRQCHK(c); goto L_801D94A0; } // 801D94BC
  c->r[0]=0u+0x00000000u; // 801D94C0
  goto L_801D94E4; // 801D94C4
L_801D94C8:;
  W32(c->r[28]+0x00000818u,c->r[3]); // 801D94C8
  c->r[28]=c->r[28]+0x00000034u; // 801D94CC
  c->r[27]=c->r[27]+0x00000001u; // 801D94D0
L_801D94D4:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 801D94D4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D94D8
  if (crb(c,0)) { IRQCHK(c); goto L_801D9480; } // 801D94DC
  c->r[0]=0u+0x00000001u; // 801D94E0
L_801D94E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D94E4
  if (!crb(c,2)) { goto L_801D9508; } // 801D94E8
  c->r[3]=c->r[30]|c->r[30]; // 801D94EC
  c->lr=0x801D94F4u; f_801251F0(c); // 801D94F0
  c->lr=0x801D94F8u; f_801D76C0(c); // 801D94F4
  c->r[3]=c->r[3]+0x00000354u; // 801D94F8
  c->lr=0x801D9500u; f_80126EA0(c); // 801D94FC
  c->r[3]=0u+0x00000001u; // 801D9500
  goto L_801D9530; // 801D9504
L_801D9508:;
  c->r[0]=0u+0x00000001u; // 801D9508
  W8(c->r[31]+0x0000010Fu,c->r[0]); // 801D950C
L_801D9510:;
  c->r[3]=c->r[30]|c->r[30]; // 801D9510
  c->lr=0x801D9518u; f_801251F0(c); // 801D9514
  c->r[0]=0u+0x00000001u; // 801D9518
  W8(c->r[31]+0x00000100u,c->r[0]); // 801D951C
  c->lr=0x801D9524u; f_801D76C0(c); // 801D9520
  c->r[3]=c->r[3]+0x00000354u; // 801D9524
  c->lr=0x801D952Cu; f_80126EA0(c); // 801D9528
  c->r[3]=0u+0x00000000u; // 801D952C
L_801D9530:;
  c->r[11]=c->r[1]+0x00000020u; // 801D9530
  c->lr=0x801D9538u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9534
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9538
  c->lr=c->r[0]; // 801D953C
  c->r[1]=c->r[1]+0x00000020u; // 801D9540
  return; // 801D9544
}

// fn_801D9550
void f_801D9550(Ctx* __restrict c) {
  trace_call(0x801D9550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9550
  c->r[0]=c->lr; // 801D9554
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D955C
  c->r[31]=c->r[3]|c->r[3]; // 801D9560
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D9564
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D9568
  c->ctr=c->r[12]; // 801D956C
  if (true) { c->lr=0x801D9574u; dispatch(c,c->ctr); } // 801D9570
  c->lr=0x801D9578u; f_801D76C0(c); // 801D9574
  c->r[3]=c->r[3]+0x00000354u; // 801D9578
  c->lr=0x801D9580u; f_80126DC0(c); // 801D957C
  c->r[0]=R8(c->r[31]+0x00000100u); // 801D9580
  cmps(c,0,(int32_t)c->r[0],0); // 801D9584
  if (!crb(c,2)) { goto L_801D959C; } // 801D9588
  c->lr=0x801D9590u; f_801D76C0(c); // 801D958C
  c->r[3]=c->r[3]+0x00000354u; // 801D9590
  c->lr=0x801D9598u; f_80126EA0(c); // 801D9594
  goto L_801D95F4; // 801D9598
L_801D959C:;
  c->r[0]=0u+0x00000000u; // 801D959C
  W32(c->r[31]+0x00000804u,c->r[0]); // 801D95A0
  c->r[3]=c->r[31]+0x00000180u; // 801D95A4
  c->lr=0x801D95ACu; f_801C6050(c); // 801D95A8
  cmps(c,0,(int32_t)c->r[3],32); // 801D95AC
  if (crb(c,2)) { goto L_801D95D0; } // 801D95B0
  c->r[3]=0u+0x803A0000u; // 801D95B4
  c->r[5]=0u+0x803A0000u; // 801D95B8
  c->r[3]=c->r[3]+0x00002DD8u; // 801D95BC
  c->r[4]=0u+0x000000BFu; // 801D95C0
  c->r[5]=c->r[5]+0x00002E28u; // 801D95C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D95C8
  c->lr=0x801D95D0u; f_80212260(c); // 801D95CC
L_801D95D0:;
  c->r[3]=c->r[31]+0x00000180u; // 801D95D0
  c->r[4]=c->r[31]+0x00000184u; // 801D95D4
  c->r[5]=0u+0x00000680u; // 801D95D8
  c->lr=0x801D95E0u; f_801C5FA0(c); // 801D95DC
  c->r[0]=0u+0x00000000u; // 801D95E0
  W8(c->r[31]+0x00000100u,c->r[0]); // 801D95E4
  c->lr=0x801D95ECu; f_801D76C0(c); // 801D95E8
  c->r[3]=c->r[3]+0x00000354u; // 801D95EC
  c->lr=0x801D95F4u; f_80126EA0(c); // 801D95F0
L_801D95F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D95F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D95F8
  c->lr=c->r[0]; // 801D95FC
  c->r[1]=c->r[1]+0x00000010u; // 801D9600
  return; // 801D9604
}

// fn_801D9610
void f_801D9610(Ctx* __restrict c) {
  trace_call(0x801D9610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9610
  c->r[0]=c->lr; // 801D9614
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9618
  c->r[11]=c->r[1]+0x00000020u; // 801D961C
  c->lr=0x801D9624u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9620
  c->r[31]=0u+0x803A0000u; // 801D9624
  c->r[27]=c->r[3]|c->r[3]; // 801D9628
  c->r[28]=c->r[4]|c->r[4]; // 801D962C
  c->r[29]=c->r[5]|c->r[5]; // 801D9630
  c->r[30]=c->r[6]|c->r[6]; // 801D9634
  c->r[31]=c->r[31]+0x00002DD8u; // 801D9638
  c->lr=0x801D9640u; f_801D76C0(c); // 801D963C
  c->r[3]=c->r[3]+0x00000354u; // 801D9640
  c->lr=0x801D9648u; f_80126DC0(c); // 801D9644
  c->r[0]=R8(c->r[27]+0x00000100u); // 801D9648
  cmps(c,0,(int32_t)c->r[0],0); // 801D964C
  if (!crb(c,2)) { goto L_801D9668; } // 801D9650
  c->r[3]=c->r[31]+0x00000000u; // 801D9654
  c->r[5]=c->r[31]+0x00000100u; // 801D9658
  c->r[4]=0u+0x000000DAu; // 801D965C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9660
  c->lr=0x801D9668u; f_80212260(c); // 801D9664
L_801D9668:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D9668
  if (!crb(c,2)) { goto L_801D9684; } // 801D966C
  c->r[3]=c->r[31]+0x00000000u; // 801D9670
  c->r[5]=c->r[31]+0x00000124u; // 801D9674
  c->r[4]=0u+0x000000DBu; // 801D9678
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D967C
  c->lr=0x801D9684u; f_80212260(c); // 801D9680
L_801D9684:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D9684
  c->r[3]=c->r[28]|c->r[28]; // 801D9688
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801D968C
  c->ctr=c->r[12]; // 801D9690
  if (true) { c->lr=0x801D9698u; dispatch(c,c->ctr); } // 801D9694
  cmps(c,0,(int32_t)c->r[3],0); // 801D9698
  if (!crb(c,2)) { goto L_801D96B4; } // 801D969C
  c->r[3]=c->r[31]+0x00000000u; // 801D96A0
  c->r[5]=c->r[31]+0x00000150u; // 801D96A4
  c->r[4]=0u+0x000000DCu; // 801D96A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D96AC
  c->lr=0x801D96B4u; f_80212260(c); // 801D96B0
L_801D96B4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801D96B4
  c->r[3]=c->r[28]|c->r[28]; // 801D96B8
  c->r[12]=R32(c->r[12]+0x00000050u); // 801D96BC
  c->ctr=c->r[12]; // 801D96C0
  if (true) { c->lr=0x801D96C8u; dispatch(c,c->ctr); } // 801D96C4
  cmps(c,0,(int32_t)c->r[3],0); // 801D96C8
  if (!crb(c,2)) { goto L_801D96E4; } // 801D96CC
  c->r[3]=c->r[31]+0x00000000u; // 801D96D0
  c->r[5]=c->r[31]+0x0000017Cu; // 801D96D4
  c->r[4]=0u+0x000000DDu; // 801D96D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D96DC
  c->lr=0x801D96E4u; f_80212260(c); // 801D96E0
L_801D96E4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D96E4
  c->r[3]=0u+0x00000000u; // 801D96E8
  c->r[0]=0u+0x00000001u; // 801D96EC
  W32(c->r[27]+0x00000808u,c->r[28]); // 801D96F0
  c->r[31]=c->r[27]|c->r[27]; // 801D96F4
  W32(c->r[27]+0x0000014Cu,c->r[29]); // 801D96F8
  W32(c->r[27]+0x00000150u,c->r[30]); // 801D96FC
  W8(c->r[27]+0x00000104u,c->r[3]); // 801D9700
  W8(c->r[27]+0x00000105u,c->r[3]); // 801D9704
  W8(c->r[27]+0x00000106u,c->r[3]); // 801D9708
  W8(c->r[27]+0x00000101u,c->r[0]); // 801D970C
  if (crb(c,2)) { goto L_801D9718; } // 801D9710
  c->r[31]=c->r[27]+0x000000B4u; // 801D9714
L_801D9718:;
  c->lr=0x801D971Cu; f_801D76C0(c); // 801D9718
  c->r[4]=c->r[31]|c->r[31]; // 801D971C
  c->lr=0x801D9724u; f_801D7BE0(c); // 801D9720
  c->r[4]=R32(c->r[27]+0x00000808u); // 801D9724
  c->r[31]=c->r[27]+0x00000154u; // 801D9728
  c->r[3]=R32(c->r[27]+0x0000014Cu); // 801D972C
  c->r[0]=R32(c->r[27]+0x00000150u); // 801D9730
  W32(c->r[27]+0x00000164u,c->r[27]); // 801D9734
  W32(c->r[27]+0x00000168u,c->r[4]); // 801D9738
  W32(c->r[27]+0x0000016Cu,c->r[3]); // 801D973C
  W32(c->r[27]+0x00000170u,c->r[0]); // 801D9740
  c->lr=0x801D9748u; f_801DCA40(c); // 801D9744
  c->r[4]=c->r[31]|c->r[31]; // 801D9748
  c->r[5]=0u+0x00000001u; // 801D974C
  c->lr=0x801D9754u; f_801DCBD0(c); // 801D9750
  c->lr=0x801D9758u; f_801D76C0(c); // 801D9754
  c->r[3]=c->r[3]+0x00000354u; // 801D9758
  c->lr=0x801D9760u; f_80126EA0(c); // 801D975C
  c->r[11]=c->r[1]+0x00000020u; // 801D9760
  c->r[3]=0u+0x00000001u; // 801D9764
  c->lr=0x801D976Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9768
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D976C
  c->lr=c->r[0]; // 801D9770
  c->r[1]=c->r[1]+0x00000020u; // 801D9774
  return; // 801D9778
}

// fn_801D9780
void f_801D9780(Ctx* __restrict c) {
  trace_call(0x801D9780u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9780
  c->r[0]=c->lr; // 801D9784
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801D9788
  c->r[11]=c->r[1]+0x000000C0u; // 801D978C
  c->lr=0x801D9794u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9790
  c->r[25]=0u+0x803A0000u; // 801D9794
  c->r[26]=c->r[3]|c->r[3]; // 801D9798
  c->r[25]=c->r[25]+0x00002DD8u; // 801D979C
  c->lr=0x801D97A4u; f_801D76C0(c); // 801D97A0
  c->r[3]=c->r[3]+0x00000354u; // 801D97A4
  c->lr=0x801D97ACu; f_80126DC0(c); // 801D97A8
  c->r[0]=R8(c->r[26]+0x00000103u); // 801D97AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D97B0
  if (!crb(c,2)) { goto L_801D97CC; } // 801D97B4
  c->lr=0x801D97BCu; f_801D76C0(c); // 801D97B8
  c->r[3]=c->r[3]+0x00000354u; // 801D97BC
  c->lr=0x801D97C4u; f_80126EA0(c); // 801D97C0
  c->r[3]=0u+0x00000000u; // 801D97C4
  goto L_801D9AF4; // 801D97C8
L_801D97CC:;
  c->r[0]=R8(c->r[26]+0x00000102u); // 801D97CC
  cmps(c,0,(int32_t)c->r[0],0); // 801D97D0
  if (!crb(c,2)) { goto L_801D9AE4; } // 801D97D4
  c->r[4]=R32(c->r[26]+0x00000814u); // 801D97D8
  c->r[3]=c->r[26]|c->r[26]; // 801D97DC
  c->lr=0x801D97E4u; f_801DA820(c); // 801D97E0
  cmps(c,0,(int32_t)c->r[3],0); // 801D97E4
  if (!crb(c,2)) { goto L_801D983C; } // 801D97E8
  c->r[28]=c->r[26]|c->r[26]; // 801D97EC
  c->r[27]=0u+0x00000000u; // 801D97F0
  c->r[25]=0u+0x00000000u; // 801D97F4
  goto L_801D981C; // 801D97F8
L_801D97FC:;
  c->r[4]=R32(c->r[28]+0x00000818u); // 801D97FC
  cmps(c,0,(int32_t)c->r[4],0); // 801D9800
  if (crb(c,2)) { goto L_801D9814; } // 801D9804
  c->r[3]=R32(c->r[26]+0x00000804u); // 801D9808
  c->lr=0x801D9810u; f_801D8010(c); // 801D980C
  W32(c->r[28]+0x00000818u,c->r[25]); // 801D9810
L_801D9814:;
  c->r[28]=c->r[28]+0x00000034u; // 801D9814
  c->r[27]=c->r[27]+0x00000001u; // 801D9818
L_801D981C:;
  c->r[0]=R32(c->r[26]+0x00000810u); // 801D981C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D9820
  if (crb(c,0)) { IRQCHK(c); goto L_801D97FC; } // 801D9824
  c->lr=0x801D982Cu; f_801D76C0(c); // 801D9828
  c->r[3]=c->r[3]+0x00000354u; // 801D982C
  c->lr=0x801D9834u; f_80126EA0(c); // 801D9830
  c->r[3]=0u+0x00000000u; // 801D9834
  goto L_801D9AF4; // 801D9838
L_801D983C:;
  c->r[0]=0u+0x00000000u; // 801D983C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D9840
  c->r[3]=c->r[26]|c->r[26]; // 801D9844
  c->r[4]=c->r[1]+0x00000010u; // 801D9848
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D984C
  c->r[5]=c->r[1]+0x0000000Cu; // 801D9850
  c->r[6]=c->r[1]+0x00000008u; // 801D9854
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D9858
  c->lr=0x801D9860u; f_801DB980(c); // 801D985C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9860
  if (!crb(c,2)) { goto L_801D9890; } // 801D9864
  c->r[3]=c->r[25]+0x00000000u; // 801D9868
  c->r[5]=c->r[25]+0x000001A8u; // 801D986C
  c->r[4]=0u+0x00000114u; // 801D9870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9874
  c->lr=0x801D987Cu; f_80212260(c); // 801D9878
  c->lr=0x801D9880u; f_801D76C0(c); // 801D987C
  c->r[3]=c->r[3]+0x00000354u; // 801D9880
  c->lr=0x801D9888u; f_80126EA0(c); // 801D9884
  c->r[3]=0u+0x00000000u; // 801D9888
  goto L_801D9AF4; // 801D988C
L_801D9890:;
  c->r[3]=R32(c->r[26]+0x0000011Cu); // 801D9890
  c->r[29]=0u+0x00000000u; // 801D9894
  c->r[0]=R32(c->r[26]+0x00000134u); // 801D9898
  c->r[4]=R32(c->r[26]+0x000000C0u); // 801D989C
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801D98A0
  c->r[3]=R32(c->r[26]+0x00000110u); // 801D98A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D98A8
  cmps(c,0,(int32_t)c->r[4],3); // 801D98AC
  c->r[0]=c->r[3]+c->r[0]; // 801D98B0
  W32(c->r[26]+0x00000110u,c->r[0]); // 801D98B4
  if (crb(c,2)) { goto L_801D98D0; } // 801D98B8
  cmps(c,0,(int32_t)c->r[4],2); // 801D98BC
  if (crb(c,2)) { goto L_801D98F0; } // 801D98C0
  cmps(c,0,(int32_t)c->r[4],1); // 801D98C4
  if (crb(c,2)) { goto L_801D98F8; } // 801D98C8
  goto L_801D9900; // 801D98CC
L_801D98D0:;
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801D98D0
  c->r[3]=rotl(c->r[5],0)&0x00000007u; cr0(c,c->r[3]); // 801D98D4
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)14); // 801D98D8
  if (crb(c,2)) { goto L_801D9914; } // 801D98DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D98E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801D98E4
  c->r[29]=c->r[29]+c->r[0]; // 801D98E8
  goto L_801D9914; // 801D98EC
L_801D98F0:;
  c->r[29]=c->r[5]|c->r[5]; // 801D98F0
  goto L_801D9914; // 801D98F4
L_801D98F8:;
  c->r[29]=rotl(c->r[5],31)&0x7FFFFFFFu; // 801D98F8
  goto L_801D9914; // 801D98FC
L_801D9900:;
  c->r[3]=c->r[25]+0x00000000u; // 801D9900
  c->r[5]=c->r[25]+0x000001C8u; // 801D9904
  c->r[4]=0u+0x00000170u; // 801D9908
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D990C
  c->lr=0x801D9914u; f_80212260(c); // 801D9910
L_801D9914:;
  c->r[28]=c->r[26]+0x00000B58u; // 801D9914
  c->r[27]=0u+0x00000000u; // 801D9918
  c->r[30]=0u+0x00000001u; // 801D991C
  c->r[31]=0u+0x00000000u; // 801D9920
  goto L_801D9A8C; // 801D9924
L_801D9928:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801D9928
  cmps(c,0,(int32_t)c->r[0],0); // 801D992C
  if (crb(c,2)) { goto L_801D9A84; } // 801D9930
  c->r[0]=R32(c->r[26]+0x000000C0u); // 801D9934
  c->r[3]=c->r[1]+0x00000030u; // 801D9938
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D993C
  c->r[4]=0u+0x00000000u; // 801D9940
  W8(c->r[1]+0x0000001Cu,c->r[30]); // 801D9944
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801D9948
  W32(c->r[1]+0x00000020u,c->r[0]); // 801D994C
  c->r[0]=R32(c->r[26]+0x000000CCu); // 801D9950
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9954
  W32(c->r[1]+0x00000028u,c->r[31]); // 801D9958
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 801D995C
  goto L_801D9A38; // 801D9960
  c->r[0]=c->r[0]|0x00000000u; // 801D9964
L_801D9968:;
  cmps(c,0,(int32_t)c->r[4],2); // 801D9968
  if (crb(c,0)) { goto L_801D9978; } // 801D996C
  c->r[6]=0u+0x00000000u; // 801D9970
  goto L_801D999C; // 801D9974
L_801D9978:;
  c->r[5]=c->r[28]+c->r[4]; // 801D9978
  c->r[0]=R8(c->r[5]+0x00000010u); // 801D997C
  cmps(c,0,(int32_t)c->r[0],16); // 801D9980
  if (crb(c,0)) { goto L_801D9990; } // 801D9984
  c->r[6]=0u+0x00000000u; // 801D9988
  goto L_801D999C; // 801D998C
L_801D9990:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801D9990
  c->r[5]=c->r[26]+c->r[0]; // 801D9994
  c->r[6]=c->r[5]+0x00000818u; // 801D9998
L_801D999C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801D999C
  if (crb(c,2)) { goto L_801D9A30; } // 801D99A0
  c->r[0]=R32(c->r[6]+0x00000000u); // 801D99A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801D99A8
  c->r[0]=R32(c->r[6]+0x00000008u); // 801D99AC
  c->r[5]=R32(c->r[6]+0x00000004u); // 801D99B0
  W32(c->r[3]+0x00000004u,c->r[5]); // 801D99B4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D99B8
  c->r[0]=R32(c->r[6]+0x00000010u); // 801D99BC
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801D99C0
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801D99C4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D99C8
  c->r[0]=R32(c->r[6]+0x00000018u); // 801D99CC
  c->r[5]=R32(c->r[6]+0x00000014u); // 801D99D0
  W32(c->r[3]+0x00000014u,c->r[5]); // 801D99D4
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D99D8
  c->r[0]=R32(c->r[6]+0x00000020u); // 801D99DC
  c->r[5]=R32(c->r[6]+0x0000001Cu); // 801D99E0
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801D99E4
  W32(c->r[3]+0x00000020u,c->r[0]); // 801D99E8
  c->r[0]=R16(c->r[6]+0x00000024u); // 801D99EC
  W16(c->r[3]+0x00000024u,c->r[0]); // 801D99F0
  c->r[0]=R16(c->r[6]+0x00000026u); // 801D99F4
  W16(c->r[3]+0x00000026u,c->r[0]); // 801D99F8
  c->r[0]=R16(c->r[6]+0x00000028u); // 801D99FC
  W16(c->r[3]+0x00000028u,c->r[0]); // 801D9A00
  c->r[0]=R16(c->r[6]+0x0000002Au); // 801D9A04
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801D9A08
  c->r[0]=R16(c->r[6]+0x0000002Cu); // 801D9A0C
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 801D9A10
  c->r[0]=R16(c->r[6]+0x0000002Eu); // 801D9A14
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 801D9A18
  c->r[0]=R16(c->r[6]+0x00000030u); // 801D9A1C
  W16(c->r[3]+0x00000030u,c->r[0]); // 801D9A20
  c->r[5]=R32(c->r[6]+0x00000000u); // 801D9A24
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D9A28
  W16(c->r[3]+0x00000026u,c->r[0]); // 801D9A2C
L_801D9A30:;
  c->r[3]=c->r[3]+0x00000034u; // 801D9A30
  c->r[4]=c->r[4]+0x00000001u; // 801D9A34
L_801D9A38:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801D9A38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801D9A3C
  if (crb(c,0)) { IRQCHK(c); goto L_801D9968; } // 801D9A40
  c->lr=0x801D9A48u; f_801251B0(c); // 801D9A44
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D9A48
  c->r[25]=c->r[3]|c->r[3]; // 801D9A4C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A50
  if (crb(c,2)) { goto L_801D9A7C; } // 801D9A54
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801D9A58
  c->r[3]=c->r[0]|c->r[0]; // 801D9A5C
  c->r[4]=c->r[1]+0x00000018u; // 801D9A60
  c->lr=0x801D9A68u; f_801DE3D0(c); // 801D9A64
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D9A68
  c->r[4]=0u+0x00000001u; // 801D9A6C
  c->lr=0x801D9A74u; f_801DF130(c); // 801D9A70
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D9A74
  c->lr=0x801D9A7Cu; f_801DE600(c); // 801D9A78
L_801D9A7C:;
  c->r[3]=c->r[25]|c->r[25]; // 801D9A7C
  c->lr=0x801D9A84u; f_801251F0(c); // 801D9A80
L_801D9A84:;
  c->r[28]=c->r[28]+0x00000038u; // 801D9A84
  c->r[27]=c->r[27]+0x00000001u; // 801D9A88
L_801D9A8C:;
  c->r[0]=R32(c->r[26]+0x0000080Cu); // 801D9A8C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801D9A90
  if (crb(c,0)) { IRQCHK(c); goto L_801D9928; } // 801D9A94
  c->r[3]=R32(c->r[26]+0x000000E0u); // 801D9A98
  c->r[4]=R32(c->r[1]+0x00000010u); // 801D9A9C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D9AA0
  cmpu(c,0,c->r[4],c->r[0]); // 801D9AA4
  if (!crb(c,2)) { goto L_801D9ABC; } // 801D9AA8
  c->r[3]=c->r[26]|c->r[26]; // 801D9AAC
  c->r[4]=0u+0x00000001u; // 801D9AB0
  c->lr=0x801D9AB8u; f_801DB390(c); // 801D9AB4
  goto L_801D9AD4; // 801D9AB8
L_801D9ABC:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D9ABC
  cmpu(c,0,c->r[4],c->r[0]); // 801D9AC0
  if (!crb(c,2)) { goto L_801D9AD4; } // 801D9AC4
  c->r[3]=c->r[26]|c->r[26]; // 801D9AC8
  c->r[4]=0u+0x00000000u; // 801D9ACC
  c->lr=0x801D9AD4u; f_801DB390(c); // 801D9AD0
L_801D9AD4:;
  c->r[3]=c->r[26]|c->r[26]; // 801D9AD4
  c->lr=0x801D9ADCu; f_801DB8C0(c); // 801D9AD8
  c->r[0]=0u+0x00000001u; // 801D9ADC
  W8(c->r[26]+0x00000102u,c->r[0]); // 801D9AE0
L_801D9AE4:;
  c->lr=0x801D9AE8u; f_801D76C0(c); // 801D9AE4
  c->r[3]=c->r[3]+0x00000354u; // 801D9AE8
  c->lr=0x801D9AF0u; f_80126EA0(c); // 801D9AEC
  c->r[3]=0u+0x00000001u; // 801D9AF0
L_801D9AF4:;
  c->r[11]=c->r[1]+0x000000C0u; // 801D9AF4
  c->lr=0x801D9AFCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9AF8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801D9AFC
  c->lr=c->r[0]; // 801D9B00
  c->r[1]=c->r[1]+0x000000C0u; // 801D9B04
  return; // 801D9B08
}

// fn_801D9B10
void f_801D9B10(Ctx* __restrict c) {
  trace_call(0x801D9B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9B10
  c->r[0]=c->lr; // 801D9B14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D9B18
  c->r[11]=c->r[1]+0x00000030u; // 801D9B1C
  c->lr=0x801D9B24u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9B20
  c->r[31]=c->r[3]|c->r[3]; // 801D9B24
  c->lr=0x801D9B2Cu; f_801D76C0(c); // 801D9B28
  c->r[3]=c->r[3]+0x00000354u; // 801D9B2C
  c->lr=0x801D9B34u; f_80126DC0(c); // 801D9B30
  c->r[23]=c->r[31]|c->r[31]; // 801D9B34
  c->r[24]=0u+0x00000000u; // 801D9B38
L_801D9B3C:;
  c->r[0]=R8(c->r[23]+0x00000B58u); // 801D9B3C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9B40
  if (crb(c,2)) { goto L_801D9B58; } // 801D9B44
  c->r[3]=R32(c->r[23]+0x00000B5Cu); // 801D9B48
  cmps(c,0,(int32_t)c->r[3],0); // 801D9B4C
  if (crb(c,2)) { goto L_801D9B58; } // 801D9B50
  c->lr=0x801D9B58u; f_801DE620(c); // 801D9B54
L_801D9B58:;
  c->r[24]=c->r[24]+0x00000001u; // 801D9B58
  c->r[23]=c->r[23]+0x00000038u; // 801D9B5C
  cmps(c,0,(int32_t)c->r[24],8); // 801D9B60
  if (crb(c,0)) { IRQCHK(c); goto L_801D9B3C; } // 801D9B64
  c->r[0]=R8(c->r[31]+0x00000101u); // 801D9B68
  cmps(c,0,(int32_t)c->r[0],0); // 801D9B6C
  if (crb(c,2)) { goto L_801D9B90; } // 801D9B70
  cmps(c,0,(int32_t)c->r[31],0); // 801D9B74
  c->r[23]=c->r[31]|c->r[31]; // 801D9B78
  if (crb(c,2)) { goto L_801D9B84; } // 801D9B7C
  c->r[23]=c->r[31]+0x000000B4u; // 801D9B80
L_801D9B84:;
  c->lr=0x801D9B88u; f_801D76C0(c); // 801D9B84
  c->r[4]=c->r[23]|c->r[23]; // 801D9B88
  c->lr=0x801D9B90u; f_801D7C80(c); // 801D9B8C
L_801D9B90:;
  c->lr=0x801D9B94u; f_801D76C0(c); // 801D9B90
  c->r[3]=c->r[3]+0x00000354u; // 801D9B94
  c->lr=0x801D9B9Cu; f_80126EA0(c); // 801D9B98
  c->lr=0x801D9BA0u; f_801DCA40(c); // 801D9B9C
  c->r[4]=c->r[31]+0x00000154u; // 801D9BA0
  c->lr=0x801D9BA8u; f_801DD230(c); // 801D9BA4
  c->lr=0x801D9BACu; f_801251B0(c); // 801D9BA8
  c->r[0]=R32(c->r[31]+0x00000174u); // 801D9BAC
  c->r[30]=c->r[3]|c->r[3]; // 801D9BB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D9BB4
  if (crb(c,2)) { goto L_801D9C48; } // 801D9BB8
  c->r[23]=0u+0x803A0000u; // 801D9BBC
  c->r[24]=0u+0x803A0000u; // 801D9BC0
  c->r[26]=0u+0x803A0000u; // 801D9BC4
  c->r[27]=0u+0x803A0000u; // 801D9BC8
  c->r[28]=0u+0x803A0000u; // 801D9BCC
  c->r[29]=0u+0x803A0000u; // 801D9BD0
  goto L_801D9C3C; // 801D9BD4
L_801D9BD8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D9BD8
  if (!crb(c,2)) { goto L_801D9BF4; } // 801D9BDC
  c->r[3]=c->r[23]+0x000034A4u; // 801D9BE0
  c->r[5]=c->r[24]+0x00003480u; // 801D9BE4
  c->r[4]=0u+0x000001FBu; // 801D9BE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9BEC
  c->lr=0x801D9BF4u; f_80212260(c); // 801D9BF0
L_801D9BF4:;
  c->r[25]=R32(c->r[31]+0x0000017Cu); // 801D9BF4
  cmps(c,0,(int32_t)c->r[25],0); // 801D9BF8
  if (!crb(c,2)) { goto L_801D9C14; } // 801D9BFC
  c->r[3]=c->r[26]+0x00003444u; // 801D9C00
  c->r[5]=c->r[27]+0x00003420u; // 801D9C04
  c->r[4]=0u+0x0000023Du; // 801D9C08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9C0C
  c->lr=0x801D9C14u; f_80212260(c); // 801D9C10
L_801D9C14:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFD4u,0); cr0(c,c->r[25]); // 801D9C14
  if (!crb(c,2)) { goto L_801D9C30; } // 801D9C18
  c->r[3]=c->r[28]+0x00003474u; // 801D9C1C
  c->r[5]=c->r[29]+0x00003450u; // 801D9C20
  c->r[4]=0u+0x00000193u; // 801D9C24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9C28
  c->lr=0x801D9C30u; f_80212260(c); // 801D9C2C
L_801D9C30:;
  c->lr=0x801D9C34u; f_801DCA40(c); // 801D9C30
  c->r[4]=c->r[25]|c->r[25]; // 801D9C34
  c->lr=0x801D9C3Cu; f_801DD230(c); // 801D9C38
L_801D9C3C:;
  c->r[0]=R32(c->r[31]+0x00000174u); // 801D9C3C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9C40
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9BD8; } // 801D9C44
L_801D9C48:;
  c->r[3]=c->r[30]|c->r[30]; // 801D9C48
  c->lr=0x801D9C50u; f_801251F0(c); // 801D9C4C
  c->r[24]=c->r[31]|c->r[31]; // 801D9C50
  c->r[23]=0u+0x00000000u; // 801D9C54
  c->r[29]=0u+0x00000000u; // 801D9C58
  goto L_801D9C80; // 801D9C5C
L_801D9C60:;
  c->r[4]=R32(c->r[24]+0x00000818u); // 801D9C60
  cmps(c,0,(int32_t)c->r[4],0); // 801D9C64
  if (crb(c,2)) { goto L_801D9C78; } // 801D9C68
  c->r[3]=R32(c->r[31]+0x00000804u); // 801D9C6C
  c->lr=0x801D9C74u; f_801D8010(c); // 801D9C70
  W32(c->r[24]+0x00000818u,c->r[29]); // 801D9C74
L_801D9C78:;
  c->r[24]=c->r[24]+0x00000034u; // 801D9C78
  c->r[23]=c->r[23]+0x00000001u; // 801D9C7C
L_801D9C80:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 801D9C80
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 801D9C84
  if (crb(c,0)) { IRQCHK(c); goto L_801D9C60; } // 801D9C88
  c->lr=0x801D9C90u; f_801251B0(c); // 801D9C8C
  c->r[30]=c->r[3]|c->r[3]; // 801D9C90
  c->r[24]=c->r[31]+0x00000B58u; // 801D9C94
  c->r[23]=0u+0x00000000u; // 801D9C98
  c->r[29]=0u+0x00000000u; // 801D9C9C
  goto L_801D9CCC; // 801D9CA0
L_801D9CA4:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801D9CA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D9CA8
  if (crb(c,2)) { goto L_801D9CC4; } // 801D9CAC
  c->r[3]=R32(c->r[24]+0x00000004u); // 801D9CB0
  cmps(c,0,(int32_t)c->r[3],0); // 801D9CB4
  if (crb(c,2)) { goto L_801D9CC4; } // 801D9CB8
  c->lr=0x801D9CC0u; f_801DE300(c); // 801D9CBC
  W32(c->r[24]+0x00000004u,c->r[29]); // 801D9CC0
L_801D9CC4:;
  c->r[24]=c->r[24]+0x00000038u; // 801D9CC4
  c->r[23]=c->r[23]+0x00000001u; // 801D9CC8
L_801D9CCC:;
  c->r[0]=R32(c->r[31]+0x0000080Cu); // 801D9CCC
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 801D9CD0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9CA4; } // 801D9CD4
  c->r[3]=c->r[30]|c->r[30]; // 801D9CD8
  c->lr=0x801D9CE0u; f_801251F0(c); // 801D9CDC
  c->lr=0x801D9CE4u; f_801D76C0(c); // 801D9CE0
  c->r[3]=c->r[3]+0x00000354u; // 801D9CE4
  c->lr=0x801D9CECu; f_80126DC0(c); // 801D9CE8
  c->r[3]=R32(c->r[31]+0x00000808u); // 801D9CEC
  cmps(c,0,(int32_t)c->r[3],0); // 801D9CF0
  if (crb(c,2)) { goto L_801D9D10; } // 801D9CF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801D9CF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801D9CFC
  c->ctr=c->r[12]; // 801D9D00
  if (true) { c->lr=0x801D9D08u; dispatch(c,c->ctr); } // 801D9D04
  c->r[0]=0u+0x00000000u; // 801D9D08
  W32(c->r[31]+0x00000808u,c->r[0]); // 801D9D0C
L_801D9D10:;
  c->lr=0x801D9D14u; f_801D76C0(c); // 801D9D10
  c->r[3]=c->r[3]+0x00000354u; // 801D9D14
  c->lr=0x801D9D1Cu; f_80126EA0(c); // 801D9D18
  c->r[0]=0u+0x00000000u; // 801D9D1C
  W8(c->r[31]+0x00000102u,c->r[0]); // 801D9D20
  c->r[3]=c->r[31]+0x00000180u; // 801D9D24
  W8(c->r[31]+0x00000103u,c->r[0]); // 801D9D28
  W8(c->r[31]+0x00000101u,c->r[0]); // 801D9D2C
  c->lr=0x801D9D34u; f_801C6050(c); // 801D9D30
  cmps(c,0,(int32_t)c->r[3],32); // 801D9D34
  if (crb(c,2)) { goto L_801D9D58; } // 801D9D38
  c->r[3]=0u+0x803A0000u; // 801D9D3C
  c->r[5]=0u+0x803A0000u; // 801D9D40
  c->r[3]=c->r[3]+0x00002DD8u; // 801D9D44
  c->r[4]=0u+0x000001B3u; // 801D9D48
  c->r[5]=c->r[5]+0x00002E28u; // 801D9D4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9D50
  c->lr=0x801D9D58u; f_80212260(c); // 801D9D54
L_801D9D58:;
  c->r[11]=c->r[1]+0x00000030u; // 801D9D58
  c->lr=0x801D9D60u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D9D5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D9D60
  c->lr=c->r[0]; // 801D9D64
  c->r[1]=c->r[1]+0x00000030u; // 801D9D68
  return; // 801D9D6C
}

// fn_801D9D70
void f_801D9D70(Ctx* __restrict c) {
  trace_call(0x801D9D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9D70
  c->r[0]=c->lr; // 801D9D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9D7C
  c->r[31]=c->r[4]|c->r[4]; // 801D9D80
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D9D84
  c->r[30]=c->r[3]|c->r[3]; // 801D9D88
  c->lr=0x801D9D90u; f_801D76C0(c); // 801D9D8C
  c->r[3]=c->r[3]+0x00000354u; // 801D9D90
  c->lr=0x801D9D98u; f_80126DC0(c); // 801D9D94
  cmps(c,0,(int32_t)c->r[31],0); // 801D9D98
  W8(c->r[30]+0x00000107u,c->r[31]); // 801D9D9C
  if (crb(c,2)) { goto L_801D9DAC; } // 801D9DA0
  c->r[0]=0u+0x00000001u; // 801D9DA4
  W8(c->r[30]+0x00000109u,c->r[0]); // 801D9DA8
L_801D9DAC:;
  c->r[3]=c->r[30]|c->r[30]; // 801D9DAC
  c->lr=0x801D9DB4u; f_801DB8C0(c); // 801D9DB0
  c->lr=0x801D9DB8u; f_801D76C0(c); // 801D9DB4
  c->r[3]=c->r[3]+0x00000354u; // 801D9DB8
  c->lr=0x801D9DC0u; f_80126EA0(c); // 801D9DBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9DC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9DC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D9DC8
  c->lr=c->r[0]; // 801D9DCC
  c->r[1]=c->r[1]+0x00000010u; // 801D9DD0
  return; // 801D9DD4
}

// fn_801D9DE0
void f_801D9DE0(Ctx* __restrict c) {
  trace_call(0x801D9DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9DE0
  c->r[0]=c->lr; // 801D9DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9DE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9DEC
  c->r[31]=c->r[3]|c->r[3]; // 801D9DF0
  c->lr=0x801D9DF8u; f_801BB500(c); // 801D9DF4
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[1]=c->ps1[1]=RF32(ea);} // 801D9DF8
  c->r[3]=0u+0x00000000u; // 801D9DFC
  {uint32_t ea=c->r[2]+0xFFFFA978u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D9E00
  c->r[0]=0u+0x00000001u; // 801D9E04
  W32(c->r[31]+0x00000814u,c->r[0]); // 801D9E08
  {uint32_t ea=c->r[31]+0x00000B88u; WF32(ea,c->f[1]);} // 801D9E0C
  {uint32_t ea=c->r[31]+0x00000B8Cu; WF32(ea,c->f[0]);} // 801D9E10
  {uint32_t ea=c->r[31]+0x00000BC0u; WF32(ea,c->f[1]);} // 801D9E14
  {uint32_t ea=c->r[31]+0x00000BC4u; WF32(ea,c->f[0]);} // 801D9E18
  {uint32_t ea=c->r[31]+0x00000BF8u; WF32(ea,c->f[1]);} // 801D9E1C
  {uint32_t ea=c->r[31]+0x00000BFCu; WF32(ea,c->f[0]);} // 801D9E20
  {uint32_t ea=c->r[31]+0x00000C30u; WF32(ea,c->f[1]);} // 801D9E24
  {uint32_t ea=c->r[31]+0x00000C34u; WF32(ea,c->f[0]);} // 801D9E28
  {uint32_t ea=c->r[31]+0x00000C68u; WF32(ea,c->f[1]);} // 801D9E2C
  {uint32_t ea=c->r[31]+0x00000C6Cu; WF32(ea,c->f[0]);} // 801D9E30
  {uint32_t ea=c->r[31]+0x00000CA0u; WF32(ea,c->f[1]);} // 801D9E34
  {uint32_t ea=c->r[31]+0x00000CA4u; WF32(ea,c->f[0]);} // 801D9E38
  {uint32_t ea=c->r[31]+0x00000CD8u; WF32(ea,c->f[1]);} // 801D9E3C
  {uint32_t ea=c->r[31]+0x00000CDCu; WF32(ea,c->f[0]);} // 801D9E40
  {uint32_t ea=c->r[31]+0x00000D10u; WF32(ea,c->f[1]);} // 801D9E44
  {uint32_t ea=c->r[31]+0x00000D14u; WF32(ea,c->f[0]);} // 801D9E48
  W8(c->r[31]+0x00000102u,c->r[3]); // 801D9E4C
  W8(c->r[31]+0x00000103u,c->r[3]); // 801D9E50
  W8(c->r[31]+0x0000010Eu,c->r[3]); // 801D9E54
  W8(c->r[31]+0x00000107u,c->r[3]); // 801D9E58
  W8(c->r[31]+0x00000108u,c->r[3]); // 801D9E5C
  W8(c->r[31]+0x00000109u,c->r[3]); // 801D9E60
  W8(c->r[31]+0x0000010Au,c->r[3]); // 801D9E64
  W8(c->r[31]+0x0000010Du,c->r[3]); // 801D9E68
  W8(c->r[31]+0x0000010Bu,c->r[3]); // 801D9E6C
  W8(c->r[31]+0x0000010Cu,c->r[3]); // 801D9E70
  W8(c->r[31]+0x0000010Fu,c->r[3]); // 801D9E74
  W32(c->r[31]+0x00000110u,c->r[3]); // 801D9E78
  W32(c->r[31]+0x00000148u,c->r[3]); // 801D9E7C
  W8(c->r[31]+0x00000B58u,c->r[3]); // 801D9E80
  W32(c->r[31]+0x00000B5Cu,c->r[3]); // 801D9E84
  W8(c->r[31]+0x00000B90u,c->r[3]); // 801D9E88
  W32(c->r[31]+0x00000B94u,c->r[3]); // 801D9E8C
  W8(c->r[31]+0x00000BC8u,c->r[3]); // 801D9E90
  W32(c->r[31]+0x00000BCCu,c->r[3]); // 801D9E94
  W8(c->r[31]+0x00000C00u,c->r[3]); // 801D9E98
  W32(c->r[31]+0x00000C04u,c->r[3]); // 801D9E9C
  W8(c->r[31]+0x00000C38u,c->r[3]); // 801D9EA0
  W32(c->r[31]+0x00000C3Cu,c->r[3]); // 801D9EA4
  W8(c->r[31]+0x00000C70u,c->r[3]); // 801D9EA8
  W32(c->r[31]+0x00000C74u,c->r[3]); // 801D9EAC
  W8(c->r[31]+0x00000CA8u,c->r[3]); // 801D9EB0
  W32(c->r[31]+0x00000CACu,c->r[3]); // 801D9EB4
  W8(c->r[31]+0x00000CE0u,c->r[3]); // 801D9EB8
  W32(c->r[31]+0x00000CE4u,c->r[3]); // 801D9EBC
  W32(c->r[31]+0x00000818u,c->r[3]); // 801D9EC0
  W32(c->r[31]+0x0000084Cu,c->r[3]); // 801D9EC4
  W32(c->r[31]+0x00000880u,c->r[3]); // 801D9EC8
  W32(c->r[31]+0x000008B4u,c->r[3]); // 801D9ECC
  W32(c->r[31]+0x000008E8u,c->r[3]); // 801D9ED0
  W32(c->r[31]+0x0000091Cu,c->r[3]); // 801D9ED4
  W32(c->r[31]+0x00000950u,c->r[3]); // 801D9ED8
  W32(c->r[31]+0x00000984u,c->r[3]); // 801D9EDC
  W32(c->r[31]+0x000009B8u,c->r[3]); // 801D9EE0
  W32(c->r[31]+0x000009ECu,c->r[3]); // 801D9EE4
  W32(c->r[31]+0x00000A20u,c->r[3]); // 801D9EE8
  W32(c->r[31]+0x00000A54u,c->r[3]); // 801D9EEC
  W32(c->r[31]+0x00000A88u,c->r[3]); // 801D9EF0
  W32(c->r[31]+0x00000ABCu,c->r[3]); // 801D9EF4
  W32(c->r[31]+0x00000AF0u,c->r[3]); // 801D9EF8
  W32(c->r[31]+0x00000B24u,c->r[3]); // 801D9EFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9F00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9F04
  c->lr=c->r[0]; // 801D9F08
  c->r[1]=c->r[1]+0x00000010u; // 801D9F0C
  return; // 801D9F10
}

// fn_801D9F20
void f_801D9F20(Ctx* __restrict c) {
  trace_call(0x801D9F20u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9F20
  c->r[0]=c->lr; // 801D9F24
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D9F28
  c->r[11]=c->r[1]+0x00000070u; // 801D9F2C
  c->lr=0x801D9F34u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D9F30
  cmps(c,0,(int32_t)c->r[4],0); // 801D9F34
  c->r[28]=0u+0x803A0000u; // 801D9F38
  c->r[29]=c->r[3]|c->r[3]; // 801D9F3C
  c->r[26]=c->r[4]|c->r[4]; // 801D9F40
  c->r[30]=c->r[5]|c->r[5]; // 801D9F44
  c->r[31]=c->r[6]|c->r[6]; // 801D9F48
  c->r[28]=c->r[28]+0x00002DD8u; // 801D9F4C
  if (!crb(c,2)) { goto L_801D9F68; } // 801D9F50
  c->r[3]=c->r[28]+0x00000000u; // 801D9F54
  c->r[5]=c->r[28]+0x00000124u; // 801D9F58
  c->r[4]=0u+0x0000026Bu; // 801D9F5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801D9F60
  c->lr=0x801D9F68u; f_80212260(c); // 801D9F64
L_801D9F68:;
  c->r[3]=0u+0x805C0000u; // 801D9F68
  c->r[27]=c->r[1]+0x00000008u; // 801D9F6C
  c->r[3]=c->r[3]+0x00006CA0u; // 801D9F70
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D9F74
  c->lr=0x801D9F7Cu; f_80126DC0(c); // 801D9F78
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 801D9F7C
  c->r[3]=c->r[1]+0x00000010u; // 801D9F80
  c->lr=0x801D9F88u; f_801D80F0(c); // 801D9F84
  c->r[4]=0u+0x805C0000u; // 801D9F88
  c->r[3]=c->r[1]+0x0000000Cu; // 801D9F8C
  c->r[4]=c->r[4]+0x00002CA0u; // 801D9F90
  c->r[5]=0u+0x00004000u; // 801D9F94
  c->lr=0x801D9F9Cu; f_801D8670(c); // 801D9F98
  cmps(c,0,(int32_t)c->r[3],0); // 801D9F9C
  if (!crb(c,2)) { goto L_801D9FBC; } // 801D9FA0
  cmps(c,0,(int32_t)c->r[27],0); // 801D9FA4
  if (crb(c,2)) { goto L_801D9FB4; } // 801D9FA8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D9FAC
  c->lr=0x801D9FB4u; f_80126EA0(c); // 801D9FB0
L_801D9FB4:;
  c->r[3]=0u+0x00000000u; // 801D9FB4
  goto L_801DA290; // 801D9FB8
L_801D9FBC:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801D9FBC
  c->r[4]=c->r[29]+0x000000C0u; // 801D9FC0
  c->lr=0x801D9FC8u; f_801D8B10(c); // 801D9FC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D9FC8
  if (!crb(c,2)) { goto L_801D9FE8; } // 801D9FCC
  cmps(c,0,(int32_t)c->r[27],0); // 801D9FD0
  if (crb(c,2)) { goto L_801D9FE0; } // 801D9FD4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D9FD8
  c->lr=0x801D9FE0u; f_80126EA0(c); // 801D9FDC
L_801D9FE0:;
  c->r[3]=0u+0x00000000u; // 801D9FE0
  goto L_801DA290; // 801D9FE4
L_801D9FE8:;
  c->r[0]=R32(c->r[29]+0x00000810u); // 801D9FE8
  cmps(c,0,(int32_t)c->r[0],0); // 801D9FEC
  if (!crb(c,2)) { goto L_801DA00C; } // 801D9FF0
  c->r[3]=c->r[1]+0x0000000Cu; // 801D9FF4
  c->lr=0x801D9FFCu; f_801D8A60(c); // 801D9FF8
  cmps(c,0,(int32_t)c->r[3],16); // 801D9FFC
  if (!crb(c,1)) { goto L_801DA008; } // 801DA000
  c->r[3]=0u+0x00000010u; // 801DA004
L_801DA008:;
  W32(c->r[29]+0x00000810u,c->r[3]); // 801DA008
L_801DA00C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA00C
  c->lr=0x801DA014u; f_801D89B0(c); // 801DA010
  cmps(c,0,(int32_t)c->r[3],8); // 801DA014
  if (!crb(c,1)) { goto L_801DA020; } // 801DA018
  c->r[3]=0u+0x00000008u; // 801DA01C
L_801DA020:;
  c->r[0]=R32(c->r[29]+0x0000080Cu); // 801DA020
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801DA024
  if (crb(c,2)) { goto L_801DA040; } // 801DA028
  c->r[3]=c->r[28]+0x00000000u; // 801DA02C
  c->r[5]=c->r[28]+0x000001D8u; // 801DA030
  c->r[4]=0u+0x00000283u; // 801DA034
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA038
  c->lr=0x801DA040u; f_80212260(c); // 801DA03C
L_801DA040:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA040
  c->lr=0x801DA048u; f_801D8A60(c); // 801DA044
  cmps(c,0,(int32_t)c->r[3],16); // 801DA048
  if (!crb(c,1)) { goto L_801DA054; } // 801DA04C
  c->r[3]=0u+0x00000010u; // 801DA050
L_801DA054:;
  c->r[0]=R32(c->r[29]+0x00000810u); // 801DA054
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801DA058
  if (crb(c,2)) { goto L_801DA074; } // 801DA05C
  c->r[3]=c->r[28]+0x00000000u; // 801DA060
  c->r[5]=c->r[28]+0x00000230u; // 801DA064
  c->r[4]=0u+0x00000284u; // 801DA068
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA06C
  c->lr=0x801DA074u; f_80212260(c); // 801DA070
L_801DA074:;
  c->r[27]=0u+0x00000000u; // 801DA074
  c->r[28]=0u+0x00000000u; // 801DA078
  goto L_801DA0BC; // 801DA07C
L_801DA080:;
  c->r[4]=c->r[29]+c->r[28]; // 801DA080
  c->r[5]=c->r[27]|c->r[27]; // 801DA084
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA088
  c->r[4]=c->r[4]+0x00000B60u; // 801DA08C
  c->lr=0x801DA094u; f_801D8B50(c); // 801DA090
  cmps(c,0,(int32_t)c->r[3],0); // 801DA094
  if (!crb(c,2)) { goto L_801DA0B4; } // 801DA098
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801DA09C
  if (crb(c,2)) { goto L_801DA0AC; } // 801DA0A0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DA0A4
  c->lr=0x801DA0ACu; f_80126EA0(c); // 801DA0A8
L_801DA0AC:;
  c->r[3]=0u+0x00000000u; // 801DA0AC
  goto L_801DA290; // 801DA0B0
L_801DA0B4:;
  c->r[27]=c->r[27]+0x00000001u; // 801DA0B4
  c->r[28]=c->r[28]+0x00000038u; // 801DA0B8
L_801DA0BC:;
  c->r[0]=R32(c->r[29]+0x0000080Cu); // 801DA0BC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DA0C0
  if (crb(c,0)) { IRQCHK(c); goto L_801DA080; } // 801DA0C4
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801DA0C8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DA0CC
  c->r[0]=cntlz(c->r[0]); // 801DA0D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801DA0D4
  if (crb(c,2)) { goto L_801DA1F0; } // 801DA0D8
  c->r[27]=0u+0x00000000u; // 801DA0DC
  c->r[28]=0u+0x00000000u; // 801DA0E0
  goto L_801DA128; // 801DA0E4
L_801DA0E8:;
  c->r[5]=c->r[29]+c->r[28]; // 801DA0E8
  c->r[6]=c->r[27]|c->r[27]; // 801DA0EC
  c->r[4]=c->r[5]+0x0000081Cu; // 801DA0F0
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA0F4
  c->r[5]=c->r[5]+0x00000844u; // 801DA0F8
  c->lr=0x801DA100u; f_801D8B90(c); // 801DA0FC
  cmps(c,0,(int32_t)c->r[3],0); // 801DA100
  if (!crb(c,2)) { goto L_801DA120; } // 801DA104
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801DA108
  if (crb(c,2)) { goto L_801DA118; } // 801DA10C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DA110
  c->lr=0x801DA118u; f_80126EA0(c); // 801DA114
L_801DA118:;
  c->r[3]=0u+0x00000000u; // 801DA118
  goto L_801DA290; // 801DA11C
L_801DA120:;
  c->r[27]=c->r[27]+0x00000001u; // 801DA120
  c->r[28]=c->r[28]+0x00000034u; // 801DA124
L_801DA128:;
  c->r[0]=R32(c->r[29]+0x00000810u); // 801DA128
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DA12C
  if (crb(c,0)) { IRQCHK(c); goto L_801DA0E8; } // 801DA130
  cmps(c,0,(int32_t)c->r[31],0); // 801DA134
  if (crb(c,2)) { goto L_801DA1F0; } // 801DA138
  cmps(c,0,(int32_t)c->r[30],0); // 801DA13C
  if (!crb(c,2)) { goto L_801DA148; } // 801DA140
  goto L_801DA170; // 801DA144
L_801DA148:;
  cmps(c,0,(int32_t)c->r[30],1); // 801DA148
  if (!crb(c,2)) { goto L_801DA170; } // 801DA14C
  c->r[0]=R32(c->r[29]+0x000000CCu); // 801DA150
  c->r[3]=0u+0x10620000u; // 801DA154
  c->r[3]=c->r[3]+0x00004DD3u; // 801DA158
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801DA15C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801DA160
  c->r[0]=sraw(c,c->r[0],6); // 801DA164
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801DA168
  c->r[31]=c->r[0]+c->r[3]; // 801DA16C
L_801DA170:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801DA170
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA174
  c->r[7]=R32(c->r[29]+0x000000C8u); // 801DA178
  c->r[4]=c->r[1]+0x00000038u; // 801DA17C
  c->r[6]=divw((int32_t)c->r[31],(int32_t)c->r[0]); // 801DA180
  c->r[5]=c->r[1]+0x00000018u; // 801DA184
  c->lr=0x801DA18Cu; f_801D8DD0(c); // 801DA188
  cmps(c,0,(int32_t)c->r[3],0); // 801DA18C
  if (!crb(c,2)) { goto L_801DA1AC; } // 801DA190
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801DA194
  if (crb(c,2)) { goto L_801DA1A4; } // 801DA198
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DA19C
  c->lr=0x801DA1A4u; f_80126EA0(c); // 801DA1A0
L_801DA1A4:;
  c->r[3]=0u+0x00000000u; // 801DA1A4
  goto L_801DA290; // 801DA1A8
L_801DA1AC:;
  c->r[7]=c->r[1]+0x00000038u; // 801DA1AC
  c->r[5]=c->r[1]+0x00000018u; // 801DA1B0
  c->r[8]=0u+0x00000000u; // 801DA1B4
  c->r[3]=0u+0x00000000u; // 801DA1B8
  c->r[4]=0u+0x00000000u; // 801DA1BC
  goto L_801DA1E4; // 801DA1C0
L_801DA1C4:;
  c->r[6]=c->r[29]+c->r[3]; // 801DA1C4
  c->r[0]=R16(c->r[7]+c->r[4]); // 801DA1C8
  W16(c->r[6]+0x00000840u,c->r[0]); // 801DA1CC
  c->r[8]=c->r[8]+0x00000001u; // 801DA1D0
  c->r[3]=c->r[3]+0x00000034u; // 801DA1D4
  c->r[0]=R16(c->r[5]+c->r[4]); // 801DA1D8
  c->r[4]=c->r[4]+0x00000002u; // 801DA1DC
  W16(c->r[6]+0x00000842u,c->r[0]); // 801DA1E0
L_801DA1E4:;
  c->r[0]=R32(c->r[29]+0x000000C8u); // 801DA1E4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DA1E8
  if (crb(c,0)) { IRQCHK(c); goto L_801DA1C4; } // 801DA1EC
L_801DA1F0:;
  c->r[3]=c->r[29]|c->r[29]; // 801DA1F0
  c->lr=0x801DA1F8u; f_801DA5D0(c); // 801DA1F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DA1F8
  if (!crb(c,2)) { goto L_801DA218; } // 801DA1FC
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801DA200
  if (crb(c,2)) { goto L_801DA210; } // 801DA204
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DA208
  c->lr=0x801DA210u; f_80126EA0(c); // 801DA20C
L_801DA210:;
  c->r[3]=0u+0x00000000u; // 801DA210
  goto L_801DA290; // 801DA214
L_801DA218:;
  c->r[0]=0u+0x00000000u; // 801DA218
  W32(c->r[29]+0x00000114u,c->r[0]); // 801DA21C
  c->r[27]=0u+0x00000000u; // 801DA220
  goto L_801DA24C; // 801DA224
L_801DA228:;
  c->r[3]=c->r[29]|c->r[29]; // 801DA228
  c->lr=0x801DA230u; f_801DB5E0(c); // 801DA22C
  c->r[0]=R8(c->r[29]+0x0000010Eu); // 801DA230
  c->r[3]=R32(c->r[29]+0x00000114u); // 801DA234
  cmps(c,0,(int32_t)c->r[0],0); // 801DA238
  c->r[0]=c->r[3]+0x00000001u; // 801DA23C
  W32(c->r[29]+0x00000114u,c->r[0]); // 801DA240
  if (!crb(c,2)) { goto L_801DA258; } // 801DA244
  c->r[27]=c->r[27]+0x00000001u; // 801DA248
L_801DA24C:;
  c->r[0]=R32(c->r[29]+0x00000124u); // 801DA24C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DA250
  if (crb(c,0)) { IRQCHK(c); goto L_801DA228; } // 801DA254
L_801DA258:;
  c->r[4]=R32(c->r[29]+0x000000E0u); // 801DA258
  cmpu(c,0,c->r[4],0x00000002u); // 801DA25C
  if (crb(c,1)) { goto L_801DA27C; } // 801DA260
  c->r[0]=R8(c->r[29]+0x000000C4u); // 801DA264
  cmps(c,0,(int32_t)c->r[0],0); // 801DA268
  if (!crb(c,2)) { goto L_801DA27C; } // 801DA26C
  c->r[3]=c->r[29]|c->r[29]; // 801DA270
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DA274
  c->lr=0x801DA27Cu; f_801DB4F0(c); // 801DA278
L_801DA27C:;
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801DA27C
  if (crb(c,2)) { goto L_801DA28C; } // 801DA280
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DA284
  c->lr=0x801DA28Cu; f_80126EA0(c); // 801DA288
L_801DA28C:;
  c->r[3]=0u+0x00000001u; // 801DA28C
L_801DA290:;
  c->r[11]=c->r[1]+0x00000070u; // 801DA290
  c->lr=0x801DA298u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA294
  c->r[0]=R32(c->r[1]+0x00000074u); // 801DA298
  c->lr=c->r[0]; // 801DA29C
  c->r[1]=c->r[1]+0x00000070u; // 801DA2A0
  return; // 801DA2A4
}

// fn_801DA2B0
void f_801DA2B0(Ctx* __restrict c) {
  trace_call(0x801DA2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA2B0
  c->r[0]=c->lr; // 801DA2B4
  W32(c->r[1]+0x00000084u,c->r[0]); // 801DA2B8
  c->r[11]=c->r[1]+0x00000080u; // 801DA2BC
  c->lr=0x801DA2C4u; f_802E6998(c); // 801DA2C0
  cmps(c,0,(int32_t)c->r[4],0); // 801DA2C4
  c->r[26]=0u+0x803A0000u; // 801DA2C8
  c->r[15]=c->r[3]|c->r[3]; // 801DA2CC
  c->r[16]=c->r[4]|c->r[4]; // 801DA2D0
  c->r[20]=c->r[5]|c->r[5]; // 801DA2D4
  c->r[17]=c->r[7]|c->r[7]; // 801DA2D8
  c->r[18]=c->r[8]|c->r[8]; // 801DA2DC
  c->r[19]=c->r[9]|c->r[9]; // 801DA2E0
  c->r[26]=c->r[26]+0x00002DD8u; // 801DA2E4
  if (!crb(c,2)) { goto L_801DA300; } // 801DA2E8
  c->r[3]=c->r[26]+0x00000000u; // 801DA2EC
  c->r[5]=c->r[26]+0x00000124u; // 801DA2F0
  c->r[4]=0u+0x000002EAu; // 801DA2F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA2F8
  c->lr=0x801DA300u; f_80212260(c); // 801DA2FC
L_801DA300:;
  c->r[0]=rotl(c->r[20],0)&0x0000001Fu; cr0(c,c->r[0]); // 801DA300
  if (crb(c,2)) { goto L_801DA320; } // 801DA304
  c->r[6]=c->r[20]|c->r[20]; // 801DA308
  c->r[3]=c->r[26]+0x00000000u; // 801DA30C
  c->r[5]=c->r[26]+0x00000290u; // 801DA310
  c->r[4]=0u+0x000002EBu; // 801DA314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA318
  c->lr=0x801DA320u; f_80212260(c); // 801DA31C
L_801DA320:;
  c->r[0]=rotl(c->r[17],0)&0x0000001Fu; cr0(c,c->r[0]); // 801DA320
  if (crb(c,2)) { goto L_801DA340; } // 801DA324
  c->r[6]=c->r[17]|c->r[17]; // 801DA328
  c->r[3]=c->r[26]+0x00000000u; // 801DA32C
  c->r[5]=c->r[26]+0x000002D8u; // 801DA330
  c->r[4]=0u+0x000002ECu; // 801DA334
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA338
  c->lr=0x801DA340u; f_80212260(c); // 801DA33C
L_801DA340:;
  cmps(c,0,(int32_t)c->r[16],0); // 801DA340
  c->r[14]=c->r[13]+0xFFFFC4A0u; // 801DA344
  if (crb(c,2)) { goto L_801DA398; } // 801DA348
  c->r[12]=R32(c->r[16]+0x00000000u); // 801DA34C
  c->r[3]=c->r[16]|c->r[16]; // 801DA350
  c->r[12]=R32(c->r[12]+0x00000008u); // 801DA354
  c->ctr=c->r[12]; // 801DA358
  if (true) { c->lr=0x801DA360u; dispatch(c,c->ctr); } // 801DA35C
  goto L_801DA37C; // 801DA360
  c->r[0]=c->r[0]|0x00000000u; // 801DA364
L_801DA368:;
  cmpu(c,0,c->r[3],c->r[14]); // 801DA368
  if (!crb(c,2)) { goto L_801DA378; } // 801DA36C
  c->r[0]=0u+0x00000001u; // 801DA370
  goto L_801DA388; // 801DA374
L_801DA378:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DA378
L_801DA37C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA37C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA368; } // 801DA380
  c->r[0]=0u+0x00000000u; // 801DA384
L_801DA388:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA388
  if (crb(c,2)) { goto L_801DA398; } // 801DA38C
  c->r[3]=c->r[16]|c->r[16]; // 801DA390
  goto L_801DA39C; // 801DA394
L_801DA398:;
  c->r[3]=0u+0x00000000u; // 801DA398
L_801DA39C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA39C
  if (crb(c,2)) { goto L_801DA3AC; } // 801DA3A0
  c->r[0]=0u+0x00000001u; // 801DA3A4
  W32(c->r[3]+0x00000068u,c->r[0]); // 801DA3A8
L_801DA3AC:;
  c->r[3]=0u+0x805C0000u; // 801DA3AC
  c->r[3]=c->r[3]+0x00006CA0u; // 801DA3B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DA3B4
  c->lr=0x801DA3BCu; f_80126DC0(c); // 801DA3B8
  c->r[27]=0u+0x805C0000u; // 801DA3BC
  c->r[4]=0u+0x00004000u; // 801DA3C0
  c->r[3]=c->r[27]+0x00002CA0u; // 801DA3C4
  c->lr=0x801DA3CCu; f_80120C10(c); // 801DA3C8
  c->r[0]=R16(c->r[15]+0x000000D0u); // 801DA3CC
  c->r[28]=c->r[27]+0x00002CA0u; // 801DA3D0
  c->r[29]=c->r[1]+0x00000010u; // 801DA3D4
  c->r[24]=0u+0x00000000u; // 801DA3D8
  c->r[25]=c->r[20]+c->r[0]; // 801DA3DC
  c->r[14]=0u+0x00000000u; // 801DA3E0
  goto L_801DA510; // 801DA3E4
L_801DA3E8:;
  c->r[0]=rotl(c->r[25],0)&0x0000001Fu; cr0(c,c->r[0]); // 801DA3E8
  if (crb(c,2)) { goto L_801DA408; } // 801DA3EC
  c->r[6]=c->r[25]|c->r[25]; // 801DA3F0
  c->r[3]=c->r[26]+0x00000000u; // 801DA3F4
  c->r[5]=c->r[26]+0x00000324u; // 801DA3F8
  c->r[4]=0u+0x00000305u; // 801DA3FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA400
  c->lr=0x801DA408u; f_80212260(c); // 801DA404
L_801DA408:;
  c->r[0]=R32(c->r[15]+0x00000810u); // 801DA408
  c->r[3]=c->r[24]+0x00000002u; // 801DA40C
  c->r[23]=0u+0x00000002u; // 801DA410
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DA414
  if (!crb(c,1)) { goto L_801DA420; } // 801DA418
  c->r[23]=c->r[0]-c->r[24]; // 801DA41C
L_801DA420:;
  c->r[22]=(uint32_t)((int32_t)c->r[17]*(int32_t)c->r[23]); // 801DA420
  cmpu(c,0,c->r[22],0x00004000u); // 801DA424
  if (!crb(c,1)) { goto L_801DA444; } // 801DA428
  c->r[3]=c->r[26]+0x00000000u; // 801DA42C
  c->r[5]=c->r[26]+0x00000370u; // 801DA430
  c->r[4]=0u+0x0000030Du; // 801DA434
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA438
  c->lr=0x801DA440u; f_80212260(c); // 801DA43C
  cmps(c,0,(int32_t)c->r[14],0); // 801DA440
L_801DA444:;
  c->r[12]=R32(c->r[16]+0x00000000u); // 801DA444
  c->r[3]=c->r[16]|c->r[16]; // 801DA448
  c->r[4]=c->r[25]|c->r[25]; // 801DA44C
  c->r[5]=0u+0x00000000u; // 801DA450
  c->r[12]=R32(c->r[12]+0x00000044u); // 801DA454
  c->ctr=c->r[12]; // 801DA458
  if (true) { c->lr=0x801DA460u; dispatch(c,c->ctr); } // 801DA45C
  c->r[12]=R32(c->r[16]+0x00000000u); // 801DA460
  c->r[3]=c->r[16]|c->r[16]; // 801DA464
  c->r[5]=c->r[22]|c->r[22]; // 801DA468
  c->r[4]=c->r[27]+0x00002CA0u; // 801DA46C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801DA470
  c->ctr=c->r[12]; // 801DA474
  if (true) { c->lr=0x801DA47Cu; dispatch(c,c->ctr); } // 801DA478
  cmpu(c,0,c->r[3],c->r[22]); // 801DA47C
  if (crb(c,2)) { goto L_801DA49C; } // 801DA480
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801DA484
  if (crb(c,2)) { goto L_801DA494; } // 801DA488
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DA48C
  c->lr=0x801DA494u; f_80126EA0(c); // 801DA490
L_801DA494:;
  c->r[3]=0u+0x00000000u; // 801DA494
  goto L_801DA5B8; // 801DA498
L_801DA49C:;
  c->r[31]=(uint32_t)((int32_t)c->r[24]*(int32_t)52); // 801DA49C
  c->r[30]=rotl(c->r[24],1)&0xFFFFFFFEu; // 801DA4A0
  c->r[21]=0u+0x00000000u; // 801DA4A4
  goto L_801DA504; // 801DA4A8
L_801DA4AC:;
  cmps(c,0,(int32_t)c->r[19],0); // 801DA4AC
  if (crb(c,2)) { goto L_801DA4C0; } // 801DA4B0
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)c->r[21]); // 801DA4B4
  c->r[0]=R8(c->r[28]+c->r[0]); // 801DA4B8
  W16(c->r[29]+c->r[30],c->r[0]); // 801DA4BC
L_801DA4C0:;
  c->r[0]=R32(c->r[15]+0x0000011Cu); // 801DA4C0
  c->r[4]=(uint32_t)((int32_t)c->r[17]*(int32_t)c->r[21]); // 801DA4C4
  c->r[3]=c->r[15]+c->r[31]; // 801DA4C8
  c->r[3]=R32(c->r[3]+0x00000818u); // 801DA4CC
  c->r[5]=c->r[17]|c->r[17]; // 801DA4D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[18]); // 801DA4D4
  c->r[4]=c->r[4]+c->r[28]; // 801DA4D8
  c->r[20]=c->r[0]+c->r[3]; // 801DA4DC
  c->r[3]=c->r[20]|c->r[20]; // 801DA4E0
  c->lr=0x801DA4E8u; f_800043C4(c); // 801DA4E4
  c->r[3]=c->r[20]|c->r[20]; // 801DA4E8
  c->r[4]=c->r[17]|c->r[17]; // 801DA4EC
  c->lr=0x801DA4F4u; f_80120C40(c); // 801DA4F0
  c->r[24]=c->r[24]+0x00000001u; // 801DA4F4
  c->r[31]=c->r[31]+0x00000034u; // 801DA4F8
  c->r[30]=c->r[30]+0x00000002u; // 801DA4FC
  c->r[21]=c->r[21]+0x00000001u; // 801DA500
L_801DA504:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[23]); // 801DA504
  if (crb(c,0)) { IRQCHK(c); goto L_801DA4AC; } // 801DA508
  c->r[25]=c->r[25]+c->r[22]; // 801DA50C
L_801DA510:;
  c->r[7]=R32(c->r[15]+0x00000810u); // 801DA510
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[7]); // 801DA514
  if (crb(c,0)) { IRQCHK(c); goto L_801DA3E8; } // 801DA518
  cmps(c,0,(int32_t)c->r[19],0); // 801DA51C
  if (crb(c,2)) { goto L_801DA580; } // 801DA520
  c->r[3]=R32(c->r[15]+0x000000C0u); // 801DA524
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DA528
  c->r[0]=cntlz(c->r[0]); // 801DA52C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801DA530
  if (crb(c,2)) { goto L_801DA580; } // 801DA534
  c->r[6]=c->r[1]+0x00000010u; // 801DA538
  c->r[8]=0u+0x00000000u; // 801DA53C
  c->r[3]=0u+0x00000000u; // 801DA540
  c->r[4]=0u+0x00000000u; // 801DA544
  goto L_801DA568; // 801DA548
  c->r[0]=c->r[0]|0x00000000u; // 801DA54C
L_801DA550:;
  c->r[5]=c->r[15]+c->r[3]; // 801DA550
  c->r[0]=R16(c->r[6]+c->r[4]); // 801DA554
  W16(c->r[5]+0x0000084Au,c->r[0]); // 801DA558
  c->r[8]=c->r[8]+0x00000001u; // 801DA55C
  c->r[3]=c->r[3]+0x00000034u; // 801DA560
  c->r[4]=c->r[4]+0x00000002u; // 801DA564
L_801DA568:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801DA568
  if (!crb(c,0)) { goto L_801DA578; } // 801DA56C
  cmps(c,0,(int32_t)c->r[8],16); // 801DA570
  if (crb(c,0)) { IRQCHK(c); goto L_801DA550; } // 801DA574
L_801DA578:;
  c->r[0]=0u+0x00000001u; // 801DA578
  W8(c->r[15]+0x0000010Cu,c->r[0]); // 801DA57C
L_801DA580:;
  c->r[0]=R8(c->r[15]+0x00000103u); // 801DA580
  cmps(c,0,(int32_t)c->r[0],0); // 801DA584
  if (!crb(c,2)) { goto L_801DA5A4; } // 801DA588
  c->r[0]=R32(c->r[15]+0x00000114u); // 801DA58C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801DA590
  W32(c->r[15]+0x00000114u,c->r[0]); // 801DA594
  if (!crb(c,2)) { goto L_801DA5A4; } // 801DA598
  c->r[0]=0u+0x00000001u; // 801DA59C
  W8(c->r[15]+0x00000103u,c->r[0]); // 801DA5A0
L_801DA5A4:;
  c->r[0]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[0]); // 801DA5A4
  if (crb(c,2)) { goto L_801DA5B4; } // 801DA5A8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DA5AC
  c->lr=0x801DA5B4u; f_80126EA0(c); // 801DA5B0
L_801DA5B4:;
  c->r[3]=0u+0x00000001u; // 801DA5B4
L_801DA5B8:;
  c->r[11]=c->r[1]+0x00000080u; // 801DA5B8
  c->lr=0x801DA5C0u; f_802E69E4(c); // 801DA5BC
  c->r[0]=R32(c->r[1]+0x00000084u); // 801DA5C0
  c->lr=c->r[0]; // 801DA5C4
  c->r[1]=c->r[1]+0x00000080u; // 801DA5C8
  return; // 801DA5CC
}

// fn_801DA5D0
void f_801DA5D0(Ctx* __restrict c) {
  trace_call(0x801DA5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA5D0
  c->r[0]=c->lr; // 801DA5D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA5D8
  c->r[11]=c->r[1]+0x00000030u; // 801DA5DC
  c->lr=0x801DA5E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA5E0
  c->r[0]=R32(c->r[3]+0x00000804u); // 801DA5E4
  c->r[29]=0u+0x803A0000u; // 801DA5E8
  c->r[31]=c->r[3]|c->r[3]; // 801DA5EC
  cmps(c,0,(int32_t)c->r[0],0); // 801DA5F0
  c->r[29]=c->r[29]+0x00002DD8u; // 801DA5F4
  if (!crb(c,2)) { goto L_801DA610; } // 801DA5F8
  c->r[3]=c->r[29]+0x00000000u; // 801DA5FC
  c->r[5]=c->r[29]+0x000003A4u; // 801DA600
  c->r[4]=0u+0x00000352u; // 801DA604
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA608
  c->lr=0x801DA610u; f_80212260(c); // 801DA60C
L_801DA610:;
  c->r[5]=R32(c->r[31]+0x00000804u); // 801DA610
  c->r[0]=0u+0x00000000u; // 801DA614
  c->r[3]=c->r[31]|c->r[31]; // 801DA618
  c->r[4]=c->r[1]+0x00000010u; // 801DA61C
  c->r[27]=R32(c->r[5]+0x00000008u); // 801DA620
  c->r[5]=c->r[1]+0x0000000Cu; // 801DA624
  c->r[6]=c->r[1]+0x00000008u; // 801DA628
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DA62C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DA630
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DA634
  c->lr=0x801DA63Cu; f_801DB980(c); // 801DA638
  cmps(c,0,(int32_t)c->r[3],0); // 801DA63C
  if (!crb(c,2)) { goto L_801DA64C; } // 801DA640
  c->r[3]=0u+0x00000000u; // 801DA644
  goto L_801DA804; // 801DA648
L_801DA64C:;
  c->r[4]=R32(c->r[31]+0x000000D4u); // 801DA64C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DA650
  c->r[0]=R32(c->r[31]+0x000000E4u); // 801DA654
  c->r[4]=divwu(c->r[4],c->r[3]); // 801DA658
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801DA65C
  cmps(c,0,(int32_t)c->r[0],8192); // 801DA660
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 801DA664
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DA668
  W32(c->r[31]+0x00000144u,c->r[3]); // 801DA66C
  W32(c->r[31]+0x00000140u,c->r[4]); // 801DA670
  if (!crb(c,1)) { goto L_801DA694; } // 801DA674
  c->r[3]=c->r[29]+0x00000000u; // 801DA678
  c->r[5]=c->r[29]+0x000003D0u; // 801DA67C
  c->r[4]=0u+0x00000366u; // 801DA680
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA684
  c->lr=0x801DA68Cu; f_80212300(c); // 801DA688
  c->r[3]=0u+0x00000000u; // 801DA68C
  goto L_801DA804; // 801DA690
L_801DA694:;
  c->r[0]=divwu(c->r[27],c->r[0]); // 801DA694
  W32(c->r[31]+0x00000120u,c->r[0]); // 801DA698
  cmps(c,0,(int32_t)c->r[0],4); // 801DA69C
  if (!crb(c,0)) { goto L_801DA6C0; } // 801DA6A0
  c->r[3]=c->r[29]+0x00000000u; // 801DA6A4
  c->r[5]=c->r[29]+0x000003F4u; // 801DA6A8
  c->r[4]=0u+0x0000036Cu; // 801DA6AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA6B0
  c->lr=0x801DA6B8u; f_80212300(c); // 801DA6B4
  c->r[3]=0u+0x00000000u; // 801DA6B8
  goto L_801DA804; // 801DA6BC
L_801DA6C0:;
  cmps(c,0,(int32_t)c->r[0],32); // 801DA6C0
  if (!crb(c,1)) { goto L_801DA6D0; } // 801DA6C4
  c->r[0]=0u+0x00000020u; // 801DA6C8
  W32(c->r[31]+0x00000120u,c->r[0]); // 801DA6CC
L_801DA6D0:;
  c->r[4]=R32(c->r[31]+0x00000120u); // 801DA6D0
  c->r[3]=0u+0x00000000u; // 801DA6D4
  c->r[0]=R8(c->r[31]+0x0000010Au); // 801DA6D8
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 801DA6DC
  W32(c->r[31]+0x00000124u,c->r[5]); // 801DA6E0
  cmps(c,0,(int32_t)c->r[0],0); // 801DA6E4
  W32(c->r[31]+0x00000118u,c->r[5]); // 801DA6E8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801DA6EC
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 801DA6F0
  c->r[4]=R32(c->r[1]+0x00000010u); // 801DA6F4
  W32(c->r[31]+0x00000130u,c->r[4]); // 801DA6F8
  W32(c->r[31]+0x0000012Cu,c->r[3]); // 801DA6FC
  W32(c->r[31]+0x00000138u,c->r[3]); // 801DA700
  if (crb(c,2)) { goto L_801DA714; } // 801DA704
  c->r[0]=R32(c->r[31]+0x000000E0u); // 801DA708
  W32(c->r[31]+0x00000128u,c->r[0]); // 801DA70C
  goto L_801DA74C; // 801DA710
L_801DA714:;
  c->r[6]=R32(c->r[31]+0x00000144u); // 801DA714
  c->r[7]=c->r[5]+0x00000001u; // 801DA718
  c->r[0]=R32(c->r[31]+0x00000140u); // 801DA71C
  c->r[3]=c->r[6]-c->r[4]; // 801DA720
  c->r[4]=c->r[3]+0x00000001u; // 801DA724
  c->r[3]=c->r[6]-c->r[0]; // 801DA728
  c->r[4]=c->r[7]-c->r[4]; // 801DA72C
  c->r[3]=c->r[3]+0x00000001u; // 801DA730
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 801DA734
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801DA738
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 801DA73C
  if (!crb(c,2)) { goto L_801DA748; } // 801DA740
  c->r[5]=c->r[7]|c->r[7]; // 801DA744
L_801DA748:;
  W32(c->r[31]+0x00000128u,c->r[5]); // 801DA748
L_801DA74C:;
  c->r[0]=R32(c->r[31]+0x00000128u); // 801DA74C
  W32(c->r[31]+0x00000134u,c->r[0]); // 801DA750
  c->lr=0x801DA758u; f_801251B0(c); // 801DA754
  c->r[0]=R8(c->r[31]+0x0000010Fu); // 801DA758
  c->r[30]=c->r[3]|c->r[3]; // 801DA75C
  cmps(c,0,(int32_t)c->r[0],0); // 801DA760
  if (!crb(c,2)) { goto L_801DA7F8; } // 801DA764
  c->r[28]=c->r[31]|c->r[31]; // 801DA768
  c->r[27]=0u+0x00000000u; // 801DA76C
  goto L_801DA7C8; // 801DA770
L_801DA774:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801DA774
  c->lr=0x801DA77Cu; f_801D7F20(c); // 801DA778
  cmps(c,0,(int32_t)c->r[3],0); // 801DA77C
  if (!crb(c,2)) { goto L_801DA7BC; } // 801DA780
  c->r[26]=c->r[31]|c->r[31]; // 801DA784
  c->r[28]=0u+0x00000000u; // 801DA788
  c->r[29]=0u+0x00000000u; // 801DA78C
  goto L_801DA7AC; // 801DA790
L_801DA794:;
  c->r[3]=R32(c->r[31]+0x00000804u); // 801DA794
  c->r[4]=R32(c->r[26]+0x00000818u); // 801DA798
  c->lr=0x801DA7A0u; f_801D8010(c); // 801DA79C
  W32(c->r[26]+0x00000818u,c->r[29]); // 801DA7A0
  c->r[26]=c->r[26]+0x00000034u; // 801DA7A4
  c->r[28]=c->r[28]+0x00000001u; // 801DA7A8
L_801DA7AC:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 801DA7AC
  if (crb(c,0)) { IRQCHK(c); goto L_801DA794; } // 801DA7B0
  c->r[0]=0u+0x00000000u; // 801DA7B4
  goto L_801DA7D8; // 801DA7B8
L_801DA7BC:;
  W32(c->r[28]+0x00000818u,c->r[3]); // 801DA7BC
  c->r[28]=c->r[28]+0x00000034u; // 801DA7C0
  c->r[27]=c->r[27]+0x00000001u; // 801DA7C4
L_801DA7C8:;
  c->r[0]=R32(c->r[31]+0x00000810u); // 801DA7C8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DA7CC
  if (crb(c,0)) { IRQCHK(c); goto L_801DA774; } // 801DA7D0
  c->r[0]=0u+0x00000001u; // 801DA7D4
L_801DA7D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA7D8
  if (!crb(c,2)) { goto L_801DA7F0; } // 801DA7DC
  c->r[3]=c->r[30]|c->r[30]; // 801DA7E0
  c->lr=0x801DA7E8u; f_801251F0(c); // 801DA7E4
  c->r[3]=0u+0x00000000u; // 801DA7E8
  goto L_801DA804; // 801DA7EC
L_801DA7F0:;
  c->r[0]=0u+0x00000001u; // 801DA7F0
  W8(c->r[31]+0x0000010Fu,c->r[0]); // 801DA7F4
L_801DA7F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801DA7F8
  c->lr=0x801DA800u; f_801251F0(c); // 801DA7FC
  c->r[3]=0u+0x00000001u; // 801DA800
L_801DA804:;
  c->r[11]=c->r[1]+0x00000030u; // 801DA804
  c->lr=0x801DA80Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA808
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA80C
  c->lr=c->r[0]; // 801DA810
  c->r[1]=c->r[1]+0x00000030u; // 801DA814
  return; // 801DA818
}

// fn_801DA820
void f_801DA820(Ctx* __restrict c) {
  trace_call(0x801DA820u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA820
  c->r[0]=c->lr; // 801DA824
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA828
  c->r[11]=c->r[1]+0x00000030u; // 801DA82C
  c->lr=0x801DA834u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DA830
  c->r[24]=c->r[3]|c->r[3]; // 801DA834
  c->r[25]=c->r[4]|c->r[4]; // 801DA838
  c->lr=0x801DA840u; f_801251B0(c); // 801DA83C
  c->r[0]=R32(c->r[24]+0x00000804u); // 801DA840
  c->r[31]=c->r[3]|c->r[3]; // 801DA844
  cmps(c,0,(int32_t)c->r[0],0); // 801DA848
  if (!crb(c,2)) { goto L_801DA86C; } // 801DA84C
  c->r[3]=0u+0x803A0000u; // 801DA850
  c->r[5]=0u+0x803A0000u; // 801DA854
  c->r[3]=c->r[3]+0x00002DD8u; // 801DA858
  c->r[4]=0u+0x000003E0u; // 801DA85C
  c->r[5]=c->r[5]+0x0000317Cu; // 801DA860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA864
  c->lr=0x801DA86Cu; f_80212260(c); // 801DA868
L_801DA86C:;
  c->r[27]=c->r[24]+0x00000B58u; // 801DA86C
  c->r[26]=0u+0x00000000u; // 801DA870
  c->r[28]=c->r[27]|c->r[27]; // 801DA874
  c->r[29]=0u+0x801E0000u; // 801DA878
  c->r[30]=0u+0x00000001u; // 801DA87C
  goto L_801DA904; // 801DA880
L_801DA884:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801DA884
  cmps(c,0,(int32_t)c->r[0],0); // 801DA888
  if (crb(c,2)) { goto L_801DA8FC; } // 801DA88C
  c->lr=0x801DA894u; f_801E0470(c); // 801DA890
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 801DA894
  c->r[5]=c->r[25]|c->r[25]; // 801DA898
  c->r[8]=c->r[28]|c->r[28]; // 801DA89C
  c->r[7]=c->r[29]+0xFFFFBA90u; // 801DA8A0
  c->r[6]=0u+0x000000FFu; // 801DA8A4
  c->lr=0x801DA8ACu; f_801E0670(c); // 801DA8A8
  cmps(c,0,(int32_t)c->r[3],0); // 801DA8AC
  if (!crb(c,2)) { goto L_801DA8F4; } // 801DA8B0
  c->r[28]=0u+0x00000000u; // 801DA8B4
  c->r[30]=0u+0x00000000u; // 801DA8B8
  goto L_801DA8DC; // 801DA8BC
L_801DA8C0:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 801DA8C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DA8C4
  if (crb(c,2)) { goto L_801DA8D4; } // 801DA8C8
  c->lr=0x801DA8D0u; f_801DE300(c); // 801DA8CC
  W32(c->r[27]+0x00000004u,c->r[30]); // 801DA8D0
L_801DA8D4:;
  c->r[27]=c->r[27]+0x00000038u; // 801DA8D4
  c->r[28]=c->r[28]+0x00000001u; // 801DA8D8
L_801DA8DC:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[26]); // 801DA8DC
  if (crb(c,0)) { IRQCHK(c); goto L_801DA8C0; } // 801DA8E0
  c->r[3]=c->r[31]|c->r[31]; // 801DA8E4
  c->lr=0x801DA8ECu; f_801251F0(c); // 801DA8E8
  c->r[3]=0u+0x00000000u; // 801DA8EC
  goto L_801DA91C; // 801DA8F0
L_801DA8F4:;
  W32(c->r[28]+0x00000004u,c->r[3]); // 801DA8F4
  W8(c->r[3]+0x000000A1u,c->r[30]); // 801DA8F8
L_801DA8FC:;
  c->r[28]=c->r[28]+0x00000038u; // 801DA8FC
  c->r[26]=c->r[26]+0x00000001u; // 801DA900
L_801DA904:;
  c->r[0]=R32(c->r[24]+0x0000080Cu); // 801DA904
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801DA908
  if (crb(c,0)) { IRQCHK(c); goto L_801DA884; } // 801DA90C
  c->r[3]=c->r[31]|c->r[31]; // 801DA910
  c->lr=0x801DA918u; f_801251F0(c); // 801DA914
  c->r[3]=0u+0x00000001u; // 801DA918
L_801DA91C:;
  c->r[11]=c->r[1]+0x00000030u; // 801DA91C
  c->lr=0x801DA924u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DA920
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA924
  c->lr=c->r[0]; // 801DA928
  c->r[1]=c->r[1]+0x00000030u; // 801DA92C
  return; // 801DA930
}

// fn_801DA940
void f_801DA940(Ctx* __restrict c) {
  trace_call(0x801DA940u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA940
  c->r[0]=c->lr; // 801DA944
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA948
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DA94C
  c->r[31]=c->r[3]|c->r[3]; // 801DA950
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DA954
  c->r[30]=0u+0x803A0000u; // 801DA958
  c->r[30]=c->r[30]+0x00002DD8u; // 801DA95C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DA960
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DA964
  c->r[0]=R8(c->r[3]+0x00000101u); // 801DA968
  cmps(c,0,(int32_t)c->r[0],0); // 801DA96C
  if (crb(c,2)) { goto L_801DAB10; } // 801DA970
  c->r[0]=R8(c->r[3]+0x00000104u); // 801DA974
  cmps(c,0,(int32_t)c->r[0],0); // 801DA978
  if (crb(c,2)) { goto L_801DA9B8; } // 801DA97C
  c->r[0]=R8(c->r[3]+0x00000105u); // 801DA980
  cmps(c,0,(int32_t)c->r[0],0); // 801DA984
  if (!crb(c,2)) { goto L_801DA9B8; } // 801DA988
  c->r[3]=c->r[30]+0x00000000u; // 801DA98C
  c->r[5]=c->r[30]+0x00000414u; // 801DA990
  c->r[4]=0u+0x00000434u; // 801DA994
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DA998
  c->lr=0x801DA9A0u; f_80212300(c); // 801DA99C
  c->r[12]=R32(c->r[31]+0x00000000u); // 801DA9A0
  c->r[3]=c->r[31]|c->r[31]; // 801DA9A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DA9A8
  c->ctr=c->r[12]; // 801DA9AC
  if (true) { c->lr=0x801DA9B4u; dispatch(c,c->ctr); } // 801DA9B0
  goto L_801DAB10; // 801DA9B4
L_801DA9B8:;
  c->r[0]=R8(c->r[3]+0x00000102u); // 801DA9B8
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9BC
  if (crb(c,2)) { goto L_801DAA10; } // 801DA9C0
  c->r[0]=R32(c->r[3]+0x0000080Cu); // 801DA9C4
  c->r[4]=c->r[3]+0x00000B58u; // 801DA9C8
  c->ctr=c->r[0]; // 801DA9CC
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9D0
  if (!crb(c,1)) { goto L_801DAA10; } // 801DA9D4
L_801DA9D8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DA9D8
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9DC
  if (crb(c,2)) { goto L_801DAA08; } // 801DA9E0
  c->r[0]=R32(c->r[4]+0x00000004u); // 801DA9E4
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9E8
  if (!crb(c,2)) { goto L_801DAA08; } // 801DA9EC
  c->r[12]=R32(c->r[31]+0x00000000u); // 801DA9F0
  c->r[3]=c->r[31]|c->r[31]; // 801DA9F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DA9F8
  c->ctr=c->r[12]; // 801DA9FC
  if (true) { c->lr=0x801DAA04u; dispatch(c,c->ctr); } // 801DAA00
  goto L_801DAB10; // 801DAA04
L_801DAA08:;
  c->r[4]=c->r[4]+0x00000038u; // 801DAA08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA9D8; } // 801DAA0C
L_801DAA10:;
  c->r[0]=R8(c->r[3]+0x00000109u); // 801DAA10
  cmps(c,0,(int32_t)c->r[0],0); // 801DAA14
  if (crb(c,2)) { goto L_801DAABC; } // 801DAA18
  c->r[0]=R32(c->r[3]+0x00000174u); // 801DAA1C
  cmps(c,0,(int32_t)c->r[0],0); // 801DAA20
  if (!crb(c,2)) { goto L_801DAABC; } // 801DAA24
  c->r[28]=R32(c->r[3]+0x00000808u); // 801DAA28
  c->r[29]=c->r[13]+0xFFFFC4A0u; // 801DAA2C
  cmps(c,0,(int32_t)c->r[28],0); // 801DAA30
  if (crb(c,2)) { goto L_801DAA7C; } // 801DAA34
  c->r[12]=R32(c->r[28]+0x00000000u); // 801DAA38
  c->r[3]=c->r[28]|c->r[28]; // 801DAA3C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801DAA40
  c->ctr=c->r[12]; // 801DAA44
  if (true) { c->lr=0x801DAA4Cu; dispatch(c,c->ctr); } // 801DAA48
  goto L_801DAA64; // 801DAA4C
L_801DAA50:;
  cmpu(c,0,c->r[3],c->r[29]); // 801DAA50
  if (!crb(c,2)) { goto L_801DAA60; } // 801DAA54
  c->r[0]=0u+0x00000001u; // 801DAA58
  goto L_801DAA70; // 801DAA5C
L_801DAA60:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DAA60
L_801DAA64:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DAA64
  if (!crb(c,2)) { IRQCHK(c); goto L_801DAA50; } // 801DAA68
  c->r[0]=0u+0x00000000u; // 801DAA6C
L_801DAA70:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DAA70
  if (crb(c,2)) { goto L_801DAA7C; } // 801DAA74
  goto L_801DAA80; // 801DAA78
L_801DAA7C:;
  c->r[28]=0u+0x00000000u; // 801DAA7C
L_801DAA80:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DAA80
  if (!crb(c,2)) { goto L_801DAA90; } // 801DAA84
  c->r[0]=0u+0x00000000u; // 801DAA88
  goto L_801DAAA4; // 801DAA8C
L_801DAA90:;
  c->lr=0x801DAA94u; f_80134210(c); // 801DAA90
  c->r[0]=c->r[3]^0x00000001u; // 801DAA94
  c->r[0]=cntlz(c->r[0]); // 801DAA98
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801DAA9C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DAAA0
L_801DAAA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DAAA4
  if (!crb(c,2)) { goto L_801DAABC; } // 801DAAA8
  c->r[0]=0u+0x00000000u; // 801DAAAC
  W8(c->r[31]+0x00000109u,c->r[0]); // 801DAAB0
  c->r[3]=c->r[31]|c->r[31]; // 801DAAB4
  c->lr=0x801DAABCu; f_801DB8C0(c); // 801DAAB8
L_801DAABC:;
  c->r[0]=R8(c->r[31]+0x00000106u); // 801DAABC
  cmps(c,0,(int32_t)c->r[0],0); // 801DAAC0
  if (crb(c,2)) { goto L_801DAAE4; } // 801DAAC4
  c->r[3]=c->r[30]+0x00000000u; // 801DAAC8
  c->r[5]=c->r[30]+0x0000042Cu; // 801DAACC
  c->r[4]=0u+0x00000455u; // 801DAAD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DAAD4
  c->lr=0x801DAADCu; f_80212300(c); // 801DAAD8
  c->r[0]=0u+0x00000000u; // 801DAADC
  W8(c->r[31]+0x00000106u,c->r[0]); // 801DAAE0
L_801DAAE4:;
  c->r[28]=c->r[31]+0x00000B58u; // 801DAAE4
  c->r[29]=0u+0x00000000u; // 801DAAE8
  goto L_801DAB04; // 801DAAEC
L_801DAAF0:;
  c->r[3]=c->r[31]|c->r[31]; // 801DAAF0
  c->r[4]=c->r[28]|c->r[28]; // 801DAAF4
  c->lr=0x801DAAFCu; f_801DAB30(c); // 801DAAF8
  c->r[28]=c->r[28]+0x00000038u; // 801DAAFC
  c->r[29]=c->r[29]+0x00000001u; // 801DAB00
L_801DAB04:;
  c->r[0]=R32(c->r[31]+0x0000080Cu); // 801DAB04
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DAB08
  if (crb(c,0)) { IRQCHK(c); goto L_801DAAF0; } // 801DAB0C
L_801DAB10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAB10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DAB14
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DAB18
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DAB1C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DAB20
  c->lr=c->r[0]; // 801DAB24
  c->r[1]=c->r[1]+0x00000020u; // 801DAB28
  return; // 801DAB2C
}

// fn_801DAB30
void f_801DAB30(Ctx* __restrict c) {
  trace_call(0x801DAB30u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAB30
  c->r[0]=c->lr; // 801DAB34
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801DAB38
  c->r[11]=c->r[1]+0x00000050u; // 801DAB3C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801DAB40
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801DAB44
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 801DAB48
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 801DAB4C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 801DAB50
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 801DAB54
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 801DAB58
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 801DAB5C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 801DAB60
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 801DAB64
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 801DAB68
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 801DAB6C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[25]);} // 801DAB70
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,25,ea,0,0);} // 801DAB74
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[24]);} // 801DAB78
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,24,ea,0,0);} // 801DAB7C
  c->lr=0x801DAB84u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DAB80
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DAB84
  c->r[31]=c->r[3]|c->r[3]; // 801DAB88
  c->r[26]=c->r[4]|c->r[4]; // 801DAB8C
  cmps(c,0,(int32_t)c->r[0],0); // 801DAB90
  if (crb(c,2)) { goto L_801DADFC; } // 801DAB94
  c->r[0]=R8(c->r[4]+0x00000008u); // 801DAB98
  c->r[5]=0u+0x43300000u; // 801DAB9C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801DABA0
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[31]=c->ps1[31]=RF32(ea);} // 801DABA4
  W32(c->r[1]+0x00000028u,c->r[5]); // 801DABA8
  {uint32_t ea=c->r[2]+0xFFFFA988u; c->f[2]=RF64(ea);} // 801DABAC
  c->f[30]=c->f[31]; // 801DABB0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801DABB4
  {uint32_t ea=c->r[2]+0xFFFFA994u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DABB8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801DABBC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DABC0
  c->r[6]=R8(c->r[4]+0x00000009u); // 801DABC4
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[3]); // 801DABC8
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DABCC
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801DABD0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801DABD4
  cmpu(c,0,c->r[6],0x00000001u); // 801DABD8
  {uint32_t ea=c->r[2]+0xFFFFA978u; c->f[29]=c->ps1[29]=RF32(ea);} // 801DABDC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801DABE0
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 801DABE4
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[2]); // 801DABE8
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[4]); // 801DABEC
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 801DABF0
  if (crb(c,1)) { goto L_801DAC24; } // 801DABF4
  c->r[0]=c->r[6]+0xFFFFFFC1u; // 801DABF8
  W32(c->r[1]+0x00000028u,c->r[5]); // 801DABFC
  c->r[0]=c->r[0]^0x80000000u; // 801DAC00
  {uint32_t ea=c->r[2]+0xFFFFA980u; c->f[2]=RF64(ea);} // 801DAC04
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801DAC08
  {uint32_t ea=c->r[2]+0xFFFFA998u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAC0C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801DAC10
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DAC14
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DAC18
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 801DAC1C
  goto L_801DAC4C; // 801DAC20
L_801DAC24:;
  c->r[0]=c->r[6]+0xFFFFFFC0u; // 801DAC24
  W32(c->r[1]+0x00000028u,c->r[5]); // 801DAC28
  c->r[0]=c->r[0]^0x80000000u; // 801DAC2C
  {uint32_t ea=c->r[2]+0xFFFFA980u; c->f[2]=RF64(ea);} // 801DAC30
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801DAC34
  {uint32_t ea=c->r[2]+0xFFFFA998u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAC38
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 801DAC3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DAC40
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801DAC44
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 801DAC48
L_801DAC4C:;
  {uint32_t ea=c->r[4]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAC4C
  c->r[30]=c->r[1]+0x00000018u; // 801DAC50
  {uint32_t ea=c->r[2]+0xFFFFA978u; c->f[27]=c->ps1[27]=RF32(ea);} // 801DAC54
  c->r[27]=0u+0x00000000u; // 801DAC58
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 801DAC5C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAC60
  {uint32_t ea=c->r[2]+0xFFFFA990u; c->f[26]=c->ps1[26]=RF32(ea);} // 801DAC64
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAC68
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 801DAC6C
  {uint32_t ea=c->r[2]+0xFFFFA978u; c->f[24]=c->ps1[24]=RF32(ea);} // 801DAC70
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DAC74
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 801DAC78
  {uint32_t ea=c->r[3]+0x00000018u; c->f[25]=c->ps1[25]=RF32(ea);} // 801DAC7C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 801DAC80
  c->r[28]=R8(c->r[3]+0x0000001Du); // 801DAC84
  c->r[29]=R8(c->r[3]+0x0000001Cu); // 801DAC88
  {uint32_t ea=c->r[2]+0xFFFFA978u; c->f[28]=c->ps1[28]=RF32(ea);} // 801DAC8C
L_801DAC90:;
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[28]);} // 801DAC90
  c->r[3]=c->r[31]|c->r[31]; // 801DAC94
  c->r[4]=c->r[27]|c->r[27]; // 801DAC98
  c->lr=0x801DACA0u; f_801BB5A0(c); // 801DAC9C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DACA0
  c->r[27]=c->r[27]+0x00000001u; // 801DACA4
  cmps(c,0,(int32_t)c->r[27],3); // 801DACA8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801DACAC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 801DACB0
  c->r[30]=c->r[30]+0x00000004u; // 801DACB4
  if (crb(c,0)) { IRQCHK(c); goto L_801DAC90; } // 801DACB8
  c->r[30]=c->r[1]+0x00000008u; // 801DACBC
  c->r[27]=0u+0x00000000u; // 801DACC0
L_801DACC4:;
  c->r[3]=c->r[31]|c->r[31]; // 801DACC4
  c->r[4]=c->r[27]|c->r[27]; // 801DACC8
  c->lr=0x801DACD0u; f_801BB820(c); // 801DACCC
  c->r[27]=c->r[27]+0x00000001u; // 801DACD0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 801DACD4
  cmps(c,0,(int32_t)c->r[27],4); // 801DACD8
  c->r[30]=c->r[30]+0x00000004u; // 801DACDC
  if (crb(c,0)) { IRQCHK(c); goto L_801DACC4; } // 801DACE0
  c->lr=0x801DACE8u; f_801251B0(c); // 801DACE4
  c->r[27]=R32(c->r[26]+0x00000004u); // 801DACE8
  c->r[30]=c->r[3]|c->r[3]; // 801DACEC
  cmps(c,0,(int32_t)c->r[27],0); // 801DACF0
  if (crb(c,2)) { goto L_801DADF4; } // 801DACF4
  c->f[1]=c->f[31]; // 801DACF8
  c->r[3]=c->r[27]|c->r[27]; // 801DACFC
  c->lr=0x801DAD04u; f_801DE780(c); // 801DAD00
  c->f[1]=c->f[30]; // 801DAD04
  c->r[3]=c->r[27]|c->r[27]; // 801DAD08
  c->lr=0x801DAD10u; f_801DE830(c); // 801DAD0C
  c->f[1]=c->f[29]; // 801DAD10
  c->r[3]=c->r[27]|c->r[27]; // 801DAD14
  c->lr=0x801DAD1Cu; f_801DE890(c); // 801DAD18
  c->f[1]=c->f[27]; // 801DAD1C
  c->r[3]=c->r[27]|c->r[27]; // 801DAD20
  c->lr=0x801DAD28u; f_801DE8B0(c); // 801DAD24
  c->f[1]=c->f[26]; // 801DAD28
  c->r[3]=c->r[27]|c->r[27]; // 801DAD2C
  c->lr=0x801DAD34u; f_801DE8D0(c); // 801DAD30
  c->f[1]=c->f[25]; // 801DAD34
  c->r[3]=c->r[27]|c->r[27]; // 801DAD38
  c->r[4]=c->r[29]|c->r[29]; // 801DAD3C
  c->lr=0x801DAD44u; f_801DE8F0(c); // 801DAD40
  c->r[3]=c->r[27]|c->r[27]; // 801DAD44
  c->r[4]=c->r[28]|c->r[28]; // 801DAD48
  c->lr=0x801DAD50u; f_801DE9E0(c); // 801DAD4C
  c->r[4]=R32(c->r[31]+0x00000020u); // 801DAD50
  c->r[3]=c->r[27]|c->r[27]; // 801DAD54
  c->lr=0x801DAD5Cu; f_801DEA20(c); // 801DAD58
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAD5C
  c->r[3]=c->r[27]|c->r[27]; // 801DAD60
  c->lr=0x801DAD68u; f_801DEA40(c); // 801DAD64
  c->f[1]=c->f[24]; // 801DAD68
  c->r[3]=c->r[27]|c->r[27]; // 801DAD6C
  c->lr=0x801DAD74u; f_801DEA70(c); // 801DAD70
  c->r[29]=c->r[1]+0x00000018u; // 801DAD74
  c->r[28]=0u+0x00000000u; // 801DAD78
L_801DAD7C:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DAD7C
  c->r[3]=c->r[27]|c->r[27]; // 801DAD80
  c->r[4]=c->r[28]|c->r[28]; // 801DAD84
  c->lr=0x801DAD8Cu; f_801DEAB0(c); // 801DAD88
  c->r[28]=c->r[28]+0x00000001u; // 801DAD8C
  c->r[29]=c->r[29]+0x00000004u; // 801DAD90
  cmps(c,0,(int32_t)c->r[28],3); // 801DAD94
  if (crb(c,0)) { IRQCHK(c); goto L_801DAD7C; } // 801DAD98
  c->r[29]=c->r[1]+0x00000008u; // 801DAD9C
  c->r[28]=0u+0x00000000u; // 801DADA0
L_801DADA4:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DADA4
  c->r[3]=c->r[27]|c->r[27]; // 801DADA8
  c->r[4]=c->r[28]|c->r[28]; // 801DADAC
  c->lr=0x801DADB4u; f_801DEB70(c); // 801DADB0
  c->r[28]=c->r[28]+0x00000001u; // 801DADB4
  c->r[29]=c->r[29]+0x00000004u; // 801DADB8
  cmps(c,0,(int32_t)c->r[28],4); // 801DADBC
  if (crb(c,0)) { IRQCHK(c); goto L_801DADA4; } // 801DADC0
  c->r[29]=c->r[31]+0x00000050u; // 801DADC4
  c->r[28]=0u+0x00000000u; // 801DADC8
  goto L_801DADE8; // 801DADCC
L_801DADD0:;
  c->r[3]=c->r[27]|c->r[27]; // 801DADD0
  c->r[4]=c->r[28]|c->r[28]; // 801DADD4
  c->r[5]=c->r[29]|c->r[29]; // 801DADD8
  c->lr=0x801DADE0u; f_801DEC30(c); // 801DADDC
  c->r[29]=c->r[29]+0x00000018u; // 801DADE0
  c->r[28]=c->r[28]+0x00000001u; // 801DADE4
L_801DADE8:;
  c->r[0]=R32(c->r[31]+0x00000814u); // 801DADE8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801DADEC
  if (crb(c,0)) { IRQCHK(c); goto L_801DADD0; } // 801DADF0
L_801DADF4:;
  c->r[3]=c->r[30]|c->r[30]; // 801DADF4
  c->lr=0x801DADFCu; f_801251F0(c); // 801DADF8
L_801DADFC:;
  c->r[11]=c->r[1]+0x00000050u; // 801DADFC
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 801DAE00
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801DAE04
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 801DAE08
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 801DAE0C
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 801DAE10
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 801DAE14
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 801DAE18
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 801DAE1C
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 801DAE20
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 801DAE24
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 801DAE28
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 801DAE2C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,25,ea,0,0);} // 801DAE30
  {uint32_t ea=c->r[1]+0x00000060u; c->f[25]=RF64(ea);} // 801DAE34
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,24,ea,0,0);} // 801DAE38
  {uint32_t ea=c->r[1]+0x00000050u; c->f[24]=RF64(ea);} // 801DAE3C
  c->lr=0x801DAE44u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DAE40
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801DAE44
  c->lr=c->r[0]; // 801DAE48
  c->r[1]=c->r[1]+0x000000D0u; // 801DAE4C
  return; // 801DAE50
}

// fn_801DAE60
void f_801DAE60(Ctx* __restrict c) {
  trace_call(0x801DAE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAE60
  c->r[0]=c->lr; // 801DAE64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAE68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DAE6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DAE70
  c->r[30]=c->r[3]|c->r[3]; // 801DAE74
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DAE78
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DAE7C
  c->r[0]=R8(c->r[3]+0x00000102u); // 801DAE80
  cmps(c,0,(int32_t)c->r[0],0); // 801DAE84
  if (crb(c,2)) { goto L_801DB014; } // 801DAE88
  c->r[0]=R8(c->r[3]+0x00000B58u); // 801DAE8C
  cmps(c,0,(int32_t)c->r[0],0); // 801DAE90
  if (crb(c,2)) { goto L_801DB014; } // 801DAE94
  c->r[31]=R32(c->r[3]+0x00000B5Cu); // 801DAE98
  cmps(c,0,(int32_t)c->r[31],0); // 801DAE9C
  if (crb(c,2)) { goto L_801DB014; } // 801DAEA0
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 801DAEA4
  c->r[4]=0u+0x00000000u; // 801DAEA8
  cmps(c,0,(int32_t)c->r[5],0); // 801DAEAC
  if (crb(c,2)) { goto L_801DAEE0; } // 801DAEB0
  c->r[6]=R32(c->r[5]+0x00000000u); // 801DAEB4
  c->r[5]=0u+0x00000000u; // 801DAEB8
  cmps(c,0,(int32_t)c->r[6],0); // 801DAEBC
  if (crb(c,2)) { goto L_801DAED4; } // 801DAEC0
  c->r[0]=R16(c->r[6]+0x00000038u); // 801DAEC4
  cmpu(c,0,c->r[0],0x00000001u); // 801DAEC8
  if (!crb(c,2)) { goto L_801DAED4; } // 801DAECC
  c->r[5]=0u+0x00000001u; // 801DAED0
L_801DAED4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DAED4
  if (crb(c,2)) { goto L_801DAEE0; } // 801DAED8
  c->r[4]=0u+0x00000001u; // 801DAEDC
L_801DAEE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DAEE0
  if (crb(c,2)) { goto L_801DB014; } // 801DAEE4
  c->r[28]=R32(c->r[3]+0x00000808u); // 801DAEE8
  c->r[29]=c->r[13]+0xFFFFC4A0u; // 801DAEEC
  cmps(c,0,(int32_t)c->r[28],0); // 801DAEF0
  if (crb(c,2)) { goto L_801DAF3C; } // 801DAEF4
  c->r[12]=R32(c->r[28]+0x00000000u); // 801DAEF8
  c->r[3]=c->r[28]|c->r[28]; // 801DAEFC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801DAF00
  c->ctr=c->r[12]; // 801DAF04
  if (true) { c->lr=0x801DAF0Cu; dispatch(c,c->ctr); } // 801DAF08
  goto L_801DAF24; // 801DAF0C
L_801DAF10:;
  cmpu(c,0,c->r[3],c->r[29]); // 801DAF10
  if (!crb(c,2)) { goto L_801DAF20; } // 801DAF14
  c->r[0]=0u+0x00000001u; // 801DAF18
  goto L_801DAF30; // 801DAF1C
L_801DAF20:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DAF20
L_801DAF24:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DAF24
  if (!crb(c,2)) { IRQCHK(c); goto L_801DAF10; } // 801DAF28
  c->r[0]=0u+0x00000000u; // 801DAF2C
L_801DAF30:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DAF30
  if (crb(c,2)) { goto L_801DAF3C; } // 801DAF34
  goto L_801DAF40; // 801DAF38
L_801DAF3C:;
  c->r[28]=0u+0x00000000u; // 801DAF3C
L_801DAF40:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DAF40
  if (!crb(c,2)) { goto L_801DAF50; } // 801DAF44
  c->r[0]=0u+0x00000000u; // 801DAF48
  goto L_801DAF64; // 801DAF4C
L_801DAF50:;
  c->lr=0x801DAF54u; f_80134210(c); // 801DAF50
  c->r[0]=c->r[3]^0x00000001u; // 801DAF54
  c->r[0]=cntlz(c->r[0]); // 801DAF58
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801DAF5C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DAF60
L_801DAF64:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DAF64
  if (crb(c,2)) { goto L_801DAF7C; } // 801DAF68
  c->r[0]=0u+0x00000001u; // 801DAF6C
  W8(c->r[30]+0x00000109u,c->r[0]); // 801DAF70
  c->r[3]=c->r[30]|c->r[30]; // 801DAF74
  c->lr=0x801DAF7Cu; f_801DB8C0(c); // 801DAF78
L_801DAF7C:;
  c->r[0]=R8(c->r[30]+0x0000010Du); // 801DAF7C
  cmps(c,0,(int32_t)c->r[0],0); // 801DAF80
  if (!crb(c,2)) { goto L_801DB014; } // 801DAF84
  c->r[0]=R8(c->r[30]+0x0000010Au); // 801DAF88
  cmps(c,0,(int32_t)c->r[0],0); // 801DAF8C
  if (!crb(c,2)) { goto L_801DB014; } // 801DAF90
  c->r[0]=R8(c->r[30]+0x00000109u); // 801DAF94
  cmps(c,0,(int32_t)c->r[0],0); // 801DAF98
  if (!crb(c,2)) { goto L_801DB014; } // 801DAF9C
  c->r[3]=c->r[31]|c->r[31]; // 801DAFA0
  c->lr=0x801DAFA8u; f_801DEF00(c); // 801DAFA4
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801DAFA8
  c->r[28]=divwu(c->r[3],c->r[0]); // 801DAFAC
  goto L_801DB008; // 801DAFB0
L_801DAFB4:;
  c->r[0]=R8(c->r[30]+0x00000109u); // 801DAFB4
  cmps(c,0,(int32_t)c->r[0],0); // 801DAFB8
  if (!crb(c,2)) { goto L_801DAFF8; } // 801DAFBC
  c->r[0]=R32(c->r[30]+0x00000174u); // 801DAFC0
  cmps(c,0,(int32_t)c->r[0],0); // 801DAFC4
  if (crb(c,2)) { goto L_801DAFF8; } // 801DAFC8
  c->r[3]=R32(c->r[30]+0x00000124u); // 801DAFCC
  c->r[4]=R32(c->r[30]+0x00000148u); // 801DAFD0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DAFD4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DAFD8
  if (crb(c,0)) { goto L_801DAFF8; } // 801DAFDC
  c->r[0]=0u+0x00000001u; // 801DAFE0
  W8(c->r[30]+0x00000106u,c->r[0]); // 801DAFE4
  c->r[3]=c->r[30]|c->r[30]; // 801DAFE8
  W8(c->r[30]+0x00000109u,c->r[0]); // 801DAFEC
  c->lr=0x801DAFF4u; f_801DB8C0(c); // 801DAFF0
  goto L_801DB014; // 801DAFF4
L_801DAFF8:;
  c->r[3]=c->r[30]|c->r[30]; // 801DAFF8
  c->lr=0x801DB000u; f_801DB150(c); // 801DAFFC
  c->r[3]=c->r[30]|c->r[30]; // 801DB000
  c->lr=0x801DB008u; f_801DB5E0(c); // 801DB004
L_801DB008:;
  c->r[0]=R32(c->r[30]+0x00000138u); // 801DB008
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801DB00C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DAFB4; } // 801DB010
L_801DB014:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DB018
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DB01C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DB020
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DB024
  c->lr=c->r[0]; // 801DB028
  c->r[1]=c->r[1]+0x00000020u; // 801DB02C
  return; // 801DB030
}

// fn_801DB040
void f_801DB040(Ctx* __restrict c) {
  trace_call(0x801DB040u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB040
  c->r[0]=c->lr; // 801DB044
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB048
  c->r[11]=c->r[1]+0x00000030u; // 801DB04C
  c->lr=0x801DB054u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB050
  c->r[22]=c->r[3]|c->r[3]; // 801DB054
  c->r[23]=c->r[4]|c->r[4]; // 801DB058
  c->r[24]=c->r[5]|c->r[5]; // 801DB05C
  c->lr=0x801DB064u; f_801251B0(c); // 801DB060
  c->r[31]=c->r[3]|c->r[3]; // 801DB064
  c->r[28]=c->r[22]|c->r[22]; // 801DB068
  c->r[29]=c->r[22]+0x00000B58u; // 801DB06C
  c->r[27]=0u+0x00000000u; // 801DB070
  goto L_801DB11C; // 801DB074
L_801DB078:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801DB078
  cmps(c,0,(int32_t)c->r[0],0); // 801DB07C
  if (crb(c,2)) { goto L_801DB110; } // 801DB080
  c->r[26]=R32(c->r[29]+0x00000004u); // 801DB084
  cmps(c,0,(int32_t)c->r[26],0); // 801DB088
  if (crb(c,2)) { goto L_801DB110; } // 801DB08C
  c->r[25]=0u+0x00000000u; // 801DB090
  goto L_801DB0F8; // 801DB094
L_801DB098:;
  cmps(c,0,(int32_t)c->r[25],2); // 801DB098
  if (crb(c,0)) { goto L_801DB0A8; } // 801DB09C
  c->r[30]=0u+0x00000000u; // 801DB0A0
  goto L_801DB0CC; // 801DB0A4
L_801DB0A8:;
  c->r[3]=c->r[28]+c->r[25]; // 801DB0A8
  c->r[0]=R8(c->r[3]+0x00000B68u); // 801DB0AC
  cmps(c,0,(int32_t)c->r[0],16); // 801DB0B0
  if (crb(c,0)) { goto L_801DB0C0; } // 801DB0B4
  c->r[30]=0u+0x00000000u; // 801DB0B8
  goto L_801DB0CC; // 801DB0BC
L_801DB0C0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801DB0C0
  c->r[3]=c->r[22]+c->r[0]; // 801DB0C4
  c->r[30]=c->r[3]+0x00000818u; // 801DB0C8
L_801DB0CC:;
  c->r[5]=R32(c->r[30]+0x00000000u); // 801DB0CC
  c->r[3]=c->r[26]|c->r[26]; // 801DB0D0
  c->r[4]=c->r[25]|c->r[25]; // 801DB0D4
  c->r[6]=c->r[23]|c->r[23]; // 801DB0D8
  c->lr=0x801DB0E0u; f_801DEF20(c); // 801DB0DC
  c->r[5]=R32(c->r[30]+0x00000000u); // 801DB0E0
  c->r[3]=c->r[26]|c->r[26]; // 801DB0E4
  c->r[4]=c->r[25]|c->r[25]; // 801DB0E8
  c->r[6]=c->r[24]|c->r[24]; // 801DB0EC
  c->lr=0x801DB0F4u; f_801DEFA0(c); // 801DB0F0
  c->r[25]=c->r[25]+0x00000001u; // 801DB0F4
L_801DB0F8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DB0F8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801DB0FC
  if (crb(c,0)) { IRQCHK(c); goto L_801DB098; } // 801DB100
  c->r[3]=c->r[26]|c->r[26]; // 801DB104
  c->r[4]=0u+0x00000001u; // 801DB108
  c->lr=0x801DB110u; f_801DF020(c); // 801DB10C
L_801DB110:;
  c->r[29]=c->r[29]+0x00000038u; // 801DB110
  c->r[28]=c->r[28]+0x00000038u; // 801DB114
  c->r[27]=c->r[27]+0x00000001u; // 801DB118
L_801DB11C:;
  c->r[0]=R32(c->r[22]+0x0000080Cu); // 801DB11C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DB120
  if (crb(c,0)) { IRQCHK(c); goto L_801DB078; } // 801DB124
  c->r[3]=c->r[31]|c->r[31]; // 801DB128
  c->lr=0x801DB130u; f_801251F0(c); // 801DB12C
  c->r[11]=c->r[1]+0x00000030u; // 801DB130
  c->lr=0x801DB138u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB134
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB138
  c->lr=c->r[0]; // 801DB13C
  c->r[1]=c->r[1]+0x00000030u; // 801DB140
  return; // 801DB144
}

// fn_801DB150
void f_801DB150(Ctx* __restrict c) {
  trace_call(0x801DB150u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB150
  c->r[0]=c->lr; // 801DB154
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB158
  c->r[11]=c->r[1]+0x00000030u; // 801DB15C
  c->lr=0x801DB164u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB160
  c->r[4]=R32(c->r[3]+0x0000013Cu); // 801DB164
  c->r[31]=0u+0x803A0000u; // 801DB168
  c->r[0]=R32(c->r[3]+0x00000144u); // 801DB16C
  c->r[30]=c->r[3]|c->r[3]; // 801DB170
  c->r[4]=c->r[4]+0x00000001u; // 801DB174
  W32(c->r[3]+0x0000013Cu,c->r[4]); // 801DB178
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DB17C
  c->r[31]=c->r[31]+0x00002DD8u; // 801DB180
  if (!crb(c,1)) { goto L_801DB1E8; } // 801DB184
  c->r[0]=R8(c->r[3]+0x000000C4u); // 801DB188
  cmps(c,0,(int32_t)c->r[0],0); // 801DB18C
  if (crb(c,2)) { goto L_801DB1D4; } // 801DB190
  c->r[4]=0u+0x80000000u; // 801DB194
  c->r[5]=R32(c->r[3]+0x00000110u); // 801DB198
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DB19C
  c->r[4]=R32(c->r[3]+0x00000140u); // 801DB1A0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DB1A4
  W32(c->r[3]+0x0000013Cu,c->r[4]); // 801DB1A8
  if (!crb(c,0)) { goto L_801DB1B8; } // 801DB1AC
  c->r[0]=c->r[5]+0x00000001u; // 801DB1B0
  W32(c->r[3]+0x00000110u,c->r[0]); // 801DB1B4
L_801DB1B8:;
  c->r[5]=R32(c->r[30]+0x00000134u); // 801DB1B8
  c->r[3]=c->r[30]|c->r[30]; // 801DB1BC
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801DB1C0
  c->r[4]=0u+0x00000000u; // 801DB1C4
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 801DB1C8
  c->lr=0x801DB1D0u; f_801DB040(c); // 801DB1CC
  goto L_801DB1E8; // 801DB1D0
L_801DB1D4:;
  c->r[3]=c->r[31]+0x00000000u; // 801DB1D4
  c->r[5]=c->r[31]+0x000001A8u; // 801DB1D8
  c->r[4]=0u+0x0000055Au; // 801DB1DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB1E0
  c->lr=0x801DB1E8u; f_80212260(c); // 801DB1E4
L_801DB1E8:;
  c->r[3]=R32(c->r[30]+0x00000138u); // 801DB1E8
  c->r[0]=R32(c->r[30]+0x00000134u); // 801DB1EC
  c->r[3]=c->r[3]+0x00000001u; // 801DB1F0
  W32(c->r[30]+0x00000138u,c->r[3]); // 801DB1F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DB1F8
  if (crb(c,0)) { goto L_801DB224; } // 801DB1FC
  c->r[6]=R32(c->r[30]+0x00000128u); // 801DB200
  c->r[4]=0u+0x00000000u; // 801DB204
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801DB208
  c->r[3]=c->r[30]|c->r[30]; // 801DB20C
  W32(c->r[30]+0x00000138u,c->r[4]); // 801DB210
  c->r[4]=0u+0x00000000u; // 801DB214
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 801DB218
  W32(c->r[30]+0x00000134u,c->r[6]); // 801DB21C
  c->lr=0x801DB224u; f_801DB040(c); // 801DB220
L_801DB224:;
  c->r[3]=R32(c->r[30]+0x00000134u); // 801DB224
  c->r[4]=R32(c->r[30]+0x00000138u); // 801DB228
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB22C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DB230
  if (!crb(c,2)) { goto L_801DB350; } // 801DB234
  c->r[0]=R8(c->r[30]+0x0000010Bu); // 801DB238
  cmps(c,0,(int32_t)c->r[0],0); // 801DB23C
  if (!crb(c,2)) { goto L_801DB344; } // 801DB240
  c->r[0]=R8(c->r[30]+0x0000010Cu); // 801DB244
  cmps(c,0,(int32_t)c->r[0],0); // 801DB248
  if (crb(c,2)) { goto L_801DB344; } // 801DB24C
  c->r[27]=c->r[30]+0x00000B58u; // 801DB250
  c->r[26]=0u+0x00000000u; // 801DB254
  c->r[28]=0u+0x00000000u; // 801DB258
  goto L_801DB338; // 801DB25C
L_801DB260:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801DB260
  cmps(c,0,(int32_t)c->r[0],0); // 801DB264
  if (crb(c,2)) { goto L_801DB330; } // 801DB268
  c->r[25]=R32(c->r[27]+0x00000004u); // 801DB26C
  cmps(c,0,(int32_t)c->r[25],0); // 801DB270
  if (crb(c,2)) { goto L_801DB330; } // 801DB274
  c->r[3]=c->r[25]|c->r[25]; // 801DB278
  c->lr=0x801DB280u; f_801DE710(c); // 801DB27C
  cmps(c,0,(int32_t)c->r[3],3); // 801DB280
  if (!crb(c,2)) { goto L_801DB330; } // 801DB284
  c->r[0]=R8(c->r[30]+0x0000010Cu); // 801DB288
  cmps(c,0,(int32_t)c->r[0],0); // 801DB28C
  if (!crb(c,2)) { goto L_801DB2A8; } // 801DB290
  c->r[3]=c->r[31]+0x00000000u; // 801DB294
  c->r[5]=c->r[31]+0x00000454u; // 801DB298
  c->r[4]=0u+0x0000057Au; // 801DB29C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB2A0
  c->lr=0x801DB2A8u; f_80212300(c); // 801DB2A4
L_801DB2A8:;
  c->lr=0x801DB2ACu; f_801251B0(c); // 801DB2A8
  c->r[29]=c->r[3]|c->r[3]; // 801DB2AC
  c->r[24]=0u+0x00000000u; // 801DB2B0
  goto L_801DB310; // 801DB2B4
L_801DB2B8:;
  cmps(c,0,(int32_t)c->r[24],2); // 801DB2B8
  if (crb(c,0)) { goto L_801DB2C8; } // 801DB2BC
  c->r[3]=0u+0x00000000u; // 801DB2C0
  goto L_801DB2EC; // 801DB2C4
L_801DB2C8:;
  c->r[3]=c->r[27]+c->r[24]; // 801DB2C8
  c->r[0]=R8(c->r[3]+0x00000010u); // 801DB2CC
  cmps(c,0,(int32_t)c->r[0],16); // 801DB2D0
  if (crb(c,0)) { goto L_801DB2E0; } // 801DB2D4
  c->r[3]=0u+0x00000000u; // 801DB2D8
  goto L_801DB2EC; // 801DB2DC
L_801DB2E0:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801DB2E0
  c->r[3]=c->r[30]+c->r[0]; // 801DB2E4
  c->r[3]=c->r[3]+0x00000818u; // 801DB2E8
L_801DB2EC:;
  c->r[0]=R16(c->r[3]+0x00000032u); // 801DB2EC
  c->r[3]=c->r[25]|c->r[25]; // 801DB2F0
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DB2F4
  c->r[4]=c->r[24]|c->r[24]; // 801DB2F8
  c->r[5]=c->r[1]+0x00000008u; // 801DB2FC
  W16(c->r[1]+0x0000000Au,c->r[28]); // 801DB300
  W16(c->r[1]+0x0000000Cu,c->r[28]); // 801DB304
  c->lr=0x801DB30Cu; f_801DEE80(c); // 801DB308
  c->r[24]=c->r[24]+0x00000001u; // 801DB30C
L_801DB310:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 801DB310
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801DB314
  if (crb(c,0)) { IRQCHK(c); goto L_801DB2B8; } // 801DB318
  c->r[3]=c->r[25]|c->r[25]; // 801DB31C
  c->r[4]=0u+0x00000001u; // 801DB320
  c->lr=0x801DB328u; f_801DF130(c); // 801DB324
  c->r[3]=c->r[29]|c->r[29]; // 801DB328
  c->lr=0x801DB330u; f_801251F0(c); // 801DB32C
L_801DB330:;
  c->r[27]=c->r[27]+0x00000038u; // 801DB330
  c->r[26]=c->r[26]+0x00000001u; // 801DB334
L_801DB338:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801DB338
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801DB33C
  if (crb(c,0)) { IRQCHK(c); goto L_801DB260; } // 801DB340
L_801DB344:;
  c->r[0]=0u+0x00000000u; // 801DB344
  W8(c->r[30]+0x0000010Cu,c->r[0]); // 801DB348
  W8(c->r[30]+0x0000010Bu,c->r[0]); // 801DB34C
L_801DB350:;
  c->r[3]=R32(c->r[30]+0x00000144u); // 801DB350
  c->r[4]=R32(c->r[30]+0x0000013Cu); // 801DB354
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB358
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DB35C
  if (!crb(c,2)) { goto L_801DB374; } // 801DB360
  c->r[4]=R32(c->r[30]+0x00000138u); // 801DB364
  c->r[3]=c->r[30]|c->r[30]; // 801DB368
  c->r[4]=c->r[4]+0x00000001u; // 801DB36C
  c->lr=0x801DB374u; f_801DB390(c); // 801DB370
L_801DB374:;
  c->r[11]=c->r[1]+0x00000030u; // 801DB374
  c->lr=0x801DB37Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB378
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB37C
  c->lr=c->r[0]; // 801DB380
  c->r[1]=c->r[1]+0x00000030u; // 801DB384
  return; // 801DB388
}

// UpdateDataLoopAddress__Q44nw4r3snd6detail10StrmPlayerFl
void f_801DB390(Ctx* __restrict c) {
  trace_call(0x801DB390u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB390
  c->r[0]=c->lr; // 801DB394
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB398
  c->r[11]=c->r[1]+0x00000030u; // 801DB39C
  c->lr=0x801DB3A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB3A0
  c->r[0]=R8(c->r[3]+0x000000C4u); // 801DB3A4
  c->r[30]=c->r[3]|c->r[3]; // 801DB3A8
  c->r[31]=c->r[4]|c->r[4]; // 801DB3AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DB3B0
  if (crb(c,2)) { goto L_801DB4D0; } // 801DB3B4
  c->r[0]=R32(c->r[3]+0x00000134u); // 801DB3B8
  c->r[28]=c->r[4]+0x00000001u; // 801DB3BC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801DB3C0
  if (crb(c,0)) { goto L_801DB3CC; } // 801DB3C4
  c->r[28]=c->r[28]-c->r[0]; // 801DB3C8
L_801DB3CC:;
  c->lr=0x801DB3D0u; f_801251B0(c); // 801DB3CC
  c->r[4]=R32(c->r[30]+0x000000E8u); // 801DB3D0
  c->r[29]=c->r[3]|c->r[3]; // 801DB3D4
  c->r[5]=R32(c->r[30]+0x000000F0u); // 801DB3D8
  c->r[3]=c->r[30]|c->r[30]; // 801DB3DC
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[4]); // 801DB3E0
  c->r[4]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[4]); // 801DB3E4
  c->r[5]=c->r[5]+c->r[0]; // 801DB3E8
  c->lr=0x801DB3F0u; f_801DB040(c); // 801DB3EC
  c->r[0]=R32(c->r[30]+0x000000C0u); // 801DB3F0
  cmps(c,0,(int32_t)c->r[0],3); // 801DB3F4
  if (!crb(c,2)) { goto L_801DB4C4; } // 801DB3F8
  c->r[28]=c->r[30]+0x00000B58u; // 801DB3FC
  c->r[27]=0u+0x00000000u; // 801DB400
  goto L_801DB4A0; // 801DB404
L_801DB408:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801DB408
  cmps(c,0,(int32_t)c->r[0],0); // 801DB40C
  if (crb(c,2)) { goto L_801DB498; } // 801DB410
  c->r[26]=R32(c->r[28]+0x00000004u); // 801DB414
  cmps(c,0,(int32_t)c->r[26],0); // 801DB418
  if (crb(c,2)) { goto L_801DB498; } // 801DB41C
  c->r[3]=c->r[26]|c->r[26]; // 801DB420
  c->lr=0x801DB428u; f_801DE710(c); // 801DB424
  cmps(c,0,(int32_t)c->r[3],3); // 801DB428
  if (!crb(c,2)) { goto L_801DB498; } // 801DB42C
  c->r[3]=c->r[26]|c->r[26]; // 801DB430
  c->r[4]=0u+0x00000000u; // 801DB434
  c->lr=0x801DB43Cu; f_801DF130(c); // 801DB438
  c->r[25]=0u+0x00000000u; // 801DB43C
  goto L_801DB48C; // 801DB440
L_801DB444:;
  cmps(c,0,(int32_t)c->r[25],2); // 801DB444
  if (crb(c,0)) { goto L_801DB454; } // 801DB448
  c->r[5]=0u+0x00000000u; // 801DB44C
  goto L_801DB478; // 801DB450
L_801DB454:;
  c->r[3]=c->r[28]+c->r[25]; // 801DB454
  c->r[0]=R8(c->r[3]+0x00000010u); // 801DB458
  cmps(c,0,(int32_t)c->r[0],16); // 801DB45C
  if (crb(c,0)) { goto L_801DB46C; } // 801DB460
  c->r[5]=0u+0x00000000u; // 801DB464
  goto L_801DB478; // 801DB468
L_801DB46C:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801DB46C
  c->r[3]=c->r[30]+c->r[0]; // 801DB470
  c->r[5]=c->r[3]+0x00000818u; // 801DB474
L_801DB478:;
  c->r[3]=c->r[26]|c->r[26]; // 801DB478
  c->r[4]=c->r[25]|c->r[25]; // 801DB47C
  c->r[5]=c->r[5]+0x0000002Cu; // 801DB480
  c->lr=0x801DB488u; f_801DEE80(c); // 801DB484
  c->r[25]=c->r[25]+0x00000001u; // 801DB488
L_801DB48C:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801DB48C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801DB490
  if (crb(c,0)) { IRQCHK(c); goto L_801DB444; } // 801DB494
L_801DB498:;
  c->r[28]=c->r[28]+0x00000038u; // 801DB498
  c->r[27]=c->r[27]+0x00000001u; // 801DB49C
L_801DB4A0:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801DB4A0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DB4A4
  if (crb(c,0)) { IRQCHK(c); goto L_801DB408; } // 801DB4A8
  c->r[3]=R32(c->r[30]+0x00000134u); // 801DB4AC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB4B0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801DB4B4
  if (!crb(c,2)) { goto L_801DB4C4; } // 801DB4B8
  c->r[0]=0u+0x00000001u; // 801DB4BC
  W8(c->r[30]+0x0000010Bu,c->r[0]); // 801DB4C0
L_801DB4C4:;
  c->r[3]=c->r[29]|c->r[29]; // 801DB4C4
  c->lr=0x801DB4CCu; f_801251F0(c); // 801DB4C8
  goto L_801DB4D4; // 801DB4CC
L_801DB4D0:;
  c->lr=0x801DB4D4u; f_801DB4F0(c); // 801DB4D0
L_801DB4D4:;
  c->r[11]=c->r[1]+0x00000030u; // 801DB4D4
  c->lr=0x801DB4DCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB4D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB4DC
  c->lr=c->r[0]; // 801DB4E0
  c->r[1]=c->r[1]+0x00000030u; // 801DB4E4
  return; // 801DB4E8
}

// fn_801DB4F0
void f_801DB4F0(Ctx* __restrict c) {
  trace_call(0x801DB4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB4F0
  c->r[0]=c->lr; // 801DB4F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB4F8
  c->r[11]=c->r[1]+0x00000030u; // 801DB4FC
  c->lr=0x801DB504u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB500
  c->r[30]=c->r[3]|c->r[3]; // 801DB504
  c->r[31]=c->r[4]|c->r[4]; // 801DB508
  c->lr=0x801DB510u; f_801251B0(c); // 801DB50C
  c->r[29]=c->r[3]|c->r[3]; // 801DB510
  c->r[28]=c->r[30]+0x00000B58u; // 801DB514
  c->r[27]=0u+0x00000000u; // 801DB518
  goto L_801DB5AC; // 801DB51C
L_801DB520:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801DB520
  cmps(c,0,(int32_t)c->r[0],0); // 801DB524
  if (crb(c,2)) { goto L_801DB5A4; } // 801DB528
  c->r[26]=R32(c->r[28]+0x00000004u); // 801DB52C
  cmps(c,0,(int32_t)c->r[26],0); // 801DB530
  if (crb(c,2)) { goto L_801DB5A4; } // 801DB534
  c->r[25]=0u+0x00000000u; // 801DB538
  goto L_801DB598; // 801DB53C
L_801DB540:;
  cmps(c,0,(int32_t)c->r[25],2); // 801DB540
  if (crb(c,0)) { goto L_801DB550; } // 801DB544
  c->r[5]=0u+0x00000000u; // 801DB548
  goto L_801DB574; // 801DB54C
L_801DB550:;
  c->r[3]=c->r[28]+c->r[25]; // 801DB550
  c->r[0]=R8(c->r[3]+0x00000010u); // 801DB554
  cmps(c,0,(int32_t)c->r[0],16); // 801DB558
  if (crb(c,0)) { goto L_801DB568; } // 801DB55C
  c->r[5]=0u+0x00000000u; // 801DB560
  goto L_801DB574; // 801DB564
L_801DB568:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801DB568
  c->r[3]=c->r[30]+c->r[0]; // 801DB56C
  c->r[5]=c->r[3]+0x00000818u; // 801DB570
L_801DB574:;
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801DB574
  c->r[3]=c->r[26]|c->r[26]; // 801DB578
  c->r[6]=R32(c->r[30]+0x000000F0u); // 801DB57C
  c->r[4]=c->r[25]|c->r[25]; // 801DB580
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 801DB584
  c->r[5]=R32(c->r[5]+0x00000000u); // 801DB588
  c->r[6]=c->r[6]+c->r[0]; // 801DB58C
  c->lr=0x801DB594u; f_801DF0B0(c); // 801DB590
  c->r[25]=c->r[25]+0x00000001u; // 801DB594
L_801DB598:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801DB598
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801DB59C
  if (crb(c,0)) { IRQCHK(c); goto L_801DB540; } // 801DB5A0
L_801DB5A4:;
  c->r[28]=c->r[28]+0x00000038u; // 801DB5A4
  c->r[27]=c->r[27]+0x00000001u; // 801DB5A8
L_801DB5AC:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801DB5AC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801DB5B0
  if (crb(c,0)) { IRQCHK(c); goto L_801DB520; } // 801DB5B4
  c->r[3]=c->r[29]|c->r[29]; // 801DB5B8
  c->lr=0x801DB5C0u; f_801251F0(c); // 801DB5BC
  c->r[0]=0u+0x00000001u; // 801DB5C0
  W8(c->r[30]+0x0000010Du,c->r[0]); // 801DB5C4
  c->r[11]=c->r[1]+0x00000030u; // 801DB5C8
  c->lr=0x801DB5D0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB5CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB5D0
  c->lr=c->r[0]; // 801DB5D4
  c->r[1]=c->r[1]+0x00000030u; // 801DB5D8
  return; // 801DB5DC
}

// fn_801DB5E0
void f_801DB5E0(Ctx* __restrict c) {
  trace_call(0x801DB5E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB5E0
  c->r[0]=c->lr; // 801DB5E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB5E8
  c->r[11]=c->r[1]+0x00000030u; // 801DB5EC
  c->lr=0x801DB5F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB5F0
  c->r[0]=R8(c->r[3]+0x0000010Eu); // 801DB5F4
  c->r[31]=0u+0x803A0000u; // 801DB5F8
  c->r[4]=R32(c->r[3]+0x00000148u); // 801DB5FC
  c->r[29]=c->r[3]|c->r[3]; // 801DB600
  cmps(c,0,(int32_t)c->r[0],0); // 801DB604
  c->r[31]=c->r[31]+0x00002DD8u; // 801DB608
  c->r[0]=c->r[4]+0x00000001u; // 801DB60C
  W32(c->r[3]+0x00000148u,c->r[0]); // 801DB610
  if (!crb(c,2)) { goto L_801DB89C; } // 801DB614
  c->r[4]=R32(c->r[3]+0x000000E0u); // 801DB618
  c->r[7]=R32(c->r[3]+0x00000130u); // 801DB61C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DB620
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DB624
  if (!crb(c,0)) { goto L_801DB634; } // 801DB628
  c->r[30]=R32(c->r[3]+0x000000E4u); // 801DB62C
  goto L_801DB638; // 801DB630
L_801DB634:;
  c->r[30]=R32(c->r[3]+0x000000F4u); // 801DB634
L_801DB638:;
  c->r[0]=rotl(c->r[30],0)&0x0000001Fu; cr0(c,c->r[0]); // 801DB638
  c->r[4]=R32(c->r[3]+0x000000E4u); // 801DB63C
  c->r[0]=R32(c->r[3]+0x000000C8u); // 801DB640
  c->r[6]=R16(c->r[3]+0x000000D0u); // 801DB644
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801DB648
  c->r[5]=R32(c->r[3]+0x00000810u); // 801DB64C
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801DB650
  c->r[0]=c->r[6]+c->r[0]; // 801DB654
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[5]); // 801DB658
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 801DB65C
  c->r[26]=c->r[6]+c->r[4]; // 801DB660
  c->r[25]=c->r[3]+c->r[0]; // 801DB664
  if (crb(c,2)) { goto L_801DB684; } // 801DB668
  c->r[6]=c->r[30]|c->r[30]; // 801DB66C
  c->r[3]=c->r[31]+0x00000000u; // 801DB670
  c->r[5]=c->r[31]+0x000002D8u; // 801DB674
  c->r[4]=0u+0x0000061Fu; // 801DB678
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB67C
  c->lr=0x801DB684u; f_80212260(c); // 801DB680
L_801DB684:;
  c->r[0]=rotl(c->r[26],0)&0x0000001Fu; cr0(c,c->r[0]); // 801DB684
  if (crb(c,2)) { goto L_801DB6A4; } // 801DB688
  c->r[6]=c->r[26]|c->r[26]; // 801DB68C
  c->r[3]=c->r[31]+0x00000000u; // 801DB690
  c->r[5]=c->r[31]+0x00000470u; // 801DB694
  c->r[4]=0u+0x00000620u; // 801DB698
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB69C
  c->lr=0x801DB6A4u; f_80212260(c); // 801DB6A0
L_801DB6A4:;
  c->r[0]=rotl(c->r[25],0)&0x0000001Fu; cr0(c,c->r[0]); // 801DB6A4
  if (crb(c,2)) { goto L_801DB6C4; } // 801DB6A8
  c->r[6]=c->r[25]|c->r[25]; // 801DB6AC
  c->r[3]=c->r[31]+0x00000000u; // 801DB6B0
  c->r[5]=c->r[31]+0x00000324u; // 801DB6B4
  c->r[4]=0u+0x00000621u; // 801DB6B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB6BC
  c->lr=0x801DB6C4u; f_80212260(c); // 801DB6C0
L_801DB6C4:;
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 801DB6C4
  c->r[27]=0u+0x00000000u; // 801DB6C8
  cmps(c,0,(int32_t)c->r[0],0); // 801DB6CC
  if (!crb(c,2)) { goto L_801DB6E4; } // 801DB6D0
  c->r[0]=R32(c->r[29]+0x000000C0u); // 801DB6D4
  cmps(c,0,(int32_t)c->r[0],3); // 801DB6D8
  if (!crb(c,2)) { goto L_801DB6E4; } // 801DB6DC
  c->r[27]=0u+0x00000001u; // 801DB6E0
L_801DB6E4:;
  c->r[3]=c->r[29]+0x00000180u; // 801DB6E4
  c->lr=0x801DB6ECu; f_801C60B0(c); // 801DB6E8
  cmps(c,0,(int32_t)c->r[3],0); // 801DB6EC
  if (!crb(c,2)) { goto L_801DB6FC; } // 801DB6F0
  c->r[28]=0u+0x00000000u; // 801DB6F4
  goto L_801DB748; // 801DB6F8
L_801DB6FC:;
  c->r[28]=c->r[3]|c->r[3]; // 801DB6FC
  if (crb(c,2)) { goto L_801DB748; } // 801DB700
  c->r[5]=0u+0x00000000u; // 801DB704
  W32(c->r[3]+0x00000004u,c->r[5]); // 801DB708
  c->r[4]=0u+0x803A0000u; // 801DB70C
  c->r[0]=0u+0xFFFFFFFFu; // 801DB710
  W32(c->r[3]+0x00000008u,c->r[5]); // 801DB714
  c->r[4]=c->r[4]+0x000033A8u; // 801DB718
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801DB71C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DB720
  W32(c->r[3]+0x00000010u,c->r[5]); // 801DB724
  W32(c->r[3]+0x00000014u,c->r[5]); // 801DB728
  W32(c->r[3]+0x00000018u,c->r[5]); // 801DB72C
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801DB730
  W32(c->r[3]+0x00000020u,c->r[5]); // 801DB734
  W32(c->r[3]+0x00000024u,c->r[0]); // 801DB738
  W8(c->r[3]+0x00000028u,c->r[5]); // 801DB73C
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801DB740
  W32(c->r[3]+0x00000030u,c->r[5]); // 801DB744
L_801DB748:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DB748
  if (!crb(c,2)) { goto L_801DB764; } // 801DB74C
  c->r[3]=c->r[31]+0x00000000u; // 801DB750
  c->r[5]=c->r[31]+0x000004BCu; // 801DB754
  c->r[4]=0u+0x00000627u; // 801DB758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB75C
  c->lr=0x801DB764u; f_80212260(c); // 801DB760
L_801DB764:;
  W32(c->r[28]+0x00000010u,c->r[29]); // 801DB764
  c->r[0]=R32(c->r[29]+0x00000808u); // 801DB768
  W32(c->r[28]+0x00000014u,c->r[0]); // 801DB76C
  W32(c->r[28]+0x00000018u,c->r[26]); // 801DB770
  W32(c->r[28]+0x0000001Cu,c->r[25]); // 801DB774
  W32(c->r[28]+0x00000020u,c->r[30]); // 801DB778
  c->r[0]=R32(c->r[29]+0x0000012Cu); // 801DB77C
  W32(c->r[28]+0x00000024u,c->r[0]); // 801DB780
  W8(c->r[28]+0x00000028u,c->r[27]); // 801DB784
  c->lr=0x801DB78Cu; f_801251B0(c); // 801DB788
  cmps(c,0,(int32_t)c->r[28],0); // 801DB78C
  c->r[30]=c->r[3]|c->r[3]; // 801DB790
  c->r[31]=c->r[29]+0x00000178u; // 801DB794
  if (!crb(c,2)) { goto L_801DB7B8; } // 801DB798
  c->r[3]=0u+0x803A0000u; // 801DB79C
  c->r[5]=0u+0x803A0000u; // 801DB7A0
  c->r[3]=c->r[3]+0x00003414u; // 801DB7A4
  c->r[4]=0u+0x00000233u; // 801DB7A8
  c->r[5]=c->r[5]+0x000033F0u; // 801DB7AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DB7B0
  c->lr=0x801DB7B8u; f_80212260(c); // 801DB7B4
L_801DB7B8:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 801DB7B8
  c->r[3]=c->r[29]+0x00000174u; // 801DB7BC
  c->r[4]=c->r[1]+0x00000008u; // 801DB7C0
  c->r[5]=c->r[28]+0x0000002Cu; // 801DB7C4
  c->lr=0x801DB7CCu; f_801E44B0(c); // 801DB7C8
  c->r[0]=R8(c->r[29]+0x00000102u); // 801DB7CC
  c->r[31]=0u+0x00000001u; // 801DB7D0
  cmps(c,0,(int32_t)c->r[0],0); // 801DB7D4
  if (crb(c,2)) { goto L_801DB7E0; } // 801DB7D8
  c->r[31]=0u+0x00000002u; // 801DB7DC
L_801DB7E0:;
  c->lr=0x801DB7E4u; f_801DCA40(c); // 801DB7E0
  c->r[4]=c->r[28]|c->r[28]; // 801DB7E4
  c->r[5]=c->r[31]|c->r[31]; // 801DB7E8
  c->lr=0x801DB7F0u; f_801DCBD0(c); // 801DB7EC
  c->r[3]=R32(c->r[29]+0x00000130u); // 801DB7F0
  c->r[0]=R32(c->r[29]+0x00000144u); // 801DB7F4
  c->r[3]=c->r[3]+0x00000001u; // 801DB7F8
  W32(c->r[29]+0x00000130u,c->r[3]); // 801DB7FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DB800
  if (!crb(c,1)) { goto L_801DB834; } // 801DB804
  c->r[0]=R8(c->r[29]+0x000000C4u); // 801DB808
  cmps(c,0,(int32_t)c->r[0],0); // 801DB80C
  if (crb(c,2)) { goto L_801DB820; } // 801DB810
  c->r[0]=R32(c->r[29]+0x00000140u); // 801DB814
  W32(c->r[29]+0x00000130u,c->r[0]); // 801DB818
  goto L_801DB834; // 801DB81C
L_801DB820:;
  c->r[0]=0u+0x00000001u; // 801DB820
  W8(c->r[29]+0x0000010Eu,c->r[0]); // 801DB824
  c->r[3]=c->r[30]|c->r[30]; // 801DB828
  c->lr=0x801DB830u; f_801251F0(c); // 801DB82C
  goto L_801DB89C; // 801DB830
L_801DB834:;
  c->r[3]=R32(c->r[29]+0x0000012Cu); // 801DB834
  c->r[0]=R32(c->r[29]+0x00000128u); // 801DB838
  c->r[3]=c->r[3]+0x00000001u; // 801DB83C
  W32(c->r[29]+0x0000012Cu,c->r[3]); // 801DB840
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DB844
  if (crb(c,0)) { goto L_801DB894; } // 801DB848
  c->r[5]=R32(c->r[29]+0x00000144u); // 801DB84C
  c->r[4]=0u+0x00000000u; // 801DB850
  c->r[3]=R32(c->r[29]+0x00000130u); // 801DB854
  c->r[6]=R32(c->r[29]+0x00000124u); // 801DB858
  c->r[0]=R32(c->r[29]+0x00000140u); // 801DB85C
  c->r[3]=c->r[5]-c->r[3]; // 801DB860
  W32(c->r[29]+0x0000012Cu,c->r[4]); // 801DB864
  c->r[4]=c->r[3]+0x00000001u; // 801DB868
  c->r[7]=c->r[6]+0x00000001u; // 801DB86C
  c->r[3]=c->r[5]-c->r[0]; // 801DB870
  c->r[4]=c->r[7]-c->r[4]; // 801DB874
  c->r[3]=c->r[3]+0x00000001u; // 801DB878
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 801DB87C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801DB880
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 801DB884
  if (!crb(c,2)) { goto L_801DB890; } // 801DB888
  c->r[6]=c->r[7]|c->r[7]; // 801DB88C
L_801DB890:;
  W32(c->r[29]+0x00000128u,c->r[6]); // 801DB890
L_801DB894:;
  c->r[3]=c->r[30]|c->r[30]; // 801DB894
  c->lr=0x801DB89Cu; f_801251F0(c); // 801DB898
L_801DB89C:;
  c->r[11]=c->r[1]+0x00000030u; // 801DB89C
  c->lr=0x801DB8A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB8A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB8A4
  c->lr=c->r[0]; // 801DB8A8
  c->r[1]=c->r[1]+0x00000030u; // 801DB8AC
  return; // 801DB8B0
}

// fn_801DB8C0
void f_801DB8C0(Ctx* __restrict c) {
  trace_call(0x801DB8C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB8C0
  c->r[0]=c->lr; // 801DB8C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB8C8
  c->r[11]=c->r[1]+0x00000020u; // 801DB8CC
  c->lr=0x801DB8D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DB8D0
  c->r[27]=c->r[3]|c->r[3]; // 801DB8D4
  c->lr=0x801DB8DCu; f_801251B0(c); // 801DB8D8
  c->r[0]=R8(c->r[27]+0x00000107u); // 801DB8DC
  c->r[31]=c->r[3]|c->r[3]; // 801DB8E0
  c->r[29]=0u+0x00000000u; // 801DB8E4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB8E8
  if (crb(c,2)) { goto L_801DB8F4; } // 801DB8EC
  c->r[29]=0u+0x00000001u; // 801DB8F0
L_801DB8F4:;
  c->r[0]=R8(c->r[27]+0x00000109u); // 801DB8F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB8F8
  if (crb(c,2)) { goto L_801DB904; } // 801DB8FC
  c->r[29]=0u+0x00000001u; // 801DB900
L_801DB904:;
  c->r[0]=R8(c->r[27]+0x00000108u); // 801DB904
  cmpu(c,0,c->r[29],c->r[0]); // 801DB908
  if (crb(c,2)) { goto L_801DB954; } // 801DB90C
  c->r[30]=c->r[27]|c->r[27]; // 801DB910
  c->r[28]=0u+0x00000000u; // 801DB914
  goto L_801DB944; // 801DB918
L_801DB91C:;
  c->r[0]=R8(c->r[30]+0x00000B58u); // 801DB91C
  cmps(c,0,(int32_t)c->r[0],0); // 801DB920
  if (crb(c,2)) { goto L_801DB93C; } // 801DB924
  c->r[3]=R32(c->r[30]+0x00000B5Cu); // 801DB928
  cmps(c,0,(int32_t)c->r[3],0); // 801DB92C
  if (crb(c,2)) { goto L_801DB93C; } // 801DB930
  c->r[4]=c->r[29]|c->r[29]; // 801DB934
  c->lr=0x801DB93Cu; f_801DE6F0(c); // 801DB938
L_801DB93C:;
  c->r[30]=c->r[30]+0x00000038u; // 801DB93C
  c->r[28]=c->r[28]+0x00000001u; // 801DB940
L_801DB944:;
  c->r[0]=R32(c->r[27]+0x0000080Cu); // 801DB944
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801DB948
  if (crb(c,0)) { IRQCHK(c); goto L_801DB91C; } // 801DB94C
  W8(c->r[27]+0x00000108u,c->r[29]); // 801DB950
L_801DB954:;
  c->r[3]=c->r[31]|c->r[31]; // 801DB954
  c->lr=0x801DB95Cu; f_801251F0(c); // 801DB958
  c->r[11]=c->r[1]+0x00000020u; // 801DB95C
  c->lr=0x801DB964u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DB960
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB964
  c->lr=c->r[0]; // 801DB968
  c->r[1]=c->r[1]+0x00000020u; // 801DB96C
  return; // 801DB970
}

// fn_801DB980
void f_801DB980(Ctx* __restrict c) {
  trace_call(0x801DB980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB980
  c->r[0]=c->lr; // 801DB984
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB988
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB98C
  c->r[31]=c->r[5]|c->r[5]; // 801DB990
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB994
  c->r[30]=c->r[4]|c->r[4]; // 801DB998
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB99C
  c->r[29]=c->r[3]|c->r[3]; // 801DB9A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DB9A4
  c->r[28]=c->r[6]|c->r[6]; // 801DB9A8
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801DB9AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DB9B0
  if (!crb(c,2)) { goto L_801DB9C0; } // 801DB9B4
  c->r[3]=0u+0x00000000u; // 801DB9B8
  goto L_801DBA6C; // 801DB9BC
L_801DB9C0:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 801DB9C0
  cmps(c,0,(int32_t)c->r[0],0); // 801DB9C4
  if (!crb(c,2)) { goto L_801DB9D4; } // 801DB9C8
  c->r[4]=R32(c->r[3]+0x00000150u); // 801DB9CC
  goto L_801DB9F8; // 801DB9D0
L_801DB9D4:;
  cmps(c,0,(int32_t)c->r[0],1); // 801DB9D4
  if (!crb(c,2)) { goto L_801DB9F8; } // 801DB9D8
  c->r[7]=R32(c->r[3]+0x00000150u); // 801DB9DC
  c->r[6]=0u+0x000003E8u; // 801DB9E0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801DB9E4
  c->r[5]=0u+0x00000000u; // 801DB9E8
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 801DB9EC
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[0])>>32); // 801DB9F0
  c->lr=0x801DB9F8u; f_802E6B1C(c); // 801DB9F4
L_801DB9F8:;
  c->r[0]=0u+0x00000000u; // 801DB9F8
  W32(c->r[28]+0x00000000u,c->r[0]); // 801DB9FC
  c->r[3]=R32(c->r[29]+0x000000D8u); // 801DBA00
  cmpu(c,0,c->r[4],c->r[3]); // 801DBA04
  if (crb(c,0)) { goto L_801DBA48; } // 801DBA08
  c->r[0]=R8(c->r[29]+0x000000C4u); // 801DBA0C
  cmps(c,0,(int32_t)c->r[0],0); // 801DBA10
  if (crb(c,2)) { goto L_801DBA40; } // 801DBA14
  c->r[5]=R32(c->r[29]+0x000000D4u); // 801DBA18
  c->r[4]=c->r[4]-c->r[3]; // 801DBA1C
  c->r[0]=c->r[3]-c->r[5]; // 801DBA20
  c->r[3]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 801DBA24
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801DBA28
  c->r[3]=c->r[3]+0x00000001u; // 801DBA2C
  W32(c->r[28]+0x00000000u,c->r[3]); // 801DBA30
  c->r[0]=c->r[4]-c->r[0]; // 801DBA34
  c->r[4]=c->r[5]+c->r[0]; // 801DBA38
  goto L_801DBA48; // 801DBA3C
L_801DBA40:;
  c->r[3]=0u+0x00000000u; // 801DBA40
  goto L_801DBA6C; // 801DBA44
L_801DBA48:;
  c->r[0]=R32(c->r[29]+0x000000E8u); // 801DBA48
  c->r[3]=0u+0x00000001u; // 801DBA4C
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 801DBA50
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DBA54
  c->r[5]=R32(c->r[29]+0x000000E8u); // 801DBA58
  c->r[0]=divwu(c->r[4],c->r[5]); // 801DBA5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 801DBA60
  c->r[0]=c->r[4]-c->r[0]; // 801DBA64
  W32(c->r[31]+0x00000000u,c->r[0]); // 801DBA68
L_801DBA6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBA6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBA70
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBA74
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBA78
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DBA7C
  c->lr=c->r[0]; // 801DBA80
  c->r[1]=c->r[1]+0x00000020u; // 801DBA84
  return; // 801DBA88
}

// fn_801DBA90
void f_801DBA90(Ctx* __restrict c) {
  trace_call(0x801DBA90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBA90
  c->r[0]=c->lr; // 801DBA94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBA98
  c->r[11]=c->r[1]+0x00000020u; // 801DBA9C
  c->lr=0x801DBAA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801DBAA0
  cmps(c,0,(int32_t)c->r[5],0); // 801DBAA4
  c->r[30]=0u+0x803A0000u; // 801DBAA8
  c->r[27]=c->r[3]|c->r[3]; // 801DBAAC
  c->r[28]=c->r[4]|c->r[4]; // 801DBAB0
  c->r[29]=c->r[5]|c->r[5]; // 801DBAB4
  c->r[30]=c->r[30]+0x00002DD8u; // 801DBAB8
  if (!crb(c,2)) { goto L_801DBAD4; } // 801DBABC
  c->r[3]=c->r[30]+0x00000000u; // 801DBAC0
  c->r[5]=c->r[30]+0x000004E4u; // 801DBAC4
  c->r[4]=0u+0x000006E2u; // 801DBAC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBACC
  c->lr=0x801DBAD4u; f_80212260(c); // 801DBAD0
L_801DBAD4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DBAD4
  cmpu(c,0,c->r[0],c->r[27]); // 801DBAD8
  if (crb(c,2)) { goto L_801DBAF4; } // 801DBADC
  c->r[3]=c->r[30]+0x00000000u; // 801DBAE0
  c->r[5]=c->r[30]+0x0000050Cu; // 801DBAE4
  c->r[4]=0u+0x000006E4u; // 801DBAE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBAEC
  c->lr=0x801DBAF4u; f_80212260(c); // 801DBAF0
L_801DBAF4:;
  c->lr=0x801DBAF8u; f_801251B0(c); // 801DBAF4
  cmpu(c,0,c->r[28],0x00000001u); // 801DBAF8
  c->r[31]=c->r[3]|c->r[3]; // 801DBAFC
  if (!crb(c,1)) { goto L_801DBB14; } // 801DBB00
  c->r[0]=c->r[28]+0xFFFFFFFEu; // 801DBB04
  cmpu(c,0,c->r[0],0x00000001u); // 801DBB08
  if (!crb(c,1)) { goto L_801DBB28; } // 801DBB0C
  goto L_801DBB34; // 801DBB10
L_801DBB14:;
  c->r[3]=c->r[27]|c->r[27]; // 801DBB14
  c->lr=0x801DBB1Cu; f_801DE300(c); // 801DBB18
  c->r[0]=0u+0x00000000u; // 801DBB1C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801DBB20
  goto L_801DBB58; // 801DBB24
L_801DBB28:;
  c->r[0]=0u+0x00000000u; // 801DBB28
  W32(c->r[29]+0x00000004u,c->r[0]); // 801DBB2C
  goto L_801DBB58; // 801DBB30
L_801DBB34:;
  c->r[6]=c->r[28]|c->r[28]; // 801DBB34
  c->r[3]=c->r[30]+0x00000000u; // 801DBB38
  c->r[5]=c->r[30]+0x0000053Cu; // 801DBB3C
  c->r[4]=0u+0x000006F4u; // 801DBB40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBB44
  c->lr=0x801DBB4Cu; f_80212260(c); // 801DBB48
  c->r[3]=c->r[31]|c->r[31]; // 801DBB4C
  c->lr=0x801DBB54u; f_801251F0(c); // 801DBB50
  goto L_801DBB60; // 801DBB54
L_801DBB58:;
  c->r[3]=c->r[31]|c->r[31]; // 801DBB58
  c->lr=0x801DBB60u; f_801251F0(c); // 801DBB5C
L_801DBB60:;
  c->r[11]=c->r[1]+0x00000020u; // 801DBB60
  c->lr=0x801DBB68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801DBB64
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBB68
  c->lr=c->r[0]; // 801DBB6C
  c->r[1]=c->r[1]+0x00000020u; // 801DBB70
  return; // 801DBB74
}

// fn_801DBB80
void f_801DBB80(Ctx* __restrict c) {
  trace_call(0x801DBB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBB80
  c->r[0]=c->lr; // 801DBB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBB88
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801DBB8C
  c->f[31]=c->f[1]; // 801DBB90
  W32(c->r[1]+0x00000014u,c->r[31]); // 801DBB94
  c->r[31]=c->r[4]|c->r[4]; // 801DBB98
  W32(c->r[1]+0x00000010u,c->r[30]); // 801DBB9C
  c->r[30]=c->r[3]|c->r[3]; // 801DBBA0
  c->lr=0x801DBBA8u; f_801251B0(c); // 801DBBA4
  c->r[4]=c->r[30]|c->r[30]; // 801DBBA8
  c->r[5]=0u+0x00000000u; // 801DBBAC
  goto L_801DBBD0; // 801DBBB0
  c->r[0]=c->r[0]|0x00000000u; // 801DBBB4
L_801DBBB8:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801DBBB8
  if (crb(c,2)) { goto L_801DBBC4; } // 801DBBBC
  {uint32_t ea=c->r[4]+0x00000B88u; WF32(ea,c->f[31]);} // 801DBBC0
L_801DBBC4:;
  c->r[31]=rotl(c->r[31],31)&0x7FFFFFFFu; // 801DBBC4
  c->r[4]=c->r[4]+0x00000038u; // 801DBBC8
  c->r[5]=c->r[5]+0x00000001u; // 801DBBCC
L_801DBBD0:;
  c->r[0]=R32(c->r[30]+0x0000080Cu); // 801DBBD0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DBBD4
  if (!crb(c,0)) { goto L_801DBBE4; } // 801DBBD8
  cmps(c,0,(int32_t)c->r[31],0); // 801DBBDC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBBB8; } // 801DBBE0
L_801DBBE4:;
  c->lr=0x801DBBE8u; f_801251F0(c); // 801DBBE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBBE8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801DBBEC
  c->r[31]=R32(c->r[1]+0x00000014u); // 801DBBF0
  c->r[30]=R32(c->r[1]+0x00000010u); // 801DBBF4
  c->lr=c->r[0]; // 801DBBF8
  c->r[1]=c->r[1]+0x00000020u; // 801DBBFC
  return; // 801DBC00
}

// fn_801DBC10
void f_801DBC10(Ctx* __restrict c) {
  trace_call(0x801DBC10u);
  cmps(c,0,(int32_t)c->r[4],7); // 801DBC10
  if (!crb(c,1)) { goto L_801DBC20; } // 801DBC14
  c->r[3]=0u+0x00000000u; // 801DBC18
  return; // 801DBC1C
L_801DBC20:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)56); // 801DBC20
  c->r[3]=c->r[3]+c->r[0]; // 801DBC24
  c->r[3]=c->r[3]+0x00000B58u; // 801DBC28
  return; // 801DBC2C
}

// fn_801DBC30
void f_801DBC30(Ctx* __restrict c) {
  trace_call(0x801DBC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBC30
  c->r[0]=c->lr; // 801DBC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DBC38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DBC3C
  c->r[31]=c->r[3]|c->r[3]; // 801DBC40
  c->r[0]=R32(c->r[3]+0x00000010u); // 801DBC44
  cmps(c,0,(int32_t)c->r[0],0); // 801DBC48
  if (!crb(c,2)) { goto L_801DBC6C; } // 801DBC4C
  c->r[3]=0u+0x803A0000u; // 801DBC50
  c->r[5]=0u+0x803A0000u; // 801DBC54
  c->r[3]=c->r[3]+0x00002DD8u; // 801DBC58
  c->r[4]=0u+0x0000075Du; // 801DBC5C
  c->r[5]=c->r[5]+0x00003338u; // 801DBC60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBC64
  c->lr=0x801DBC6Cu; f_80212260(c); // 801DBC68
L_801DBC6C:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 801DBC6C
  c->r[4]=R32(c->r[31]+0x00000014u); // 801DBC70
  c->r[5]=R32(c->r[31]+0x00000018u); // 801DBC74
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 801DBC78
  c->lr=0x801DBC80u; f_801D9F20(c); // 801DBC7C
  cmps(c,0,(int32_t)c->r[3],0); // 801DBC80
  if (!crb(c,2)) { goto L_801DBC94; } // 801DBC84
  c->r[3]=R32(c->r[31]+0x00000010u); // 801DBC88
  c->r[0]=0u+0x00000001u; // 801DBC8C
  W8(c->r[3]+0x00000104u,c->r[0]); // 801DBC90
L_801DBC94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DBC94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DBC98
  c->lr=c->r[0]; // 801DBC9C
  c->r[1]=c->r[1]+0x00000010u; // 801DBCA0
  return; // 801DBCA4
}

// fn_801DBCB0
void f_801DBCB0(Ctx* __restrict c) {
  trace_call(0x801DBCB0u);
  return; // 801DBCB0
}

// fn_801DBCC0
void f_801DBCC0(Ctx* __restrict c) {
  trace_call(0x801DBCC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBCC0
  c->r[0]=c->lr; // 801DBCC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DBCC8
  c->r[0]=0u+0x00000001u; // 801DBCCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DBCD0
  c->r[31]=c->r[3]|c->r[3]; // 801DBCD4
  c->r[4]=R32(c->r[3]+0x00000010u); // 801DBCD8
  W8(c->r[4]+0x00000105u,c->r[0]); // 801DBCDC
  c->r[3]=R32(c->r[3]+0x00000014u); // 801DBCE0
  cmps(c,0,(int32_t)c->r[3],0); // 801DBCE4
  if (crb(c,2)) { goto L_801DBD54; } // 801DBCE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBCEC
  c->r[12]=R32(c->r[12]+0x00000054u); // 801DBCF0
  c->ctr=c->r[12]; // 801DBCF4
  if (true) { c->lr=0x801DBCFCu; dispatch(c,c->ctr); } // 801DBCF8
  cmps(c,0,(int32_t)c->r[3],0); // 801DBCFC
  if (crb(c,2)) { goto L_801DBD54; } // 801DBD00
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DBD04
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBD08
  c->r[12]=R32(c->r[12]+0x00000028u); // 801DBD0C
  c->ctr=c->r[12]; // 801DBD10
  if (true) { c->lr=0x801DBD18u; dispatch(c,c->ctr); } // 801DBD14
  cmps(c,0,(int32_t)c->r[3],0); // 801DBD18
  if (crb(c,2)) { goto L_801DBD40; } // 801DBD1C
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DBD20
  c->r[4]=0u+0x00000000u; // 801DBD24
  c->r[5]=0u+0x00000000u; // 801DBD28
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBD2C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801DBD30
  c->ctr=c->r[12]; // 801DBD34
  if (true) { c->lr=0x801DBD3Cu; dispatch(c,c->ctr); } // 801DBD38
  goto L_801DBD54; // 801DBD3C
L_801DBD40:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DBD40
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBD44
  c->r[12]=R32(c->r[12]+0x00000048u); // 801DBD48
  c->ctr=c->r[12]; // 801DBD4C
  if (true) { c->lr=0x801DBD54u; dispatch(c,c->ctr); } // 801DBD50
L_801DBD54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DBD54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DBD58
  c->lr=c->r[0]; // 801DBD5C
  c->r[1]=c->r[1]+0x00000010u; // 801DBD60
  return; // 801DBD64
}

// fn_801DBD70
void f_801DBD70(Ctx* __restrict c) {
  trace_call(0x801DBD70u);
  c->r[4]=0u+0x803A0000u; // 801DBD70
  c->r[5]=0u+0x00000000u; // 801DBD74
  c->r[4]=c->r[4]+0x000033A8u; // 801DBD78
  c->r[0]=0u+0xFFFFFFFFu; // 801DBD7C
  W32(c->r[3]+0x00000004u,c->r[5]); // 801DBD80
  W32(c->r[3]+0x00000008u,c->r[5]); // 801DBD84
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801DBD88
  W32(c->r[3]+0x00000000u,c->r[4]); // 801DBD8C
  W32(c->r[3]+0x00000010u,c->r[5]); // 801DBD90
  W32(c->r[3]+0x00000014u,c->r[5]); // 801DBD94
  W32(c->r[3]+0x00000018u,c->r[5]); // 801DBD98
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 801DBD9C
  W32(c->r[3]+0x00000020u,c->r[5]); // 801DBDA0
  W32(c->r[3]+0x00000024u,c->r[0]); // 801DBDA4
  W8(c->r[3]+0x00000028u,c->r[5]); // 801DBDA8
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801DBDAC
  W32(c->r[3]+0x00000030u,c->r[5]); // 801DBDB0
  return; // 801DBDB4
}

// fn_801DBDC0
void f_801DBDC0(Ctx* __restrict c) {
  trace_call(0x801DBDC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBDC0
  c->r[0]=c->lr; // 801DBDC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBDC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DBDCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DBDD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DBDD4
  c->r[29]=c->r[3]|c->r[3]; // 801DBDD8
  c->r[3]=R32(c->r[3]+0x00000010u); // 801DBDDC
  c->r[4]=R32(c->r[29]+0x00000014u); // 801DBDE0
  c->r[5]=R32(c->r[29]+0x0000001Cu); // 801DBDE4
  c->r[6]=R32(c->r[29]+0x00000018u); // 801DBDE8
  c->r[7]=R32(c->r[29]+0x00000020u); // 801DBDEC
  c->r[8]=R32(c->r[29]+0x00000024u); // 801DBDF0
  c->r[9]=R8(c->r[29]+0x00000028u); // 801DBDF4
  c->lr=0x801DBDFCu; f_801DA2B0(c); // 801DBDF8
  cmps(c,0,(int32_t)c->r[3],0); // 801DBDFC
  if (!crb(c,2)) { goto L_801DBE10; } // 801DBE00
  c->r[3]=R32(c->r[29]+0x00000010u); // 801DBE04
  c->r[0]=0u+0x00000001u; // 801DBE08
  W8(c->r[3]+0x00000104u,c->r[0]); // 801DBE0C
L_801DBE10:;
  c->lr=0x801DBE14u; f_801251B0(c); // 801DBE10
  c->r[4]=R32(c->r[29]+0x00000010u); // 801DBE14
  cmps(c,0,(int32_t)c->r[29],0); // 801DBE18
  c->r[31]=c->r[3]|c->r[3]; // 801DBE1C
  c->r[30]=c->r[4]+0x00000174u; // 801DBE20
  if (!crb(c,2)) { goto L_801DBE44; } // 801DBE24
  c->r[3]=0u+0x803A0000u; // 801DBE28
  c->r[5]=0u+0x803A0000u; // 801DBE2C
  c->r[3]=c->r[3]+0x00003414u; // 801DBE30
  c->r[4]=0u+0x00000233u; // 801DBE34
  c->r[5]=c->r[5]+0x000033F0u; // 801DBE38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBE3C
  c->lr=0x801DBE44u; f_80212260(c); // 801DBE40
L_801DBE44:;
  c->r[3]=c->r[30]|c->r[30]; // 801DBE44
  c->r[4]=c->r[29]+0x0000002Cu; // 801DBE48
  c->lr=0x801DBE50u; f_801E45B0(c); // 801DBE4C
  c->r[3]=R32(c->r[29]+0x00000010u); // 801DBE50
  cmps(c,0,(int32_t)c->r[29],0); // 801DBE54
  c->r[30]=c->r[3]+0x00000180u; // 801DBE58
  if (crb(c,2)) { goto L_801DBE84; } // 801DBE5C
  c->r[12]=R32(c->r[29]+0x00000000u); // 801DBE60
  c->r[3]=c->r[29]|c->r[29]; // 801DBE64
  c->r[4]=0u+0xFFFFFFFFu; // 801DBE68
  c->r[12]=R32(c->r[12]+0x00000008u); // 801DBE6C
  c->ctr=c->r[12]; // 801DBE70
  if (true) { c->lr=0x801DBE78u; dispatch(c,c->ctr); } // 801DBE74
  c->r[3]=c->r[30]|c->r[30]; // 801DBE78
  c->r[4]=c->r[29]|c->r[29]; // 801DBE7C
  c->lr=0x801DBE84u; f_801C6110(c); // 801DBE80
L_801DBE84:;
  c->r[5]=R32(c->r[29]+0x00000010u); // 801DBE84
  c->r[3]=c->r[31]|c->r[31]; // 801DBE88
  c->r[4]=R32(c->r[5]+0x00000148u); // 801DBE8C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DBE90
  W32(c->r[5]+0x00000148u,c->r[0]); // 801DBE94
  c->lr=0x801DBE9Cu; f_801251F0(c); // 801DBE98
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBE9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBEA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBEA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBEA8
  c->lr=c->r[0]; // 801DBEAC
  c->r[1]=c->r[1]+0x00000020u; // 801DBEB0
  return; // 801DBEB4
}

// fn_801DBEC0
void f_801DBEC0(Ctx* __restrict c) {
  trace_call(0x801DBEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBEC0
  c->r[0]=c->lr; // 801DBEC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBEC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DBECC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DBED0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DBED4
  c->r[29]=c->r[3]|c->r[3]; // 801DBED8
  c->lr=0x801DBEE0u; f_801251B0(c); // 801DBEDC
  c->r[4]=R32(c->r[29]+0x00000010u); // 801DBEE0
  cmps(c,0,(int32_t)c->r[29],0); // 801DBEE4
  c->r[31]=c->r[3]|c->r[3]; // 801DBEE8
  c->r[30]=c->r[4]+0x00000174u; // 801DBEEC
  if (!crb(c,2)) { goto L_801DBF10; } // 801DBEF0
  c->r[3]=0u+0x803A0000u; // 801DBEF4
  c->r[5]=0u+0x803A0000u; // 801DBEF8
  c->r[3]=c->r[3]+0x00003414u; // 801DBEFC
  c->r[4]=0u+0x00000233u; // 801DBF00
  c->r[5]=c->r[5]+0x000033F0u; // 801DBF04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DBF08
  c->lr=0x801DBF10u; f_80212260(c); // 801DBF0C
L_801DBF10:;
  c->r[3]=c->r[30]|c->r[30]; // 801DBF10
  c->r[4]=c->r[29]+0x0000002Cu; // 801DBF14
  c->lr=0x801DBF1Cu; f_801E45B0(c); // 801DBF18
  c->r[3]=R32(c->r[29]+0x00000010u); // 801DBF1C
  cmps(c,0,(int32_t)c->r[29],0); // 801DBF20
  c->r[30]=c->r[3]+0x00000180u; // 801DBF24
  if (crb(c,2)) { goto L_801DBF50; } // 801DBF28
  c->r[12]=R32(c->r[29]+0x00000000u); // 801DBF2C
  c->r[3]=c->r[29]|c->r[29]; // 801DBF30
  c->r[4]=0u+0xFFFFFFFFu; // 801DBF34
  c->r[12]=R32(c->r[12]+0x00000008u); // 801DBF38
  c->ctr=c->r[12]; // 801DBF3C
  if (true) { c->lr=0x801DBF44u; dispatch(c,c->ctr); } // 801DBF40
  c->r[3]=c->r[30]|c->r[30]; // 801DBF44
  c->r[4]=c->r[29]|c->r[29]; // 801DBF48
  c->lr=0x801DBF50u; f_801C6110(c); // 801DBF4C
L_801DBF50:;
  c->r[3]=c->r[31]|c->r[31]; // 801DBF50
  c->lr=0x801DBF58u; f_801251F0(c); // 801DBF54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBF58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBF5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBF60
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBF64
  c->lr=c->r[0]; // 801DBF68
  c->r[1]=c->r[1]+0x00000020u; // 801DBF6C
  return; // 801DBF70
}

// fn_801DBF80
void f_801DBF80(Ctx* __restrict c) {
  trace_call(0x801DBF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBF80
  c->r[0]=c->lr; // 801DBF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DBF88
  c->r[0]=0u+0x00000001u; // 801DBF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DBF90
  c->r[31]=c->r[3]|c->r[3]; // 801DBF94
  c->r[4]=R32(c->r[3]+0x00000010u); // 801DBF98
  W8(c->r[4]+0x00000105u,c->r[0]); // 801DBF9C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801DBFA0
  cmps(c,0,(int32_t)c->r[3],0); // 801DBFA4
  if (crb(c,2)) { goto L_801DC014; } // 801DBFA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBFAC
  c->r[12]=R32(c->r[12]+0x00000054u); // 801DBFB0
  c->ctr=c->r[12]; // 801DBFB4
  if (true) { c->lr=0x801DBFBCu; dispatch(c,c->ctr); } // 801DBFB8
  cmps(c,0,(int32_t)c->r[3],0); // 801DBFBC
  if (crb(c,2)) { goto L_801DC014; } // 801DBFC0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DBFC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBFC8
  c->r[12]=R32(c->r[12]+0x00000028u); // 801DBFCC
  c->ctr=c->r[12]; // 801DBFD0
  if (true) { c->lr=0x801DBFD8u; dispatch(c,c->ctr); } // 801DBFD4
  cmps(c,0,(int32_t)c->r[3],0); // 801DBFD8
  if (crb(c,2)) { goto L_801DC000; } // 801DBFDC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DBFE0
  c->r[4]=0u+0x00000000u; // 801DBFE4
  c->r[5]=0u+0x00000000u; // 801DBFE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DBFEC
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801DBFF0
  c->ctr=c->r[12]; // 801DBFF4
  if (true) { c->lr=0x801DBFFCu; dispatch(c,c->ctr); } // 801DBFF8
  goto L_801DC014; // 801DBFFC
L_801DC000:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801DC000
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DC004
  c->r[12]=R32(c->r[12]+0x00000048u); // 801DC008
  c->ctr=c->r[12]; // 801DC00C
  if (true) { c->lr=0x801DC014u; dispatch(c,c->ctr); } // 801DC010
L_801DC014:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC014
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC018
  c->lr=c->r[0]; // 801DC01C
  c->r[1]=c->r[1]+0x00000010u; // 801DC020
  return; // 801DC024
}

// fn_801DC030
void f_801DC030(Ctx* __restrict c) {
  trace_call(0x801DC030u);
  f_801DA940(c); return; // 801DC030
}

// fn_801DC040
void f_801DC040(Ctx* __restrict c) {
  trace_call(0x801DC040u);
  f_801DAE60(c); return; // 801DC040
}

// fn_801DC050
void f_801DC050(Ctx* __restrict c) {
  trace_call(0x801DC050u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 801DC050
  c->r[12]=R32(c->r[12]+0x00000010u); // 801DC054
  c->ctr=c->r[12]; // 801DC058
  if (true) { dispatch(c,c->ctr); return; } // 801DC05C
}

// fn_801DC060
void f_801DC060(Ctx* __restrict c) {
  trace_call(0x801DC060u);
  c->r[3]=R8(c->r[3]+0x00000107u); // 801DC060
  return; // 801DC064
}

// fn_801DC070
void f_801DC070(Ctx* __restrict c) {
  trace_call(0x801DC070u);
  c->r[3]=R8(c->r[3]+0x00000102u); // 801DC070
  return; // 801DC074
}

// fn_801DC080
void f_801DC080(Ctx* __restrict c) {
  trace_call(0x801DC080u);
  c->r[3]=R8(c->r[3]+0x00000101u); // 801DC080
  return; // 801DC084
}

// fn_801DC090
void f_801DC090(Ctx* __restrict c) {
  trace_call(0x801DC090u);
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801DC090
  f_801DC050(c); return; // 801DC094
}

// fn_801DC0A0
void f_801DC0A0(Ctx* __restrict c) {
  trace_call(0x801DC0A0u);
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801DC0A0
  f_801DC040(c); return; // 801DC0A4
}

// fn_801DC0B0
void f_801DC0B0(Ctx* __restrict c) {
  trace_call(0x801DC0B0u);
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801DC0B0
  f_801DC030(c); return; // 801DC0B4
}

// fn_801DC0C0
void f_801DC0C0(Ctx* __restrict c) {
  trace_call(0x801DC0C0u);
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801DC0C0
  f_801D9190(c); return; // 801DC0C4
}

// fn_801DC0D0
void f_801DC0D0(Ctx* __restrict c) {
  trace_call(0x801DC0D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC0D0
  c->r[0]=c->lr; // 801DC0D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC0D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC0DC
  c->r[31]=c->r[4]|c->r[4]; // 801DC0E0
  c->r[4]=c->r[5]|c->r[5]; // 801DC0E4
  c->r[5]=c->r[6]|c->r[6]; // 801DC0E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DC0EC
  c->r[30]=c->r[3]|c->r[3]; // 801DC0F0
  c->lr=0x801DC0F8u; f_801BB8E0(c); // 801DC0F4
  c->r[4]=0u+0x803A0000u; // 801DC0F8
  c->r[3]=c->r[30]+0x00000110u; // 801DC0FC
  c->r[4]=c->r[4]+0x000034F0u; // 801DC100
  W32(c->r[30]+0x00000000u,c->r[4]); // 801DC104
  c->lr=0x801DC10Cu; f_801D8FB0(c); // 801DC108
  c->r[5]=c->r[30]+0x00000E40u; // 801DC10C
  c->r[3]=c->r[30]+0x00000EB0u; // 801DC110
  {uint32_t ea=c->r[2]+0xFFFFA9A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC114
  cmpu(c,0,c->r[5],c->r[3]); // 801DC118
  c->r[4]=0u+0x00000000u; // 801DC11C
  W32(c->r[30]+0x00000E28u,c->r[4]); // 801DC120
  W32(c->r[30]+0x00000E2Cu,c->r[31]); // 801DC124
  {uint32_t ea=c->r[30]+0x00000E30u; WF32(ea,c->f[0]);} // 801DC128
  {uint32_t ea=c->r[30]+0x00000E34u; WF32(ea,c->f[0]);} // 801DC12C
  W32(c->r[30]+0x00000E38u,c->r[4]); // 801DC130
  W32(c->r[30]+0x00000E3Cu,c->r[4]); // 801DC134
  if (!crb(c,0)) { goto L_801DC168; } // 801DC138
  c->r[0]=c->r[3]+0x0000000Fu; // 801DC13C
  c->r[0]=c->r[0]-c->r[5]; // 801DC140
  c->r[0]=rotl(c->r[0],28)&0x0FFFFFFFu; // 801DC144
  c->ctr=c->r[0]; // 801DC148
  if (!crb(c,0)) { goto L_801DC168; } // 801DC14C
L_801DC150:;
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801DC150
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 801DC154
  W32(c->r[5]+0x00000008u,c->r[4]); // 801DC158
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801DC15C
  c->r[5]=c->r[5]+0x00000010u; // 801DC160
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC150; } // 801DC164
L_801DC168:;
  c->r[3]=c->r[30]|c->r[30]; // 801DC168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC16C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC170
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC174
  c->lr=c->r[0]; // 801DC178
  c->r[1]=c->r[1]+0x00000010u; // 801DC17C
  return; // 801DC180
}

// fn_801DC190
void f_801DC190(Ctx* __restrict c) {
  trace_call(0x801DC190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC190
  c->r[0]=c->lr; // 801DC194
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC19C
  c->r[31]=c->r[3]|c->r[3]; // 801DC1A0
  c->lr=0x801DC1A8u; f_801BBA50(c); // 801DC1A4
  c->r[0]=0u+0x00000004u; // 801DC1A8
  {uint32_t ea=c->r[2]+0xFFFFA9A0u; c->f[6]=c->ps1[6]=RF32(ea);} // 801DC1AC
  c->r[6]=0u+0x00000000u; // 801DC1B0
  {uint32_t ea=c->r[2]+0xFFFFA9A8u; c->f[5]=RF64(ea);} // 801DC1B4
  c->r[5]=0u+0x00000000u; // 801DC1B8
  {uint32_t ea=c->r[2]+0xFFFFA9A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801DC1BC
  c->r[4]=0u+0x43300000u; // 801DC1C0
  c->r[3]=0u+0x00000001u; // 801DC1C4
  c->ctr=c->r[0]; // 801DC1C8
  c->r[0]=c->r[0]|0x00000000u; // 801DC1CC
L_801DC1D0:;
  {uint32_t ea=c->r[31]+0x00000E30u; WF32(ea,c->f[6]);} // 801DC1D0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[5]); // 801DC1D4
  {uint32_t ea=c->r[31]+0x00000E34u; WF32(ea,c->f[6]);} // 801DC1D8
  W32(c->r[31]+0x00000E38u,c->r[5]); // 801DC1DC
  W32(c->r[31]+0x00000E3Cu,c->r[5]); // 801DC1E0
  if (crb(c,0)) { goto L_801DC1F0; } // 801DC1E4
  {uint32_t ea=c->r[31]+0x00000E34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC1E8
  goto L_801DC22C; // 801DC1EC
L_801DC1F0:;
  c->r[0]=c->r[5]^0x80000000u; // 801DC1F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DC1F4
  {uint32_t ea=c->r[31]+0x00000E34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC1F8
  W32(c->r[1]+0x00000008u,c->r[4]); // 801DC1FC
  {uint32_t ea=c->r[31]+0x00000E30u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DC200
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 801DC204
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC208
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801DC20C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 801DC210
  W32(c->r[1]+0x00000010u,c->r[4]); // 801DC214
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801DC218
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801DC21C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 801DC220
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801DC224
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801DC228
L_801DC22C:;
  {uint32_t ea=c->r[31]+0x00000E30u; WF32(ea,c->f[1]);} // 801DC22C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[5]); // 801DC230
  {uint32_t ea=c->r[31]+0x00000E34u; WF32(ea,c->f[0]);} // 801DC234
  W32(c->r[31]+0x00000E38u,c->r[3]); // 801DC238
  W32(c->r[31]+0x00000E3Cu,c->r[5]); // 801DC23C
  {uint32_t ea=c->r[31]+0x00000E40u; WF32(ea,c->f[6]);} // 801DC240
  {uint32_t ea=c->r[31]+0x00000E44u; WF32(ea,c->f[6]);} // 801DC244
  W32(c->r[31]+0x00000E48u,c->r[5]); // 801DC248
  W32(c->r[31]+0x00000E4Cu,c->r[5]); // 801DC24C
  if (crb(c,0)) { goto L_801DC25C; } // 801DC250
  {uint32_t ea=c->r[31]+0x00000E44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC254
  goto L_801DC298; // 801DC258
L_801DC25C:;
  c->r[0]=c->r[5]^0x80000000u; // 801DC25C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DC260
  {uint32_t ea=c->r[31]+0x00000E44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DC264
  W32(c->r[1]+0x00000008u,c->r[4]); // 801DC268
  {uint32_t ea=c->r[31]+0x00000E40u; c->f[3]=c->ps1[3]=RF32(ea);} // 801DC26C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=RF64(ea);} // 801DC270
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC274
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 801DC278
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 801DC27C
  W32(c->r[1]+0x00000010u,c->r[4]); // 801DC280
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801DC284
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 801DC288
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[5]); // 801DC28C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 801DC290
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 801DC294
L_801DC298:;
  {uint32_t ea=c->r[31]+0x00000E40u; WF32(ea,c->f[1]);} // 801DC298
  c->r[6]=c->r[6]+0x00000001u; // 801DC29C
  {uint32_t ea=c->r[31]+0x00000E44u; WF32(ea,c->f[0]);} // 801DC2A0
  W32(c->r[31]+0x00000E48u,c->r[3]); // 801DC2A4
  W32(c->r[31]+0x00000E4Cu,c->r[5]); // 801DC2A8
  c->r[31]=c->r[31]+0x00000020u; // 801DC2AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC1D0; } // 801DC2B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC2B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC2B8
  c->lr=c->r[0]; // 801DC2BC
  c->r[1]=c->r[1]+0x00000020u; // 801DC2C0
  return; // 801DC2C4
}

// fn_801DC2D0
void f_801DC2D0(Ctx* __restrict c) {
  trace_call(0x801DC2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC2D0
  c->r[0]=c->lr; // 801DC2D4
  cmps(c,0,(int32_t)c->r[4],0); // 801DC2D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC2DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC2E0
  c->r[31]=c->r[6]|c->r[6]; // 801DC2E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC2E8
  c->r[30]=c->r[5]|c->r[5]; // 801DC2EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC2F0
  c->r[29]=c->r[4]|c->r[4]; // 801DC2F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DC2F8
  c->r[28]=c->r[3]|c->r[3]; // 801DC2FC
  if (!crb(c,2)) { goto L_801DC320; } // 801DC300
  c->r[3]=0u+0x803A0000u; // 801DC304
  c->r[5]=0u+0x803A0000u; // 801DC308
  c->r[3]=c->r[3]+0x000034B0u; // 801DC30C
  c->r[4]=0u+0x0000005Au; // 801DC310
  c->r[5]=c->r[5]+0x000034C4u; // 801DC314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801DC318
  c->lr=0x801DC320u; f_80212260(c); // 801DC31C
L_801DC320:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801DC320
  c->r[3]=c->r[28]|c->r[28]; // 801DC324
  c->r[12]=R32(c->r[12]+0x00000020u); // 801DC328
  c->ctr=c->r[12]; // 801DC32C
  if (true) { c->lr=0x801DC334u; dispatch(c,c->ctr); } // 801DC330
  c->r[3]=c->r[28]|c->r[28]; // 801DC334
  c->lr=0x801DC33Cu; f_801BD130(c); // 801DC338
  c->r[7]=c->r[3]|c->r[3]; // 801DC33C
  c->r[4]=c->r[29]|c->r[29]; // 801DC340
  c->r[5]=c->r[30]|c->r[30]; // 801DC344
  c->r[6]=c->r[31]|c->r[31]; // 801DC348
  c->r[3]=c->r[28]+0x00000110u; // 801DC34C
  c->lr=0x801DC354u; f_801D92C0(c); // 801DC350
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC358
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DC35C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DC360
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DC364
  c->lr=c->r[0]; // 801DC368
  c->r[1]=c->r[1]+0x00000020u; // 801DC36C
  return; // 801DC370
}

// fn_801DC380
void f_801DC380(Ctx* __restrict c) {
  trace_call(0x801DC380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC380
  c->r[0]=c->lr; // 801DC384
  c->r[7]=c->r[4]|c->r[4]; // 801DC388
  c->r[4]=c->r[6]|c->r[6]; // 801DC38C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC390
  c->r[0]=c->r[5]|c->r[5]; // 801DC394
  c->r[5]=c->r[7]|c->r[7]; // 801DC398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC39C
  c->r[31]=c->r[3]|c->r[3]; // 801DC3A0
  c->r[6]=c->r[0]|c->r[0]; // 801DC3A4
  c->r[3]=c->r[3]+0x00000110u; // 801DC3A8
  c->lr=0x801DC3B0u; f_801D9610(c); // 801DC3AC
  cmps(c,0,(int32_t)c->r[3],0); // 801DC3B0
  if (!crb(c,2)) { goto L_801DC3C8; } // 801DC3B4
  c->r[3]=c->r[31]+0x00000110u; // 801DC3B8
  c->lr=0x801DC3C0u; f_801D9550(c); // 801DC3BC
  c->r[3]=0u+0x00000000u; // 801DC3C0
  goto L_801DC3CC; // 801DC3C4
L_801DC3C8:;
  c->r[3]=0u+0x00000001u; // 801DC3C8
L_801DC3CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC3CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC3D0
  c->lr=c->r[0]; // 801DC3D4
  c->r[1]=c->r[1]+0x00000010u; // 801DC3D8
  return; // 801DC3DC
}

