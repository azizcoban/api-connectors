=begin
#Bybit API

### REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  

OpenAPI spec version: 1.0.0
Contact: support@bybit.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.8

=end

require 'spec_helper'
require 'json'

# Unit tests for SwaggerClient::ExecutionApi
# Automatically generated by swagger-codegen (github.com/swagger-api/swagger-codegen)
# Please update as you see appropriate
describe 'ExecutionApi' do
  before do
    # run before each test
    @instance = SwaggerClient::ExecutionApi.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of ExecutionApi' do
    it 'should create an instance of ExecutionApi' do
      expect(@instance).to be_instance_of(SwaggerClient::ExecutionApi)
    end
  end

  # unit tests for execution_get_trades
  # Get user’s trade records.
  # @param [Hash] opts the optional parameters
  # @option opts [String] :order_id OrderID. If not provided, will return user’s trading records.
  # @option opts [String] :symbol Contract type. If order_id not provided, symbol is required.
  # @option opts [String] :start_time Start timestamp point for result.
  # @option opts [String] :page Page. Default getting first page data.
  # @option opts [String] :limit Limit for data size per page, max size is 50. Default as showing 20 pieces of data per page.
  # @return [Object]
  describe 'execution_get_trades test' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
