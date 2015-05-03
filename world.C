#include "world.h"
#include <cassert>
#include <algorithm>
#include "sprite.h"
#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "player_sprite.h"
#include "obstruction_sprite.h"
#include "collision.h"

using namespace std;

namespace csis3700 {

  const float gravity_acceleration = 600;

  void free_sprite(sprite* s) {
    delete s;
  }

  world::world() {
  /**fill this out**/
  //load bitmaps
  //world is going to be a solid color, which I think is already handled in main (sorry, not sorry)
  
  //load platform_image
  ALLEGRO_BITMAP *platform_image = al_load_bitmap("0.png");
  
  	for (int i=0; i<10; i ++){
		x = 50 * i;
		y = 50;
		}
			
		the_sprites.push_back(new sprite(platform_image, world::WIDTH, world::HEIGHT, x, y));
		}
  
  }

  world::world(const world& other) {
    assert(false); // do not copy worlds
  }

  world& world::operator=(const world& other) {
    assert(false); // do not assign worlds
  }

  world::~world() {
    for_each(sprites.begin(), sprites.end(), free_sprite);
    sprites.clear();
  }

  void world::handle_event(ALLEGRO_EVENT ev) {
  /**fill this out**/
  }

  void world::resolve_collisions() {
	/**fill this out**/
  }

  void world::advance_by_time(double dt) {
    for(vector<sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it)
      (*it)->advance_by_time(dt);
    resolve_collisions();
  }

  void world::draw() {
    al_clear_to_color(al_map_rgb(255,255,255));
    for(vector<sprite*>::iterator it = sprites.begin(); it != sprites.end(); ++it)
      (*it)->draw();
  }

}
