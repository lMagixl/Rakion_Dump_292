
/* void __cdecl gfxSetBlendType(enum PredefinedBlendType) */

void __cdecl gfxSetBlendType(PredefinedBlendType param_1)

{
                    /* 0x7ad40  4215  ?gfxSetBlendType@@YAXW4PredefinedBlendType@@@Z */
  switch(param_1) {
  case 0xc9:
    (*DAT_362c45f0)();
    (*DAT_362c4628)();
                    /* WARNING: Could not recover jumptable at 0x3607ad65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c462c)();
    return;
  case 0xca:
    (*DAT_362c45f0)();
    (*DAT_362c45fc)();
                    /* WARNING: Could not recover jumptable at 0x3607ad77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c462c)();
    return;
  case 0xcb:
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x1c);
    return;
  case 0xcc:
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x19,0x17);
    return;
  case 0xcd:
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x15,0x15);
    return;
  case 0xce:
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x15);
    return;
  case 0xcf:
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x19,0x16);
    return;
  case 0xd0:
    (*DAT_362c461c)();
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x16,0x18);
  }
  return;
}

