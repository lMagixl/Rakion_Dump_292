
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __thiscall
FUN_361db5f7(void *this,uint *param_1,LPCWSTR param_2,uint param_3,int *param_4,UINT param_5,
            undefined4 param_6,LPCWSTR param_7)

{
  uint *puVar1;
  HGDIOBJ pvVar2;
  HBITMAP h;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  DWORD *pDVar8;
  int *piVar9;
  BITMAPINFO *pBVar10;
  LPCWSTR pWVar11;
  RGBQUAD *pRVar12;
  undefined4 uVar13;
  _OSVERSIONINFOA local_11c;
  int *local_88;
  LPCWSTR local_84;
  int *local_80;
  uint local_7c;
  float local_78;
  float local_74;
  BITMAPINFO local_70;
  undefined4 local_44;
  int local_40;
  UINT local_3c;
  int local_38;
  LPCWSTR local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  LPCWSTR local_10;
  uint *local_c;
  LPCWSTR local_8;
  
  piVar9 = param_4;
  if ((param_2 == (LPCWSTR)0x0) || (param_4 == (int *)0x0)) {
LAB_361db81a:
    param_1 = (uint *)0x0;
  }
  else {
    piVar7 = param_4 + 2;
    iVar5 = *param_4;
    local_20.bottom = param_4[3] - param_4[1];
    param_4 = (int *)(*piVar7 - iVar5);
    local_8 = (LPCWSTR)local_20.bottom;
    if (param_7 != (LPCWSTR)0x0) {
      local_11c.dwOSVersionInfoSize = 0x94;
      GetVersionExA(&local_11c);
      if (local_11c.dwPlatformId != 2) {
        local_c = (uint *)WideCharToMultiByte(0,0,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                              (LPBOOL)0x0);
        param_7 = (LPCWSTR)&stack0xfffffed8;
        WideCharToMultiByte(0,0,param_2,param_3,&stack0xfffffed8,(int)local_c,(LPCSTR)0x0,
                            (LPBOOL)0x0);
        param_2 = param_7;
        param_7 = (LPCWSTR)0x0;
        param_3 = (uint)local_c;
        local_20.bottom = (LONG)local_8;
      }
    }
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = (LONG)param_4;
    pvVar2 = SelectObject(*(HDC *)((int)this + 0x6c),param_1);
    if (*(int *)((int)this + 0xa8) == 0) {
      *(int *)((int)this + 0xa8) = (int)pvVar2;
    }
    if (param_7 == (LPCWSTR)0x0) {
      param_1 = (uint *)DrawTextA(*(HDC *)((int)this + 0x6c),(LPCSTR)param_2,param_3,&local_20,
                                  param_5 | 0x400);
    }
    else {
      param_1 = (uint *)DrawTextW(*(HDC *)((int)this + 0x6c),param_2,param_3,&local_20,
                                  param_5 | 0x400);
    }
    local_20.right = local_20.right - local_20.left;
    local_20.left = 0;
    local_20.bottom = local_20.bottom - local_20.top;
    local_20.top = 0;
    pWVar11 = local_8;
    if ((param_5 & 0x400) == 0) {
      if (((param_5 & 0x100) == 0) && (param_4 <= (uint)local_20.right)) {
        local_20.right = (LONG)param_4;
      }
      param_4 = (int *)local_20.right;
      local_20.right = (LONG)param_4;
      pWVar11 = (LPCWSTR)local_20.bottom;
      if (((param_5 & 0x100) == 0) &&
         (pWVar11 = (LPCWSTR)local_20.bottom, local_8 <= (uint)local_20.bottom)) {
        local_20.bottom = (LONG)local_8;
        pWVar11 = local_8;
      }
    }
    local_8 = pWVar11;
    if ((param_5 & 2) == 0) {
      local_30 = *piVar9;
      if ((param_5 & 1) != 0) {
        local_30 = (local_30 - local_20.right) + piVar9[2] >> 1;
      }
      local_28 = local_30 + local_20.right;
    }
    else {
      local_28 = piVar9[2];
      local_30 = local_28 - local_20.right;
    }
    if ((param_5 & 8) == 0) {
      local_2c = piVar9[1];
      if ((param_5 & 4) != 0) {
        local_2c = (local_2c - local_20.bottom) + piVar9[3] >> 1;
      }
      local_24 = local_2c + local_20.bottom;
    }
    else {
      local_24 = piVar9[3];
      local_2c = local_24 - local_20.bottom;
    }
    if ((param_5 & 0x400) != 0) {
      *piVar9 = local_30;
      piVar9[1] = local_2c;
      piVar9[2] = local_28;
      piVar9[3] = local_24;
      return param_1;
    }
    if ((*(int **)((int)this + 0x74) < param_4) || (*(LPCWSTR *)((int)this + 0x78) < local_8)) {
      local_10 = (LPCWSTR)0x0;
      pDVar8 = (DWORD *)((int)this + 0x70);
      pBVar10 = &local_70;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        (pBVar10->bmiHeader).biSize = *pDVar8;
        pDVar8 = pDVar8 + 1;
        pBVar10 = (BITMAPINFO *)&(pBVar10->bmiHeader).biWidth;
      }
      for (; (uint)local_70.bmiHeader.biWidth < param_4;
          local_70.bmiHeader.biWidth =
               local_70.bmiHeader.biWidth + (local_70.bmiHeader.biWidth >> 1)) {
      }
      for (; (uint)local_70.bmiHeader.biHeight < local_8;
          local_70.bmiHeader.biHeight =
               local_70.bmiHeader.biHeight + (local_70.bmiHeader.biHeight >> 1)) {
      }
      local_70.bmiHeader.biHeight = -local_70.bmiHeader.biHeight;
      h = CreateDIBSection(*(HDC *)((int)this + 0x6c),&local_70,0,&param_1,(HANDLE)0x0,0);
      if (h == (HBITMAP)0x0) goto LAB_361db81a;
      local_70.bmiHeader.biHeight = -local_70.bmiHeader.biHeight;
      SelectObject(*(HDC *)((int)this + 0x6c),h);
      DeleteObject(*(HGDIOBJ *)((int)this + 0x98));
      *(uint **)((int)this + 0xa0) = param_1;
      *(LONG *)((int)this + 0x74) = local_70.bmiHeader.biWidth;
      *(HBITMAP *)((int)this + 0x98) = h;
      *(LONG *)((int)this + 0x78) = local_70.bmiHeader.biHeight;
    }
    uVar3 = (uint)(*(ushort *)((int)this + 0x7e) >> 3);
    param_1 = *(uint **)((int)this + 0xa0);
    local_10 = (LPCWSTR)(uVar3 * (int)param_4);
    uVar3 = *(int *)((int)this + 0x74) * uVar3 + 3 & 0xfffffffc;
    local_c = (uint *)(uVar3 * (int)local_8 + (int)param_1);
    for (; param_1 < local_c; param_1 = (uint *)((int)param_1 + uVar3)) {
      puVar4 = param_1;
      for (uVar6 = (uint)local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = (uint)local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (uint *)((int)puVar4 + 1);
      }
    }
    if (param_7 == (LPCWSTR)0x0) {
      param_1 = (uint *)DrawTextA(*(HDC *)((int)this + 0x6c),(LPCSTR)param_2,param_3,&local_20,
                                  param_5);
    }
    else {
      param_1 = (uint *)DrawTextW(*(HDC *)((int)this + 0x6c),param_2,param_3,&local_20,param_5);
    }
    if (*(int *)((int)this + 0x54) != 0x15) {
      for (puVar4 = *(uint **)((int)this + 0xa0); puVar4 < local_c;
          puVar4 = (uint *)((int)puVar4 + (uVar3 - (int)local_10))) {
        puVar1 = (uint *)((int)puVar4 + (int)local_10);
        for (; puVar4 < puVar1; puVar4 = puVar4 + 1) {
          *puVar4 = *puVar4 << 0x18 | 0xffffff;
        }
      }
    }
    local_c = *(uint **)((int)this + 0x60);
    if (local_c == (uint *)0x0) {
      FUN_361db295((int)this);
    }
    param_7 = (LPCWSTR)0x0;
    if (local_8 != (LPCWSTR)0x0) {
      do {
        param_3 = *(int *)((int)this + 0x5c) + (int)param_7;
        if (local_8 < param_3) {
          param_3 = (uint)local_8;
        }
        piVar9 = (int *)0x0;
        pWVar11 = param_7;
        if (param_4 != (int *)0x0) {
          param_5 = param_3 - (int)param_7;
          do {
            local_80 = (int *)(*(int *)((int)this + 0x58) + (int)piVar9);
            if (param_4 < local_80) {
              local_80 = param_4;
            }
            local_40 = (int)local_80 - (int)piVar9;
            local_70.bmiColors[0].rgbBlue = '\0';
            local_70.bmiColors[0].rgbGreen = '\0';
            local_70.bmiColors[0].rgbRed = '\0';
            local_70.bmiColors[0].rgbReserved = '\0';
            local_44 = 0;
            local_3c = param_5;
            local_88 = piVar9;
            local_84 = pWVar11;
            local_7c = param_3;
            if (*(int *)((int)this + 0x54) == 0x15) {
              piVar7 = *(int **)((int)this + *(int *)((int)this + 8) * 4 + 0x30);
              if (*(int *)((int)this + 0x50) == 0) {
                uVar13 = 0x800;
                pRVar12 = local_70.bmiColors;
              }
              else {
                uVar13 = 0x2800;
                pRVar12 = (RGBQUAD *)0x0;
              }
              iVar5 = (**(code **)(*piVar7 + 0x24))(piVar7,&local_38,pRVar12,uVar13);
              if (iVar5 < 0) goto LAB_361dbaea;
              piVar7 = (int *)(*(int *)((int)this + 0xa0) +
                              (int)(*(int *)((int)this + 0x74) * (int)pWVar11 + (int)piVar9) * 4);
              for (param_2 = local_34; param_2 < (LPCWSTR)(local_38 * local_3c + (int)local_34);
                  param_2 = (LPCWSTR)((int)param_2 + local_38 + local_40 * -4)) {
                local_10 = param_2 + local_40 * 2;
                for (; param_2 < local_10; param_2 = param_2 + 2) {
                  *(uint *)param_2 = *piVar7 << 0x18 | 0xffffff;
                  piVar7 = piVar7 + 1;
                }
                piVar7 = piVar7 + (*(int *)((int)this + 0x74) - local_40);
                pWVar11 = param_7;
              }
              piVar7 = *(int **)((int)this + *(int *)((int)this + 8) * 4 + 0x30);
              (**(code **)(*piVar7 + 0x28))(piVar7);
            }
            else {
              iVar5 = FUN_361c1116(*(int **)((int)this + *(int *)((int)this + 8) * 4 + 0x30),0,
                                   (uint *)local_70.bmiColors,*(int *)((int)this + 0xa0),
                                   *(undefined4 *)((int)this + 0xa4),
                                   (uint)(*(ushort *)((int)this + 0x7e) >> 3) *
                                   *(int *)((int)this + 0x74),0,&local_88,2,0);
              if (iVar5 < 0) goto LAB_361dbaea;
            }
            local_78 = (float)(local_30 + (int)piVar9);
            if (local_30 + (int)piVar9 < 0) {
              local_78 = local_78 + _DAT_362265a8;
            }
            param_2 = (LPCWSTR)(local_2c + (int)pWVar11);
            local_74 = (float)(int)param_2;
            if ((int)param_2 < 0) {
              local_74 = local_74 + _DAT_362265a8;
            }
            iVar5 = (**(code **)(**(int **)((int)this + 0xc) + 0x14))
                              (*(int **)((int)this + 0xc),
                               *(undefined4 *)((int)this + *(int *)((int)this + 8) * 4 + 0x10),
                               local_70.bmiColors,0,0,0,&local_78,param_6);
            if (iVar5 < 0) goto LAB_361dbaea;
            if (*(int *)((int)this + 0x50) == 0) {
              *(uint *)((int)this + 8) = *(int *)((int)this + 8) + 1U & 7;
            }
            piVar9 = (int *)((int)piVar9 + *(int *)((int)this + 0x58));
          } while (piVar9 < param_4);
        }
        param_7 = (LPCWSTR)((int)pWVar11 + *(int *)((int)this + 0x5c));
      } while (param_7 < local_8);
    }
LAB_361dbaea:
    if (local_c == (uint *)0x0) {
      FUN_361db322((int)this);
    }
  }
  return param_1;
}

