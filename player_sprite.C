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
	/**this needs done**/
  }

  bool player_sprite::is_passive() const {
    return false;
  }

  void player_sprite::set_on_ground(bool v) {
    on_ground = v;
  }

  void player_sprite::advance_by_time(double dt) {
    //advance_by_time is handled by phys_sprite
	phys_sprite::advance_by_time(dt);	
  }

  void player_sprite::resolve(const collision& collision, sprite *other) {
	/**this needs done**/
	
	//stuff from: http://www.raywenderlich.com/15230/how-to-make-a-platform-game-like-super-mario-brothers-part-1
	
	
	//check for collision -- this will be called if there's a jump or move
	//action selected
	
	//if there's a collision, move player sprite so collision is no longer
	//occurring
	
	//move player sprite to a new position (desiredPosition), check that for collisions and then have a higher level(?) update player_sprite position
  
  }

}
