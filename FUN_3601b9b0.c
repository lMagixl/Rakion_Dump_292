
void __thiscall FUN_3601b9b0(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_50 [28];
  undefined **local_34 [3];
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  piVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e772;
  local_c = ExceptionList;
  if (*(char *)((int)param_2 + 0xa9) != '\0') {
    ExceptionList = &local_c;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
              (local_50,s_invalid_map_set<T>_iterator_3622398c);
    local_4 = 0;
    exception::exception((exception *)local_34);
    local_4._0_1_ = 1;
    local_34[0] = &PTR_FUN_36222fb4;
    std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
    basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_28,local_50);
    local_4 = (uint)local_4._1_3_ << 8;
    local_34[0] = &PTR_FUN_36222fc4;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_34,(ThrowInfo *)&DAT_3624e620);
  }
  ExceptionList = &local_c;
  FUN_3600eb00((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0xa9) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0xa9) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0xa9) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
        *(int **)(*(int *)((int)this + 4) + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[0x2a];
      *(char *)(param_2 + 0x2a) = (char)piVar2[0x2a];
      *(char *)(piVar2 + 0x2a) = (char)iVar1;
      goto LAB_3601bb51;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0xa9) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)((int)this + 4) + 4) == piVar2) {
    *(int **)(*(int *)((int)this + 4) + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)((int)this + 4);
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0xa9) == '\0') {
      piVar3 = (int *)FUN_3600a580(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0xa9) == '\0') {
      uVar4 = FUN_3600a550((int)piVar7);
      *(undefined4 *)(iVar1 + 8) = uVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_3601bb51:
  if ((char)piVar2[0x2a] == '\x01') {
    if (piVar7 != *(int **)(*(int *)((int)this + 4) + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[0x2a] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[0x2a] == '\0') {
            *(undefined1 *)(piVar5 + 0x2a) = 1;
            *(undefined1 *)(piVar6 + 0x2a) = 0;
            FUN_3600ea00(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0xa9) == '\0') {
            if ((*(char *)(*piVar5 + 0xa8) != '\x01') || (*(char *)(piVar5[2] + 0xa8) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xa8) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xa8) = 1;
                *(undefined1 *)(piVar5 + 0x2a) = 0;
                FUN_3600ea60(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 0x2a) = (char)piVar6[0x2a];
              *(undefined1 *)(piVar6 + 0x2a) = 1;
              *(undefined1 *)(piVar5[2] + 0xa8) = 1;
              FUN_3600ea00(this,(int)piVar6);
              break;
            }
LAB_3601bc64:
            *(undefined1 *)(piVar5 + 0x2a) = 0;
          }
        }
        else {
          if ((char)piVar5[0x2a] == '\0') {
            *(undefined1 *)(piVar5 + 0x2a) = 1;
            *(undefined1 *)(piVar6 + 0x2a) = 0;
            FUN_3600ea60(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0xa9) == '\0') {
            if ((*(char *)(piVar5[2] + 0xa8) == '\x01') && (*(char *)(*piVar5 + 0xa8) == '\x01'))
            goto LAB_3601bc64;
            if (*(char *)(*piVar5 + 0xa8) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xa8) = 1;
              *(undefined1 *)(piVar5 + 0x2a) = 0;
              FUN_3600ea00(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 0x2a) = (char)piVar6[0x2a];
            *(undefined1 *)(piVar6 + 0x2a) = 1;
            *(undefined1 *)(*piVar5 + 0xa8) = 1;
            FUN_3600ea60(this,piVar6);
            break;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)((int)this + 4) + 4));
    }
    *(undefined1 *)(piVar7 + 0x2a) = 1;
  }
  if (0xf < (uint)piVar2[9]) {
    operator_delete((void *)piVar2[4]);
  }
  piVar2[9] = 0xf;
  piVar2[8] = 0;
  *(undefined1 *)(piVar2 + 4) = 0;
  operator_delete(piVar2);
  if (*(int *)((int)this + 8) != 0) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  *param_1 = param_2;
  ExceptionList = local_c;
  return;
}

