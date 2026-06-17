
/* WARNING: Removing unreachable block (ram,0x361872c4) */

void __thiscall
FUN_361871b0(void *this,int *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar13;
  
  uVar9 = *(uint *)((int)this + 0x24);
  if (uVar9 <= *(uint *)((int)this + 0xc) >> 2) {
    if (*(int *)((int)this + 0x14) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
    }
    if (uVar9 < iVar6 - 1U) {
      if (*(uint *)((int)this + 0x20) < uVar9) {
        *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) * 2 + 1;
      }
    }
    else {
      if (*(int *)((int)this + 0x14) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)((int)this + 0x18) - *(int *)((int)this + 0x14) >> 2;
      }
      *(int *)((int)this + 0x20) = iVar6 * 2 + -3;
      FUN_36186f00((void *)((int)this + 0x10),iVar6 * 2 - 1);
    }
    uVar9 = (*(int *)((int)this + 0x24) - (*(uint *)((int)this + 0x20) >> 1)) - 1;
    puVar12 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar9 * 4);
    if (puVar12 != *(undefined4 **)(*(int *)((int)this + 0x14) + uVar9 * 4 + 4)) {
      do {
        uVar10 = puVar12[7];
        uVar11 = 0xdeadbeef;
        if (uVar10 != 0) {
          iVar6 = (uVar10 >> 4) + 1;
          uVar8 = 0;
          do {
            if ((uint)puVar12[8] < 0x10) {
              puVar7 = puVar12 + 3;
            }
            else {
              puVar7 = (undefined4 *)puVar12[3];
            }
            pcVar1 = (char *)((int)puVar7 + uVar8);
            uVar8 = uVar8 + iVar6;
            uVar11 = uVar11 + (int)*pcVar1;
          } while (uVar8 <= uVar10 - iVar6);
        }
        if ((uVar11 & *(uint *)((int)this + 0x20)) == uVar9) {
          puVar7 = (undefined4 *)*puVar12;
        }
        else {
          puVar7 = (undefined4 *)*puVar12;
          if (puVar7 != *(undefined4 **)((int)this + 8)) {
            puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar9 * 4);
            uVar10 = uVar9;
            while ((puVar12 == puVar2 &&
                   (*(undefined4 **)(*(int *)((int)this + 0x14) + uVar10 * 4) = puVar7, uVar10 != 0)
                   )) {
              uVar10 = uVar10 - 1;
              puVar2 = *(undefined4 **)(*(int *)((int)this + 0x14) + uVar10 * 4);
            }
            iVar6 = *(int *)((int)this + 8);
            *(undefined4 **)puVar12[1] = puVar7;
            *(int *)puVar7[1] = iVar6;
            **(undefined4 **)(iVar6 + 4) = puVar12;
            uVar3 = *(undefined4 *)(iVar6 + 4);
            *(undefined4 *)(iVar6 + 4) = puVar7[1];
            puVar7[1] = puVar12[1];
            puVar12[1] = uVar3;
            puVar12 = *(undefined4 **)(*(int *)((int)this + 8) + 4);
            *(int *)(*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x24) * 4) =
                 *(int *)((int)this + 8);
          }
          for (uVar10 = *(uint *)((int)this + 0x24);
              (uVar9 < uVar10 &&
              (*(int *)(*(int *)((int)this + 0x14) + uVar10 * 4) == *(int *)((int)this + 8)));
              uVar10 = uVar10 - 1) {
            *(undefined4 **)(*(int *)((int)this + 0x14) + uVar10 * 4) = puVar12;
          }
          if (puVar7 == *(undefined4 **)((int)this + 8)) break;
        }
        puVar12 = puVar7;
      } while (puVar7 != *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + uVar9 * 4));
    }
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
  }
  uVar9 = *(uint *)(param_2 + 0x14);
  uVar10 = 0xdeadbeef;
  if (uVar9 != 0) {
    iVar6 = (uVar9 >> 4) + 1;
    uVar11 = 0;
    do {
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        pbVar13 = param_2 + 4;
      }
      else {
        pbVar13 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
                   (param_2 + 4);
      }
      pbVar13 = pbVar13 + uVar11;
      uVar11 = uVar11 + iVar6;
      uVar10 = uVar10 + (int)(char)*pbVar13;
    } while (uVar11 <= uVar9 - iVar6);
  }
  uVar10 = *(uint *)((int)this + 0x20) & uVar10;
  if (*(uint *)((int)this + 0x24) <= uVar10) {
    uVar10 = uVar10 + (-1 - (*(uint *)((int)this + 0x20) >> 1));
  }
  iVar6 = uVar10 * 4;
  puVar12 = *(undefined4 **)(*(int *)((int)this + 0x14) + 4 + iVar6);
  if (puVar12 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6)) {
    do {
      puVar12 = (undefined4 *)puVar12[1];
      bVar5 = std::operator<<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                  *)(puVar12 + 2));
      if (!bVar5) {
        bVar5 = std::operator<<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                            *)(puVar12 + 2),param_2);
        if (!bVar5) {
          *param_1 = (int)puVar12;
          *(undefined1 *)(param_1 + 1) = 0;
          return;
        }
        puVar12 = (undefined4 *)*puVar12;
        break;
      }
    } while (puVar12 != *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6));
  }
  puVar7 = FUN_36186780(puVar12,puVar12[1],param_2);
  FUN_36185d90((void *)((int)this + 4),1);
  puVar12[1] = puVar7;
  *(undefined4 **)puVar7[1] = puVar7;
  puVar7 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6);
  iVar4 = puVar12[1];
  while ((puVar12 == puVar7 && (*(int *)(*(int *)((int)this + 0x14) + iVar6) = iVar4, uVar10 != 0)))
  {
    uVar10 = uVar10 - 1;
    iVar6 = uVar10 * 4;
    puVar7 = *(undefined4 **)(*(int *)((int)this + 0x14) + iVar6);
  }
  *param_1 = iVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

