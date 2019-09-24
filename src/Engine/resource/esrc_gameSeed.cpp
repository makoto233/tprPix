/*
 * ===================== esrc_gameSeed.cpp ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.06.03
 *                                        MODIFY --
 * ----------------------------------------------------------
 */
#include "esrc_gameSeed.h"
#include <memory>


namespace esrc {//------------------ namespace: esrc -------------------------//

namespace gameSeed_inn {//-------- namespace: gameSeed_inn --------------//

    std::unique_ptr<GameSeed> gameSeedUPtr; //- tmp, 游戏种子，
                            //- 暂设为：只有一个种子，且每次运行都重置

}//------------- namespace: gameSeed_inn end --------------//

void init_gameSeed(){
    gameSeed_inn::gameSeedUPtr = std::make_unique<GameSeed>();
    // not yet call gameSeed.init()...
}


GameSeed &get_gameSeed(){
    return *(gameSeed_inn::gameSeedUPtr.get());
}



}//---------------------- namespace: esrc -------------------------//


