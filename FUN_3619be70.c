
void __cdecl FUN_3619be70(undefined2 param_1,ushort *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1) {
  case 0:
    iVar1 = lstrcmpA((LPCSTR)param_2,s_This_is_really_really_disconnect_36242f78);
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x3619bea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*DAT_3637fb00 + 0x178))();
      return;
    }
    break;
  case 4:
    FUN_36197a90((undefined1 *)param_2);
    return;
  case 5:
    FUN_36197ab0((undefined1 *)param_2);
    return;
  case 0xc:
    FUN_3619a940((char *)param_2);
    DAT_36381b20 = 1;
    if (DAT_36381b24 == 1) {
      FUN_3619b1c0(0x36371ab8);
      return;
    }
    break;
  case 0xd:
    if (DAT_36381b20 == 1) {
      FUN_3619b1c0((int)param_2);
      return;
    }
    puVar2 = &DAT_36371ab8;
    for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)param_2;
      param_2 = param_2 + 2;
      puVar2 = puVar2 + 1;
    }
    DAT_36381b24 = 1;
    return;
  case 0xe:
    FUN_36197ad0((char *)param_2);
    return;
  case 0x10:
    FUN_36197b40(param_2);
    return;
  case 0x12:
    FUN_36197b60((char *)param_2);
    return;
  case 0x13:
    FUN_36197ba0((char *)param_2);
    return;
  case 0x14:
    FUN_36197cc0((undefined1 *)param_2);
    return;
  case 0x15:
    FUN_36197d40((undefined1 *)param_2);
    return;
  case 0x16:
    FUN_36197d90((char *)param_2);
    return;
  case 0x17:
    FUN_36197e40((undefined1 *)param_2);
    return;
  case 0x18:
    FUN_36197e80((undefined1 *)param_2);
    return;
  case 0x19:
    FUN_36197f00((undefined1 *)param_2);
    return;
  case 0x1b:
    FUN_36197f70((undefined1 *)param_2);
    return;
  case 0x1c:
    FUN_36197fb0((char *)param_2);
    return;
  case 0x1d:
    FUN_36198030((byte *)param_2);
    return;
  case 0x1e:
    FUN_361980f0((undefined1 *)param_2);
    return;
  case 0x1f:
    FUN_36198240((char *)param_2);
    return;
  case 0x20:
    FUN_361982e0((undefined1 *)param_2);
    return;
  case 0x21:
    FUN_36198300((undefined1 *)param_2);
    return;
  case 0x22:
    FUN_36198330((undefined1 *)param_2);
    return;
  case 0x25:
    FUN_361983a0((LPCSTR)param_2);
    return;
  case 0x26:
    FUN_361983e0((LPCSTR)param_2);
    return;
  case 0x27:
    FUN_36198420((undefined1 *)param_2);
    return;
  case 0x28:
    FUN_36198440((undefined1 *)param_2);
    return;
  case 0x29:
    FUN_36198460(param_2);
    return;
  case 0x2a:
    FUN_36198480(param_2);
    return;
  case 0x2c:
    FUN_361984a0((undefined1 *)param_2);
    return;
  case 0x2d:
    FUN_36198530((undefined1 *)param_2);
    return;
  case 0x2e:
    FUN_36198550((char *)param_2);
    return;
  case 0x2f:
    FUN_36198630((undefined1 *)param_2);
    return;
  case 0x31:
    FUN_361987a0((undefined1 *)param_2);
    return;
  case 0x32:
    FUN_36198830((undefined1 *)param_2);
    return;
  case 0x33:
    FUN_36198870((undefined1 *)param_2);
    return;
  case 0x34:
    FUN_361988b0((undefined1 *)param_2);
    return;
  case 0x35:
    FUN_361988f0((undefined1 *)param_2);
    return;
  case 0x36:
    FUN_36198b60((byte *)param_2);
    return;
  case 0x37:
    FUN_3619b830(param_2);
    return;
  case 0x38:
    FUN_3619bc30((char *)param_2);
    return;
  case 0x39:
    FUN_36198cc0();
    return;
  case 0x3a:
    FUN_36198cd0((undefined1 *)param_2);
    return;
  case 0x3b:
    FUN_36198cf0((undefined1 *)param_2);
    return;
  case 0x3c:
    FUN_36198d80((undefined1 *)param_2);
    return;
  case 0x3d:
    FUN_36198da0((undefined1 *)param_2);
    return;
  case 0x3e:
    FUN_36198dd0((undefined1 *)param_2);
    return;
  case 0x41:
    FUN_36198e10((LPCSTR)param_2);
    return;
  case 0x42:
    FUN_36198f10((undefined1 *)param_2);
    return;
  case 0x43:
    FUN_36198f40((undefined1 *)param_2);
    return;
  case 0x44:
    FUN_36198f60((undefined1 *)param_2);
    return;
  case 0x45:
    FUN_36198f80((undefined1 *)param_2);
    return;
  case 0x46:
    FUN_36198fb0((undefined1 *)param_2);
    return;
  case 0x47:
    FUN_36198fd0((undefined1 *)param_2);
    return;
  case 0x48:
    FUN_361990a0((undefined1 *)param_2);
    return;
  case 0x49:
    FUN_36199100((undefined1 *)param_2);
    return;
  case 0x4a:
    FUN_36199140((undefined1 *)param_2);
    return;
  case 0x4b:
    FUN_36199030((undefined1 *)param_2);
    return;
  case 0x4e:
    FUN_36199190();
    return;
  case 0x4f:
    FUN_361991a0((undefined1 *)param_2);
    return;
  case 0x51:
    FUN_361993c0((undefined1 *)param_2);
    return;
  case 0x52:
    FUN_361993f0((undefined1 *)param_2);
    return;
  case 0x53:
    FUN_36199450((char *)param_2);
    return;
  case 0x54:
    FUN_361994e0();
    return;
  case 0x55:
    FUN_361994f0();
    return;
  case 0x57:
    FUN_36199500(param_2);
    return;
  case 0x58:
    FUN_36199560((undefined4 *)param_2);
    return;
  case 0x59:
    FUN_36199580(param_2);
    return;
  case 0x5a:
    FUN_361995a0((undefined1 *)param_2);
    return;
  case 0x5c:
    FUN_361995d0((LPCSTR)param_2);
    return;
  case 0x5d:
    FUN_36199620((undefined1 *)param_2);
    return;
  case 0x5f:
    FUN_36199690((char *)param_2);
    return;
  case 0x61:
    FUN_36199870((undefined4 *)param_2);
    return;
  case 0x62:
    FUN_361997d0((undefined1 *)param_2);
    return;
  case 99:
    FUN_36199720((LPCSTR)param_2);
    return;
  case 0x67:
    FUN_36199360();
    return;
  case 0x68:
    FUN_36199370();
    return;
  case 0x69:
    FUN_36199380(param_2);
    return;
  case 0x6a:
    FUN_361993a0(param_2);
    return;
  case 0x6b:
    FUN_361997f0((undefined1 *)param_2);
    return;
  case 0x6c:
    FUN_36199820((undefined1 *)param_2);
    return;
  case 0x6d:
    FUN_36199850((undefined1 *)param_2);
    return;
  case 0x6f:
    FUN_36198930((char *)param_2);
    return;
  case 0x70:
    FUN_36198980((undefined1 *)param_2);
    return;
  case 0x71:
    FUN_361989b0((undefined1 *)param_2);
    return;
  case 0x72:
    FUN_36199200(param_2);
    return;
  case 0x73:
    FUN_36199340((undefined1 *)param_2);
    return;
  case 0x74:
    FUN_361998c0((byte *)param_2);
    break;
  case 0x75:
    FUN_361989e0((char *)param_2);
    return;
  case 0x76:
    FUN_36198a20((char *)param_2);
    return;
  case 0x77:
    FUN_36198ac0((undefined4 *)param_2);
    return;
  case 0x78:
    FUN_3619a820((char *)param_2);
    return;
  case 0x79:
    FUN_36198b20((undefined1 *)param_2);
    return;
  case 0x7b:
                    /* WARNING: Could not recover jumptable at 0x3619a2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_3637fb00 + 0x318))();
    return;
  }
  return;
}

