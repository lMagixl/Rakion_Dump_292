
CMesh * __thiscall FUN_36007980(void *this,byte param_1)

{
  CMesh::~CMesh(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

