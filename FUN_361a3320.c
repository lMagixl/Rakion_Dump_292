
void __thiscall FUN_361a3320(void *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1 ^ *(uint *)this;
  uVar2 = *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
          *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
          *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
          *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 4) ^ *param_2;
  uVar3 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 8);
  uVar2 = uVar2 ^ *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0xc);
  uVar3 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x10);
  uVar2 = uVar2 ^ *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x14);
  uVar3 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x18);
  uVar2 = uVar2 ^ *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x1c);
  uVar3 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x20);
  uVar2 = uVar2 ^ *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x24);
  uVar3 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x28);
  uVar2 = uVar2 ^ *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x2c);
  uVar3 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x30);
  uVar2 = uVar2 ^ *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x34);
  uVar3 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x38);
  uVar2 = uVar2 ^ *(int *)((int)this + (uVar3 >> 8 & 0xff) * 4 + 0x848) +
                  *(int *)((int)this + (uVar3 & 0xff) * 4 + 0xc48) ^
                  *(int *)((int)this + (uVar3 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((int)this + (uVar3 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x3c);
  uVar1 = *(uint *)((int)this + 0x44);
  *param_2 = uVar3 ^ *(int *)((int)this + (uVar2 >> 8 & 0xff) * 4 + 0x848) +
                     *(int *)((int)this + (uVar2 & 0xff) * 4 + 0xc48) ^
                     *(int *)((int)this + (uVar2 >> 0x10 & 0xff) * 4 + 0x448) +
                     *(int *)((int)this + (uVar2 >> 0x18) * 4 + 0x48) ^ *(uint *)((int)this + 0x40);
  *param_1 = uVar2 ^ uVar1;
  return;
}

