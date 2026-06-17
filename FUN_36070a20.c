
void __cdecl FUN_36070a20(undefined4 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *local_c [2];
  undefined4 *local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  do {
    if (DAT_362bfa48 < 2) {
LAB_36070bee:
      if (((DAT_362bfa48 < 4) || ((param_3 & 0x40000) != 0)) ||
         (((param_2 & 0x800) == 0 || ((param_2 & 0x4000) == 0)))) {
        if (DAT_362bfa48 < 3) {
LAB_36070d57:
          if (DAT_362c53d0 < 0) {
            DAT_362c53d0 = 0;
          }
          else if (9999 < DAT_362c53d0) {
            DAT_362c53d0 = 9999;
          }
          if (DAT_362c53e0 < 0) {
            DAT_362c53e0 = 0;
          }
          else if (9999 < DAT_362c53e0) {
            DAT_362c53e0 = 9999;
          }
          iVar5 = DAT_362c53d0;
          if (DAT_362c3a68 != 0) {
            iVar5 = DAT_362c53e0;
          }
          if (iVar5 == 0) {
            FUN_3606ff70(param_1,param_2);
            return;
          }
          do {
            if (param_1 == (undefined4 *)0x0) {
              return;
            }
            iVar1 = 0;
            puVar2 = param_1;
            puVar4 = param_1;
            puVar3 = param_1;
            if (0 < iVar5) {
              do {
                puVar4 = puVar3;
                if (puVar3 == (undefined4 *)0x0) break;
                iVar1 = iVar1 + puVar3[2];
                puVar4 = (undefined4 *)*puVar3;
                puVar2 = puVar3;
                puVar3 = puVar4;
              } while (iVar1 < iVar5);
            }
            *puVar2 = 0;
            FUN_3606ff70(param_1,param_2);
            param_1 = puVar4;
          } while( true );
        }
        if ((((char)(param_3 >> 8) < '\0') || ((param_2 & 0x800) == 0)) || ((param_2 & 4) == 0)) {
          if (((((param_3 & 0x10000) == 0) && ((param_2 & 0x800) != 0)) && ((param_2 & 4) == 0)) &&
             ((param_2 & 8) != 0)) {
            FUN_3606deb0(param_3,local_c,3,&local_4);
            param_3 = param_3 | 0x10000;
            FUN_36070a20(local_c[0],param_2,param_3);
            param_2 = param_2 & 0xfffff7f7 | 0x10000;
            param_1 = local_4;
          }
          else {
            if ((((param_3 & 0x20000) != 0) || ((param_2 & 0x1000) == 0)) ||
               (((param_2 & 2) != 0 || ((param_2 & 8) == 0)))) goto LAB_36070d57;
            FUN_3606deb0(param_3,local_c,3,&local_4);
            param_3 = param_3 | 0x20000;
            FUN_36070a20(local_c[0],param_2,param_3);
            param_2 = param_2 & 0xffffeff7 | 0x20000;
            param_1 = local_4;
          }
        }
        else {
          FUN_3606deb0(param_3,local_c,2,&local_4);
          param_3 = param_3 | 0x8000;
          FUN_36070a20(local_c[0],param_2,param_3);
          param_2 = param_2 & 0xfffff7fb | 0x8000;
          param_1 = local_4;
        }
      }
      else {
        param_2 = param_2 & 0xffffb7ff | 0x40000;
      }
    }
    else if (((((param_3 & 0x2000) == 0) && ((param_2 & 1) != 0)) && ((param_2 & 6) == 0)) &&
            ((param_2 & 8) != 0)) {
      FUN_3606de40(0,3,&local_4);
      param_3 = param_3 | 0x2000;
      FUN_36070a20(local_c[0],param_2,param_3);
      param_2 = param_2 & 0xfffffff6 | 0x2000;
      param_1 = local_4;
    }
    else if ((((param_3 & 0x800) == 0) && ((param_2 & 1) != 0)) && ((param_2 & 2) != 0)) {
      FUN_3606de40(0,1,&local_4);
      param_3 = param_3 | 0x800;
      FUN_36070a20(local_c[0],param_2,param_3);
      param_2 = param_2 & 0xfffffffc | 0x800;
      param_1 = local_4;
    }
    else if ((((param_3 & 0x1000) == 0) && ((param_2 & 1) != 0)) &&
            (((param_2 & 2) == 0 && ((param_2 & 4) != 0)))) {
      FUN_3606de40(0,2,&local_4);
      param_3 = param_3 | 0x1000;
      FUN_36070a20(local_c[0],param_2,param_3);
      param_2 = param_2 & 0xfffffffa | 0x1000;
      param_1 = local_4;
    }
    else {
      if (((((param_3 & 0x4000) != 0) || ((param_2 & 0x800) == 0)) || ((param_2 & 4) == 0)) ||
         ((param_2 & 8) == 0)) goto LAB_36070bee;
      FUN_3606de40(2,3,&local_4);
      param_3 = param_3 | 0x4000;
      FUN_36070a20(local_c[0],param_2,param_3);
      param_2 = param_2 & 0xfffffff3 | 0x4000;
      param_1 = local_4;
    }
    if (param_1 == (undefined4 *)0x0) {
      return;
    }
  } while( true );
}

