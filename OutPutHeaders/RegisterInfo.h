/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface RegisterInfo : XXUnknownSuperclass <NSCoding> {
	NSString* m_nsPhoneToRegister;
}
@property(retain, nonatomic) NSString* m_nsPhoneToRegister;
+(void)RemoveRegiserInfo;
+(id)LoadRegiserInfo;
-(void).cxx_destruct;
-(void)SaveToFile;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)init;
@end
