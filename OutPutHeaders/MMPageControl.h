/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface MMPageControl : XXUnknownSuperclass {
	UIImage* _activeImage;
	UIImage* _inactiveImage;
}
@property(retain, nonatomic) UIImage* inactiveImage;
@property(retain, nonatomic) UIImage* activeImage;
-(void).cxx_destruct;
-(void)setCurrentPage:(int)page;
-(void)updateDots;
@end
