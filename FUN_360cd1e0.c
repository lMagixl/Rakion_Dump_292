
CTerrainArchive * __thiscall FUN_360cd1e0(void *this,byte param_1)

{
  CTerrainArchive::~CTerrainArchive(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

