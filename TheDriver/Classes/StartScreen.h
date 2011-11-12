
#import <Foundation/Foundation.h>
#import "cocos2d.h" 
#import "HelloWorldLayer.h"
#import "SimpleAudioEngine.h" 

@interface HomeLayer : CCLayer {
    CCTMXTiledMap *map;
    CGSize windowSize; 
}

+(CCScene *) scene;

-(void) loadMap; 
-(void) loadMenu; 
-(void) loadSandStorm; 

-(void) preloadAndPlayMusic; 

@end
