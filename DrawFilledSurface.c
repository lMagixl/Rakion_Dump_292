
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEditModel::DrawFilledSurface(class CDrawPort
   *,long,long,float,long,long,unsigned long,unsigned long) */

void __thiscall
CEditModel::DrawFilledSurface
          (CEditModel *this,CDrawPort *param_1,long param_2,long param_3,float param_4,long param_5,
          long param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int local_7c;
  int local_74;
  
                    /* 0xabd20  1528  ?DrawFilledSurface@CEditModel@@QAEXPAVCDrawPort@@JJMJJKK@Z */
  local_74 = 0;
  if (0 < *(int *)(this + param_2 * 0x60 + 0xf0)) {
    local_7c = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(this + param_2 * 0x60 + 0x104) + local_7c);
      if (*(int *)(*(int *)(this + param_2 * 0x60 + 0x104) + 0x10 + local_7c) == param_3) {
        iVar2 = puVar3[1];
        fVar10 = (float)*(int *)(*(int *)(iVar2 + 0xc) + 0xc);
        fVar9 = (float)*(int *)(*(int *)(iVar2 + 0xc) + 0x10);
        uVar1 = param_7;
        if (_DAT_3622376c <=
            ((float)*(int *)(*(int *)(iVar2 + 0x14) + 0xc) - fVar10) *
            ((float)*(int *)(*(int *)(iVar2 + 4) + 0x10) - fVar9) -
            ((float)*(int *)(*(int *)(iVar2 + 4) + 0xc) - fVar10) *
            ((float)*(int *)(*(int *)(iVar2 + 0x14) + 0x10) - fVar9)) {
          uVar1 = param_8;
        }
        CDrawPort::InitTexture(param_1,(CTextureObject *)0x0,0,0xcb);
        uVar5 = FUN_361bfd6c();
        uVar6 = FUN_361bfd6c();
        iVar4 = 1;
        iVar2 = FUN_3600c1d0(puVar3);
        if (1 < iVar2 + -1) {
          do {
            uVar11 = uVar1 | 0xff;
            uVar7 = FUN_361bfd6c();
            fVar10 = (float)((int)uVar7 - param_6);
            uVar7 = FUN_361bfd6c();
            fVar9 = (float)((int)uVar7 - param_5);
            uVar7 = FUN_361bfd6c();
            fVar8 = (float)((int)uVar7 - param_6);
            uVar7 = FUN_361bfd6c();
            CDrawPort::AddTriangle
                      (param_1,(float)((int)uVar5 - param_5),(float)((int)uVar6 - param_6),
                       (float)((int)uVar7 - param_5),fVar8,fVar9,fVar10,uVar11);
            iVar4 = iVar4 + 1;
            iVar2 = FUN_3600c1d0(puVar3);
          } while (iVar4 < iVar2 + -1);
        }
        CDrawPort::FlushRenderingQueue(param_1);
      }
      local_74 = local_74 + 1;
      local_7c = local_7c + 0x1c;
    } while (local_74 < *(int *)(this + param_2 * 0x60 + 0xf0));
  }
  return;
}

