/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLQueueNode;



@interface NSURLQueue : NSObject 
{
    NSUInteger count;
    NSURLQueueNode *head;
    NSURLQueueNode *tail;
    id monitor;
    BOOL waitOnTake;
    BOOL _pad1;
    BOOL _pad2;
    BOOL _pad3;
}

+ (id)newNode;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)put:(id)arg1;
- (id)take;
- (id)peek;
- (id)peekAt:(NSUInteger)arg1;
- (BOOL)remove:(id)arg1;
- (void)clear;
- (NSInteger)indexOf:(id)arg1;
- (BOOL)isEmpty;
- (NSUInteger)count;
- (BOOL)waitOnTake;
- (void)setWaitOnTake:(BOOL)arg1;

@end