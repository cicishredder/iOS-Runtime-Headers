/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCNAutoCompleteFetchResponse : SADomainCommand <SAAceSerializable>

@property (nonatomic, copy) NSArray *autoCompletedContacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteFetchResponse;
+ (id)autoCompleteFetchResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)autoCompletedContacts;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAutoCompletedContacts:(id)arg1;

@end
