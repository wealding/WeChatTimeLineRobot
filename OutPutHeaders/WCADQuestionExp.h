/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"

@class NSMutableArray, NSArray, NSString;

@interface WCADQuestionExp : MMObject {
	NSString* nsExpId;
	NSMutableArray* aryQuestions;
	NSArray* firstStepOrder;
}
@property(retain, nonatomic) NSArray* firstStepOrder;
@property(retain, nonatomic) NSMutableArray* aryQuestions;
@property(retain, nonatomic) NSString* nsExpId;
-(void).cxx_destruct;
@end
