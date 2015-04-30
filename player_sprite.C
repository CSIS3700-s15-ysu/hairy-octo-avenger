#include "player_sprite.h"
#include "image_library.h"
#include "image_sequence.h"
#include "vec2d.h"
#include "collision.h"
#include <cmath>
using namespace std;

namespace csis3700 {

  player_sprite::player_sprite(float initial_x, float initial_y) : 
    phys_sprite(initial_x, initial_y) {
  }

  bool player_sprite::is_passive() const {
    return false;
  }

  void player_sprite::set_on_ground(bool v) {
    on_ground = v;
  }

  void player_sprite::advance_by_time(double dt) {
    phys_sprite::advance_by_time(dt);
  }

  void player_sprite::resolve(const collision& collision, sprite *other) {
  }

}
