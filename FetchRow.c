
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTextureData::FetchRow(long,void *,long,int) */

void __thiscall
CTextureData::FetchRow(CTextureData *this,long param_1,void *param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
                    /* 0x941e0  1609  ?FetchRow@CTextureData@@QAEXJPAXJH@Z */
  if ((*(uint *)(this + 0x1c) & 0x300) == 0) {
    CPrintF(s_FetchRow____s__was_not_static_an_3622e9e8,*(undefined4 *)(this + 0xc));
    Force(this,0x300);
  }
  iVar2 = *(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f);
  iVar1 = 0;
  if (0 < iVar2) {
    pbVar3 = (byte *)(*(int *)(this + 0x60) + iVar2 * param_1 * 4 + -1 + param_3);
    do {
      if (param_4 == 0) {
        *(byte *)(iVar1 + (int)param_2) = *pbVar3;
      }
      else {
        *(float *)((int)param_2 + iVar1 * 4) = (float)*pbVar3 * _DAT_362287a4;
      }
      iVar1 = iVar1 + 1;
      pbVar3 = pbVar3 + 4;
    } while (iVar1 < *(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f));
  }
  return;
}

