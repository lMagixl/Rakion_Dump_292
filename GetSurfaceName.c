
/* public: char const * __thiscall CEditModel::GetSurfaceName(long,long) */

char * __thiscall CEditModel::GetSurfaceName(CEditModel *this,long param_1,long param_2)

{
                    /* 0xa9080  2146  ?GetSurfaceName@CEditModel@@QAEPBDJJ@Z */
  return *(char **)(param_2 * 0x70 + *(int *)(this + param_1 * 0x60 + 0x114));
}

