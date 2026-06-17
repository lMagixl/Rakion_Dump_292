
void __thiscall
FUN_361a0790(void *this,undefined4 *param_1,
            basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = *(uint *)((int)this + 0x20);
  uVar3 = FUN_361856a0((int)param_2);
  uVar3 = uVar3 & uVar1;
  if (*(uint *)((int)this + 0x24) <= uVar3) {
    uVar3 = uVar3 + (-1 - (uVar1 >> 1));
  }
  piVar4 = *(int **)(*(int *)((int)this + 0x14) + uVar3 * 4);
  if (piVar4 != *(int **)(*(int *)((int)this + 0x14) + uVar3 * 4 + 4)) {
    do {
      bVar2 = std::operator<<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        ((basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)(piVar4 + 2),param_2);
      if (!bVar2) {
        bVar2 = std::operator<<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                    *)(piVar4 + 2));
        if (!bVar2) {
          *param_1 = piVar4;
          return;
        }
        *param_1 = *(undefined4 *)((int)this + 8);
        return;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(*(int *)((int)this + 0x14) + 4 + uVar3 * 4));
  }
  *param_1 = *(undefined4 *)((int)this + 8);
  return;
}

