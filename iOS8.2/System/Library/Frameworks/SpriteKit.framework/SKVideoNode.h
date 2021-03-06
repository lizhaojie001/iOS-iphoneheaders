/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, NSURL, AVPlayer;

@interface SKVideoNode : SKNode {

	char _isLoaded;
	NSString* _videoFileName;
	NSURL* _videoFileURL;
	AVPlayer* _player;

}

@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,retain) AVPlayer * _player;               //@synthesize player=_player - In the implementation block
+(id)videoNodeWithVideoFileNamed:(id)arg1 ;
+(id)videoNodeWithVideoURL:(id)arg1 ;
+(id)videoNodeWithAVPlayer:(id)arg1 ;
-(AVPlayer *)_player;
-(void)play;
-(id)initWithAVPlayer:(id)arg1 ;
-(char)isEqualToNode:(id)arg1 ;
-(id)initWithVideoFileNamed:(id)arg1 ;
-(void)set_player:(AVPlayer *)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned)hash;
-(id)description;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setPaused:(char)arg1 ;
-(void)pause;
-(id)initWithVideoURL:(id)arg1 ;
-(char)isPaused;
@end

