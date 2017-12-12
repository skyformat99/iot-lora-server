

// Generated by slyft.io
// This code part has been generated on an "as is" basis, without warranties or conditions of any kind.

// slyftlet=c99-generic-msgpack

#ifndef tut_ACTION_H
#define tut_ACTION_H

#include "mpack/mpack.h"

struct TUT__action {
  /* true->1, false->0 */
  int32_t	read;
  /* btw. 0-1023 */
  int32_t	write;

  /**
  * Wipes contents to \0
  * @param self      pointer to target struct TUT__action
  */
  void (*TUT__action_clean)(struct TUT__action *self);

  /**
  * Given an input buffer and its size, this functions parses the elements
  * of struct TUT__action
  * @param self          pointer to target struct TUT__action
  * @param input_buf     input buffer
  * @param sz_input_buf  size of input buffer
  * @return 0=success, 1=error
  */
  int (*TUT__action_parse)(struct TUT__action *self, const uint8_t *input_buf, size_t sz_input_buf);

  /**
  * Given a msgpack reader, this functions parses the elements
  * of struct TUT__action
  * @param self          pointer to target struct TUT__action
  * @param reader        pointer to mpack reader struct
  */
  void (*TUT__action_parse_mpack)(struct TUT__action *self, mpack_reader_t *reader);

  /**
  * Given a struct TUT__action, this function serializes it into given output buffer.
  * @param self              pointer to source struct TUT__action
  * @param output_buf        output buffer
  * @param sz_output_buf     size of output buffer
  * @return Length of output buf (0=error)
  */
  size_t (*TUT__action_serialize)(const struct TUT__action *self, uint8_t *output_buf, size_t sz_output_buf);

  /**
  * Given a struct TUT__action, this function serializes it into given mpack writer.
  * @param self              pointer to source struct TUT__action
  * @param writer 	         pointer to mpack writer struct
  */
  void (*TUT__action_serialize_mpack)(const struct TUT__action *self, mpack_writer_t *writer);

};

/**
 * Initializes struct struct TUT__action. empties fields, sets function pointers
 * @param self  struct TUT__action
 */
void TUT__action_init(struct TUT__action *self);


/* ORIGINAL SCHEMA
{"$schema"=>"http://json-schema.org/draft-04/schema#", "id"=>"action", "title"=>"Actions of LoRa -> LED and Rotary", "description"=>"LED State and Rotary Value", "type"=>"object", "properties"=>{"read"=>{"type"=>"integer", "description"=>"true->1, false->0"}, "write"=>{"type"=>"integer", "description"=>"btw. 0-1023"}}, "additionalProperties"=>false}
 */
#endif		//tut_ACTION_H

