
void __thiscall FUN_361a36c0(void *this,uint *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)((int)this + 0x44) ^ *param_1;
  uVar6 = *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
          *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
          *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
          *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x40) ^ *param_2;
  uVar7 = uVar7 ^ *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x3c);
  uVar6 = uVar6 ^ *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x38);
  uVar7 = uVar7 ^ *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x34);
  uVar6 = uVar6 ^ *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x30);
  uVar7 = uVar7 ^ *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x2c);
  uVar6 = uVar6 ^ *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x28);
  uVar7 = uVar7 ^ *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x24);
  uVar6 = uVar6 ^ *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x20);
  uVar7 = uVar7 ^ *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x1c);
  uVar6 = uVar6 ^ *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x18);
  uVar7 = uVar7 ^ *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x14);
  uVar6 = uVar6 ^ *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x10);
  uVar7 = uVar7 ^ *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0xc);
  uVar6 = uVar6 ^ *(int *)((int)this + (uVar7 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar7 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar7 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar7 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 8);
  iVar1 = *(int *)((int)this + (uVar6 & 0xff) * 4 + 0xc48);
  iVar2 = *(int *)((int)this + (uVar6 >> 8 & 0xff) * 4 + 0x848);
  iVar3 = *(int *)((int)this + (uVar6 >> 0x10 & 0xff) * 4 + 0x448);
  iVar4 = *(int *)((int)this + (uVar6 >> 0x18) * 4 + 0x48);
  uVar5 = *(uint *)((int)this + 4);
  *param_1 = *(uint *)this ^ uVar6;
  *param_2 = uVar7 ^ iVar2 + iVar1 ^ iVar3 + iVar4 ^ uVar5;
  return;
}

