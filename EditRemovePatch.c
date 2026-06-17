
/* public: void __thiscall CEditModel::EditRemovePatch(long) */

void __thiscall CEditModel::EditRemovePatch(CEditModel *this,long param_1)

{
                    /* 0xaf3f0  1552  ?EditRemovePatch@CEditModel@@QAEXJ@Z */
  CAnimObject::SetData((CAnimObject *)(this + param_1 * 0x28 + 0xcfc),(CAnimData *)0x0);
  CalculatePatchesPerPolygon(this);
  return;
}

